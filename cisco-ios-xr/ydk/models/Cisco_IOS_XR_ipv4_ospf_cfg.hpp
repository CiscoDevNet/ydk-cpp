#ifndef _CISCO_IOS_XR_IPV4_OSPF_CFG_
#define _CISCO_IOS_XR_IPV4_OSPF_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_ospf_cfg {

class Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Processes : public Entity
    {
        public:
            Processes();
            ~Processes();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Process : public Entity
        {
            public:
                Process();
                ~Process();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value process_name; //type: string
                Value start; //type: empty
                Value nsr; //type: NsrEnum
                Value protocol_shutdown; //type: OspfShutdownEnum
                Value running; //type: empty


            class Snmp : public Entity
            {
                public:
                    Snmp();
                    ~Snmp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class TrapRateLimit : public Entity
                {
                    public:
                        TrapRateLimit();
                        ~TrapRateLimit();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value window_size; //type: uint32
                        Value max_window_traps; //type: uint32




                }; // Ospf::Processes::Process::Snmp::TrapRateLimit


                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Snmp::TrapRateLimit> trap_rate_limit; // presence node


            }; // Ospf::Processes::Process::Snmp


            class Distribute : public Entity
            {
                public:
                    Distribute();
                    ~Distribute();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value throttle; //type: uint32
                    Value instance_id; //type: uint32




            }; // Ospf::Processes::Process::Distribute


            class Vrfs : public Entity
            {
                public:
                    Vrfs();
                    ~Vrfs();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Vrf : public Entity
                {
                    public:
                        Vrf();
                        ~Vrf();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value vrf_name; //type: string
                        Value vrf_start; //type: empty
                        Value snmp_trap_enabled; //type: boolean
                        Value domain_tag; //type: uint32
                        Value vrf_lite; //type: empty
                        Value disable_dn_bit_check; //type: empty
                        Value ignore_mospf; //type: empty
                        Value router_id; //type: string
                        Value type7; //type: empty
                        Value snmp_context; //type: string
                        Value maximum_interfaces; //type: uint32
                        Value no_opaque; //type: empty
                        Value spf_prefix_priority; //type: string
                        Value maximum_paths; //type: uint32
                        Value adjacency_changes; //type: OspfLogAdjEnum
                        Value default_metric; //type: uint32


                    class DomainId : public Entity
                    {
                        public:
                            DomainId();
                            ~DomainId();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class PrimaryDomainId : public Entity
                        {
                            public:
                                PrimaryDomainId();
                                ~PrimaryDomainId();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value domain_id_type; //type: OspfDomainIdEnum
                                Value domain_id_name; //type: string


                                class OspfDomainIdEnum;


                        }; // Ospf::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId


                        class SecondaryDomainIds : public Entity
                        {
                            public:
                                SecondaryDomainIds();
                                ~SecondaryDomainIds();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class SecondaryDomainId : public Entity
                            {
                                public:
                                    SecondaryDomainId();
                                    ~SecondaryDomainId();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value domain_id_type; //type: OspfDomainIdEnum
                                    Value domain_id_name; //type: string


                                    class OspfDomainIdEnum;


                            }; // Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId> > secondary_domain_id;


                        }; // Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds


                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId> primary_domain_id;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds> secondary_domain_ids;


                    }; // Ospf::Processes::Process::Vrfs::Vrf::DomainId


                    class Microloop : public Entity
                    {
                        public:
                            Microloop();
                            ~Microloop();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Avoidance : public Entity
                        {
                            public:
                                Avoidance();
                                ~Avoidance();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value enable; //type: OspfUloopAvoidanceEnum
                                Value rib_update_delay; //type: uint32


                                class OspfUloopAvoidanceEnum;


                        }; // Ospf::Processes::Process::Vrfs::Vrf::Microloop::Avoidance


                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Microloop::Avoidance> avoidance;


                    }; // Ospf::Processes::Process::Vrfs::Vrf::Microloop


                    class MaximumRedistributePrefix : public Entity
                    {
                        public:
                            MaximumRedistributePrefix();
                            ~MaximumRedistributePrefix();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value number_of_prefixes; //type: uint32
                            Value threshold; //type: uint32
                            Value warning_only; //type: boolean




                    }; // Ospf::Processes::Process::Vrfs::Vrf::MaximumRedistributePrefix


                    class DefaultInformation : public Entity
                    {
                        public:
                            DefaultInformation();
                            ~DefaultInformation();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value always_advertise; //type: boolean
                            Value metric; //type: uint32
                            Value metric_type; //type: OspfLinkStateMetricEnum
                            Value route_policy_name; //type: string


                            class OspfLinkStateMetricEnum;


                    }; // Ospf::Processes::Process::Vrfs::Vrf::DefaultInformation


                    class Af : public Entity
                    {
                        public:
                            Af();
                            ~Af();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value af_name; //type: OspfAddressFamilyEnum
                            Value saf_name; //type: OspfSubAddressFamilyEnum


                            class OspfAddressFamilyEnum;
                            class OspfSubAddressFamilyEnum;


                    }; // Ospf::Processes::Process::Vrfs::Vrf::Af


                    class Queue : public Entity
                    {
                        public:
                            Queue();
                            ~Queue();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value dispatch_rate_limited_flush; //type: uint32
                            Value limit_high; //type: uint32
                            Value dispatch_spf_lsa_limit; //type: uint32
                            Value limit_low; //type: uint32
                            Value dispatch_rate_limited; //type: uint32
                            Value limit_medium; //type: uint32
                            Value dispatch_incoming; //type: uint32




                    }; // Ospf::Processes::Process::Vrfs::Vrf::Queue


                    class MaxMetric : public Entity
                    {
                        public:
                            MaxMetric();
                            ~MaxMetric();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value max_metric_no_abr_off; //type: empty


                        class MaxMetricOnProcRestart : public Entity
                        {
                            public:
                                MaxMetricOnProcRestart();
                                ~MaxMetricOnProcRestart();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value wait_for_bgp; //type: boolean
                                Value startup_max; //type: uint32
                                Value include_stub; //type: boolean
                                Value summary_lsa; //type: boolean
                                Value summary_lsa_maximum_metric; //type: uint32
                                Value external_lsa; //type: boolean
                                Value external_lsa_maximum_metric; //type: uint32




                        }; // Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcRestart


                        class MaxMetricOnStartup : public Entity
                        {
                            public:
                                MaxMetricOnStartup();
                                ~MaxMetricOnStartup();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value wait_for_bgp; //type: boolean
                                Value startup_max; //type: uint32
                                Value include_stub; //type: boolean
                                Value summary_lsa; //type: boolean
                                Value summary_lsa_maximum_metric; //type: uint32
                                Value external_lsa; //type: boolean
                                Value external_lsa_maximum_metric; //type: uint32




                        }; // Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnStartup


                        class MaxMetricOnProcMigration : public Entity
                        {
                            public:
                                MaxMetricOnProcMigration();
                                ~MaxMetricOnProcMigration();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value wait_for_bgp; //type: boolean
                                Value startup_max; //type: uint32
                                Value include_stub; //type: boolean
                                Value summary_lsa; //type: boolean
                                Value summary_lsa_maximum_metric; //type: uint32
                                Value external_lsa; //type: boolean
                                Value external_lsa_maximum_metric; //type: uint32




                        }; // Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcMigration


                        class MaxMetricAlways : public Entity
                        {
                            public:
                                MaxMetricAlways();
                                ~MaxMetricAlways();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value include_stub; //type: boolean
                                Value summary_lsa; //type: boolean
                                Value summary_lsa_maximum_metric; //type: uint32
                                Value external_lsa; //type: boolean
                                Value external_lsa_maximum_metric; //type: uint32




                        }; // Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricAlways


                        class MaxMetricOnSwitchover : public Entity
                        {
                            public:
                                MaxMetricOnSwitchover();
                                ~MaxMetricOnSwitchover();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value wait_for_bgp; //type: boolean
                                Value startup_max; //type: uint32
                                Value include_stub; //type: boolean
                                Value summary_lsa; //type: boolean
                                Value summary_lsa_maximum_metric; //type: uint32
                                Value external_lsa; //type: boolean
                                Value external_lsa_maximum_metric; //type: uint32




                        }; // Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnSwitchover


                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricAlways> max_metric_always;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcMigration> max_metric_on_proc_migration;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcRestart> max_metric_on_proc_restart;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnStartup> max_metric_on_startup;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnSwitchover> max_metric_on_switchover;


                    }; // Ospf::Processes::Process::Vrfs::Vrf::MaxMetric


                    class Nsf : public Entity
                    {
                        public:
                            Nsf();
                            ~Nsf();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value lifetime; //type: uint32
                            Value ietf; //type: OspfIetfNsfEnum
                            Value ietf_support_role; //type: OspfIetfNsfSupportEnum
                            Value cisco; //type: OspfCiscoNsfEnum
                            Value interval; //type: uint32
                            Value flush_delay_time; //type: uint32
                            Value ietf_strict_lsa_checking; //type: empty


                            class OspfCiscoNsfEnum;
                            class OspfIetfNsfEnum;
                            class OspfIetfNsfSupportEnum;


                    }; // Ospf::Processes::Process::Vrfs::Vrf::Nsf


                    class ProcessScope : public Entity
                    {
                        public:
                            ProcessScope();
                            ~ProcessScope();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value cost; //type: uint32
                            Value external_out; //type: boolean
                            Value prefix_suppression_primary; //type: boolean
                            Value mtu_ignore; //type: boolean
                            Value ldp_sync_igp_shortcuts; //type: boolean
                            Value ldp_auto_config; //type: empty
                            Value summary_in; //type: boolean
                            Value network_type; //type: OspfNetworkEnum
                            Value hello_interval; //type: uint32
                            Value loopback_stub_network; //type: boolean
                            Value prefix_suppression_secondary; //type: boolean
                            Value demand_circuit; //type: boolean
                            Value segment_routing; //type: OspfSegmentRoutingEnum
                            Value passive; //type: boolean
                            Value transmit_delay; //type: uint32
                            Value packet_size; //type: uint32
                            Value ldp_sync; //type: boolean
                            Value database_filter; //type: boolean
                            Value link_down_fast_detect; //type: boolean
                            Value segment_routing_forwarding; //type: OspfSegmentRoutingForwardingEnum
                            Value retransmit_interval; //type: uint32
                            Value priority; //type: uint32
                            Value flood_reduction; //type: boolean


                        class Srgb : public Entity
                        {
                            public:
                                Srgb();
                                ~Srgb();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value lower_bound; //type: uint32
                                Value upper_bound; //type: uint32




                        }; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Srgb


                        class FastReroute : public Entity
                        {
                            public:
                                FastReroute();
                                ~FastReroute();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value fast_reroute_enable; //type: OspfProcFastRerouteEnum


                            class PerLink : public Entity
                            {
                                public:
                                    PerLink();
                                    ~PerLink();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value fast_reroute_use_candidate_only; //type: boolean


                                class CandidateInterfaces : public Entity
                                {
                                    public:
                                        CandidateInterfaces();
                                        ~CandidateInterfaces();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class CandidateInterface : public Entity
                                    {
                                        public:
                                            CandidateInterface();
                                            ~CandidateInterface();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value interface_name; //type: string




                                    }; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                }; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces


                                class ExcludeInterfaces : public Entity
                                {
                                    public:
                                        ExcludeInterfaces();
                                        ~ExcludeInterfaces();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class ExcludeInterface : public Entity
                                    {
                                        public:
                                            ExcludeInterface();
                                            ~ExcludeInterface();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value interface_name; //type: string




                                    }; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                }; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces


                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;


                            }; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink


                            class PerPrefix : public Entity
                            {
                                public:
                                    PerPrefix();
                                    ~PerPrefix();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value topology_independent_lfa; //type: boolean
                                    Value fast_reroute_use_candidate_only; //type: boolean


                                class RemoteLfa : public Entity
                                {
                                    public:
                                        RemoteLfa();
                                        ~RemoteLfa();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value tunnel; //type: OspfProcFrrRlfaTunnelEnum
                                        Value maximum_cost; //type: uint32


                                        class OspfProcFrrRlfaTunnelEnum;


                                }; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa


                                class CandidateInterfaces : public Entity
                                {
                                    public:
                                        CandidateInterfaces();
                                        ~CandidateInterfaces();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class CandidateInterface : public Entity
                                    {
                                        public:
                                            CandidateInterface();
                                            ~CandidateInterface();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value interface_name; //type: string




                                    }; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                }; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces


                                class ExcludeInterfaces : public Entity
                                {
                                    public:
                                        ExcludeInterfaces();
                                        ~ExcludeInterfaces();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class ExcludeInterface : public Entity
                                    {
                                        public:
                                            ExcludeInterface();
                                            ~ExcludeInterface();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value interface_name; //type: string




                                    }; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                }; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces


                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;


                            }; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix


                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink> per_link;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix> per_prefix;
                                class OspfProcFastRerouteEnum;


                        }; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute


                        class DistributeList : public Entity
                        {
                            public:
                                DistributeList();
                                ~DistributeList();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value access_list_name; //type: string
                                Value route_policy_name; //type: string




                        }; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DistributeList


                        class Bfd : public Entity
                        {
                            public:
                                Bfd();
                                ~Bfd();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value interval; //type: uint32
                                Value detection_multiplier; //type: uint32
                                Value fast_detect_mode; //type: BfdEnableModeEnum


                                class BfdEnableModeEnum;


                        }; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Bfd


                        class Authentication : public Entity
                        {
                            public:
                                Authentication();
                                ~Authentication();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value key; //type: string


                            class Type : public Entity
                            {
                                public:
                                    Type();
                                    ~Type();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value authen_type; //type: OspfAuthenticationEnum
                                    Value keychain_authen_type; //type: OspfKeychainAuthEnum
                                    Value keychain_name; //type: string


                                    class OspfAuthenticationEnum;
                                    class OspfKeychainAuthEnum;


                            }; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Type


                            class MessageDigestKeies : public Entity
                            {
                                public:
                                    MessageDigestKeies();
                                    ~MessageDigestKeies();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class MessageDigestKey : public Entity
                                {
                                    public:
                                        MessageDigestKey();
                                        ~MessageDigestKey();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value key_id; //type: uint32
                                        Value password; //type: string




                                }; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::MessageDigestKey


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::MessageDigestKey> > message_digest_key;


                            }; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies


                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies> message_digest_keies;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Type> type;


                        }; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication


                        class Security : public Entity
                        {
                            public:
                                Security();
                                ~Security();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Ttl : public Entity
                            {
                                public:
                                    Ttl();
                                    ~Ttl();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value enable; //type: boolean
                                    Value hop_count; //type: uint32




                            }; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Ttl


                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Ttl> ttl;


                        }; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security


                        class DeadIntervalMinimal : public Entity
                        {
                            public:
                                DeadIntervalMinimal();
                                ~DeadIntervalMinimal();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value interval; //type: uint32
                                Value multiplier; //type: uint32




                        }; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DeadIntervalMinimal


                        class CostFallback : public Entity
                        {
                            public:
                                CostFallback();
                                ~CostFallback();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value cost; //type: uint32
                                Value threshold; //type: uint32




                        }; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::CostFallback


                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication> authentication;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Bfd> bfd;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::CostFallback> cost_fallback;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DeadIntervalMinimal> dead_interval_minimal;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DistributeList> distribute_list; // presence node
                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute> fast_reroute;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security> security;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Srgb> srgb; // presence node
                            class OspfNetworkEnum;
                            class OspfSegmentRoutingEnum;
                            class OspfSegmentRoutingForwardingEnum;


                    }; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope


                    class Redistribution : public Entity
                    {
                        public:
                            Redistribution();
                            ~Redistribution();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Redistributes : public Entity
                        {
                            public:
                                Redistributes();
                                ~Redistributes();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Redistribute : public Entity
                            {
                                public:
                                    Redistribute();
                                    ~Redistribute();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value protocol_name; //type: OspfRedistProtocolEnum


                                class ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip : public Entity
                                {
                                    public:
                                        ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip();
                                        ~ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value classful; //type: boolean
                                        Value default_redistributed_route_metric; //type: uint32
                                        Value tag; //type: int32
                                        Value metric_type; //type: OspfLinkStateMetricEnum
                                        Value eigrp_route_type; //type: OspfEigrpRouteEnum
                                        Value isis_levels; //type: OspfRouteLevelEnum
                                        Value ospf_internal; //type: boolean
                                        Value ospf_external; //type: OspfRouteLevelEnum
                                        Value ospf_nssa_level; //type: OspfRouteLevelEnum
                                        Value route_policy_name; //type: string
                                        Value bgp_preserve_med; //type: boolean
                                        Value bgp_preserve_default_info; //type: boolean
                                        Value ospf_redist_lsa_type; //type: OspfRedistLsaEnum
                                        Value ospfnssa_only; //type: boolean


                                        class OspfEigrpRouteEnum;
                                        class OspfRouteLevelEnum;
                                        class OspfLinkStateMetricEnum;
                                        class OspfRouteLevelEnum;
                                        class OspfRouteLevelEnum;
                                        class OspfRedistLsaEnum;


                                }; // Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip


                                class ApplicationOrIsisOrOspf : public Entity
                                {
                                    public:
                                        ApplicationOrIsisOrOspf();
                                        ~ApplicationOrIsisOrOspf();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value instance_name; //type: string
                                        Value classful; //type: boolean
                                        Value default_redistributed_route_metric; //type: uint32
                                        Value tag; //type: int32
                                        Value metric_type; //type: OspfLinkStateMetricEnum
                                        Value eigrp_route_type; //type: OspfEigrpRouteEnum
                                        Value isis_levels; //type: OspfRouteLevelEnum
                                        Value ospf_internal; //type: boolean
                                        Value ospf_external; //type: OspfRouteLevelEnum
                                        Value ospf_nssa_level; //type: OspfRouteLevelEnum
                                        Value route_policy_name; //type: string
                                        Value bgp_preserve_med; //type: boolean
                                        Value bgp_preserve_default_info; //type: boolean
                                        Value ospf_redist_lsa_type; //type: OspfRedistLsaEnum
                                        Value ospfnssa_only; //type: boolean


                                        class OspfEigrpRouteEnum;
                                        class OspfRouteLevelEnum;
                                        class OspfLinkStateMetricEnum;
                                        class OspfRouteLevelEnum;
                                        class OspfRouteLevelEnum;
                                        class OspfRedistLsaEnum;


                                }; // Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf


                                class Bgp : public Entity
                                {
                                    public:
                                        Bgp();
                                        ~Bgp();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value instance_name; //type: string
                                        Value as_xx; //type: uint32
                                        Value as_yy; //type: uint32
                                        Value classful; //type: boolean
                                        Value default_redistributed_route_metric; //type: uint32
                                        Value tag; //type: int32
                                        Value metric_type; //type: OspfLinkStateMetricEnum
                                        Value eigrp_route_type; //type: OspfEigrpRouteEnum
                                        Value isis_levels; //type: OspfRouteLevelEnum
                                        Value ospf_internal; //type: boolean
                                        Value ospf_external; //type: OspfRouteLevelEnum
                                        Value ospf_nssa_level; //type: OspfRouteLevelEnum
                                        Value route_policy_name; //type: string
                                        Value bgp_preserve_med; //type: boolean
                                        Value bgp_preserve_default_info; //type: boolean
                                        Value ospf_redist_lsa_type; //type: OspfRedistLsaEnum
                                        Value ospfnssa_only; //type: boolean


                                        class OspfEigrpRouteEnum;
                                        class OspfRouteLevelEnum;
                                        class OspfLinkStateMetricEnum;
                                        class OspfRouteLevelEnum;
                                        class OspfRouteLevelEnum;
                                        class OspfRedistLsaEnum;


                                }; // Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Bgp


                                class Eigrp : public Entity
                                {
                                    public:
                                        Eigrp();
                                        ~Eigrp();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value instance_name; //type: string
                                        Value as_xx; //type: uint32
                                        Value classful; //type: boolean
                                        Value default_redistributed_route_metric; //type: uint32
                                        Value tag; //type: int32
                                        Value metric_type; //type: OspfLinkStateMetricEnum
                                        Value eigrp_route_type; //type: OspfEigrpRouteEnum
                                        Value isis_levels; //type: OspfRouteLevelEnum
                                        Value ospf_internal; //type: boolean
                                        Value ospf_external; //type: OspfRouteLevelEnum
                                        Value ospf_nssa_level; //type: OspfRouteLevelEnum
                                        Value route_policy_name; //type: string
                                        Value bgp_preserve_med; //type: boolean
                                        Value bgp_preserve_default_info; //type: boolean
                                        Value ospf_redist_lsa_type; //type: OspfRedistLsaEnum
                                        Value ospfnssa_only; //type: boolean


                                        class OspfEigrpRouteEnum;
                                        class OspfRouteLevelEnum;
                                        class OspfLinkStateMetricEnum;
                                        class OspfRouteLevelEnum;
                                        class OspfRouteLevelEnum;
                                        class OspfRedistLsaEnum;


                                }; // Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Eigrp


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf> > application_or_isis_or_ospf;
                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Bgp> > bgp;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip> connected_or_static_or_dagr_or_subscriber_or_mobile_or_rip; // presence node
                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Eigrp> > eigrp;
                                    class OspfRedistProtocolEnum;


                            }; // Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute> > redistribute;


                        }; // Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes


                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes> redistributes;


                    }; // Ospf::Processes::Process::Vrfs::Vrf::Redistribution


                    class AdjacencyStagger : public Entity
                    {
                        public:
                            AdjacencyStagger();
                            ~AdjacencyStagger();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value disable; //type: empty
                            Value initial_nbr; //type: uint32
                            Value max_nbr; //type: uint32




                    }; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyStagger


                    class MaxLsa : public Entity
                    {
                        public:
                            MaxLsa();
                            ~MaxLsa();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value max_lsa_limit; //type: uint32
                            Value max_lsa_threshold; //type: uint32
                            Value max_lsa_warning_only; //type: boolean
                            Value max_lsa_ignore_time; //type: uint32
                            Value max_lsa_ignore_count; //type: uint32
                            Value max_lsa_reset_time; //type: uint32




                    }; // Ospf::Processes::Process::Vrfs::Vrf::MaxLsa


                    class AutoCost : public Entity
                    {
                        public:
                            AutoCost();
                            ~AutoCost();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value disable; //type: boolean
                            Value bandwidth; //type: uint32




                    }; // Ospf::Processes::Process::Vrfs::Vrf::AutoCost


                    class Ucmp : public Entity
                    {
                        public:
                            Ucmp();
                            ~Ucmp();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value delay_interval; //type: uint32


                        class Enable : public Entity
                        {
                            public:
                                Enable();
                                ~Enable();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value variance; //type: uint32
                                Value prefix_list_name; //type: string




                        }; // Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Enable


                        class ExcludeInterfaces : public Entity
                        {
                            public:
                                ExcludeInterfaces();
                                ~ExcludeInterfaces();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class ExcludeInterface : public Entity
                            {
                                public:
                                    ExcludeInterface();
                                    ~ExcludeInterface();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value interface_name; //type: string




                            }; // Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::ExcludeInterface


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                        }; // Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces


                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Enable> enable;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces> exclude_interfaces;


                    }; // Ospf::Processes::Process::Vrfs::Vrf::Ucmp


                    class FastReroute : public Entity
                    {
                        public:
                            FastReroute();
                            ~FastReroute();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class PerLink : public Entity
                        {
                            public:
                                PerLink();
                                ~PerLink();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value priority; //type: OspfFastReroutePriorityEnum


                                class OspfFastReroutePriorityEnum;


                        }; // Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerLink


                        class PerPrefix : public Entity
                        {
                            public:
                                PerPrefix();
                                ~PerPrefix();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value load_sharing_disable; //type: empty
                                Value priority; //type: OspfFastReroutePriorityEnum


                            class Tiebreakers : public Entity
                            {
                                public:
                                    Tiebreakers();
                                    ~Tiebreakers();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Tiebreaker : public Entity
                                {
                                    public:
                                        Tiebreaker();
                                        ~Tiebreaker();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value tiebreaker_type; //type: OspfFastRerouteTiebreakersEnum
                                        Value tiebreaker_index; //type: uint32


                                        class OspfFastRerouteTiebreakersEnum;


                                }; // Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker> > tiebreaker;


                            }; // Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers


                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
                                class OspfFastReroutePriorityEnum;


                        }; // Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix


                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerLink> per_link;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix> per_prefix;


                    }; // Ospf::Processes::Process::Vrfs::Vrf::FastReroute


                    class SummaryPrefixes : public Entity
                    {
                        public:
                            SummaryPrefixes();
                            ~SummaryPrefixes();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class SummaryPrefixData : public Entity
                        {
                            public:
                                SummaryPrefixData();
                                ~SummaryPrefixData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value not_advertise; //type: boolean
                                Value tag; //type: int32




                        }; // Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixData


                        class PrefixAndNetmask : public Entity
                        {
                            public:
                                PrefixAndNetmask();
                                ~PrefixAndNetmask();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value prefix; //type: string
                                Value netmask; //type: string
                                Value not_advertise; //type: boolean
                                Value tag; //type: int32




                        }; // Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::PrefixAndNetmask


                        class Prefix : public Entity
                        {
                            public:
                                Prefix();
                                ~Prefix();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value prefix; //type: string
                                Value not_advertise; //type: boolean
                                Value tag; //type: int32




                        }; // Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Prefix


                        class Netmask : public Entity
                        {
                            public:
                                Netmask();
                                ~Netmask();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value netmask; //type: string
                                Value not_advertise; //type: boolean
                                Value tag; //type: int32




                        }; // Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Netmask


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Netmask> > netmask;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Prefix> > prefix;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::PrefixAndNetmask> > prefix_and_netmask;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixData> summary_prefix_data;


                    }; // Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes


                    class OutgoingRouteUpdates : public Entity
                    {
                        public:
                            OutgoingRouteUpdates();
                            ~OutgoingRouteUpdates();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class OutgoingRouteUpdate : public Entity
                        {
                            public:
                                OutgoingRouteUpdate();
                                ~OutgoingRouteUpdate();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value protocol_name; //type: OspfDistListProtocolEnum
                                Value access_list_name; //type: string
                                Value as_xx; //type: uint32
                                Value as_yy; //type: uint32
                                Value ospf_process_name; //type: string


                                class OspfDistListProtocolEnum;


                        }; // Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::OutgoingRouteUpdate


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::OutgoingRouteUpdate> > outgoing_route_update;


                    }; // Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates


                    class Distance : public Entity
                    {
                        public:
                            Distance();
                            ~Distance();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value admin_distance; //type: uint32


                        class OspfDistance : public Entity
                        {
                            public:
                                OspfDistance();
                                ~OspfDistance();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value intra_area; //type: uint32
                                Value inter_area; //type: uint32
                                Value external_routes; //type: uint32




                        }; // Ospf::Processes::Process::Vrfs::Vrf::Distance::OspfDistance


                        class IpDistances : public Entity
                        {
                            public:
                                IpDistances();
                                ~IpDistances();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class IpDistance : public Entity
                            {
                                public:
                                    IpDistance();
                                    ~IpDistance();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value address; //type: string
                                    Value wildcard; //type: string
                                    Value distance; //type: uint32
                                    Value access_list_name; //type: string




                            }; // Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::IpDistance


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::IpDistance> > ip_distance;


                        }; // Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances


                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances> ip_distances;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Distance::OspfDistance> ospf_distance;


                    }; // Ospf::Processes::Process::Vrfs::Vrf::Distance


                    class AreaAddresses : public Entity
                    {
                        public:
                            AreaAddresses();
                            ~AreaAddresses();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class AreaAddress : public Entity
                        {
                            public:
                                AreaAddress();
                                ~AreaAddress();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value address; //type: string
                                Value route_policy_in; //type: string
                                Value default_cost; //type: uint32
                                Value route_policy_out; //type: string
                                Value stub; //type: boolean
                                Value mpls_traffic_eng; //type: empty
                                Value external_out; //type: boolean
                                Value summary_in; //type: boolean
                                Value segment_routing; //type: OspfSegmentRoutingEnum
                                Value running; //type: empty


                            class VirtualLinkScopes : public Entity
                            {
                                public:
                                    VirtualLinkScopes();
                                    ~VirtualLinkScopes();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class VirtualLinkScope : public Entity
                                {
                                    public:
                                        VirtualLinkScope();
                                        ~VirtualLinkScope();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value address; //type: string
                                        Value hello_interval; //type: uint32
                                        Value transmit_delay; //type: uint32
                                        Value retransmit_interval; //type: uint32
                                        Value running; //type: empty


                                    class Authentication : public Entity
                                    {
                                        public:
                                            Authentication();
                                            ~Authentication();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value key; //type: string


                                        class Type : public Entity
                                        {
                                            public:
                                                Type();
                                                ~Type();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value authen_type; //type: OspfAuthenticationEnum
                                                Value keychain_authen_type; //type: OspfKeychainAuthEnum
                                                Value keychain_name; //type: string


                                                class OspfAuthenticationEnum;
                                                class OspfKeychainAuthEnum;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type


                                        class MessageDigestKeies : public Entity
                                        {
                                            public:
                                                MessageDigestKeies();
                                                ~MessageDigestKeies();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class MessageDigestKey : public Entity
                                            {
                                                public:
                                                    MessageDigestKey();
                                                    ~MessageDigestKey();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value key_id; //type: uint32
                                                    Value password; //type: string




                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey> > message_digest_key;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies


                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies> message_digest_keies;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type> type;


                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication


                                    class DeadIntervalMinimal : public Entity
                                    {
                                        public:
                                            DeadIntervalMinimal();
                                            ~DeadIntervalMinimal();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value interval; //type: uint32
                                            Value multiplier; //type: uint32




                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication> authentication;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal> dead_interval_minimal;


                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope> > virtual_link_scope;


                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes


                            class ShamLinkScopes : public Entity
                            {
                                public:
                                    ShamLinkScopes();
                                    ~ShamLinkScopes();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class ShamLinkScope : public Entity
                                {
                                    public:
                                        ShamLinkScope();
                                        ~ShamLinkScope();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value source_address; //type: string
                                        Value destination_address; //type: string
                                        Value source; //type: string
                                        Value cost; //type: uint32
                                        Value hello_interval; //type: uint32
                                        Value transmit_delay; //type: uint32
                                        Value retransmit_interval; //type: uint32
                                        Value running; //type: empty


                                    class Authentication : public Entity
                                    {
                                        public:
                                            Authentication();
                                            ~Authentication();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value key; //type: string


                                        class Type : public Entity
                                        {
                                            public:
                                                Type();
                                                ~Type();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value authen_type; //type: OspfAuthenticationEnum
                                                Value keychain_authen_type; //type: OspfKeychainAuthEnum
                                                Value keychain_name; //type: string


                                                class OspfAuthenticationEnum;
                                                class OspfKeychainAuthEnum;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type


                                        class MessageDigestKeies : public Entity
                                        {
                                            public:
                                                MessageDigestKeies();
                                                ~MessageDigestKeies();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class MessageDigestKey : public Entity
                                            {
                                                public:
                                                    MessageDigestKey();
                                                    ~MessageDigestKey();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value key_id; //type: uint32
                                                    Value password; //type: string




                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey> > message_digest_key;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies


                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies> message_digest_keies;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type> type;


                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication


                                    class DeadIntervalMinimal : public Entity
                                    {
                                        public:
                                            DeadIntervalMinimal();
                                            ~DeadIntervalMinimal();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value interval; //type: uint32
                                            Value multiplier; //type: uint32




                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication> authentication;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal> dead_interval_minimal;


                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope> > sham_link_scope;


                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes


                            class AreaScope : public Entity
                            {
                                public:
                                    AreaScope();
                                    ~AreaScope();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value cost; //type: uint32
                                    Value prefix_suppression_primary; //type: boolean
                                    Value mtu_ignore; //type: boolean
                                    Value ldp_sync_igp_shortcuts; //type: boolean
                                    Value ldp_auto_config; //type: empty
                                    Value network_type; //type: OspfNetworkEnum
                                    Value hello_interval; //type: uint32
                                    Value loopback_stub_network; //type: boolean
                                    Value prefix_suppression_secondary; //type: boolean
                                    Value demand_circuit; //type: boolean
                                    Value passive; //type: boolean
                                    Value transmit_delay; //type: uint32
                                    Value packet_size; //type: uint32
                                    Value ldp_sync; //type: boolean
                                    Value database_filter; //type: boolean
                                    Value link_down_fast_detect; //type: boolean
                                    Value segment_routing_forwarding; //type: OspfSegmentRoutingForwardingEnum
                                    Value retransmit_interval; //type: uint32
                                    Value priority; //type: uint32
                                    Value flood_reduction; //type: boolean


                                class DistributeList : public Entity
                                {
                                    public:
                                        DistributeList();
                                        ~DistributeList();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value access_list_name; //type: string
                                        Value route_policy_name; //type: string




                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DistributeList


                                class Bfd : public Entity
                                {
                                    public:
                                        Bfd();
                                        ~Bfd();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value interval; //type: uint32
                                        Value detection_multiplier; //type: uint32
                                        Value fast_detect_mode; //type: BfdEnableModeEnum


                                        class BfdEnableModeEnum;


                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Bfd


                                class Authentication : public Entity
                                {
                                    public:
                                        Authentication();
                                        ~Authentication();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value key; //type: string


                                    class Type : public Entity
                                    {
                                        public:
                                            Type();
                                            ~Type();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value authen_type; //type: OspfAuthenticationEnum
                                            Value keychain_authen_type; //type: OspfKeychainAuthEnum
                                            Value keychain_name; //type: string


                                            class OspfAuthenticationEnum;
                                            class OspfKeychainAuthEnum;


                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::Type


                                    class MessageDigestKeies : public Entity
                                    {
                                        public:
                                            MessageDigestKeies();
                                            ~MessageDigestKeies();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class MessageDigestKey : public Entity
                                        {
                                            public:
                                                MessageDigestKey();
                                                ~MessageDigestKey();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value key_id; //type: uint32
                                                Value password; //type: string




                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey> > message_digest_key;


                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies> message_digest_keies;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::Type> type;


                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication


                                class Security : public Entity
                                {
                                    public:
                                        Security();
                                        ~Security();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class Ttl : public Entity
                                    {
                                        public:
                                            Ttl();
                                            ~Ttl();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value enable; //type: boolean
                                            Value hop_count; //type: uint32




                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl> ttl;


                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security


                                class DeadIntervalMinimal : public Entity
                                {
                                    public:
                                        DeadIntervalMinimal();
                                        ~DeadIntervalMinimal();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value interval; //type: uint32
                                        Value multiplier; //type: uint32




                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DeadIntervalMinimal


                                class FastReroute : public Entity
                                {
                                    public:
                                        FastReroute();
                                        ~FastReroute();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value fast_reroute_enable; //type: OspfFastRerouteEnum


                                    class PerLink : public Entity
                                    {
                                        public:
                                            PerLink();
                                            ~PerLink();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value fast_reroute_use_candidate_only; //type: boolean


                                        class CandidateInterfaces : public Entity
                                        {
                                            public:
                                                CandidateInterfaces();
                                                ~CandidateInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class CandidateInterface : public Entity
                                            {
                                                public:
                                                    CandidateInterface();
                                                    ~CandidateInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces


                                        class ExcludeInterfaces : public Entity
                                        {
                                            public:
                                                ExcludeInterfaces();
                                                ~ExcludeInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class ExcludeInterface : public Entity
                                            {
                                                public:
                                                    ExcludeInterface();
                                                    ~ExcludeInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces


                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;


                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink


                                    class PerPrefix : public Entity
                                    {
                                        public:
                                            PerPrefix();
                                            ~PerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value topology_independent_lfa; //type: boolean
                                            Value fast_reroute_use_candidate_only; //type: boolean


                                        class RemoteLfa : public Entity
                                        {
                                            public:
                                                RemoteLfa();
                                                ~RemoteLfa();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value tunnel; //type: OspfFrrRlfaTunnelEnum
                                                Value maximum_cost; //type: uint32


                                                class OspfFrrRlfaTunnelEnum;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa


                                        class Tiebreakers : public Entity
                                        {
                                            public:
                                                Tiebreakers();
                                                ~Tiebreakers();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class Tiebreaker : public Entity
                                            {
                                                public:
                                                    Tiebreaker();
                                                    ~Tiebreaker();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value tiebreaker_type; //type: OspfFastRerouteTiebreakersIntfEnum
                                                    Value tiebreaker_index; //type: uint32


                                                    class OspfFastRerouteTiebreakersIntfEnum;


                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker> > tiebreaker;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers


                                        class CandidateInterfaces : public Entity
                                        {
                                            public:
                                                CandidateInterfaces();
                                                ~CandidateInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class CandidateInterface : public Entity
                                            {
                                                public:
                                                    CandidateInterface();
                                                    ~CandidateInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces


                                        class ExcludeInterfaces : public Entity
                                        {
                                            public:
                                                ExcludeInterfaces();
                                                ~ExcludeInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class ExcludeInterface : public Entity
                                            {
                                                public:
                                                    ExcludeInterface();
                                                    ~ExcludeInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces


                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;


                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink> per_link;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix> per_prefix;
                                        class OspfFastRerouteEnum;


                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute


                                class CostFallback : public Entity
                                {
                                    public:
                                        CostFallback();
                                        ~CostFallback();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value cost; //type: uint32
                                        Value threshold; //type: uint32




                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::CostFallback


                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication> authentication;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Bfd> bfd;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::CostFallback> cost_fallback;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DeadIntervalMinimal> dead_interval_minimal;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DistributeList> distribute_list; // presence node
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute> fast_reroute;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security> security;
                                    class OspfNetworkEnum;
                                    class OspfSegmentRoutingForwardingEnum;


                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope


                            class NameScopes : public Entity
                            {
                                public:
                                    NameScopes();
                                    ~NameScopes();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class NameScope : public Entity
                                {
                                    public:
                                        NameScope();
                                        ~NameScope();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value interface_name; //type: string
                                        Value cost; //type: uint32
                                        Value prefix_suppression_primary; //type: boolean
                                        Value mtu_ignore; //type: boolean
                                        Value ldp_sync_igp_shortcuts; //type: boolean
                                        Value ldp_auto_config; //type: empty
                                        Value network_type; //type: OspfNetworkEnum
                                        Value hello_interval; //type: uint32
                                        Value loopback_stub_network; //type: boolean
                                        Value prefix_suppression_secondary; //type: boolean
                                        Value demand_circuit; //type: boolean
                                        Value passive; //type: boolean
                                        Value transmit_delay; //type: uint32
                                        Value packet_size; //type: uint32
                                        Value ldp_sync; //type: boolean
                                        Value database_filter; //type: boolean
                                        Value link_down_fast_detect; //type: boolean
                                        Value segment_routing_forwarding; //type: OspfSegmentRoutingForwardingEnum
                                        Value retransmit_interval; //type: uint32
                                        Value priority; //type: uint32
                                        Value flood_reduction; //type: boolean
                                        Value running; //type: empty


                                    class PrefixSid : public Entity
                                    {
                                        public:
                                            PrefixSid();
                                            ~PrefixSid();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value sid_value; //type: uint32
                                            Value explicit_null; //type: boolean
                                            Value type; //type: OspfSidEnum
                                            Value n_flag_clear; //type: boolean


                                            class OspfSidEnum;


                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid


                                    class PrefixSidStrict : public Entity
                                    {
                                        public:
                                            PrefixSidStrict();
                                            ~PrefixSidStrict();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value sid_value; //type: uint32
                                            Value explicit_null; //type: boolean
                                            Value type; //type: OspfSidEnum
                                            Value n_flag_clear; //type: boolean


                                            class OspfSidEnum;


                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict


                                    class DistributeList : public Entity
                                    {
                                        public:
                                            DistributeList();
                                            ~DistributeList();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value access_list_name; //type: string
                                            Value route_policy_name; //type: string




                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList


                                    class Bfd : public Entity
                                    {
                                        public:
                                            Bfd();
                                            ~Bfd();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value interval; //type: uint32
                                            Value detection_multiplier; //type: uint32
                                            Value fast_detect_mode; //type: BfdEnableModeEnum


                                            class BfdEnableModeEnum;


                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd


                                    class Authentication : public Entity
                                    {
                                        public:
                                            Authentication();
                                            ~Authentication();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value key; //type: string


                                        class Type : public Entity
                                        {
                                            public:
                                                Type();
                                                ~Type();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value authen_type; //type: OspfAuthenticationEnum
                                                Value keychain_authen_type; //type: OspfKeychainAuthEnum
                                                Value keychain_name; //type: string


                                                class OspfAuthenticationEnum;
                                                class OspfKeychainAuthEnum;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type


                                        class MessageDigestKeies : public Entity
                                        {
                                            public:
                                                MessageDigestKeies();
                                                ~MessageDigestKeies();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class MessageDigestKey : public Entity
                                            {
                                                public:
                                                    MessageDigestKey();
                                                    ~MessageDigestKey();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value key_id; //type: uint32
                                                    Value password; //type: string




                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey> > message_digest_key;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies


                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies> message_digest_keies;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type> type;


                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication


                                    class Security : public Entity
                                    {
                                        public:
                                            Security();
                                            ~Security();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class Ttl : public Entity
                                        {
                                            public:
                                                Ttl();
                                                ~Ttl();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value enable; //type: boolean
                                                Value hop_count; //type: uint32




                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl


                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl> ttl;


                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security


                                    class Neighbors : public Entity
                                    {
                                        public:
                                            Neighbors();
                                            ~Neighbors();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class Neighbor : public Entity
                                        {
                                            public:
                                                Neighbor();
                                                ~Neighbor();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_address; //type: string
                                                Value priority; //type: uint32
                                                Value poll_interval; //type: uint32
                                                Value cost; //type: uint32
                                                Value database_filter; //type: boolean




                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor> > neighbor;


                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors


                                    class DeadIntervalMinimal : public Entity
                                    {
                                        public:
                                            DeadIntervalMinimal();
                                            ~DeadIntervalMinimal();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value interval; //type: uint32
                                            Value multiplier; //type: uint32




                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal


                                    class FastReroute : public Entity
                                    {
                                        public:
                                            FastReroute();
                                            ~FastReroute();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value fast_reroute_enable; //type: OspfFastRerouteEnum


                                        class PerLink : public Entity
                                        {
                                            public:
                                                PerLink();
                                                ~PerLink();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value fast_reroute_use_candidate_only; //type: boolean


                                            class CandidateInterfaces : public Entity
                                            {
                                                public:
                                                    CandidateInterfaces();
                                                    ~CandidateInterfaces();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class CandidateInterface : public Entity
                                                {
                                                    public:
                                                        CandidateInterface();
                                                        ~CandidateInterface();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value interface_name; //type: string




                                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces


                                            class ExcludeInterfaces : public Entity
                                            {
                                                public:
                                                    ExcludeInterfaces();
                                                    ~ExcludeInterfaces();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class ExcludeInterface : public Entity
                                                {
                                                    public:
                                                        ExcludeInterface();
                                                        ~ExcludeInterface();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value interface_name; //type: string




                                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces


                                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
                                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink


                                        class PerPrefix : public Entity
                                        {
                                            public:
                                                PerPrefix();
                                                ~PerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value topology_independent_lfa; //type: boolean
                                                Value fast_reroute_use_candidate_only; //type: boolean


                                            class RemoteLfa : public Entity
                                            {
                                                public:
                                                    RemoteLfa();
                                                    ~RemoteLfa();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value tunnel; //type: OspfFrrRlfaTunnelEnum
                                                    Value maximum_cost; //type: uint32


                                                    class OspfFrrRlfaTunnelEnum;


                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa


                                            class Tiebreakers : public Entity
                                            {
                                                public:
                                                    Tiebreakers();
                                                    ~Tiebreakers();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class Tiebreaker : public Entity
                                                {
                                                    public:
                                                        Tiebreaker();
                                                        ~Tiebreaker();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value tiebreaker_type; //type: OspfFastRerouteTiebreakersIntfEnum
                                                        Value tiebreaker_index; //type: uint32


                                                        class OspfFastRerouteTiebreakersIntfEnum;


                                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker> > tiebreaker;


                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers


                                            class CandidateInterfaces : public Entity
                                            {
                                                public:
                                                    CandidateInterfaces();
                                                    ~CandidateInterfaces();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class CandidateInterface : public Entity
                                                {
                                                    public:
                                                        CandidateInterface();
                                                        ~CandidateInterface();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value interface_name; //type: string




                                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces


                                            class ExcludeInterfaces : public Entity
                                            {
                                                public:
                                                    ExcludeInterfaces();
                                                    ~ExcludeInterfaces();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class ExcludeInterface : public Entity
                                                {
                                                    public:
                                                        ExcludeInterface();
                                                        ~ExcludeInterface();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value interface_name; //type: string




                                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces


                                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
                                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
                                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
                                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix


                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink> per_link;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix> per_prefix;
                                            class OspfFastRerouteEnum;


                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute


                                    class CostFallback : public Entity
                                    {
                                        public:
                                            CostFallback();
                                            ~CostFallback();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value cost; //type: uint32
                                            Value threshold; //type: uint32




                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication> authentication;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd> bfd;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback> cost_fallback;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal> dead_interval_minimal;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList> distribute_list; // presence node
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute> fast_reroute;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors> neighbors;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid> prefix_sid; // presence node
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict> prefix_sid_strict; // presence node
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security> security;
                                        class OspfNetworkEnum;
                                        class OspfSegmentRoutingForwardingEnum;


                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope> > name_scope;


                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes


                            class MultiAreaInterfaceScopes : public Entity
                            {
                                public:
                                    MultiAreaInterfaceScopes();
                                    ~MultiAreaInterfaceScopes();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class MultiAreaInterfaceScope : public Entity
                                {
                                    public:
                                        MultiAreaInterfaceScope();
                                        ~MultiAreaInterfaceScope();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value interface_name; //type: string
                                        Value cost; //type: uint32
                                        Value mtu_ignore; //type: boolean
                                        Value hello_interval; //type: uint32
                                        Value passive; //type: boolean
                                        Value transmit_delay; //type: uint32
                                        Value packet_size; //type: uint32
                                        Value database_filter; //type: boolean
                                        Value retransmit_interval; //type: uint32
                                        Value running; //type: empty


                                    class DistributeList : public Entity
                                    {
                                        public:
                                            DistributeList();
                                            ~DistributeList();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value access_list_name; //type: string
                                            Value route_policy_name; //type: string




                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList


                                    class Authentication : public Entity
                                    {
                                        public:
                                            Authentication();
                                            ~Authentication();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value key; //type: string


                                        class Type : public Entity
                                        {
                                            public:
                                                Type();
                                                ~Type();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value authen_type; //type: OspfAuthenticationEnum
                                                Value keychain_authen_type; //type: OspfKeychainAuthEnum
                                                Value keychain_name; //type: string


                                                class OspfAuthenticationEnum;
                                                class OspfKeychainAuthEnum;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type


                                        class MessageDigestKeies : public Entity
                                        {
                                            public:
                                                MessageDigestKeies();
                                                ~MessageDigestKeies();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class MessageDigestKey : public Entity
                                            {
                                                public:
                                                    MessageDigestKey();
                                                    ~MessageDigestKey();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value key_id; //type: uint32
                                                    Value password; //type: string




                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey> > message_digest_key;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies


                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies> message_digest_keies;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type> type;


                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication


                                    class Neighbors : public Entity
                                    {
                                        public:
                                            Neighbors();
                                            ~Neighbors();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class Neighbor : public Entity
                                        {
                                            public:
                                                Neighbor();
                                                ~Neighbor();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_address; //type: string
                                                Value priority; //type: uint32
                                                Value poll_interval; //type: uint32
                                                Value cost; //type: uint32
                                                Value database_filter; //type: boolean




                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor> > neighbor;


                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors


                                    class DeadIntervalMinimal : public Entity
                                    {
                                        public:
                                            DeadIntervalMinimal();
                                            ~DeadIntervalMinimal();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value interval; //type: uint32
                                            Value multiplier; //type: uint32




                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal


                                    class FastReroute : public Entity
                                    {
                                        public:
                                            FastReroute();
                                            ~FastReroute();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value fast_reroute_enable; //type: OspfFastRerouteEnum


                                        class PerLink : public Entity
                                        {
                                            public:
                                                PerLink();
                                                ~PerLink();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value fast_reroute_use_candidate_only; //type: boolean


                                            class CandidateInterfaces : public Entity
                                            {
                                                public:
                                                    CandidateInterfaces();
                                                    ~CandidateInterfaces();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class CandidateInterface : public Entity
                                                {
                                                    public:
                                                        CandidateInterface();
                                                        ~CandidateInterface();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value interface_name; //type: string




                                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces


                                            class ExcludeInterfaces : public Entity
                                            {
                                                public:
                                                    ExcludeInterfaces();
                                                    ~ExcludeInterfaces();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class ExcludeInterface : public Entity
                                                {
                                                    public:
                                                        ExcludeInterface();
                                                        ~ExcludeInterface();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value interface_name; //type: string




                                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces


                                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
                                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink


                                        class PerPrefix : public Entity
                                        {
                                            public:
                                                PerPrefix();
                                                ~PerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value topology_independent_lfa; //type: boolean
                                                Value fast_reroute_use_candidate_only; //type: boolean


                                            class RemoteLfa : public Entity
                                            {
                                                public:
                                                    RemoteLfa();
                                                    ~RemoteLfa();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value tunnel; //type: OspfFrrRlfaTunnelEnum
                                                    Value maximum_cost; //type: uint32


                                                    class OspfFrrRlfaTunnelEnum;


                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa


                                            class Tiebreakers : public Entity
                                            {
                                                public:
                                                    Tiebreakers();
                                                    ~Tiebreakers();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class Tiebreaker : public Entity
                                                {
                                                    public:
                                                        Tiebreaker();
                                                        ~Tiebreaker();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value tiebreaker_type; //type: OspfFastRerouteTiebreakersIntfEnum
                                                        Value tiebreaker_index; //type: uint32


                                                        class OspfFastRerouteTiebreakersIntfEnum;


                                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker> > tiebreaker;


                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers


                                            class CandidateInterfaces : public Entity
                                            {
                                                public:
                                                    CandidateInterfaces();
                                                    ~CandidateInterfaces();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class CandidateInterface : public Entity
                                                {
                                                    public:
                                                        CandidateInterface();
                                                        ~CandidateInterface();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value interface_name; //type: string




                                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces


                                            class ExcludeInterfaces : public Entity
                                            {
                                                public:
                                                    ExcludeInterfaces();
                                                    ~ExcludeInterfaces();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class ExcludeInterface : public Entity
                                                {
                                                    public:
                                                        ExcludeInterface();
                                                        ~ExcludeInterface();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value interface_name; //type: string




                                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces


                                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
                                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
                                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
                                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix


                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink> per_link;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix> per_prefix;
                                            class OspfFastRerouteEnum;


                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute


                                    class CostFallback : public Entity
                                    {
                                        public:
                                            CostFallback();
                                            ~CostFallback();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value cost; //type: uint32
                                            Value threshold; //type: uint32




                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication> authentication;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback> cost_fallback;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal> dead_interval_minimal;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList> distribute_list; // presence node
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute> fast_reroute;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors> neighbors;


                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope> > multi_area_interface_scope;


                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes


                            class AreaRanges : public Entity
                            {
                                public:
                                    AreaRanges();
                                    ~AreaRanges();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class AreaRange : public Entity
                                {
                                    public:
                                        AreaRange();
                                        ~AreaRange();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value address; //type: string
                                        Value netmask; //type: string
                                        Value not_advertise; //type: boolean




                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges::AreaRange


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges::AreaRange> > area_range;


                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges


                            class Nssa : public Entity
                            {
                                public:
                                    Nssa();
                                    ~Nssa();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value no_redistribution; //type: boolean
                                    Value default_info_originate; //type: boolean
                                    Value no_summary; //type: boolean
                                    Value nssa_def_metric; //type: uint32
                                    Value metric_type; //type: OspfLinkStateMetricEnum


                                    class OspfLinkStateMetricEnum;


                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa


                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges> area_ranges;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope> area_scope;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes> multi_area_interface_scopes;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes> name_scopes;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa> nssa;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes> sham_link_scopes;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes> virtual_link_scopes;
                                class OspfSegmentRoutingEnum;


                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress


                        class AreaAreaId : public Entity
                        {
                            public:
                                AreaAreaId();
                                ~AreaAreaId();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value area_id; //type: int32
                                Value route_policy_in; //type: string
                                Value default_cost; //type: uint32
                                Value route_policy_out; //type: string
                                Value stub; //type: boolean
                                Value mpls_traffic_eng; //type: empty
                                Value external_out; //type: boolean
                                Value summary_in; //type: boolean
                                Value segment_routing; //type: OspfSegmentRoutingEnum
                                Value running; //type: empty


                            class VirtualLinkScopes : public Entity
                            {
                                public:
                                    VirtualLinkScopes();
                                    ~VirtualLinkScopes();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class VirtualLinkScope : public Entity
                                {
                                    public:
                                        VirtualLinkScope();
                                        ~VirtualLinkScope();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value address; //type: string
                                        Value hello_interval; //type: uint32
                                        Value transmit_delay; //type: uint32
                                        Value retransmit_interval; //type: uint32
                                        Value running; //type: empty


                                    class Authentication : public Entity
                                    {
                                        public:
                                            Authentication();
                                            ~Authentication();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value key; //type: string


                                        class Type : public Entity
                                        {
                                            public:
                                                Type();
                                                ~Type();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value authen_type; //type: OspfAuthenticationEnum
                                                Value keychain_authen_type; //type: OspfKeychainAuthEnum
                                                Value keychain_name; //type: string


                                                class OspfAuthenticationEnum;
                                                class OspfKeychainAuthEnum;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type


                                        class MessageDigestKeies : public Entity
                                        {
                                            public:
                                                MessageDigestKeies();
                                                ~MessageDigestKeies();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class MessageDigestKey : public Entity
                                            {
                                                public:
                                                    MessageDigestKey();
                                                    ~MessageDigestKey();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value key_id; //type: uint32
                                                    Value password; //type: string




                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey> > message_digest_key;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies


                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies> message_digest_keies;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type> type;


                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication


                                    class DeadIntervalMinimal : public Entity
                                    {
                                        public:
                                            DeadIntervalMinimal();
                                            ~DeadIntervalMinimal();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value interval; //type: uint32
                                            Value multiplier; //type: uint32




                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication> authentication;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal> dead_interval_minimal;


                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope> > virtual_link_scope;


                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes


                            class ShamLinkScopes : public Entity
                            {
                                public:
                                    ShamLinkScopes();
                                    ~ShamLinkScopes();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class ShamLinkScope : public Entity
                                {
                                    public:
                                        ShamLinkScope();
                                        ~ShamLinkScope();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value source_address; //type: string
                                        Value destination_address; //type: string
                                        Value source; //type: string
                                        Value cost; //type: uint32
                                        Value hello_interval; //type: uint32
                                        Value transmit_delay; //type: uint32
                                        Value retransmit_interval; //type: uint32
                                        Value running; //type: empty


                                    class Authentication : public Entity
                                    {
                                        public:
                                            Authentication();
                                            ~Authentication();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value key; //type: string


                                        class Type : public Entity
                                        {
                                            public:
                                                Type();
                                                ~Type();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value authen_type; //type: OspfAuthenticationEnum
                                                Value keychain_authen_type; //type: OspfKeychainAuthEnum
                                                Value keychain_name; //type: string


                                                class OspfAuthenticationEnum;
                                                class OspfKeychainAuthEnum;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type


                                        class MessageDigestKeies : public Entity
                                        {
                                            public:
                                                MessageDigestKeies();
                                                ~MessageDigestKeies();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class MessageDigestKey : public Entity
                                            {
                                                public:
                                                    MessageDigestKey();
                                                    ~MessageDigestKey();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value key_id; //type: uint32
                                                    Value password; //type: string




                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey> > message_digest_key;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies


                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies> message_digest_keies;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type> type;


                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication


                                    class DeadIntervalMinimal : public Entity
                                    {
                                        public:
                                            DeadIntervalMinimal();
                                            ~DeadIntervalMinimal();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value interval; //type: uint32
                                            Value multiplier; //type: uint32




                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication> authentication;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal> dead_interval_minimal;


                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope> > sham_link_scope;


                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes


                            class AreaScope : public Entity
                            {
                                public:
                                    AreaScope();
                                    ~AreaScope();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value cost; //type: uint32
                                    Value prefix_suppression_primary; //type: boolean
                                    Value mtu_ignore; //type: boolean
                                    Value ldp_sync_igp_shortcuts; //type: boolean
                                    Value ldp_auto_config; //type: empty
                                    Value network_type; //type: OspfNetworkEnum
                                    Value hello_interval; //type: uint32
                                    Value loopback_stub_network; //type: boolean
                                    Value prefix_suppression_secondary; //type: boolean
                                    Value demand_circuit; //type: boolean
                                    Value passive; //type: boolean
                                    Value transmit_delay; //type: uint32
                                    Value packet_size; //type: uint32
                                    Value ldp_sync; //type: boolean
                                    Value database_filter; //type: boolean
                                    Value link_down_fast_detect; //type: boolean
                                    Value segment_routing_forwarding; //type: OspfSegmentRoutingForwardingEnum
                                    Value retransmit_interval; //type: uint32
                                    Value priority; //type: uint32
                                    Value flood_reduction; //type: boolean


                                class DistributeList : public Entity
                                {
                                    public:
                                        DistributeList();
                                        ~DistributeList();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value access_list_name; //type: string
                                        Value route_policy_name; //type: string




                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList


                                class Bfd : public Entity
                                {
                                    public:
                                        Bfd();
                                        ~Bfd();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value interval; //type: uint32
                                        Value detection_multiplier; //type: uint32
                                        Value fast_detect_mode; //type: BfdEnableModeEnum


                                        class BfdEnableModeEnum;


                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Bfd


                                class Authentication : public Entity
                                {
                                    public:
                                        Authentication();
                                        ~Authentication();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value key; //type: string


                                    class Type : public Entity
                                    {
                                        public:
                                            Type();
                                            ~Type();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value authen_type; //type: OspfAuthenticationEnum
                                            Value keychain_authen_type; //type: OspfKeychainAuthEnum
                                            Value keychain_name; //type: string


                                            class OspfAuthenticationEnum;
                                            class OspfKeychainAuthEnum;


                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type


                                    class MessageDigestKeies : public Entity
                                    {
                                        public:
                                            MessageDigestKeies();
                                            ~MessageDigestKeies();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class MessageDigestKey : public Entity
                                        {
                                            public:
                                                MessageDigestKey();
                                                ~MessageDigestKey();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value key_id; //type: uint32
                                                Value password; //type: string




                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey> > message_digest_key;


                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies> message_digest_keies;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type> type;


                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication


                                class Security : public Entity
                                {
                                    public:
                                        Security();
                                        ~Security();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class Ttl : public Entity
                                    {
                                        public:
                                            Ttl();
                                            ~Ttl();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value enable; //type: boolean
                                            Value hop_count; //type: uint32




                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl> ttl;


                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security


                                class DeadIntervalMinimal : public Entity
                                {
                                    public:
                                        DeadIntervalMinimal();
                                        ~DeadIntervalMinimal();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value interval; //type: uint32
                                        Value multiplier; //type: uint32




                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal


                                class FastReroute : public Entity
                                {
                                    public:
                                        FastReroute();
                                        ~FastReroute();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value fast_reroute_enable; //type: OspfFastRerouteEnum


                                    class PerLink : public Entity
                                    {
                                        public:
                                            PerLink();
                                            ~PerLink();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value fast_reroute_use_candidate_only; //type: boolean


                                        class CandidateInterfaces : public Entity
                                        {
                                            public:
                                                CandidateInterfaces();
                                                ~CandidateInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class CandidateInterface : public Entity
                                            {
                                                public:
                                                    CandidateInterface();
                                                    ~CandidateInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces


                                        class ExcludeInterfaces : public Entity
                                        {
                                            public:
                                                ExcludeInterfaces();
                                                ~ExcludeInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class ExcludeInterface : public Entity
                                            {
                                                public:
                                                    ExcludeInterface();
                                                    ~ExcludeInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces


                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;


                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink


                                    class PerPrefix : public Entity
                                    {
                                        public:
                                            PerPrefix();
                                            ~PerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value topology_independent_lfa; //type: boolean
                                            Value fast_reroute_use_candidate_only; //type: boolean


                                        class RemoteLfa : public Entity
                                        {
                                            public:
                                                RemoteLfa();
                                                ~RemoteLfa();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value tunnel; //type: OspfFrrRlfaTunnelEnum
                                                Value maximum_cost; //type: uint32


                                                class OspfFrrRlfaTunnelEnum;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa


                                        class Tiebreakers : public Entity
                                        {
                                            public:
                                                Tiebreakers();
                                                ~Tiebreakers();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class Tiebreaker : public Entity
                                            {
                                                public:
                                                    Tiebreaker();
                                                    ~Tiebreaker();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value tiebreaker_type; //type: OspfFastRerouteTiebreakersIntfEnum
                                                    Value tiebreaker_index; //type: uint32


                                                    class OspfFastRerouteTiebreakersIntfEnum;


                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker> > tiebreaker;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers


                                        class CandidateInterfaces : public Entity
                                        {
                                            public:
                                                CandidateInterfaces();
                                                ~CandidateInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class CandidateInterface : public Entity
                                            {
                                                public:
                                                    CandidateInterface();
                                                    ~CandidateInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces


                                        class ExcludeInterfaces : public Entity
                                        {
                                            public:
                                                ExcludeInterfaces();
                                                ~ExcludeInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class ExcludeInterface : public Entity
                                            {
                                                public:
                                                    ExcludeInterface();
                                                    ~ExcludeInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces


                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;


                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink> per_link;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix> per_prefix;
                                        class OspfFastRerouteEnum;


                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute


                                class CostFallback : public Entity
                                {
                                    public:
                                        CostFallback();
                                        ~CostFallback();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value cost; //type: uint32
                                        Value threshold; //type: uint32




                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback


                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication> authentication;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Bfd> bfd;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback> cost_fallback;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal> dead_interval_minimal;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList> distribute_list; // presence node
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute> fast_reroute;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security> security;
                                    class OspfNetworkEnum;
                                    class OspfSegmentRoutingForwardingEnum;


                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope


                            class NameScopes : public Entity
                            {
                                public:
                                    NameScopes();
                                    ~NameScopes();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class NameScope : public Entity
                                {
                                    public:
                                        NameScope();
                                        ~NameScope();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value interface_name; //type: string
                                        Value cost; //type: uint32
                                        Value prefix_suppression_primary; //type: boolean
                                        Value mtu_ignore; //type: boolean
                                        Value ldp_sync_igp_shortcuts; //type: boolean
                                        Value ldp_auto_config; //type: empty
                                        Value network_type; //type: OspfNetworkEnum
                                        Value hello_interval; //type: uint32
                                        Value loopback_stub_network; //type: boolean
                                        Value prefix_suppression_secondary; //type: boolean
                                        Value demand_circuit; //type: boolean
                                        Value passive; //type: boolean
                                        Value transmit_delay; //type: uint32
                                        Value packet_size; //type: uint32
                                        Value ldp_sync; //type: boolean
                                        Value database_filter; //type: boolean
                                        Value link_down_fast_detect; //type: boolean
                                        Value segment_routing_forwarding; //type: OspfSegmentRoutingForwardingEnum
                                        Value retransmit_interval; //type: uint32
                                        Value priority; //type: uint32
                                        Value flood_reduction; //type: boolean
                                        Value running; //type: empty


                                    class PrefixSid : public Entity
                                    {
                                        public:
                                            PrefixSid();
                                            ~PrefixSid();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value sid_value; //type: uint32
                                            Value explicit_null; //type: boolean
                                            Value type; //type: OspfSidEnum
                                            Value n_flag_clear; //type: boolean


                                            class OspfSidEnum;


                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid


                                    class PrefixSidStrict : public Entity
                                    {
                                        public:
                                            PrefixSidStrict();
                                            ~PrefixSidStrict();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value sid_value; //type: uint32
                                            Value explicit_null; //type: boolean
                                            Value type; //type: OspfSidEnum
                                            Value n_flag_clear; //type: boolean


                                            class OspfSidEnum;


                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict


                                    class DistributeList : public Entity
                                    {
                                        public:
                                            DistributeList();
                                            ~DistributeList();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value access_list_name; //type: string
                                            Value route_policy_name; //type: string




                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList


                                    class Bfd : public Entity
                                    {
                                        public:
                                            Bfd();
                                            ~Bfd();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value interval; //type: uint32
                                            Value detection_multiplier; //type: uint32
                                            Value fast_detect_mode; //type: BfdEnableModeEnum


                                            class BfdEnableModeEnum;


                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd


                                    class Authentication : public Entity
                                    {
                                        public:
                                            Authentication();
                                            ~Authentication();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value key; //type: string


                                        class Type : public Entity
                                        {
                                            public:
                                                Type();
                                                ~Type();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value authen_type; //type: OspfAuthenticationEnum
                                                Value keychain_authen_type; //type: OspfKeychainAuthEnum
                                                Value keychain_name; //type: string


                                                class OspfAuthenticationEnum;
                                                class OspfKeychainAuthEnum;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type


                                        class MessageDigestKeies : public Entity
                                        {
                                            public:
                                                MessageDigestKeies();
                                                ~MessageDigestKeies();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class MessageDigestKey : public Entity
                                            {
                                                public:
                                                    MessageDigestKey();
                                                    ~MessageDigestKey();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value key_id; //type: uint32
                                                    Value password; //type: string




                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey> > message_digest_key;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies


                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies> message_digest_keies;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type> type;


                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication


                                    class Security : public Entity
                                    {
                                        public:
                                            Security();
                                            ~Security();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class Ttl : public Entity
                                        {
                                            public:
                                                Ttl();
                                                ~Ttl();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value enable; //type: boolean
                                                Value hop_count; //type: uint32




                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl


                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl> ttl;


                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security


                                    class Neighbors : public Entity
                                    {
                                        public:
                                            Neighbors();
                                            ~Neighbors();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class Neighbor : public Entity
                                        {
                                            public:
                                                Neighbor();
                                                ~Neighbor();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_address; //type: string
                                                Value priority; //type: uint32
                                                Value poll_interval; //type: uint32
                                                Value cost; //type: uint32
                                                Value database_filter; //type: boolean




                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbor


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbor> > neighbor;


                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors


                                    class DeadIntervalMinimal : public Entity
                                    {
                                        public:
                                            DeadIntervalMinimal();
                                            ~DeadIntervalMinimal();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value interval; //type: uint32
                                            Value multiplier; //type: uint32




                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal


                                    class FastReroute : public Entity
                                    {
                                        public:
                                            FastReroute();
                                            ~FastReroute();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value fast_reroute_enable; //type: OspfFastRerouteEnum


                                        class PerLink : public Entity
                                        {
                                            public:
                                                PerLink();
                                                ~PerLink();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value fast_reroute_use_candidate_only; //type: boolean


                                            class CandidateInterfaces : public Entity
                                            {
                                                public:
                                                    CandidateInterfaces();
                                                    ~CandidateInterfaces();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class CandidateInterface : public Entity
                                                {
                                                    public:
                                                        CandidateInterface();
                                                        ~CandidateInterface();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value interface_name; //type: string




                                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces


                                            class ExcludeInterfaces : public Entity
                                            {
                                                public:
                                                    ExcludeInterfaces();
                                                    ~ExcludeInterfaces();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class ExcludeInterface : public Entity
                                                {
                                                    public:
                                                        ExcludeInterface();
                                                        ~ExcludeInterface();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value interface_name; //type: string




                                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces


                                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
                                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink


                                        class PerPrefix : public Entity
                                        {
                                            public:
                                                PerPrefix();
                                                ~PerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value topology_independent_lfa; //type: boolean
                                                Value fast_reroute_use_candidate_only; //type: boolean


                                            class RemoteLfa : public Entity
                                            {
                                                public:
                                                    RemoteLfa();
                                                    ~RemoteLfa();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value tunnel; //type: OspfFrrRlfaTunnelEnum
                                                    Value maximum_cost; //type: uint32


                                                    class OspfFrrRlfaTunnelEnum;


                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa


                                            class Tiebreakers : public Entity
                                            {
                                                public:
                                                    Tiebreakers();
                                                    ~Tiebreakers();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class Tiebreaker : public Entity
                                                {
                                                    public:
                                                        Tiebreaker();
                                                        ~Tiebreaker();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value tiebreaker_type; //type: OspfFastRerouteTiebreakersIntfEnum
                                                        Value tiebreaker_index; //type: uint32


                                                        class OspfFastRerouteTiebreakersIntfEnum;


                                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker> > tiebreaker;


                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers


                                            class CandidateInterfaces : public Entity
                                            {
                                                public:
                                                    CandidateInterfaces();
                                                    ~CandidateInterfaces();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class CandidateInterface : public Entity
                                                {
                                                    public:
                                                        CandidateInterface();
                                                        ~CandidateInterface();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value interface_name; //type: string




                                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces


                                            class ExcludeInterfaces : public Entity
                                            {
                                                public:
                                                    ExcludeInterfaces();
                                                    ~ExcludeInterfaces();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class ExcludeInterface : public Entity
                                                {
                                                    public:
                                                        ExcludeInterface();
                                                        ~ExcludeInterface();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value interface_name; //type: string




                                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces


                                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
                                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
                                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
                                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix


                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink> per_link;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix> per_prefix;
                                            class OspfFastRerouteEnum;


                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute


                                    class CostFallback : public Entity
                                    {
                                        public:
                                            CostFallback();
                                            ~CostFallback();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value cost; //type: uint32
                                            Value threshold; //type: uint32




                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication> authentication;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd> bfd;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback> cost_fallback;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal> dead_interval_minimal;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList> distribute_list; // presence node
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute> fast_reroute;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors> neighbors;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid> prefix_sid; // presence node
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict> prefix_sid_strict; // presence node
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security> security;
                                        class OspfNetworkEnum;
                                        class OspfSegmentRoutingForwardingEnum;


                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope> > name_scope;


                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes


                            class MultiAreaInterfaceScopes : public Entity
                            {
                                public:
                                    MultiAreaInterfaceScopes();
                                    ~MultiAreaInterfaceScopes();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class MultiAreaInterfaceScope : public Entity
                                {
                                    public:
                                        MultiAreaInterfaceScope();
                                        ~MultiAreaInterfaceScope();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value interface_name; //type: string
                                        Value cost; //type: uint32
                                        Value mtu_ignore; //type: boolean
                                        Value hello_interval; //type: uint32
                                        Value passive; //type: boolean
                                        Value transmit_delay; //type: uint32
                                        Value packet_size; //type: uint32
                                        Value database_filter; //type: boolean
                                        Value retransmit_interval; //type: uint32
                                        Value running; //type: empty


                                    class DistributeList : public Entity
                                    {
                                        public:
                                            DistributeList();
                                            ~DistributeList();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value access_list_name; //type: string
                                            Value route_policy_name; //type: string




                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList


                                    class Authentication : public Entity
                                    {
                                        public:
                                            Authentication();
                                            ~Authentication();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value key; //type: string


                                        class Type : public Entity
                                        {
                                            public:
                                                Type();
                                                ~Type();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value authen_type; //type: OspfAuthenticationEnum
                                                Value keychain_authen_type; //type: OspfKeychainAuthEnum
                                                Value keychain_name; //type: string


                                                class OspfAuthenticationEnum;
                                                class OspfKeychainAuthEnum;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type


                                        class MessageDigestKeies : public Entity
                                        {
                                            public:
                                                MessageDigestKeies();
                                                ~MessageDigestKeies();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class MessageDigestKey : public Entity
                                            {
                                                public:
                                                    MessageDigestKey();
                                                    ~MessageDigestKey();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value key_id; //type: uint32
                                                    Value password; //type: string




                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey> > message_digest_key;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies


                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies> message_digest_keies;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type> type;


                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication


                                    class Neighbors : public Entity
                                    {
                                        public:
                                            Neighbors();
                                            ~Neighbors();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class Neighbor : public Entity
                                        {
                                            public:
                                                Neighbor();
                                                ~Neighbor();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_address; //type: string
                                                Value priority; //type: uint32
                                                Value poll_interval; //type: uint32
                                                Value cost; //type: uint32
                                                Value database_filter; //type: boolean




                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor> > neighbor;


                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors


                                    class DeadIntervalMinimal : public Entity
                                    {
                                        public:
                                            DeadIntervalMinimal();
                                            ~DeadIntervalMinimal();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value interval; //type: uint32
                                            Value multiplier; //type: uint32




                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal


                                    class FastReroute : public Entity
                                    {
                                        public:
                                            FastReroute();
                                            ~FastReroute();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value fast_reroute_enable; //type: OspfFastRerouteEnum


                                        class PerLink : public Entity
                                        {
                                            public:
                                                PerLink();
                                                ~PerLink();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value fast_reroute_use_candidate_only; //type: boolean


                                            class CandidateInterfaces : public Entity
                                            {
                                                public:
                                                    CandidateInterfaces();
                                                    ~CandidateInterfaces();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class CandidateInterface : public Entity
                                                {
                                                    public:
                                                        CandidateInterface();
                                                        ~CandidateInterface();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value interface_name; //type: string




                                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces


                                            class ExcludeInterfaces : public Entity
                                            {
                                                public:
                                                    ExcludeInterfaces();
                                                    ~ExcludeInterfaces();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class ExcludeInterface : public Entity
                                                {
                                                    public:
                                                        ExcludeInterface();
                                                        ~ExcludeInterface();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value interface_name; //type: string




                                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces


                                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
                                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink


                                        class PerPrefix : public Entity
                                        {
                                            public:
                                                PerPrefix();
                                                ~PerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value topology_independent_lfa; //type: boolean
                                                Value fast_reroute_use_candidate_only; //type: boolean


                                            class RemoteLfa : public Entity
                                            {
                                                public:
                                                    RemoteLfa();
                                                    ~RemoteLfa();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value tunnel; //type: OspfFrrRlfaTunnelEnum
                                                    Value maximum_cost; //type: uint32


                                                    class OspfFrrRlfaTunnelEnum;


                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa


                                            class Tiebreakers : public Entity
                                            {
                                                public:
                                                    Tiebreakers();
                                                    ~Tiebreakers();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class Tiebreaker : public Entity
                                                {
                                                    public:
                                                        Tiebreaker();
                                                        ~Tiebreaker();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value tiebreaker_type; //type: OspfFastRerouteTiebreakersIntfEnum
                                                        Value tiebreaker_index; //type: uint32


                                                        class OspfFastRerouteTiebreakersIntfEnum;


                                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker> > tiebreaker;


                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers


                                            class CandidateInterfaces : public Entity
                                            {
                                                public:
                                                    CandidateInterfaces();
                                                    ~CandidateInterfaces();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class CandidateInterface : public Entity
                                                {
                                                    public:
                                                        CandidateInterface();
                                                        ~CandidateInterface();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value interface_name; //type: string




                                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces


                                            class ExcludeInterfaces : public Entity
                                            {
                                                public:
                                                    ExcludeInterfaces();
                                                    ~ExcludeInterfaces();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class ExcludeInterface : public Entity
                                                {
                                                    public:
                                                        ExcludeInterface();
                                                        ~ExcludeInterface();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value interface_name; //type: string




                                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces


                                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
                                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
                                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
                                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;


                                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix


                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink> per_link;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix> per_prefix;
                                            class OspfFastRerouteEnum;


                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute


                                    class CostFallback : public Entity
                                    {
                                        public:
                                            CostFallback();
                                            ~CostFallback();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value cost; //type: uint32
                                            Value threshold; //type: uint32




                                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication> authentication;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback> cost_fallback;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal> dead_interval_minimal;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList> distribute_list; // presence node
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute> fast_reroute;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors> neighbors;


                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope> > multi_area_interface_scope;


                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes


                            class AreaRanges : public Entity
                            {
                                public:
                                    AreaRanges();
                                    ~AreaRanges();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class AreaRange : public Entity
                                {
                                    public:
                                        AreaRange();
                                        ~AreaRange();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value address; //type: string
                                        Value netmask; //type: string
                                        Value not_advertise; //type: boolean




                                }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange> > area_range;


                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges


                            class Nssa : public Entity
                            {
                                public:
                                    Nssa();
                                    ~Nssa();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value no_redistribution; //type: boolean
                                    Value default_info_originate; //type: boolean
                                    Value no_summary; //type: boolean
                                    Value nssa_def_metric; //type: uint32
                                    Value metric_type; //type: OspfLinkStateMetricEnum


                                    class OspfLinkStateMetricEnum;


                            }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa


                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges> area_ranges;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope> area_scope;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes> multi_area_interface_scopes;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes> name_scopes;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa> nssa;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes> sham_link_scopes;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes> virtual_link_scopes;
                                class OspfSegmentRoutingEnum;


                        }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress> > area_address;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId> > area_area_id;


                    }; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses


                    class Timers : public Entity
                    {
                        public:
                            Timers();
                            ~Timers();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value lsa_pacing_flood; //type: uint32
                            Value fast_reroute_timer; //type: uint32
                            Value lsa_refresh; //type: uint32
                            Value lsa_group_pacing; //type: uint32
                            Value lsa_min_arrival; //type: uint32


                        class SpfTimer : public Entity
                        {
                            public:
                                SpfTimer();
                                ~SpfTimer();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value initial_delay; //type: uint32
                                Value backoff_increment; //type: uint32
                                Value max_delay; //type: uint32




                        }; // Ospf::Processes::Process::Vrfs::Vrf::Timers::SpfTimer


                        class LsaGenerationTimer : public Entity
                        {
                            public:
                                LsaGenerationTimer();
                                ~LsaGenerationTimer();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value initial_delay; //type: uint32
                                Value backoff_increment; //type: uint32
                                Value max_delay; //type: uint32




                        }; // Ospf::Processes::Process::Vrfs::Vrf::Timers::LsaGenerationTimer


                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Timers::LsaGenerationTimer> lsa_generation_timer;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Timers::SpfTimer> spf_timer;


                    }; // Ospf::Processes::Process::Vrfs::Vrf::Timers


                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyStagger> adjacency_stagger;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Af> af; // presence node
                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses> area_addresses;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AutoCost> auto_cost;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::DefaultInformation> default_information;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Distance> distance;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::DomainId> domain_id;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::FastReroute> fast_reroute;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::MaxLsa> max_lsa; // presence node
                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::MaxMetric> max_metric;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::MaximumRedistributePrefix> maximum_redistribute_prefix;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Microloop> microloop;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Nsf> nsf;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates> outgoing_route_updates;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope> process_scope;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Queue> queue;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Redistribution> redistribution;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes> summary_prefixes;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Timers> timers;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Ucmp> ucmp;
                        class OspfLogAdjEnum;


                }; // Ospf::Processes::Process::Vrfs::Vrf


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf> > vrf;


            }; // Ospf::Processes::Process::Vrfs


            class DefaultVrf : public Entity
            {
                public:
                    DefaultVrf();
                    ~DefaultVrf();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value ignore_mospf; //type: empty
                    Value router_id; //type: string
                    Value type7; //type: empty
                    Value snmp_context; //type: string
                    Value maximum_interfaces; //type: uint32
                    Value no_opaque; //type: empty
                    Value spf_prefix_priority; //type: string
                    Value maximum_paths; //type: uint32
                    Value adjacency_changes; //type: OspfLogAdjEnum
                    Value default_metric; //type: uint32


                class MonitorConvergence : public Entity
                {
                    public:
                        MonitorConvergence();
                        ~MonitorConvergence();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value enable; //type: empty
                        Value prefix_list; //type: string
                        Value track_ip_frr; //type: empty
                        Value track_external_routes; //type: empty
                        Value track_summary_routes; //type: empty




                }; // Ospf::Processes::Process::DefaultVrf::MonitorConvergence


                class SegmentRouting : public Entity
                {
                    public:
                        SegmentRouting();
                        ~SegmentRouting();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value prefix_sid_map_receive_disable; //type: empty
                        Value prefix_sid_map_advertise_local; //type: empty
                        Value strict_spf_disable; //type: empty


                    class SrPrefer : public Entity
                    {
                        public:
                            SrPrefer();
                            ~SrPrefer();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value enable; //type: boolean
                            Value prefix_list_name; //type: string




                    }; // Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrPrefer


                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrPrefer> sr_prefer;


                }; // Ospf::Processes::Process::DefaultVrf::SegmentRouting


                class Mpls : public Entity
                {
                    public:
                        Mpls();
                        ~Mpls();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value igp_intact; //type: empty
                        Value ldp_sync_update; //type: empty
                        Value multicast_intact; //type: empty
                        Value autoroute_exclude; //type: string


                    class MplsRouterId : public Entity
                    {
                        public:
                            MplsRouterId();
                            ~MplsRouterId();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value address; //type: string
                            Value interface_name; //type: string




                    }; // Ospf::Processes::Process::DefaultVrf::Mpls::MplsRouterId


                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Mpls::MplsRouterId> mpls_router_id;


                }; // Ospf::Processes::Process::DefaultVrf::Mpls


                class Microloop : public Entity
                {
                    public:
                        Microloop();
                        ~Microloop();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Avoidance : public Entity
                    {
                        public:
                            Avoidance();
                            ~Avoidance();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value enable; //type: OspfUloopAvoidanceEnum
                            Value rib_update_delay; //type: uint32


                            class OspfUloopAvoidanceEnum;


                    }; // Ospf::Processes::Process::DefaultVrf::Microloop::Avoidance


                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Microloop::Avoidance> avoidance;


                }; // Ospf::Processes::Process::DefaultVrf::Microloop


                class MaximumRedistributePrefix : public Entity
                {
                    public:
                        MaximumRedistributePrefix();
                        ~MaximumRedistributePrefix();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value number_of_prefixes; //type: uint32
                        Value threshold; //type: uint32
                        Value warning_only; //type: boolean




                }; // Ospf::Processes::Process::DefaultVrf::MaximumRedistributePrefix


                class DefaultInformation : public Entity
                {
                    public:
                        DefaultInformation();
                        ~DefaultInformation();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value always_advertise; //type: boolean
                        Value metric; //type: uint32
                        Value metric_type; //type: OspfLinkStateMetricEnum
                        Value route_policy_name; //type: string


                        class OspfLinkStateMetricEnum;


                }; // Ospf::Processes::Process::DefaultVrf::DefaultInformation


                class Af : public Entity
                {
                    public:
                        Af();
                        ~Af();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value af_name; //type: OspfAddressFamilyEnum
                        Value saf_name; //type: OspfSubAddressFamilyEnum


                        class OspfAddressFamilyEnum;
                        class OspfSubAddressFamilyEnum;


                }; // Ospf::Processes::Process::DefaultVrf::Af


                class Queue : public Entity
                {
                    public:
                        Queue();
                        ~Queue();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value dispatch_rate_limited_flush; //type: uint32
                        Value limit_high; //type: uint32
                        Value dispatch_spf_lsa_limit; //type: uint32
                        Value limit_low; //type: uint32
                        Value dispatch_rate_limited; //type: uint32
                        Value limit_medium; //type: uint32
                        Value dispatch_incoming; //type: uint32




                }; // Ospf::Processes::Process::DefaultVrf::Queue


                class MaxMetric : public Entity
                {
                    public:
                        MaxMetric();
                        ~MaxMetric();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value max_metric_no_abr_off; //type: empty


                    class MaxMetricOnProcRestart : public Entity
                    {
                        public:
                            MaxMetricOnProcRestart();
                            ~MaxMetricOnProcRestart();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value wait_for_bgp; //type: boolean
                            Value startup_max; //type: uint32
                            Value include_stub; //type: boolean
                            Value summary_lsa; //type: boolean
                            Value summary_lsa_maximum_metric; //type: uint32
                            Value external_lsa; //type: boolean
                            Value external_lsa_maximum_metric; //type: uint32




                    }; // Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcRestart


                    class MaxMetricOnStartup : public Entity
                    {
                        public:
                            MaxMetricOnStartup();
                            ~MaxMetricOnStartup();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value wait_for_bgp; //type: boolean
                            Value startup_max; //type: uint32
                            Value include_stub; //type: boolean
                            Value summary_lsa; //type: boolean
                            Value summary_lsa_maximum_metric; //type: uint32
                            Value external_lsa; //type: boolean
                            Value external_lsa_maximum_metric; //type: uint32




                    }; // Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnStartup


                    class MaxMetricOnProcMigration : public Entity
                    {
                        public:
                            MaxMetricOnProcMigration();
                            ~MaxMetricOnProcMigration();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value wait_for_bgp; //type: boolean
                            Value startup_max; //type: uint32
                            Value include_stub; //type: boolean
                            Value summary_lsa; //type: boolean
                            Value summary_lsa_maximum_metric; //type: uint32
                            Value external_lsa; //type: boolean
                            Value external_lsa_maximum_metric; //type: uint32




                    }; // Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcMigration


                    class MaxMetricAlways : public Entity
                    {
                        public:
                            MaxMetricAlways();
                            ~MaxMetricAlways();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value include_stub; //type: boolean
                            Value summary_lsa; //type: boolean
                            Value summary_lsa_maximum_metric; //type: uint32
                            Value external_lsa; //type: boolean
                            Value external_lsa_maximum_metric; //type: uint32




                    }; // Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricAlways


                    class MaxMetricOnSwitchover : public Entity
                    {
                        public:
                            MaxMetricOnSwitchover();
                            ~MaxMetricOnSwitchover();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value wait_for_bgp; //type: boolean
                            Value startup_max; //type: uint32
                            Value include_stub; //type: boolean
                            Value summary_lsa; //type: boolean
                            Value summary_lsa_maximum_metric; //type: uint32
                            Value external_lsa; //type: boolean
                            Value external_lsa_maximum_metric; //type: uint32




                    }; // Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnSwitchover


                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricAlways> max_metric_always;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcMigration> max_metric_on_proc_migration;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcRestart> max_metric_on_proc_restart;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnStartup> max_metric_on_startup;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnSwitchover> max_metric_on_switchover;


                }; // Ospf::Processes::Process::DefaultVrf::MaxMetric


                class Nsf : public Entity
                {
                    public:
                        Nsf();
                        ~Nsf();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value lifetime; //type: uint32
                        Value ietf; //type: OspfIetfNsfEnum
                        Value ietf_support_role; //type: OspfIetfNsfSupportEnum
                        Value cisco; //type: OspfCiscoNsfEnum
                        Value interval; //type: uint32
                        Value flush_delay_time; //type: uint32
                        Value ietf_strict_lsa_checking; //type: empty


                        class OspfCiscoNsfEnum;
                        class OspfIetfNsfEnum;
                        class OspfIetfNsfSupportEnum;


                }; // Ospf::Processes::Process::DefaultVrf::Nsf


                class ProcessScope : public Entity
                {
                    public:
                        ProcessScope();
                        ~ProcessScope();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value cost; //type: uint32
                        Value external_out; //type: boolean
                        Value prefix_suppression_primary; //type: boolean
                        Value mtu_ignore; //type: boolean
                        Value ldp_sync_igp_shortcuts; //type: boolean
                        Value ldp_auto_config; //type: empty
                        Value summary_in; //type: boolean
                        Value network_type; //type: OspfNetworkEnum
                        Value hello_interval; //type: uint32
                        Value loopback_stub_network; //type: boolean
                        Value prefix_suppression_secondary; //type: boolean
                        Value demand_circuit; //type: boolean
                        Value segment_routing; //type: OspfSegmentRoutingEnum
                        Value passive; //type: boolean
                        Value transmit_delay; //type: uint32
                        Value packet_size; //type: uint32
                        Value ldp_sync; //type: boolean
                        Value database_filter; //type: boolean
                        Value link_down_fast_detect; //type: boolean
                        Value segment_routing_forwarding; //type: OspfSegmentRoutingForwardingEnum
                        Value retransmit_interval; //type: uint32
                        Value priority; //type: uint32
                        Value flood_reduction; //type: boolean


                    class Srgb : public Entity
                    {
                        public:
                            Srgb();
                            ~Srgb();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value lower_bound; //type: uint32
                            Value upper_bound; //type: uint32




                    }; // Ospf::Processes::Process::DefaultVrf::ProcessScope::Srgb


                    class FastReroute : public Entity
                    {
                        public:
                            FastReroute();
                            ~FastReroute();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value fast_reroute_enable; //type: OspfProcFastRerouteEnum


                        class PerLink : public Entity
                        {
                            public:
                                PerLink();
                                ~PerLink();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value fast_reroute_use_candidate_only; //type: boolean


                            class CandidateInterfaces : public Entity
                            {
                                public:
                                    CandidateInterfaces();
                                    ~CandidateInterfaces();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class CandidateInterface : public Entity
                                {
                                    public:
                                        CandidateInterface();
                                        ~CandidateInterface();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value interface_name; //type: string




                                }; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;


                            }; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces


                            class ExcludeInterfaces : public Entity
                            {
                                public:
                                    ExcludeInterfaces();
                                    ~ExcludeInterfaces();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class ExcludeInterface : public Entity
                                {
                                    public:
                                        ExcludeInterface();
                                        ~ExcludeInterface();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value interface_name; //type: string




                                }; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                            }; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces


                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;


                        }; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink


                        class PerPrefix : public Entity
                        {
                            public:
                                PerPrefix();
                                ~PerPrefix();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value topology_independent_lfa; //type: boolean
                                Value fast_reroute_use_candidate_only; //type: boolean


                            class RemoteLfa : public Entity
                            {
                                public:
                                    RemoteLfa();
                                    ~RemoteLfa();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value tunnel; //type: OspfProcFrrRlfaTunnelEnum
                                    Value maximum_cost; //type: uint32


                                    class OspfProcFrrRlfaTunnelEnum;


                            }; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa


                            class CandidateInterfaces : public Entity
                            {
                                public:
                                    CandidateInterfaces();
                                    ~CandidateInterfaces();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class CandidateInterface : public Entity
                                {
                                    public:
                                        CandidateInterface();
                                        ~CandidateInterface();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value interface_name; //type: string




                                }; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;


                            }; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces


                            class ExcludeInterfaces : public Entity
                            {
                                public:
                                    ExcludeInterfaces();
                                    ~ExcludeInterfaces();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class ExcludeInterface : public Entity
                                {
                                    public:
                                        ExcludeInterface();
                                        ~ExcludeInterface();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value interface_name; //type: string




                                }; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                            }; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces


                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;


                        }; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix


                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink> per_link;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix> per_prefix;
                            class OspfProcFastRerouteEnum;


                    }; // Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute


                    class DistributeList : public Entity
                    {
                        public:
                            DistributeList();
                            ~DistributeList();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value access_list_name; //type: string
                            Value route_policy_name; //type: string




                    }; // Ospf::Processes::Process::DefaultVrf::ProcessScope::DistributeList


                    class Bfd : public Entity
                    {
                        public:
                            Bfd();
                            ~Bfd();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value interval; //type: uint32
                            Value detection_multiplier; //type: uint32
                            Value fast_detect_mode; //type: BfdEnableModeEnum


                            class BfdEnableModeEnum;


                    }; // Ospf::Processes::Process::DefaultVrf::ProcessScope::Bfd


                    class Authentication : public Entity
                    {
                        public:
                            Authentication();
                            ~Authentication();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value key; //type: string


                        class Type : public Entity
                        {
                            public:
                                Type();
                                ~Type();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value authen_type; //type: OspfAuthenticationEnum
                                Value keychain_authen_type; //type: OspfKeychainAuthEnum
                                Value keychain_name; //type: string


                                class OspfAuthenticationEnum;
                                class OspfKeychainAuthEnum;


                        }; // Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication::Type


                        class MessageDigestKeies : public Entity
                        {
                            public:
                                MessageDigestKeies();
                                ~MessageDigestKeies();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class MessageDigestKey : public Entity
                            {
                                public:
                                    MessageDigestKey();
                                    ~MessageDigestKey();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value key_id; //type: uint32
                                    Value password; //type: string




                            }; // Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication::MessageDigestKeies::MessageDigestKey


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication::MessageDigestKeies::MessageDigestKey> > message_digest_key;


                        }; // Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication::MessageDigestKeies


                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication::MessageDigestKeies> message_digest_keies;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication::Type> type;


                    }; // Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication


                    class Security : public Entity
                    {
                        public:
                            Security();
                            ~Security();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Ttl : public Entity
                        {
                            public:
                                Ttl();
                                ~Ttl();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value enable; //type: boolean
                                Value hop_count; //type: uint32




                        }; // Ospf::Processes::Process::DefaultVrf::ProcessScope::Security::Ttl


                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::Security::Ttl> ttl;


                    }; // Ospf::Processes::Process::DefaultVrf::ProcessScope::Security


                    class DeadIntervalMinimal : public Entity
                    {
                        public:
                            DeadIntervalMinimal();
                            ~DeadIntervalMinimal();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value interval; //type: uint32
                            Value multiplier; //type: uint32




                    }; // Ospf::Processes::Process::DefaultVrf::ProcessScope::DeadIntervalMinimal


                    class CostFallback : public Entity
                    {
                        public:
                            CostFallback();
                            ~CostFallback();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value cost; //type: uint32
                            Value threshold; //type: uint32




                    }; // Ospf::Processes::Process::DefaultVrf::ProcessScope::CostFallback


                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication> authentication;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::Bfd> bfd;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::CostFallback> cost_fallback;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::DeadIntervalMinimal> dead_interval_minimal;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::DistributeList> distribute_list; // presence node
                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute> fast_reroute;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::Security> security;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope::Srgb> srgb; // presence node
                        class OspfNetworkEnum;
                        class OspfSegmentRoutingEnum;
                        class OspfSegmentRoutingForwardingEnum;


                }; // Ospf::Processes::Process::DefaultVrf::ProcessScope


                class Redistribution : public Entity
                {
                    public:
                        Redistribution();
                        ~Redistribution();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Redistributes : public Entity
                    {
                        public:
                            Redistributes();
                            ~Redistributes();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Redistribute : public Entity
                        {
                            public:
                                Redistribute();
                                ~Redistribute();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value protocol_name; //type: OspfRedistProtocolEnum


                            class ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip : public Entity
                            {
                                public:
                                    ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip();
                                    ~ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value classful; //type: boolean
                                    Value default_redistributed_route_metric; //type: uint32
                                    Value tag; //type: int32
                                    Value metric_type; //type: OspfLinkStateMetricEnum
                                    Value eigrp_route_type; //type: OspfEigrpRouteEnum
                                    Value isis_levels; //type: OspfRouteLevelEnum
                                    Value ospf_internal; //type: boolean
                                    Value ospf_external; //type: OspfRouteLevelEnum
                                    Value ospf_nssa_level; //type: OspfRouteLevelEnum
                                    Value route_policy_name; //type: string
                                    Value bgp_preserve_med; //type: boolean
                                    Value bgp_preserve_default_info; //type: boolean
                                    Value ospf_redist_lsa_type; //type: OspfRedistLsaEnum
                                    Value ospfnssa_only; //type: boolean


                                    class OspfEigrpRouteEnum;
                                    class OspfRouteLevelEnum;
                                    class OspfLinkStateMetricEnum;
                                    class OspfRouteLevelEnum;
                                    class OspfRouteLevelEnum;
                                    class OspfRedistLsaEnum;


                            }; // Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip


                            class ApplicationOrIsisOrOspf : public Entity
                            {
                                public:
                                    ApplicationOrIsisOrOspf();
                                    ~ApplicationOrIsisOrOspf();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value instance_name; //type: string
                                    Value classful; //type: boolean
                                    Value default_redistributed_route_metric; //type: uint32
                                    Value tag; //type: int32
                                    Value metric_type; //type: OspfLinkStateMetricEnum
                                    Value eigrp_route_type; //type: OspfEigrpRouteEnum
                                    Value isis_levels; //type: OspfRouteLevelEnum
                                    Value ospf_internal; //type: boolean
                                    Value ospf_external; //type: OspfRouteLevelEnum
                                    Value ospf_nssa_level; //type: OspfRouteLevelEnum
                                    Value route_policy_name; //type: string
                                    Value bgp_preserve_med; //type: boolean
                                    Value bgp_preserve_default_info; //type: boolean
                                    Value ospf_redist_lsa_type; //type: OspfRedistLsaEnum
                                    Value ospfnssa_only; //type: boolean


                                    class OspfEigrpRouteEnum;
                                    class OspfRouteLevelEnum;
                                    class OspfLinkStateMetricEnum;
                                    class OspfRouteLevelEnum;
                                    class OspfRouteLevelEnum;
                                    class OspfRedistLsaEnum;


                            }; // Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf


                            class Bgp : public Entity
                            {
                                public:
                                    Bgp();
                                    ~Bgp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value instance_name; //type: string
                                    Value as_xx; //type: uint32
                                    Value as_yy; //type: uint32
                                    Value classful; //type: boolean
                                    Value default_redistributed_route_metric; //type: uint32
                                    Value tag; //type: int32
                                    Value metric_type; //type: OspfLinkStateMetricEnum
                                    Value eigrp_route_type; //type: OspfEigrpRouteEnum
                                    Value isis_levels; //type: OspfRouteLevelEnum
                                    Value ospf_internal; //type: boolean
                                    Value ospf_external; //type: OspfRouteLevelEnum
                                    Value ospf_nssa_level; //type: OspfRouteLevelEnum
                                    Value route_policy_name; //type: string
                                    Value bgp_preserve_med; //type: boolean
                                    Value bgp_preserve_default_info; //type: boolean
                                    Value ospf_redist_lsa_type; //type: OspfRedistLsaEnum
                                    Value ospfnssa_only; //type: boolean


                                    class OspfEigrpRouteEnum;
                                    class OspfRouteLevelEnum;
                                    class OspfLinkStateMetricEnum;
                                    class OspfRouteLevelEnum;
                                    class OspfRouteLevelEnum;
                                    class OspfRedistLsaEnum;


                            }; // Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute::Bgp


                            class Eigrp : public Entity
                            {
                                public:
                                    Eigrp();
                                    ~Eigrp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value instance_name; //type: string
                                    Value as_xx; //type: uint32
                                    Value classful; //type: boolean
                                    Value default_redistributed_route_metric; //type: uint32
                                    Value tag; //type: int32
                                    Value metric_type; //type: OspfLinkStateMetricEnum
                                    Value eigrp_route_type; //type: OspfEigrpRouteEnum
                                    Value isis_levels; //type: OspfRouteLevelEnum
                                    Value ospf_internal; //type: boolean
                                    Value ospf_external; //type: OspfRouteLevelEnum
                                    Value ospf_nssa_level; //type: OspfRouteLevelEnum
                                    Value route_policy_name; //type: string
                                    Value bgp_preserve_med; //type: boolean
                                    Value bgp_preserve_default_info; //type: boolean
                                    Value ospf_redist_lsa_type; //type: OspfRedistLsaEnum
                                    Value ospfnssa_only; //type: boolean


                                    class OspfEigrpRouteEnum;
                                    class OspfRouteLevelEnum;
                                    class OspfLinkStateMetricEnum;
                                    class OspfRouteLevelEnum;
                                    class OspfRouteLevelEnum;
                                    class OspfRedistLsaEnum;


                            }; // Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute::Eigrp


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf> > application_or_isis_or_ospf;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute::Bgp> > bgp;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip> connected_or_static_or_dagr_or_subscriber_or_mobile_or_rip; // presence node
                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute::Eigrp> > eigrp;
                                class OspfRedistProtocolEnum;


                        }; // Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes::Redistribute> > redistribute;


                    }; // Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes


                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Redistribution::Redistributes> redistributes;


                }; // Ospf::Processes::Process::DefaultVrf::Redistribution


                class AdjacencyStagger : public Entity
                {
                    public:
                        AdjacencyStagger();
                        ~AdjacencyStagger();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value disable; //type: empty
                        Value initial_nbr; //type: uint32
                        Value max_nbr; //type: uint32




                }; // Ospf::Processes::Process::DefaultVrf::AdjacencyStagger


                class MaxLsa : public Entity
                {
                    public:
                        MaxLsa();
                        ~MaxLsa();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value max_lsa_limit; //type: uint32
                        Value max_lsa_threshold; //type: uint32
                        Value max_lsa_warning_only; //type: boolean
                        Value max_lsa_ignore_time; //type: uint32
                        Value max_lsa_ignore_count; //type: uint32
                        Value max_lsa_reset_time; //type: uint32




                }; // Ospf::Processes::Process::DefaultVrf::MaxLsa


                class AutoCost : public Entity
                {
                    public:
                        AutoCost();
                        ~AutoCost();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value disable; //type: boolean
                        Value bandwidth; //type: uint32




                }; // Ospf::Processes::Process::DefaultVrf::AutoCost


                class Ucmp : public Entity
                {
                    public:
                        Ucmp();
                        ~Ucmp();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value delay_interval; //type: uint32


                    class Enable : public Entity
                    {
                        public:
                            Enable();
                            ~Enable();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value variance; //type: uint32
                            Value prefix_list_name; //type: string




                    }; // Ospf::Processes::Process::DefaultVrf::Ucmp::Enable


                    class ExcludeInterfaces : public Entity
                    {
                        public:
                            ExcludeInterfaces();
                            ~ExcludeInterfaces();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class ExcludeInterface : public Entity
                        {
                            public:
                                ExcludeInterface();
                                ~ExcludeInterface();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value interface_name; //type: string




                        }; // Ospf::Processes::Process::DefaultVrf::Ucmp::ExcludeInterfaces::ExcludeInterface


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Ucmp::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                    }; // Ospf::Processes::Process::DefaultVrf::Ucmp::ExcludeInterfaces


                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Ucmp::Enable> enable;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Ucmp::ExcludeInterfaces> exclude_interfaces;


                }; // Ospf::Processes::Process::DefaultVrf::Ucmp


                class FastReroute : public Entity
                {
                    public:
                        FastReroute();
                        ~FastReroute();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class PerLink : public Entity
                    {
                        public:
                            PerLink();
                            ~PerLink();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value priority; //type: OspfFastReroutePriorityEnum


                            class OspfFastReroutePriorityEnum;


                    }; // Ospf::Processes::Process::DefaultVrf::FastReroute::PerLink


                    class PerPrefix : public Entity
                    {
                        public:
                            PerPrefix();
                            ~PerPrefix();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value load_sharing_disable; //type: empty
                            Value priority; //type: OspfFastReroutePriorityEnum


                        class Tiebreakers : public Entity
                        {
                            public:
                                Tiebreakers();
                                ~Tiebreakers();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Tiebreaker : public Entity
                            {
                                public:
                                    Tiebreaker();
                                    ~Tiebreaker();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value tiebreaker_type; //type: OspfFastRerouteTiebreakersEnum
                                    Value tiebreaker_index; //type: uint32


                                    class OspfFastRerouteTiebreakersEnum;


                            }; // Ospf::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker> > tiebreaker;


                        }; // Ospf::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers


                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
                            class OspfFastReroutePriorityEnum;


                    }; // Ospf::Processes::Process::DefaultVrf::FastReroute::PerPrefix


                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::FastReroute::PerLink> per_link;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::FastReroute::PerPrefix> per_prefix;


                }; // Ospf::Processes::Process::DefaultVrf::FastReroute


                class SummaryPrefixes : public Entity
                {
                    public:
                        SummaryPrefixes();
                        ~SummaryPrefixes();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class SummaryPrefixData : public Entity
                    {
                        public:
                            SummaryPrefixData();
                            ~SummaryPrefixData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value not_advertise; //type: boolean
                            Value tag; //type: int32




                    }; // Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefixData


                    class PrefixAndNetmask : public Entity
                    {
                        public:
                            PrefixAndNetmask();
                            ~PrefixAndNetmask();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value prefix; //type: string
                            Value netmask; //type: string
                            Value not_advertise; //type: boolean
                            Value tag; //type: int32




                    }; // Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::PrefixAndNetmask


                    class Prefix : public Entity
                    {
                        public:
                            Prefix();
                            ~Prefix();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value prefix; //type: string
                            Value not_advertise; //type: boolean
                            Value tag; //type: int32




                    }; // Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::Prefix


                    class Netmask : public Entity
                    {
                        public:
                            Netmask();
                            ~Netmask();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value netmask; //type: string
                            Value not_advertise; //type: boolean
                            Value tag; //type: int32




                    }; // Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::Netmask


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::Netmask> > netmask;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::Prefix> > prefix;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::PrefixAndNetmask> > prefix_and_netmask;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefixData> summary_prefix_data;


                }; // Ospf::Processes::Process::DefaultVrf::SummaryPrefixes


                class OutgoingRouteUpdates : public Entity
                {
                    public:
                        OutgoingRouteUpdates();
                        ~OutgoingRouteUpdates();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class OutgoingRouteUpdate : public Entity
                    {
                        public:
                            OutgoingRouteUpdate();
                            ~OutgoingRouteUpdate();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value protocol_name; //type: OspfDistListProtocolEnum
                            Value access_list_name; //type: string
                            Value as_xx; //type: uint32
                            Value as_yy; //type: uint32
                            Value ospf_process_name; //type: string


                            class OspfDistListProtocolEnum;


                    }; // Ospf::Processes::Process::DefaultVrf::OutgoingRouteUpdates::OutgoingRouteUpdate


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::OutgoingRouteUpdates::OutgoingRouteUpdate> > outgoing_route_update;


                }; // Ospf::Processes::Process::DefaultVrf::OutgoingRouteUpdates


                class Distance : public Entity
                {
                    public:
                        Distance();
                        ~Distance();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value admin_distance; //type: uint32


                    class OspfDistance : public Entity
                    {
                        public:
                            OspfDistance();
                            ~OspfDistance();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value intra_area; //type: uint32
                            Value inter_area; //type: uint32
                            Value external_routes; //type: uint32




                    }; // Ospf::Processes::Process::DefaultVrf::Distance::OspfDistance


                    class IpDistances : public Entity
                    {
                        public:
                            IpDistances();
                            ~IpDistances();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class IpDistance : public Entity
                        {
                            public:
                                IpDistance();
                                ~IpDistance();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value address; //type: string
                                Value wildcard; //type: string
                                Value distance; //type: uint32
                                Value access_list_name; //type: string




                        }; // Ospf::Processes::Process::DefaultVrf::Distance::IpDistances::IpDistance


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Distance::IpDistances::IpDistance> > ip_distance;


                    }; // Ospf::Processes::Process::DefaultVrf::Distance::IpDistances


                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Distance::IpDistances> ip_distances;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Distance::OspfDistance> ospf_distance;


                }; // Ospf::Processes::Process::DefaultVrf::Distance


                class AreaAddresses : public Entity
                {
                    public:
                        AreaAddresses();
                        ~AreaAddresses();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class AreaAddress : public Entity
                    {
                        public:
                            AreaAddress();
                            ~AreaAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value address; //type: string
                            Value route_policy_in; //type: string
                            Value default_cost; //type: uint32
                            Value route_policy_out; //type: string
                            Value stub; //type: boolean
                            Value mpls_traffic_eng; //type: empty
                            Value external_out; //type: boolean
                            Value summary_in; //type: boolean
                            Value segment_routing; //type: OspfSegmentRoutingEnum
                            Value running; //type: empty


                        class VirtualLinkScopes : public Entity
                        {
                            public:
                                VirtualLinkScopes();
                                ~VirtualLinkScopes();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class VirtualLinkScope : public Entity
                            {
                                public:
                                    VirtualLinkScope();
                                    ~VirtualLinkScope();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value address; //type: string
                                    Value hello_interval; //type: uint32
                                    Value transmit_delay; //type: uint32
                                    Value retransmit_interval; //type: uint32
                                    Value running; //type: empty


                                class Authentication : public Entity
                                {
                                    public:
                                        Authentication();
                                        ~Authentication();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value key; //type: string


                                    class Type : public Entity
                                    {
                                        public:
                                            Type();
                                            ~Type();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value authen_type; //type: OspfAuthenticationEnum
                                            Value keychain_authen_type; //type: OspfKeychainAuthEnum
                                            Value keychain_name; //type: string


                                            class OspfAuthenticationEnum;
                                            class OspfKeychainAuthEnum;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type


                                    class MessageDigestKeies : public Entity
                                    {
                                        public:
                                            MessageDigestKeies();
                                            ~MessageDigestKeies();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class MessageDigestKey : public Entity
                                        {
                                            public:
                                                MessageDigestKey();
                                                ~MessageDigestKey();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value key_id; //type: uint32
                                                Value password; //type: string




                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey> > message_digest_key;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies> message_digest_keies;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type> type;


                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication


                                class DeadIntervalMinimal : public Entity
                                {
                                    public:
                                        DeadIntervalMinimal();
                                        ~DeadIntervalMinimal();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value interval; //type: uint32
                                        Value multiplier; //type: uint32




                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal


                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication> authentication;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal> dead_interval_minimal;


                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope> > virtual_link_scope;


                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes


                        class ShamLinkScopes : public Entity
                        {
                            public:
                                ShamLinkScopes();
                                ~ShamLinkScopes();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class ShamLinkScope : public Entity
                            {
                                public:
                                    ShamLinkScope();
                                    ~ShamLinkScope();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value source_address; //type: string
                                    Value destination_address; //type: string
                                    Value source; //type: string
                                    Value cost; //type: uint32
                                    Value hello_interval; //type: uint32
                                    Value transmit_delay; //type: uint32
                                    Value retransmit_interval; //type: uint32
                                    Value running; //type: empty


                                class Authentication : public Entity
                                {
                                    public:
                                        Authentication();
                                        ~Authentication();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value key; //type: string


                                    class Type : public Entity
                                    {
                                        public:
                                            Type();
                                            ~Type();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value authen_type; //type: OspfAuthenticationEnum
                                            Value keychain_authen_type; //type: OspfKeychainAuthEnum
                                            Value keychain_name; //type: string


                                            class OspfAuthenticationEnum;
                                            class OspfKeychainAuthEnum;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type


                                    class MessageDigestKeies : public Entity
                                    {
                                        public:
                                            MessageDigestKeies();
                                            ~MessageDigestKeies();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class MessageDigestKey : public Entity
                                        {
                                            public:
                                                MessageDigestKey();
                                                ~MessageDigestKey();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value key_id; //type: uint32
                                                Value password; //type: string




                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey> > message_digest_key;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies> message_digest_keies;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type> type;


                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication


                                class DeadIntervalMinimal : public Entity
                                {
                                    public:
                                        DeadIntervalMinimal();
                                        ~DeadIntervalMinimal();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value interval; //type: uint32
                                        Value multiplier; //type: uint32




                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal


                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication> authentication;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal> dead_interval_minimal;


                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope> > sham_link_scope;


                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes


                        class AreaScope : public Entity
                        {
                            public:
                                AreaScope();
                                ~AreaScope();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value cost; //type: uint32
                                Value prefix_suppression_primary; //type: boolean
                                Value mtu_ignore; //type: boolean
                                Value ldp_sync_igp_shortcuts; //type: boolean
                                Value ldp_auto_config; //type: empty
                                Value network_type; //type: OspfNetworkEnum
                                Value hello_interval; //type: uint32
                                Value loopback_stub_network; //type: boolean
                                Value prefix_suppression_secondary; //type: boolean
                                Value demand_circuit; //type: boolean
                                Value passive; //type: boolean
                                Value transmit_delay; //type: uint32
                                Value packet_size; //type: uint32
                                Value ldp_sync; //type: boolean
                                Value database_filter; //type: boolean
                                Value link_down_fast_detect; //type: boolean
                                Value segment_routing_forwarding; //type: OspfSegmentRoutingForwardingEnum
                                Value retransmit_interval; //type: uint32
                                Value priority; //type: uint32
                                Value flood_reduction; //type: boolean


                            class DistributeList : public Entity
                            {
                                public:
                                    DistributeList();
                                    ~DistributeList();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value access_list_name; //type: string
                                    Value route_policy_name; //type: string




                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::DistributeList


                            class Bfd : public Entity
                            {
                                public:
                                    Bfd();
                                    ~Bfd();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value interval; //type: uint32
                                    Value detection_multiplier; //type: uint32
                                    Value fast_detect_mode; //type: BfdEnableModeEnum


                                    class BfdEnableModeEnum;


                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Bfd


                            class Authentication : public Entity
                            {
                                public:
                                    Authentication();
                                    ~Authentication();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value key; //type: string


                                class Type : public Entity
                                {
                                    public:
                                        Type();
                                        ~Type();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value authen_type; //type: OspfAuthenticationEnum
                                        Value keychain_authen_type; //type: OspfKeychainAuthEnum
                                        Value keychain_name; //type: string


                                        class OspfAuthenticationEnum;
                                        class OspfKeychainAuthEnum;


                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::Type


                                class MessageDigestKeies : public Entity
                                {
                                    public:
                                        MessageDigestKeies();
                                        ~MessageDigestKeies();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class MessageDigestKey : public Entity
                                    {
                                        public:
                                            MessageDigestKey();
                                            ~MessageDigestKey();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value key_id; //type: uint32
                                            Value password; //type: string




                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey> > message_digest_key;


                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies


                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies> message_digest_keies;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication::Type> type;


                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication


                            class Security : public Entity
                            {
                                public:
                                    Security();
                                    ~Security();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Ttl : public Entity
                                {
                                    public:
                                        Ttl();
                                        ~Ttl();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value enable; //type: boolean
                                        Value hop_count; //type: uint32




                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl


                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl> ttl;


                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Security


                            class DeadIntervalMinimal : public Entity
                            {
                                public:
                                    DeadIntervalMinimal();
                                    ~DeadIntervalMinimal();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value interval; //type: uint32
                                    Value multiplier; //type: uint32




                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::DeadIntervalMinimal


                            class FastReroute : public Entity
                            {
                                public:
                                    FastReroute();
                                    ~FastReroute();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value fast_reroute_enable; //type: OspfFastRerouteEnum


                                class PerLink : public Entity
                                {
                                    public:
                                        PerLink();
                                        ~PerLink();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value fast_reroute_use_candidate_only; //type: boolean


                                    class CandidateInterfaces : public Entity
                                    {
                                        public:
                                            CandidateInterfaces();
                                            ~CandidateInterfaces();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class CandidateInterface : public Entity
                                        {
                                            public:
                                                CandidateInterface();
                                                ~CandidateInterface();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value interface_name; //type: string




                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces


                                    class ExcludeInterfaces : public Entity
                                    {
                                        public:
                                            ExcludeInterfaces();
                                            ~ExcludeInterfaces();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class ExcludeInterface : public Entity
                                        {
                                            public:
                                                ExcludeInterface();
                                                ~ExcludeInterface();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value interface_name; //type: string




                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;


                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink


                                class PerPrefix : public Entity
                                {
                                    public:
                                        PerPrefix();
                                        ~PerPrefix();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value topology_independent_lfa; //type: boolean
                                        Value fast_reroute_use_candidate_only; //type: boolean


                                    class RemoteLfa : public Entity
                                    {
                                        public:
                                            RemoteLfa();
                                            ~RemoteLfa();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value tunnel; //type: OspfFrrRlfaTunnelEnum
                                            Value maximum_cost; //type: uint32


                                            class OspfFrrRlfaTunnelEnum;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa


                                    class Tiebreakers : public Entity
                                    {
                                        public:
                                            Tiebreakers();
                                            ~Tiebreakers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class Tiebreaker : public Entity
                                        {
                                            public:
                                                Tiebreaker();
                                                ~Tiebreaker();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value tiebreaker_type; //type: OspfFastRerouteTiebreakersIntfEnum
                                                Value tiebreaker_index; //type: uint32


                                                class OspfFastRerouteTiebreakersIntfEnum;


                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker> > tiebreaker;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers


                                    class CandidateInterfaces : public Entity
                                    {
                                        public:
                                            CandidateInterfaces();
                                            ~CandidateInterfaces();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class CandidateInterface : public Entity
                                        {
                                            public:
                                                CandidateInterface();
                                                ~CandidateInterface();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value interface_name; //type: string




                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces


                                    class ExcludeInterfaces : public Entity
                                    {
                                        public:
                                            ExcludeInterfaces();
                                            ~ExcludeInterfaces();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class ExcludeInterface : public Entity
                                        {
                                            public:
                                                ExcludeInterface();
                                                ~ExcludeInterface();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value interface_name; //type: string




                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;


                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix


                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink> per_link;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix> per_prefix;
                                    class OspfFastRerouteEnum;


                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute


                            class CostFallback : public Entity
                            {
                                public:
                                    CostFallback();
                                    ~CostFallback();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value cost; //type: uint32
                                    Value threshold; //type: uint32




                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::CostFallback


                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Authentication> authentication;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Bfd> bfd;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::CostFallback> cost_fallback;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::DeadIntervalMinimal> dead_interval_minimal;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::DistributeList> distribute_list; // presence node
                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute> fast_reroute;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::Security> security;
                                class OspfNetworkEnum;
                                class OspfSegmentRoutingForwardingEnum;


                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope


                        class NameScopes : public Entity
                        {
                            public:
                                NameScopes();
                                ~NameScopes();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class NameScope : public Entity
                            {
                                public:
                                    NameScope();
                                    ~NameScope();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value interface_name; //type: string
                                    Value cost; //type: uint32
                                    Value prefix_suppression_primary; //type: boolean
                                    Value mtu_ignore; //type: boolean
                                    Value ldp_sync_igp_shortcuts; //type: boolean
                                    Value ldp_auto_config; //type: empty
                                    Value network_type; //type: OspfNetworkEnum
                                    Value hello_interval; //type: uint32
                                    Value loopback_stub_network; //type: boolean
                                    Value prefix_suppression_secondary; //type: boolean
                                    Value demand_circuit; //type: boolean
                                    Value passive; //type: boolean
                                    Value transmit_delay; //type: uint32
                                    Value packet_size; //type: uint32
                                    Value ldp_sync; //type: boolean
                                    Value database_filter; //type: boolean
                                    Value link_down_fast_detect; //type: boolean
                                    Value segment_routing_forwarding; //type: OspfSegmentRoutingForwardingEnum
                                    Value retransmit_interval; //type: uint32
                                    Value priority; //type: uint32
                                    Value flood_reduction; //type: boolean
                                    Value running; //type: empty


                                class PrefixSid : public Entity
                                {
                                    public:
                                        PrefixSid();
                                        ~PrefixSid();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value sid_value; //type: uint32
                                        Value explicit_null; //type: boolean
                                        Value type; //type: OspfSidEnum
                                        Value n_flag_clear; //type: boolean


                                        class OspfSidEnum;


                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid


                                class PrefixSidStrict : public Entity
                                {
                                    public:
                                        PrefixSidStrict();
                                        ~PrefixSidStrict();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value sid_value; //type: uint32
                                        Value explicit_null; //type: boolean
                                        Value type; //type: OspfSidEnum
                                        Value n_flag_clear; //type: boolean


                                        class OspfSidEnum;


                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict


                                class DistributeList : public Entity
                                {
                                    public:
                                        DistributeList();
                                        ~DistributeList();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value access_list_name; //type: string
                                        Value route_policy_name; //type: string




                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList


                                class Bfd : public Entity
                                {
                                    public:
                                        Bfd();
                                        ~Bfd();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value interval; //type: uint32
                                        Value detection_multiplier; //type: uint32
                                        Value fast_detect_mode; //type: BfdEnableModeEnum


                                        class BfdEnableModeEnum;


                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd


                                class Authentication : public Entity
                                {
                                    public:
                                        Authentication();
                                        ~Authentication();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value key; //type: string


                                    class Type : public Entity
                                    {
                                        public:
                                            Type();
                                            ~Type();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value authen_type; //type: OspfAuthenticationEnum
                                            Value keychain_authen_type; //type: OspfKeychainAuthEnum
                                            Value keychain_name; //type: string


                                            class OspfAuthenticationEnum;
                                            class OspfKeychainAuthEnum;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type


                                    class MessageDigestKeies : public Entity
                                    {
                                        public:
                                            MessageDigestKeies();
                                            ~MessageDigestKeies();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class MessageDigestKey : public Entity
                                        {
                                            public:
                                                MessageDigestKey();
                                                ~MessageDigestKey();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value key_id; //type: uint32
                                                Value password; //type: string




                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey> > message_digest_key;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies> message_digest_keies;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type> type;


                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication


                                class Security : public Entity
                                {
                                    public:
                                        Security();
                                        ~Security();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class Ttl : public Entity
                                    {
                                        public:
                                            Ttl();
                                            ~Ttl();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value enable; //type: boolean
                                            Value hop_count; //type: uint32




                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl> ttl;


                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security


                                class Neighbors : public Entity
                                {
                                    public:
                                        Neighbors();
                                        ~Neighbors();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class Neighbor : public Entity
                                    {
                                        public:
                                            Neighbor();
                                            ~Neighbor();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value neighbor_address; //type: string
                                            Value priority; //type: uint32
                                            Value poll_interval; //type: uint32
                                            Value cost; //type: uint32
                                            Value database_filter; //type: boolean




                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor> > neighbor;


                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors


                                class DeadIntervalMinimal : public Entity
                                {
                                    public:
                                        DeadIntervalMinimal();
                                        ~DeadIntervalMinimal();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value interval; //type: uint32
                                        Value multiplier; //type: uint32




                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal


                                class FastReroute : public Entity
                                {
                                    public:
                                        FastReroute();
                                        ~FastReroute();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value fast_reroute_enable; //type: OspfFastRerouteEnum


                                    class PerLink : public Entity
                                    {
                                        public:
                                            PerLink();
                                            ~PerLink();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value fast_reroute_use_candidate_only; //type: boolean


                                        class CandidateInterfaces : public Entity
                                        {
                                            public:
                                                CandidateInterfaces();
                                                ~CandidateInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class CandidateInterface : public Entity
                                            {
                                                public:
                                                    CandidateInterface();
                                                    ~CandidateInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces


                                        class ExcludeInterfaces : public Entity
                                        {
                                            public:
                                                ExcludeInterfaces();
                                                ~ExcludeInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class ExcludeInterface : public Entity
                                            {
                                                public:
                                                    ExcludeInterface();
                                                    ~ExcludeInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces


                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink


                                    class PerPrefix : public Entity
                                    {
                                        public:
                                            PerPrefix();
                                            ~PerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value topology_independent_lfa; //type: boolean
                                            Value fast_reroute_use_candidate_only; //type: boolean


                                        class RemoteLfa : public Entity
                                        {
                                            public:
                                                RemoteLfa();
                                                ~RemoteLfa();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value tunnel; //type: OspfFrrRlfaTunnelEnum
                                                Value maximum_cost; //type: uint32


                                                class OspfFrrRlfaTunnelEnum;


                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa


                                        class Tiebreakers : public Entity
                                        {
                                            public:
                                                Tiebreakers();
                                                ~Tiebreakers();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class Tiebreaker : public Entity
                                            {
                                                public:
                                                    Tiebreaker();
                                                    ~Tiebreaker();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value tiebreaker_type; //type: OspfFastRerouteTiebreakersIntfEnum
                                                    Value tiebreaker_index; //type: uint32


                                                    class OspfFastRerouteTiebreakersIntfEnum;


                                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker> > tiebreaker;


                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers


                                        class CandidateInterfaces : public Entity
                                        {
                                            public:
                                                CandidateInterfaces();
                                                ~CandidateInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class CandidateInterface : public Entity
                                            {
                                                public:
                                                    CandidateInterface();
                                                    ~CandidateInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces


                                        class ExcludeInterfaces : public Entity
                                        {
                                            public:
                                                ExcludeInterfaces();
                                                ~ExcludeInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class ExcludeInterface : public Entity
                                            {
                                                public:
                                                    ExcludeInterface();
                                                    ~ExcludeInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces


                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink> per_link;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix> per_prefix;
                                        class OspfFastRerouteEnum;


                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute


                                class CostFallback : public Entity
                                {
                                    public:
                                        CostFallback();
                                        ~CostFallback();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value cost; //type: uint32
                                        Value threshold; //type: uint32




                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback


                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication> authentication;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd> bfd;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback> cost_fallback;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal> dead_interval_minimal;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList> distribute_list; // presence node
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute> fast_reroute;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors> neighbors;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid> prefix_sid; // presence node
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict> prefix_sid_strict; // presence node
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security> security;
                                    class OspfNetworkEnum;
                                    class OspfSegmentRoutingForwardingEnum;


                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes::NameScope> > name_scope;


                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes


                        class MultiAreaInterfaceScopes : public Entity
                        {
                            public:
                                MultiAreaInterfaceScopes();
                                ~MultiAreaInterfaceScopes();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class MultiAreaInterfaceScope : public Entity
                            {
                                public:
                                    MultiAreaInterfaceScope();
                                    ~MultiAreaInterfaceScope();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value interface_name; //type: string
                                    Value cost; //type: uint32
                                    Value mtu_ignore; //type: boolean
                                    Value hello_interval; //type: uint32
                                    Value passive; //type: boolean
                                    Value transmit_delay; //type: uint32
                                    Value packet_size; //type: uint32
                                    Value database_filter; //type: boolean
                                    Value retransmit_interval; //type: uint32
                                    Value running; //type: empty


                                class DistributeList : public Entity
                                {
                                    public:
                                        DistributeList();
                                        ~DistributeList();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value access_list_name; //type: string
                                        Value route_policy_name; //type: string




                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList


                                class Authentication : public Entity
                                {
                                    public:
                                        Authentication();
                                        ~Authentication();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value key; //type: string


                                    class Type : public Entity
                                    {
                                        public:
                                            Type();
                                            ~Type();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value authen_type; //type: OspfAuthenticationEnum
                                            Value keychain_authen_type; //type: OspfKeychainAuthEnum
                                            Value keychain_name; //type: string


                                            class OspfAuthenticationEnum;
                                            class OspfKeychainAuthEnum;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type


                                    class MessageDigestKeies : public Entity
                                    {
                                        public:
                                            MessageDigestKeies();
                                            ~MessageDigestKeies();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class MessageDigestKey : public Entity
                                        {
                                            public:
                                                MessageDigestKey();
                                                ~MessageDigestKey();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value key_id; //type: uint32
                                                Value password; //type: string




                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey> > message_digest_key;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies> message_digest_keies;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type> type;


                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication


                                class Neighbors : public Entity
                                {
                                    public:
                                        Neighbors();
                                        ~Neighbors();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class Neighbor : public Entity
                                    {
                                        public:
                                            Neighbor();
                                            ~Neighbor();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value neighbor_address; //type: string
                                            Value priority; //type: uint32
                                            Value poll_interval; //type: uint32
                                            Value cost; //type: uint32
                                            Value database_filter; //type: boolean




                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor> > neighbor;


                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors


                                class DeadIntervalMinimal : public Entity
                                {
                                    public:
                                        DeadIntervalMinimal();
                                        ~DeadIntervalMinimal();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value interval; //type: uint32
                                        Value multiplier; //type: uint32




                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal


                                class FastReroute : public Entity
                                {
                                    public:
                                        FastReroute();
                                        ~FastReroute();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value fast_reroute_enable; //type: OspfFastRerouteEnum


                                    class PerLink : public Entity
                                    {
                                        public:
                                            PerLink();
                                            ~PerLink();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value fast_reroute_use_candidate_only; //type: boolean


                                        class CandidateInterfaces : public Entity
                                        {
                                            public:
                                                CandidateInterfaces();
                                                ~CandidateInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class CandidateInterface : public Entity
                                            {
                                                public:
                                                    CandidateInterface();
                                                    ~CandidateInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces


                                        class ExcludeInterfaces : public Entity
                                        {
                                            public:
                                                ExcludeInterfaces();
                                                ~ExcludeInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class ExcludeInterface : public Entity
                                            {
                                                public:
                                                    ExcludeInterface();
                                                    ~ExcludeInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces


                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink


                                    class PerPrefix : public Entity
                                    {
                                        public:
                                            PerPrefix();
                                            ~PerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value topology_independent_lfa; //type: boolean
                                            Value fast_reroute_use_candidate_only; //type: boolean


                                        class RemoteLfa : public Entity
                                        {
                                            public:
                                                RemoteLfa();
                                                ~RemoteLfa();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value tunnel; //type: OspfFrrRlfaTunnelEnum
                                                Value maximum_cost; //type: uint32


                                                class OspfFrrRlfaTunnelEnum;


                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa


                                        class Tiebreakers : public Entity
                                        {
                                            public:
                                                Tiebreakers();
                                                ~Tiebreakers();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class Tiebreaker : public Entity
                                            {
                                                public:
                                                    Tiebreaker();
                                                    ~Tiebreaker();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value tiebreaker_type; //type: OspfFastRerouteTiebreakersIntfEnum
                                                    Value tiebreaker_index; //type: uint32


                                                    class OspfFastRerouteTiebreakersIntfEnum;


                                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker> > tiebreaker;


                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers


                                        class CandidateInterfaces : public Entity
                                        {
                                            public:
                                                CandidateInterfaces();
                                                ~CandidateInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class CandidateInterface : public Entity
                                            {
                                                public:
                                                    CandidateInterface();
                                                    ~CandidateInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces


                                        class ExcludeInterfaces : public Entity
                                        {
                                            public:
                                                ExcludeInterfaces();
                                                ~ExcludeInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class ExcludeInterface : public Entity
                                            {
                                                public:
                                                    ExcludeInterface();
                                                    ~ExcludeInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces


                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink> per_link;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix> per_prefix;
                                        class OspfFastRerouteEnum;


                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute


                                class CostFallback : public Entity
                                {
                                    public:
                                        CostFallback();
                                        ~CostFallback();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value cost; //type: uint32
                                        Value threshold; //type: uint32




                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback


                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication> authentication;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback> cost_fallback;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal> dead_interval_minimal;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList> distribute_list; // presence node
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute> fast_reroute;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors> neighbors;


                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope> > multi_area_interface_scope;


                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes


                        class AreaRanges : public Entity
                        {
                            public:
                                AreaRanges();
                                ~AreaRanges();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class AreaRange : public Entity
                            {
                                public:
                                    AreaRange();
                                    ~AreaRange();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value address; //type: string
                                    Value netmask; //type: string
                                    Value not_advertise; //type: boolean




                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaRanges::AreaRange


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaRanges::AreaRange> > area_range;


                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaRanges


                        class Nssa : public Entity
                        {
                            public:
                                Nssa();
                                ~Nssa();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value no_redistribution; //type: boolean
                                Value default_info_originate; //type: boolean
                                Value no_summary; //type: boolean
                                Value nssa_def_metric; //type: uint32
                                Value metric_type; //type: OspfLinkStateMetricEnum


                                class OspfLinkStateMetricEnum;


                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Nssa


                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaRanges> area_ranges;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope> area_scope;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes> multi_area_interface_scopes;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::NameScopes> name_scopes;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Nssa> nssa;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinkScopes> sham_link_scopes;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinkScopes> virtual_link_scopes;
                            class OspfSegmentRoutingEnum;


                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress


                    class AreaAreaId : public Entity
                    {
                        public:
                            AreaAreaId();
                            ~AreaAreaId();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value area_id; //type: int32
                            Value route_policy_in; //type: string
                            Value default_cost; //type: uint32
                            Value route_policy_out; //type: string
                            Value stub; //type: boolean
                            Value mpls_traffic_eng; //type: empty
                            Value external_out; //type: boolean
                            Value summary_in; //type: boolean
                            Value segment_routing; //type: OspfSegmentRoutingEnum
                            Value running; //type: empty


                        class VirtualLinkScopes : public Entity
                        {
                            public:
                                VirtualLinkScopes();
                                ~VirtualLinkScopes();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class VirtualLinkScope : public Entity
                            {
                                public:
                                    VirtualLinkScope();
                                    ~VirtualLinkScope();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value address; //type: string
                                    Value hello_interval; //type: uint32
                                    Value transmit_delay; //type: uint32
                                    Value retransmit_interval; //type: uint32
                                    Value running; //type: empty


                                class Authentication : public Entity
                                {
                                    public:
                                        Authentication();
                                        ~Authentication();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value key; //type: string


                                    class Type : public Entity
                                    {
                                        public:
                                            Type();
                                            ~Type();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value authen_type; //type: OspfAuthenticationEnum
                                            Value keychain_authen_type; //type: OspfKeychainAuthEnum
                                            Value keychain_name; //type: string


                                            class OspfAuthenticationEnum;
                                            class OspfKeychainAuthEnum;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type


                                    class MessageDigestKeies : public Entity
                                    {
                                        public:
                                            MessageDigestKeies();
                                            ~MessageDigestKeies();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class MessageDigestKey : public Entity
                                        {
                                            public:
                                                MessageDigestKey();
                                                ~MessageDigestKey();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value key_id; //type: uint32
                                                Value password; //type: string




                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey> > message_digest_key;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies> message_digest_keies;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type> type;


                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication


                                class DeadIntervalMinimal : public Entity
                                {
                                    public:
                                        DeadIntervalMinimal();
                                        ~DeadIntervalMinimal();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value interval; //type: uint32
                                        Value multiplier; //type: uint32




                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal


                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication> authentication;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal> dead_interval_minimal;


                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope> > virtual_link_scope;


                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes


                        class ShamLinkScopes : public Entity
                        {
                            public:
                                ShamLinkScopes();
                                ~ShamLinkScopes();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class ShamLinkScope : public Entity
                            {
                                public:
                                    ShamLinkScope();
                                    ~ShamLinkScope();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value source_address; //type: string
                                    Value destination_address; //type: string
                                    Value source; //type: string
                                    Value cost; //type: uint32
                                    Value hello_interval; //type: uint32
                                    Value transmit_delay; //type: uint32
                                    Value retransmit_interval; //type: uint32
                                    Value running; //type: empty


                                class Authentication : public Entity
                                {
                                    public:
                                        Authentication();
                                        ~Authentication();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value key; //type: string


                                    class Type : public Entity
                                    {
                                        public:
                                            Type();
                                            ~Type();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value authen_type; //type: OspfAuthenticationEnum
                                            Value keychain_authen_type; //type: OspfKeychainAuthEnum
                                            Value keychain_name; //type: string


                                            class OspfAuthenticationEnum;
                                            class OspfKeychainAuthEnum;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type


                                    class MessageDigestKeies : public Entity
                                    {
                                        public:
                                            MessageDigestKeies();
                                            ~MessageDigestKeies();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class MessageDigestKey : public Entity
                                        {
                                            public:
                                                MessageDigestKey();
                                                ~MessageDigestKey();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value key_id; //type: uint32
                                                Value password; //type: string




                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey> > message_digest_key;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies> message_digest_keies;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type> type;


                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication


                                class DeadIntervalMinimal : public Entity
                                {
                                    public:
                                        DeadIntervalMinimal();
                                        ~DeadIntervalMinimal();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value interval; //type: uint32
                                        Value multiplier; //type: uint32




                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal


                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication> authentication;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal> dead_interval_minimal;


                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope> > sham_link_scope;


                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes


                        class AreaScope : public Entity
                        {
                            public:
                                AreaScope();
                                ~AreaScope();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value cost; //type: uint32
                                Value prefix_suppression_primary; //type: boolean
                                Value mtu_ignore; //type: boolean
                                Value ldp_sync_igp_shortcuts; //type: boolean
                                Value ldp_auto_config; //type: empty
                                Value network_type; //type: OspfNetworkEnum
                                Value hello_interval; //type: uint32
                                Value loopback_stub_network; //type: boolean
                                Value prefix_suppression_secondary; //type: boolean
                                Value demand_circuit; //type: boolean
                                Value passive; //type: boolean
                                Value transmit_delay; //type: uint32
                                Value packet_size; //type: uint32
                                Value ldp_sync; //type: boolean
                                Value database_filter; //type: boolean
                                Value link_down_fast_detect; //type: boolean
                                Value segment_routing_forwarding; //type: OspfSegmentRoutingForwardingEnum
                                Value retransmit_interval; //type: uint32
                                Value priority; //type: uint32
                                Value flood_reduction; //type: boolean


                            class DistributeList : public Entity
                            {
                                public:
                                    DistributeList();
                                    ~DistributeList();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value access_list_name; //type: string
                                    Value route_policy_name; //type: string




                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList


                            class Bfd : public Entity
                            {
                                public:
                                    Bfd();
                                    ~Bfd();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value interval; //type: uint32
                                    Value detection_multiplier; //type: uint32
                                    Value fast_detect_mode; //type: BfdEnableModeEnum


                                    class BfdEnableModeEnum;


                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Bfd


                            class Authentication : public Entity
                            {
                                public:
                                    Authentication();
                                    ~Authentication();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value key; //type: string


                                class Type : public Entity
                                {
                                    public:
                                        Type();
                                        ~Type();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value authen_type; //type: OspfAuthenticationEnum
                                        Value keychain_authen_type; //type: OspfKeychainAuthEnum
                                        Value keychain_name; //type: string


                                        class OspfAuthenticationEnum;
                                        class OspfKeychainAuthEnum;


                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type


                                class MessageDigestKeies : public Entity
                                {
                                    public:
                                        MessageDigestKeies();
                                        ~MessageDigestKeies();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class MessageDigestKey : public Entity
                                    {
                                        public:
                                            MessageDigestKey();
                                            ~MessageDigestKey();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value key_id; //type: uint32
                                            Value password; //type: string




                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey> > message_digest_key;


                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies


                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies> message_digest_keies;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type> type;


                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication


                            class Security : public Entity
                            {
                                public:
                                    Security();
                                    ~Security();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Ttl : public Entity
                                {
                                    public:
                                        Ttl();
                                        ~Ttl();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value enable; //type: boolean
                                        Value hop_count; //type: uint32




                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl


                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl> ttl;


                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Security


                            class DeadIntervalMinimal : public Entity
                            {
                                public:
                                    DeadIntervalMinimal();
                                    ~DeadIntervalMinimal();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value interval; //type: uint32
                                    Value multiplier; //type: uint32




                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal


                            class FastReroute : public Entity
                            {
                                public:
                                    FastReroute();
                                    ~FastReroute();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value fast_reroute_enable; //type: OspfFastRerouteEnum


                                class PerLink : public Entity
                                {
                                    public:
                                        PerLink();
                                        ~PerLink();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value fast_reroute_use_candidate_only; //type: boolean


                                    class CandidateInterfaces : public Entity
                                    {
                                        public:
                                            CandidateInterfaces();
                                            ~CandidateInterfaces();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class CandidateInterface : public Entity
                                        {
                                            public:
                                                CandidateInterface();
                                                ~CandidateInterface();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value interface_name; //type: string




                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces


                                    class ExcludeInterfaces : public Entity
                                    {
                                        public:
                                            ExcludeInterfaces();
                                            ~ExcludeInterfaces();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class ExcludeInterface : public Entity
                                        {
                                            public:
                                                ExcludeInterface();
                                                ~ExcludeInterface();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value interface_name; //type: string




                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;


                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink


                                class PerPrefix : public Entity
                                {
                                    public:
                                        PerPrefix();
                                        ~PerPrefix();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value topology_independent_lfa; //type: boolean
                                        Value fast_reroute_use_candidate_only; //type: boolean


                                    class RemoteLfa : public Entity
                                    {
                                        public:
                                            RemoteLfa();
                                            ~RemoteLfa();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value tunnel; //type: OspfFrrRlfaTunnelEnum
                                            Value maximum_cost; //type: uint32


                                            class OspfFrrRlfaTunnelEnum;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa


                                    class Tiebreakers : public Entity
                                    {
                                        public:
                                            Tiebreakers();
                                            ~Tiebreakers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class Tiebreaker : public Entity
                                        {
                                            public:
                                                Tiebreaker();
                                                ~Tiebreaker();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value tiebreaker_type; //type: OspfFastRerouteTiebreakersIntfEnum
                                                Value tiebreaker_index; //type: uint32


                                                class OspfFastRerouteTiebreakersIntfEnum;


                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker> > tiebreaker;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers


                                    class CandidateInterfaces : public Entity
                                    {
                                        public:
                                            CandidateInterfaces();
                                            ~CandidateInterfaces();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class CandidateInterface : public Entity
                                        {
                                            public:
                                                CandidateInterface();
                                                ~CandidateInterface();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value interface_name; //type: string




                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces


                                    class ExcludeInterfaces : public Entity
                                    {
                                        public:
                                            ExcludeInterfaces();
                                            ~ExcludeInterfaces();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class ExcludeInterface : public Entity
                                        {
                                            public:
                                                ExcludeInterface();
                                                ~ExcludeInterface();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value interface_name; //type: string




                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;


                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix


                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink> per_link;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix> per_prefix;
                                    class OspfFastRerouteEnum;


                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute


                            class CostFallback : public Entity
                            {
                                public:
                                    CostFallback();
                                    ~CostFallback();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value cost; //type: uint32
                                    Value threshold; //type: uint32




                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback


                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Authentication> authentication;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Bfd> bfd;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback> cost_fallback;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal> dead_interval_minimal;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList> distribute_list; // presence node
                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute> fast_reroute;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::Security> security;
                                class OspfNetworkEnum;
                                class OspfSegmentRoutingForwardingEnum;


                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope


                        class NameScopes : public Entity
                        {
                            public:
                                NameScopes();
                                ~NameScopes();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class NameScope : public Entity
                            {
                                public:
                                    NameScope();
                                    ~NameScope();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value interface_name; //type: string
                                    Value cost; //type: uint32
                                    Value prefix_suppression_primary; //type: boolean
                                    Value mtu_ignore; //type: boolean
                                    Value ldp_sync_igp_shortcuts; //type: boolean
                                    Value ldp_auto_config; //type: empty
                                    Value network_type; //type: OspfNetworkEnum
                                    Value hello_interval; //type: uint32
                                    Value loopback_stub_network; //type: boolean
                                    Value prefix_suppression_secondary; //type: boolean
                                    Value demand_circuit; //type: boolean
                                    Value passive; //type: boolean
                                    Value transmit_delay; //type: uint32
                                    Value packet_size; //type: uint32
                                    Value ldp_sync; //type: boolean
                                    Value database_filter; //type: boolean
                                    Value link_down_fast_detect; //type: boolean
                                    Value segment_routing_forwarding; //type: OspfSegmentRoutingForwardingEnum
                                    Value retransmit_interval; //type: uint32
                                    Value priority; //type: uint32
                                    Value flood_reduction; //type: boolean
                                    Value running; //type: empty


                                class PrefixSid : public Entity
                                {
                                    public:
                                        PrefixSid();
                                        ~PrefixSid();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value sid_value; //type: uint32
                                        Value explicit_null; //type: boolean
                                        Value type; //type: OspfSidEnum
                                        Value n_flag_clear; //type: boolean


                                        class OspfSidEnum;


                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid


                                class PrefixSidStrict : public Entity
                                {
                                    public:
                                        PrefixSidStrict();
                                        ~PrefixSidStrict();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value sid_value; //type: uint32
                                        Value explicit_null; //type: boolean
                                        Value type; //type: OspfSidEnum
                                        Value n_flag_clear; //type: boolean


                                        class OspfSidEnum;


                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict


                                class DistributeList : public Entity
                                {
                                    public:
                                        DistributeList();
                                        ~DistributeList();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value access_list_name; //type: string
                                        Value route_policy_name; //type: string




                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList


                                class Bfd : public Entity
                                {
                                    public:
                                        Bfd();
                                        ~Bfd();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value interval; //type: uint32
                                        Value detection_multiplier; //type: uint32
                                        Value fast_detect_mode; //type: BfdEnableModeEnum


                                        class BfdEnableModeEnum;


                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd


                                class Authentication : public Entity
                                {
                                    public:
                                        Authentication();
                                        ~Authentication();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value key; //type: string


                                    class Type : public Entity
                                    {
                                        public:
                                            Type();
                                            ~Type();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value authen_type; //type: OspfAuthenticationEnum
                                            Value keychain_authen_type; //type: OspfKeychainAuthEnum
                                            Value keychain_name; //type: string


                                            class OspfAuthenticationEnum;
                                            class OspfKeychainAuthEnum;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type


                                    class MessageDigestKeies : public Entity
                                    {
                                        public:
                                            MessageDigestKeies();
                                            ~MessageDigestKeies();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class MessageDigestKey : public Entity
                                        {
                                            public:
                                                MessageDigestKey();
                                                ~MessageDigestKey();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value key_id; //type: uint32
                                                Value password; //type: string




                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey> > message_digest_key;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies> message_digest_keies;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type> type;


                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication


                                class Security : public Entity
                                {
                                    public:
                                        Security();
                                        ~Security();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class Ttl : public Entity
                                    {
                                        public:
                                            Ttl();
                                            ~Ttl();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value enable; //type: boolean
                                            Value hop_count; //type: uint32




                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl> ttl;


                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security


                                class Neighbors : public Entity
                                {
                                    public:
                                        Neighbors();
                                        ~Neighbors();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class Neighbor : public Entity
                                    {
                                        public:
                                            Neighbor();
                                            ~Neighbor();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value neighbor_address; //type: string
                                            Value priority; //type: uint32
                                            Value poll_interval; //type: uint32
                                            Value cost; //type: uint32
                                            Value database_filter; //type: boolean




                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbor


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbor> > neighbor;


                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors


                                class DeadIntervalMinimal : public Entity
                                {
                                    public:
                                        DeadIntervalMinimal();
                                        ~DeadIntervalMinimal();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value interval; //type: uint32
                                        Value multiplier; //type: uint32




                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal


                                class FastReroute : public Entity
                                {
                                    public:
                                        FastReroute();
                                        ~FastReroute();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value fast_reroute_enable; //type: OspfFastRerouteEnum


                                    class PerLink : public Entity
                                    {
                                        public:
                                            PerLink();
                                            ~PerLink();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value fast_reroute_use_candidate_only; //type: boolean


                                        class CandidateInterfaces : public Entity
                                        {
                                            public:
                                                CandidateInterfaces();
                                                ~CandidateInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class CandidateInterface : public Entity
                                            {
                                                public:
                                                    CandidateInterface();
                                                    ~CandidateInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces


                                        class ExcludeInterfaces : public Entity
                                        {
                                            public:
                                                ExcludeInterfaces();
                                                ~ExcludeInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class ExcludeInterface : public Entity
                                            {
                                                public:
                                                    ExcludeInterface();
                                                    ~ExcludeInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces


                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink


                                    class PerPrefix : public Entity
                                    {
                                        public:
                                            PerPrefix();
                                            ~PerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value topology_independent_lfa; //type: boolean
                                            Value fast_reroute_use_candidate_only; //type: boolean


                                        class RemoteLfa : public Entity
                                        {
                                            public:
                                                RemoteLfa();
                                                ~RemoteLfa();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value tunnel; //type: OspfFrrRlfaTunnelEnum
                                                Value maximum_cost; //type: uint32


                                                class OspfFrrRlfaTunnelEnum;


                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa


                                        class Tiebreakers : public Entity
                                        {
                                            public:
                                                Tiebreakers();
                                                ~Tiebreakers();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class Tiebreaker : public Entity
                                            {
                                                public:
                                                    Tiebreaker();
                                                    ~Tiebreaker();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value tiebreaker_type; //type: OspfFastRerouteTiebreakersIntfEnum
                                                    Value tiebreaker_index; //type: uint32


                                                    class OspfFastRerouteTiebreakersIntfEnum;


                                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker> > tiebreaker;


                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers


                                        class CandidateInterfaces : public Entity
                                        {
                                            public:
                                                CandidateInterfaces();
                                                ~CandidateInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class CandidateInterface : public Entity
                                            {
                                                public:
                                                    CandidateInterface();
                                                    ~CandidateInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces


                                        class ExcludeInterfaces : public Entity
                                        {
                                            public:
                                                ExcludeInterfaces();
                                                ~ExcludeInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class ExcludeInterface : public Entity
                                            {
                                                public:
                                                    ExcludeInterface();
                                                    ~ExcludeInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces


                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink> per_link;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix> per_prefix;
                                        class OspfFastRerouteEnum;


                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute


                                class CostFallback : public Entity
                                {
                                    public:
                                        CostFallback();
                                        ~CostFallback();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value cost; //type: uint32
                                        Value threshold; //type: uint32




                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback


                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication> authentication;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd> bfd;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback> cost_fallback;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal> dead_interval_minimal;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList> distribute_list; // presence node
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute> fast_reroute;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors> neighbors;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid> prefix_sid; // presence node
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict> prefix_sid_strict; // presence node
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security> security;
                                    class OspfNetworkEnum;
                                    class OspfSegmentRoutingForwardingEnum;


                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes::NameScope> > name_scope;


                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes


                        class MultiAreaInterfaceScopes : public Entity
                        {
                            public:
                                MultiAreaInterfaceScopes();
                                ~MultiAreaInterfaceScopes();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class MultiAreaInterfaceScope : public Entity
                            {
                                public:
                                    MultiAreaInterfaceScope();
                                    ~MultiAreaInterfaceScope();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value interface_name; //type: string
                                    Value cost; //type: uint32
                                    Value mtu_ignore; //type: boolean
                                    Value hello_interval; //type: uint32
                                    Value passive; //type: boolean
                                    Value transmit_delay; //type: uint32
                                    Value packet_size; //type: uint32
                                    Value database_filter; //type: boolean
                                    Value retransmit_interval; //type: uint32
                                    Value running; //type: empty


                                class DistributeList : public Entity
                                {
                                    public:
                                        DistributeList();
                                        ~DistributeList();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value access_list_name; //type: string
                                        Value route_policy_name; //type: string




                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList


                                class Authentication : public Entity
                                {
                                    public:
                                        Authentication();
                                        ~Authentication();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value key; //type: string


                                    class Type : public Entity
                                    {
                                        public:
                                            Type();
                                            ~Type();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value authen_type; //type: OspfAuthenticationEnum
                                            Value keychain_authen_type; //type: OspfKeychainAuthEnum
                                            Value keychain_name; //type: string


                                            class OspfAuthenticationEnum;
                                            class OspfKeychainAuthEnum;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type


                                    class MessageDigestKeies : public Entity
                                    {
                                        public:
                                            MessageDigestKeies();
                                            ~MessageDigestKeies();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class MessageDigestKey : public Entity
                                        {
                                            public:
                                                MessageDigestKey();
                                                ~MessageDigestKey();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value key_id; //type: uint32
                                                Value password; //type: string




                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey> > message_digest_key;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies> message_digest_keies;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type> type;


                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication


                                class Neighbors : public Entity
                                {
                                    public:
                                        Neighbors();
                                        ~Neighbors();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class Neighbor : public Entity
                                    {
                                        public:
                                            Neighbor();
                                            ~Neighbor();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value neighbor_address; //type: string
                                            Value priority; //type: uint32
                                            Value poll_interval; //type: uint32
                                            Value cost; //type: uint32
                                            Value database_filter; //type: boolean




                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor> > neighbor;


                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors


                                class DeadIntervalMinimal : public Entity
                                {
                                    public:
                                        DeadIntervalMinimal();
                                        ~DeadIntervalMinimal();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value interval; //type: uint32
                                        Value multiplier; //type: uint32




                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal


                                class FastReroute : public Entity
                                {
                                    public:
                                        FastReroute();
                                        ~FastReroute();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value fast_reroute_enable; //type: OspfFastRerouteEnum


                                    class PerLink : public Entity
                                    {
                                        public:
                                            PerLink();
                                            ~PerLink();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value fast_reroute_use_candidate_only; //type: boolean


                                        class CandidateInterfaces : public Entity
                                        {
                                            public:
                                                CandidateInterfaces();
                                                ~CandidateInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class CandidateInterface : public Entity
                                            {
                                                public:
                                                    CandidateInterface();
                                                    ~CandidateInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces


                                        class ExcludeInterfaces : public Entity
                                        {
                                            public:
                                                ExcludeInterfaces();
                                                ~ExcludeInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class ExcludeInterface : public Entity
                                            {
                                                public:
                                                    ExcludeInterface();
                                                    ~ExcludeInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces


                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink


                                    class PerPrefix : public Entity
                                    {
                                        public:
                                            PerPrefix();
                                            ~PerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value topology_independent_lfa; //type: boolean
                                            Value fast_reroute_use_candidate_only; //type: boolean


                                        class RemoteLfa : public Entity
                                        {
                                            public:
                                                RemoteLfa();
                                                ~RemoteLfa();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value tunnel; //type: OspfFrrRlfaTunnelEnum
                                                Value maximum_cost; //type: uint32


                                                class OspfFrrRlfaTunnelEnum;


                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa


                                        class Tiebreakers : public Entity
                                        {
                                            public:
                                                Tiebreakers();
                                                ~Tiebreakers();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class Tiebreaker : public Entity
                                            {
                                                public:
                                                    Tiebreaker();
                                                    ~Tiebreaker();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value tiebreaker_type; //type: OspfFastRerouteTiebreakersIntfEnum
                                                    Value tiebreaker_index; //type: uint32


                                                    class OspfFastRerouteTiebreakersIntfEnum;


                                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker> > tiebreaker;


                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers


                                        class CandidateInterfaces : public Entity
                                        {
                                            public:
                                                CandidateInterfaces();
                                                ~CandidateInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class CandidateInterface : public Entity
                                            {
                                                public:
                                                    CandidateInterface();
                                                    ~CandidateInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces


                                        class ExcludeInterfaces : public Entity
                                        {
                                            public:
                                                ExcludeInterfaces();
                                                ~ExcludeInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class ExcludeInterface : public Entity
                                            {
                                                public:
                                                    ExcludeInterface();
                                                    ~ExcludeInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces


                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;


                                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink> per_link;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix> per_prefix;
                                        class OspfFastRerouteEnum;


                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute


                                class CostFallback : public Entity
                                {
                                    public:
                                        CostFallback();
                                        ~CostFallback();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value cost; //type: uint32
                                        Value threshold; //type: uint32




                                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback


                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication> authentication;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback> cost_fallback;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal> dead_interval_minimal;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList> distribute_list; // presence node
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute> fast_reroute;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors> neighbors;


                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope> > multi_area_interface_scope;


                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes


                        class AreaRanges : public Entity
                        {
                            public:
                                AreaRanges();
                                ~AreaRanges();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class AreaRange : public Entity
                            {
                                public:
                                    AreaRange();
                                    ~AreaRange();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value address; //type: string
                                    Value netmask; //type: string
                                    Value not_advertise; //type: boolean




                            }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange> > area_range;


                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaRanges


                        class Nssa : public Entity
                        {
                            public:
                                Nssa();
                                ~Nssa();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value no_redistribution; //type: boolean
                                Value default_info_originate; //type: boolean
                                Value no_summary; //type: boolean
                                Value nssa_def_metric; //type: uint32
                                Value metric_type; //type: OspfLinkStateMetricEnum


                                class OspfLinkStateMetricEnum;


                        }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Nssa


                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaRanges> area_ranges;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope> area_scope;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes> multi_area_interface_scopes;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::NameScopes> name_scopes;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Nssa> nssa;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinkScopes> sham_link_scopes;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinkScopes> virtual_link_scopes;
                            class OspfSegmentRoutingEnum;


                    }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress> > area_address;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId> > area_area_id;


                }; // Ospf::Processes::Process::DefaultVrf::AreaAddresses


                class Timers : public Entity
                {
                    public:
                        Timers();
                        ~Timers();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value lsa_pacing_flood; //type: uint32
                        Value fast_reroute_timer; //type: uint32
                        Value lsa_refresh; //type: uint32
                        Value lsa_group_pacing; //type: uint32
                        Value lsa_min_arrival; //type: uint32


                    class SpfTimer : public Entity
                    {
                        public:
                            SpfTimer();
                            ~SpfTimer();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value initial_delay; //type: uint32
                            Value backoff_increment; //type: uint32
                            Value max_delay; //type: uint32




                    }; // Ospf::Processes::Process::DefaultVrf::Timers::SpfTimer


                    class LsaGenerationTimer : public Entity
                    {
                        public:
                            LsaGenerationTimer();
                            ~LsaGenerationTimer();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value initial_delay; //type: uint32
                            Value backoff_increment; //type: uint32
                            Value max_delay; //type: uint32




                    }; // Ospf::Processes::Process::DefaultVrf::Timers::LsaGenerationTimer


                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Timers::LsaGenerationTimer> lsa_generation_timer;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Timers::SpfTimer> spf_timer;


                }; // Ospf::Processes::Process::DefaultVrf::Timers


                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AdjacencyStagger> adjacency_stagger;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Af> af; // presence node
                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses> area_addresses;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AutoCost> auto_cost;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::DefaultInformation> default_information;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Distance> distance;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::FastReroute> fast_reroute;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::MaxLsa> max_lsa; // presence node
                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::MaxMetric> max_metric;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::MaximumRedistributePrefix> maximum_redistribute_prefix;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Microloop> microloop;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::MonitorConvergence> monitor_convergence;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Mpls> mpls;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Nsf> nsf;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::OutgoingRouteUpdates> outgoing_route_updates;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope> process_scope;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Queue> queue;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Redistribution> redistribution;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::SegmentRouting> segment_routing;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::SummaryPrefixes> summary_prefixes;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Timers> timers;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Ucmp> ucmp;
                    class OspfLogAdjEnum;


            }; // Ospf::Processes::Process::DefaultVrf


                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf> default_vrf;
                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Distribute> distribute; // presence node
                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Snmp> snmp;
                std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs> vrfs;
                class NsrEnum;
                class OspfShutdownEnum;


        }; // Ospf::Processes::Process


            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process> > process;


    }; // Ospf::Processes


    class Global : public Entity
    {
        public:
            Global();
            ~Global();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value dns_name_lookup; //type: empty




    }; // Ospf::Global


        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Global> global;
        std::unique_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes> processes;


}; // Ospf


class OspfFastRerouteTiebreakersEnum : public Enum
{
    public:
        static const Enum::Value downstream;
        static const Enum::Value line_card_disjoint;
        static const Enum::Value lowest_metric;
        static const Enum::Value node_protect;
        static const Enum::Value primary_path;
        static const Enum::Value secondary_path;
        static const Enum::Value srlg_disjoint;

};

class OspfFastRerouteEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value per_link;
        static const Enum::Value per_prefix;

};

class OspfRedistLsaEnum : public Enum
{
    public:
        static const Enum::Value summary;
        static const Enum::Value external;

};

class OspfIetfNsfEnum : public Enum
{
    public:
        static const Enum::Value all;

};

class BfdEnableModeEnum : public Enum
{
    public:
        static const Enum::Value disable;
        static const Enum::Value default_;
        static const Enum::Value strict;

};

class OspfFastReroutePriorityEnum : public Enum
{
    public:
        static const Enum::Value critical;
        static const Enum::Value high;
        static const Enum::Value medium;
        static const Enum::Value low;

};

class OspfCiscoNsfEnum : public Enum
{
    public:
        static const Enum::Value always;
        static const Enum::Value require_nsf_neighbors;

};

class OspfRedistProtocolEnum : public Enum
{
    public:
        static const Enum::Value all;
        static const Enum::Value connected;
        static const Enum::Value static_;
        static const Enum::Value bgp;
        static const Enum::Value rip;
        static const Enum::Value isis;
        static const Enum::Value ospf;
        static const Enum::Value eigrp;
        static const Enum::Value dagr;
        static const Enum::Value subscriber;
        static const Enum::Value application;
        static const Enum::Value mobile;

};

class OspfSegmentRoutingEnum : public Enum
{
    public:
        static const Enum::Value disable;
        static const Enum::Value mpls;

};

class OspfUloopAvoidanceEnum : public Enum
{
    public:
        static const Enum::Value protected_;
        static const Enum::Value all;

};

class OspfSegmentRoutingForwardingEnum : public Enum
{
    public:
        static const Enum::Value disable;
        static const Enum::Value mpls;

};

class OspfAddressFamilyEnum : public Enum
{
    public:
        static const Enum::Value ipv4;

};

class OspfProcFastRerouteEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value per_link;
        static const Enum::Value per_prefix;

};

class OspfProcFrrRlfaTunnelEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value mpls_ldp;

};

class OspfIetfNsfSupportEnum : public Enum
{
    public:
        static const Enum::Value never;

};

class OspfLinkStateMetricEnum : public Enum
{
    public:
        static const Enum::Value type1;
        static const Enum::Value type2;

};

class OspfAuthenticationEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value plain;
        static const Enum::Value md5;

};

class OspfLogAdjEnum : public Enum
{
    public:
        static const Enum::Value brief;
        static const Enum::Value detail;
        static const Enum::Value suppress;

};

class OspfSubAddressFamilyEnum : public Enum
{
    public:
        static const Enum::Value unicast;

};

class OspfDomainIdEnum : public Enum
{
    public:
        static const Enum::Value type0005;
        static const Enum::Value type0105;
        static const Enum::Value type0205;
        static const Enum::Value type8005;

};

class OspfEigrpRouteEnum : public Enum
{
    public:
        static const Enum::Value internal;
        static const Enum::Value external;

};

class OspfSidEnum : public Enum
{
    public:
        static const Enum::Value index_;
        static const Enum::Value absolute;

};

class NsrEnum : public Enum
{
    public:
        static const Enum::Value true_;
        static const Enum::Value false_;

};

class OspfFastRerouteTiebreakersIntfEnum : public Enum
{
    public:
        static const Enum::Value downstream;
        static const Enum::Value line_card_disjoint;
        static const Enum::Value lowest_metric;
        static const Enum::Value node_protect;
        static const Enum::Value primary_path;
        static const Enum::Value secondary_path;
        static const Enum::Value srlg_disjoint;

};

class OspfDistListProtocolEnum : public Enum
{
    public:
        static const Enum::Value all;
        static const Enum::Value connected;
        static const Enum::Value static_;
        static const Enum::Value bgp;
        static const Enum::Value ospf;
        static const Enum::Value dagr;

};

class OspfRouteLevelEnum : public Enum
{
    public:
        static const Enum::Value type1;
        static const Enum::Value type2;
        static const Enum::Value type1_and2;

};

class OspfNetworkEnum : public Enum
{
    public:
        static const Enum::Value broadcast;
        static const Enum::Value non_broadcast;
        static const Enum::Value point_to_point;
        static const Enum::Value point_to_multipoint;
        static const Enum::Value non_broadcast_point_to_multipoint;

};

class OspfFrrRlfaTunnelEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value mpls_ldp;

};

class OspfShutdownEnum : public Enum
{
    public:
        static const Enum::Value full;
        static const Enum::Value hostmode;
        static const Enum::Value onreload;

};

class OspfKeychainAuthEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value keychain;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_OSPF_CFG_ */

