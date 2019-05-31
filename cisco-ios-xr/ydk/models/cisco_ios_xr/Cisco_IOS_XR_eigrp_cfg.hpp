#ifndef _CISCO_IOS_XR_EIGRP_CFG_
#define _CISCO_IOS_XR_EIGRP_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_eigrp_cfg {

class Eigrp : public ydk::Entity
{
    public:
        Eigrp();
        ~Eigrp();

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

        class Processes; //type: Eigrp::Processes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes> processes;
        
}; // Eigrp


class Eigrp::Processes : public ydk::Entity
{
    public:
        Processes();
        ~Processes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Process; //type: Eigrp::Processes::Process

        ydk::YList process;
        
}; // Eigrp::Processes


class Eigrp::Processes::Process : public ydk::Entity
{
    public:
        Process();
        ~Process();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf process_id; //type: string
        ydk::YLeaf nsf_disable; //type: empty
        class Vrfs; //type: Eigrp::Processes::Process::Vrfs
        class DefaultVrf; //type: Eigrp::Processes::Process::DefaultVrf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::Vrfs> vrfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::DefaultVrf> default_vrf;
        
}; // Eigrp::Processes::Process


class Eigrp::Processes::Process::Vrfs : public ydk::Entity
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

        class Vrf; //type: Eigrp::Processes::Process::Vrfs::Vrf

        ydk::YList vrf;
        
}; // Eigrp::Processes::Process::Vrfs


class Eigrp::Processes::Process::Vrfs::Vrf : public ydk::Entity
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
        ydk::YLeaf enable; //type: empty
        class Afs; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::Vrfs::Vrf::Afs> afs;
        
}; // Eigrp::Processes::Process::Vrfs::Vrf


class Eigrp::Processes::Process::Vrfs::Vrf::Afs : public ydk::Entity
{
    public:
        Afs();
        ~Afs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Af; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af

