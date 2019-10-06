#ifndef _CISCO_IOS_XR_IPV4_OSPF_CFG_2_
#define _CISCO_IOS_XR_IPV4_OSPF_CFG_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_ospf_cfg_0.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_cfg_1.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ospf_cfg {


class Ospf::Processes::Process::DefaultVrf::Nsf : public ydk::Entity
{
    public:
        Nsf();
        ~Nsf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lifetime; //type: uint32
        ydk::YLeaf ietf; //type: OspfIetfNsf
        ydk::YLeaf ietf_support_role; //type: OspfIetfNsfSupport
        ydk::YLeaf cisco; //type: OspfCiscoNsf
        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf flush_delay_time; //type: uint32
        ydk::YLeaf ietf_strict_lsa_checking; //type: empty

}; // Ospf::Processes::Process::DefaultVrf::Nsf


class Ospf::Processes::Process::DefaultVrf::ProcessScope : public ydk::Entity
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

        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf external_out; //type: boolean
        ydk::YLeaf prefix_suppression_primary; //type: boolean
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf ldp_sync_igp_shortcuts; //type: boolean
        ydk::YLeaf ldp_auto_config; //type: empty
        ydk::YLeaf summary_in; //type: boolean
        ydk::YLeaf network_type; //type: OspfNetwork
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf loopback_stub_network; //type: boolean
        ydk::YLeaf prefix_suppression_secondary; //type: boolean
        ydk::YLeaf demand_circuit; //type: boolean
        ydk::YLeaf segment_routing; //type: OspfSegmentRouting
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf packet_size; //type: uint32
        ydk::YLeaf ldp_sync; //type: boolean
        ydk::YLeaf database_filter; //type: boolean
        ydk::YLeaf link_down_fast_detect; //type: boolean
        ydk::YLeaf segment_routing_forwarding; //type: OspfSegmentRoutingForwarding
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf flood_reduction; //type: boolean
        class Srgb; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::Srgb
        class FastReroute; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute
        class DistributeList; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::DistributeList
        class Bfd; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::Bfd
        class Authentication; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication
        class Security; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::Security
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::DeadIntervalMinimal
        class CostFallback; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::CostFallback

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::Srgb> srgb; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::DistributeList> distribute_list; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::Security> security;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::DeadIntervalMinimal> dead_interval_minimal;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::CostFallback> cost_fallback;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessScope


class Ospf::Processes::Process::DefaultVrf::ProcessScope::Srgb : public ydk::Entity
{
    public:
        Srgb();
        ~Srgb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lower_bound; //type: uint32
        ydk::YLeaf upper_bound; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::Srgb


class Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute : public ydk::Entity
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

        ydk::YLeaf fast_reroute_enable; //type: OspfProcFastReroute
        class PerLink; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink
        class PerPrefix; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix> per_prefix;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute


class Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink : public ydk::Entity
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
        class CandidateInterfaces; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink


class Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces : public ydk::Entity
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

        class CandidateInterface; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces


class Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces : public ydk::Entity
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

        class ExcludeInterface; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces


class Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix : public ydk::Entity
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

        ydk::YLeaf topology_independent_lfa; //type: boolean
        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class RemoteLfa; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa
        class CandidateInterfaces; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix


class Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa : public ydk::Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: OspfProcFrrRlfaTunnel
        ydk::YLeaf maximum_cost; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa


class Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces : public ydk::Entity
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

        class CandidateInterface; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces : public ydk::Entity
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

        class ExcludeInterface; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::DefaultVrf::ProcessScope::DistributeList : public ydk::Entity
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

        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf route_policy_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::DistributeList


class Ospf::Processes::Process::DefaultVrf::ProcessScope::Bfd : public ydk::Entity
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
        ydk::YLeaf fast_detect_mode; //type: BfdEnableMode

}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::Bfd


class Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication : public ydk::Entity
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

        ydk::YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication::Type
        class MessageDigestKeys; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication::MessageDigestKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication::Type> type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication::MessageDigestKeys> message_digest_keys;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication


class Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authen_type; //type: OspfAuthentication
        ydk::YLeaf keychain_authen_type; //type: OspfKeychainAuth
        ydk::YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication::Type


class Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication::MessageDigestKeys : public ydk::Entity
{
    public:
        MessageDigestKeys();
        ~MessageDigestKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication::MessageDigestKeys::MessageDigestKey

        ydk::YList message_digest_key;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication::MessageDigestKeys


class Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication::MessageDigestKeys::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint32
        ydk::YLeaf password; //type: string

}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication::MessageDigestKeys::MessageDigestKey


class Ospf::Processes::Process::DefaultVrf::ProcessScope::Security : public ydk::Entity
{
    public:
        Security();
        ~Security();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ttl; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope::Security::Ttl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::Security::Ttl> ttl;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::Security


class Ospf::Processes::Process::DefaultVrf::ProcessScope::Security::Ttl : public ydk::Entity
{
    public:
        Ttl();
        ~Ttl();

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
        ydk::YLeaf hop_count; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::Security::Ttl


class Ospf::Processes::Process::DefaultVrf::ProcessScope::DeadIntervalMinimal : public ydk::Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

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
        ydk::YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::DeadIntervalMinimal


class Ospf::Processes::Process::DefaultVrf::ProcessScope::CostFallback : public ydk::Entity
{
    public:
        CostFallback();
        ~CostFallback();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf threshold; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::ProcessScope::CostFallback


class Ospf::Processes::Process::DefaultVrf::Redistribution : public ydk::Entity
{
    public:
        Redistribution();
        ~Redistribution();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Redistributes; //type: Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes> redistributes;
        
}; // Ospf::Processes::Process::DefaultVrf::Redistribution


class Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes : public ydk::Entity
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

        class Redistribute; //type: Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute

        ydk::YList redistribute;
        
}; // Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes


class Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute : public ydk::Entity
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

        ydk::YLeaf protocol_name; //type: OspfRedistProtocol
        class ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip; //type: Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip
        class ApplicationOrIsisOrOspf; //type: Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf
        class Bgp; //type: Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute::Bgp
        class Eigrp; //type: Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute::Eigrp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip> connected_or_static_or_dagr_or_subscriber_or_mobile_or_rip; // presence node
        ydk::YList application_or_isis_or_ospf;
        ydk::YList bgp;
        ydk::YList eigrp;
        
}; // Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute


class Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip : public ydk::Entity
{
    public:
        ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip();
        ~ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf classful; //type: boolean
        ydk::YLeaf default_redistributed_route_metric; //type: uint32
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf metric_type; //type: OspfLinkStateMetric
        ydk::YLeaf eigrp_route_type; //type: OspfEigrpRoute
        ydk::YLeaf isis_levels; //type: OspfRouteLevel
        ydk::YLeaf ospf_internal; //type: boolean
        ydk::YLeaf ospf_external; //type: OspfRouteLevel
        ydk::YLeaf ospf_nssa_level; //type: OspfRouteLevel
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf bgp_preserve_med; //type: boolean
        ydk::YLeaf bgp_preserve_default_info; //type: boolean
        ydk::YLeaf ospf_redist_lsa_type; //type: OspfRedistLsa
        ydk::YLeaf ospfnssa_only; //type: boolean
        ydk::YLeaf ospf_use_rib_metric; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip


class Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf : public ydk::Entity
{
    public:
        ApplicationOrIsisOrOspf();
        ~ApplicationOrIsisOrOspf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_name; //type: string
        ydk::YLeaf classful; //type: boolean
        ydk::YLeaf default_redistributed_route_metric; //type: uint32
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf metric_type; //type: OspfLinkStateMetric
        ydk::YLeaf eigrp_route_type; //type: OspfEigrpRoute
        ydk::YLeaf isis_levels; //type: OspfRouteLevel
        ydk::YLeaf ospf_internal; //type: boolean
        ydk::YLeaf ospf_external; //type: OspfRouteLevel
        ydk::YLeaf ospf_nssa_level; //type: OspfRouteLevel
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf bgp_preserve_med; //type: boolean
        ydk::YLeaf bgp_preserve_default_info; //type: boolean
        ydk::YLeaf ospf_redist_lsa_type; //type: OspfRedistLsa
        ydk::YLeaf ospfnssa_only; //type: boolean
        ydk::YLeaf ospf_use_rib_metric; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf


class Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_name; //type: string
        ydk::YLeaf as_xx; //type: uint32
        ydk::YLeaf as_yy; //type: uint32
        ydk::YLeaf classful; //type: boolean
        ydk::YLeaf default_redistributed_route_metric; //type: uint32
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf metric_type; //type: OspfLinkStateMetric
        ydk::YLeaf eigrp_route_type; //type: OspfEigrpRoute
        ydk::YLeaf isis_levels; //type: OspfRouteLevel
        ydk::YLeaf ospf_internal; //type: boolean
        ydk::YLeaf ospf_external; //type: OspfRouteLevel
        ydk::YLeaf ospf_nssa_level; //type: OspfRouteLevel
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf bgp_preserve_med; //type: boolean
        ydk::YLeaf bgp_preserve_default_info; //type: boolean
        ydk::YLeaf ospf_redist_lsa_type; //type: OspfRedistLsa
        ydk::YLeaf ospfnssa_only; //type: boolean
        ydk::YLeaf ospf_use_rib_metric; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute::Bgp


class Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute::Eigrp : public ydk::Entity
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

