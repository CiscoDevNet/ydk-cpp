#ifndef _CISCO_IOS_XR_IPV4_OSPF_CFG_0_
#define _CISCO_IOS_XR_IPV4_OSPF_CFG_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ospf_cfg {

class Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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

        class Processes; //type: Ospf::Processes
        class Global; //type: Ospf::Global

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Global> global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes> processes;
        
}; // Ospf


class Ospf::Global : public ydk::Entity
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

        ydk::YLeaf dns_name_lookup; //type: empty

}; // Ospf::Global


class Ospf::Processes : public ydk::Entity
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

        class Process; //type: Ospf::Processes::Process

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process> > process;
        
}; // Ospf::Processes


class Ospf::Processes::Process : public ydk::Entity
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

        ydk::YLeaf process_name; //type: string
        ydk::YLeaf start; //type: empty
        ydk::YLeaf nsr; //type: Nsr
        ydk::YLeaf protocol_shutdown; //type: OspfShutdown
        ydk::YLeaf running; //type: empty
        class Snmp; //type: Ospf::Processes::Process::Snmp
        class Distribute; //type: Ospf::Processes::Process::Distribute
        class Vrfs; //type: Ospf::Processes::Process::Vrfs
        class TraceBufs; //type: Ospf::Processes::Process::TraceBufs
        class GracefulShutdownTimers; //type: Ospf::Processes::Process::GracefulShutdownTimers
        class DefaultVrf; //type: Ospf::Processes::Process::DefaultVrf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf> default_vrf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Distribute> distribute; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::GracefulShutdownTimers> graceful_shutdown_timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Snmp> snmp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::TraceBufs> trace_bufs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs> vrfs;
        
}; // Ospf::Processes::Process


class Ospf::Processes::Process::DefaultVrf : public ydk::Entity
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

        ydk::YLeaf ignore_mospf; //type: empty
        ydk::YLeaf router_id; //type: string
        ydk::YLeaf type7; //type: empty
        ydk::YLeaf snmp_context; //type: string
        ydk::YLeaf maximum_interfaces; //type: uint32
        ydk::YLeaf no_opaque; //type: empty
        ydk::YLeaf spf_prefix_priority; //type: string
        ydk::YLeaf maximum_paths; //type: uint32
        ydk::YLeaf adjacency_changes; //type: OspfLogAdj
        ydk::YLeaf default_metric; //type: uint32
        class MonitorConvergence; //type: Ospf::Processes::Process::DefaultVrf::MonitorConvergence
        class SegmentRouting; //type: Ospf::Processes::Process::DefaultVrf::SegmentRouting
        class Mpls; //type: Ospf::Processes::Process::DefaultVrf::Mpls
        class Microloop; //type: Ospf::Processes::Process::DefaultVrf::Microloop
        class MaximumRedistributePrefix; //type: Ospf::Processes::Process::DefaultVrf::MaximumRedistributePrefix
        class DefaultInformation; //type: Ospf::Processes::Process::DefaultVrf::DefaultInformation
        class Af; //type: Ospf::Processes::Process::DefaultVrf::Af
        class Queue; //type: Ospf::Processes::Process::DefaultVrf::Queue
        class MaxMetric; //type: Ospf::Processes::Process::DefaultVrf::MaxMetric
        class Nsf; //type: Ospf::Processes::Process::DefaultVrf::Nsf
        class ProcessScope; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope
        class Redistribution; //type: Ospf::Processes::Process::DefaultVrf::Redistribution
        class AdjacencyStagger; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyStagger
        class MaxLsa; //type: Ospf::Processes::Process::DefaultVrf::MaxLsa
        class AutoCost; //type: Ospf::Processes::Process::DefaultVrf::AutoCost
        class Ucmp; //type: Ospf::Processes::Process::DefaultVrf::Ucmp
        class FastReroute; //type: Ospf::Processes::Process::DefaultVrf::FastReroute
        class SummaryPrefixes; //type: Ospf::Processes::Process::DefaultVrf::SummaryPrefixes
        class OutgoingRouteUpdates; //type: Ospf::Processes::Process::DefaultVrf::OutgoingRouteUpdates
        class Distance; //type: Ospf::Processes::Process::DefaultVrf::Distance
        class AreaAddresses; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses
        class Timers; //type: Ospf::Processes::Process::DefaultVrf::Timers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AdjacencyStagger> adjacency_stagger;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Af> af; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses> area_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AutoCost> auto_cost;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::DefaultInformation> default_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Distance> distance;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::MaxLsa> max_lsa; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::MaxMetric> max_metric;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::MaximumRedistributePrefix> maximum_redistribute_prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Microloop> microloop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::MonitorConvergence> monitor_convergence;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Mpls> mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Nsf> nsf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::OutgoingRouteUpdates> outgoing_route_updates;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope> process_scope;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Queue> queue;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Redistribution> redistribution;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::SegmentRouting> segment_routing;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::SummaryPrefixes> summary_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Timers> timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Ucmp> ucmp;
        
}; // Ospf::Processes::Process::DefaultVrf


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