        ydk::YList af;
        
}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af : public ydk::Entity
{
    public:
        Af();
        ~Af();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: EigrpAf
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf auto_summary; //type: empty
        ydk::YLeaf maximum_paths; //type: uint32
        ydk::YLeaf router_id; //type: string
        ydk::YLeaf log_neighbor_warnings; //type: empty
        ydk::YLeaf autonomous_system; //type: uint32
        ydk::YLeaf variance; //type: uint32
        ydk::YLeaf nsf_disable; //type: empty
        ydk::YLeaf passive_interface_default; //type: empty
        ydk::YLeaf log_neighbor_changes; //type: empty
        class AllNeighborsMaximumPrefix; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::AllNeighborsMaximumPrefix
        class RedistMaximumPrefix; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::RedistMaximumPrefix
        class NeighborMaximumPrefixes; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::NeighborMaximumPrefixes
        class MaximumPrefix; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::MaximumPrefix
        class Stub; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Stub
        class Redistributes; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes
        class FilterPolicies; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::FilterPolicies
        class DefaultMetric; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultMetric
        class Metrics; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Metrics
        class Timers; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Timers
        class DefaultAccepts; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultAccepts
        class Interfaces; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces
        class Distance; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Distance

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::AllNeighborsMaximumPrefix> all_neighbors_maximum_prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::RedistMaximumPrefix> redist_maximum_prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::NeighborMaximumPrefixes> neighbor_maximum_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::MaximumPrefix> maximum_prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Stub> stub; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes> redistributes; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::FilterPolicies> filter_policies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultMetric> default_metric;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Metrics> metrics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Timers> timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultAccepts> default_accepts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Distance> distance;
        
}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::AllNeighborsMaximumPrefix : public ydk::Entity
{
    public:
        AllNeighborsMaximumPrefix();
        ~AllNeighborsMaximumPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefix; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf dampened; //type: boolean
        ydk::YLeaf reset_time; //type: uint32
        ydk::YLeaf restart; //type: uint32
        ydk::YLeaf restart_count; //type: uint32
        ydk::YLeaf warning_only; //type: boolean

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::AllNeighborsMaximumPrefix


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::RedistMaximumPrefix : public ydk::Entity
{
    public:
        RedistMaximumPrefix();
        ~RedistMaximumPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefix; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf dampened; //type: uint32
        ydk::YLeaf reset_time; //type: uint32
        ydk::YLeaf restart; //type: uint32
        ydk::YLeaf restart_count; //type: uint32
        ydk::YLeaf warning_only; //type: boolean

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::RedistMaximumPrefix


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::NeighborMaximumPrefixes : public ydk::Entity
{
    public:
        NeighborMaximumPrefixes();
        ~NeighborMaximumPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NeighborMaximumPrefix; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::NeighborMaximumPrefixes::NeighborMaximumPrefix

        ydk::YList neighbor_maximum_prefix;
        
}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::NeighborMaximumPrefixes


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::NeighborMaximumPrefixes::NeighborMaximumPrefix : public ydk::Entity
{
    public:
        NeighborMaximumPrefix();
        ~NeighborMaximumPrefix();

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
        ydk::YLeaf max_prefix; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf warning_only; //type: boolean

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::NeighborMaximumPrefixes::NeighborMaximumPrefix


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::MaximumPrefix : public ydk::Entity
{
    public:
        MaximumPrefix();
        ~MaximumPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefix; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf dampened; //type: boolean
        ydk::YLeaf reset_time; //type: uint32
        ydk::YLeaf restart; //type: uint32
        ydk::YLeaf restart_count; //type: uint32
        ydk::YLeaf warning_only; //type: boolean

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::MaximumPrefix


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Stub : public ydk::Entity
{
    public:
        Stub();
        ~Stub();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: EigrpStub
        ydk::YLeaf connected; //type: boolean
        ydk::YLeaf redistributed; //type: boolean
        ydk::YLeaf static_; //type: boolean
        ydk::YLeaf summary; //type: boolean

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Stub


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes : public ydk::Entity
{
    public:
        Redistributes();
        ~Redistributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Redistribute; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::Redistribute
        class RedistributeAsXx; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXx
        class RedistributeAsYy; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsYy
        class RedistributeAsXxAsYy; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxAsYy
        class RedistributeTagName; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeTagName
        class RedistributeAsXxTagName; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxTagName
        class RedistributeAsYyTagName; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsYyTagName
        class RedistributeAsXxAsYyTagName; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxAsYyTagName

        ydk::YList redistribute;
        ydk::YList redistribute_as_xx;
        ydk::YList redistribute_as_yy;
        ydk::YList redistribute_as_xx_as_yy;
        ydk::YList redistribute_tag_name;
        ydk::YList redistribute_as_xx_tag_name;
        ydk::YList redistribute_as_yy_tag_name;
        ydk::YList redistribute_as_xx_as_yy_tag_name;
        
}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::Redistribute : public ydk::Entity
{
    public:
        Redistribute();
        ~Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_name; //type: EigrpRedistProto
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf policy_specified; //type: boolean

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::Redistribute


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXx : public ydk::Entity
{
    public:
        RedistributeAsXx();
        ~RedistributeAsXx();

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
        ydk::YLeaf protocol_name; //type: EigrpRedistProto
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf policy_specified; //type: boolean

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXx


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsYy : public ydk::Entity
{
    public:
        RedistributeAsYy();
        ~RedistributeAsYy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_yy; //type: uint32
        ydk::YLeaf protocol_name; //type: EigrpRedistProto
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf policy_specified; //type: boolean

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsYy


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxAsYy : public ydk::Entity
{
    public:
        RedistributeAsXxAsYy();
        ~RedistributeAsXxAsYy();

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
        ydk::YLeaf protocol_name; //type: EigrpRedistProto
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf policy_specified; //type: boolean

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxAsYy


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeTagName : public ydk::Entity
{
    public:
        RedistributeTagName();
        ~RedistributeTagName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tag_name; //type: string
        ydk::YLeaf protocol_name; //type: EigrpRedistProto
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf policy_specified; //type: boolean

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeTagName


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxTagName : public ydk::Entity
{
    public:
        RedistributeAsXxTagName();
        ~RedistributeAsXxTagName();

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
        ydk::YLeaf tag_name; //type: string
        ydk::YLeaf protocol_name; //type: EigrpRedistProto
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf policy_specified; //type: boolean

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxTagName


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsYyTagName : public ydk::Entity
{
    public:
        RedistributeAsYyTagName();
        ~RedistributeAsYyTagName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_yy; //type: uint32
        ydk::YLeaf tag_name; //type: string
        ydk::YLeaf protocol_name; //type: EigrpRedistProto
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf policy_specified; //type: boolean

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsYyTagName


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxAsYyTagName : public ydk::Entity
{
    public:
        RedistributeAsXxAsYyTagName();
        ~RedistributeAsXxAsYyTagName();

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
        ydk::YLeaf tag_name; //type: string
        ydk::YLeaf protocol_name; //type: EigrpRedistProto
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf policy_specified; //type: boolean

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxAsYyTagName


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::FilterPolicies : public ydk::Entity
{
    public:
        FilterPolicies();
        ~FilterPolicies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FilterPolicy; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::FilterPolicies::FilterPolicy

        ydk::YList filter_policy;
        
}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::FilterPolicies


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::FilterPolicies::FilterPolicy : public ydk::Entity
{
    public:
        FilterPolicy();
        ~FilterPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: EigrpDir
        ydk::YLeaf policy_name; //type: string

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::FilterPolicies::FilterPolicy


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultMetric : public ydk::Entity
{
    public:
        DefaultMetric();
        ~DefaultMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf delay; //type: uint32
        ydk::YLeaf reliability; //type: uint32
        ydk::YLeaf load; //type: uint32
        ydk::YLeaf mtu; //type: uint32

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultMetric


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Metrics : public ydk::Entity
{
    public:
        Metrics();
        ~Metrics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Metric; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Metrics::Metric

        ydk::YList metric;
        
}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Metrics


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Metrics::Metric : public ydk::Entity
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

        ydk::YLeaf metric_name; //type: EigrpMet
        ydk::YLeaf max_hops; //type: uint32
        ydk::YLeaf tos; //type: uint32
        ydk::YLeaf k1; //type: uint32
        ydk::YLeaf k2; //type: uint32
        ydk::YLeaf k3; //type: uint32
        ydk::YLeaf k4; //type: uint32
        ydk::YLeaf k5; //type: uint32
        ydk::YLeaf k6; //type: uint32
        ydk::YLeaf rib_scale; //type: uint32
        ydk::YLeaf metric_version; //type: EigrpMetricVersion

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Metrics::Metric


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Timers : public ydk::Entity
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

        class Timer; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Timers::Timer

        ydk::YList timer;
        
}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Timers


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Timers::Timer : public ydk::Entity
{
    public:
        Timer();
        ~Timer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timer_type; //type: EigrpTimer
        ydk::YLeaf active_time; //type: uint32
        ydk::YLeaf hold_time; //type: uint32
        ydk::YLeaf signal_time; //type: uint32
        ydk::YLeaf converge_time; //type: uint32

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Timers::Timer


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultAccepts : public ydk::Entity
{
    public:
        DefaultAccepts();
        ~DefaultAccepts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DefaultAccept; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultAccepts::DefaultAccept

        ydk::YList default_accept;
        
}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultAccepts


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultAccepts::DefaultAccept : public ydk::Entity
{
    public:
        DefaultAccept();
        ~DefaultAccept();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: EigrpDir
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf policy_specified; //type: boolean

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultAccepts::DefaultAccept


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface

        ydk::YList interface;
        
}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf hold_time; //type: uint32
        ydk::YLeaf bandwidth_percent; //type: uint32
        ydk::YLeaf passive_interface; //type: boolean
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf next_hop_self; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf split_horizon; //type: empty
        class InterfaceMetric; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceMetric
        class RemoteNeighbor; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::RemoteNeighbor
        class Bfd; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Bfd
        class SiteOfOrigin; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SiteOfOrigin
        class Authentication; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Authentication
        class SummaryAddresses; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SummaryAddresses
        class InterfaceFilterPolicies; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceFilterPolicies
        class InterfaceStaticNeighbors; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceStaticNeighbors

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceMetric> interface_metric;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::RemoteNeighbor> remote_neighbor; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SiteOfOrigin> site_of_origin;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SummaryAddresses> summary_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceFilterPolicies> interface_filter_policies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceStaticNeighbors> interface_static_neighbors;
        
}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceMetric : public ydk::Entity
{
    public:
        InterfaceMetric();
        ~InterfaceMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf delay; //type: uint32
        ydk::YLeaf delay_unit; //type: EigrpDelayUnit
        ydk::YLeaf reliability; //type: uint32
        ydk::YLeaf load; //type: uint32

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceMetric


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::RemoteNeighbor : public ydk::Entity
{
    public:
        RemoteNeighbor();
        ~RemoteNeighbor();

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
        ydk::YLeaf allow_list; //type: string
        ydk::YLeaf max_neighbors; //type: uint32

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::RemoteNeighbor


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Bfd : public ydk::Entity
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

        ydk::YLeaf fast_detect; //type: boolean
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf interval; //type: uint32

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Bfd


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SiteOfOrigin : public ydk::Entity
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

        ydk::YLeaf type; //type: EigrpSoo
        ydk::YLeaf as_xx; //type: uint32
        ydk::YLeaf as_yy; //type: uint32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf address_index; //type: uint32

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SiteOfOrigin


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf keychain; //type: string

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Authentication


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SummaryAddresses : public ydk::Entity
{
    public:
        SummaryAddresses();
        ~SummaryAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SummaryAddress; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SummaryAddresses::SummaryAddress

        ydk::YList summary_address;
        
}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SummaryAddresses


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SummaryAddresses::SummaryAddress : public ydk::Entity
{
    public:
        SummaryAddress();
        ~SummaryAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf summary_address_addr; //type: string
        ydk::YLeaf summary_address_prefix; //type: uint16
        ydk::YLeaf distance; //type: uint32

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SummaryAddresses::SummaryAddress


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceFilterPolicies : public ydk::Entity
{
    public:
        InterfaceFilterPolicies();
        ~InterfaceFilterPolicies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceFilterPolicy; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceFilterPolicies::InterfaceFilterPolicy

        ydk::YList interface_filter_policy;
        
}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceFilterPolicies


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceFilterPolicies::InterfaceFilterPolicy : public ydk::Entity
{
    public:
        InterfaceFilterPolicy();
        ~InterfaceFilterPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: EigrpDir
        ydk::YLeaf policy_name; //type: string

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceFilterPolicies::InterfaceFilterPolicy


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceStaticNeighbors : public ydk::Entity
{
    public:
        InterfaceStaticNeighbors();
        ~InterfaceStaticNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceStaticNeighbor; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceStaticNeighbors::InterfaceStaticNeighbor

        ydk::YList interface_static_neighbor;
        
}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceStaticNeighbors


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceStaticNeighbors::InterfaceStaticNeighbor : public ydk::Entity
{
    public:
        InterfaceStaticNeighbor();
        ~InterfaceStaticNeighbor();

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
        ydk::YLeaf max_hops; //type: uint32

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceStaticNeighbors::InterfaceStaticNeighbor


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Distance : public ydk::Entity
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

        ydk::YLeaf internal_distance; //type: uint32
        ydk::YLeaf external_distance; //type: uint32

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Distance


class Eigrp::Processes::Process::DefaultVrf : public ydk::Entity
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

        ydk::YLeaf enable; //type: empty
        class DefaultAfs; //type: Eigrp::Processes::Process::DefaultVrf::DefaultAfs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::DefaultVrf::DefaultAfs> default_afs;
        
}; // Eigrp::Processes::Process::DefaultVrf


class Eigrp::Processes::Process::DefaultVrf::DefaultAfs : public ydk::Entity
{
    public:
        DefaultAfs();
        ~DefaultAfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DefaultAf; //type: Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf

        ydk::YList default_af;
        
}; // Eigrp::Processes::Process::DefaultVrf::DefaultAfs


class Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf : public ydk::Entity
{
    public:
        DefaultAf();
        ~DefaultAf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: EigrpAf
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf auto_summary; //type: empty
        ydk::YLeaf maximum_paths; //type: uint32
        ydk::YLeaf router_id; //type: string
        ydk::YLeaf log_neighbor_warnings; //type: empty
        ydk::YLeaf autonomous_system; //type: uint32
        ydk::YLeaf variance; //type: uint32
        ydk::YLeaf nsf_disable; //type: empty
        ydk::YLeaf passive_interface_default; //type: empty
        ydk::YLeaf log_neighbor_changes; //type: empty
        class Stub; //type: Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Stub
        class Redistributes; //type: Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes
        class FilterPolicies; //type: Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::FilterPolicies
        class DefaultMetric; //type: Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultMetric
        class Metrics; //type: Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Metrics
        class Timers; //type: Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Timers
        class DefaultAccepts; //type: Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultAccepts
        class Interfaces; //type: Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces
        class Distance; //type: Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Distance

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Stub> stub; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes> redistributes; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::FilterPolicies> filter_policies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultMetric> default_metric;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Metrics> metrics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Timers> timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultAccepts> default_accepts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Distance> distance;
        
}; // Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf


class Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Stub : public ydk::Entity
{
    public:
        Stub();
        ~Stub();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: EigrpStub
        ydk::YLeaf connected; //type: boolean
        ydk::YLeaf redistributed; //type: boolean
        ydk::YLeaf static_; //type: boolean
        ydk::YLeaf summary; //type: boolean

}; // Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Stub


class Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes : public ydk::Entity
{
    public:
        Redistributes();
        ~Redistributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Redistribute; //type: Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::Redistribute
        class RedistributeAsXx; //type: Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXx
        class RedistributeAsYy; //type: Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsYy
        class RedistributeAsXxAsYy; //type: Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxAsYy
        class RedistributeTagName; //type: Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeTagName
        class RedistributeAsXxTagName; //type: Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxTagName
        class RedistributeAsYyTagName; //type: Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsYyTagName
        class RedistributeAsXxAsYyTagName; //type: Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxAsYyTagName

        ydk::YList redistribute;
        ydk::YList redistribute_as_xx;
        ydk::YList redistribute_as_yy;
        ydk::YList redistribute_as_xx_as_yy;
        ydk::YList redistribute_tag_name;
        ydk::YList redistribute_as_xx_tag_name;
        ydk::YList redistribute_as_yy_tag_name;
        ydk::YList redistribute_as_xx_as_yy_tag_name;
        
}; // Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes


class Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::Redistribute : public ydk::Entity
{
    public:
        Redistribute();
        ~Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_name; //type: EigrpRedistProto
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf policy_specified; //type: boolean

}; // Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::Redistribute


class Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXx : public ydk::Entity
{
    public:
        RedistributeAsXx();
        ~RedistributeAsXx();

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
        ydk::YLeaf protocol_name; //type: EigrpRedistProto
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf policy_specified; //type: boolean

}; // Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXx


class Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsYy : public ydk::Entity
{
    public:
        RedistributeAsYy();
        ~RedistributeAsYy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_yy; //type: uint32
        ydk::YLeaf protocol_name; //type: EigrpRedistProto
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf policy_specified; //type: boolean

}; // Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsYy


class Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxAsYy : public ydk::Entity
{
    public:
        RedistributeAsXxAsYy();
        ~RedistributeAsXxAsYy();

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
        ydk::YLeaf protocol_name; //type: EigrpRedistProto
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf policy_specified; //type: boolean

}; // Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxAsYy


class Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeTagName : public ydk::Entity
{
    public:
        RedistributeTagName();
        ~RedistributeTagName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tag_name; //type: string
        ydk::YLeaf protocol_name; //type: EigrpRedistProto
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf policy_specified; //type: boolean

}; // Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeTagName


class Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxTagName : public ydk::Entity
{
    public:
        RedistributeAsXxTagName();
        ~RedistributeAsXxTagName();

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
        ydk::YLeaf tag_name; //type: string
        ydk::YLeaf protocol_name; //type: EigrpRedistProto
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf policy_specified; //type: boolean

}; // Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxTagName


class Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsYyTagName : public ydk::Entity
{
    public:
        RedistributeAsYyTagName();
        ~RedistributeAsYyTagName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_yy; //type: uint32
        ydk::YLeaf tag_name; //type: string
        ydk::YLeaf protocol_name; //type: EigrpRedistProto
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf policy_specified; //type: boolean

}; // Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsYyTagName


class Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxAsYyTagName : public ydk::Entity
{
    public:
        RedistributeAsXxAsYyTagName();
        ~RedistributeAsXxAsYyTagName();

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
        ydk::YLeaf tag_name; //type: string
        ydk::YLeaf protocol_name; //type: EigrpRedistProto
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf policy_specified; //type: boolean

}; // Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxAsYyTagName


class Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::FilterPolicies : public ydk::Entity
{
    public:
        FilterPolicies();
        ~FilterPolicies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FilterPolicy; //type: Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::FilterPolicies::FilterPolicy

        ydk::YList filter_policy;
        
}; // Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::FilterPolicies


class Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::FilterPolicies::FilterPolicy : public ydk::Entity
{
    public:
        FilterPolicy();
        ~FilterPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: EigrpDir
        ydk::YLeaf policy_name; //type: string

}; // Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::FilterPolicies::FilterPolicy


class Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultMetric : public ydk::Entity
{
    public:
        DefaultMetric();
        ~DefaultMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf delay; //type: uint32
        ydk::YLeaf reliability; //type: uint32
        ydk::YLeaf load; //type: uint32
        ydk::YLeaf mtu; //type: uint32

}; // Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultMetric


class Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Metrics : public ydk::Entity
{
    public:
        Metrics();
        ~Metrics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Metric; //type: Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Metrics::Metric

        ydk::YList metric;
        
}; // Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Metrics


class Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Metrics::Metric : public ydk::Entity
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

        ydk::YLeaf metric_name; //type: EigrpMet
        ydk::YLeaf max_hops; //type: uint32
        ydk::YLeaf tos; //type: uint32
        ydk::YLeaf k1; //type: uint32
        ydk::YLeaf k2; //type: uint32
        ydk::YLeaf k3; //type: uint32
        ydk::YLeaf k4; //type: uint32
        ydk::YLeaf k5; //type: uint32
        ydk::YLeaf k6; //type: uint32
        ydk::YLeaf rib_scale; //type: uint32
        ydk::YLeaf metric_version; //type: EigrpMetricVersion

}; // Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Metrics::Metric


class Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Timers : public ydk::Entity
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

        class Timer; //type: Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Timers::Timer

        ydk::YList timer;
        
}; // Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Timers


class Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Timers::Timer : public ydk::Entity
{
    public:
        Timer();
        ~Timer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timer_type; //type: EigrpTimer
        ydk::YLeaf active_time; //type: uint32
        ydk::YLeaf hold_time; //type: uint32
        ydk::YLeaf signal_time; //type: uint32
        ydk::YLeaf converge_time; //type: uint32

}; // Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Timers::Timer


class Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultAccepts : public ydk::Entity
{
    public:
        DefaultAccepts();
        ~DefaultAccepts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DefaultAccept; //type: Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultAccepts::DefaultAccept

        ydk::YList default_accept;
        
}; // Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultAccepts


class Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultAccepts::DefaultAccept : public ydk::Entity
{
    public:
        DefaultAccept();
        ~DefaultAccept();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: EigrpDir
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf policy_specified; //type: boolean

}; // Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultAccepts::DefaultAccept


class Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface

        ydk::YList interface;
        
}; // Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces


class Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf hold_time; //type: uint32
        ydk::YLeaf bandwidth_percent; //type: uint32
        ydk::YLeaf passive_interface; //type: boolean
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf next_hop_self; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf split_horizon; //type: empty
        class InterfaceMetric; //type: Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceMetric
        class RemoteNeighbor; //type: Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::RemoteNeighbor
        class Bfd; //type: Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::Bfd
        class SiteOfOrigin; //type: Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SiteOfOrigin
        class Authentication; //type: Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::Authentication
        class SummaryAddresses; //type: Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SummaryAddresses
        class InterfaceFilterPolicies; //type: Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceFilterPolicies
        class InterfaceStaticNeighbors; //type: Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceStaticNeighbors

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceMetric> interface_metric;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::RemoteNeighbor> remote_neighbor; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SiteOfOrigin> site_of_origin;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SummaryAddresses> summary_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceFilterPolicies> interface_filter_policies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_cfg::Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceStaticNeighbors> interface_static_neighbors;
        
}; // Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface


class Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceMetric : public ydk::Entity
{
    public:
        InterfaceMetric();
        ~InterfaceMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf delay; //type: uint32
        ydk::YLeaf delay_unit; //type: EigrpDelayUnit
        ydk::YLeaf reliability; //type: uint32
        ydk::YLeaf load; //type: uint32

}; // Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceMetric


class Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::RemoteNeighbor : public ydk::Entity
{
    public:
        RemoteNeighbor();
        ~RemoteNeighbor();

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
        ydk::YLeaf allow_list; //type: string
        ydk::YLeaf max_neighbors; //type: uint32

}; // Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::RemoteNeighbor


class Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::Bfd : public ydk::Entity
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

        ydk::YLeaf fast_detect; //type: boolean
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf interval; //type: uint32

}; // Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::Bfd


class Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SiteOfOrigin : public ydk::Entity
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

        ydk::YLeaf type; //type: EigrpSoo
        ydk::YLeaf as_xx; //type: uint32
        ydk::YLeaf as_yy; //type: uint32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf address_index; //type: uint32

}; // Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SiteOfOrigin


class Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf keychain; //type: string

}; // Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::Authentication


class Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SummaryAddresses : public ydk::Entity
{
    public:
        SummaryAddresses();
        ~SummaryAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SummaryAddress; //type: Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SummaryAddresses::SummaryAddress

        ydk::YList summary_address;
        
}; // Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SummaryAddresses


class Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SummaryAddresses::SummaryAddress : public ydk::Entity
{
    public:
        SummaryAddress();
        ~SummaryAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf summary_address_addr; //type: string
        ydk::YLeaf summary_address_prefix; //type: uint16
        ydk::YLeaf distance; //type: uint32

}; // Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SummaryAddresses::SummaryAddress


class Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceFilterPolicies : public ydk::Entity
{
    public:
        InterfaceFilterPolicies();
        ~InterfaceFilterPolicies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceFilterPolicy; //type: Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceFilterPolicies::InterfaceFilterPolicy

        ydk::YList interface_filter_policy;
        
}; // Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceFilterPolicies


class Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceFilterPolicies::InterfaceFilterPolicy : public ydk::Entity
{
    public:
        InterfaceFilterPolicy();
        ~InterfaceFilterPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: EigrpDir
        ydk::YLeaf policy_name; //type: string

}; // Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceFilterPolicies::InterfaceFilterPolicy


class Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceStaticNeighbors : public ydk::Entity
{
    public:
        InterfaceStaticNeighbors();
        ~InterfaceStaticNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceStaticNeighbor; //type: Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceStaticNeighbors::InterfaceStaticNeighbor

        ydk::YList interface_static_neighbor;
        
}; // Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceStaticNeighbors


class Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceStaticNeighbors::InterfaceStaticNeighbor : public ydk::Entity
{
    public:
        InterfaceStaticNeighbor();
        ~InterfaceStaticNeighbor();

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
        ydk::YLeaf max_hops; //type: uint32

}; // Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceStaticNeighbors::InterfaceStaticNeighbor


class Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Distance : public ydk::Entity
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

        ydk::YLeaf internal_distance; //type: uint32
        ydk::YLeaf external_distance; //type: uint32

}; // Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Distance

class EigrpMetricVersion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_64bit;
        static const ydk::Enum::YLeaf Y_32bit;

};

class EigrpSoo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf as;
        static const ydk::Enum::YLeaf ipv4_address;
        static const ydk::Enum::YLeaf four_byte_as;

};

class EigrpRedistProto : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf connected;
        static const ydk::Enum::YLeaf eigrp;
        static const ydk::Enum::YLeaf isis;
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf rip;
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf ospfv3;
        static const ydk::Enum::YLeaf subscriber;
        static const ydk::Enum::YLeaf application;
        static const ydk::Enum::YLeaf mobile;

};

class EigrpStub : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf receive_only;
        static const ydk::Enum::YLeaf filtered;

};

class EigrpDelayUnit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ten_microsecond;
        static const ydk::Enum::YLeaf picosecond;

};

class EigrpMet : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf maximum_hops;
        static const ydk::Enum::YLeaf weights;
        static const ydk::Enum::YLeaf rib_scale;
        static const ydk::Enum::YLeaf version;

};

class EigrpDir : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class EigrpTimer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf route_hold;
        static const ydk::Enum::YLeaf signal;
        static const ydk::Enum::YLeaf converge;

};


}
}

#endif /* _CISCO_IOS_XR_EIGRP_CFG_ */

