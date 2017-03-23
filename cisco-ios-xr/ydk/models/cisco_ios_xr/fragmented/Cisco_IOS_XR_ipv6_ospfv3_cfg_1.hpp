#ifndef _CISCO_IOS_XR_IPV6_OSPFV3_CFG_1_
#define _CISCO_IOS_XR_IPV6_OSPFV3_CFG_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv6_ospfv3_cfg_0.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv6_ospfv3_cfg {


class Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::OnStartup : public Entity
{
    public:
        OnStartup();
        ~OnStartup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf wait_for_bgp; //type: boolean
        YLeaf wait_time; //type: uint32



}; // Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::OnStartup


class Ospfv3::Processes::Process::DefaultVrf::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interval; //type: uint32
        YLeaf detection_multiplier; //type: uint32
        YLeaf fast_detect_mode; //type: Ospfv3BfdEnableModeEnum



}; // Ospfv3::Processes::Process::DefaultVrf::Bfd


class Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter : public Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class All; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter::All

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter::All> all;


}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter


class Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter::All : public Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf out; //type: empty



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter::All


class Ospfv3::Processes::Process::DefaultVrf::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf spi; //type: uint32
        YLeaf algorithm; //type: Ospfv3AuthenticationEnum
        YLeaf password; //type: string



}; // Ospfv3::Processes::Process::DefaultVrf::Authentication


class Ospfv3::Processes::Process::DefaultVrf::GracefulRestart : public Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interval; //type: uint32
        YLeaf strict_lsa_checking; //type: empty
        YLeaf helper; //type: empty
        YLeaf enable; //type: empty
        YLeaf lifetime; //type: uint32



}; // Ospfv3::Processes::Process::DefaultVrf::GracefulRestart


class Ospfv3::Processes::Process::DefaultVrf::DefaultInformation : public Entity
{
    public:
        DefaultInformation();
        ~DefaultInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Originate; //type: Ospfv3::Processes::Process::DefaultVrf::DefaultInformation::Originate

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::DefaultInformation::Originate> originate; // presence node


}; // Ospfv3::Processes::Process::DefaultVrf::DefaultInformation


class Ospfv3::Processes::Process::DefaultVrf::DefaultInformation::Originate : public Entity
{
    public:
        Originate();
        ~Originate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf always; //type: boolean
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: uint32
        YLeaf tag; //type: int32
        YLeaf route_policy_name; //type: string



}; // Ospfv3::Processes::Process::DefaultVrf::DefaultInformation::Originate


class Ospfv3::Processes::Process::DefaultVrf::ProcessScope : public Entity
{
    public:
        ProcessScope();
        ~ProcessScope();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FastReroute; //type: Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute> fast_reroute;


}; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope


class Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute : public Entity
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


        YLeaf fast_reroute_enable; //type: Ospfv3FastRerouteEnum

        class PerLink; //type: Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink
        class PerPrefix; //type: Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink> per_link;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix> per_prefix;


}; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute


class Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink : public Entity
{
    public:
        PerLink();
        ~PerLink();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fast_reroute_use_candidate_only; //type: boolean

        class CandidateInterfaces; //type: Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;


}; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink


class Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces : public Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CandidateInterface; //type: Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;


}; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces


class Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string



}; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces : public Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ExcludeInterface; //type: Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


}; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces


class Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string



}; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix : public Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fast_reroute_use_candidate_only; //type: boolean

        class CandidateInterfaces; //type: Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;


}; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix


class Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces : public Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CandidateInterface; //type: Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;


}; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string



}; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces : public Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ExcludeInterface; //type: Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


}; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string



}; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospfv3::Processes::Process::DefaultVrf::Encryption : public Entity
{
    public:
        Encryption();
        ~Encryption();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf spi; //type: uint32
        YLeaf encryption_algorithm; //type: Ospfv3EncryptionAlgorithmEnum
        YLeaf encryption_password; //type: string
        YLeaf authentication_algorithm; //type: Ospfv3AuthenticationType2Enum
        YLeaf authentication_password; //type: string



}; // Ospfv3::Processes::Process::DefaultVrf::Encryption


class Ospfv3::Processes::Process::DefaultVrf::AutoCost : public Entity
{
    public:
        AutoCost();
        ~AutoCost();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf disable; //type: empty
        YLeaf reference_bandwidth; //type: uint32



}; // Ospfv3::Processes::Process::DefaultVrf::AutoCost