class Ospf::Processes::Process::DefaultVrf::Af : public ydk::Entity
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

        ydk::YLeaf af_name; //type: OspfAddressFamily
        ydk::YLeaf saf_name; //type: OspfSubAddressFamily

}; // Ospf::Processes::Process::DefaultVrf::Af


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress> > area_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId> > area_area_id;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaRanges> area_ranges;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope> area_scope;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes> multi_area_interface_scopes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes> name_scopes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Nssa> nssa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes> sham_link_scopes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes> virtual_link_scopes;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaRanges : public ydk::Entity
{
    public:
        AreaRanges();
        ~AreaRanges();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AreaRange; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaRanges::AreaRange

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaRanges::AreaRange> > area_range;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaRanges


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaRanges::AreaRange : public ydk::Entity
{
    public:
        AreaRange();
        ~AreaRange();

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
        ydk::YLeaf netmask; //type: string
        ydk::YLeaf not_advertise; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaRanges::AreaRange


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::CostFallback> cost_fallback;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::DeadIntervalMinimal> dead_interval_minimal;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::DistributeList> distribute_list; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Security> security;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope


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
        class MessageDigestKeies; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies> message_digest_keies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::Type> type;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies : public ydk::Entity
{
    public:
        MessageDigestKeies();
        ~MessageDigestKeies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey> > message_digest_key;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;
        
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;
        
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;
        
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker> > tiebreaker;
        
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope> > multi_area_interface_scope;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback> cost_fallback;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal> dead_interval_minimal;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList> distribute_list; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors> neighbors;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope


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
        class MessageDigestKeies; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies> message_digest_keies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type> type;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies : public ydk::Entity
{
    public:
        MessageDigestKeies();
        ~MessageDigestKeies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey> > message_digest_key;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey


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


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;
        
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;
        
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;
        
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker> > tiebreaker;
        
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor> > neighbor;
        
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope> > name_scope;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback> cost_fallback;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal> dead_interval_minimal;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList> distribute_list; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid> prefix_sid; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict> prefix_sid_strict; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security> security;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope


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
        class MessageDigestKeies; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies> message_digest_keies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type> type;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies : public ydk::Entity
{
    public:
        MessageDigestKeies();
        ~MessageDigestKeies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey> > message_digest_key;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;
        
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;
        
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;
        
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker> > tiebreaker;
        
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor> > neighbor;
        
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


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Nssa : public ydk::Entity
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
        ydk::YLeaf no_summary; //type: boolean
        ydk::YLeaf nssa_def_metric; //type: uint32
        ydk::YLeaf metric_type; //type: OspfLinkStateMetric

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Nssa


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope> > sham_link_scope;
        
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
        class MessageDigestKeies; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies> message_digest_keies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type> type;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies : public ydk::Entity
{
    public:
        MessageDigestKeies();
        ~MessageDigestKeies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey> > message_digest_key;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope> > virtual_link_scope;
        
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
        class MessageDigestKeies; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies> message_digest_keies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type> type;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies : public ydk::Entity
{
    public:
        MessageDigestKeies();
        ~MessageDigestKeies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey> > message_digest_key;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey


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


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId : public ydk::Entity
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
        ydk::YLeaf route_policy_in; //type: string
        ydk::YLeaf default_cost; //type: uint32
        ydk::YLeaf route_policy_out; //type: string
        ydk::YLeaf stub; //type: boolean
        ydk::YLeaf mpls_traffic_eng; //type: empty
        ydk::YLeaf external_out; //type: boolean
        ydk::YLeaf summary_in; //type: boolean
        ydk::YLeaf segment_routing; //type: OspfSegmentRouting
        ydk::YLeaf running; //type: empty
        class VirtualLinkScopes; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes
        class ShamLinkScopes; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes
        class AreaScope; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope
        class NameScopes; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes
        class MultiAreaInterfaceScopes; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes
        class AreaRanges; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaRanges
        class Nssa; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Nssa

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaRanges> area_ranges;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope> area_scope;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes> multi_area_interface_scopes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes> name_scopes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Nssa> nssa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes> sham_link_scopes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes> virtual_link_scopes;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaRanges : public ydk::Entity
{
    public:
        AreaRanges();
        ~AreaRanges();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AreaRange; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange> > area_range;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaRanges


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange : public ydk::Entity
{
    public:
        AreaRange();
        ~AreaRange();

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
        ydk::YLeaf netmask; //type: string
        ydk::YLeaf not_advertise; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope : public ydk::Entity
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
        class DistributeList; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList
        class Bfd; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Bfd
        class Authentication; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication
        class Security; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Security
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal
        class FastReroute; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute
        class CostFallback; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback> cost_fallback;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal> dead_interval_minimal;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList> distribute_list; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Security> security;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication : public ydk::Entity
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
        class Type; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type
        class MessageDigestKeies; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies> message_digest_keies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type> type;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies : public ydk::Entity
{
    public:
        MessageDigestKeies();
        ~MessageDigestKeies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey> > message_digest_key;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Bfd : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Bfd


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute : public ydk::Entity
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
        class PerLink; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink
        class PerPrefix; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix> per_prefix;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink : public ydk::Entity
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
        class CandidateInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces : public ydk::Entity
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

        class CandidateInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces : public ydk::Entity
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

        class ExcludeInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix : public ydk::Entity
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
        class RemoteLfa; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa
        class Tiebreakers; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers
        class CandidateInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces : public ydk::Entity
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

        class CandidateInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces : public ydk::Entity
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

        class ExcludeInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers : public ydk::Entity
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

        class Tiebreaker; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker> > tiebreaker;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Security : public ydk::Entity
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

        class Ttl; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl> ttl;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Security


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes : public ydk::Entity
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

        class MultiAreaInterfaceScope; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope> > multi_area_interface_scope;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope : public ydk::Entity
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
        class DistributeList; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList
        class Authentication; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication
        class Neighbors; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal
        class FastReroute; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute
        class CostFallback; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback> cost_fallback;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal> dead_interval_minimal;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList> distribute_list; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors> neighbors;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication : public ydk::Entity
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
        class Type; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type
        class MessageDigestKeies; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies> message_digest_keies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type> type;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies : public ydk::Entity
{
    public:
        MessageDigestKeies();
        ~MessageDigestKeies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey> > message_digest_key;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute : public ydk::Entity
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
        class PerLink; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink
        class PerPrefix; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix> per_prefix;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink : public ydk::Entity
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
        class CandidateInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces : public ydk::Entity
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

        class CandidateInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces : public ydk::Entity
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

        class ExcludeInterface; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix : public ydk::Entity
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
        class RemoteLfa; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa
        class Tiebreakers; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers
        class CandidateInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix

class OspfRedistLsa : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf summary;
        static const ydk::Enum::YLeaf external;

};

class OspfProcFrrRlfaTunnel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf mpls_ldp;

};

class OspfSubAddressFamily : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;

};

class OspfUloopAvoidance : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf protected_;
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf segment_routing;

};

class OspfEigrpRoute : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf external;

};

class OspfRouteLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf type1;
        static const ydk::Enum::YLeaf type2;
        static const ydk::Enum::YLeaf type1_and2;

};

class OspfDomainId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf type0005;
        static const ydk::Enum::YLeaf type0105;
        static const ydk::Enum::YLeaf type0205;
        static const ydk::Enum::YLeaf type8005;

};

class OspfFrrRlfaTunnel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf mpls_ldp;

};

class OspfAuthentication : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf plain;
        static const ydk::Enum::YLeaf md5;

};

class OspfNetwork : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf broadcast;
        static const ydk::Enum::YLeaf non_broadcast;
        static const ydk::Enum::YLeaf point_to_point;
        static const ydk::Enum::YLeaf point_to_multipoint;
        static const ydk::Enum::YLeaf non_broadcast_point_to_multipoint;

};

class OspfAddressFamily : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;

};

