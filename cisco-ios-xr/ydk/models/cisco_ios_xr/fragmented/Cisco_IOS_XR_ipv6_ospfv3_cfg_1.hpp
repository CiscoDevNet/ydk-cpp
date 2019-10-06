#ifndef _CISCO_IOS_XR_IPV6_OSPFV3_CFG_1_
#define _CISCO_IOS_XR_IPV6_OSPFV3_CFG_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv6_ospfv3_cfg_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_ospfv3_cfg {


class Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6bit::OnStartup : public ydk::Entity
{
    public:
        OnStartup();
        ~OnStartup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wait_for_bgp; //type: boolean
        ydk::YLeaf wait_time; //type: uint32

}; // Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6bit::OnStartup


class Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric : public ydk::Entity
{
    public:
        MaxMetric();
        ~MaxMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf external_lsa; //type: uint32
        ydk::YLeaf summary_lsa; //type: uint32
        ydk::YLeaf on_switchover; //type: uint32
        ydk::YLeaf always; //type: empty
        ydk::YLeaf include_stub; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf on_proc_migration; //type: uint32
        ydk::YLeaf on_proc_restart; //type: uint32
        class OnStartup; //type: Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::OnStartup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::OnStartup> on_startup;
        
}; // Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric


class Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::OnStartup : public ydk::Entity
{
    public:
        OnStartup();
        ~OnStartup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wait_for_bgp; //type: boolean
        ydk::YLeaf wait_time; //type: uint32

}; // Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::OnStartup


class Ospfv3::Processes::Process::DefaultVrf::Bfd : public ydk::Entity
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

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf fast_detect_mode; //type: Ospfv3bfdEnableMode

}; // Ospfv3::Processes::Process::DefaultVrf::Bfd


class Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter : public ydk::Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class All; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter::All

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter::All> all;
        
}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter


class Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out; //type: empty

}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter::All


class Ospfv3::Processes::Process::DefaultVrf::Capability : public ydk::Entity
{
    public:
        Capability();
        ~Capability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type7_prefer; //type: boolean
        ydk::YLeaf vrf_lite; //type: boolean
        ydk::YLeaf type7_translate_zero_forwarding_addr; //type: boolean

}; // Ospfv3::Processes::Process::DefaultVrf::Capability


class Ospfv3::Processes::Process::DefaultVrf::Authentication : public ydk::Entity
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

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf spi; //type: uint32
        ydk::YLeaf algorithm; //type: Ospfv3Authentication
        ydk::YLeaf password; //type: string

}; // Ospfv3::Processes::Process::DefaultVrf::Authentication


class Ospfv3::Processes::Process::DefaultVrf::GracefulRestart : public ydk::Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf strict_lsa_checking; //type: empty
        ydk::YLeaf helper; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf lifetime; //type: uint32

}; // Ospfv3::Processes::Process::DefaultVrf::GracefulRestart


class Ospfv3::Processes::Process::DefaultVrf::DefaultInformation : public ydk::Entity
{
    public:
        DefaultInformation();
        ~DefaultInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Originate; //type: Ospfv3::Processes::Process::DefaultVrf::DefaultInformation::Originate

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::DefaultInformation::Originate> originate; // presence node
        
}; // Ospfv3::Processes::Process::DefaultVrf::DefaultInformation


class Ospfv3::Processes::Process::DefaultVrf::DefaultInformation::Originate : public ydk::Entity
{
    public:
        Originate();
        ~Originate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf always; //type: boolean
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: uint32
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf route_policy_name; //type: string

}; // Ospfv3::Processes::Process::DefaultVrf::DefaultInformation::Originate


class Ospfv3::Processes::Process::DefaultVrf::ProcessScope : public ydk::Entity
{
    public:
        ProcessScope();
        ~ProcessScope();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FastReroute; //type: Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute> fast_reroute;
        
}; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope


class Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute : public ydk::Entity
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

        ydk::YLeaf fast_reroute_enable; //type: Ospfv3FastReroute
        class PerLink; //type: Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink
        class PerPrefix; //type: Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix> per_prefix;
        
}; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute


class Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink : public ydk::Entity
{
    public:
        PerLink();
        ~PerLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class CandidateInterfaces; //type: Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink


class Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces


class Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces


class Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix : public ydk::Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class CandidateInterfaces; //type: Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix


class Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospfv3::Processes::Process::DefaultVrf::Encryption : public ydk::Entity
{
    public:
        Encryption();
        ~Encryption();

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
        ydk::YLeaf spi; //type: uint32
        ydk::YLeaf encryption_algorithm; //type: Ospfv3EncryptionAlgorithm
        ydk::YLeaf encryption_password; //type: string
        ydk::YLeaf authentication_algorithm; //type: Ospfv3AuthenticationType2
        ydk::YLeaf authentication_password; //type: string

}; // Ospfv3::Processes::Process::DefaultVrf::Encryption


class Ospfv3::Processes::Process::DefaultVrf::AutoCost : public ydk::Entity
{
    public:
        AutoCost();
        ~AutoCost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf reference_bandwidth; //type: uint32

}; // Ospfv3::Processes::Process::DefaultVrf::AutoCost


class Ospfv3::Processes::Process::Vrfs : public ydk::Entity
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

        class Vrf; //type: Ospfv3::Processes::Process::Vrfs::Vrf

        ydk::YList vrf;
        
}; // Ospfv3::Processes::Process::Vrfs


class Ospfv3::Processes::Process::Vrfs::Vrf : public ydk::Entity
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
        ydk::YLeaf snmpvrf_trap; //type: empty
        ydk::YLeaf prefix_suppression; //type: boolean
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf default_metric; //type: uint32
        ydk::YLeaf flood_reduction; //type: boolean
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf dead_interval; //type: uint32
        ydk::YLeaf packet_size; //type: uint32
        ydk::YLeaf instance; //type: uint32
        ydk::YLeaf spf_prefix_priority_policy; //type: string
        ydk::YLeaf router_id; //type: string
        ydk::YLeaf network; //type: Ospfv3Network
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf log_adjacency_changes; //type: Ospfv3LogAdj
        ydk::YLeaf demand_circuit; //type: boolean
        ydk::YLeaf transmit_delay; //type: uint32
        class DomainId; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DomainId
        class AreaAddresses; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses
        class Timers; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Timers
        class SummaryPrefixes; //type: Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes
        class Snmp; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Snmp
        class FastReroute; //type: Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute
        class Distance; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Distance
        class Maximum; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Maximum
        class Redistributes; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes
        class Ignore; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Ignore
        class DistributeListOut; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut
        class DistributeList; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList
        class StubRouter; //type: Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter
        class Bfd; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Bfd
        class DatabaseFilter; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter
        class Capability; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Capability
        class Authentication; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Authentication
        class GracefulRestart; //type: Ospfv3::Processes::Process::Vrfs::Vrf::GracefulRestart
        class DefaultInformation; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation
        class ProcessScope; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope
        class Encryption; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Encryption
        class AutoCost; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AutoCost

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DomainId> domain_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses> area_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Timers> timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes> summary_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Snmp> snmp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Distance> distance;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Maximum> maximum;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes> redistributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Ignore> ignore;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut> distribute_list_out;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList> distribute_list;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter> stub_router;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter> database_filter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Capability> capability;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::GracefulRestart> graceful_restart;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation> default_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope> process_scope;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Encryption> encryption;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AutoCost> auto_cost; // presence node
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf


class Ospfv3::Processes::Process::Vrfs::Vrf::DomainId : public ydk::Entity
{
    public:
        DomainId();
        ~DomainId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SecondaryDomainIds; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds
        class PrimaryDomainId; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds> secondary_domain_ids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId> primary_domain_id;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DomainId


class Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds : public ydk::Entity
{
    public:
        SecondaryDomainIds();
        ~SecondaryDomainIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SecondaryDomainId; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId

        ydk::YList secondary_domain_id;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds


class Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId : public ydk::Entity
{
    public:
        SecondaryDomainId();
        ~SecondaryDomainId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_id_type; //type: Ospfv3DomainId
        ydk::YLeaf domain_id_name; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId


class Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId : public ydk::Entity
{
    public:
        PrimaryDomainId();
        ~PrimaryDomainId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_id_type; //type: Ospfv3DomainId
        ydk::YLeaf domain_id_name; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses : public ydk::Entity
{
    public:
        AreaAddresses();
        ~AreaAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AreaAddress; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress
        class AreaAreaId; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId

        ydk::YList area_address;
        ydk::YList area_area_id;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress : public ydk::Entity
{
    public:
        AreaAddress();
        ~AreaAddress();

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
        ydk::YLeaf stub; //type: boolean
        ydk::YLeaf packet_size; //type: uint32
        ydk::YLeaf instance; //type: uint32
        ydk::YLeaf demand_circuit; //type: boolean
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf type7_translate_always; //type: boolean
        ydk::YLeaf prefix_suppression; //type: boolean
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf dead_interval; //type: uint32
        ydk::YLeaf default_cost; //type: uint32
        ydk::YLeaf flood_reduction; //type: boolean
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf ldp_sync; //type: boolean
        ydk::YLeaf network; //type: Ospfv3Network
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf cost; //type: uint32
        class Authentication; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Authentication
        class Bfd; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Bfd
        class Ranges; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges
        class Encryption; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Encryption
        class Nssa; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa
        class DatabaseFilter; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter
        class DistributeList; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList
        class Interfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces
        class AreaScope; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope
        class ShamLinks; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks
        class VirtualLinks; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges> ranges;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Encryption> encryption;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa> nssa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter> database_filter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList> distribute_list;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope> area_scope;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks> sham_links;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks> virtual_links;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Authentication : public ydk::Entity
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

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf spi; //type: uint32
        ydk::YLeaf algorithm; //type: Ospfv3Authentication
        ydk::YLeaf password; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Authentication


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Bfd : public ydk::Entity
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
        ydk::YLeaf fast_detect_mode; //type: Ospfv3bfdEnableMode

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Bfd


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges : public ydk::Entity
{
    public:
        Ranges();
        ~Ranges();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Range; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::Range

        ydk::YList range;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

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
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf not_advertise; //type: boolean
        ydk::YLeaf cost; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::Range


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Encryption : public ydk::Entity
{
    public:
        Encryption();
        ~Encryption();

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
        ydk::YLeaf spi; //type: uint32
        ydk::YLeaf encryption_algorithm; //type: Ospfv3EncryptionAlgorithm
        ydk::YLeaf encryption_password; //type: string
        ydk::YLeaf authentication_algorithm; //type: Ospfv3AuthenticationType2
        ydk::YLeaf authentication_password; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Encryption


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa : public ydk::Entity
{
    public:
        Nssa();
        ~Nssa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf no_redistribution; //type: boolean
        ydk::YLeaf default_info_originate; //type: boolean
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: Ospfv3Metric
        ydk::YLeaf no_summary; //type: empty

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter : public ydk::Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class All; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::All

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::All> all;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::All


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList : public ydk::Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class In; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::In

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::In> in;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::In : public ydk::Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_list; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::In


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces : public ydk::Entity
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

        class Interface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface

        ydk::YList interface;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf dead_interval; //type: uint32
        ydk::YLeaf flood_reduction; //type: boolean
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf instance; //type: uint32
        ydk::YLeaf ldp_sync; //type: boolean
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf packet_size; //type: uint32
        ydk::YLeaf prefix_suppression; //type: boolean
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf network; //type: Ospfv3Network
        ydk::YLeaf demand_circuit; //type: boolean
        class Authentication; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication
        class Neighbors; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors
        class Encryption; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption
        class Bfd; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd
        class DatabaseFilter; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter
        class DistributeList; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList
        class FastReroute; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption> encryption;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter> database_filter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList> distribute_list;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute> fast_reroute;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication : public ydk::Entity
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

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf spi; //type: uint32
        ydk::YLeaf algorithm; //type: Ospfv3Authentication
        ydk::YLeaf password; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors : public ydk::Entity
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

        class Neighbor; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor : public ydk::Entity
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
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf poll_interval; //type: uint32
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf database_filter; //type: boolean
        ydk::YLeaf zone; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption : public ydk::Entity
{
    public:
        Encryption();
        ~Encryption();

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
        ydk::YLeaf spi; //type: uint32
        ydk::YLeaf encryption_algorithm; //type: Ospfv3EncryptionAlgorithm
        ydk::YLeaf encryption_password; //type: string
        ydk::YLeaf authentication_algorithm; //type: Ospfv3AuthenticationType2
        ydk::YLeaf authentication_password; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd : public ydk::Entity
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

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf fast_detect_mode; //type: Ospfv3bfdEnableMode
        ydk::YLeaf detection_multiplier; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter : public ydk::Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class All; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All> all;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList : public ydk::Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class In; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In> in;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In : public ydk::Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_list; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute : public ydk::Entity
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

        ydk::YLeaf fast_reroute_enable; //type: Ospfv3FastReroute
        class PerLink; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink
        class PerPrefix; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix> per_prefix;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink : public ydk::Entity
{
    public:
        PerLink();
        ~PerLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class CandidateInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix : public ydk::Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class CandidateInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope : public ydk::Entity
{
    public:
        AreaScope();
        ~AreaScope();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FastReroute; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute> fast_reroute;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute : public ydk::Entity
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

        ydk::YLeaf fast_reroute_enable; //type: Ospfv3FastReroute
        class PerLink; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink
        class PerPrefix; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix> per_prefix;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink : public ydk::Entity
{
    public:
        PerLink();
        ~PerLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class CandidateInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix : public ydk::Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class CandidateInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks : public ydk::Entity
{
    public:
        ShamLinks();
        ~ShamLinks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ShamLink; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink

        ydk::YList sham_link;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink : public ydk::Entity
{
    public:
        ShamLink();
        ~ShamLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf dead_interval; //type: uint32
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf transmit_delay; //type: uint32
        class Authentication; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication
        class Encryption; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption> encryption;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication : public ydk::Entity
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

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf spi; //type: uint32
        ydk::YLeaf algorithm; //type: Ospfv3Authentication
        ydk::YLeaf password; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption : public ydk::Entity
{
    public:
        Encryption();
        ~Encryption();

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
        ydk::YLeaf spi; //type: uint32
        ydk::YLeaf encryption_algorithm; //type: Ospfv3EncryptionAlgorithm
        ydk::YLeaf encryption_password; //type: string
        ydk::YLeaf authentication_algorithm; //type: Ospfv3AuthenticationType2
        ydk::YLeaf authentication_password; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks : public ydk::Entity
{
    public:
        VirtualLinks();
        ~VirtualLinks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VirtualLink; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink

        ydk::YList virtual_link;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink : public ydk::Entity
{
    public:
        VirtualLink();
        ~VirtualLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf virtual_link_address; //type: string
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf dead_interval; //type: uint32
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf transmit_delay; //type: uint32
        class Authentication; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication
        class Encryption; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption> encryption;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication : public ydk::Entity
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

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf spi; //type: uint32
        ydk::YLeaf algorithm; //type: Ospfv3Authentication
        ydk::YLeaf password; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption : public ydk::Entity
{
    public:
        Encryption();
        ~Encryption();

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
        ydk::YLeaf spi; //type: uint32
        ydk::YLeaf encryption_algorithm; //type: Ospfv3EncryptionAlgorithm
        ydk::YLeaf encryption_password; //type: string
        ydk::YLeaf authentication_algorithm; //type: Ospfv3AuthenticationType2
        ydk::YLeaf authentication_password; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId : public ydk::Entity
{
    public:
        AreaAreaId();
        ~AreaAreaId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf stub; //type: boolean
        ydk::YLeaf packet_size; //type: uint32
        ydk::YLeaf instance; //type: uint32
        ydk::YLeaf demand_circuit; //type: boolean
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf type7_translate_always; //type: boolean
        ydk::YLeaf prefix_suppression; //type: boolean
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf dead_interval; //type: uint32
        ydk::YLeaf default_cost; //type: uint32
        ydk::YLeaf flood_reduction; //type: boolean
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf ldp_sync; //type: boolean
        ydk::YLeaf network; //type: Ospfv3Network
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf cost; //type: uint32
        class Authentication; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Authentication
        class Bfd; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Bfd
        class Ranges; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges
        class Encryption; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Encryption
        class Nssa; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa
        class DatabaseFilter; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter
        class DistributeList; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList
        class Interfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces
        class AreaScope; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope
        class ShamLinks; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks
        class VirtualLinks; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges> ranges;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Encryption> encryption;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa> nssa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter> database_filter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList> distribute_list;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope> area_scope;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks> sham_links;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks> virtual_links;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Authentication : public ydk::Entity
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

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf spi; //type: uint32
        ydk::YLeaf algorithm; //type: Ospfv3Authentication
        ydk::YLeaf password; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Authentication


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Bfd : public ydk::Entity
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
        ydk::YLeaf fast_detect_mode; //type: Ospfv3bfdEnableMode

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Bfd


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges : public ydk::Entity
{
    public:
        Ranges();
        ~Ranges();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Range; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::Range

        ydk::YList range;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

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
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf not_advertise; //type: boolean
        ydk::YLeaf cost; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::Range


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Encryption : public ydk::Entity
{
    public:
        Encryption();
        ~Encryption();

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
        ydk::YLeaf spi; //type: uint32
        ydk::YLeaf encryption_algorithm; //type: Ospfv3EncryptionAlgorithm
        ydk::YLeaf encryption_password; //type: string
        ydk::YLeaf authentication_algorithm; //type: Ospfv3AuthenticationType2
        ydk::YLeaf authentication_password; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Encryption


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa : public ydk::Entity
{
    public:
        Nssa();
        ~Nssa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf no_redistribution; //type: boolean
        ydk::YLeaf default_info_originate; //type: boolean
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: Ospfv3Metric
        ydk::YLeaf no_summary; //type: empty

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter : public ydk::Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class All; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::All

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::All> all;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::All


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList : public ydk::Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class In; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::In

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::In> in;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::In : public ydk::Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_list; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::In


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces : public ydk::Entity
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

        class Interface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface

        ydk::YList interface;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf dead_interval; //type: uint32
        ydk::YLeaf flood_reduction; //type: boolean
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf instance; //type: uint32
        ydk::YLeaf ldp_sync; //type: boolean
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf packet_size; //type: uint32
        ydk::YLeaf prefix_suppression; //type: boolean
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf network; //type: Ospfv3Network
        ydk::YLeaf demand_circuit; //type: boolean
        class Authentication; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication
        class Neighbors; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors
        class Encryption; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption
        class Bfd; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd
        class DatabaseFilter; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter
        class DistributeList; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList
        class FastReroute; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption> encryption;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter> database_filter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList> distribute_list;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute> fast_reroute;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication : public ydk::Entity
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

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf spi; //type: uint32
        ydk::YLeaf algorithm; //type: Ospfv3Authentication
        ydk::YLeaf password; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors : public ydk::Entity
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

        class Neighbor; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor : public ydk::Entity
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
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf poll_interval; //type: uint32
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf database_filter; //type: boolean
        ydk::YLeaf zone; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption : public ydk::Entity
{
    public:
        Encryption();
        ~Encryption();

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
        ydk::YLeaf spi; //type: uint32
        ydk::YLeaf encryption_algorithm; //type: Ospfv3EncryptionAlgorithm
        ydk::YLeaf encryption_password; //type: string
        ydk::YLeaf authentication_algorithm; //type: Ospfv3AuthenticationType2
        ydk::YLeaf authentication_password; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd : public ydk::Entity
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

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf fast_detect_mode; //type: Ospfv3bfdEnableMode
        ydk::YLeaf detection_multiplier; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter : public ydk::Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class All; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All> all;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList : public ydk::Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class In; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In> in;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In : public ydk::Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_list; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute : public ydk::Entity
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

        ydk::YLeaf fast_reroute_enable; //type: Ospfv3FastReroute
        class PerLink; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink
        class PerPrefix; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix> per_prefix;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink : public ydk::Entity
{
    public:
        PerLink();
        ~PerLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class CandidateInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix : public ydk::Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class CandidateInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope : public ydk::Entity
{
    public:
        AreaScope();
        ~AreaScope();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FastReroute; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute> fast_reroute;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute : public ydk::Entity
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

        ydk::YLeaf fast_reroute_enable; //type: Ospfv3FastReroute
        class PerLink; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink
        class PerPrefix; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix> per_prefix;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink : public ydk::Entity
{
    public:
        PerLink();
        ~PerLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class CandidateInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix : public ydk::Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class CandidateInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks : public ydk::Entity
{
    public:
        ShamLinks();
        ~ShamLinks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ShamLink; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink

        ydk::YList sham_link;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink : public ydk::Entity
{
    public:
        ShamLink();
        ~ShamLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf dead_interval; //type: uint32
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf transmit_delay; //type: uint32
        class Authentication; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication
        class Encryption; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption> encryption;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication : public ydk::Entity
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

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf spi; //type: uint32
        ydk::YLeaf algorithm; //type: Ospfv3Authentication
        ydk::YLeaf password; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption : public ydk::Entity
{
    public:
        Encryption();
        ~Encryption();

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
        ydk::YLeaf spi; //type: uint32
        ydk::YLeaf encryption_algorithm; //type: Ospfv3EncryptionAlgorithm
        ydk::YLeaf encryption_password; //type: string
        ydk::YLeaf authentication_algorithm; //type: Ospfv3AuthenticationType2
        ydk::YLeaf authentication_password; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks : public ydk::Entity
{
    public:
        VirtualLinks();
        ~VirtualLinks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VirtualLink; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink

        ydk::YList virtual_link;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink : public ydk::Entity
{
    public:
        VirtualLink();
        ~VirtualLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf virtual_link_address; //type: string
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf dead_interval; //type: uint32
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf transmit_delay; //type: uint32
        class Authentication; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication
        class Encryption; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption> encryption;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication : public ydk::Entity
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

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf spi; //type: uint32
        ydk::YLeaf algorithm; //type: Ospfv3Authentication
        ydk::YLeaf password; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption : public ydk::Entity
{
    public:
        Encryption();
        ~Encryption();

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
        ydk::YLeaf spi; //type: uint32
        ydk::YLeaf encryption_algorithm; //type: Ospfv3EncryptionAlgorithm
        ydk::YLeaf encryption_password; //type: string
        ydk::YLeaf authentication_algorithm; //type: Ospfv3AuthenticationType2
        ydk::YLeaf authentication_password; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption


class Ospfv3::Processes::Process::Vrfs::Vrf::Timers : public ydk::Entity
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

        class Pacing; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Pacing
        class LsaTimers; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Timers::LsaTimers
        class Throttle; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Pacing> pacing;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Timers::LsaTimers> lsa_timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle> throttle;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Timers


class Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Pacing : public ydk::Entity
{
    public:
        Pacing();
        ~Pacing();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flood; //type: uint32
        ydk::YLeaf retransmission; //type: uint32
        ydk::YLeaf lsa_group; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Pacing


class Ospfv3::Processes::Process::Vrfs::Vrf::Timers::LsaTimers : public ydk::Entity
{
    public:
        LsaTimers();
        ~LsaTimers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf arrival; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Timers::LsaTimers


class Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle : public ydk::Entity
{
    public:
        Throttle();
        ~Throttle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lsa; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Lsa
        class Spf; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Spf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Lsa> lsa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Spf> spf;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle


class Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Lsa : public ydk::Entity
{
    public:
        Lsa();
        ~Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf first_delay; //type: uint32
        ydk::YLeaf minimum_delay; //type: uint32
        ydk::YLeaf maximum_delay; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Lsa


class Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Spf : public ydk::Entity
{
    public:
        Spf();
        ~Spf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf first_delay; //type: uint32
        ydk::YLeaf minimum_delay; //type: uint32
        ydk::YLeaf maximum_delay; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Spf


class Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes : public ydk::Entity
{
    public:
        SummaryPrefixes();
        ~SummaryPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SummaryPrefix; //type: Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix

        ydk::YList summary_prefix;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes


class Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix : public ydk::Entity
{
    public:
        SummaryPrefix();
        ~SummaryPrefix();

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
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf not_advertise; //type: boolean
        ydk::YLeaf tag; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix


class Ospfv3::Processes::Process::Vrfs::Vrf::Snmp : public ydk::Entity
{
    public:
        Snmp();
        ~Snmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf context; //type: string
        class TrapRateLimit; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::TrapRateLimit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::TrapRateLimit> trap_rate_limit;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Snmp


class Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::TrapRateLimit : public ydk::Entity
{
    public:
        TrapRateLimit();
        ~TrapRateLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf window_size; //type: uint32
        ydk::YLeaf max_window_traps; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::TrapRateLimit


class Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute : public ydk::Entity
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

        class PerLink; //type: Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerLink
        class PerPrefix; //type: Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix> per_prefix;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute


class Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerLink : public ydk::Entity
{
    public:
        PerLink();
        ~PerLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: Ospfv3FastReroutePriority

}; // Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerLink


}
}

#endif /* _CISCO_IOS_XR_IPV6_OSPFV3_CFG_1_ */