class Ospfv3::Processes::Process::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Vrf; //type: Ospfv3::Processes::Process::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf> > vrf;


}; // Ospfv3::Processes::Process::Vrfs


class Ospfv3::Processes::Process::Vrfs::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string
        YLeaf enable; //type: empty
        YLeaf snmpvrf_trap; //type: empty
        YLeaf prefix_suppression; //type: boolean
        YLeaf retransmit_interval; //type: uint32
        YLeaf passive; //type: boolean
        YLeaf default_metric; //type: uint32
        YLeaf flood_reduction; //type: boolean
        YLeaf hello_interval; //type: uint32
        YLeaf priority; //type: uint32
        YLeaf cost; //type: uint32
        YLeaf dead_interval; //type: uint32
        YLeaf packet_size; //type: uint32
        YLeaf instance; //type: uint32
        YLeaf spf_prefix_priority_policy; //type: string
        YLeaf router_id; //type: string
        YLeaf network; //type: Ospfv3NetworkEnum
        YLeaf mtu_ignore; //type: boolean
        YLeaf log_adjacency_changes; //type: Ospfv3LogAdjEnum
        YLeaf demand_circuit; //type: boolean
        YLeaf transmit_delay; //type: uint32

        class Capability; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Capability
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
        class Authentication; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Authentication
        class GracefulRestart; //type: Ospfv3::Processes::Process::Vrfs::Vrf::GracefulRestart
        class DefaultInformation; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation
        class ProcessScope; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope
        class Encryption; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Encryption
        class AutoCost; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AutoCost

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses> area_addresses;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AutoCost> auto_cost; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Capability> capability;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter> database_filter;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation> default_information;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Distance> distance;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList> distribute_list;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut> distribute_list_out;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DomainId> domain_id;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Encryption> encryption;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute> fast_reroute;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::GracefulRestart> graceful_restart;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Ignore> ignore;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Maximum> maximum;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope> process_scope;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes> redistributes;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Snmp> snmp;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter> stub_router;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes> summary_prefixes;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Timers> timers;


}; // Ospfv3::Processes::Process::Vrfs::Vrf


class Ospfv3::Processes::Process::Vrfs::Vrf::Capability : public Entity
{
    public:
        Capability();
        ~Capability();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_lite; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Capability


class Ospfv3::Processes::Process::Vrfs::Vrf::DomainId : public Entity
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



        class SecondaryDomainIds; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds
        class PrimaryDomainId; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId> primary_domain_id;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds> secondary_domain_ids;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::DomainId


class Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds : public Entity
{
    public:
        SecondaryDomainIds();
        ~SecondaryDomainIds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SecondaryDomainId; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId> > secondary_domain_id;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds


class Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId : public Entity
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


        YLeaf domain_id_type; //type: Ospfv3DomainIdEnum
        YLeaf domain_id_name; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId


class Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId : public Entity
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