class OspfFastReroutePriority : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf high;
        static const ydk::Enum::YLeaf medium;
        static const ydk::Enum::YLeaf low;

};

class OspfShutdown : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf full;
        static const ydk::Enum::YLeaf hostmode;
        static const ydk::Enum::YLeaf onreload;

};

class OspfDistListProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf connected;
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf dagr;

};

class OspfSegmentRouting : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf mpls;

};

class OspfFastRerouteTiebreakers : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf downstream;
        static const ydk::Enum::YLeaf line_card_disjoint;
        static const ydk::Enum::YLeaf lowest_metric;
        static const ydk::Enum::YLeaf node_protect;
        static const ydk::Enum::YLeaf primary_path;
        static const ydk::Enum::YLeaf secondary_path;
        static const ydk::Enum::YLeaf srlg_disjoint;

};

class OspfTraceBufSize : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf size0;
        static const ydk::Enum::YLeaf size256;
        static const ydk::Enum::YLeaf size512;
        static const ydk::Enum::YLeaf size1024;
        static const ydk::Enum::YLeaf size2048;
        static const ydk::Enum::YLeaf size4096;
        static const ydk::Enum::YLeaf size8192;
        static const ydk::Enum::YLeaf size16384;
        static const ydk::Enum::YLeaf size32768;
        static const ydk::Enum::YLeaf size65536;

};

