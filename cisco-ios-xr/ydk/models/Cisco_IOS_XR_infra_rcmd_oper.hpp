#ifndef _CISCO_IOS_XR_INFRA_RCMD_OPER_
#define _CISCO_IOS_XR_INFRA_RCMD_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_rcmd_oper {

class Rcmd : public Entity
{
    public:
        Rcmd();
        ~Rcmd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


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


        class Instances : public Entity
        {
            public:
                Instances();
                ~Instances();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Instance : public Entity
            {
                public:
                    Instance();
                    ~Instance();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value instance_name; //type: string


                class IpfrrEventSummaries : public Entity
                {
                    public:
                        IpfrrEventSummaries();
                        ~IpfrrEventSummaries();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class IpfrrEventSummary : public Entity
                    {
                        public:
                            IpfrrEventSummary();
                            ~IpfrrEventSummary();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value event_id; //type: int32
                            Value event_id_xr; //type: uint32
                            Value trigger_time; //type: string
                            Value trigger_spf_run; //type: uint32
                            Value wait_time; //type: uint32
                            Value start_time_offset; //type: string
                            Value duration; //type: string
                            Value completed_spf_run; //type: uint32
                            Value total_routes; //type: uint32
                            Value fully_protected_routes; //type: uint32
                            Value partially_protected_routes; //type: uint32
                            Value coverage; //type: string


                        class IpfrrStatistic : public Entity
                        {
                            public:
                                IpfrrStatistic();
                                ~IpfrrStatistic();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value priority; //type: RcmdPriorityLevelEnum
                                Value total_routes; //type: uint32
                                Value fully_protected_routes; //type: uint32
                                Value partially_protected_routes; //type: uint32
                                Value coverage; //type: string
                                Value local_lfa_coverage; //type: string
                                Value remote_lfa_coverage; //type: string
                                Value below_threshold; //type: boolean


                                class RcmdPriorityLevelEnum;


                        }; // Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic


                        class RemoteNode : public Entity
                        {
                            public:
                                RemoteNode();
                                ~RemoteNode();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value remote_node_id; //type: string
                                Value interface_name; //type: string
                                Value neighbour_address; //type: string
                                Value path_count; //type: uint32
                                Value in_use_time; //type: string


                            class PrimaryPath : public Entity
                            {
                                public:
                                    PrimaryPath();
                                    ~PrimaryPath();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value interface_name; //type: string
                                    Value neighbour_address; //type: string




                            }; // Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath> > primary_path;


                        }; // Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode


                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic> > ipfrr_statistic;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode> > remote_node;


                    }; // Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary> > ipfrr_event_summary;


                }; // Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries


                class PrefixEventStatistics : public Entity
                {
                    public:
                        PrefixEventStatistics();
                        ~PrefixEventStatistics();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class PrefixEventStatistic : public Entity
                    {
                        public:
                            PrefixEventStatistic();
                            ~PrefixEventStatistic();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value prefix_info; //type: string
                            Value prefix; //type: string
                            Value prefix_lenth; //type: uint32
                            Value last_event_time; //type: string
                            Value last_priority; //type: RcmdPriorityLevelEnum
                            Value last_route_type; //type: RcmdShowRouteEnum
                            Value last_change_type; //type: RcmdChangeEnum
                            Value last_cost; //type: uint32
                            Value critical_priority; //type: uint32
                            Value high_priority; //type: uint32
                            Value medium_priority; //type: uint32
                            Value low_priority; //type: uint32
                            Value add_count; //type: uint32
                            Value modify_count; //type: uint32
                            Value delete_count; //type: uint32
                            Value threshold_exceed_count; //type: uint32


                            class RcmdChangeEnum;
                            class RcmdPriorityLevelEnum;
                            class RcmdShowRouteEnum;


                    }; // Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic> > prefix_event_statistic;


                }; // Rcmd::Ospf::Instances::Instance::PrefixEventStatistics


                class SpfRunSummaries : public Entity
                {
                    public:
                        SpfRunSummaries();
                        ~SpfRunSummaries();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class SpfRunSummary : public Entity
                    {
                        public:
                            SpfRunSummary();
                            ~SpfRunSummary();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value spf_run_number; //type: int32


                        class SpfSummary : public Entity
                        {
                            public:
                                SpfSummary();
                                ~SpfSummary();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value state; //type: RcmdSpfStateEnum
                                Value is_data_complete; //type: boolean
                                Value threshold_exceeded; //type: boolean
                                Value trigger_time; //type: string
                                Value start_time; //type: string
                                Value duration; //type: string
                                Value total_dijkstra_runs; //type: uint16
                                Value total_inter_area_and_external_batches; //type: uint16
                                Value total_type12lsa_changes; //type: uint16
                                Value total_type357lsa_changes; //type: uint16


                            class PrioritySummary : public Entity
                            {
                                public:
                                    PrioritySummary();
                                    ~PrioritySummary();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value level; //type: RcmdPriorityLevelEnum
                                    Value threshold_exceeded; //type: boolean


                                class RouteStatistics : public Entity
                                {
                                    public:
                                        RouteStatistics();
                                        ~RouteStatistics();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value adds; //type: uint32
                                        Value deletes; //type: uint32
                                        Value modifies; //type: uint32
                                        Value reachables; //type: uint32
                                        Value unreachables; //type: uint32
                                        Value touches; //type: uint32




                                }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics


                                class IpConvergenceTime : public Entity
                                {
                                    public:
                                        IpConvergenceTime();
                                        ~IpConvergenceTime();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value minimum_time; //type: string
                                        Value maximum_time; //type: string
                                        Value slowest_node_name; //type: string
                                        Value fastest_node_name; //type: string




                                }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime


                                class MplsConvergenceTime : public Entity
                                {
                                    public:
                                        MplsConvergenceTime();
                                        ~MplsConvergenceTime();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value minimum_time; //type: string
                                        Value maximum_time; //type: string
                                        Value slowest_node_name; //type: string
                                        Value fastest_node_name; //type: string




                                }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime


                                class FrrStatistic : public Entity
                                {
                                    public:
                                        FrrStatistic();
                                        ~FrrStatistic();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value total_routes; //type: uint32
                                        Value fully_protected_routes; //type: uint32
                                        Value partially_protected_routes; //type: uint32
                                        Value coverage; //type: string




                                }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic> > frr_statistic;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime> ip_convergence_time;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics> route_statistics;
                                    class RcmdPriorityLevelEnum;


                            }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary> > priority_summary;
                                class RcmdSpfStateEnum;


                        }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary


                        class DijkstraRun : public Entity
                        {
                            public:
                                DijkstraRun();
                                ~DijkstraRun();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value dijkstra_run_number; //type: uint32
                                Value area_id; //type: string
                                Value threshold_exceeded; //type: boolean
                                Value trigger_time; //type: string
                                Value start_time; //type: string
                                Value wait_time; //type: uint32
                                Value duration; //type: string


                            class TriggerLsa : public Entity
                            {
                                public:
                                    TriggerLsa();
                                    ~TriggerLsa();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value lsa_id; //type: string
                                    Value sequence_number; //type: string
                                    Value lsa_type; //type: RcmdLsaEnum
                                    Value origin_router_id; //type: string
                                    Value change_type; //type: RcmdLsChangeEnum
                                    Value reception_time; //type: string


                                    class RcmdLsChangeEnum;
                                    class RcmdLsaEnum;


                            }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa


                            class Priority : public Entity
                            {
                                public:
                                    Priority();
                                    ~Priority();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class PrioritySummary : public Entity
                                {
                                    public:
                                        PrioritySummary();
                                        ~PrioritySummary();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value level; //type: RcmdPriorityLevelEnum
                                        Value threshold_exceeded; //type: boolean


                                    class RouteStatistics : public Entity
                                    {
                                        public:
                                            RouteStatistics();
                                            ~RouteStatistics();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value adds; //type: uint32
                                            Value deletes; //type: uint32
                                            Value modifies; //type: uint32
                                            Value reachables; //type: uint32
                                            Value unreachables; //type: uint32
                                            Value touches; //type: uint32




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics


                                    class IpConvergenceTime : public Entity
                                    {
                                        public:
                                            IpConvergenceTime();
                                            ~IpConvergenceTime();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value minimum_time; //type: string
                                            Value maximum_time; //type: string
                                            Value slowest_node_name; //type: string
                                            Value fastest_node_name; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime


                                    class MplsConvergenceTime : public Entity
                                    {
                                        public:
                                            MplsConvergenceTime();
                                            ~MplsConvergenceTime();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value minimum_time; //type: string
                                            Value maximum_time; //type: string
                                            Value slowest_node_name; //type: string
                                            Value fastest_node_name; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime


                                    class FrrStatistic : public Entity
                                    {
                                        public:
                                            FrrStatistic();
                                            ~FrrStatistic();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value total_routes; //type: uint32
                                            Value fully_protected_routes; //type: uint32
                                            Value partially_protected_routes; //type: uint32
                                            Value coverage; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic> > frr_statistic;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime> ip_convergence_time;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics> route_statistics;
                                        class RcmdPriorityLevelEnum;


                                }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary


                                class ConvergenceTimeline : public Entity
                                {
                                    public:
                                        ConvergenceTimeline();
                                        ~ConvergenceTimeline();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class RouteOrigin : public Entity
                                    {
                                        public:
                                            RouteOrigin();
                                            ~RouteOrigin();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin


                                    class RiBv4Enter : public Entity
                                    {
                                        public:
                                            RiBv4Enter();
                                            ~RiBv4Enter();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter


                                    class RiBv4Exit : public Entity
                                    {
                                        public:
                                            RiBv4Exit();
                                            ~RiBv4Exit();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit


                                    class RiBv4Redistribute : public Entity
                                    {
                                        public:
                                            RiBv4Redistribute();
                                            ~RiBv4Redistribute();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute


                                    class LdpEnter : public Entity
                                    {
                                        public:
                                            LdpEnter();
                                            ~LdpEnter();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter


                                    class LdpExit : public Entity
                                    {
                                        public:
                                            LdpExit();
                                            ~LdpExit();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit


                                    class LsdEnter : public Entity
                                    {
                                        public:
                                            LsdEnter();
                                            ~LsdEnter();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter


                                    class LsdExit : public Entity
                                    {
                                        public:
                                            LsdExit();
                                            ~LsdExit();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit


                                    class LcIp : public Entity
                                    {
                                        public:
                                            LcIp();
                                            ~LcIp();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value node_name; //type: string
                                            Value speed; //type: RcmdLinecardSpeedEnum


                                        class FibComplete : public Entity
                                        {
                                            public:
                                                FibComplete();
                                                ~FibComplete();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value start_time; //type: string
                                                Value end_time; //type: string
                                                Value duration; //type: string




                                        }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete


                                            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete> fib_complete;
                                            class RcmdLinecardSpeedEnum;


                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp


                                    class LcMpls : public Entity
                                    {
                                        public:
                                            LcMpls();
                                            ~LcMpls();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value node_name; //type: string
                                            Value speed; //type: RcmdLinecardSpeedEnum


                                        class FibComplete : public Entity
                                        {
                                            public:
                                                FibComplete();
                                                ~FibComplete();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value start_time; //type: string
                                                Value end_time; //type: string
                                                Value duration; //type: string




                                        }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete


                                            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete> fib_complete;
                                            class RcmdLinecardSpeedEnum;


                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp> > lc_ip;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls> > lc_mpls;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter> ldp_enter;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit> ldp_exit;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter> lsd_enter;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit> lsd_exit;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter> ri_bv4_enter;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit> ri_bv4_exit;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute> ri_bv4_redistribute;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin> route_origin;


                                }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline


                                class LeafNetworksAdded : public Entity
                                {
                                    public:
                                        LeafNetworksAdded();
                                        ~LeafNetworksAdded();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value address; //type: string
                                        Value net_mask; //type: uint8




                                }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksAdded


                                class LeafNetworksDeleted : public Entity
                                {
                                    public:
                                        LeafNetworksDeleted();
                                        ~LeafNetworksDeleted();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value address; //type: string
                                        Value net_mask; //type: uint8




                                }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksDeleted


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline> > convergence_timeline;
                                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksAdded> > leaf_networks_added;
                                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksDeleted> > leaf_networks_deleted;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary> priority_summary;


                            }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority


                            class LsaProcessed : public Entity
                            {
                                public:
                                    LsaProcessed();
                                    ~LsaProcessed();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value lsa_id; //type: string
                                    Value sequence_number; //type: string
                                    Value lsa_type; //type: RcmdLsaEnum
                                    Value origin_router_id; //type: string
                                    Value change_type; //type: RcmdLsChangeEnum
                                    Value reception_time; //type: string


                                    class RcmdLsChangeEnum;
                                    class RcmdLsaEnum;


                            }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed> > lsa_processed;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority> > priority;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa> > trigger_lsa;


                        }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun


                        class InterAreaAndExternal : public Entity
                        {
                            public:
                                InterAreaAndExternal();
                                ~InterAreaAndExternal();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Priority : public Entity
                            {
                                public:
                                    Priority();
                                    ~Priority();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class PrioritySummary : public Entity
                                {
                                    public:
                                        PrioritySummary();
                                        ~PrioritySummary();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value level; //type: RcmdPriorityLevelEnum
                                        Value threshold_exceeded; //type: boolean
                                        Value type3ls_as; //type: uint32
                                        Value type4ls_as; //type: uint32
                                        Value type57ls_as; //type: uint32


                                    class RouteStatistics : public Entity
                                    {
                                        public:
                                            RouteStatistics();
                                            ~RouteStatistics();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value adds; //type: uint32
                                            Value deletes; //type: uint32
                                            Value modifies; //type: uint32
                                            Value reachables; //type: uint32
                                            Value unreachables; //type: uint32
                                            Value touches; //type: uint32




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics


                                    class IpConvergenceTime : public Entity
                                    {
                                        public:
                                            IpConvergenceTime();
                                            ~IpConvergenceTime();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value minimum_time; //type: string
                                            Value maximum_time; //type: string
                                            Value slowest_node_name; //type: string
                                            Value fastest_node_name; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime


                                    class MplsConvergenceTime : public Entity
                                    {
                                        public:
                                            MplsConvergenceTime();
                                            ~MplsConvergenceTime();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value minimum_time; //type: string
                                            Value maximum_time; //type: string
                                            Value slowest_node_name; //type: string
                                            Value fastest_node_name; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime


                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime> ip_convergence_time;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics> route_statistics;
                                        class RcmdPriorityLevelEnum;


                                }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary


                                class ConvergenceTimeline : public Entity
                                {
                                    public:
                                        ConvergenceTimeline();
                                        ~ConvergenceTimeline();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class RouteOrigin : public Entity
                                    {
                                        public:
                                            RouteOrigin();
                                            ~RouteOrigin();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin


                                    class RiBv4Enter : public Entity
                                    {
                                        public:
                                            RiBv4Enter();
                                            ~RiBv4Enter();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter


                                    class RiBv4Exit : public Entity
                                    {
                                        public:
                                            RiBv4Exit();
                                            ~RiBv4Exit();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit


                                    class RiBv4Redistribute : public Entity
                                    {
                                        public:
                                            RiBv4Redistribute();
                                            ~RiBv4Redistribute();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute


                                    class LdpEnter : public Entity
                                    {
                                        public:
                                            LdpEnter();
                                            ~LdpEnter();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter


                                    class LdpExit : public Entity
                                    {
                                        public:
                                            LdpExit();
                                            ~LdpExit();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit


                                    class LsdEnter : public Entity
                                    {
                                        public:
                                            LsdEnter();
                                            ~LsdEnter();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter


                                    class LsdExit : public Entity
                                    {
                                        public:
                                            LsdExit();
                                            ~LsdExit();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit


                                    class LcIp : public Entity
                                    {
                                        public:
                                            LcIp();
                                            ~LcIp();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value node_name; //type: string
                                            Value speed; //type: RcmdLinecardSpeedEnum


                                        class FibComplete : public Entity
                                        {
                                            public:
                                                FibComplete();
                                                ~FibComplete();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value start_time; //type: string
                                                Value end_time; //type: string
                                                Value duration; //type: string




                                        }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete


                                            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete> fib_complete;
                                            class RcmdLinecardSpeedEnum;


                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp


                                    class LcMpls : public Entity
                                    {
                                        public:
                                            LcMpls();
                                            ~LcMpls();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value node_name; //type: string
                                            Value speed; //type: RcmdLinecardSpeedEnum


                                        class FibComplete : public Entity
                                        {
                                            public:
                                                FibComplete();
                                                ~FibComplete();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value start_time; //type: string
                                                Value end_time; //type: string
                                                Value duration; //type: string




                                        }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete


                                            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete> fib_complete;
                                            class RcmdLinecardSpeedEnum;


                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp> > lc_ip;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls> > lc_mpls;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter> ldp_enter;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit> ldp_exit;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter> lsd_enter;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit> lsd_exit;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter> ri_bv4_enter;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit> ri_bv4_exit;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute> ri_bv4_redistribute;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin> route_origin;


                                }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline


                                class LeafNetworksAdded : public Entity
                                {
                                    public:
                                        LeafNetworksAdded();
                                        ~LeafNetworksAdded();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value address; //type: string
                                        Value net_mask; //type: uint8




                                }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksAdded


                                class LeafNetworksDeleted : public Entity
                                {
                                    public:
                                        LeafNetworksDeleted();
                                        ~LeafNetworksDeleted();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value address; //type: string
                                        Value net_mask; //type: uint8




                                }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksDeleted


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline> > convergence_timeline;
                                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksAdded> > leaf_networks_added;
                                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksDeleted> > leaf_networks_deleted;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary> priority_summary;


                            }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority> > priority;


                        }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal


                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun> > dijkstra_run;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal> > inter_area_and_external;
                            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary> spf_summary;


                    }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary> > spf_run_summary;


                }; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries


                class IpfrrEventOfflines : public Entity
                {
                    public:
                        IpfrrEventOfflines();
                        ~IpfrrEventOfflines();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class IpfrrEventOffline : public Entity
                    {
                        public:
                            IpfrrEventOffline();
                            ~IpfrrEventOffline();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value event_id; //type: int32
                            Value event_id_xr; //type: uint32
                            Value trigger_time; //type: string
                            Value trigger_spf_run; //type: uint32
                            Value wait_time; //type: uint32
                            Value start_time_offset; //type: string
                            Value duration; //type: string
                            Value completed_spf_run; //type: uint32
                            Value total_routes; //type: uint32
                            Value fully_protected_routes; //type: uint32
                            Value partially_protected_routes; //type: uint32
                            Value coverage; //type: string


                        class IpfrrStatistic : public Entity
                        {
                            public:
                                IpfrrStatistic();
                                ~IpfrrStatistic();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value priority; //type: RcmdPriorityLevelEnum
                                Value total_routes; //type: uint32
                                Value fully_protected_routes; //type: uint32
                                Value partially_protected_routes; //type: uint32
                                Value coverage; //type: string
                                Value local_lfa_coverage; //type: string
                                Value remote_lfa_coverage; //type: string
                                Value below_threshold; //type: boolean


                                class RcmdPriorityLevelEnum;


                        }; // Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic


                        class RemoteNode : public Entity
                        {
                            public:
                                RemoteNode();
                                ~RemoteNode();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value remote_node_id; //type: string
                                Value interface_name; //type: string
                                Value neighbour_address; //type: string
                                Value path_count; //type: uint32
                                Value in_use_time; //type: string


                            class PrimaryPath : public Entity
                            {
                                public:
                                    PrimaryPath();
                                    ~PrimaryPath();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value interface_name; //type: string
                                    Value neighbour_address; //type: string




                            }; // Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath> > primary_path;


                        }; // Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode


                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic> > ipfrr_statistic;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode> > remote_node;


                    }; // Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline> > ipfrr_event_offline;


                }; // Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines


                class SpfRunOfflines : public Entity
                {
                    public:
                        SpfRunOfflines();
                        ~SpfRunOfflines();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class SpfRunOffline : public Entity
                    {
                        public:
                            SpfRunOffline();
                            ~SpfRunOffline();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value spf_run_number; //type: int32


                        class SpfSummary : public Entity
                        {
                            public:
                                SpfSummary();
                                ~SpfSummary();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value state; //type: RcmdSpfStateEnum
                                Value is_data_complete; //type: boolean
                                Value threshold_exceeded; //type: boolean
                                Value trigger_time; //type: string
                                Value start_time; //type: string
                                Value duration; //type: string
                                Value total_dijkstra_runs; //type: uint16
                                Value total_inter_area_and_external_batches; //type: uint16
                                Value total_type12lsa_changes; //type: uint16
                                Value total_type357lsa_changes; //type: uint16


                            class PrioritySummary : public Entity
                            {
                                public:
                                    PrioritySummary();
                                    ~PrioritySummary();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value level; //type: RcmdPriorityLevelEnum
                                    Value threshold_exceeded; //type: boolean


                                class RouteStatistics : public Entity
                                {
                                    public:
                                        RouteStatistics();
                                        ~RouteStatistics();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value adds; //type: uint32
                                        Value deletes; //type: uint32
                                        Value modifies; //type: uint32
                                        Value reachables; //type: uint32
                                        Value unreachables; //type: uint32
                                        Value touches; //type: uint32




                                }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics


                                class IpConvergenceTime : public Entity
                                {
                                    public:
                                        IpConvergenceTime();
                                        ~IpConvergenceTime();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value minimum_time; //type: string
                                        Value maximum_time; //type: string
                                        Value slowest_node_name; //type: string
                                        Value fastest_node_name; //type: string




                                }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime


                                class MplsConvergenceTime : public Entity
                                {
                                    public:
                                        MplsConvergenceTime();
                                        ~MplsConvergenceTime();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value minimum_time; //type: string
                                        Value maximum_time; //type: string
                                        Value slowest_node_name; //type: string
                                        Value fastest_node_name; //type: string




                                }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime


                                class FrrStatistic : public Entity
                                {
                                    public:
                                        FrrStatistic();
                                        ~FrrStatistic();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value total_routes; //type: uint32
                                        Value fully_protected_routes; //type: uint32
                                        Value partially_protected_routes; //type: uint32
                                        Value coverage; //type: string




                                }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic> > frr_statistic;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime> ip_convergence_time;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics> route_statistics;
                                    class RcmdPriorityLevelEnum;


                            }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary> > priority_summary;
                                class RcmdSpfStateEnum;


                        }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary


                        class DijkstraRun : public Entity
                        {
                            public:
                                DijkstraRun();
                                ~DijkstraRun();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value dijkstra_run_number; //type: uint32
                                Value area_id; //type: string
                                Value threshold_exceeded; //type: boolean
                                Value trigger_time; //type: string
                                Value start_time; //type: string
                                Value wait_time; //type: uint32
                                Value duration; //type: string


                            class TriggerLsa : public Entity
                            {
                                public:
                                    TriggerLsa();
                                    ~TriggerLsa();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value lsa_id; //type: string
                                    Value sequence_number; //type: string
                                    Value lsa_type; //type: RcmdLsaEnum
                                    Value origin_router_id; //type: string
                                    Value change_type; //type: RcmdLsChangeEnum
                                    Value reception_time; //type: string


                                    class RcmdLsChangeEnum;
                                    class RcmdLsaEnum;


                            }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa


                            class Priority : public Entity
                            {
                                public:
                                    Priority();
                                    ~Priority();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class PrioritySummary : public Entity
                                {
                                    public:
                                        PrioritySummary();
                                        ~PrioritySummary();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value level; //type: RcmdPriorityLevelEnum
                                        Value threshold_exceeded; //type: boolean


                                    class RouteStatistics : public Entity
                                    {
                                        public:
                                            RouteStatistics();
                                            ~RouteStatistics();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value adds; //type: uint32
                                            Value deletes; //type: uint32
                                            Value modifies; //type: uint32
                                            Value reachables; //type: uint32
                                            Value unreachables; //type: uint32
                                            Value touches; //type: uint32




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics


                                    class IpConvergenceTime : public Entity
                                    {
                                        public:
                                            IpConvergenceTime();
                                            ~IpConvergenceTime();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value minimum_time; //type: string
                                            Value maximum_time; //type: string
                                            Value slowest_node_name; //type: string
                                            Value fastest_node_name; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime


                                    class MplsConvergenceTime : public Entity
                                    {
                                        public:
                                            MplsConvergenceTime();
                                            ~MplsConvergenceTime();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value minimum_time; //type: string
                                            Value maximum_time; //type: string
                                            Value slowest_node_name; //type: string
                                            Value fastest_node_name; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime


                                    class FrrStatistic : public Entity
                                    {
                                        public:
                                            FrrStatistic();
                                            ~FrrStatistic();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value total_routes; //type: uint32
                                            Value fully_protected_routes; //type: uint32
                                            Value partially_protected_routes; //type: uint32
                                            Value coverage; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic> > frr_statistic;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime> ip_convergence_time;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics> route_statistics;
                                        class RcmdPriorityLevelEnum;


                                }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary


                                class ConvergenceTimeline : public Entity
                                {
                                    public:
                                        ConvergenceTimeline();
                                        ~ConvergenceTimeline();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class RouteOrigin : public Entity
                                    {
                                        public:
                                            RouteOrigin();
                                            ~RouteOrigin();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin


                                    class RiBv4Enter : public Entity
                                    {
                                        public:
                                            RiBv4Enter();
                                            ~RiBv4Enter();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter


                                    class RiBv4Exit : public Entity
                                    {
                                        public:
                                            RiBv4Exit();
                                            ~RiBv4Exit();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit


                                    class RiBv4Redistribute : public Entity
                                    {
                                        public:
                                            RiBv4Redistribute();
                                            ~RiBv4Redistribute();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute


                                    class LdpEnter : public Entity
                                    {
                                        public:
                                            LdpEnter();
                                            ~LdpEnter();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter


                                    class LdpExit : public Entity
                                    {
                                        public:
                                            LdpExit();
                                            ~LdpExit();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit


                                    class LsdEnter : public Entity
                                    {
                                        public:
                                            LsdEnter();
                                            ~LsdEnter();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter


                                    class LsdExit : public Entity
                                    {
                                        public:
                                            LsdExit();
                                            ~LsdExit();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit


                                    class LcIp : public Entity
                                    {
                                        public:
                                            LcIp();
                                            ~LcIp();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value node_name; //type: string
                                            Value speed; //type: RcmdLinecardSpeedEnum


                                        class FibComplete : public Entity
                                        {
                                            public:
                                                FibComplete();
                                                ~FibComplete();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value start_time; //type: string
                                                Value end_time; //type: string
                                                Value duration; //type: string




                                        }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete


                                            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete> fib_complete;
                                            class RcmdLinecardSpeedEnum;


                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp


                                    class LcMpls : public Entity
                                    {
                                        public:
                                            LcMpls();
                                            ~LcMpls();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value node_name; //type: string
                                            Value speed; //type: RcmdLinecardSpeedEnum


                                        class FibComplete : public Entity
                                        {
                                            public:
                                                FibComplete();
                                                ~FibComplete();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value start_time; //type: string
                                                Value end_time; //type: string
                                                Value duration; //type: string




                                        }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete


                                            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete> fib_complete;
                                            class RcmdLinecardSpeedEnum;


                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp> > lc_ip;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls> > lc_mpls;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter> ldp_enter;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit> ldp_exit;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter> lsd_enter;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit> lsd_exit;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter> ri_bv4_enter;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit> ri_bv4_exit;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute> ri_bv4_redistribute;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin> route_origin;


                                }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline


                                class LeafNetworksAdded : public Entity
                                {
                                    public:
                                        LeafNetworksAdded();
                                        ~LeafNetworksAdded();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value address; //type: string
                                        Value net_mask; //type: uint8




                                }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksAdded


                                class LeafNetworksDeleted : public Entity
                                {
                                    public:
                                        LeafNetworksDeleted();
                                        ~LeafNetworksDeleted();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value address; //type: string
                                        Value net_mask; //type: uint8




                                }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksDeleted


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline> > convergence_timeline;
                                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksAdded> > leaf_networks_added;
                                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksDeleted> > leaf_networks_deleted;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary> priority_summary;


                            }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority


                            class LsaProcessed : public Entity
                            {
                                public:
                                    LsaProcessed();
                                    ~LsaProcessed();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value lsa_id; //type: string
                                    Value sequence_number; //type: string
                                    Value lsa_type; //type: RcmdLsaEnum
                                    Value origin_router_id; //type: string
                                    Value change_type; //type: RcmdLsChangeEnum
                                    Value reception_time; //type: string


                                    class RcmdLsChangeEnum;
                                    class RcmdLsaEnum;


                            }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed> > lsa_processed;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority> > priority;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa> > trigger_lsa;


                        }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun


                        class InterAreaAndExternal : public Entity
                        {
                            public:
                                InterAreaAndExternal();
                                ~InterAreaAndExternal();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Priority : public Entity
                            {
                                public:
                                    Priority();
                                    ~Priority();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class PrioritySummary : public Entity
                                {
                                    public:
                                        PrioritySummary();
                                        ~PrioritySummary();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value level; //type: RcmdPriorityLevelEnum
                                        Value threshold_exceeded; //type: boolean
                                        Value type3ls_as; //type: uint32
                                        Value type4ls_as; //type: uint32
                                        Value type57ls_as; //type: uint32


                                    class RouteStatistics : public Entity
                                    {
                                        public:
                                            RouteStatistics();
                                            ~RouteStatistics();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value adds; //type: uint32
                                            Value deletes; //type: uint32
                                            Value modifies; //type: uint32
                                            Value reachables; //type: uint32
                                            Value unreachables; //type: uint32
                                            Value touches; //type: uint32




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics


                                    class IpConvergenceTime : public Entity
                                    {
                                        public:
                                            IpConvergenceTime();
                                            ~IpConvergenceTime();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value minimum_time; //type: string
                                            Value maximum_time; //type: string
                                            Value slowest_node_name; //type: string
                                            Value fastest_node_name; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime


                                    class MplsConvergenceTime : public Entity
                                    {
                                        public:
                                            MplsConvergenceTime();
                                            ~MplsConvergenceTime();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value minimum_time; //type: string
                                            Value maximum_time; //type: string
                                            Value slowest_node_name; //type: string
                                            Value fastest_node_name; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime


                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime> ip_convergence_time;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics> route_statistics;
                                        class RcmdPriorityLevelEnum;


                                }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary


                                class ConvergenceTimeline : public Entity
                                {
                                    public:
                                        ConvergenceTimeline();
                                        ~ConvergenceTimeline();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class RouteOrigin : public Entity
                                    {
                                        public:
                                            RouteOrigin();
                                            ~RouteOrigin();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin


                                    class RiBv4Enter : public Entity
                                    {
                                        public:
                                            RiBv4Enter();
                                            ~RiBv4Enter();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter


                                    class RiBv4Exit : public Entity
                                    {
                                        public:
                                            RiBv4Exit();
                                            ~RiBv4Exit();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit


                                    class RiBv4Redistribute : public Entity
                                    {
                                        public:
                                            RiBv4Redistribute();
                                            ~RiBv4Redistribute();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute


                                    class LdpEnter : public Entity
                                    {
                                        public:
                                            LdpEnter();
                                            ~LdpEnter();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter


                                    class LdpExit : public Entity
                                    {
                                        public:
                                            LdpExit();
                                            ~LdpExit();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit


                                    class LsdEnter : public Entity
                                    {
                                        public:
                                            LsdEnter();
                                            ~LsdEnter();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter


                                    class LsdExit : public Entity
                                    {
                                        public:
                                            LsdExit();
                                            ~LsdExit();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit


                                    class LcIp : public Entity
                                    {
                                        public:
                                            LcIp();
                                            ~LcIp();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value node_name; //type: string
                                            Value speed; //type: RcmdLinecardSpeedEnum


                                        class FibComplete : public Entity
                                        {
                                            public:
                                                FibComplete();
                                                ~FibComplete();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value start_time; //type: string
                                                Value end_time; //type: string
                                                Value duration; //type: string




                                        }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete


                                            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete> fib_complete;
                                            class RcmdLinecardSpeedEnum;


                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp


                                    class LcMpls : public Entity
                                    {
                                        public:
                                            LcMpls();
                                            ~LcMpls();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value node_name; //type: string
                                            Value speed; //type: RcmdLinecardSpeedEnum


                                        class FibComplete : public Entity
                                        {
                                            public:
                                                FibComplete();
                                                ~FibComplete();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value start_time; //type: string
                                                Value end_time; //type: string
                                                Value duration; //type: string




                                        }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete


                                            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete> fib_complete;
                                            class RcmdLinecardSpeedEnum;


                                    }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp> > lc_ip;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls> > lc_mpls;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter> ldp_enter;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit> ldp_exit;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter> lsd_enter;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit> lsd_exit;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter> ri_bv4_enter;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit> ri_bv4_exit;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute> ri_bv4_redistribute;
                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin> route_origin;


                                }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline


                                class LeafNetworksAdded : public Entity
                                {
                                    public:
                                        LeafNetworksAdded();
                                        ~LeafNetworksAdded();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value address; //type: string
                                        Value net_mask; //type: uint8




                                }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksAdded


                                class LeafNetworksDeleted : public Entity
                                {
                                    public:
                                        LeafNetworksDeleted();
                                        ~LeafNetworksDeleted();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value address; //type: string
                                        Value net_mask; //type: uint8




                                }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksDeleted


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline> > convergence_timeline;
                                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksAdded> > leaf_networks_added;
                                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksDeleted> > leaf_networks_deleted;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary> priority_summary;


                            }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority> > priority;


                        }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal


                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun> > dijkstra_run;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal> > inter_area_and_external;
                            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary> spf_summary;


                    }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline> > spf_run_offline;


                }; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines


                class SummaryExternalEventSummaries : public Entity
                {
                    public:
                        SummaryExternalEventSummaries();
                        ~SummaryExternalEventSummaries();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class SummaryExternalEventSummary : public Entity
                    {
                        public:
                            SummaryExternalEventSummary();
                            ~SummaryExternalEventSummary();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value event_id; //type: int32
                            Value prefix; //type: string
                            Value prefix_lenth; //type: uint32
                            Value spf_run_no; //type: uint32
                            Value ipfrr_event_id; //type: uint32
                            Value threshold_exceeded; //type: boolean
                            Value priority; //type: RcmdPriorityLevelEnum
                            Value change_type; //type: RcmdChangeEnum
                            Value route_type; //type: RcmdShowRouteEnum
                            Value route_path_change_type; //type: RcmdShowRoutePathChangeEnum
                            Value cost; //type: uint32
                            Value trigger_time; //type: string


                        class IpConvergenceTime : public Entity
                        {
                            public:
                                IpConvergenceTime();
                                ~IpConvergenceTime();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value minimum_time; //type: string
                                Value maximum_time; //type: string
                                Value slowest_node_name; //type: string
                                Value fastest_node_name; //type: string




                        }; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime


                        class MplsConvergenceTime : public Entity
                        {
                            public:
                                MplsConvergenceTime();
                                ~MplsConvergenceTime();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value minimum_time; //type: string
                                Value maximum_time; //type: string
                                Value slowest_node_name; //type: string
                                Value fastest_node_name; //type: string




                        }; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime


                        class Path : public Entity
                        {
                            public:
                                Path();
                                ~Path();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value interface_name; //type: string
                                Value neighbour_address; //type: string
                                Value change_type; //type: RcmdChangeEnum
                                Value path_metric; //type: uint32


                            class LfaPath : public Entity
                            {
                                public:
                                    LfaPath();
                                    ~LfaPath();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value lfa_type; //type: RcmdShowIpfrrLfaEnum
                                    Value interface_name; //type: string
                                    Value neighbour_address; //type: string
                                    Value change_type; //type: RcmdChangeEnum
                                    Value path_metric; //type: uint32
                                    Value remote_node_id; //type: string


                                    class RcmdChangeEnum;
                                    class RcmdShowIpfrrLfaEnum;


                            }; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::LfaPath


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::LfaPath> > lfa_path;
                                class RcmdChangeEnum;


                        }; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path


                        class TriggerLsa : public Entity
                        {
                            public:
                                TriggerLsa();
                                ~TriggerLsa();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value lsa_id; //type: string
                                Value sequence_number; //type: string
                                Value lsa_type; //type: RcmdLsaEnum
                                Value origin_router_id; //type: string
                                Value change_type; //type: RcmdLsChangeEnum
                                Value reception_time; //type: string


                                class RcmdLsChangeEnum;
                                class RcmdLsaEnum;


                        }; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa


                        class TimeLine : public Entity
                        {
                            public:
                                TimeLine();
                                ~TimeLine();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value route_origin; //type: string
                                Value ri_bv4_enter; //type: string
                                Value ri_bv4_exit; //type: string
                                Value ri_bv4_redistribute; //type: string
                                Value ldp_enter; //type: string
                                Value ldp_exit; //type: string
                                Value lsd_enter; //type: string
                                Value lsd_exit; //type: string


                            class LcIp : public Entity
                            {
                                public:
                                    LcIp();
                                    ~LcIp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value node_name; //type: string
                                    Value speed; //type: RcmdLinecardSpeedEnum
                                    Value fib_complete; //type: string


                                    class RcmdLinecardSpeedEnum;


                            }; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp


                            class LcMpls : public Entity
                            {
                                public:
                                    LcMpls();
                                    ~LcMpls();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value node_name; //type: string
                                    Value speed; //type: RcmdLinecardSpeedEnum
                                    Value fib_complete; //type: string


                                    class RcmdLinecardSpeedEnum;


                            }; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp> > lc_ip;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls> > lc_mpls;


                        }; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine


                        class LsaProcessed : public Entity
                        {
                            public:
                                LsaProcessed();
                                ~LsaProcessed();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value lsa_id; //type: string
                                Value sequence_number; //type: string
                                Value lsa_type; //type: RcmdLsaEnum
                                Value origin_router_id; //type: string
                                Value change_type; //type: RcmdLsChangeEnum
                                Value reception_time; //type: string


                                class RcmdLsChangeEnum;
                                class RcmdLsaEnum;


                        }; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed


                            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime> ip_convergence_time;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed> > lsa_processed;
                            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime> mpls_convergence_time;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path> > path;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine> > time_line;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa> > trigger_lsa;
                            class RcmdChangeEnum;
                            class RcmdPriorityLevelEnum;
                            class RcmdShowRoutePathChangeEnum;
                            class RcmdShowRouteEnum;


                    }; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary> > summary_external_event_summary;


                }; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries


                class PrefixEventSummaries : public Entity
                {
                    public:
                        PrefixEventSummaries();
                        ~PrefixEventSummaries();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class PrefixEventSummary : public Entity
                    {
                        public:
                            PrefixEventSummary();
                            ~PrefixEventSummary();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value event_id; //type: int32
                            Value prefix; //type: string
                            Value prefix_lenth; //type: uint32
                            Value spf_run_no; //type: uint32
                            Value ipfrr_event_id; //type: uint32
                            Value threshold_exceeded; //type: boolean
                            Value priority; //type: RcmdPriorityLevelEnum
                            Value change_type; //type: RcmdChangeEnum
                            Value route_type; //type: RcmdShowRouteEnum
                            Value route_path_change_type; //type: RcmdShowRoutePathChangeEnum
                            Value cost; //type: uint32
                            Value trigger_time; //type: string


                        class IpConvergenceTime : public Entity
                        {
                            public:
                                IpConvergenceTime();
                                ~IpConvergenceTime();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value minimum_time; //type: string
                                Value maximum_time; //type: string
                                Value slowest_node_name; //type: string
                                Value fastest_node_name; //type: string




                        }; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime


                        class MplsConvergenceTime : public Entity
                        {
                            public:
                                MplsConvergenceTime();
                                ~MplsConvergenceTime();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value minimum_time; //type: string
                                Value maximum_time; //type: string
                                Value slowest_node_name; //type: string
                                Value fastest_node_name; //type: string




                        }; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime


                        class Path : public Entity
                        {
                            public:
                                Path();
                                ~Path();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value interface_name; //type: string
                                Value neighbour_address; //type: string
                                Value change_type; //type: RcmdChangeEnum
                                Value path_metric; //type: uint32


                            class LfaPath : public Entity
                            {
                                public:
                                    LfaPath();
                                    ~LfaPath();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value lfa_type; //type: RcmdShowIpfrrLfaEnum
                                    Value interface_name; //type: string
                                    Value neighbour_address; //type: string
                                    Value change_type; //type: RcmdChangeEnum
                                    Value path_metric; //type: uint32
                                    Value remote_node_id; //type: string


                                    class RcmdChangeEnum;
                                    class RcmdShowIpfrrLfaEnum;


                            }; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath> > lfa_path;
                                class RcmdChangeEnum;


                        }; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path


                        class TriggerLsa : public Entity
                        {
                            public:
                                TriggerLsa();
                                ~TriggerLsa();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value lsa_id; //type: string
                                Value sequence_number; //type: string
                                Value lsa_type; //type: RcmdLsaEnum
                                Value origin_router_id; //type: string
                                Value change_type; //type: RcmdLsChangeEnum
                                Value reception_time; //type: string


                                class RcmdLsChangeEnum;
                                class RcmdLsaEnum;


                        }; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa


                        class TimeLine : public Entity
                        {
                            public:
                                TimeLine();
                                ~TimeLine();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value route_origin; //type: string
                                Value ri_bv4_enter; //type: string
                                Value ri_bv4_exit; //type: string
                                Value ri_bv4_redistribute; //type: string
                                Value ldp_enter; //type: string
                                Value ldp_exit; //type: string
                                Value lsd_enter; //type: string
                                Value lsd_exit; //type: string


                            class LcIp : public Entity
                            {
                                public:
                                    LcIp();
                                    ~LcIp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value node_name; //type: string
                                    Value speed; //type: RcmdLinecardSpeedEnum
                                    Value fib_complete; //type: string


                                    class RcmdLinecardSpeedEnum;


                            }; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp


                            class LcMpls : public Entity
                            {
                                public:
                                    LcMpls();
                                    ~LcMpls();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value node_name; //type: string
                                    Value speed; //type: RcmdLinecardSpeedEnum
                                    Value fib_complete; //type: string


                                    class RcmdLinecardSpeedEnum;


                            }; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp> > lc_ip;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls> > lc_mpls;


                        }; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine


                        class LsaProcessed : public Entity
                        {
                            public:
                                LsaProcessed();
                                ~LsaProcessed();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value lsa_id; //type: string
                                Value sequence_number; //type: string
                                Value lsa_type; //type: RcmdLsaEnum
                                Value origin_router_id; //type: string
                                Value change_type; //type: RcmdLsChangeEnum
                                Value reception_time; //type: string


                                class RcmdLsChangeEnum;
                                class RcmdLsaEnum;


                        }; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed


                            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime> ip_convergence_time;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed> > lsa_processed;
                            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime> mpls_convergence_time;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path> > path;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine> > time_line;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa> > trigger_lsa;
                            class RcmdChangeEnum;
                            class RcmdPriorityLevelEnum;
                            class RcmdShowRoutePathChangeEnum;
                            class RcmdShowRouteEnum;


                    }; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary> > prefix_event_summary;


                }; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries


                class SummaryExternalEventOfflines : public Entity
                {
                    public:
                        SummaryExternalEventOfflines();
                        ~SummaryExternalEventOfflines();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class SummaryExternalEventOffline : public Entity
                    {
                        public:
                            SummaryExternalEventOffline();
                            ~SummaryExternalEventOffline();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value event_id; //type: int32
                            Value prefix; //type: string
                            Value prefix_lenth; //type: uint32
                            Value spf_run_no; //type: uint32
                            Value ipfrr_event_id; //type: uint32
                            Value threshold_exceeded; //type: boolean
                            Value priority; //type: RcmdPriorityLevelEnum
                            Value change_type; //type: RcmdChangeEnum
                            Value route_type; //type: RcmdShowRouteEnum
                            Value route_path_change_type; //type: RcmdShowRoutePathChangeEnum
                            Value cost; //type: uint32
                            Value trigger_time; //type: string


                        class IpConvergenceTime : public Entity
                        {
                            public:
                                IpConvergenceTime();
                                ~IpConvergenceTime();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value minimum_time; //type: string
                                Value maximum_time; //type: string
                                Value slowest_node_name; //type: string
                                Value fastest_node_name; //type: string




                        }; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime


                        class MplsConvergenceTime : public Entity
                        {
                            public:
                                MplsConvergenceTime();
                                ~MplsConvergenceTime();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value minimum_time; //type: string
                                Value maximum_time; //type: string
                                Value slowest_node_name; //type: string
                                Value fastest_node_name; //type: string




                        }; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime


                        class Path : public Entity
                        {
                            public:
                                Path();
                                ~Path();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value interface_name; //type: string
                                Value neighbour_address; //type: string
                                Value change_type; //type: RcmdChangeEnum
                                Value path_metric; //type: uint32


                            class LfaPath : public Entity
                            {
                                public:
                                    LfaPath();
                                    ~LfaPath();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value lfa_type; //type: RcmdShowIpfrrLfaEnum
                                    Value interface_name; //type: string
                                    Value neighbour_address; //type: string
                                    Value change_type; //type: RcmdChangeEnum
                                    Value path_metric; //type: uint32
                                    Value remote_node_id; //type: string


                                    class RcmdChangeEnum;
                                    class RcmdShowIpfrrLfaEnum;


                            }; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::LfaPath


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::LfaPath> > lfa_path;
                                class RcmdChangeEnum;


                        }; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path


                        class TriggerLsa : public Entity
                        {
                            public:
                                TriggerLsa();
                                ~TriggerLsa();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value lsa_id; //type: string
                                Value sequence_number; //type: string
                                Value lsa_type; //type: RcmdLsaEnum
                                Value origin_router_id; //type: string
                                Value change_type; //type: RcmdLsChangeEnum
                                Value reception_time; //type: string


                                class RcmdLsChangeEnum;
                                class RcmdLsaEnum;


                        }; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa


                        class TimeLine : public Entity
                        {
                            public:
                                TimeLine();
                                ~TimeLine();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value route_origin; //type: string
                                Value ri_bv4_enter; //type: string
                                Value ri_bv4_exit; //type: string
                                Value ri_bv4_redistribute; //type: string
                                Value ldp_enter; //type: string
                                Value ldp_exit; //type: string
                                Value lsd_enter; //type: string
                                Value lsd_exit; //type: string


                            class LcIp : public Entity
                            {
                                public:
                                    LcIp();
                                    ~LcIp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value node_name; //type: string
                                    Value speed; //type: RcmdLinecardSpeedEnum
                                    Value fib_complete; //type: string


                                    class RcmdLinecardSpeedEnum;


                            }; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp


                            class LcMpls : public Entity
                            {
                                public:
                                    LcMpls();
                                    ~LcMpls();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value node_name; //type: string
                                    Value speed; //type: RcmdLinecardSpeedEnum
                                    Value fib_complete; //type: string


                                    class RcmdLinecardSpeedEnum;


                            }; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp> > lc_ip;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls> > lc_mpls;


                        }; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine


                        class LsaProcessed : public Entity
                        {
                            public:
                                LsaProcessed();
                                ~LsaProcessed();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value lsa_id; //type: string
                                Value sequence_number; //type: string
                                Value lsa_type; //type: RcmdLsaEnum
                                Value origin_router_id; //type: string
                                Value change_type; //type: RcmdLsChangeEnum
                                Value reception_time; //type: string


                                class RcmdLsChangeEnum;
                                class RcmdLsaEnum;


                        }; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed


                            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime> ip_convergence_time;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed> > lsa_processed;
                            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime> mpls_convergence_time;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path> > path;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine> > time_line;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa> > trigger_lsa;
                            class RcmdChangeEnum;
                            class RcmdPriorityLevelEnum;
                            class RcmdShowRoutePathChangeEnum;
                            class RcmdShowRouteEnum;


                    }; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline> > summary_external_event_offline;


                }; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines


                class PrefixEventOfflines : public Entity
                {
                    public:
                        PrefixEventOfflines();
                        ~PrefixEventOfflines();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class PrefixEventOffline : public Entity
                    {
                        public:
                            PrefixEventOffline();
                            ~PrefixEventOffline();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value event_id; //type: int32
                            Value prefix; //type: string
                            Value prefix_lenth; //type: uint32
                            Value spf_run_no; //type: uint32
                            Value ipfrr_event_id; //type: uint32
                            Value threshold_exceeded; //type: boolean
                            Value priority; //type: RcmdPriorityLevelEnum
                            Value change_type; //type: RcmdChangeEnum
                            Value route_type; //type: RcmdShowRouteEnum
                            Value route_path_change_type; //type: RcmdShowRoutePathChangeEnum
                            Value cost; //type: uint32
                            Value trigger_time; //type: string


                        class IpConvergenceTime : public Entity
                        {
                            public:
                                IpConvergenceTime();
                                ~IpConvergenceTime();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value minimum_time; //type: string
                                Value maximum_time; //type: string
                                Value slowest_node_name; //type: string
                                Value fastest_node_name; //type: string




                        }; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime


                        class MplsConvergenceTime : public Entity
                        {
                            public:
                                MplsConvergenceTime();
                                ~MplsConvergenceTime();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value minimum_time; //type: string
                                Value maximum_time; //type: string
                                Value slowest_node_name; //type: string
                                Value fastest_node_name; //type: string




                        }; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime


                        class Path : public Entity
                        {
                            public:
                                Path();
                                ~Path();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value interface_name; //type: string
                                Value neighbour_address; //type: string
                                Value change_type; //type: RcmdChangeEnum
                                Value path_metric; //type: uint32


                            class LfaPath : public Entity
                            {
                                public:
                                    LfaPath();
                                    ~LfaPath();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value lfa_type; //type: RcmdShowIpfrrLfaEnum
                                    Value interface_name; //type: string
                                    Value neighbour_address; //type: string
                                    Value change_type; //type: RcmdChangeEnum
                                    Value path_metric; //type: uint32
                                    Value remote_node_id; //type: string


                                    class RcmdChangeEnum;
                                    class RcmdShowIpfrrLfaEnum;


                            }; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath> > lfa_path;
                                class RcmdChangeEnum;


                        }; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path


                        class TriggerLsa : public Entity
                        {
                            public:
                                TriggerLsa();
                                ~TriggerLsa();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value lsa_id; //type: string
                                Value sequence_number; //type: string
                                Value lsa_type; //type: RcmdLsaEnum
                                Value origin_router_id; //type: string
                                Value change_type; //type: RcmdLsChangeEnum
                                Value reception_time; //type: string


                                class RcmdLsChangeEnum;
                                class RcmdLsaEnum;


                        }; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa


                        class TimeLine : public Entity
                        {
                            public:
                                TimeLine();
                                ~TimeLine();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value route_origin; //type: string
                                Value ri_bv4_enter; //type: string
                                Value ri_bv4_exit; //type: string
                                Value ri_bv4_redistribute; //type: string
                                Value ldp_enter; //type: string
                                Value ldp_exit; //type: string
                                Value lsd_enter; //type: string
                                Value lsd_exit; //type: string


                            class LcIp : public Entity
                            {
                                public:
                                    LcIp();
                                    ~LcIp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value node_name; //type: string
                                    Value speed; //type: RcmdLinecardSpeedEnum
                                    Value fib_complete; //type: string


                                    class RcmdLinecardSpeedEnum;


                            }; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp


                            class LcMpls : public Entity
                            {
                                public:
                                    LcMpls();
                                    ~LcMpls();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value node_name; //type: string
                                    Value speed; //type: RcmdLinecardSpeedEnum
                                    Value fib_complete; //type: string


                                    class RcmdLinecardSpeedEnum;


                            }; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp> > lc_ip;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls> > lc_mpls;


                        }; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine


                        class LsaProcessed : public Entity
                        {
                            public:
                                LsaProcessed();
                                ~LsaProcessed();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value lsa_id; //type: string
                                Value sequence_number; //type: string
                                Value lsa_type; //type: RcmdLsaEnum
                                Value origin_router_id; //type: string
                                Value change_type; //type: RcmdLsChangeEnum
                                Value reception_time; //type: string


                                class RcmdLsChangeEnum;
                                class RcmdLsaEnum;


                        }; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed


                            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime> ip_convergence_time;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed> > lsa_processed;
                            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime> mpls_convergence_time;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path> > path;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine> > time_line;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa> > trigger_lsa;
                            class RcmdChangeEnum;
                            class RcmdPriorityLevelEnum;
                            class RcmdShowRoutePathChangeEnum;
                            class RcmdShowRouteEnum;


                    }; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline> > prefix_event_offline;


                }; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines


                class SummaryExternalEventStatistics : public Entity
                {
                    public:
                        SummaryExternalEventStatistics();
                        ~SummaryExternalEventStatistics();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value inter_area_routes; //type: uint32
                        Value inter_area_added; //type: uint32
                        Value inter_area_modified; //type: uint32
                        Value inter_area_deleted; //type: uint32
                        Value inter_area_critical; //type: uint32
                        Value inter_area_high; //type: uint32
                        Value inter_area_medium; //type: uint32
                        Value inter_area_low; //type: uint32
                        Value external_routes; //type: uint32
                        Value external_added; //type: uint32
                        Value external_modified; //type: uint32
                        Value external_deleted; //type: uint32
                        Value external_critical; //type: uint32
                        Value external_high; //type: uint32
                        Value external_medium; //type: uint32
                        Value external_low; //type: uint32




                }; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics


                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines> ipfrr_event_offlines;
                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries> ipfrr_event_summaries;
                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventOfflines> prefix_event_offlines;
                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventStatistics> prefix_event_statistics;
                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventSummaries> prefix_event_summaries;
                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines> spf_run_offlines;
                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries> spf_run_summaries;
                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines> summary_external_event_offlines;
                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics> summary_external_event_statistics;
                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries> summary_external_event_summaries;


            }; // Rcmd::Ospf::Instances::Instance


                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance> > instance;


        }; // Rcmd::Ospf::Instances


            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances> instances;


    }; // Rcmd::Ospf


    class Server : public Entity
    {
        public:
            Server();
            ~Server();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Normal : public Entity
        {
            public:
                Normal();
                ~Normal();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value host_name; //type: string
                Value status; //type: RcmdBagEnableDisableEnum
                Value max_events; //type: uint32
                Value event_buffer_size; //type: uint32
                Value monitoring_interval; //type: uint32
                Value next_interval; //type: uint32
                Value max_interface_count; //type: uint32
                Value interface_count; //type: uint32
                Value node_rp_count; //type: uint32
                Value node_lc_count; //type: uint32
                Value diag_node_count; //type: uint32
                Value disabled_node_count; //type: uint32
                Value in_active_node_count; //type: uint32
                Value last_process_start_time; //type: string
                Value last_process_duration; //type: string
                Value last_process_state; //type: RcmdShowPrcsStateEnum
                Value process_count; //type: uint32
                Value spf_process_count; //type: uint32
                Value reports_archive_path; //type: string
                Value reports_archive_node; //type: string
                Value last_archival_status; //type: string
                Value last_archival_error; //type: string
                Value last_archival_error_time; //type: string
                Value archive_count; //type: uint32
                Value diagnostics_archive_path; //type: string
                Value diagnostics_archive_node; //type: string


            class ProtocolConfig : public Entity
            {
                public:
                    ProtocolConfig();
                    ~ProtocolConfig();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value protocol_name; //type: string


                class Priority : public Entity
                {
                    public:
                        Priority();
                        ~Priority();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value priority_name; //type: RcmdPriorityLevelEnum
                        Value threshold; //type: uint32
                        Value disable; //type: RcmdBoolYesNoEnum


                        class RcmdBoolYesNoEnum;
                        class RcmdPriorityLevelEnum;


                }; // Rcmd::Server::Normal::ProtocolConfig::Priority


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Normal::ProtocolConfig::Priority> > priority;


            }; // Rcmd::Server::Normal::ProtocolConfig


            class ServerDetail : public Entity
            {
                public:
                    ServerDetail();
                    ~ServerDetail();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value overload_suspend; //type: uint32
                    Value memory_suspend; //type: uint32


                class TraceInformation : public Entity
                {
                    public:
                        TraceInformation();
                        ~TraceInformation();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value trace_name; //type: string
                        Value total_stats; //type: uint32
                        Value last_run_stats; //type: uint32
                        Value error_stats; //type: uint32




                }; // Rcmd::Server::Normal::ServerDetail::TraceInformation


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Normal::ServerDetail::TraceInformation> > trace_information;


            }; // Rcmd::Server::Normal::ServerDetail


                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Normal::ProtocolConfig> > protocol_config;
                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Normal::ServerDetail> > server_detail;
                class RcmdShowPrcsStateEnum;
                class RcmdBagEnableDisableEnum;


        }; // Rcmd::Server::Normal


        class Detail : public Entity
        {
            public:
                Detail();
                ~Detail();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value host_name; //type: string
                Value status; //type: RcmdBagEnableDisableEnum
                Value max_events; //type: uint32
                Value event_buffer_size; //type: uint32
                Value monitoring_interval; //type: uint32
                Value next_interval; //type: uint32
                Value max_interface_count; //type: uint32
                Value interface_count; //type: uint32
                Value node_rp_count; //type: uint32
                Value node_lc_count; //type: uint32
                Value diag_node_count; //type: uint32
                Value disabled_node_count; //type: uint32
                Value in_active_node_count; //type: uint32
                Value last_process_start_time; //type: string
                Value last_process_duration; //type: string
                Value last_process_state; //type: RcmdShowPrcsStateEnum
                Value process_count; //type: uint32
                Value spf_process_count; //type: uint32
                Value reports_archive_path; //type: string
                Value reports_archive_node; //type: string
                Value last_archival_status; //type: string
                Value last_archival_error; //type: string
                Value last_archival_error_time; //type: string
                Value archive_count; //type: uint32
                Value diagnostics_archive_path; //type: string
                Value diagnostics_archive_node; //type: string


            class ProtocolConfig : public Entity
            {
                public:
                    ProtocolConfig();
                    ~ProtocolConfig();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value protocol_name; //type: string


                class Priority : public Entity
                {
                    public:
                        Priority();
                        ~Priority();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value priority_name; //type: RcmdPriorityLevelEnum
                        Value threshold; //type: uint32
                        Value disable; //type: RcmdBoolYesNoEnum


                        class RcmdBoolYesNoEnum;
                        class RcmdPriorityLevelEnum;


                }; // Rcmd::Server::Detail::ProtocolConfig::Priority


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Detail::ProtocolConfig::Priority> > priority;


            }; // Rcmd::Server::Detail::ProtocolConfig


            class ServerDetail : public Entity
            {
                public:
                    ServerDetail();
                    ~ServerDetail();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value overload_suspend; //type: uint32
                    Value memory_suspend; //type: uint32


                class TraceInformation : public Entity
                {
                    public:
                        TraceInformation();
                        ~TraceInformation();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value trace_name; //type: string
                        Value total_stats; //type: uint32
                        Value last_run_stats; //type: uint32
                        Value error_stats; //type: uint32




                }; // Rcmd::Server::Detail::ServerDetail::TraceInformation


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Detail::ServerDetail::TraceInformation> > trace_information;


            }; // Rcmd::Server::Detail::ServerDetail


                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Detail::ProtocolConfig> > protocol_config;
                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Detail::ServerDetail> > server_detail;
                class RcmdShowPrcsStateEnum;
                class RcmdBagEnableDisableEnum;


        }; // Rcmd::Server::Detail


            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Detail> detail;
            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Normal> normal;


    }; // Rcmd::Server


    class Node : public Entity
    {
        public:
            Node();
            ~Node();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class NodeInformation : public Entity
        {
            public:
                NodeInformation();
                ~NodeInformation();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value node_id; //type: uint32
                Value node_name; //type: string
                Value rack_id; //type: uint32
                Value last_update_time; //type: string
                Value fwd_referenced; //type: RcmdBoolYesNoEnum
                Value node_type; //type: RcmdShowNodeEnum
                Value software_state; //type: uint32
                Value card_state; //type: uint32
                Value node_state; //type: RcmdBoolYesNoEnum
                Value status; //type: RcmdBagEnblDsblEnum
                Value diag_mode; //type: uint32
                Value redundancy_state; //type: uint32


                class RcmdBoolYesNoEnum;
                class RcmdBoolYesNoEnum;
                class RcmdShowNodeEnum;
                class RcmdBagEnblDsblEnum;


        }; // Rcmd::Node::NodeInformation


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Node::NodeInformation> > node_information;


    }; // Rcmd::Node


    class Isis : public Entity
    {
        public:
            Isis();
            ~Isis();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Instances : public Entity
        {
            public:
                Instances();
                ~Instances();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Instance : public Entity
            {
                public:
                    Instance();
                    ~Instance();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value instance_name; //type: string


                class IpfrrEventSummaries : public Entity
                {
                    public:
                        IpfrrEventSummaries();
                        ~IpfrrEventSummaries();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class IpfrrEventSummary : public Entity
                    {
                        public:
                            IpfrrEventSummary();
                            ~IpfrrEventSummary();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value event_id; //type: int32
                            Value event_id_xr; //type: uint32
                            Value trigger_time; //type: string
                            Value trigger_spf_run; //type: uint32
                            Value wait_time; //type: uint32
                            Value start_time_offset; //type: string
                            Value duration; //type: string
                            Value completed_spf_run; //type: uint32
                            Value total_routes; //type: uint32
                            Value fully_protected_routes; //type: uint32
                            Value partially_protected_routes; //type: uint32
                            Value coverage; //type: string


                        class IpfrrStatistic : public Entity
                        {
                            public:
                                IpfrrStatistic();
                                ~IpfrrStatistic();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value priority; //type: RcmdPriorityLevelEnum
                                Value total_routes; //type: uint32
                                Value fully_protected_routes; //type: uint32
                                Value partially_protected_routes; //type: uint32
                                Value coverage; //type: string
                                Value local_lfa_coverage; //type: string
                                Value remote_lfa_coverage; //type: string
                                Value below_threshold; //type: boolean


                                class RcmdPriorityLevelEnum;


                        }; // Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic


                        class RemoteNode : public Entity
                        {
                            public:
                                RemoteNode();
                                ~RemoteNode();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value remote_node_id; //type: string
                                Value interface_name; //type: string
                                Value neighbour_address; //type: string
                                Value path_count; //type: uint32
                                Value in_use_time; //type: string


                            class PrimaryPath : public Entity
                            {
                                public:
                                    PrimaryPath();
                                    ~PrimaryPath();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value interface_name; //type: string
                                    Value neighbour_address; //type: string




                            }; // Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath> > primary_path;


                        }; // Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode


                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic> > ipfrr_statistic;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode> > remote_node;


                    }; // Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary> > ipfrr_event_summary;


                }; // Rcmd::Isis::Instances::Instance::IpfrrEventSummaries


                class PrefixEventStatistics : public Entity
                {
                    public:
                        PrefixEventStatistics();
                        ~PrefixEventStatistics();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class PrefixEventStatistic : public Entity
                    {
                        public:
                            PrefixEventStatistic();
                            ~PrefixEventStatistic();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value prefix_info; //type: string
                            Value prefix; //type: string
                            Value prefix_lenth; //type: uint32
                            Value last_event_time; //type: string
                            Value last_priority; //type: RcmdPriorityLevelEnum
                            Value last_route_type; //type: RcmdShowRouteEnum
                            Value last_change_type; //type: RcmdChangeEnum
                            Value last_cost; //type: uint32
                            Value critical_priority; //type: uint32
                            Value high_priority; //type: uint32
                            Value medium_priority; //type: uint32
                            Value low_priority; //type: uint32
                            Value add_count; //type: uint32
                            Value modify_count; //type: uint32
                            Value delete_count; //type: uint32
                            Value threshold_exceed_count; //type: uint32


                            class RcmdChangeEnum;
                            class RcmdPriorityLevelEnum;
                            class RcmdShowRouteEnum;


                    }; // Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic> > prefix_event_statistic;


                }; // Rcmd::Isis::Instances::Instance::PrefixEventStatistics


                class SpfRunSummaries : public Entity
                {
                    public:
                        SpfRunSummaries();
                        ~SpfRunSummaries();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class SpfRunSummary : public Entity
                    {
                        public:
                            SpfRunSummary();
                            ~SpfRunSummary();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value spf_run_number; //type: int32
                            Value start_time; //type: string
                            Value wait_time; //type: uint32
                            Value reason; //type: string


                        class SpfSummary : public Entity
                        {
                            public:
                                SpfSummary();
                                ~SpfSummary();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value topology; //type: uint32
                                Value isis_level; //type: RcmdIsisLvlEnum
                                Value type; //type: RcmdIsisSpfEnum
                                Value threshold_exceeded; //type: boolean
                                Value state; //type: RcmdSpfStateEnum
                                Value is_data_complete; //type: boolean
                                Value trigger_time; //type: string
                                Value duration; //type: string
                                Value total_lsp_changes; //type: uint16


                            class PrioritySummary : public Entity
                            {
                                public:
                                    PrioritySummary();
                                    ~PrioritySummary();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value level; //type: RcmdPriorityLevelEnum
                                    Value threshold_exceeded; //type: boolean


                                class RouteStatistics : public Entity
                                {
                                    public:
                                        RouteStatistics();
                                        ~RouteStatistics();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value adds; //type: uint32
                                        Value deletes; //type: uint32
                                        Value modifies; //type: uint32
                                        Value reachables; //type: uint32
                                        Value unreachables; //type: uint32
                                        Value touches; //type: uint32




                                }; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics


                                class IpConvergenceTime : public Entity
                                {
                                    public:
                                        IpConvergenceTime();
                                        ~IpConvergenceTime();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value minimum_time; //type: string
                                        Value maximum_time; //type: string
                                        Value slowest_node_name; //type: string
                                        Value fastest_node_name; //type: string




                                }; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime


                                class MplsConvergenceTime : public Entity
                                {
                                    public:
                                        MplsConvergenceTime();
                                        ~MplsConvergenceTime();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value minimum_time; //type: string
                                        Value maximum_time; //type: string
                                        Value slowest_node_name; //type: string
                                        Value fastest_node_name; //type: string




                                }; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime


                                class FrrStatistic : public Entity
                                {
                                    public:
                                        FrrStatistic();
                                        ~FrrStatistic();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value total_routes; //type: uint32
                                        Value fully_protected_routes; //type: uint32
                                        Value partially_protected_routes; //type: uint32
                                        Value coverage; //type: string




                                }; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic> > frr_statistic;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime> ip_convergence_time;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics> route_statistics;
                                    class RcmdPriorityLevelEnum;


                            }; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary> > priority_summary;
                                class RcmdIsisLvlEnum;
                                class RcmdSpfStateEnum;
                                class RcmdIsisSpfEnum;


                        }; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary


                        class NodeStatistics : public Entity
                        {
                            public:
                                NodeStatistics();
                                ~NodeStatistics();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value adds; //type: uint32
                                Value deletes; //type: uint32
                                Value modifies; //type: uint32
                                Value reachables; //type: uint32
                                Value unreachables; //type: uint32
                                Value touches; //type: uint32




                        }; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics


                        class TriggerLsp : public Entity
                        {
                            public:
                                TriggerLsp();
                                ~TriggerLsp();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value lsp_id; //type: string
                                Value sequence_number; //type: uint32
                                Value change_type; //type: RcmdLsChangeEnum
                                Value reception_time; //type: string


                                class RcmdLsChangeEnum;


                        }; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp


                        class Priority : public Entity
                        {
                            public:
                                Priority();
                                ~Priority();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class PrioritySummary : public Entity
                            {
                                public:
                                    PrioritySummary();
                                    ~PrioritySummary();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value level; //type: RcmdPriorityLevelEnum
                                    Value threshold_exceeded; //type: boolean


                                class RouteStatistics : public Entity
                                {
                                    public:
                                        RouteStatistics();
                                        ~RouteStatistics();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value adds; //type: uint32
                                        Value deletes; //type: uint32
                                        Value modifies; //type: uint32
                                        Value reachables; //type: uint32
                                        Value unreachables; //type: uint32
                                        Value touches; //type: uint32




                                }; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics


                                class IpConvergenceTime : public Entity
                                {
                                    public:
                                        IpConvergenceTime();
                                        ~IpConvergenceTime();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value minimum_time; //type: string
                                        Value maximum_time; //type: string
                                        Value slowest_node_name; //type: string
                                        Value fastest_node_name; //type: string




                                }; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime


                                class MplsConvergenceTime : public Entity
                                {
                                    public:
                                        MplsConvergenceTime();
                                        ~MplsConvergenceTime();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value minimum_time; //type: string
                                        Value maximum_time; //type: string
                                        Value slowest_node_name; //type: string
                                        Value fastest_node_name; //type: string




                                }; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime


                                class FrrStatistic : public Entity
                                {
                                    public:
                                        FrrStatistic();
                                        ~FrrStatistic();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value total_routes; //type: uint32
                                        Value fully_protected_routes; //type: uint32
                                        Value partially_protected_routes; //type: uint32
                                        Value coverage; //type: string




                                }; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic> > frr_statistic;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime> ip_convergence_time;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics> route_statistics;
                                    class RcmdPriorityLevelEnum;


                            }; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary


                            class ConvergenceTimeline : public Entity
                            {
                                public:
                                    ConvergenceTimeline();
                                    ~ConvergenceTimeline();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class RouteOrigin : public Entity
                                {
                                    public:
                                        RouteOrigin();
                                        ~RouteOrigin();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value start_time; //type: string
                                        Value end_time; //type: string
                                        Value duration; //type: string




                                }; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin


                                class RiBv4Enter : public Entity
                                {
                                    public:
                                        RiBv4Enter();
                                        ~RiBv4Enter();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value start_time; //type: string
                                        Value end_time; //type: string
                                        Value duration; //type: string




                                }; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter


                                class RiBv4Exit : public Entity
                                {
                                    public:
                                        RiBv4Exit();
                                        ~RiBv4Exit();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value start_time; //type: string
                                        Value end_time; //type: string
                                        Value duration; //type: string




                                }; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit


                                class RiBv4Redistribute : public Entity
                                {
                                    public:
                                        RiBv4Redistribute();
                                        ~RiBv4Redistribute();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value start_time; //type: string
                                        Value end_time; //type: string
                                        Value duration; //type: string




                                }; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute


                                class LdpEnter : public Entity
                                {
                                    public:
                                        LdpEnter();
                                        ~LdpEnter();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value start_time; //type: string
                                        Value end_time; //type: string
                                        Value duration; //type: string




                                }; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter


                                class LdpExit : public Entity
                                {
                                    public:
                                        LdpExit();
                                        ~LdpExit();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value start_time; //type: string
                                        Value end_time; //type: string
                                        Value duration; //type: string




                                }; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit


                                class LsdEnter : public Entity
                                {
                                    public:
                                        LsdEnter();
                                        ~LsdEnter();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value start_time; //type: string
                                        Value end_time; //type: string
                                        Value duration; //type: string




                                }; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter


                                class LsdExit : public Entity
                                {
                                    public:
                                        LsdExit();
                                        ~LsdExit();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value start_time; //type: string
                                        Value end_time; //type: string
                                        Value duration; //type: string




                                }; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit


                                class LcIp : public Entity
                                {
                                    public:
                                        LcIp();
                                        ~LcIp();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value node_name; //type: string
                                        Value speed; //type: RcmdLinecardSpeedEnum


                                    class FibComplete : public Entity
                                    {
                                        public:
                                            FibComplete();
                                            ~FibComplete();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete


                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete> fib_complete;
                                        class RcmdLinecardSpeedEnum;


                                }; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp


                                class LcMpls : public Entity
                                {
                                    public:
                                        LcMpls();
                                        ~LcMpls();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value node_name; //type: string
                                        Value speed; //type: RcmdLinecardSpeedEnum


                                    class FibComplete : public Entity
                                    {
                                        public:
                                            FibComplete();
                                            ~FibComplete();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete


                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete> fib_complete;
                                        class RcmdLinecardSpeedEnum;


                                }; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp> > lc_ip;
                                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls> > lc_mpls;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter> ldp_enter;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit> ldp_exit;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter> lsd_enter;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit> lsd_exit;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter> ri_bv4_enter;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit> ri_bv4_exit;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute> ri_bv4_redistribute;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin> route_origin;


                            }; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline


                            class LeafNetworksAdded : public Entity
                            {
                                public:
                                    LeafNetworksAdded();
                                    ~LeafNetworksAdded();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value address; //type: string
                                    Value net_mask; //type: uint8




                            }; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksAdded


                            class LeafNetworksDeleted : public Entity
                            {
                                public:
                                    LeafNetworksDeleted();
                                    ~LeafNetworksDeleted();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value address; //type: string
                                    Value net_mask; //type: uint8




                            }; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksDeleted


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline> > convergence_timeline;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksAdded> > leaf_networks_added;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksDeleted> > leaf_networks_deleted;
                                std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary> priority_summary;


                        }; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority


                        class LspProcessed : public Entity
                        {
                            public:
                                LspProcessed();
                                ~LspProcessed();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value lsp_id; //type: string
                                Value sequence_number; //type: uint32
                                Value change_type; //type: RcmdLsChangeEnum
                                Value reception_time; //type: string


                                class RcmdLsChangeEnum;


                        }; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed


                        class LspRegenerated : public Entity
                        {
                            public:
                                LspRegenerated();
                                ~LspRegenerated();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value serial_number_xr; //type: uint32
                                Value lsp_id; //type: string
                                Value sequence_number; //type: uint32
                                Value reception_time; //type: string
                                Value isis_level; //type: RcmdIsisLvlEnum
                                Value spf_run_number; //type: uint32
                                Value reason; //type: string


                                class RcmdIsisLvlEnum;


                        }; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated


                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed> > lsp_processed;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated> > lsp_regenerated;
                            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics> node_statistics;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority> > priority;
                            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary> spf_summary;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp> > trigger_lsp;


                    }; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary> > spf_run_summary;


                }; // Rcmd::Isis::Instances::Instance::SpfRunSummaries


                class IpfrrEventOfflines : public Entity
                {
                    public:
                        IpfrrEventOfflines();
                        ~IpfrrEventOfflines();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class IpfrrEventOffline : public Entity
                    {
                        public:
                            IpfrrEventOffline();
                            ~IpfrrEventOffline();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value event_id; //type: int32
                            Value event_id_xr; //type: uint32
                            Value trigger_time; //type: string
                            Value trigger_spf_run; //type: uint32
                            Value wait_time; //type: uint32
                            Value start_time_offset; //type: string
                            Value duration; //type: string
                            Value completed_spf_run; //type: uint32
                            Value total_routes; //type: uint32
                            Value fully_protected_routes; //type: uint32
                            Value partially_protected_routes; //type: uint32
                            Value coverage; //type: string


                        class IpfrrStatistic : public Entity
                        {
                            public:
                                IpfrrStatistic();
                                ~IpfrrStatistic();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value priority; //type: RcmdPriorityLevelEnum
                                Value total_routes; //type: uint32
                                Value fully_protected_routes; //type: uint32
                                Value partially_protected_routes; //type: uint32
                                Value coverage; //type: string
                                Value local_lfa_coverage; //type: string
                                Value remote_lfa_coverage; //type: string
                                Value below_threshold; //type: boolean


                                class RcmdPriorityLevelEnum;


                        }; // Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic


                        class RemoteNode : public Entity
                        {
                            public:
                                RemoteNode();
                                ~RemoteNode();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value remote_node_id; //type: string
                                Value interface_name; //type: string
                                Value neighbour_address; //type: string
                                Value path_count; //type: uint32
                                Value in_use_time; //type: string


                            class PrimaryPath : public Entity
                            {
                                public:
                                    PrimaryPath();
                                    ~PrimaryPath();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value interface_name; //type: string
                                    Value neighbour_address; //type: string




                            }; // Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath> > primary_path;


                        }; // Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode


                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic> > ipfrr_statistic;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode> > remote_node;


                    }; // Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline> > ipfrr_event_offline;


                }; // Rcmd::Isis::Instances::Instance::IpfrrEventOfflines


                class SpfRunOfflines : public Entity
                {
                    public:
                        SpfRunOfflines();
                        ~SpfRunOfflines();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class SpfRunOffline : public Entity
                    {
                        public:
                            SpfRunOffline();
                            ~SpfRunOffline();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value spf_run_number; //type: int32
                            Value start_time; //type: string
                            Value wait_time; //type: uint32
                            Value reason; //type: string


                        class SpfSummary : public Entity
                        {
                            public:
                                SpfSummary();
                                ~SpfSummary();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value topology; //type: uint32
                                Value isis_level; //type: RcmdIsisLvlEnum
                                Value type; //type: RcmdIsisSpfEnum
                                Value threshold_exceeded; //type: boolean
                                Value state; //type: RcmdSpfStateEnum
                                Value is_data_complete; //type: boolean
                                Value trigger_time; //type: string
                                Value duration; //type: string
                                Value total_lsp_changes; //type: uint16


                            class PrioritySummary : public Entity
                            {
                                public:
                                    PrioritySummary();
                                    ~PrioritySummary();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value level; //type: RcmdPriorityLevelEnum
                                    Value threshold_exceeded; //type: boolean


                                class RouteStatistics : public Entity
                                {
                                    public:
                                        RouteStatistics();
                                        ~RouteStatistics();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value adds; //type: uint32
                                        Value deletes; //type: uint32
                                        Value modifies; //type: uint32
                                        Value reachables; //type: uint32
                                        Value unreachables; //type: uint32
                                        Value touches; //type: uint32




                                }; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics


                                class IpConvergenceTime : public Entity
                                {
                                    public:
                                        IpConvergenceTime();
                                        ~IpConvergenceTime();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value minimum_time; //type: string
                                        Value maximum_time; //type: string
                                        Value slowest_node_name; //type: string
                                        Value fastest_node_name; //type: string




                                }; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime


                                class MplsConvergenceTime : public Entity
                                {
                                    public:
                                        MplsConvergenceTime();
                                        ~MplsConvergenceTime();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value minimum_time; //type: string
                                        Value maximum_time; //type: string
                                        Value slowest_node_name; //type: string
                                        Value fastest_node_name; //type: string




                                }; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime


                                class FrrStatistic : public Entity
                                {
                                    public:
                                        FrrStatistic();
                                        ~FrrStatistic();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value total_routes; //type: uint32
                                        Value fully_protected_routes; //type: uint32
                                        Value partially_protected_routes; //type: uint32
                                        Value coverage; //type: string




                                }; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic> > frr_statistic;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime> ip_convergence_time;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics> route_statistics;
                                    class RcmdPriorityLevelEnum;


                            }; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary> > priority_summary;
                                class RcmdIsisLvlEnum;
                                class RcmdSpfStateEnum;
                                class RcmdIsisSpfEnum;


                        }; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary


                        class NodeStatistics : public Entity
                        {
                            public:
                                NodeStatistics();
                                ~NodeStatistics();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value adds; //type: uint32
                                Value deletes; //type: uint32
                                Value modifies; //type: uint32
                                Value reachables; //type: uint32
                                Value unreachables; //type: uint32
                                Value touches; //type: uint32




                        }; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics


                        class TriggerLsp : public Entity
                        {
                            public:
                                TriggerLsp();
                                ~TriggerLsp();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value lsp_id; //type: string
                                Value sequence_number; //type: uint32
                                Value change_type; //type: RcmdLsChangeEnum
                                Value reception_time; //type: string


                                class RcmdLsChangeEnum;


                        }; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp


                        class Priority : public Entity
                        {
                            public:
                                Priority();
                                ~Priority();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class PrioritySummary : public Entity
                            {
                                public:
                                    PrioritySummary();
                                    ~PrioritySummary();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value level; //type: RcmdPriorityLevelEnum
                                    Value threshold_exceeded; //type: boolean


                                class RouteStatistics : public Entity
                                {
                                    public:
                                        RouteStatistics();
                                        ~RouteStatistics();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value adds; //type: uint32
                                        Value deletes; //type: uint32
                                        Value modifies; //type: uint32
                                        Value reachables; //type: uint32
                                        Value unreachables; //type: uint32
                                        Value touches; //type: uint32




                                }; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics


                                class IpConvergenceTime : public Entity
                                {
                                    public:
                                        IpConvergenceTime();
                                        ~IpConvergenceTime();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value minimum_time; //type: string
                                        Value maximum_time; //type: string
                                        Value slowest_node_name; //type: string
                                        Value fastest_node_name; //type: string




                                }; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime


                                class MplsConvergenceTime : public Entity
                                {
                                    public:
                                        MplsConvergenceTime();
                                        ~MplsConvergenceTime();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value minimum_time; //type: string
                                        Value maximum_time; //type: string
                                        Value slowest_node_name; //type: string
                                        Value fastest_node_name; //type: string




                                }; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime


                                class FrrStatistic : public Entity
                                {
                                    public:
                                        FrrStatistic();
                                        ~FrrStatistic();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value total_routes; //type: uint32
                                        Value fully_protected_routes; //type: uint32
                                        Value partially_protected_routes; //type: uint32
                                        Value coverage; //type: string




                                }; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic> > frr_statistic;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime> ip_convergence_time;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics> route_statistics;
                                    class RcmdPriorityLevelEnum;


                            }; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary


                            class ConvergenceTimeline : public Entity
                            {
                                public:
                                    ConvergenceTimeline();
                                    ~ConvergenceTimeline();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class RouteOrigin : public Entity
                                {
                                    public:
                                        RouteOrigin();
                                        ~RouteOrigin();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value start_time; //type: string
                                        Value end_time; //type: string
                                        Value duration; //type: string




                                }; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin


                                class RiBv4Enter : public Entity
                                {
                                    public:
                                        RiBv4Enter();
                                        ~RiBv4Enter();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value start_time; //type: string
                                        Value end_time; //type: string
                                        Value duration; //type: string




                                }; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter


                                class RiBv4Exit : public Entity
                                {
                                    public:
                                        RiBv4Exit();
                                        ~RiBv4Exit();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value start_time; //type: string
                                        Value end_time; //type: string
                                        Value duration; //type: string




                                }; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit


                                class RiBv4Redistribute : public Entity
                                {
                                    public:
                                        RiBv4Redistribute();
                                        ~RiBv4Redistribute();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value start_time; //type: string
                                        Value end_time; //type: string
                                        Value duration; //type: string




                                }; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute


                                class LdpEnter : public Entity
                                {
                                    public:
                                        LdpEnter();
                                        ~LdpEnter();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value start_time; //type: string
                                        Value end_time; //type: string
                                        Value duration; //type: string




                                }; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter


                                class LdpExit : public Entity
                                {
                                    public:
                                        LdpExit();
                                        ~LdpExit();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value start_time; //type: string
                                        Value end_time; //type: string
                                        Value duration; //type: string




                                }; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit


                                class LsdEnter : public Entity
                                {
                                    public:
                                        LsdEnter();
                                        ~LsdEnter();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value start_time; //type: string
                                        Value end_time; //type: string
                                        Value duration; //type: string




                                }; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter


                                class LsdExit : public Entity
                                {
                                    public:
                                        LsdExit();
                                        ~LsdExit();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value start_time; //type: string
                                        Value end_time; //type: string
                                        Value duration; //type: string




                                }; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit


                                class LcIp : public Entity
                                {
                                    public:
                                        LcIp();
                                        ~LcIp();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value node_name; //type: string
                                        Value speed; //type: RcmdLinecardSpeedEnum


                                    class FibComplete : public Entity
                                    {
                                        public:
                                            FibComplete();
                                            ~FibComplete();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete


                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete> fib_complete;
                                        class RcmdLinecardSpeedEnum;


                                }; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp


                                class LcMpls : public Entity
                                {
                                    public:
                                        LcMpls();
                                        ~LcMpls();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value node_name; //type: string
                                        Value speed; //type: RcmdLinecardSpeedEnum


                                    class FibComplete : public Entity
                                    {
                                        public:
                                            FibComplete();
                                            ~FibComplete();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_time; //type: string
                                            Value end_time; //type: string
                                            Value duration; //type: string




                                    }; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete


                                        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete> fib_complete;
                                        class RcmdLinecardSpeedEnum;


                                }; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp> > lc_ip;
                                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls> > lc_mpls;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter> ldp_enter;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit> ldp_exit;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter> lsd_enter;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit> lsd_exit;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter> ri_bv4_enter;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit> ri_bv4_exit;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute> ri_bv4_redistribute;
                                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin> route_origin;


                            }; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline


                            class LeafNetworksAdded : public Entity
                            {
                                public:
                                    LeafNetworksAdded();
                                    ~LeafNetworksAdded();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value address; //type: string
                                    Value net_mask; //type: uint8




                            }; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksAdded


                            class LeafNetworksDeleted : public Entity
                            {
                                public:
                                    LeafNetworksDeleted();
                                    ~LeafNetworksDeleted();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value address; //type: string
                                    Value net_mask; //type: uint8




                            }; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksDeleted


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline> > convergence_timeline;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksAdded> > leaf_networks_added;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksDeleted> > leaf_networks_deleted;
                                std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary> priority_summary;


                        }; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority


                        class LspProcessed : public Entity
                        {
                            public:
                                LspProcessed();
                                ~LspProcessed();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value lsp_id; //type: string
                                Value sequence_number; //type: uint32
                                Value change_type; //type: RcmdLsChangeEnum
                                Value reception_time; //type: string


                                class RcmdLsChangeEnum;


                        }; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed


                        class LspRegenerated : public Entity
                        {
                            public:
                                LspRegenerated();
                                ~LspRegenerated();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value serial_number_xr; //type: uint32
                                Value lsp_id; //type: string
                                Value sequence_number; //type: uint32
                                Value reception_time; //type: string
                                Value isis_level; //type: RcmdIsisLvlEnum
                                Value spf_run_number; //type: uint32
                                Value reason; //type: string


                                class RcmdIsisLvlEnum;


                        }; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated


                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed> > lsp_processed;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated> > lsp_regenerated;
                            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics> node_statistics;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority> > priority;
                            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary> spf_summary;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp> > trigger_lsp;


                    }; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline> > spf_run_offline;


                }; // Rcmd::Isis::Instances::Instance::SpfRunOfflines


                class PrefixEventSummaries : public Entity
                {
                    public:
                        PrefixEventSummaries();
                        ~PrefixEventSummaries();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class PrefixEventSummary : public Entity
                    {
                        public:
                            PrefixEventSummary();
                            ~PrefixEventSummary();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value event_id; //type: int32
                            Value prefix; //type: string
                            Value prefix_lenth; //type: uint32
                            Value spf_run_no; //type: uint32
                            Value ipfrr_event_id; //type: uint32
                            Value threshold_exceeded; //type: boolean
                            Value priority; //type: RcmdPriorityLevelEnum
                            Value change_type; //type: RcmdChangeEnum
                            Value route_type; //type: RcmdShowRouteEnum
                            Value route_path_change_type; //type: RcmdShowRoutePathChangeEnum
                            Value cost; //type: uint32
                            Value trigger_time; //type: string


                        class IpConvergenceTime : public Entity
                        {
                            public:
                                IpConvergenceTime();
                                ~IpConvergenceTime();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value minimum_time; //type: string
                                Value maximum_time; //type: string
                                Value slowest_node_name; //type: string
                                Value fastest_node_name; //type: string




                        }; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime


                        class MplsConvergenceTime : public Entity
                        {
                            public:
                                MplsConvergenceTime();
                                ~MplsConvergenceTime();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value minimum_time; //type: string
                                Value maximum_time; //type: string
                                Value slowest_node_name; //type: string
                                Value fastest_node_name; //type: string




                        }; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime


                        class Path : public Entity
                        {
                            public:
                                Path();
                                ~Path();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value interface_name; //type: string
                                Value neighbour_address; //type: string
                                Value change_type; //type: RcmdChangeEnum
                                Value path_metric; //type: uint32


                            class LfaPath : public Entity
                            {
                                public:
                                    LfaPath();
                                    ~LfaPath();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value lfa_type; //type: RcmdShowIpfrrLfaEnum
                                    Value interface_name; //type: string
                                    Value neighbour_address; //type: string
                                    Value change_type; //type: RcmdChangeEnum
                                    Value path_metric; //type: uint32
                                    Value remote_node_id; //type: string


                                    class RcmdChangeEnum;
                                    class RcmdShowIpfrrLfaEnum;


                            }; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath> > lfa_path;
                                class RcmdChangeEnum;


                        }; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path


                        class TriggerLsa : public Entity
                        {
                            public:
                                TriggerLsa();
                                ~TriggerLsa();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value lsa_id; //type: string
                                Value sequence_number; //type: string
                                Value lsa_type; //type: RcmdLsaEnum
                                Value origin_router_id; //type: string
                                Value change_type; //type: RcmdLsChangeEnum
                                Value reception_time; //type: string


                                class RcmdLsChangeEnum;
                                class RcmdLsaEnum;


                        }; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa


                        class TimeLine : public Entity
                        {
                            public:
                                TimeLine();
                                ~TimeLine();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value route_origin; //type: string
                                Value ri_bv4_enter; //type: string
                                Value ri_bv4_exit; //type: string
                                Value ri_bv4_redistribute; //type: string
                                Value ldp_enter; //type: string
                                Value ldp_exit; //type: string
                                Value lsd_enter; //type: string
                                Value lsd_exit; //type: string


                            class LcIp : public Entity
                            {
                                public:
                                    LcIp();
                                    ~LcIp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value node_name; //type: string
                                    Value speed; //type: RcmdLinecardSpeedEnum
                                    Value fib_complete; //type: string


                                    class RcmdLinecardSpeedEnum;


                            }; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp


                            class LcMpls : public Entity
                            {
                                public:
                                    LcMpls();
                                    ~LcMpls();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value node_name; //type: string
                                    Value speed; //type: RcmdLinecardSpeedEnum
                                    Value fib_complete; //type: string


                                    class RcmdLinecardSpeedEnum;


                            }; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp> > lc_ip;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls> > lc_mpls;


                        }; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine


                        class LsaProcessed : public Entity
                        {
                            public:
                                LsaProcessed();
                                ~LsaProcessed();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value lsa_id; //type: string
                                Value sequence_number; //type: string
                                Value lsa_type; //type: RcmdLsaEnum
                                Value origin_router_id; //type: string
                                Value change_type; //type: RcmdLsChangeEnum
                                Value reception_time; //type: string


                                class RcmdLsChangeEnum;
                                class RcmdLsaEnum;


                        }; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed


                            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime> ip_convergence_time;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed> > lsa_processed;
                            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime> mpls_convergence_time;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path> > path;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine> > time_line;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa> > trigger_lsa;
                            class RcmdChangeEnum;
                            class RcmdPriorityLevelEnum;
                            class RcmdShowRoutePathChangeEnum;
                            class RcmdShowRouteEnum;


                    }; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary> > prefix_event_summary;


                }; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries


                class PrefixEventOfflines : public Entity
                {
                    public:
                        PrefixEventOfflines();
                        ~PrefixEventOfflines();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class PrefixEventOffline : public Entity
                    {
                        public:
                            PrefixEventOffline();
                            ~PrefixEventOffline();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value event_id; //type: int32
                            Value prefix; //type: string
                            Value prefix_lenth; //type: uint32
                            Value spf_run_no; //type: uint32
                            Value ipfrr_event_id; //type: uint32
                            Value threshold_exceeded; //type: boolean
                            Value priority; //type: RcmdPriorityLevelEnum
                            Value change_type; //type: RcmdChangeEnum
                            Value route_type; //type: RcmdShowRouteEnum
                            Value route_path_change_type; //type: RcmdShowRoutePathChangeEnum
                            Value cost; //type: uint32
                            Value trigger_time; //type: string


                        class IpConvergenceTime : public Entity
                        {
                            public:
                                IpConvergenceTime();
                                ~IpConvergenceTime();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value minimum_time; //type: string
                                Value maximum_time; //type: string
                                Value slowest_node_name; //type: string
                                Value fastest_node_name; //type: string




                        }; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime


                        class MplsConvergenceTime : public Entity
                        {
                            public:
                                MplsConvergenceTime();
                                ~MplsConvergenceTime();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value minimum_time; //type: string
                                Value maximum_time; //type: string
                                Value slowest_node_name; //type: string
                                Value fastest_node_name; //type: string




                        }; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime


                        class Path : public Entity
                        {
                            public:
                                Path();
                                ~Path();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value interface_name; //type: string
                                Value neighbour_address; //type: string
                                Value change_type; //type: RcmdChangeEnum
                                Value path_metric; //type: uint32


                            class LfaPath : public Entity
                            {
                                public:
                                    LfaPath();
                                    ~LfaPath();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value lfa_type; //type: RcmdShowIpfrrLfaEnum
                                    Value interface_name; //type: string
                                    Value neighbour_address; //type: string
                                    Value change_type; //type: RcmdChangeEnum
                                    Value path_metric; //type: uint32
                                    Value remote_node_id; //type: string


                                    class RcmdChangeEnum;
                                    class RcmdShowIpfrrLfaEnum;


                            }; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath> > lfa_path;
                                class RcmdChangeEnum;


                        }; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path


                        class TriggerLsa : public Entity
                        {
                            public:
                                TriggerLsa();
                                ~TriggerLsa();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value lsa_id; //type: string
                                Value sequence_number; //type: string
                                Value lsa_type; //type: RcmdLsaEnum
                                Value origin_router_id; //type: string
                                Value change_type; //type: RcmdLsChangeEnum
                                Value reception_time; //type: string


                                class RcmdLsChangeEnum;
                                class RcmdLsaEnum;


                        }; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa


                        class TimeLine : public Entity
                        {
                            public:
                                TimeLine();
                                ~TimeLine();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value route_origin; //type: string
                                Value ri_bv4_enter; //type: string
                                Value ri_bv4_exit; //type: string
                                Value ri_bv4_redistribute; //type: string
                                Value ldp_enter; //type: string
                                Value ldp_exit; //type: string
                                Value lsd_enter; //type: string
                                Value lsd_exit; //type: string


                            class LcIp : public Entity
                            {
                                public:
                                    LcIp();
                                    ~LcIp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value node_name; //type: string
                                    Value speed; //type: RcmdLinecardSpeedEnum
                                    Value fib_complete; //type: string


                                    class RcmdLinecardSpeedEnum;


                            }; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp


                            class LcMpls : public Entity
                            {
                                public:
                                    LcMpls();
                                    ~LcMpls();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value node_name; //type: string
                                    Value speed; //type: RcmdLinecardSpeedEnum
                                    Value fib_complete; //type: string


                                    class RcmdLinecardSpeedEnum;


                            }; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp> > lc_ip;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls> > lc_mpls;


                        }; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine


                        class LsaProcessed : public Entity
                        {
                            public:
                                LsaProcessed();
                                ~LsaProcessed();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value lsa_id; //type: string
                                Value sequence_number; //type: string
                                Value lsa_type; //type: RcmdLsaEnum
                                Value origin_router_id; //type: string
                                Value change_type; //type: RcmdLsChangeEnum
                                Value reception_time; //type: string


                                class RcmdLsChangeEnum;
                                class RcmdLsaEnum;


                        }; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed


                            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime> ip_convergence_time;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed> > lsa_processed;
                            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime> mpls_convergence_time;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path> > path;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine> > time_line;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa> > trigger_lsa;
                            class RcmdChangeEnum;
                            class RcmdPriorityLevelEnum;
                            class RcmdShowRoutePathChangeEnum;
                            class RcmdShowRouteEnum;


                    }; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline> > prefix_event_offline;


                }; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines


                class LspRegenerateds : public Entity
                {
                    public:
                        LspRegenerateds();
                        ~LspRegenerateds();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class LspRegenerated : public Entity
                    {
                        public:
                            LspRegenerated();
                            ~LspRegenerated();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value serial_number; //type: int32
                            Value serial_number_xr; //type: uint32
                            Value lsp_id; //type: string
                            Value sequence_number; //type: uint32
                            Value reception_time; //type: string
                            Value isis_level; //type: RcmdIsisLvlEnum
                            Value spf_run_number; //type: uint32
                            Value reason; //type: string


                            class RcmdIsisLvlEnum;


                    }; // Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated> > lsp_regenerated;


                }; // Rcmd::Isis::Instances::Instance::LspRegenerateds


                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::IpfrrEventOfflines> ipfrr_event_offlines;
                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::IpfrrEventSummaries> ipfrr_event_summaries;
                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::LspRegenerateds> lsp_regenerateds;
                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines> prefix_event_offlines;
                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventStatistics> prefix_event_statistics;
                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries> prefix_event_summaries;
                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines> spf_run_offlines;
                    std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries> spf_run_summaries;


            }; // Rcmd::Isis::Instances::Instance


                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance> > instance;


        }; // Rcmd::Isis::Instances


            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances> instances;


    }; // Rcmd::Isis


    class Memory : public Entity
    {
        public:
            Memory();
            ~Memory();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class MemoryInfo : public Entity
        {
            public:
                MemoryInfo();
                ~MemoryInfo();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value structure_name; //type: string
                Value size; //type: uint32
                Value current_count; //type: uint32
                Value alloc_fails; //type: uint32
                Value alloc_count; //type: uint32
                Value freed_count; //type: uint32
                Value memory_type; //type: RcmdShowMemEnum


                class RcmdShowMemEnum;


        }; // Rcmd::Memory::MemoryInfo


        class EdmMemoryInfo : public Entity
        {
            public:
                EdmMemoryInfo();
                ~EdmMemoryInfo();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value size; //type: uint32
                Value total; //type: uint32
                Value success; //type: uint32
                Value failure; //type: uint32




        }; // Rcmd::Memory::EdmMemoryInfo


        class StringMemoryInfo : public Entity
        {
            public:
                StringMemoryInfo();
                ~StringMemoryInfo();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value size; //type: uint32
                Value total; //type: uint32
                Value success; //type: uint32
                Value failure; //type: uint32




        }; // Rcmd::Memory::StringMemoryInfo


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Memory::EdmMemoryInfo> > edm_memory_info;
            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Memory::MemoryInfo> > memory_info;
            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Memory::StringMemoryInfo> > string_memory_info;


    }; // Rcmd::Memory


    class Ldp : public Entity
    {
        public:
            Ldp();
            ~Ldp();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Sessions : public Entity
        {
            public:
                Sessions();
                ~Sessions();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Session : public Entity
            {
                public:
                    Session();
                    ~Session();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value event_id; //type: int32
                    Value event_id_xr; //type: uint32
                    Value event_type; //type: RcmdLdpEventEnum
                    Value event_time; //type: string
                    Value lsr_id; //type: string
                    Value interface_name; //type: string
                    Value address; //type: string
                    Value state; //type: RcmdShowLdpNeighbourStatusEnum


                    class RcmdLdpEventEnum;
                    class RcmdShowLdpNeighbourStatusEnum;


            }; // Rcmd::Ldp::Sessions::Session


                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::Sessions::Session> > session;


        }; // Rcmd::Ldp::Sessions


        class RemoteLfaS : public Entity
        {
            public:
                RemoteLfaS();
                ~RemoteLfaS();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


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
                    Value event_id; //type: int32
                    Value event_id_xr; //type: uint32
                    Value end_of_calculation_time; //type: string
                    Value igp_protocol; //type: RcmdProtocolIdEnum
                    Value process_name; //type: string
                    Value ipfrr_event_id; //type: uint32
                    Value below_threshold; //type: boolean


                class SessionStatistic : public Entity
                {
                    public:
                        SessionStatistic();
                        ~SessionStatistic();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value session_state; //type: RcmdShowLdpSessionStateEnum
                        Value session_count; //type: uint32
                        Value route_count; //type: uint32
                        Value path_count; //type: uint32
                        Value remote_label_count; //type: uint32
                        Value protected_route_count; //type: uint32
                        Value protected_path_count; //type: uint32


                        class RcmdShowLdpSessionStateEnum;


                }; // Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic


                class RemoteNode : public Entity
                {
                    public:
                        RemoteNode();
                        ~RemoteNode();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value remote_node_id; //type: string
                        Value lsr_id; //type: string
                        Value transport_address; //type: string
                        Value in_use_time; //type: string
                        Value session_state; //type: RcmdShowLdpSessionStateEnum
                        Value route_count; //type: uint32
                        Value path_count; //type: uint32
                        Value remote_label_count; //type: uint32
                        Value protected_route_count; //type: uint32
                        Value protected_path_count; //type: uint32


                        class RcmdShowLdpSessionStateEnum;


                }; // Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode


                class Logs : public Entity
                {
                    public:
                        Logs();
                        ~Logs();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value log_time; //type: string
                        Value label_coverage_state; //type: RcmdShowLdpConvStateEnum
                        Value route_count; //type: uint32
                        Value remote_label_count; //type: uint32


                        class RcmdShowLdpConvStateEnum;


                }; // Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs> > logs;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode> > remote_node;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic> > session_statistic;
                    class RcmdProtocolIdEnum;


            }; // Rcmd::Ldp::RemoteLfaS::RemoteLfa


                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::RemoteLfaS::RemoteLfa> > remote_lfa;


        }; // Rcmd::Ldp::RemoteLfaS


        class RemoteLfaSummaries : public Entity
        {
            public:
                RemoteLfaSummaries();
                ~RemoteLfaSummaries();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class RemoteLfaSummary : public Entity
            {
                public:
                    RemoteLfaSummary();
                    ~RemoteLfaSummary();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value event_id; //type: int32
                    Value event_id_xr; //type: uint32
                    Value end_of_calculation_time; //type: string
                    Value igp_protocol; //type: RcmdProtocolIdEnum
                    Value process_name; //type: string
                    Value ipfrr_event_id; //type: uint32
                    Value below_threshold; //type: boolean


                class SessionStatistic : public Entity
                {
                    public:
                        SessionStatistic();
                        ~SessionStatistic();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value session_state; //type: RcmdShowLdpSessionStateEnum
                        Value session_count; //type: uint32
                        Value route_count; //type: uint32
                        Value path_count; //type: uint32
                        Value remote_label_count; //type: uint32
                        Value protected_route_count; //type: uint32
                        Value protected_path_count; //type: uint32


                        class RcmdShowLdpSessionStateEnum;


                }; // Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic


                class RemoteNode : public Entity
                {
                    public:
                        RemoteNode();
                        ~RemoteNode();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value remote_node_id; //type: string
                        Value lsr_id; //type: string
                        Value transport_address; //type: string
                        Value in_use_time; //type: string
                        Value session_state; //type: RcmdShowLdpSessionStateEnum
                        Value route_count; //type: uint32
                        Value path_count; //type: uint32
                        Value remote_label_count; //type: uint32
                        Value protected_route_count; //type: uint32
                        Value protected_path_count; //type: uint32


                        class RcmdShowLdpSessionStateEnum;


                }; // Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteNode


                class Logs : public Entity
                {
                    public:
                        Logs();
                        ~Logs();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value log_time; //type: string
                        Value label_coverage_state; //type: RcmdShowLdpConvStateEnum
                        Value route_count; //type: uint32
                        Value remote_label_count; //type: uint32


                        class RcmdShowLdpConvStateEnum;


                }; // Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::Logs


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::Logs> > logs;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteNode> > remote_node;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic> > session_statistic;
                    class RcmdProtocolIdEnum;


            }; // Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary


                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary> > remote_lfa_summary;


        }; // Rcmd::Ldp::RemoteLfaSummaries


            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::RemoteLfaS> remote_lfa_s;
            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::RemoteLfaSummaries> remote_lfa_summaries;
            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::Sessions> sessions;


    }; // Rcmd::Ldp


    class Intf : public Entity
    {
        public:
            Intf();
            ~Intf();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Events : public Entity
        {
            public:
                Events();
                ~Events();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Event : public Entity
            {
                public:
                    Event();
                    ~Event();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value event_no; //type: int32
                    Value sequence_no; //type: uint32
                    Value interface_name; //type: string
                    Value component; //type: RcmdShowCompIdEnum
                    Value event_type; //type: RcmdShowIntfEventEnum
                    Value event_time; //type: string
                    Value primary_address; //type: string


                    class RcmdShowCompIdEnum;
                    class RcmdShowIntfEventEnum;


            }; // Rcmd::Intf::Events::Event


                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Intf::Events::Event> > event;


        }; // Rcmd::Intf::Events


            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Intf::Events> events;


    }; // Rcmd::Intf


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


        class Isis : public Entity
        {
            public:
                Isis();
                ~Isis();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Process_ : public Entity
            {
                public:
                    Process_();
                    ~Process_();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value protocol_id; //type: RcmdProtocolIdEnum
                    Value process_name; //type: string


                class InstanceName : public Entity
                {
                    public:
                        InstanceName();
                        ~InstanceName();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value name; //type: string
                        Value last_update_time; //type: string
                        Value total_spf_nos; //type: uint32
                        Value route_change_spf_nos; //type: uint32
                        Value no_route_change_spf_nos; //type: uint32
                        Value not_interested_spf_nos; //type: uint32
                        Value lsp_regeneration_count; //type: uint32
                        Value lsp_regeneration_serial; //type: uint32
                        Value arch_spf_event; //type: uint32
                        Value arch_lsp_regeneration; //type: uint32


                    class Instance : public Entity
                    {
                        public:
                            Instance();
                            ~Instance();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value instance_id; //type: uint32
                            Value instance_state; //type: RcmdShowInstStateEnum
                            Value instance_deleted; //type: RcmdBoolYesNoEnum
                            Value fwd_referenced; //type: RcmdBoolYesNoEnum
                            Value last_update_time; //type: string
                            Value node_id; //type: uint32
                            Value spf_offset; //type: uint32
                            Value total_spf_nos; //type: uint32
                            Value arch_spf_run; //type: uint32
                            Value route_change_spf_nos; //type: uint32
                            Value no_route_change_spf_nos; //type: uint32
                            Value not_interested_spf_nos; //type: uint32
                            Value total_spt_nos; //type: uint32


                            class RcmdBoolYesNoEnum;
                            class RcmdBoolYesNoEnum;
                            class RcmdShowInstStateEnum;


                    }; // Rcmd::Process::Isis::Process_::InstanceName::Instance


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Isis::Process_::InstanceName::Instance> > instance;


                }; // Rcmd::Process::Isis::Process_::InstanceName


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Isis::Process_::InstanceName> > instance_name;
                    class RcmdProtocolIdEnum;


            }; // Rcmd::Process::Isis::Process_


                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Isis::Process_> > process;


        }; // Rcmd::Process::Isis


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


            class Process_ : public Entity
            {
                public:
                    Process_();
                    ~Process_();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value protocol_id; //type: RcmdProtocolIdEnum
                    Value process_name; //type: string


                class InstanceName : public Entity
                {
                    public:
                        InstanceName();
                        ~InstanceName();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value name; //type: string
                        Value last_update_time; //type: string
                        Value total_spf_nos; //type: uint32
                        Value route_change_spf_nos; //type: uint32
                        Value no_route_change_spf_nos; //type: uint32
                        Value not_interested_spf_nos; //type: uint32
                        Value lsp_regeneration_count; //type: uint32
                        Value lsp_regeneration_serial; //type: uint32
                        Value arch_spf_event; //type: uint32
                        Value arch_lsp_regeneration; //type: uint32


                    class Instance : public Entity
                    {
                        public:
                            Instance();
                            ~Instance();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value instance_id; //type: uint32
                            Value instance_state; //type: RcmdShowInstStateEnum
                            Value instance_deleted; //type: RcmdBoolYesNoEnum
                            Value fwd_referenced; //type: RcmdBoolYesNoEnum
                            Value last_update_time; //type: string
                            Value node_id; //type: uint32
                            Value spf_offset; //type: uint32
                            Value total_spf_nos; //type: uint32
                            Value arch_spf_run; //type: uint32
                            Value route_change_spf_nos; //type: uint32
                            Value no_route_change_spf_nos; //type: uint32
                            Value not_interested_spf_nos; //type: uint32
                            Value total_spt_nos; //type: uint32


                            class RcmdBoolYesNoEnum;
                            class RcmdBoolYesNoEnum;
                            class RcmdShowInstStateEnum;


                    }; // Rcmd::Process::Ospf::Process_::InstanceName::Instance


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Ospf::Process_::InstanceName::Instance> > instance;


                }; // Rcmd::Process::Ospf::Process_::InstanceName


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Ospf::Process_::InstanceName> > instance_name;
                    class RcmdProtocolIdEnum;


            }; // Rcmd::Process::Ospf::Process_


                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Ospf::Process_> > process;


        }; // Rcmd::Process::Ospf


        class Ldp : public Entity
        {
            public:
                Ldp();
                ~Ldp();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Process_ : public Entity
            {
                public:
                    Process_();
                    ~Process_();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value protocol_id; //type: RcmdProtocolIdEnum
                    Value process_name; //type: string


                class InstanceName : public Entity
                {
                    public:
                        InstanceName();
                        ~InstanceName();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value name; //type: string
                        Value last_update_time; //type: string
                        Value total_spf_nos; //type: uint32
                        Value route_change_spf_nos; //type: uint32
                        Value no_route_change_spf_nos; //type: uint32
                        Value not_interested_spf_nos; //type: uint32
                        Value lsp_regeneration_count; //type: uint32
                        Value lsp_regeneration_serial; //type: uint32
                        Value arch_spf_event; //type: uint32
                        Value arch_lsp_regeneration; //type: uint32


                    class Instance : public Entity
                    {
                        public:
                            Instance();
                            ~Instance();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value instance_id; //type: uint32
                            Value instance_state; //type: RcmdShowInstStateEnum
                            Value instance_deleted; //type: RcmdBoolYesNoEnum
                            Value fwd_referenced; //type: RcmdBoolYesNoEnum
                            Value last_update_time; //type: string
                            Value node_id; //type: uint32
                            Value spf_offset; //type: uint32
                            Value total_spf_nos; //type: uint32
                            Value arch_spf_run; //type: uint32
                            Value route_change_spf_nos; //type: uint32
                            Value no_route_change_spf_nos; //type: uint32
                            Value not_interested_spf_nos; //type: uint32
                            Value total_spt_nos; //type: uint32


                            class RcmdBoolYesNoEnum;
                            class RcmdBoolYesNoEnum;
                            class RcmdShowInstStateEnum;


                    }; // Rcmd::Process::Ldp::Process_::InstanceName::Instance


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Ldp::Process_::InstanceName::Instance> > instance;


                }; // Rcmd::Process::Ldp::Process_::InstanceName


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Ldp::Process_::InstanceName> > instance_name;
                    class RcmdProtocolIdEnum;


            }; // Rcmd::Process::Ldp::Process_


                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Ldp::Process_> > process;


        }; // Rcmd::Process::Ldp


            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Isis> isis;
            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Ldp> ldp;
            std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Ospf> ospf;


    }; // Rcmd::Process


        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Intf> intf;
        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis> isis;
        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp> ldp;
        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Memory> memory;
        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Node> node;
        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf> ospf;
        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process> process;
        std::unique_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server> server;


}; // Rcmd


class RcmdBagEnblDsblEnum : public Enum
{
    public:
        static const Enum::Value dsbl;
        static const Enum::Value enbl;

};

class RcmdBoolYesNoEnum : public Enum
{
    public:
        static const Enum::Value no;
        static const Enum::Value yes;

};

class RcmdPriorityLevelEnum : public Enum
{
    public:
        static const Enum::Value critical;
        static const Enum::Value high;
        static const Enum::Value medium;
        static const Enum::Value low;

};

class RcmdSpfStateEnum : public Enum
{
    public:
        static const Enum::Value complete;
        static const Enum::Value in_complete;
        static const Enum::Value collecting;
        static const Enum::Value no_route_change;

};

class RcmdShowIpfrrLfaEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value local;
        static const Enum::Value remote;

};

class RcmdShowPrcsStateEnum : public Enum
{
    public:
        static const Enum::Value success;
        static const Enum::Value cpu;
        static const Enum::Value memory;

};

class RcmdShowCompIdEnum : public Enum
{
    public:
        static const Enum::Value ospf;
        static const Enum::Value isis;
        static const Enum::Value un_known;

};

class RcmdShowLdpSessionStateEnum : public Enum
{
    public:
        static const Enum::Value gr_down;
        static const Enum::Value gr_converging;
        static const Enum::Value establishing;
        static const Enum::Value converging;
        static const Enum::Value converged;
        static const Enum::Value retrying;
        static const Enum::Value total;

};

class RcmdProtocolIdEnum : public Enum
{
    public:
        static const Enum::Value ospf;
        static const Enum::Value isis;
        static const Enum::Value na;

};

class RcmdShowLdpConvStateEnum : public Enum
{
    public:
        static const Enum::Value not_full;
        static const Enum::Value fully_covered;
        static const Enum::Value coverage_above_threshold;
        static const Enum::Value coverage_below_threshold;
        static const Enum::Value coverage_flapping;

};

class RcmdLinecardSpeedEnum : public Enum
{
    public:
        static const Enum::Value other;
        static const Enum::Value fastest;
        static const Enum::Value slowest;

};

class RcmdShowNodeEnum : public Enum
{
    public:
        static const Enum::Value unknown;
        static const Enum::Value lc;
        static const Enum::Value rp;

};

class RcmdShowLdpNeighbourStatusEnum : public Enum
{
    public:
        static const Enum::Value down;
        static const Enum::Value up;

};

class RcmdIsisSpfEnum : public Enum
{
    public:
        static const Enum::Value full;
        static const Enum::Value incremental;
        static const Enum::Value next_hop;
        static const Enum::Value partial_route;

};

class RcmdShowRoutePathChangeEnum : public Enum
{
    public:
        static const Enum::Value primary;
        static const Enum::Value backup;

};

class RcmdIsisLvlEnum : public Enum
{
    public:
        static const Enum::Value l1;
        static const Enum::Value l2;

};

class RcmdChangeEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value add;
        static const Enum::Value delete_;
        static const Enum::Value modify;
        static const Enum::Value no_change;

};

class RcmdShowRouteEnum : public Enum
{
    public:
        static const Enum::Value ospf;
        static const Enum::Value intra;
        static const Enum::Value inter;
        static const Enum::Value ext_1;
        static const Enum::Value ext_2;
        static const Enum::Value nssa_1;
        static const Enum::Value nssa_2;
        static const Enum::Value isis;
        static const Enum::Value l1_summary;
        static const Enum::Value l1;
        static const Enum::Value l2_summary;
        static const Enum::Value l2;
        static const Enum::Value inter_area_summary;
        static const Enum::Value inter_area;
        static const Enum::Value default_attached;

};

class RcmdLdpEventEnum : public Enum
{
    public:
        static const Enum::Value neighbor;
        static const Enum::Value adjacency;

};

class RcmdLsaEnum : public Enum
{
    public:
        static const Enum::Value unknown;
        static const Enum::Value router;
        static const Enum::Value network;
        static const Enum::Value summary;
        static const Enum::Value asbr;
        static const Enum::Value external;
        static const Enum::Value multicast;
        static const Enum::Value nssa;

};

class RcmdShowMemEnum : public Enum
{
    public:
        static const Enum::Value standard;
        static const Enum::Value chunk;
        static const Enum::Value edm;
        static const Enum::Value string;
        static const Enum::Value static_;
        static const Enum::Value unknown;

};

class RcmdBagEnableDisableEnum : public Enum
{
    public:
        static const Enum::Value disable;
        static const Enum::Value enable;

};

class RcmdShowInstStateEnum : public Enum
{
    public:
        static const Enum::Value unknown;
        static const Enum::Value active;
        static const Enum::Value in_active;
        static const Enum::Value na;

};

class RcmdLsChangeEnum : public Enum
{
    public:
        static const Enum::Value new_;
        static const Enum::Value delete_;
        static const Enum::Value modify;
        static const Enum::Value noop;

};

class RcmdShowIntfEventEnum : public Enum
{
    public:
        static const Enum::Value create;
        static const Enum::Value delete_;
        static const Enum::Value link_up;
        static const Enum::Value link_down;
        static const Enum::Value primary_address;
        static const Enum::Value secondary_address;
        static const Enum::Value ipv6_link_local_address;
        static const Enum::Value ipv6_global_address;
        static const Enum::Value mtu;
        static const Enum::Value band_width;
        static const Enum::Value ldp_sync;
        static const Enum::Value forward_reference;
        static const Enum::Value ldp_no_sync;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_RCMD_OPER_ */