        YLeaf domain_id_type; //type: Ospfv3DomainIdEnum
        YLeaf domain_id_name; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses : public Entity
{
    public:
        AreaAddresses();
        ~AreaAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AreaAddress; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress
        class AreaAreaId; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress> > area_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId> > area_area_id;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress : public Entity
{
    public:
        AreaAddress();
        ~AreaAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf stub; //type: boolean
        YLeaf packet_size; //type: uint32
        YLeaf instance; //type: uint32
        YLeaf demand_circuit; //type: boolean
        YLeaf priority; //type: uint32
        YLeaf prefix_suppression; //type: boolean
        YLeaf enable; //type: empty
        YLeaf mtu_ignore; //type: boolean
        YLeaf passive; //type: boolean
        YLeaf hello_interval; //type: uint32
        YLeaf dead_interval; //type: uint32
        YLeaf default_cost; //type: uint32
        YLeaf flood_reduction; //type: boolean
        YLeaf retransmit_interval; //type: uint32
        YLeaf ldp_sync; //type: boolean
        YLeaf network; //type: Ospfv3NetworkEnum
        YLeaf transmit_delay; //type: uint32
        YLeaf cost; //type: uint32

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

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope> area_scope;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter> database_filter;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList> distribute_list;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Encryption> encryption;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa> nssa;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges> ranges;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks> sham_links;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks> virtual_links;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf spi; //type: uint32
        YLeaf algorithm; //type: Ospfv3AuthenticationEnum
        YLeaf password; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Authentication


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf detection_multiplier; //type: uint32
        YLeaf interval; //type: uint32
        YLeaf fast_detect_mode; //type: Ospfv3BfdEnableModeEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Bfd


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges : public Entity
{
    public:
        Ranges();
        ~Ranges();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Range; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::Range

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::Range> > range;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf not_advertise; //type: boolean
        YLeaf cost; //type: uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::Range


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Encryption : public Entity
{
    public:
        Encryption();
        ~Encryption();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf spi; //type: uint32
        YLeaf encryption_algorithm; //type: Ospfv3EncryptionAlgorithmEnum
        YLeaf encryption_password; //type: string
        YLeaf authentication_algorithm; //type: Ospfv3AuthenticationType2Enum
        YLeaf authentication_password; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Encryption


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa : public Entity
{
    public:
        Nssa();
        ~Nssa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf no_redistribution; //type: boolean
        YLeaf default_info_originate; //type: boolean
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: Ospfv3MetricEnum
        YLeaf no_summary; //type: empty



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter : public Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class All; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::All

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::All> all;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::All : public Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf out; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::All


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList : public Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class In; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::In

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::In> in;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::In : public Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_list; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::In


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface> > interface;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf enable; //type: empty
        YLeaf dead_interval; //type: uint32
        YLeaf flood_reduction; //type: boolean
        YLeaf cost; //type: uint32
        YLeaf transmit_delay; //type: uint32
        YLeaf instance; //type: uint32
        YLeaf ldp_sync; //type: boolean
        YLeaf mtu_ignore; //type: boolean
        YLeaf retransmit_interval; //type: uint32
        YLeaf hello_interval; //type: uint32
        YLeaf passive; //type: boolean
        YLeaf packet_size; //type: uint32
        YLeaf prefix_suppression; //type: boolean
        YLeaf priority; //type: uint32
        YLeaf network; //type: Ospfv3NetworkEnum
        YLeaf demand_circuit; //type: boolean

        class Authentication; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication
        class Neighbors; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors
        class Encryption; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption
        class Bfd; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd
        class DatabaseFilter; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter
        class DistributeList; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList
        class FastReroute; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter> database_filter;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList> distribute_list;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption> encryption;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute> fast_reroute;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors> neighbors;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf spi; //type: uint32
        YLeaf algorithm; //type: Ospfv3AuthenticationEnum
        YLeaf password; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors : public Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Neighbor; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor> > neighbor;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor : public Entity
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


        YLeaf neighbor_address; //type: string
        YLeaf priority; //type: uint32
        YLeaf poll_interval; //type: uint32
        YLeaf cost; //type: uint32
        YLeaf database_filter; //type: boolean
        YLeaf zone; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption : public Entity
{
    public:
        Encryption();
        ~Encryption();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf spi; //type: uint32
        YLeaf encryption_algorithm; //type: Ospfv3EncryptionAlgorithmEnum
        YLeaf encryption_password; //type: string
        YLeaf authentication_algorithm; //type: Ospfv3AuthenticationType2Enum
        YLeaf authentication_password; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interval; //type: uint32
        YLeaf fast_detect_mode; //type: Ospfv3BfdEnableModeEnum
        YLeaf detection_multiplier; //type: uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter : public Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class All; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All> all;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All : public Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf out; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList : public Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class In; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In> in;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In : public Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_list; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute : public Entity
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


        YLeaf fast_reroute_enable; //type: Ospfv3FastRerouteEnum

        class PerLink; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink
        class PerPrefix; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink> per_link;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix> per_prefix;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink : public Entity
{
    public:
        PerLink();
        ~PerLink();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fast_reroute_use_candidate_only; //type: boolean

        class CandidateInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces : public Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CandidateInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces : public Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ExcludeInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix : public Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fast_reroute_use_candidate_only; //type: boolean

        class CandidateInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces : public Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CandidateInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces : public Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ExcludeInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope : public Entity
{
    public:
        AreaScope();
        ~AreaScope();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FastReroute; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute> fast_reroute;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute : public Entity
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


        YLeaf fast_reroute_enable; //type: Ospfv3FastRerouteEnum

        class PerLink; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink
        class PerPrefix; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink> per_link;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix> per_prefix;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink : public Entity
{
    public:
        PerLink();
        ~PerLink();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fast_reroute_use_candidate_only; //type: boolean

        class CandidateInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces : public Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CandidateInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces : public Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ExcludeInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix : public Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fast_reroute_use_candidate_only; //type: boolean

        class CandidateInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces : public Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CandidateInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces : public Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ExcludeInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks : public Entity
{
    public:
        ShamLinks();
        ~ShamLinks();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ShamLink; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink> > sham_link;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink : public Entity
{
    public:
        ShamLink();
        ~ShamLink();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf enable; //type: empty
        YLeaf hello_interval; //type: uint32
        YLeaf dead_interval; //type: uint32
        YLeaf retransmit_interval; //type: uint32
        YLeaf transmit_delay; //type: uint32

        class Authentication; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication
        class Encryption; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption> encryption;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf spi; //type: uint32
        YLeaf algorithm; //type: Ospfv3AuthenticationEnum
        YLeaf password; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption : public Entity
{
    public:
        Encryption();
        ~Encryption();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf spi; //type: uint32
        YLeaf encryption_algorithm; //type: Ospfv3EncryptionAlgorithmEnum
        YLeaf encryption_password; //type: string
        YLeaf authentication_algorithm; //type: Ospfv3AuthenticationType2Enum
        YLeaf authentication_password; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks : public Entity
{
    public:
        VirtualLinks();
        ~VirtualLinks();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VirtualLink; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink> > virtual_link;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink : public Entity
{
    public:
        VirtualLink();
        ~VirtualLink();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf virtual_link_address; //type: string
        YLeaf enable; //type: empty
        YLeaf hello_interval; //type: uint32
        YLeaf dead_interval; //type: uint32
        YLeaf retransmit_interval; //type: uint32
        YLeaf transmit_delay; //type: uint32

        class Authentication; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication
        class Encryption; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption> encryption;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf spi; //type: uint32
        YLeaf algorithm; //type: Ospfv3AuthenticationEnum
        YLeaf password; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption : public Entity
{
    public:
        Encryption();
        ~Encryption();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf spi; //type: uint32
        YLeaf encryption_algorithm; //type: Ospfv3EncryptionAlgorithmEnum
        YLeaf encryption_password; //type: string
        YLeaf authentication_algorithm; //type: Ospfv3AuthenticationType2Enum
        YLeaf authentication_password; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId : public Entity
{
    public:
        AreaAreaId();
        ~AreaAreaId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf area_id; //type: int32
        YLeaf stub; //type: boolean
        YLeaf packet_size; //type: uint32
        YLeaf instance; //type: uint32
        YLeaf demand_circuit; //type: boolean
        YLeaf priority; //type: uint32
        YLeaf prefix_suppression; //type: boolean
        YLeaf enable; //type: empty
        YLeaf mtu_ignore; //type: boolean
        YLeaf passive; //type: boolean
        YLeaf hello_interval; //type: uint32
        YLeaf dead_interval; //type: uint32
        YLeaf default_cost; //type: uint32
        YLeaf flood_reduction; //type: boolean
        YLeaf retransmit_interval; //type: uint32
        YLeaf ldp_sync; //type: boolean
        YLeaf network; //type: Ospfv3NetworkEnum
        YLeaf transmit_delay; //type: uint32
        YLeaf cost; //type: uint32

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

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope> area_scope;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter> database_filter;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList> distribute_list;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Encryption> encryption;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa> nssa;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges> ranges;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks> sham_links;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks> virtual_links;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf spi; //type: uint32
        YLeaf algorithm; //type: Ospfv3AuthenticationEnum
        YLeaf password; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Authentication


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf detection_multiplier; //type: uint32
        YLeaf interval; //type: uint32
        YLeaf fast_detect_mode; //type: Ospfv3BfdEnableModeEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Bfd


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges : public Entity
{
    public:
        Ranges();
        ~Ranges();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Range; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::Range

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::Range> > range;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf not_advertise; //type: boolean
        YLeaf cost; //type: uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::Range


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Encryption : public Entity
{
    public:
        Encryption();
        ~Encryption();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf spi; //type: uint32
        YLeaf encryption_algorithm; //type: Ospfv3EncryptionAlgorithmEnum
        YLeaf encryption_password; //type: string
        YLeaf authentication_algorithm; //type: Ospfv3AuthenticationType2Enum
        YLeaf authentication_password; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Encryption


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa : public Entity
{
    public:
        Nssa();
        ~Nssa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf no_redistribution; //type: boolean
        YLeaf default_info_originate; //type: boolean
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: Ospfv3MetricEnum
        YLeaf no_summary; //type: empty



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter : public Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class All; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::All

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::All> all;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::All : public Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf out; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::All


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList : public Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class In; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::In

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::In> in;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::In : public Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_list; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::In


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface> > interface;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf enable; //type: empty
        YLeaf dead_interval; //type: uint32
        YLeaf flood_reduction; //type: boolean
        YLeaf cost; //type: uint32
        YLeaf transmit_delay; //type: uint32
        YLeaf instance; //type: uint32
        YLeaf ldp_sync; //type: boolean
        YLeaf mtu_ignore; //type: boolean
        YLeaf retransmit_interval; //type: uint32
        YLeaf hello_interval; //type: uint32
        YLeaf passive; //type: boolean
        YLeaf packet_size; //type: uint32
        YLeaf prefix_suppression; //type: boolean
        YLeaf priority; //type: uint32
        YLeaf network; //type: Ospfv3NetworkEnum
        YLeaf demand_circuit; //type: boolean

        class Authentication; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication
        class Neighbors; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors
        class Encryption; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption
        class Bfd; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd
        class DatabaseFilter; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter
        class DistributeList; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList
        class FastReroute; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter> database_filter;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList> distribute_list;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption> encryption;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute> fast_reroute;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors> neighbors;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf spi; //type: uint32
        YLeaf algorithm; //type: Ospfv3AuthenticationEnum
        YLeaf password; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors : public Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Neighbor; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor> > neighbor;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor : public Entity
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


        YLeaf neighbor_address; //type: string
        YLeaf priority; //type: uint32
        YLeaf poll_interval; //type: uint32
        YLeaf cost; //type: uint32
        YLeaf database_filter; //type: boolean
        YLeaf zone; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption : public Entity
{
    public:
        Encryption();
        ~Encryption();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf spi; //type: uint32
        YLeaf encryption_algorithm; //type: Ospfv3EncryptionAlgorithmEnum
        YLeaf encryption_password; //type: string
        YLeaf authentication_algorithm; //type: Ospfv3AuthenticationType2Enum
        YLeaf authentication_password; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interval; //type: uint32
        YLeaf fast_detect_mode; //type: Ospfv3BfdEnableModeEnum
        YLeaf detection_multiplier; //type: uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter : public Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class All; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All> all;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All : public Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf out; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList : public Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class In; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In> in;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In : public Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_list; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute : public Entity
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


        YLeaf fast_reroute_enable; //type: Ospfv3FastRerouteEnum

        class PerLink; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink
        class PerPrefix; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink> per_link;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix> per_prefix;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink : public Entity
{
    public:
        PerLink();
        ~PerLink();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fast_reroute_use_candidate_only; //type: boolean

        class CandidateInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces : public Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CandidateInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces : public Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ExcludeInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix : public Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fast_reroute_use_candidate_only; //type: boolean

        class CandidateInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces : public Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CandidateInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces : public Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ExcludeInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope : public Entity
{
    public:
        AreaScope();
        ~AreaScope();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FastReroute; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute> fast_reroute;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute : public Entity
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


        YLeaf fast_reroute_enable; //type: Ospfv3FastRerouteEnum

        class PerLink; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink
        class PerPrefix; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink> per_link;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix> per_prefix;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink : public Entity
{
    public:
        PerLink();
        ~PerLink();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fast_reroute_use_candidate_only; //type: boolean

        class CandidateInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces : public Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CandidateInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces : public Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ExcludeInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix : public Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fast_reroute_use_candidate_only; //type: boolean

        class CandidateInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces : public Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CandidateInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces : public Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ExcludeInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks : public Entity
{
    public:
        ShamLinks();
        ~ShamLinks();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ShamLink; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink> > sham_link;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink : public Entity
{
    public:
        ShamLink();
        ~ShamLink();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf enable; //type: empty
        YLeaf hello_interval; //type: uint32
        YLeaf dead_interval; //type: uint32
        YLeaf retransmit_interval; //type: uint32
        YLeaf transmit_delay; //type: uint32

        class Authentication; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication
        class Encryption; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption> encryption;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf spi; //type: uint32
        YLeaf algorithm; //type: Ospfv3AuthenticationEnum
        YLeaf password; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption : public Entity
{
    public:
        Encryption();
        ~Encryption();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf spi; //type: uint32
        YLeaf encryption_algorithm; //type: Ospfv3EncryptionAlgorithmEnum
        YLeaf encryption_password; //type: string
        YLeaf authentication_algorithm; //type: Ospfv3AuthenticationType2Enum
        YLeaf authentication_password; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks : public Entity
{
    public:
        VirtualLinks();
        ~VirtualLinks();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VirtualLink; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink> > virtual_link;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink : public Entity
{
    public:
        VirtualLink();
        ~VirtualLink();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf virtual_link_address; //type: string
        YLeaf enable; //type: empty
        YLeaf hello_interval; //type: uint32
        YLeaf dead_interval; //type: uint32
        YLeaf retransmit_interval; //type: uint32
        YLeaf transmit_delay; //type: uint32

        class Authentication; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication
        class Encryption; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption> encryption;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf spi; //type: uint32
        YLeaf algorithm; //type: Ospfv3AuthenticationEnum
        YLeaf password; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption : public Entity
{
    public:
        Encryption();
        ~Encryption();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf spi; //type: uint32
        YLeaf encryption_algorithm; //type: Ospfv3EncryptionAlgorithmEnum
        YLeaf encryption_password; //type: string
        YLeaf authentication_algorithm; //type: Ospfv3AuthenticationType2Enum
        YLeaf authentication_password; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption


class Ospfv3::Processes::Process::Vrfs::Vrf::Timers : public Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pacing; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Pacing
        class LsaTimers; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Timers::LsaTimers
        class Throttle; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Timers::LsaTimers> lsa_timers;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Pacing> pacing;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle> throttle;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Timers


class Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Pacing : public Entity
{
    public:
        Pacing();
        ~Pacing();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf flood; //type: uint32
        YLeaf retransmission; //type: uint32
        YLeaf lsa_group; //type: uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Pacing


class Ospfv3::Processes::Process::Vrfs::Vrf::Timers::LsaTimers : public Entity
{
    public:
        LsaTimers();
        ~LsaTimers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf arrival; //type: uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Timers::LsaTimers


class Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle : public Entity
{
    public:
        Throttle();
        ~Throttle();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Lsa; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Lsa
        class Spf; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Spf

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Lsa> lsa;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Spf> spf;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle


class Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Lsa : public Entity
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


        YLeaf first_delay; //type: uint32
        YLeaf minimum_delay; //type: uint32
        YLeaf maximum_delay; //type: uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Lsa


class Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Spf : public Entity
{
    public:
        Spf();
        ~Spf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf first_delay; //type: uint32
        YLeaf minimum_delay; //type: uint32
        YLeaf maximum_delay; //type: uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Spf


class Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes : public Entity
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



        class SummaryPrefix; //type: Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix> > summary_prefix;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes


class Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix : public Entity
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
        YLeaf not_advertise; //type: boolean
        YLeaf tag; //type: uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix


class Ospfv3::Processes::Process::Vrfs::Vrf::Snmp : public Entity
{
    public:
        Snmp();
        ~Snmp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf context; //type: string

        class TrapRateLimit; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::TrapRateLimit

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::TrapRateLimit> trap_rate_limit;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Snmp


class Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::TrapRateLimit : public Entity
{
    public:
        TrapRateLimit();
        ~TrapRateLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf window_size; //type: uint32
        YLeaf max_window_traps; //type: uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::TrapRateLimit


class Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute : public Entity
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



        class PerLink; //type: Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerLink
        class PerPrefix; //type: Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerLink> per_link;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix> per_prefix;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute


class Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerLink : public Entity
{
    public:
        PerLink();
        ~PerLink();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf priority; //type: Ospfv3FastReroutePriorityEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerLink


class Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix : public Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf load_sharing_disable; //type: empty
        YLeaf priority; //type: Ospfv3FastReroutePriorityEnum

        class Tiebreakers; //type: Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers> tiebreakers;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix


class Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers : public Entity
{
    public:
        Tiebreakers();
        ~Tiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Tiebreaker; //type: Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker> > tiebreaker;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers


}
}

#endif /* _CISCO_IOS_XR_IPV6_OSPFV3_CFG_1_ */