class OspfSegmentRoutingForwarding : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf mpls;

};

class OspfIetfNsf : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;

};

class OspfCiscoNsf : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf always;
        static const ydk::Enum::YLeaf require_nsf_neighbors;

};

class OspfFastRerouteTiebreakersIntf : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf downstream;
        static const ydk::Enum::YLeaf line_card_disjoint;
        static const ydk::Enum::YLeaf lowest_metric;
        static const ydk::Enum::YLeaf node_protect;
        static const ydk::Enum::YLeaf primary_path;
        static const ydk::Enum::YLeaf secondary_path;
        static const ydk::Enum::YLeaf srlg_disjoint;

};

class BfdEnableMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf strict;

};

class OspfRedistProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf connected;
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf rip;
        static const ydk::Enum::YLeaf isis;
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf eigrp;
        static const ydk::Enum::YLeaf dagr;
        static const ydk::Enum::YLeaf subscriber;
        static const ydk::Enum::YLeaf application;
        static const ydk::Enum::YLeaf mobile;

};

class OspfLogAdj : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf brief;
        static const ydk::Enum::YLeaf detail;
        static const ydk::Enum::YLeaf suppress;

};

class OspfSid : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf index_;
        static const ydk::Enum::YLeaf absolute;

};

class OspfIetfNsfSupport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class OspfProcFastReroute : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf per_link;
        static const ydk::Enum::YLeaf per_prefix;

};

class OspfFastReroute : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf per_link;
        static const ydk::Enum::YLeaf per_prefix;

};

class OspfLinkStateMetric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf type1;
        static const ydk::Enum::YLeaf type2;

};

class OspfKeychainAuth : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf keychain;

};

class Nsr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf true_;
        static const ydk::Enum::YLeaf false_;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_OSPF_CFG_0_ */

