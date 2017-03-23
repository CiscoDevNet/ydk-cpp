#ifndef _CISCO_IOS_XR_IPV6_OSPFV3_OPER_2_
#define _CISCO_IOS_XR_IPV6_OSPFV3_OPER_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv6_ospfv3_oper_0.hpp"
#include "Cisco_IOS_XR_ipv6_ospfv3_oper_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv6_ospfv3_oper {


class Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime : public Entity
{
    public:
        SpfStatTime();
        ~SpfStatTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dijkstra; //type: uint32
        YLeaf intra_prefix; //type: uint32
        YLeaf intra_prefix_del; //type: uint32
        YLeaf inter_prefix; //type: uint32
        YLeaf inter_prefix_del; //type: uint32
        YLeaf external_prefix; //type: uint32
        YLeaf external_prefix_del; //type: uint32
        YLeaf rib_add; //type: uint32
        YLeaf rib_del; //type: uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime


class Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::RawioStats : public Entity
{
    public:
        RawioStats();
        ~RawioStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf raw_conn_open; //type: uint64
        YLeaf raw_conn_close; //type: uint64
        YLeaf raw_conn_error; //type: uint64
        YLeaf in_packets; //type: uint64
        YLeaf in_bytes; //type: uint64
        YLeaf in_long_packets; //type: uint64
        YLeaf in_malloc_drops; //type: uint64
        YLeaf in_handle_drops; //type: uint64
        YLeaf in_short_drops; //type: uint64
        YLeaf in_error_drops; //type: uint64
        YLeaf in_ipsec_drops; //type: uint64
        YLeaf in_queue_drops; //type: uint64
        YLeaf out_packets; //type: uint64
        YLeaf out_bytes; //type: uint64
        YLeaf out_nofd_drops; //type: uint64
        YLeaf out_error_drops; //type: uint64
        YLeaf out_ipsec_drops; //type: uint64
        YLeaf out_nopak_drops; //type: uint64
        YLeaf out_pakapi_errors; //type: uint64
        YLeaf raw_conn_state; //type: uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::RawioStats


class Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::PrefixPriorityStats : public Entity
{
    public:
        PrefixPriorityStats();
        ~PrefixPriorityStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf critical; //type: uint32
        YLeaf high; //type: uint32
        YLeaf medium; //type: uint32
        YLeaf low; //type: uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::PrefixPriorityStats


class Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::VrfRibBatchStats : public Entity
{
    public:
        VrfRibBatchStats();
        ~VrfRibBatchStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf batches_sent; //type: uint32
        YLeaf routes_sent; //type: uint32
        YLeaf routes_pending; //type: uint32
        YLeaf max_routes; //type: uint32
        YLeaf paths_sent; //type: uint32
        YLeaf paths_pending; //type: uint32
        YLeaf paths_add; //type: uint32
        YLeaf paths_add_errs; //type: uint32
        YLeaf paths_del; //type: uint32
        YLeaf paths_del_errs; //type: uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::VrfRibBatchStats


class Ospfv3::Processes::Process::Vrfs::Vrf::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Protocol; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Protocol
        class Ospfv3_; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_
        class Route; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Route

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_> ospfv3;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Protocol> protocol;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Route> route;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Summary


class Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Protocol : public Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol_router_id; //type: string
        YLeaf administrative_distance; //type: uint32
        YLeaf administrative_distance_inter_area; //type: uint32
        YLeaf administrative_distance_external; //type: uint32
        YLeaf is_graceful_restart; //type: boolean
        YLeaf distribute_list_in; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Protocol


class Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_ : public Entity
{
    public:
        Ospfv3_();
        ~Ospfv3_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf is_role_standby; //type: boolean
        YLeaf role; //type: uint32
        YLeaf is_nsr_enabled; //type: boolean
        YLeaf is_nsr_switchover_on_restart; //type: boolean
        YLeaf is_router_id_stalled; //type: boolean
        YLeaf is_opaque_capable; //type: boolean
        YLeaf is_area_border_router; //type: boolean
        YLeaf is_as_border_router; //type: boolean
        YLeaf metric; //type: uint32
        YLeaf is_default_originated; //type: boolean
        YLeaf is_default_always; //type: boolean
        YLeaf default_metric; //type: uint32
        YLeaf default_metric_type; //type: Ospfv3DefaultMetricEnum
        YLeaf default_tag; //type: uint32
        YLeaf is_default_policy; //type: boolean
        YLeaf default_policy_name; //type: string
        YLeaf spf_start_time; //type: uint32
        YLeaf spf_hold_time; //type: uint32
        YLeaf spf_maximum_time; //type: uint32
        YLeaf lsa_start_time; //type: uint32
        YLeaf lsa_hold_time; //type: uint32
        YLeaf lsa_maximum_time; //type: uint32
        YLeaf minimum_lsa_interval; //type: uint32
        YLeaf lsa_group_interval; //type: uint32
        YLeaf lsa_flood_pacing_interval; //type: uint32
        YLeaf lsa_retransmission_pacing_interval; //type: uint32
        YLeaf as_ls_as; //type: uint32
        YLeaf opaque_lsas; //type: uint32
        YLeaf opaque_lsa_checksum; //type: uint32
        YLeaf as_dc_bitless_ls_as; //type: uint32
        YLeaf as_do_not_age_ls_as; //type: uint32
        YLeaf areas; //type: uint16
        YLeaf normal_areas; //type: uint16
        YLeaf stub_areas; //type: uint16
        YLeaf nssa_areas; //type: uint16
        YLeaf as_lsa_flood_list_length; //type: uint32
        YLeaf is_grace_restart_enabled; //type: boolean
        YLeaf last_nsf_time; //type: uint32
        YLeaf grace_resync_time; //type: uint32
        YLeaf maximum_interfaces; //type: uint32
        YLeaf maximum_paths; //type: uint32
        YLeaf redistribution_limit; //type: uint32
        YLeaf redistribution_threshold; //type: uint32
        YLeaf is_auto_cost; //type: boolean
        YLeaf reference_bandwidth; //type: uint32
        YLeaf context_name; //type: string
        YLeaf snmp_trap_enabled; //type: boolean
        YLeaf graceful_shutdown_state; //type: Ospfv3GracefulShutdownStateEnum

        class DomainId; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId
        class StubRouter; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter
        class IpfrrTiebreakers; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::IpfrrTiebreakers

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId> domain_id;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::IpfrrTiebreakers> > ipfrr_tiebreakers;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter> > stub_router;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_


class Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId : public Entity
{
    public:
        DomainId();
        ~DomainId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrimaryDomainId; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::PrimaryDomainId
        class SecondaryDomainId; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::SecondaryDomainId

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::PrimaryDomainId> primary_domain_id;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::SecondaryDomainId> > secondary_domain_id;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId


class Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::PrimaryDomainId : public Entity
{
    public:
        PrimaryDomainId();
        ~PrimaryDomainId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf domain_id_type; //type: uint16
        YLeaf domain_id_value; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::PrimaryDomainId


class Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::SecondaryDomainId : public Entity
{
    public:
        SecondaryDomainId();
        ~SecondaryDomainId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf domain_id_type; //type: uint16
        YLeaf domain_id_value; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::SecondaryDomainId


class Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter : public Entity
{
    public:
        StubRouter();
        ~StubRouter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mode; //type: StubRouterModeEnum
        YLeaf active; //type: boolean
        YLeaf remaining_time; //type: uint32
        YLeaf set_reason; //type: StubRouterTriggerEnum
        YLeaf unset_reason; //type: StubRouterExitReasonEnum
        YLeaf include_stub_links; //type: boolean
        YLeaf summary_lsa_metric; //type: uint32
        YLeaf external_lsa_metric; //type: uint32
        YLeaf abr_off_reason; //type: StubRouterAbrOffReasonEnum