        ydk::YLeaf instance_name; //type: string
        ydk::YLeaf as_xx; //type: uint32
        ydk::YLeaf classful; //type: boolean
        ydk::YLeaf default_redistributed_route_metric; //type: uint32
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf metric_type; //type: OspfLinkStateMetric
        ydk::YLeaf eigrp_route_type; //type: OspfEigrpRoute
        ydk::YLeaf isis_levels; //type: OspfRouteLevel
        ydk::YLeaf ospf_internal; //type: boolean
        ydk::YLeaf ospf_external; //type: OspfRouteLevel
        ydk::YLeaf ospf_nssa_level; //type: OspfRouteLevel
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf bgp_preserve_med; //type: boolean
        ydk::YLeaf bgp_preserve_default_info; //type: boolean
        ydk::YLeaf ospf_redist_lsa_type; //type: OspfRedistLsa
        ydk::YLeaf ospfnssa_only; //type: boolean
        ydk::YLeaf ospf_use_rib_metric; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute::Eigrp


class Ospf::Processes::Process::DefaultVrf::AdjacencyStagger : public ydk::Entity
{
    public:
        AdjacencyStagger();
        ~AdjacencyStagger();

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
        ydk::YLeaf initial_nbr; //type: uint32
        ydk::YLeaf max_nbr; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AdjacencyStagger


class Ospf::Processes::Process::DefaultVrf::MaxLsa : public ydk::Entity
{
    public:
        MaxLsa();
        ~MaxLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_lsa_limit; //type: uint32
        ydk::YLeaf max_lsa_threshold; //type: uint32
        ydk::YLeaf max_lsa_warning_only; //type: boolean
        ydk::YLeaf max_lsa_ignore_time; //type: uint32
        ydk::YLeaf max_lsa_ignore_count; //type: uint32
        ydk::YLeaf max_lsa_reset_time; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::MaxLsa


class Ospf::Processes::Process::DefaultVrf::AutoCost : public ydk::Entity
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

        ydk::YLeaf disable; //type: boolean
        ydk::YLeaf bandwidth; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AutoCost


class Ospf::Processes::Process::DefaultVrf::Ucmp : public ydk::Entity
{
    public:
        Ucmp();
        ~Ucmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf delay_interval; //type: uint32
        class Enable; //type: Ospf::Processes::Process::DefaultVrf::Ucmp::Enable
        class ExcludeInterfaces; //type: Ospf::Processes::Process::DefaultVrf::Ucmp::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Ucmp::Enable> enable;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Ucmp::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::DefaultVrf::Ucmp


class Ospf::Processes::Process::DefaultVrf::Ucmp::Enable : public ydk::Entity
{
    public:
        Enable();
        ~Enable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf variance; //type: uint32
        ydk::YLeaf prefix_list_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Ucmp::Enable


class Ospf::Processes::Process::DefaultVrf::Ucmp::ExcludeInterfaces : public ydk::Entity
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