        class UnsetTime; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::UnsetTime
        class StartTime; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::StartTime
        class AbrResumeTime; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::AbrResumeTime
        class Trigger; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::AbrResumeTime> abr_resume_time;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::StartTime> start_time;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger> > trigger;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::UnsetTime> unset_time;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter


class Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::UnsetTime : public Entity
{
    public:
        UnsetTime();
        ~UnsetTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::UnsetTime


class Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::StartTime : public Entity
{
    public:
        StartTime();
        ~StartTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::StartTime


class Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::AbrResumeTime : public Entity
{
    public:
        AbrResumeTime();
        ~AbrResumeTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::AbrResumeTime


class Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger : public Entity
{
    public:
        Trigger();
        ~Trigger();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf trigger; //type: StubRouterTriggerEnum
        YLeaf wait_for_bgp; //type: boolean
        YLeaf unset_reason; //type: StubRouterExitReasonEnum
        YLeaf time; //type: uint32

        class UnsetTime; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime
        class StartTime; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime> start_time;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime> unset_time;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger


class Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime : public Entity
{
    public:
        UnsetTime();
        ~UnsetTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime


class Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime : public Entity
{
    public:
        StartTime();
        ~StartTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime


class Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::IpfrrTiebreakers : public Entity
{
    public:
        IpfrrTiebreakers();
        ~IpfrrTiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tiebreaker_type; //type: IpfrrTbrkrEnum
        YLeaf tiebreaker_index; //type: uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::IpfrrTiebreakers


class Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Route : public Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_id; //type: string
        YLeaf intra_area_route; //type: uint32
        YLeaf inter_area_route; //type: uint32
        YLeaf extern_one_route; //type: uint32
        YLeaf extern_two_route; //type: uint32
        YLeaf nssa_one_route; //type: uint32
        YLeaf nssa_two_route; //type: uint32
        YLeaf total_sent_route; //type: uint32
        YLeaf route_connected; //type: uint32
        YLeaf redistribution_route; //type: uint32
        YLeaf total_received_route; //type: uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Route


class Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable : public Entity
{
    public:
        RetransmissionListProcessTable();
        ~RetransmissionListProcessTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Retransmission; //type: Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission> > retransmission;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable


class Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission : public Entity
{
    public:
        Retransmission();
        ~Retransmission();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf retransmission_neighbor_address; //type: string
        YLeaf is_retransmissionvirtual_link; //type: boolean
        YLeaf retransmissionvirtual_link_id; //type: uint32
        YLeaf is_retransmission_sham_link; //type: boolean
        YLeaf retransmission_sham_link_id; //type: uint32
        YLeaf retransmission_timer; //type: uint32
        YLeaf retransmission_length; //type: uint32

        class RetransmissionvirtualLinkDb; //type: Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb
        class RetransmissionAreaDb; //type: Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb
        class RetransmissionAsdb; //type: Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb> > retransmission_area_db;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb> > retransmission_asdb;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb> > retransmissionvirtual_link_db;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission


class Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb : public Entity
{
    public:
        RetransmissionvirtualLinkDb();
        ~RetransmissionvirtualLinkDb();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf header_lsa_type; //type: Ospfv3Lsa1Enum
        YLeaf header_lsa_age; //type: uint16
        YLeaf header_lsa_id; //type: string
        YLeaf header_advertising_router; //type: string
        YLeaf header_sequence_number; //type: int32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb


class Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb : public Entity
{
    public:
        RetransmissionAreaDb();
        ~RetransmissionAreaDb();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf header_lsa_type; //type: Ospfv3Lsa1Enum
        YLeaf header_lsa_age; //type: uint16
        YLeaf header_lsa_id; //type: string
        YLeaf header_advertising_router; //type: string
        YLeaf header_sequence_number; //type: int32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb


class Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb : public Entity
{
    public:
        RetransmissionAsdb();
        ~RetransmissionAsdb();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf header_lsa_type; //type: Ospfv3Lsa1Enum
        YLeaf header_lsa_age; //type: uint16
        YLeaf header_lsa_id; //type: string
        YLeaf header_advertising_router; //type: string
        YLeaf header_sequence_number; //type: int32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb


class Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums : public Entity
{
    public:
        BadChecksums();
        ~BadChecksums();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BadChecksum; //type: Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum> > bad_checksum;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums


class Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum : public Entity
{
    public:
        BadChecksum();
        ~BadChecksum();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_number; //type: uint32
        YLeaf received_checksum; //type: uint16
        YLeaf computed_checksum; //type: uint16
        YLeaf received_data; //type: string