        class ExcludeInterface; //type: Ospf::Processes::Process::DefaultVrf::Ucmp::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::Ucmp::ExcludeInterfaces


class Ospf::Processes::Process::DefaultVrf::Ucmp::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::Ucmp::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::DefaultVrf::FastReroute : public ydk::Entity
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

        class PerLink; //type: Ospf::Processes::Process::DefaultVrf::FastReroute::PerLink
        class PerPrefix; //type: Ospf::Processes::Process::DefaultVrf::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::FastReroute::PerPrefix> per_prefix;
        
}; // Ospf::Processes::Process::DefaultVrf::FastReroute


class Ospf::Processes::Process::DefaultVrf::FastReroute::PerLink : public ydk::Entity
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

        ydk::YLeaf priority; //type: OspfFastReroutePriority

}; // Ospf::Processes::Process::DefaultVrf::FastReroute::PerLink


class Ospf::Processes::Process::DefaultVrf::FastReroute::PerPrefix : public ydk::Entity
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

        ydk::YLeaf load_sharing_disable; //type: empty
        ydk::YLeaf priority; //type: OspfFastReroutePriority
        class Tiebreakers; //type: Ospf::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
        
}; // Ospf::Processes::Process::DefaultVrf::FastReroute::PerPrefix


class Ospf::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers : public ydk::Entity
{
    public:
        Tiebreakers();
        ~Tiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tiebreaker; //type: Ospf::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker

        ydk::YList tiebreaker;
        
}; // Ospf::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers


class Ospf::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker : public ydk::Entity
{
    public:
        Tiebreaker();
        ~Tiebreaker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tiebreaker_type; //type: OspfFastRerouteTiebreakers
        ydk::YLeaf tiebreaker_index; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


class Ospf::Processes::Process::DefaultVrf::SummaryPrefixes : public ydk::Entity
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

        class SummaryPrefixData; //type: Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefixData
        class PrefixAndNetmask; //type: Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::PrefixAndNetmask
        class Prefix; //type: Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::Prefix
        class Netmask; //type: Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::Netmask

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefixData> summary_prefix_data;
        ydk::YList prefix_and_netmask;
        ydk::YList prefix;
        ydk::YList netmask;
        
}; // Ospf::Processes::Process::DefaultVrf::SummaryPrefixes


class Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefixData : public ydk::Entity
{
    public:
        SummaryPrefixData();
        ~SummaryPrefixData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf not_advertise; //type: boolean
        ydk::YLeaf tag; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefixData


class Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::PrefixAndNetmask : public ydk::Entity
{
    public:
        PrefixAndNetmask();
        ~PrefixAndNetmask();

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
        ydk::YLeaf netmask; //type: string
        ydk::YLeaf not_advertise; //type: boolean
        ydk::YLeaf tag; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::PrefixAndNetmask


class Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::Prefix : public ydk::Entity
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

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf not_advertise; //type: boolean
        ydk::YLeaf tag; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::Prefix


class Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::Netmask : public ydk::Entity
{
    public:
        Netmask();
        ~Netmask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf netmask; //type: string
        ydk::YLeaf not_advertise; //type: boolean
        ydk::YLeaf tag; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::Netmask


class Ospf::Processes::Process::DefaultVrf::OutgoingRouteUpdates : public ydk::Entity
{
    public:
        OutgoingRouteUpdates();
        ~OutgoingRouteUpdates();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OutgoingRouteUpdate; //type: Ospf::Processes::Process::DefaultVrf::OutgoingRouteUpdates::OutgoingRouteUpdate

        ydk::YList outgoing_route_update;
        
}; // Ospf::Processes::Process::DefaultVrf::OutgoingRouteUpdates


class Ospf::Processes::Process::DefaultVrf::OutgoingRouteUpdates::OutgoingRouteUpdate : public ydk::Entity
{
    public:
        OutgoingRouteUpdate();
        ~OutgoingRouteUpdate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_name; //type: OspfDistListProtocol
        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf as_xx; //type: uint32
        ydk::YLeaf as_yy; //type: uint32
        ydk::YLeaf ospf_process_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::OutgoingRouteUpdates::OutgoingRouteUpdate


class Ospf::Processes::Process::DefaultVrf::Distance : public ydk::Entity
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

        ydk::YLeaf admin_distance; //type: uint32
        class OspfDistance; //type: Ospf::Processes::Process::DefaultVrf::Distance::OspfDistance
        class IpDistances; //type: Ospf::Processes::Process::DefaultVrf::Distance::IpDistances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Distance::OspfDistance> ospf_distance;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Distance::IpDistances> ip_distances;
        
}; // Ospf::Processes::Process::DefaultVrf::Distance


class Ospf::Processes::Process::DefaultVrf::Distance::OspfDistance : public ydk::Entity
{
    public:
        OspfDistance();
        ~OspfDistance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf intra_area; //type: uint32
        ydk::YLeaf inter_area; //type: uint32
        ydk::YLeaf external_routes; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Distance::OspfDistance


class Ospf::Processes::Process::DefaultVrf::Distance::IpDistances : public ydk::Entity
{
    public:
        IpDistances();
        ~IpDistances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpDistance; //type: Ospf::Processes::Process::DefaultVrf::Distance::IpDistances::IpDistance

        ydk::YList ip_distance;
        
}; // Ospf::Processes::Process::DefaultVrf::Distance::IpDistances


class Ospf::Processes::Process::DefaultVrf::Distance::IpDistances::IpDistance : public ydk::Entity
{
    public:
        IpDistance();
        ~IpDistance();

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
        ydk::YLeaf wildcard; //type: string
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf access_list_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Distance::IpDistances::IpDistance


class Ospf::Processes::Process::DefaultVrf::AreaAddresses : public ydk::Entity
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

        class AreaAddress; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress
        class AreaAreaId; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId

        ydk::YList area_address;
        ydk::YList area_area_id;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress : public ydk::Entity
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
        ydk::YLeaf route_policy_in; //type: string
        ydk::YLeaf default_cost; //type: uint32
        ydk::YLeaf route_policy_out; //type: string
        ydk::YLeaf stub; //type: boolean
        ydk::YLeaf type7_translate_always; //type: boolean
        ydk::YLeaf mpls_traffic_eng; //type: empty
        ydk::YLeaf external_out; //type: boolean
        ydk::YLeaf summary_in; //type: boolean
        ydk::YLeaf segment_routing; //type: OspfSegmentRouting
        ydk::YLeaf running; //type: empty
        class VirtualLinkScopes; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes
        class ShamLinkScopes; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes
        class AreaScope; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope
        class NameScopes; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes
        class MultiAreaInterfaceScopes; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes
        class AreaRanges; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaRanges
        class Nssa; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Nssa

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes> virtual_link_scopes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes> sham_link_scopes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope> area_scope;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes> name_scopes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes> multi_area_interface_scopes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaRanges> area_ranges;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Nssa> nssa;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes : public ydk::Entity
{
    public:
        VirtualLinkScopes();
        ~VirtualLinkScopes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VirtualLinkScope; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope

        ydk::YList virtual_link_scope;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope : public ydk::Entity
{
    public:
        VirtualLinkScope();
        ~VirtualLinkScope();

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
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf running; //type: empty
        class Authentication; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal> dead_interval_minimal;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication : public ydk::Entity
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

        ydk::YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type
        class MessageDigestKeys; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type> type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys> message_digest_keys;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authen_type; //type: OspfAuthentication
        ydk::YLeaf keychain_authen_type; //type: OspfKeychainAuth
        ydk::YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys : public ydk::Entity
{
    public:
        MessageDigestKeys();
        ~MessageDigestKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys::MessageDigestKey

        ydk::YList message_digest_key;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint32
        ydk::YLeaf password; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys::MessageDigestKey


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal : public ydk::Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

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
        ydk::YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes : public ydk::Entity
{
    public:
        ShamLinkScopes();
        ~ShamLinkScopes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ShamLinkScope; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope

        ydk::YList sham_link_scope;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope : public ydk::Entity
{
    public:
        ShamLinkScope();
        ~ShamLinkScope();

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
        ydk::YLeaf source; //type: string
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf running; //type: empty
        class Authentication; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal> dead_interval_minimal;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication : public ydk::Entity
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

        ydk::YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type
        class MessageDigestKeys; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type> type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys> message_digest_keys;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authen_type; //type: OspfAuthentication
        ydk::YLeaf keychain_authen_type; //type: OspfKeychainAuth
        ydk::YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys : public ydk::Entity
{
    public:
        MessageDigestKeys();
        ~MessageDigestKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys::MessageDigestKey

        ydk::YList message_digest_key;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint32
        ydk::YLeaf password; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys::MessageDigestKey


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal : public ydk::Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

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
        ydk::YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope : public ydk::Entity
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

        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf prefix_suppression_primary; //type: boolean
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf ldp_sync_igp_shortcuts; //type: boolean
        ydk::YLeaf ldp_auto_config; //type: empty
        ydk::YLeaf network_type; //type: OspfNetwork
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf loopback_stub_network; //type: boolean
        ydk::YLeaf prefix_suppression_secondary; //type: boolean
        ydk::YLeaf demand_circuit; //type: boolean
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf packet_size; //type: uint32
        ydk::YLeaf ldp_sync; //type: boolean
        ydk::YLeaf database_filter; //type: boolean
        ydk::YLeaf link_down_fast_detect; //type: boolean
        ydk::YLeaf segment_routing_forwarding; //type: OspfSegmentRoutingForwarding
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf flood_reduction; //type: boolean
        class DistributeList; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::DistributeList
        class Bfd; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Bfd
        class Authentication; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication
        class Security; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Security
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::DeadIntervalMinimal
        class FastReroute; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute
        class CostFallback; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::CostFallback

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::DistributeList> distribute_list; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Security> security;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::DeadIntervalMinimal> dead_interval_minimal;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::CostFallback> cost_fallback;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::DistributeList : public ydk::Entity
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

        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf route_policy_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::DistributeList


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Bfd : public ydk::Entity
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
        ydk::YLeaf fast_detect_mode; //type: BfdEnableMode

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Bfd


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication : public ydk::Entity
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

        ydk::YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::Type
        class MessageDigestKeys; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::Type> type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeys> message_digest_keys;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authen_type; //type: OspfAuthentication
        ydk::YLeaf keychain_authen_type; //type: OspfKeychainAuth
        ydk::YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::Type


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeys : public ydk::Entity
{
    public:
        MessageDigestKeys();
        ~MessageDigestKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeys::MessageDigestKey

        ydk::YList message_digest_key;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeys


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeys::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint32
        ydk::YLeaf password; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeys::MessageDigestKey


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Security : public ydk::Entity
{
    public:
        Security();
        ~Security();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ttl; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl> ttl;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Security


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl : public ydk::Entity
{
    public:
        Ttl();
        ~Ttl();

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
        ydk::YLeaf hop_count; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::DeadIntervalMinimal : public ydk::Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

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
        ydk::YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::DeadIntervalMinimal


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute : public ydk::Entity
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

        ydk::YLeaf fast_reroute_enable; //type: OspfFastReroute
        class PerLink; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink
        class PerPrefix; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix> per_prefix;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink : public ydk::Entity
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
        class CandidateInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces : public ydk::Entity
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

        class CandidateInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces : public ydk::Entity
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

        class ExcludeInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix : public ydk::Entity
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

        ydk::YLeaf topology_independent_lfa; //type: boolean
        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class RemoteLfa; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa
        class Tiebreakers; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers
        class CandidateInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa : public ydk::Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: OspfFrrRlfaTunnel
        ydk::YLeaf maximum_cost; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers : public ydk::Entity
{
    public:
        Tiebreakers();
        ~Tiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tiebreaker; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker

        ydk::YList tiebreaker;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker : public ydk::Entity
{
    public:
        Tiebreaker();
        ~Tiebreaker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tiebreaker_type; //type: OspfFastRerouteTiebreakersIntf
        ydk::YLeaf tiebreaker_index; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces : public ydk::Entity
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

        class CandidateInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces : public ydk::Entity
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

        class ExcludeInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::CostFallback : public ydk::Entity
{
    public:
        CostFallback();
        ~CostFallback();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf threshold; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::CostFallback


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes : public ydk::Entity
{
    public:
        NameScopes();
        ~NameScopes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NameScope; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope

        ydk::YList name_scope;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope : public ydk::Entity
{
    public:
        NameScope();
        ~NameScope();

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
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf prefix_suppression_primary; //type: boolean
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf ldp_sync_igp_shortcuts; //type: boolean
        ydk::YLeaf ldp_auto_config; //type: empty
        ydk::YLeaf network_type; //type: OspfNetwork
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf loopback_stub_network; //type: boolean
        ydk::YLeaf prefix_suppression_secondary; //type: boolean
        ydk::YLeaf demand_circuit; //type: boolean
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf packet_size; //type: uint32
        ydk::YLeaf ldp_sync; //type: boolean
        ydk::YLeaf database_filter; //type: boolean
        ydk::YLeaf link_down_fast_detect; //type: boolean
        ydk::YLeaf segment_routing_forwarding; //type: OspfSegmentRoutingForwarding
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf flood_reduction; //type: boolean
        ydk::YLeaf running; //type: empty
        class PrefixSid; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid
        class PrefixSidStrict; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict
        class DistributeList; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList
        class Bfd; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd
        class Authentication; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication
        class Security; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security
        class Neighbors; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal
        class FastReroute; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute
        class CostFallback; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid> prefix_sid; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict> prefix_sid_strict; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList> distribute_list; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security> security;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal> dead_interval_minimal;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback> cost_fallback;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid : public ydk::Entity
{
    public:
        PrefixSid();
        ~PrefixSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_value; //type: uint32
        ydk::YLeaf explicit_null; //type: boolean
        ydk::YLeaf type; //type: OspfSid
        ydk::YLeaf n_flag_clear; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict : public ydk::Entity
{
    public:
        PrefixSidStrict();
        ~PrefixSidStrict();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_value; //type: uint32
        ydk::YLeaf explicit_null; //type: boolean
        ydk::YLeaf type; //type: OspfSid
        ydk::YLeaf n_flag_clear; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList : public ydk::Entity
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

        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf route_policy_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd : public ydk::Entity
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
        ydk::YLeaf fast_detect_mode; //type: BfdEnableMode

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication : public ydk::Entity
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

        ydk::YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type
        class MessageDigestKeys; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type> type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeys> message_digest_keys;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authen_type; //type: OspfAuthentication
        ydk::YLeaf keychain_authen_type; //type: OspfKeychainAuth
        ydk::YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeys : public ydk::Entity
{
    public:
        MessageDigestKeys();
        ~MessageDigestKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeys::MessageDigestKey

        ydk::YList message_digest_key;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeys


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeys::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint32
        ydk::YLeaf password; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeys::MessageDigestKey


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security : public ydk::Entity
{
    public:
        Security();
        ~Security();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ttl; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl> ttl;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl : public ydk::Entity
{
    public:
        Ttl();
        ~Ttl();

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
        ydk::YLeaf hop_count; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors : public ydk::Entity
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

        class Neighbor; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal : public ydk::Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

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
        ydk::YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute : public ydk::Entity
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

        ydk::YLeaf fast_reroute_enable; //type: OspfFastReroute
        class PerLink; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink
        class PerPrefix; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix> per_prefix;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink : public ydk::Entity
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
        class CandidateInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces : public ydk::Entity
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

        class CandidateInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces : public ydk::Entity
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

        class ExcludeInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix : public ydk::Entity
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

        ydk::YLeaf topology_independent_lfa; //type: boolean
        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class RemoteLfa; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa
        class Tiebreakers; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers
        class CandidateInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa : public ydk::Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: OspfFrrRlfaTunnel
        ydk::YLeaf maximum_cost; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers : public ydk::Entity
{
    public:
        Tiebreakers();
        ~Tiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tiebreaker; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker

        ydk::YList tiebreaker;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker : public ydk::Entity
{
    public:
        Tiebreaker();
        ~Tiebreaker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tiebreaker_type; //type: OspfFastRerouteTiebreakersIntf
        ydk::YLeaf tiebreaker_index; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces : public ydk::Entity
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

        class CandidateInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces : public ydk::Entity
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

        class ExcludeInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback : public ydk::Entity
{
    public:
        CostFallback();
        ~CostFallback();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf threshold; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes : public ydk::Entity
{
    public:
        MultiAreaInterfaceScopes();
        ~MultiAreaInterfaceScopes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MultiAreaInterfaceScope; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope

        ydk::YList multi_area_interface_scope;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope : public ydk::Entity
{
    public:
        MultiAreaInterfaceScope();
        ~MultiAreaInterfaceScope();

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
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf packet_size; //type: uint32
        ydk::YLeaf database_filter; //type: boolean
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf running; //type: empty
        class DistributeList; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList
        class Authentication; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication
        class Neighbors; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal
        class FastReroute; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute
        class CostFallback; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList> distribute_list; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal> dead_interval_minimal;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback> cost_fallback;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList : public ydk::Entity
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

        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf route_policy_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication : public ydk::Entity
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

        ydk::YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type
        class MessageDigestKeys; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type> type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys> message_digest_keys;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authen_type; //type: OspfAuthentication
        ydk::YLeaf keychain_authen_type; //type: OspfKeychainAuth
        ydk::YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys : public ydk::Entity
{
    public:
        MessageDigestKeys();
        ~MessageDigestKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys::MessageDigestKey

        ydk::YList message_digest_key;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint32
        ydk::YLeaf password; //type: string

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys::MessageDigestKey


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors : public ydk::Entity
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

        class Neighbor; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal : public ydk::Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

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
        ydk::YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute : public ydk::Entity
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

        ydk::YLeaf fast_reroute_enable; //type: OspfFastReroute
        class PerLink; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink
        class PerPrefix; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix> per_prefix;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink : public ydk::Entity
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
        class CandidateInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces : public ydk::Entity
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

        class CandidateInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces : public ydk::Entity
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

        class ExcludeInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix : public ydk::Entity
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

        ydk::YLeaf topology_independent_lfa; //type: boolean
        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class RemoteLfa; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa
        class Tiebreakers; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers
        class CandidateInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa : public ydk::Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: OspfFrrRlfaTunnel
        ydk::YLeaf maximum_cost; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers : public ydk::Entity
{
    public:
        Tiebreakers();
        ~Tiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tiebreaker; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker

        ydk::YList tiebreaker;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker : public ydk::Entity
{
    public:
        Tiebreaker();
        ~Tiebreaker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tiebreaker_type; //type: OspfFastRerouteTiebreakersIntf
        ydk::YLeaf tiebreaker_index; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces : public ydk::Entity
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

        class CandidateInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces : public ydk::Entity
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

        class ExcludeInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


}
}

#endif /* _CISCO_IOS_XR_IPV4_OSPF_CFG_2_ */