        class Timestamp; //type: Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum::Timestamp

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum::Timestamp> timestamp;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum


class Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum::Timestamp : public Entity
{
    public:
        Timestamp();
        ~Timestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum::Timestamp


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable : public Entity
{
    public:
        DatabaseSummaryTable();
        ~DatabaseSummaryTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DatabaseSummary; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary> database_summary;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary : public Entity
{
    public:
        DatabaseSummary();
        ~DatabaseSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf database_router_id; //type: string
        YLeaf is_opaque_database_capable; //type: boolean

        class DatabaseCounters; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters
        class AreaDatabase; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase> > area_database;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters> database_counters;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters : public Entity
{
    public:
        DatabaseCounters();
        ~DatabaseCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList lsa; //type: list of  uint32
        YLeafList deleted_lsa; //type: list of  uint32
        YLeafList max_age_lsa; //type: list of  uint32
        YLeafList lsa_checksum; //type: list of  uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase : public Entity
{
    public:
        AreaDatabase();
        ~AreaDatabase();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_area_id; //type: string

        class AreaDatabaseSummary; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary> area_database_summary;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary : public Entity
{
    public:
        AreaDatabaseSummary();
        ~AreaDatabaseSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList lsa; //type: list of  uint32
        YLeafList deleted_lsa; //type: list of  uint32
        YLeafList max_age_lsa; //type: list of  uint32
        YLeafList lsa_checksum; //type: list of  uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary


class Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable : public Entity
{
    public:
        NeighborProcessTable();
        ~NeighborProcessTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Neighbor; //type: Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor> > neighbor;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable


class Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_address_xr; //type: string
        YLeaf neighbor_interface_id; //type: uint32
        YLeaf neighbor_dr_priority; //type: uint8
        YLeaf neighbor_state; //type: Ospfv3NeighborStateEnum
        YLeaf neighbor_designated_router; //type: string
        YLeaf neighbor_dead_timer; //type: uint32
        YLeaf neighbor_up_time; //type: uint32
        YLeaf neighbor_virtual_link_id; //type: uint32
        YLeaf is_neighbor_virtual_link; //type: boolean
        YLeaf neighbor_sham_link_id; //type: uint32
        YLeaf is_neighbor_sham_link; //type: boolean

        class NeighborDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail
        class NeighborBfdInfo; //type: Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborBfdInfo

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborBfdInfo> neighbor_bfd_info;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail> neighbor_detail;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor


class Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail : public Entity
{
    public:
        NeighborDetail();
        ~NeighborDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf state_changes; //type: uint16
        YLeaf neighbor_cost; //type: uint16
        YLeaf is_neighbor_filtered; //type: boolean
        YLeaf neighbor_designated_router_address; //type: string
        YLeaf neighbor_backup_designated_router_address; //type: string
        YLeaf interface_type; //type: Ospfv3InterfaceEnum
        YLeaf poll_interval; //type: uint32
        YLeaf next_poll_interval; //type: uint32
        YLeaf neighbor_ignore_timer; //type: uint32
        YLeaf neighbor_option; //type: uint32
        YLeaf pending_events; //type: uint16

        class NeighborRetransmission; //type: Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission> neighbor_retransmission;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission : public Entity
{
    public:
        NeighborRetransmission();
        ~NeighborRetransmission();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf database_descriptor_retransmissions; //type: uint32
        YLeaf area_flood_index; //type: uint32
        YLeaf as_flood_index; //type: uint32
        YLeaf link_flood_index; //type: uint32
        YLeaf neighbor_retransmissions; //type: uint32
        YLeaf retransmissions; //type: uint32
        YLeaf area_first_flood; //type: uint32
        YLeaf area_first_flood_index; //type: uint32
        YLeaf as_first_flood; //type: uint32
        YLeaf as_first_flood_index; //type: uint32
        YLeaf link_first_flood; //type: uint32
        YLeaf link_first_flood_index; //type: uint32
        YLeaf area_next_flood; //type: uint32
        YLeaf area_next_flood_index; //type: uint32
        YLeaf as_next_flood; //type: uint32
        YLeaf as_next_flood_index; //type: uint32
        YLeaf link_next_flood; //type: uint32
        YLeaf link_next_flood_index; //type: uint32
        YLeaf last_retransmission_length; //type: uint32
        YLeaf maximum_retransmission_length; //type: uint32
        YLeaf last_retransmission_time; //type: uint32
        YLeaf maximum_retransmission_time; //type: uint32
        YLeaf lsa_retransmission_timer; //type: uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission


class Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborBfdInfo : public Entity
{
    public:
        NeighborBfdInfo();
        ~NeighborBfdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bfd_intf_enable_mode; //type: uint32
        YLeaf bfd_status_flag; //type: uint8



}; // Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborBfdInfo


class Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes : public Entity
{
    public:
        FastReroutes();
        ~FastReroutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FastReroute; //type: Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute> > fast_reroute;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes


class Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute : public Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf area_id; //type: int32
        YLeaf ipfrr_topo_area_id; //type: string
        YLeaf ipfrr_router_id; //type: string
        YLeaf ipfrr_area_revision; //type: uint32

        class IpfrrTopo; //type: Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute::IpfrrTopo

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute::IpfrrTopo> > ipfrr_topo;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute


class Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute::IpfrrTopo : public Entity
{
    public:
        IpfrrTopo();
        ~IpfrrTopo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_id; //type: string
        YLeaf lsaid; //type: uint32
        YLeaf distance; //type: uint32
        YLeaf type4; //type: boolean
        YLeaf revision; //type: uint32
        YLeaf neighbor_sourced; //type: boolean
        YLeaf dr; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute::IpfrrTopo


class Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable : public Entity
{
    public:
        InterfaceBriefProcessTable();
        ~InterfaceBriefProcessTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceBrief; //type: Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable::InterfaceBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable::InterfaceBrief> > interface_brief;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable


class Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable::InterfaceBrief : public Entity
{
    public:
        InterfaceBrief();
        ~InterfaceBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_address; //type: string
        YLeaf interface_link_cost; //type: uint16
        YLeaf ospf_interface_state; //type: Ospfv3InterfaceStateEnum
        YLeaf interface_neighbors; //type: uint16
        YLeaf interface_adjacent_neighbors; //type: uint16
        YLeaf network_type; //type: Ospfv3InterfaceEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable::InterfaceBrief


class Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable : public Entity
{
    public:
        NeighborDetailProcessTable();
        ~NeighborDetailProcessTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NeighborDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail> > neighbor_detail;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable


class Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail : public Entity
{
    public:
        NeighborDetail();
        ~NeighborDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_address_xr; //type: string
        YLeaf neighbor_interface_id; //type: uint32
        YLeaf neighbor_dr_priority; //type: uint8
        YLeaf neighbor_state; //type: Ospfv3NeighborStateEnum
        YLeaf neighbor_designated_router; //type: string
        YLeaf neighbor_dead_timer; //type: uint32
        YLeaf neighbor_up_time; //type: uint32
        YLeaf neighbor_virtual_link_id; //type: uint32
        YLeaf is_neighbor_virtual_link; //type: boolean
        YLeaf neighbor_sham_link_id; //type: uint32
        YLeaf is_neighbor_sham_link; //type: boolean

        class NeighborDetail_; //type: Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_
        class NeighborBfdInfo; //type: Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo> neighbor_bfd_info;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_> neighbor_detail;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_ : public Entity
{
    public:
        NeighborDetail_();
        ~NeighborDetail_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf state_changes; //type: uint16
        YLeaf neighbor_cost; //type: uint16
        YLeaf is_neighbor_filtered; //type: boolean
        YLeaf neighbor_designated_router_address; //type: string
        YLeaf neighbor_backup_designated_router_address; //type: string
        YLeaf interface_type; //type: Ospfv3InterfaceEnum
        YLeaf poll_interval; //type: uint32
        YLeaf next_poll_interval; //type: uint32
        YLeaf neighbor_ignore_timer; //type: uint32
        YLeaf neighbor_option; //type: uint32
        YLeaf pending_events; //type: uint16

        class NeighborRetransmission; //type: Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission> neighbor_retransmission;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_


class Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission : public Entity
{
    public:
        NeighborRetransmission();
        ~NeighborRetransmission();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf database_descriptor_retransmissions; //type: uint32
        YLeaf area_flood_index; //type: uint32
        YLeaf as_flood_index; //type: uint32
        YLeaf link_flood_index; //type: uint32
        YLeaf neighbor_retransmissions; //type: uint32
        YLeaf retransmissions; //type: uint32
        YLeaf area_first_flood; //type: uint32
        YLeaf area_first_flood_index; //type: uint32
        YLeaf as_first_flood; //type: uint32
        YLeaf as_first_flood_index; //type: uint32
        YLeaf link_first_flood; //type: uint32
        YLeaf link_first_flood_index; //type: uint32
        YLeaf area_next_flood; //type: uint32
        YLeaf area_next_flood_index; //type: uint32
        YLeaf as_next_flood; //type: uint32
        YLeaf as_next_flood_index; //type: uint32
        YLeaf link_next_flood; //type: uint32
        YLeaf link_next_flood_index; //type: uint32
        YLeaf last_retransmission_length; //type: uint32
        YLeaf maximum_retransmission_length; //type: uint32
        YLeaf last_retransmission_time; //type: uint32
        YLeaf maximum_retransmission_time; //type: uint32
        YLeaf lsa_retransmission_timer; //type: uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission


class Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo : public Entity
{
    public:
        NeighborBfdInfo();
        ~NeighborBfdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bfd_intf_enable_mode; //type: uint32
        YLeaf bfd_status_flag; //type: uint8



}; // Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo


class Ospfv3::Processes::Process::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NsrStats; //type: Ospfv3::Processes::Process::Statistics::NsrStats
        class RibThreadStats; //type: Ospfv3::Processes::Process::Statistics::RibThreadStats
        class IssuStats; //type: Ospfv3::Processes::Process::Statistics::IssuStats
        class NsrPlStats; //type: Ospfv3::Processes::Process::Statistics::NsrPlStats
        class ProtocolStats; //type: Ospfv3::Processes::Process::Statistics::ProtocolStats
        class SpfStats; //type: Ospfv3::Processes::Process::Statistics::SpfStats
        class RawioStats; //type: Ospfv3::Processes::Process::Statistics::RawioStats
        class PrefixPriorityStats; //type: Ospfv3::Processes::Process::Statistics::PrefixPriorityStats
        class VrfRibBatchStats; //type: Ospfv3::Processes::Process::Statistics::VrfRibBatchStats

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::IssuStats> issu_stats;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::NsrPlStats> nsr_pl_stats;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::NsrStats> nsr_stats;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::PrefixPriorityStats> prefix_priority_stats;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::ProtocolStats> protocol_stats;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::RawioStats> rawio_stats;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::RibThreadStats> rib_thread_stats;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::SpfStats> spf_stats;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::VrfRibBatchStats> vrf_rib_batch_stats;


}; // Ospfv3::Processes::Process::Statistics


class Ospfv3::Processes::Process::Statistics::NsrStats : public Entity
{
    public:
        NsrStats();
        ~NsrStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nsr_revision; //type: int32
        YLeaf nsr_fsm_state; //type: int32
        YLeaf nsr_version; //type: uint32
        YLeaf nsr_node_id; //type: uint32
        YLeaf nsr_peer_version; //type: uint32
        YLeaf nsr_peer_node_id; //type: uint32
        YLeaf nsr_mtu; //type: uint32
        YLeaf nsr_nbr_qad_qid; //type: uint32
        YLeaf nsr_lsa_qad_qid; //type: uint32
        YLeaf nsr_nbr_qad_mdata_count; //type: uint32
        YLeaf nsr_lsa_qad_mdata_count; //type: uint32
        YLeaf nsr_nbr_init_sync_pend_count; //type: int32
        YLeaf nsr_lsa_init_sync_pend_count; //type: int32
        YLeaf nsr_nbr_seq_no; //type: uint32
        YLeaf nsr_intf_seq_no; //type: uint32
        YLeaf nsr_tmr_quant; //type: int32
        YLeaf nsr_conn_to_active_attempts; //type: uint64
        YLeaf nsr_conn_to_active_fails; //type: uint64
        YLeaf nsr_conn_to_active_opens; //type: uint64
        YLeaf nsr_conn_to_active_closes; //type: uint64
        YLeaf nsr_conn_to_active_errors; //type: uint64

        class NsrThdStats; //type: Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats
        class NsrRtrThdSched; //type: Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched> nsr_rtr_thd_sched;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats> nsr_thd_stats;


}; // Ospfv3::Processes::Process::Statistics::NsrStats


class Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats : public Entity
{
    public:
        NsrThdStats();
        ~NsrThdStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nsr_pulse_quant; //type: int32
        YLeaf nsr_events_in_q; //type: uint32
        YLeaf nsr_events_tx; //type: uint64
        YLeaf nsr_events_rx; //type: uint64
        YLeaf nsr_bad_pulses_rx; //type: uint64
        YLeaf nsr_good_pulses_rx; //type: uint64
        YLeaf nsr_pulses_tx; //type: uint64
        YLeaf nsr_pulse_tx_fails; //type: uint64

        class NsrPri; //type: Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats::NsrPri

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats::NsrPri> > nsr_pri;


}; // Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats


class Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats::NsrPri : public Entity
{
    public:
        NsrPri();
        ~NsrPri();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nsr_sched_pri; //type: OspfNsrSchedPriEnum
        YLeaf nsr_sched_quant; //type: uint8
        YLeaf nsr_sched_remain_quant; //type: uint8
        YLeaf nsr_sched_evs_in_q; //type: uint16
        YLeaf nsr_sched_max_evs; //type: uint16
        YLeaf nsr_sched_peak_q_len; //type: uint16
        YLeaf nsr_sched_evs_qd; //type: uint64
        YLeaf nsr_sched_enq_fails; //type: uint64
        YLeaf nsr_sched_evs_deqd; //type: uint64



}; // Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats::NsrPri


class Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched : public Entity
{
    public:
        NsrRtrThdSched();
        ~NsrRtrThdSched();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nsr_pulse_quant; //type: int32
        YLeaf nsr_events_in_q; //type: uint32
        YLeaf nsr_events_tx; //type: uint64
        YLeaf nsr_events_rx; //type: uint64
        YLeaf nsr_bad_pulses_rx; //type: uint64
        YLeaf nsr_good_pulses_rx; //type: uint64
        YLeaf nsr_pulses_tx; //type: uint64
        YLeaf nsr_pulse_tx_fails; //type: uint64

        class NsrPri; //type: Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched::NsrPri

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched::NsrPri> > nsr_pri;


}; // Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched


class Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched::NsrPri : public Entity
{
    public:
        NsrPri();
        ~NsrPri();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nsr_sched_pri; //type: OspfNsrSchedPriEnum
        YLeaf nsr_sched_quant; //type: uint8
        YLeaf nsr_sched_remain_quant; //type: uint8
        YLeaf nsr_sched_evs_in_q; //type: uint16
        YLeaf nsr_sched_max_evs; //type: uint16
        YLeaf nsr_sched_peak_q_len; //type: uint16
        YLeaf nsr_sched_evs_qd; //type: uint64
        YLeaf nsr_sched_enq_fails; //type: uint64
        YLeaf nsr_sched_evs_deqd; //type: uint64



}; // Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched::NsrPri


class Ospfv3::Processes::Process::Statistics::RibThreadStats : public Entity
{
    public:
        RibThreadStats();
        ~RibThreadStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf wq_thread_active; //type: boolean
        YLeaf wq_signals; //type: uint32
        YLeaf rib_base_clock; //type: uint64
        YLeaf rib_batch_sent; //type: uint32
        YLeaf rib_batch_purged; //type: uint32
        YLeaf rib_drop_version; //type: uint32
        YLeaf rib_drop_conn; //type: uint32
        YLeaf rib_batch_ok; //type: uint32
        YLeaf rib_batch_backup; //type: uint32
        YLeaf rib_batch_limit; //type: uint32
        YLeaf rib_batch_no_table; //type: uint32
        YLeaf rib_batch_some_err; //type: uint32
        YLeaf rib_batch_err; //type: uint32
        YLeaf rib_route_limit; //type: uint32
        YLeaf rib_route_some_err; //type: uint32
        YLeaf rib_route_err; //type: uint32
        YLeaf rib_path_limit; //type: uint32
        YLeaf rib_path_err; //type: uint32
        YLeaf rib_max_latency; //type: uint64
        YLeaf rib_sum_latency; //type: uint64

        class ThreadQ; //type: Ospfv3::Processes::Process::Statistics::RibThreadStats::ThreadQ
        class RibBaseTime; //type: Ospfv3::Processes::Process::Statistics::RibThreadStats::RibBaseTime
        class Holdq; //type: Ospfv3::Processes::Process::Statistics::RibThreadStats::Holdq

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::RibThreadStats::Holdq> > holdq;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::RibThreadStats::RibBaseTime> rib_base_time;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::RibThreadStats::ThreadQ> thread_q;


}; // Ospfv3::Processes::Process::Statistics::RibThreadStats


class Ospfv3::Processes::Process::Statistics::RibThreadStats::ThreadQ : public Entity
{
    public:
        ThreadQ();
        ~ThreadQ();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf wq_eqtime; //type: uint64
        YLeaf wq_dqtime; //type: uint64
        YLeaf wq_first_eqtime; //type: uint64
        YLeaf wq_len_cur; //type: int32
        YLeaf wq_len_max; //type: int32
        YLeaf wq_total_enqueued; //type: uint32
        YLeaf wq_total_dequeued; //type: uint32
        YLeaf wq_eneueue_errs; //type: uint32
        YLeaf wq_dequeue_errs; //type: uint32
        YLeaf wq_max_latency; //type: uint64
        YLeaf wq_sum_latency; //type: uint64



}; // Ospfv3::Processes::Process::Statistics::RibThreadStats::ThreadQ


class Ospfv3::Processes::Process::Statistics::RibThreadStats::RibBaseTime : public Entity
{
    public:
        RibBaseTime();
        ~RibBaseTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospfv3::Processes::Process::Statistics::RibThreadStats::RibBaseTime


class Ospfv3::Processes::Process::Statistics::RibThreadStats::Holdq : public Entity
{
    public:
        Holdq();
        ~Holdq();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf wq_eqtime; //type: uint64
        YLeaf wq_dqtime; //type: uint64
        YLeaf wq_first_eqtime; //type: uint64
        YLeaf wq_len_cur; //type: int32
        YLeaf wq_len_max; //type: int32
        YLeaf wq_total_enqueued; //type: uint32
        YLeaf wq_total_dequeued; //type: uint32
        YLeaf wq_eneueue_errs; //type: uint32
        YLeaf wq_dequeue_errs; //type: uint32
        YLeaf wq_max_latency; //type: uint64
        YLeaf wq_sum_latency; //type: uint64



}; // Ospfv3::Processes::Process::Statistics::RibThreadStats::Holdq


class Ospfv3::Processes::Process::Statistics::IssuStats : public Entity
{
    public:
        IssuStats();
        ~IssuStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nsr_revision; //type: int32
        YLeaf nsr_fsm_state; //type: int32
        YLeaf nsr_version; //type: uint32
        YLeaf nsr_node_id; //type: uint32
        YLeaf nsr_peer_version; //type: uint32
        YLeaf nsr_peer_node_id; //type: uint32
        YLeaf nsr_mtu; //type: uint32
        YLeaf nsr_nbr_qad_qid; //type: uint32
        YLeaf nsr_lsa_qad_qid; //type: uint32
        YLeaf nsr_nbr_qad_mdata_count; //type: uint32
        YLeaf nsr_lsa_qad_mdata_count; //type: uint32
        YLeaf nsr_nbr_init_sync_pend_count; //type: int32
        YLeaf nsr_lsa_init_sync_pend_count; //type: int32
        YLeaf nsr_nbr_seq_no; //type: uint32
        YLeaf nsr_intf_seq_no; //type: uint32
        YLeaf nsr_tmr_quant; //type: int32
        YLeaf nsr_conn_to_active_attempts; //type: uint64
        YLeaf nsr_conn_to_active_fails; //type: uint64
        YLeaf nsr_conn_to_active_opens; //type: uint64
        YLeaf nsr_conn_to_active_closes; //type: uint64
        YLeaf nsr_conn_to_active_errors; //type: uint64

        class NsrThdStats; //type: Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats
        class NsrRtrThdSched; //type: Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched> nsr_rtr_thd_sched;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats> nsr_thd_stats;


}; // Ospfv3::Processes::Process::Statistics::IssuStats


class Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats : public Entity
{
    public:
        NsrThdStats();
        ~NsrThdStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nsr_pulse_quant; //type: int32
        YLeaf nsr_events_in_q; //type: uint32
        YLeaf nsr_events_tx; //type: uint64
        YLeaf nsr_events_rx; //type: uint64
        YLeaf nsr_bad_pulses_rx; //type: uint64
        YLeaf nsr_good_pulses_rx; //type: uint64
        YLeaf nsr_pulses_tx; //type: uint64
        YLeaf nsr_pulse_tx_fails; //type: uint64

        class NsrPri; //type: Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats::NsrPri

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats::NsrPri> > nsr_pri;


}; // Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats


class Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats::NsrPri : public Entity
{
    public:
        NsrPri();
        ~NsrPri();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nsr_sched_pri; //type: OspfNsrSchedPriEnum
        YLeaf nsr_sched_quant; //type: uint8
        YLeaf nsr_sched_remain_quant; //type: uint8
        YLeaf nsr_sched_evs_in_q; //type: uint16
        YLeaf nsr_sched_max_evs; //type: uint16
        YLeaf nsr_sched_peak_q_len; //type: uint16
        YLeaf nsr_sched_evs_qd; //type: uint64
        YLeaf nsr_sched_enq_fails; //type: uint64
        YLeaf nsr_sched_evs_deqd; //type: uint64



}; // Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats::NsrPri


class Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched : public Entity
{
    public:
        NsrRtrThdSched();
        ~NsrRtrThdSched();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nsr_pulse_quant; //type: int32
        YLeaf nsr_events_in_q; //type: uint32
        YLeaf nsr_events_tx; //type: uint64
        YLeaf nsr_events_rx; //type: uint64
        YLeaf nsr_bad_pulses_rx; //type: uint64
        YLeaf nsr_good_pulses_rx; //type: uint64
        YLeaf nsr_pulses_tx; //type: uint64
        YLeaf nsr_pulse_tx_fails; //type: uint64

        class NsrPri; //type: Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched::NsrPri

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched::NsrPri> > nsr_pri;


}; // Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched


class Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched::NsrPri : public Entity
{
    public:
        NsrPri();
        ~NsrPri();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nsr_sched_pri; //type: OspfNsrSchedPriEnum
        YLeaf nsr_sched_quant; //type: uint8
        YLeaf nsr_sched_remain_quant; //type: uint8
        YLeaf nsr_sched_evs_in_q; //type: uint16
        YLeaf nsr_sched_max_evs; //type: uint16
        YLeaf nsr_sched_peak_q_len; //type: uint16
        YLeaf nsr_sched_evs_qd; //type: uint64
        YLeaf nsr_sched_enq_fails; //type: uint64
        YLeaf nsr_sched_evs_deqd; //type: uint64



}; // Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched::NsrPri


class Ospfv3::Processes::Process::Statistics::NsrPlStats : public Entity
{
    public:
        NsrPlStats();
        ~NsrPlStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NcdPri; //type: Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri> > ncd_pri;


}; // Ospfv3::Processes::Process::Statistics::NsrPlStats


class Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri : public Entity
{
    public:
        NcdPri();
        ~NcdPri();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList num_sent; //type: list of  uint64
        YLeafList num_recv; //type: list of  uint64

        class NumSentDrop; //type: Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumSentDrop
        class NumRecvDrop; //type: Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumRecvDrop

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumRecvDrop> > num_recv_drop;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumSentDrop> > num_sent_drop;


}; // Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri


class Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumSentDrop : public Entity
{
    public:
        NumSentDrop();
        ~NumSentDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList nsr_pl_send_drop_array; //type: list of  uint32



}; // Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumSentDrop


class Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumRecvDrop : public Entity
{
    public:
        NumRecvDrop();
        ~NumRecvDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList nsr_pl_recv_drop_array; //type: list of  uint32



}; // Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumRecvDrop


class Ospfv3::Processes::Process::Statistics::ProtocolStats : public Entity
{
    public:
        ProtocolStats();
        ~ProtocolStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtocolStat; //type: Ospfv3::Processes::Process::Statistics::ProtocolStats::ProtocolStat

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::ProtocolStats::ProtocolStat> > protocol_stat;


}; // Ospfv3::Processes::Process::Statistics::ProtocolStats


class Ospfv3::Processes::Process::Statistics::ProtocolStats::ProtocolStat : public Entity
{
    public:
        ProtocolStat();
        ~ProtocolStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf total_in_packets; //type: uint64
        YLeaf hello_in_packets; //type: uint64
        YLeaf dbdes_in_packets; //type: uint64
        YLeaf dbdes_in_ls_as; //type: uint64
        YLeaf ls_req_in_packets; //type: uint64
        YLeaf ls_req_in_ls_as; //type: uint64
        YLeaf ls_upd_in_packets; //type: uint64
        YLeaf ls_upd_in_ignored; //type: uint64
        YLeaf ls_upd_in_ls_as; //type: uint64
        YLeaf ls_ack_in_packets; //type: uint64
        YLeaf ls_ack_in_ls_as; //type: uint64
        YLeaf total_out_packets; //type: uint64
        YLeaf hello_out_packets; //type: uint64
        YLeaf dbdes_out_packets; //type: uint64
        YLeaf dbdes_out_ls_as; //type: uint64
        YLeaf ls_req_out_packets; //type: uint64
        YLeaf ls_req_out_ls_as; //type: uint64
        YLeaf ls_upd_out_packets; //type: uint64
        YLeaf ls_upd_out_ls_as; //type: uint64
        YLeaf ls_ack_out_packets; //type: uint64
        YLeaf ls_ack_out_ls_as; //type: uint64
        YLeaf dropped_in_gs; //type: uint64
        YLeaf checksum_err; //type: uint64



}; // Ospfv3::Processes::Process::Statistics::ProtocolStats::ProtocolStat


class Ospfv3::Processes::Process::Statistics::SpfStats : public Entity
{
    public:
        SpfStats();
        ~SpfStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SpfHeader; //type: Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader
        class SpfRuntime; //type: Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader> spf_header;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime> > spf_runtime;


}; // Ospfv3::Processes::Process::Statistics::SpfStats


class Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader : public Entity
{
    public:
        SpfHeader();
        ~SpfHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf header_router_id; //type: string
        YLeaf header_sp_fs; //type: uint32

        class AreaSummary; //type: Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader::AreaSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader::AreaSummary> > area_summary;


}; // Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader


class Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader::AreaSummary : public Entity
{
    public:
        AreaSummary();
        ~AreaSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf area_id; //type: uint32
        YLeaf sp_fs; //type: uint32



}; // Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader::AreaSummary


class Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime : public Entity
{
    public:
        SpfRuntime();
        ~SpfRuntime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: uint32
        YLeaf rib_add_routes; //type: uint32
        YLeaf rib_delete_routes; //type: uint32
        YLeaf reason_flags; //type: string
        YLeaf lsa_changes; //type: int16

        class GlobalTime; //type: Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::GlobalTime
        class Lsa; //type: Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::Lsa
        class AreaStat; //type: Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat> > area_stat;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::GlobalTime> global_time;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::Lsa> > lsa;


}; // Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime


class Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::GlobalTime : public Entity
{
    public:
        GlobalTime();
        ~GlobalTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dijkstra; //type: uint32
        YLeaf intra_prefix; //type: uint32
        YLeaf intra_prefix_del; //type: uint32
        YLeaf inter_prefix; //type: uint32
        YLeaf inter_prefix_del; //type: uint32
        YLeaf external_prefix; //type: uint32
        YLeaf external_prefix_del; //type: uint32
        YLeaf rib_add; //type: uint32
        YLeaf rib_del; //type: uint32



}; // Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::GlobalTime


class Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::Lsa : public Entity
{
    public:
        Lsa();
        ~Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_area_id; //type: uint32
        YLeaf lsa_advertising_router; //type: string
        YLeaf lsa_id; //type: string
        YLeaf lsa_type; //type: uint8
        YLeaf lsa_flush; //type: boolean



}; // Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::Lsa


class Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat : public Entity
{
    public:
        AreaStat();
        ~AreaStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf spf_stat_area_id; //type: uint32
        YLeafList spf_stat_lsa_type_count; //type: list of  uint32

        class SpfStatTime; //type: Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime> spf_stat_time;


}; // Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat


class Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime : public Entity
{
    public:
        SpfStatTime();
        ~SpfStatTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dijkstra; //type: uint32
        YLeaf intra_prefix; //type: uint32
        YLeaf intra_prefix_del; //type: uint32
        YLeaf inter_prefix; //type: uint32
        YLeaf inter_prefix_del; //type: uint32
        YLeaf external_prefix; //type: uint32
        YLeaf external_prefix_del; //type: uint32
        YLeaf rib_add; //type: uint32
        YLeaf rib_del; //type: uint32



}; // Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime


class Ospfv3::Processes::Process::Statistics::RawioStats : public Entity
{
    public:
        RawioStats();
        ~RawioStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf raw_conn_open; //type: uint64
        YLeaf raw_conn_close; //type: uint64
        YLeaf raw_conn_error; //type: uint64
        YLeaf in_packets; //type: uint64
        YLeaf in_bytes; //type: uint64
        YLeaf in_long_packets; //type: uint64
        YLeaf in_malloc_drops; //type: uint64
        YLeaf in_handle_drops; //type: uint64
        YLeaf in_short_drops; //type: uint64
        YLeaf in_error_drops; //type: uint64
        YLeaf in_ipsec_drops; //type: uint64
        YLeaf in_queue_drops; //type: uint64
        YLeaf out_packets; //type: uint64
        YLeaf out_bytes; //type: uint64
        YLeaf out_nofd_drops; //type: uint64
        YLeaf out_error_drops; //type: uint64
        YLeaf out_ipsec_drops; //type: uint64
        YLeaf out_nopak_drops; //type: uint64
        YLeaf out_pakapi_errors; //type: uint64
        YLeaf raw_conn_state; //type: uint32



}; // Ospfv3::Processes::Process::Statistics::RawioStats


class Ospfv3::Processes::Process::Statistics::PrefixPriorityStats : public Entity
{
    public:
        PrefixPriorityStats();
        ~PrefixPriorityStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf critical; //type: uint32
        YLeaf high; //type: uint32
        YLeaf medium; //type: uint32
        YLeaf low; //type: uint32



}; // Ospfv3::Processes::Process::Statistics::PrefixPriorityStats


class Ospfv3::Processes::Process::Statistics::VrfRibBatchStats : public Entity
{
    public:
        VrfRibBatchStats();
        ~VrfRibBatchStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf batches_sent; //type: uint32
        YLeaf routes_sent; //type: uint32
        YLeaf routes_pending; //type: uint32
        YLeaf max_routes; //type: uint32
        YLeaf paths_sent; //type: uint32
        YLeaf paths_pending; //type: uint32
        YLeaf paths_add; //type: uint32
        YLeaf paths_add_errs; //type: uint32
        YLeaf paths_del; //type: uint32
        YLeaf paths_del_errs; //type: uint32



}; // Ospfv3::Processes::Process::Statistics::VrfRibBatchStats


class Ospfv3::Processes::Process::DefaultVrf : public Entity
{
    public:
        DefaultVrf();
        ~DefaultVrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SummaryPrefixes; //type: Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes
        class BorderRouters; //type: Ospfv3::Processes::Process::DefaultVrf::BorderRouters
        class ShamLinkTable; //type: Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable
        class AreaInformations; //type: Ospfv3::Processes::Process::DefaultVrf::AreaInformations
        class DatabaseTable; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable
        class InterfaceProcessTable; //type: Ospfv3::Processes::Process::DefaultVrf::InterfaceProcessTable
        class Redistributions; //type: Ospfv3::Processes::Process::DefaultVrf::Redistributions
        class ExternalRoutes; //type: Ospfv3::Processes::Process::DefaultVrf::ExternalRoutes
        class RequestListProcessTable; //type: Ospfv3::Processes::Process::DefaultVrf::RequestListProcessTable
        class VirtualLink; //type: Ospfv3::Processes::Process::DefaultVrf::VirtualLink
        class FloodListProcessTable; //type: Ospfv3::Processes::Process::DefaultVrf::FloodListProcessTable
        class RouteSummary; //type: Ospfv3::Processes::Process::DefaultVrf::RouteSummary
        class Areas; //type: Ospfv3::Processes::Process::DefaultVrf::Areas
        class InternalRoutes; //type: Ospfv3::Processes::Process::DefaultVrf::InternalRoutes
        class ProtocolAreas; //type: Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas
        class ConnectedRoutes; //type: Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes
        class VrfStatistics; //type: Ospfv3::Processes::Process::DefaultVrf::VrfStatistics
        class Summary; //type: Ospfv3::Processes::Process::DefaultVrf::Summary
        class RetransmissionListProcessTable; //type: Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable
        class BadChecksums; //type: Ospfv3::Processes::Process::DefaultVrf::BadChecksums
        class DatabaseSummaryTable; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable
        class NeighborProcessTable; //type: Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable
        class FastReroutes; //type: Ospfv3::Processes::Process::DefaultVrf::FastReroutes
        class InterfaceBriefProcessTable; //type: Ospfv3::Processes::Process::DefaultVrf::InterfaceBriefProcessTable
        class NeighborDetailProcessTable; //type: Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::AreaInformations> area_informations;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas> areas;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::BadChecksums> bad_checksums;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::BorderRouters> border_routers;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes> connected_routes;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable> database_summary_table;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable> database_table;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::ExternalRoutes> external_routes;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::FastReroutes> fast_reroutes;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::FloodListProcessTable> flood_list_process_table;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::InterfaceBriefProcessTable> interface_brief_process_table;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::InterfaceProcessTable> interface_process_table;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::InternalRoutes> internal_routes;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable> neighbor_detail_process_table;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable> neighbor_process_table;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas> protocol_areas;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Redistributions> redistributions;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::RequestListProcessTable> request_list_process_table;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable> retransmission_list_process_table;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::RouteSummary> route_summary;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable> sham_link_table;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes> summary_prefixes;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::VirtualLink> virtual_link;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::VrfStatistics> vrf_statistics;


}; // Ospfv3::Processes::Process::DefaultVrf


class Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes : public Entity
{
    public:
        SummaryPrefixes();
        ~SummaryPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SummaryPrefix; //type: Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix> > summary_prefix;


}; // Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes


class Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix : public Entity
{
    public:
        SummaryPrefix();
        ~SummaryPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf prefix_metric; //type: uint32
        YLeaf prefix_metric_type; //type: Ospfv3DefaultMetricEnum
        YLeaf tag; //type: uint32



}; // Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix


class Ospfv3::Processes::Process::DefaultVrf::BorderRouters : public Entity
{
    public:
        BorderRouters();
        ~BorderRouters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BorderRouter; //type: Ospfv3::Processes::Process::DefaultVrf::BorderRouters::BorderRouter

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::BorderRouters::BorderRouter> > border_router;


}; // Ospfv3::Processes::Process::DefaultVrf::BorderRouters


class Ospfv3::Processes::Process::DefaultVrf::BorderRouters::BorderRouter : public Entity
{
    public:
        BorderRouter();
        ~BorderRouter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf border_router_id; //type: string

        class BorderRouterPath; //type: Ospfv3::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath> > border_router_path;


}; // Ospfv3::Processes::Process::DefaultVrf::BorderRouters::BorderRouter


class Ospfv3::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath : public Entity
{
    public:
        BorderRouterPath();
        ~BorderRouterPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_intra_area_router; //type: boolean
        YLeaf border_router_route_metric; //type: uint32
        YLeaf border_router_next_hop; //type: string
        YLeaf interface_name; //type: string
        YLeaf border_router_type; //type: Ospfv3BorderRouteEnum
        YLeaf border_router_area_id; //type: string
        YLeaf spf_version; //type: uint32



}; // Ospfv3::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath


class Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable : public Entity
{
    public:
        ShamLinkTable();
        ~ShamLinkTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sham_link_neighbor_id; //type: string
        YLeaf sham_link_source_address; //type: string
        YLeaf sham_link_dest_address; //type: string
        YLeaf sham_link_state; //type: Ospfv3InterfaceStateEnum
        YLeaf sham_link_demand_circuit; //type: boolean
        YLeaf sham_link_dc_bitless_lsa; //type: uint32
        YLeaf sham_link_ifindex; //type: uint32
        YLeaf sham_link_area; //type: string
        YLeaf sham_link_cost; //type: uint16
        YLeaf sham_link_transmission_delay; //type: uint16
        YLeaf sham_link_hello_interval; //type: uint32
        YLeaf sham_link_dead_interval; //type: uint32
        YLeaf sham_link_wait_interval; //type: uint32
        YLeaf sham_link_retransmission_interval; //type: uint32
        YLeaf sham_link_next_hello; //type: uint32
        YLeaf sham_link_passive; //type: boolean
        YLeaf is_sham_link_ip_security_required; //type: boolean
        YLeaf is_sham_link_ip_security_active; //type: boolean
        YLeaf is_sham_link_authentication_enabled; //type: boolean
        YLeaf virtual_link_authentication_spi; //type: uint32
        YLeaf sham_link_authentication_transmit; //type: uint32
        YLeaf is_sham_link_encryption_enabled; //type: boolean
        YLeaf sham_link_encryption_spi; //type: uint32
        YLeaf sham_link_encryption_transmitted; //type: uint32
        YLeaf sham_link_encrypted_authentication_transmitted; //type: uint32
        YLeaf sham_link_gr_enabled; //type: boolean
        YLeaf sham_link_gr; //type: boolean
        YLeaf sham_link_last_gr; //type: uint32

        class ShamLinkNeighbor; //type: Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor> sham_link_neighbor;


}; // Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable


class Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor : public Entity
{
    public:
        ShamLinkNeighbor();
        ~ShamLinkNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sham_link_suppress_hello; //type: boolean
        YLeaf sham_link_state; //type: Ospfv3NeighborStateEnum

        class ShamLinkRetransmission; //type: Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission> sham_link_retransmission;


}; // Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor


class Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission : public Entity
{
    public:
        ShamLinkRetransmission();
        ~ShamLinkRetransmission();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf database_descriptor_retransmissions; //type: uint32
        YLeaf area_flood_index; //type: uint32
        YLeaf as_flood_index; //type: uint32
        YLeaf link_flood_index; //type: uint32
        YLeaf neighbor_retransmissions; //type: uint32
        YLeaf retransmissions; //type: uint32
        YLeaf area_first_flood; //type: uint32
        YLeaf area_first_flood_index; //type: uint32
        YLeaf as_first_flood; //type: uint32
        YLeaf as_first_flood_index; //type: uint32
        YLeaf link_first_flood; //type: uint32
        YLeaf link_first_flood_index; //type: uint32
        YLeaf area_next_flood; //type: uint32
        YLeaf area_next_flood_index; //type: uint32
        YLeaf as_next_flood; //type: uint32
        YLeaf as_next_flood_index; //type: uint32
        YLeaf link_next_flood; //type: uint32
        YLeaf link_next_flood_index; //type: uint32
        YLeaf last_retransmission_length; //type: uint32
        YLeaf maximum_retransmission_length; //type: uint32
        YLeaf last_retransmission_time; //type: uint32
        YLeaf maximum_retransmission_time; //type: uint32
        YLeaf lsa_retransmission_timer; //type: uint32



}; // Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission


class Ospfv3::Processes::Process::DefaultVrf::AreaInformations : public Entity
{
    public:
        AreaInformations();
        ~AreaInformations();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AreaInformation; //type: Ospfv3::Processes::Process::DefaultVrf::AreaInformations::AreaInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::AreaInformations::AreaInformation> > area_information;


}; // Ospfv3::Processes::Process::DefaultVrf::AreaInformations


class Ospfv3::Processes::Process::DefaultVrf::AreaInformations::AreaInformation : public Entity
{
    public:
        AreaInformation();
        ~AreaInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf area_id; //type: int32
        YLeaf is_backbone_area_active; //type: boolean
        YLeaf area_interfaces; //type: uint16
        YLeaf is_area_stubbed; //type: boolean
        YLeaf is_area_total_stubbed; //type: boolean
        YLeaf stub_default_cost; //type: uint16
        YLeaf is_area_nssa; //type: boolean
        YLeaf nssa_no_redistribution; //type: boolean
        YLeaf is_nssa_translated; //type: boolean
        YLeaf is_nssa_default; //type: boolean
        YLeaf is_rrr_enabled; //type: boolean
        YLeaf sp_fs; //type: uint32
        YLeaf area_opaque_lsas; //type: uint32
        YLeaf area_opaque_lsa_checksum; //type: uint32
        YLeaf area_dc_bitless_ls_as; //type: uint32
        YLeaf indication_ls_as; //type: uint32
        YLeaf do_not_age_ls_as; //type: uint32
        YLeaf flood_list_length; //type: uint32
        YLeaf area_lfa_interface_count; //type: uint32
        YLeaf area_per_prefix_lfa_interface_count; //type: uint32
        YLeaf area_lfa_revision; //type: uint32

        class AreaRange; //type: Ospfv3::Processes::Process::DefaultVrf::AreaInformations::AreaInformation::AreaRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::AreaInformations::AreaInformation::AreaRange> > area_range;


}; // Ospfv3::Processes::Process::DefaultVrf::AreaInformations::AreaInformation


class Ospfv3::Processes::Process::DefaultVrf::AreaInformations::AreaInformation::AreaRange : public Entity
{
    public:
        AreaRange();
        ~AreaRange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf range_prefix; //type: string
        YLeaf range_prefix_length; //type: uint32
        YLeaf net_cost; //type: uint32
        YLeaf status; //type: Ospfv3AreaRangeStatusEnum
        YLeaf is_cost_configured; //type: boolean



}; // Ospfv3::Processes::Process::DefaultVrf::AreaInformations::AreaInformation::AreaRange


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable : public Entity
{
    public:
        DatabaseTable();
        ~DatabaseTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LsaTable; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable
        class LsaInternalTable; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable> lsa_internal_table;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable> lsa_table;


}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable : public Entity
{
    public:
        LsaTable();
        ~LsaTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Lsa; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa> > lsa;


}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa : public Entity
{
    public:
        Lsa();
        ~Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf area_id; //type: int32
        YLeaf ls_type; //type: Ospfv3LsaEnum
        YLeaf advertising_router; //type: string
        YLeaf ls_id; //type: int32
        YLeaf interface_name; //type: string

        class LsaInfo; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo> lsa_info;


}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo : public Entity
{
    public:
        LsaInfo();
        ~LsaInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_info_type; //type: Ospfv3LsaInfoTypesEnum

        class LsaSummaryInfo; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo
        class RouterLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType
        class NetworkLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType
        class InterAreaPrefixLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType
        class InterAreaRouterLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType
        class ExternalLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType
        class NssalsaType; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType
        class LinkLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType
        class IntraAreaPrefixLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType
        class GraceLsa; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa
        class UnknownLinkLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType
        class UnknownAreaLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType
        class UnknownAslsaType; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType
        class UnknownLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType> external_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa> grace_lsa;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType> inter_area_prefix_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType> inter_area_router_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType> intra_area_prefix_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType> link_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo> lsa_summary_info;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType> network_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType> nssalsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType> router_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType> unknown_area_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType> unknown_aslsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType> unknown_link_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType> unknown_lsa_type;


}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo : public Entity
{
    public:
        LsaSummaryInfo();
        ~LsaSummaryInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf links; //type: uint16
        YLeaf router_la_bits; //type: uint8
        YLeaf reference_type; //type: uint16
        YLeaf reference_lsa_id; //type: uint32
        YLeaf lsa_router_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf interface_name; //type: string
        YLeaf is_virtual_link; //type: boolean
        YLeaf virtual_link_id; //type: uint32
        YLeaf is_sham_link; //type: boolean
        YLeaf sham_link_id; //type: uint32

        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType : public Entity
{
    public:
        RouterLsaType();
        ~RouterLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_la_bits; //type: uint8

        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail
        class RpfPath; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath
        class Link; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link> > link;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader> lsa_header;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath> rpf_path;


}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath : public Entity
{
    public:
        RpfPath();
        ~RpfPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rpf_multicast_next_hop; //type: uint32
        YLeaf interface_name; //type: string



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link : public Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf link_type; //type: Ospfv3LinkEnum
        YLeaf link_metric; //type: uint16
        YLeaf link_interface_id; //type: uint32
        YLeaf link_neighbor_interface_id; //type: uint32
        YLeaf link_neighbor_router_id; //type: uint32



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType : public Entity
{
    public:
        NetworkLsaType();
        ~NetworkLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList neighbor_router; //type: list of  string

        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType : public Entity
{
    public:
        InterAreaPrefixLsaType();
        ~InterAreaPrefixLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf priority; //type: PrefixPriorityEnum

        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType : public Entity
{
    public:
        InterAreaRouterLsaType();
        ~InterAreaRouterLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_router_id; //type: uint32

        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType : public Entity
{
    public:
        ExternalLsaType();
        ~ExternalLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf metric_type; //type: Ospfv3DefaultMetricEnum
        YLeaf tos_cost; //type: uint32
        YLeaf is_forwarding_address_set; //type: boolean
        YLeaf forwarding_address; //type: string
        YLeaf external_tag; //type: uint32
        YLeaf priority; //type: PrefixPriorityEnum

        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType : public Entity
{
    public:
        NssalsaType();
        ~NssalsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf metric_type; //type: Ospfv3DefaultMetricEnum
        YLeaf tos_cost; //type: uint32
        YLeaf is_forwarding_address_set; //type: boolean
        YLeaf forwarding_address; //type: string
        YLeaf external_tag; //type: uint32
        YLeaf priority; //type: PrefixPriorityEnum

        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType : public Entity
{
    public:
        LinkLsaType();
        ~LinkLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf is_virtual_link; //type: boolean
        YLeaf virtual_link_id; //type: uint32
        YLeaf is_sham_link; //type: boolean
        YLeaf sham_link_id; //type: uint32
        YLeaf lsa_link_local; //type: string
        YLeaf router_priority; //type: uint8

        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail
        class Prefix; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader> lsa_header;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix> > prefix;


}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf ospfv3_prefix_length; //type: uint8
        YLeaf ospfv3_prefix_options; //type: uint8
        YLeaf ospfv3_prefix_metric; //type: uint16
        YLeaf priority; //type: PrefixPriorityEnum



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType : public Entity
{
    public:
        IntraAreaPrefixLsaType();
        ~IntraAreaPrefixLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reference_type; //type: Ospfv3Lsa1Enum
        YLeaf reference_lsa_id; //type: uint32
        YLeaf reference_advertised_router; //type: string

        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail
        class Prefix; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader> lsa_header;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix> > prefix;


}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf ospfv3_prefix_length; //type: uint8
        YLeaf ospfv3_prefix_options; //type: uint8
        YLeaf ospfv3_prefix_metric; //type: uint16
        YLeaf priority; //type: PrefixPriorityEnum



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa : public Entity
{
    public:
        GraceLsa();
        ~GraceLsa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf grace_period; //type: uint32
        YLeaf grace_reason; //type: Ospfv3GracefulRestartReasonEnum

        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType : public Entity
{
    public:
        UnknownLinkLsaType();
        ~UnknownLinkLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf is_virtual_link; //type: boolean
        YLeaf virtual_link_id; //type: uint32
        YLeaf is_sham_link; //type: boolean
        YLeaf sham_link_id; //type: uint32

        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType : public Entity
{
    public:
        UnknownAreaLsaType();
        ~UnknownAreaLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf is_virtual_link; //type: boolean
        YLeaf virtual_link_id; //type: uint32
        YLeaf is_sham_link; //type: boolean
        YLeaf sham_link_id; //type: uint32

        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType : public Entity
{
    public:
        UnknownAslsaType();
        ~UnknownAslsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf is_virtual_link; //type: boolean
        YLeaf virtual_link_id; //type: uint32
        YLeaf is_sham_link; //type: boolean
        YLeaf sham_link_id; //type: uint32

        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType : public Entity
{
    public:
        UnknownLsaType();
        ~UnknownLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf is_virtual_link; //type: boolean
        YLeaf virtual_link_id; //type: uint32
        YLeaf is_sham_link; //type: boolean
        YLeaf sham_link_id; //type: uint32

        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable : public Entity
{
    public:
        LsaInternalTable();
        ~LsaInternalTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Lsa; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa> > lsa;


}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa : public Entity
{
    public:
        Lsa();
        ~Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf area_id; //type: int32
        YLeaf ls_type; //type: Ospfv3LsaEnum
        YLeaf advertising_router; //type: string
        YLeaf ls_id; //type: int32
        YLeaf interface_name; //type: string

        class LsaInfo; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo> lsa_info;


}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo : public Entity
{
    public:
        LsaInfo();
        ~LsaInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_info_type; //type: Ospfv3LsaInfoTypesEnum

        class LsaSummaryInfo; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo
        class RouterLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType
        class NetworkLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType
        class InterAreaPrefixLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType
        class InterAreaRouterLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType
        class ExternalLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType
        class NssalsaType; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType
        class LinkLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType
        class IntraAreaPrefixLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType
        class GraceLsa; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa
        class UnknownLinkLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType
        class UnknownAreaLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType
        class UnknownAslsaType; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType
        class UnknownLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType> external_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa> grace_lsa;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType> inter_area_prefix_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType> inter_area_router_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType> intra_area_prefix_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType> link_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo> lsa_summary_info;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType> network_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType> nssalsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType> router_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType> unknown_area_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType> unknown_aslsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType> unknown_link_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType> unknown_lsa_type;


}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo : public Entity
{
    public:
        LsaSummaryInfo();
        ~LsaSummaryInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf links; //type: uint16
        YLeaf router_la_bits; //type: uint8
        YLeaf reference_type; //type: uint16
        YLeaf reference_lsa_id; //type: uint32
        YLeaf lsa_router_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf interface_name; //type: string
        YLeaf is_virtual_link; //type: boolean
        YLeaf virtual_link_id; //type: uint32
        YLeaf is_sham_link; //type: boolean
        YLeaf sham_link_id; //type: uint32

        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType : public Entity
{
    public:
        RouterLsaType();
        ~RouterLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_la_bits; //type: uint8

        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail
        class RpfPath; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath
        class Link; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link> > link;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader> lsa_header;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath> rpf_path;


}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail


}
}

#endif /* _CISCO_IOS_XR_IPV6_OSPFV3_OPER_2_ */

