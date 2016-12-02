#ifndef _CISCO_IOS_XR_CLNS_ISIS_CFG_
#define _CISCO_IOS_XR_CLNS_ISIS_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

#include "Cisco_IOS_XR_clns_isis_datatypes.hpp"

namespace ydk {
namespace Cisco_IOS_XR_clns_isis_cfg {

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
        std::unique_ptr<Entity> clone_ptr() override;


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
                Value running; //type: empty
                Value log_adjacency_changes; //type: empty
                Value ignore_lsp_errors; //type: boolean
                Value is_type; //type: IsisConfigurableLevelsEnum
                Value tracing_mode; //type: IsisTracingModeEnum
                Value instance_id; //type: uint32
                Value dynamic_host_name; //type: boolean
                Value nsr; //type: empty
                Value log_pdu_drops; //type: empty


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




            }; // Isis::Instances::Instance::Srgb


            class LspGenerationIntervals : public Entity
            {
                public:
                    LspGenerationIntervals();
                    ~LspGenerationIntervals();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class LspGenerationInterval : public Entity
                {
                    public:
                        LspGenerationInterval();
                        ~LspGenerationInterval();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value level; //type: IsisInternalLevelEnum
                        Value maximum_wait; //type: uint32
                        Value initial_wait; //type: uint32
                        Value secondary_wait; //type: uint32


                        class IsisInternalLevelEnum;


                }; // Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval


                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval> > lsp_generation_interval;


            }; // Isis::Instances::Instance::LspGenerationIntervals


            class LspArrivalTimes : public Entity
            {
                public:
                    LspArrivalTimes();
                    ~LspArrivalTimes();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class LspArrivalTime : public Entity
                {
                    public:
                        LspArrivalTime();
                        ~LspArrivalTime();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value level; //type: IsisInternalLevelEnum
                        Value maximum_wait; //type: uint32
                        Value initial_wait; //type: uint32
                        Value secondary_wait; //type: uint32


                        class IsisInternalLevelEnum;


                }; // Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime


                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime> > lsp_arrival_time;


            }; // Isis::Instances::Instance::LspArrivalTimes


            class TraceBufferSize : public Entity
            {
                public:
                    TraceBufferSize();
                    ~TraceBufferSize();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value detailed; //type: uint32
                    Value standard; //type: uint32
                    Value severe; //type: uint32
                    Value hello; //type: uint32




            }; // Isis::Instances::Instance::TraceBufferSize


            class MaxLinkMetrics : public Entity
            {
                public:
                    MaxLinkMetrics();
                    ~MaxLinkMetrics();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class MaxLinkMetric : public Entity
                {
                    public:
                        MaxLinkMetric();
                        ~MaxLinkMetric();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value level; //type: IsisInternalLevelEnum


                        class IsisInternalLevelEnum;


                }; // Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric


                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric> > max_link_metric;


            }; // Isis::Instances::Instance::MaxLinkMetrics


            class Afs : public Entity
            {
                public:
                    Afs();
                    ~Afs();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


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
                        Value af_name; //type: IsisAddressFamilyEnum
                        Value saf_name; //type: IsisSubAddressFamilyEnum


                    class AfData : public Entity
                    {
                        public:
                            AfData();
                            ~AfData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value maximum_paths; //type: uint32
                            Value topology_id; //type: uint32
                            Value single_topology; //type: empty
                            Value adjacency_check; //type: IsisAdjCheckEnum
                            Value advertise_link_attributes; //type: boolean
                            Value apply_weight; //type: IsisApplyWeightEnum
                            Value default_admin_distance; //type: uint32
                            Value advertise_passive_only; //type: empty
                            Value ignore_attached_bit; //type: boolean
                            Value attached_bit; //type: IsisAttachedBitEnum
                            Value route_source_first_hop; //type: boolean


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
                                Value mpls; //type: IsisLabelPreferenceEnum


                            class PrefixSidMap : public Entity
                            {
                                public:
                                    PrefixSidMap();
                                    ~PrefixSidMap();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value advertise_local; //type: empty
                                    Value receive; //type: boolean




                            }; // Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap


                                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap> prefix_sid_map;
                                class IsisLabelPreferenceEnum;


                        }; // Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting


                        class MetricStyles : public Entity
                        {
                            public:
                                MetricStyles();
                                ~MetricStyles();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class MetricStyle : public Entity
                            {
                                public:
                                    MetricStyle();
                                    ~MetricStyle();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value level; //type: IsisInternalLevelEnum
                                    Value style; //type: IsisMetricStyleEnum
                                    Value transition_state; //type: IsisMetricStyleTransitionEnum


                                    class IsisInternalLevelEnum;
                                    class IsisMetricStyleEnum;
                                    class IsisMetricStyleTransitionEnum;


                            }; // Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyle


                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyle> > metric_style;


                        }; // Isis::Instances::Instance::Afs::Af::AfData::MetricStyles


                        class FrrTable : public Entity
                        {
                            public:
                                FrrTable();
                                ~FrrTable();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class FrrLoadSharings : public Entity
                            {
                                public:
                                    FrrLoadSharings();
                                    ~FrrLoadSharings();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class FrrLoadSharing : public Entity
                                {
                                    public:
                                        FrrLoadSharing();
                                        ~FrrLoadSharing();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value level; //type: IsisInternalLevelEnum
                                        Value load_sharing; //type: IsisfrrLoadSharingEnum


                                        class IsisInternalLevelEnum;
                                        class IsisfrrLoadSharingEnum;


                                }; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharing


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharing> > frr_load_sharing;


                            }; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings


                            class PriorityLimits : public Entity
                            {
                                public:
                                    PriorityLimits();
                                    ~PriorityLimits();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class PriorityLimit : public Entity
                                {
                                    public:
                                        PriorityLimit();
                                        ~PriorityLimit();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value level; //type: IsisInternalLevelEnum
                                        Value frr_type; //type: IsisfrrEnum
                                        Value priority; //type: IsisPrefixPriorityEnum


                                        class IsisfrrEnum;
                                        class IsisInternalLevelEnum;
                                        class IsisPrefixPriorityEnum;


                                }; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit> > priority_limit;


                            }; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits


                            class FrrRemoteLfaPrefixes : public Entity
                            {
                                public:
                                    FrrRemoteLfaPrefixes();
                                    ~FrrRemoteLfaPrefixes();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class FrrRemoteLfaPrefix : public Entity
                                {
                                    public:
                                        FrrRemoteLfaPrefix();
                                        ~FrrRemoteLfaPrefix();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value level; //type: IsisInternalLevelEnum
                                        Value prefix_list_name; //type: string


                                        class IsisInternalLevelEnum;


                                }; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix> > frr_remote_lfa_prefix;


                            }; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes


                            class FrrTiebreakers : public Entity
                            {
                                public:
                                    FrrTiebreakers();
                                    ~FrrTiebreakers();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class FrrTiebreaker : public Entity
                                {
                                    public:
                                        FrrTiebreaker();
                                        ~FrrTiebreaker();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value level; //type: IsisInternalLevelEnum
                                        Value tiebreaker; //type: IsisfrrTiebreakerEnum
                                        Value index_; //type: uint32


                                        class IsisInternalLevelEnum;
                                        class IsisfrrTiebreakerEnum;


                                }; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreaker


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreaker> > frr_tiebreaker;


                            }; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers


                            class FrrUseCandOnlies : public Entity
                            {
                                public:
                                    FrrUseCandOnlies();
                                    ~FrrUseCandOnlies();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class FrrUseCandOnly : public Entity
                                {
                                    public:
                                        FrrUseCandOnly();
                                        ~FrrUseCandOnly();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value level; //type: IsisInternalLevelEnum
                                        Value frr_type; //type: IsisfrrEnum


                                        class IsisfrrEnum;
                                        class IsisInternalLevelEnum;


                                }; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnly


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnly> > frr_use_cand_only;


                            }; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies


                                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings> frr_load_sharings;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes> frr_remote_lfa_prefixes;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers> frr_tiebreakers;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies> frr_use_cand_onlies;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits> priority_limits;


                        }; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable


                        class RouterId : public Entity
                        {
                            public:
                                RouterId();
                                ~RouterId();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value address; //type: string
                                Value interface_name; //type: string




                        }; // Isis::Instances::Instance::Afs::Af::AfData::RouterId


                        class SpfPrefixPriorities : public Entity
                        {
                            public:
                                SpfPrefixPriorities();
                                ~SpfPrefixPriorities();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class SpfPrefixPriority : public Entity
                            {
                                public:
                                    SpfPrefixPriority();
                                    ~SpfPrefixPriority();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value level; //type: IsisInternalLevelEnum
                                    Value prefix_priority_type; //type: IsisPrefixPriorityEnum
                                    Value admin_tag; //type: uint32
                                    Value access_list_name; //type: string


                                    class IsisInternalLevelEnum;
                                    class IsisPrefixPriorityEnum;


                            }; // Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriority


                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriority> > spf_prefix_priority;


                        }; // Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities


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


                            class SummaryPrefix : public Entity
                            {
                                public:
                                    SummaryPrefix();
                                    ~SummaryPrefix();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value address_prefix; //type: string
                                    Value tag; //type: uint32
                                    Value level; //type: uint32




                            }; // Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefix


                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefix> > summary_prefix;


                        }; // Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes


                        class MicroLoopAvoidance : public Entity
                        {
                            public:
                                MicroLoopAvoidance();
                                ~MicroLoopAvoidance();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value enable; //type: IsisMicroLoopAvoidanceEnum
                                Value rib_update_delay; //type: uint32


                                class IsisMicroLoopAvoidanceEnum;


                        }; // Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance


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




                            }; // Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable


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




                                }; // Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterface


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                            }; // Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces


                                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable> enable;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces> exclude_interfaces;


                        }; // Isis::Instances::Instance::Afs::Af::AfData::Ucmp


                        class MaxRedistPrefixes : public Entity
                        {
                            public:
                                MaxRedistPrefixes();
                                ~MaxRedistPrefixes();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class MaxRedistPrefix : public Entity
                            {
                                public:
                                    MaxRedistPrefix();
                                    ~MaxRedistPrefix();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value level; //type: IsisInternalLevelEnum
                                    Value prefix_limit; //type: uint32


                                    class IsisInternalLevelEnum;


                            }; // Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefix


                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefix> > max_redist_prefix;


                        }; // Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes


                        class Propagations : public Entity
                        {
                            public:
                                Propagations();
                                ~Propagations();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Propagation : public Entity
                            {
                                public:
                                    Propagation();
                                    ~Propagation();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value source_level; //type: IsisInternalLevelEnum
                                    Value destination_level; //type: IsisInternalLevelEnum
                                    Value route_policy_name; //type: string


                                    class IsisInternalLevelEnum;
                                    class IsisInternalLevelEnum;


                            }; // Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagation


                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagation> > propagation;


                        }; // Isis::Instances::Instance::Afs::Af::AfData::Propagations


                        class Redistributions : public Entity
                        {
                            public:
                                Redistributions();
                                ~Redistributions();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


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
                                    Value protocol_name; //type: IsisRedistProtoEnum


                                class ConnectedOrStaticOrRipOrSubscriberOrMobile : public Entity
                                {
                                    public:
                                        ConnectedOrStaticOrRipOrSubscriberOrMobile();
                                        ~ConnectedOrStaticOrRipOrSubscriberOrMobile();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value metric; //type: uint32
                                        Value levels; //type: IsisConfigurableLevelsEnum
                                        Value route_policy_name; //type: string
                                        Value metric_type; //type: IsisMetricEnum
                                        Value ospf_route_type; //type: int32


                                        class IsisConfigurableLevelsEnum;
                                        class IsisMetricEnum;


                                }; // Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile


                                class OspfOrOspfv3OrIsisOrApplication : public Entity
                                {
                                    public:
                                        OspfOrOspfv3OrIsisOrApplication();
                                        ~OspfOrOspfv3OrIsisOrApplication();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value instance_name; //type: string
                                        Value metric; //type: uint32
                                        Value levels; //type: IsisConfigurableLevelsEnum
                                        Value route_policy_name; //type: string
                                        Value metric_type; //type: IsisMetricEnum
                                        Value ospf_route_type; //type: int32


                                        class IsisConfigurableLevelsEnum;
                                        class IsisMetricEnum;


                                }; // Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication


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
                                        Value as_xx; //type: uint32
                                        Value as_yy; //type: uint32
                                        Value metric; //type: uint32
                                        Value levels; //type: IsisConfigurableLevelsEnum
                                        Value route_policy_name; //type: string
                                        Value metric_type; //type: IsisMetricEnum
                                        Value ospf_route_type; //type: int32


                                        class IsisConfigurableLevelsEnum;
                                        class IsisMetricEnum;


                                }; // Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Bgp


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
                                        Value as_zz; //type: uint32
                                        Value metric; //type: uint32
                                        Value levels; //type: IsisConfigurableLevelsEnum
                                        Value route_policy_name; //type: string
                                        Value metric_type; //type: IsisMetricEnum
                                        Value ospf_route_type; //type: int32


                                        class IsisConfigurableLevelsEnum;
                                        class IsisMetricEnum;


                                }; // Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Eigrp


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Bgp> > bgp;
                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile> connected_or_static_or_rip_or_subscriber_or_mobile; // presence node
                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Eigrp> > eigrp;
                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication> > ospf_or_ospfv3_or_isis_or_application;
                                    class IsisRedistProtoEnum;


                            }; // Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution


                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution> > redistribution;


                        }; // Isis::Instances::Instance::Afs::Af::AfData::Redistributions


                        class SpfPeriodicIntervals : public Entity
                        {
                            public:
                                SpfPeriodicIntervals();
                                ~SpfPeriodicIntervals();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class SpfPeriodicInterval : public Entity
                            {
                                public:
                                    SpfPeriodicInterval();
                                    ~SpfPeriodicInterval();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value level; //type: IsisInternalLevelEnum
                                    Value periodic_interval; //type: uint32


                                    class IsisInternalLevelEnum;


                            }; // Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicInterval


                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicInterval> > spf_periodic_interval;


                        }; // Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals


                        class SpfIntervals : public Entity
                        {
                            public:
                                SpfIntervals();
                                ~SpfIntervals();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class SpfInterval : public Entity
                            {
                                public:
                                    SpfInterval();
                                    ~SpfInterval();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value level; //type: IsisInternalLevelEnum
                                    Value maximum_wait; //type: uint32
                                    Value initial_wait; //type: uint32
                                    Value secondary_wait; //type: uint32


                                    class IsisInternalLevelEnum;


                            }; // Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfInterval


                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfInterval> > spf_interval;


                        }; // Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals


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
                                Value track_ip_frr; //type: empty
                                Value prefix_list; //type: string




                        }; // Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence


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
                                Value use_policy; //type: boolean
                                Value policy_name; //type: string
                                Value external; //type: empty




                        }; // Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation


                        class AdminDistances : public Entity
                        {
                            public:
                                AdminDistances();
                                ~AdminDistances();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class AdminDistance : public Entity
                            {
                                public:
                                    AdminDistance();
                                    ~AdminDistance();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value address_prefix; //type: string
                                    Value distance; //type: uint32
                                    Value prefix_list; //type: string




                            }; // Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistance


                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistance> > admin_distance;


                        }; // Isis::Instances::Instance::Afs::Af::AfData::AdminDistances


                        class Ispf : public Entity
                        {
                            public:
                                Ispf();
                                ~Ispf();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class States : public Entity
                            {
                                public:
                                    States();
                                    ~States();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class State : public Entity
                                {
                                    public:
                                        State();
                                        ~State();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value level; //type: IsisInternalLevelEnum
                                        Value state; //type: IsisispfStateEnum


                                        class IsisInternalLevelEnum;
                                        class IsisispfStateEnum;


                                }; // Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::State


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::State> > state;


                            }; // Isis::Instances::Instance::Afs::Af::AfData::Ispf::States


                                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Ispf::States> states;


                        }; // Isis::Instances::Instance::Afs::Af::AfData::Ispf


                        class MplsLdpGlobal : public Entity
                        {
                            public:
                                MplsLdpGlobal();
                                ~MplsLdpGlobal();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value auto_config; //type: boolean




                        }; // Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal


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
                                Value level; //type: IsisConfigurableLevelsEnum
                                Value multicast_intact; //type: empty


                            class RouterId : public Entity
                            {
                                public:
                                    RouterId();
                                    ~RouterId();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value address; //type: string
                                    Value interface_name; //type: string




                            }; // Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId


                                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId> router_id;
                                class IsisConfigurableLevelsEnum;


                        }; // Isis::Instances::Instance::Afs::Af::AfData::Mpls


                        class Metrics : public Entity
                        {
                            public:
                                Metrics();
                                ~Metrics();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Metric : public Entity
                            {
                                public:
                                    Metric();
                                    ~Metric();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value level; //type: IsisInternalLevelEnum
                                    Value metric; //type: one of uint32, enumeration


                                    class IsisInternalLevelEnum;
                                    class MetricEnum;


                            }; // Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric


                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric> > metric;


                        }; // Isis::Instances::Instance::Afs::Af::AfData::Metrics


                        class Weights : public Entity
                        {
                            public:
                                Weights();
                                ~Weights();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Weight : public Entity
                            {
                                public:
                                    Weight();
                                    ~Weight();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value level; //type: IsisInternalLevelEnum
                                    Value weight; //type: uint32


                                    class IsisInternalLevelEnum;


                            }; // Isis::Instances::Instance::Afs::Af::AfData::Weights::Weight


                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Weights::Weight> > weight;


                        }; // Isis::Instances::Instance::Afs::Af::AfData::Weights


                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::AdminDistances> admin_distances;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation> default_information;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable> frr_table;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Ispf> ispf;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes> max_redist_prefixes;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::MetricStyles> metric_styles;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Metrics> metrics;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance> micro_loop_avoidance;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence> monitor_convergence;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Mpls> mpls;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal> mpls_ldp_global;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Propagations> propagations;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Redistributions> redistributions;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::RouterId> router_id;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting> segment_routing;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals> spf_intervals;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals> spf_periodic_intervals;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities> spf_prefix_priorities;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes> summary_prefixes;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Ucmp> ucmp;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Weights> weights;
                            class IsisAdjCheckEnum;
                            class IsisApplyWeightEnum;
                            class IsisAttachedBitEnum;


                    }; // Isis::Instances::Instance::Afs::Af::AfData


                    class TopologyName : public Entity
                    {
                        public:
                            TopologyName();
                            ~TopologyName();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value topology_name; //type: string
                            Value maximum_paths; //type: uint32
                            Value topology_id; //type: uint32
                            Value single_topology; //type: empty
                            Value adjacency_check; //type: IsisAdjCheckEnum
                            Value advertise_link_attributes; //type: boolean
                            Value apply_weight; //type: IsisApplyWeightEnum
                            Value default_admin_distance; //type: uint32
                            Value advertise_passive_only; //type: empty
                            Value ignore_attached_bit; //type: boolean
                            Value attached_bit; //type: IsisAttachedBitEnum
                            Value route_source_first_hop; //type: boolean


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
                                Value mpls; //type: IsisLabelPreferenceEnum


                            class PrefixSidMap : public Entity
                            {
                                public:
                                    PrefixSidMap();
                                    ~PrefixSidMap();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value advertise_local; //type: empty
                                    Value receive; //type: boolean




                            }; // Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap


                                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap> prefix_sid_map;
                                class IsisLabelPreferenceEnum;


                        }; // Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting


                        class MetricStyles : public Entity
                        {
                            public:
                                MetricStyles();
                                ~MetricStyles();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class MetricStyle : public Entity
                            {
                                public:
                                    MetricStyle();
                                    ~MetricStyle();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value level; //type: IsisInternalLevelEnum
                                    Value style; //type: IsisMetricStyleEnum
                                    Value transition_state; //type: IsisMetricStyleTransitionEnum


                                    class IsisInternalLevelEnum;
                                    class IsisMetricStyleEnum;
                                    class IsisMetricStyleTransitionEnum;


                            }; // Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyle


                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyle> > metric_style;


                        }; // Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles


                        class FrrTable : public Entity
                        {
                            public:
                                FrrTable();
                                ~FrrTable();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class FrrLoadSharings : public Entity
                            {
                                public:
                                    FrrLoadSharings();
                                    ~FrrLoadSharings();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class FrrLoadSharing : public Entity
                                {
                                    public:
                                        FrrLoadSharing();
                                        ~FrrLoadSharing();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value level; //type: IsisInternalLevelEnum
                                        Value load_sharing; //type: IsisfrrLoadSharingEnum


                                        class IsisInternalLevelEnum;
                                        class IsisfrrLoadSharingEnum;


                                }; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharing


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharing> > frr_load_sharing;


                            }; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings


                            class PriorityLimits : public Entity
                            {
                                public:
                                    PriorityLimits();
                                    ~PriorityLimits();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class PriorityLimit : public Entity
                                {
                                    public:
                                        PriorityLimit();
                                        ~PriorityLimit();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value level; //type: IsisInternalLevelEnum
                                        Value frr_type; //type: IsisfrrEnum
                                        Value priority; //type: IsisPrefixPriorityEnum


                                        class IsisfrrEnum;
                                        class IsisInternalLevelEnum;
                                        class IsisPrefixPriorityEnum;


                                }; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit> > priority_limit;


                            }; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits


                            class FrrRemoteLfaPrefixes : public Entity
                            {
                                public:
                                    FrrRemoteLfaPrefixes();
                                    ~FrrRemoteLfaPrefixes();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class FrrRemoteLfaPrefix : public Entity
                                {
                                    public:
                                        FrrRemoteLfaPrefix();
                                        ~FrrRemoteLfaPrefix();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value level; //type: IsisInternalLevelEnum
                                        Value prefix_list_name; //type: string


                                        class IsisInternalLevelEnum;


                                }; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix> > frr_remote_lfa_prefix;


                            }; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes


                            class FrrTiebreakers : public Entity
                            {
                                public:
                                    FrrTiebreakers();
                                    ~FrrTiebreakers();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class FrrTiebreaker : public Entity
                                {
                                    public:
                                        FrrTiebreaker();
                                        ~FrrTiebreaker();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value level; //type: IsisInternalLevelEnum
                                        Value tiebreaker; //type: IsisfrrTiebreakerEnum
                                        Value index_; //type: uint32


                                        class IsisInternalLevelEnum;
                                        class IsisfrrTiebreakerEnum;


                                }; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreaker


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreaker> > frr_tiebreaker;


                            }; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers


                            class FrrUseCandOnlies : public Entity
                            {
                                public:
                                    FrrUseCandOnlies();
                                    ~FrrUseCandOnlies();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class FrrUseCandOnly : public Entity
                                {
                                    public:
                                        FrrUseCandOnly();
                                        ~FrrUseCandOnly();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value level; //type: IsisInternalLevelEnum
                                        Value frr_type; //type: IsisfrrEnum


                                        class IsisfrrEnum;
                                        class IsisInternalLevelEnum;


                                }; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnly


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnly> > frr_use_cand_only;


                            }; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies


                                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings> frr_load_sharings;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes> frr_remote_lfa_prefixes;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers> frr_tiebreakers;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies> frr_use_cand_onlies;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits> priority_limits;


                        }; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable


                        class RouterId : public Entity
                        {
                            public:
                                RouterId();
                                ~RouterId();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value address; //type: string
                                Value interface_name; //type: string




                        }; // Isis::Instances::Instance::Afs::Af::TopologyName::RouterId


                        class SpfPrefixPriorities : public Entity
                        {
                            public:
                                SpfPrefixPriorities();
                                ~SpfPrefixPriorities();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class SpfPrefixPriority : public Entity
                            {
                                public:
                                    SpfPrefixPriority();
                                    ~SpfPrefixPriority();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value level; //type: IsisInternalLevelEnum
                                    Value prefix_priority_type; //type: IsisPrefixPriorityEnum
                                    Value admin_tag; //type: uint32
                                    Value access_list_name; //type: string


                                    class IsisInternalLevelEnum;
                                    class IsisPrefixPriorityEnum;


                            }; // Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriority


                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriority> > spf_prefix_priority;


                        }; // Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities


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


                            class SummaryPrefix : public Entity
                            {
                                public:
                                    SummaryPrefix();
                                    ~SummaryPrefix();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value address_prefix; //type: string
                                    Value tag; //type: uint32
                                    Value level; //type: uint32




                            }; // Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefix


                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefix> > summary_prefix;


                        }; // Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes


                        class MicroLoopAvoidance : public Entity
                        {
                            public:
                                MicroLoopAvoidance();
                                ~MicroLoopAvoidance();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value enable; //type: IsisMicroLoopAvoidanceEnum
                                Value rib_update_delay; //type: uint32


                                class IsisMicroLoopAvoidanceEnum;


                        }; // Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance


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




                            }; // Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable


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




                                }; // Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterface


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                            }; // Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces


                                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable> enable;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces> exclude_interfaces;


                        }; // Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp


                        class MaxRedistPrefixes : public Entity
                        {
                            public:
                                MaxRedistPrefixes();
                                ~MaxRedistPrefixes();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class MaxRedistPrefix : public Entity
                            {
                                public:
                                    MaxRedistPrefix();
                                    ~MaxRedistPrefix();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value level; //type: IsisInternalLevelEnum
                                    Value prefix_limit; //type: uint32


                                    class IsisInternalLevelEnum;


                            }; // Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefix


                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefix> > max_redist_prefix;


                        }; // Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes


                        class Propagations : public Entity
                        {
                            public:
                                Propagations();
                                ~Propagations();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Propagation : public Entity
                            {
                                public:
                                    Propagation();
                                    ~Propagation();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value source_level; //type: IsisInternalLevelEnum
                                    Value destination_level; //type: IsisInternalLevelEnum
                                    Value route_policy_name; //type: string


                                    class IsisInternalLevelEnum;
                                    class IsisInternalLevelEnum;


                            }; // Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagation


                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagation> > propagation;


                        }; // Isis::Instances::Instance::Afs::Af::TopologyName::Propagations


                        class Redistributions : public Entity
                        {
                            public:
                                Redistributions();
                                ~Redistributions();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


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
                                    Value protocol_name; //type: IsisRedistProtoEnum


                                class ConnectedOrStaticOrRipOrSubscriberOrMobile : public Entity
                                {
                                    public:
                                        ConnectedOrStaticOrRipOrSubscriberOrMobile();
                                        ~ConnectedOrStaticOrRipOrSubscriberOrMobile();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value metric; //type: uint32
                                        Value levels; //type: IsisConfigurableLevelsEnum
                                        Value route_policy_name; //type: string
                                        Value metric_type; //type: IsisMetricEnum
                                        Value ospf_route_type; //type: int32


                                        class IsisConfigurableLevelsEnum;
                                        class IsisMetricEnum;


                                }; // Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile


                                class OspfOrOspfv3OrIsisOrApplication : public Entity
                                {
                                    public:
                                        OspfOrOspfv3OrIsisOrApplication();
                                        ~OspfOrOspfv3OrIsisOrApplication();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value instance_name; //type: string
                                        Value metric; //type: uint32
                                        Value levels; //type: IsisConfigurableLevelsEnum
                                        Value route_policy_name; //type: string
                                        Value metric_type; //type: IsisMetricEnum
                                        Value ospf_route_type; //type: int32


                                        class IsisConfigurableLevelsEnum;
                                        class IsisMetricEnum;


                                }; // Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication


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
                                        Value as_xx; //type: uint32
                                        Value as_yy; //type: uint32
                                        Value metric; //type: uint32
                                        Value levels; //type: IsisConfigurableLevelsEnum
                                        Value route_policy_name; //type: string
                                        Value metric_type; //type: IsisMetricEnum
                                        Value ospf_route_type; //type: int32


                                        class IsisConfigurableLevelsEnum;
                                        class IsisMetricEnum;


                                }; // Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Bgp


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
                                        Value as_zz; //type: uint32
                                        Value metric; //type: uint32
                                        Value levels; //type: IsisConfigurableLevelsEnum
                                        Value route_policy_name; //type: string
                                        Value metric_type; //type: IsisMetricEnum
                                        Value ospf_route_type; //type: int32


                                        class IsisConfigurableLevelsEnum;
                                        class IsisMetricEnum;


                                }; // Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Eigrp


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Bgp> > bgp;
                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile> connected_or_static_or_rip_or_subscriber_or_mobile; // presence node
                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Eigrp> > eigrp;
                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication> > ospf_or_ospfv3_or_isis_or_application;
                                    class IsisRedistProtoEnum;


                            }; // Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution


                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution> > redistribution;


                        }; // Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions


                        class SpfPeriodicIntervals : public Entity
                        {
                            public:
                                SpfPeriodicIntervals();
                                ~SpfPeriodicIntervals();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class SpfPeriodicInterval : public Entity
                            {
                                public:
                                    SpfPeriodicInterval();
                                    ~SpfPeriodicInterval();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value level; //type: IsisInternalLevelEnum
                                    Value periodic_interval; //type: uint32


                                    class IsisInternalLevelEnum;


                            }; // Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicInterval


                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicInterval> > spf_periodic_interval;


                        }; // Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals


                        class SpfIntervals : public Entity
                        {
                            public:
                                SpfIntervals();
                                ~SpfIntervals();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class SpfInterval : public Entity
                            {
                                public:
                                    SpfInterval();
                                    ~SpfInterval();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value level; //type: IsisInternalLevelEnum
                                    Value maximum_wait; //type: uint32
                                    Value initial_wait; //type: uint32
                                    Value secondary_wait; //type: uint32


                                    class IsisInternalLevelEnum;


                            }; // Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfInterval


                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfInterval> > spf_interval;


                        }; // Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals


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
                                Value track_ip_frr; //type: empty
                                Value prefix_list; //type: string




                        }; // Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence


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
                                Value use_policy; //type: boolean
                                Value policy_name; //type: string
                                Value external; //type: empty




                        }; // Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation


                        class AdminDistances : public Entity
                        {
                            public:
                                AdminDistances();
                                ~AdminDistances();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class AdminDistance : public Entity
                            {
                                public:
                                    AdminDistance();
                                    ~AdminDistance();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value address_prefix; //type: string
                                    Value distance; //type: uint32
                                    Value prefix_list; //type: string




                            }; // Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistance


                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistance> > admin_distance;


                        }; // Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances


                        class Ispf : public Entity
                        {
                            public:
                                Ispf();
                                ~Ispf();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class States : public Entity
                            {
                                public:
                                    States();
                                    ~States();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class State : public Entity
                                {
                                    public:
                                        State();
                                        ~State();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value level; //type: IsisInternalLevelEnum
                                        Value state; //type: IsisispfStateEnum


                                        class IsisInternalLevelEnum;
                                        class IsisispfStateEnum;


                                }; // Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::State


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::State> > state;


                            }; // Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States


                                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States> states;


                        }; // Isis::Instances::Instance::Afs::Af::TopologyName::Ispf


                        class MplsLdpGlobal : public Entity
                        {
                            public:
                                MplsLdpGlobal();
                                ~MplsLdpGlobal();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value auto_config; //type: boolean




                        }; // Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal


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
                                Value level; //type: IsisConfigurableLevelsEnum
                                Value multicast_intact; //type: empty


                            class RouterId : public Entity
                            {
                                public:
                                    RouterId();
                                    ~RouterId();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value address; //type: string
                                    Value interface_name; //type: string




                            }; // Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId


                                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId> router_id;
                                class IsisConfigurableLevelsEnum;


                        }; // Isis::Instances::Instance::Afs::Af::TopologyName::Mpls


                        class Metrics : public Entity
                        {
                            public:
                                Metrics();
                                ~Metrics();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Metric : public Entity
                            {
                                public:
                                    Metric();
                                    ~Metric();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value level; //type: IsisInternalLevelEnum
                                    Value metric; //type: one of uint32, enumeration


                                    class IsisInternalLevelEnum;
                                    class MetricEnum;


                            }; // Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric


                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric> > metric;


                        }; // Isis::Instances::Instance::Afs::Af::TopologyName::Metrics


                        class Weights : public Entity
                        {
                            public:
                                Weights();
                                ~Weights();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Weight : public Entity
                            {
                                public:
                                    Weight();
                                    ~Weight();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value level; //type: IsisInternalLevelEnum
                                    Value weight; //type: uint32


                                    class IsisInternalLevelEnum;


                            }; // Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weight


                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weight> > weight;


                        }; // Isis::Instances::Instance::Afs::Af::TopologyName::Weights


                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances> admin_distances;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation> default_information;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable> frr_table;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Ispf> ispf;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes> max_redist_prefixes;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles> metric_styles;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Metrics> metrics;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance> micro_loop_avoidance;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence> monitor_convergence;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Mpls> mpls;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal> mpls_ldp_global;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Propagations> propagations;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions> redistributions;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::RouterId> router_id;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting> segment_routing;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals> spf_intervals;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals> spf_periodic_intervals;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities> spf_prefix_priorities;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes> summary_prefixes;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp> ucmp;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Weights> weights;
                            class IsisAdjCheckEnum;
                            class IsisApplyWeightEnum;
                            class IsisAttachedBitEnum;


                    }; // Isis::Instances::Instance::Afs::Af::TopologyName


                        std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData> af_data; // presence node
                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName> > topology_name;
                        class IsisAddressFamilyEnum;
                        class IsisSubAddressFamilyEnum;


                }; // Isis::Instances::Instance::Afs::Af


                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af> > af;


            }; // Isis::Instances::Instance::Afs


            class LspRefreshIntervals : public Entity
            {
                public:
                    LspRefreshIntervals();
                    ~LspRefreshIntervals();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class LspRefreshInterval : public Entity
                {
                    public:
                        LspRefreshInterval();
                        ~LspRefreshInterval();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value level; //type: IsisInternalLevelEnum
                        Value interval; //type: uint32


                        class IsisInternalLevelEnum;


                }; // Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval


                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval> > lsp_refresh_interval;


            }; // Isis::Instances::Instance::LspRefreshIntervals


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
                    Value dist_inst_id; //type: uint32
                    Value level; //type: IsisConfigurableLevelsEnum
                    Value dist_throttle; //type: uint32


                    class IsisConfigurableLevelsEnum;


            }; // Isis::Instances::Instance::Distribute


            class LspAcceptPasswords : public Entity
            {
                public:
                    LspAcceptPasswords();
                    ~LspAcceptPasswords();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class LspAcceptPassword : public Entity
                {
                    public:
                        LspAcceptPassword();
                        ~LspAcceptPassword();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value level; //type: IsisInternalLevelEnum
                        Value password; //type: string


                        class IsisInternalLevelEnum;


                }; // Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword


                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword> > lsp_accept_password;


            }; // Isis::Instances::Instance::LspAcceptPasswords


            class LspMtus : public Entity
            {
                public:
                    LspMtus();
                    ~LspMtus();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class LspMtu : public Entity
                {
                    public:
                        LspMtu();
                        ~LspMtu();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value level; //type: IsisInternalLevelEnum
                        Value mtu; //type: uint32


                        class IsisInternalLevelEnum;


                }; // Isis::Instances::Instance::LspMtus::LspMtu


                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspMtus::LspMtu> > lsp_mtu;


            }; // Isis::Instances::Instance::LspMtus


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
                    Value flavor; //type: IsisNsfFlavorEnum
                    Value interface_timer; //type: uint32
                    Value max_interface_timer_expiry; //type: uint32
                    Value lifetime; //type: uint32


                    class IsisNsfFlavorEnum;


            }; // Isis::Instances::Instance::Nsf


            class LinkGroups : public Entity
            {
                public:
                    LinkGroups();
                    ~LinkGroups();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class LinkGroup : public Entity
                {
                    public:
                        LinkGroup();
                        ~LinkGroup();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value link_group_name; //type: string
                        Value enable; //type: empty
                        Value metric_offset; //type: uint32
                        Value revert_members; //type: uint32
                        Value minimum_members; //type: uint32




                }; // Isis::Instances::Instance::LinkGroups::LinkGroup


                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LinkGroups::LinkGroup> > link_group;


            }; // Isis::Instances::Instance::LinkGroups


            class LspCheckIntervals : public Entity
            {
                public:
                    LspCheckIntervals();
                    ~LspCheckIntervals();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class LspCheckInterval : public Entity
                {
                    public:
                        LspCheckInterval();
                        ~LspCheckInterval();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value level; //type: IsisInternalLevelEnum
                        Value interval; //type: uint32


                        class IsisInternalLevelEnum;


                }; // Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval


                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval> > lsp_check_interval;


            }; // Isis::Instances::Instance::LspCheckIntervals


            class LspPasswords : public Entity
            {
                public:
                    LspPasswords();
                    ~LspPasswords();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class LspPassword : public Entity
                {
                    public:
                        LspPassword();
                        ~LspPassword();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value level; //type: IsisInternalLevelEnum
                        Value algorithm; //type: IsisAuthenticationAlgorithmEnum
                        Value failure_mode; //type: IsisAuthenticationFailureModeEnum
                        Value authentication_type; //type: IsisSnpAuthEnum
                        Value password; //type: string


                        class IsisInternalLevelEnum;
                        class IsisAuthenticationAlgorithmEnum;
                        class IsisSnpAuthEnum;
                        class IsisAuthenticationFailureModeEnum;


                }; // Isis::Instances::Instance::LspPasswords::LspPassword


                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspPasswords::LspPassword> > lsp_password;


            }; // Isis::Instances::Instance::LspPasswords


            class Nets : public Entity
            {
                public:
                    Nets();
                    ~Nets();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Net : public Entity
                {
                    public:
                        Net();
                        ~Net();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value net_name; //type: string




                }; // Isis::Instances::Instance::Nets::Net


                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Nets::Net> > net;


            }; // Isis::Instances::Instance::Nets


            class LspLifetimes : public Entity
            {
                public:
                    LspLifetimes();
                    ~LspLifetimes();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class LspLifetime : public Entity
                {
                    public:
                        LspLifetime();
                        ~LspLifetime();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value level; //type: IsisInternalLevelEnum
                        Value lifetime; //type: uint32


                        class IsisInternalLevelEnum;


                }; // Isis::Instances::Instance::LspLifetimes::LspLifetime


                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspLifetimes::LspLifetime> > lsp_lifetime;


            }; // Isis::Instances::Instance::LspLifetimes


            class OverloadBits : public Entity
            {
                public:
                    OverloadBits();
                    ~OverloadBits();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class OverloadBit : public Entity
                {
                    public:
                        OverloadBit();
                        ~OverloadBit();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value level; //type: IsisInternalLevelEnum
                        Value overload_bit_mode; //type: IsisOverloadBitModeEnum
                        Value hippity_period; //type: uint32
                        Value external_adv_type; //type: IsisAdvTypeExternalEnum
                        Value inter_level_adv_type; //type: IsisAdvTypeInterLevelEnum


                        class IsisInternalLevelEnum;
                        class IsisAdvTypeExternalEnum;
                        class IsisAdvTypeInterLevelEnum;
                        class IsisOverloadBitModeEnum;


                }; // Isis::Instances::Instance::OverloadBits::OverloadBit


                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::OverloadBits::OverloadBit> > overload_bit;


            }; // Isis::Instances::Instance::OverloadBits


            class Interfaces : public Entity
            {
                public:
                    Interfaces();
                    ~Interfaces();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Interface : public Entity
                {
                    public:
                        Interface();
                        ~Interface();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface_name; //type: string
                        Value running; //type: empty
                        Value circuit_type; //type: IsisConfigurableLevelsEnum
                        Value point_to_point; //type: empty
                        Value state; //type: IsisInterfaceStateEnum
                        Value mesh_group; //type: one of uint32, enumeration
                        Value link_down_fast_detect; //type: empty


                    class LspRetransmitThrottleIntervals : public Entity
                    {
                        public:
                            LspRetransmitThrottleIntervals();
                            ~LspRetransmitThrottleIntervals();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class LspRetransmitThrottleInterval : public Entity
                        {
                            public:
                                LspRetransmitThrottleInterval();
                                ~LspRetransmitThrottleInterval();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value level; //type: IsisInternalLevelEnum
                                Value interval; //type: uint32


                                class IsisInternalLevelEnum;


                        }; // Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval


                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval> > lsp_retransmit_throttle_interval;


                    }; // Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals


                    class LspRetransmitIntervals : public Entity
                    {
                        public:
                            LspRetransmitIntervals();
                            ~LspRetransmitIntervals();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class LspRetransmitInterval : public Entity
                        {
                            public:
                                LspRetransmitInterval();
                                ~LspRetransmitInterval();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value level; //type: IsisInternalLevelEnum
                                Value interval; //type: uint32


                                class IsisInternalLevelEnum;


                        }; // Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval


                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval> > lsp_retransmit_interval;


                    }; // Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals


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
                            Value enable_ipv6; //type: boolean
                            Value enable_ipv4; //type: boolean
                            Value interval; //type: uint32
                            Value detection_multiplier; //type: uint32




                    }; // Isis::Instances::Instance::Interfaces::Interface::Bfd


                    class Priorities : public Entity
                    {
                        public:
                            Priorities();
                            ~Priorities();

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
                                Value level; //type: IsisInternalLevelEnum
                                Value priority_value; //type: uint32


                                class IsisInternalLevelEnum;


                        }; // Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority


                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority> > priority;


                    }; // Isis::Instances::Instance::Interfaces::Interface::Priorities


                    class HelloAcceptPasswords : public Entity
                    {
                        public:
                            HelloAcceptPasswords();
                            ~HelloAcceptPasswords();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class HelloAcceptPassword : public Entity
                        {
                            public:
                                HelloAcceptPassword();
                                ~HelloAcceptPassword();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value level; //type: IsisInternalLevelEnum
                                Value password; //type: string


                                class IsisInternalLevelEnum;


                        }; // Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPassword


                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPassword> > hello_accept_password;


                    }; // Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords


                    class HelloPasswords : public Entity
                    {
                        public:
                            HelloPasswords();
                            ~HelloPasswords();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class HelloPassword : public Entity
                        {
                            public:
                                HelloPassword();
                                ~HelloPassword();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value level; //type: IsisInternalLevelEnum
                                Value algorithm; //type: IsisAuthenticationAlgorithmEnum
                                Value failure_mode; //type: IsisAuthenticationFailureModeEnum
                                Value password; //type: string


                                class IsisInternalLevelEnum;
                                class IsisAuthenticationAlgorithmEnum;
                                class IsisAuthenticationFailureModeEnum;


                        }; // Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPassword


                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPassword> > hello_password;


                    }; // Isis::Instances::Instance::Interfaces::Interface::HelloPasswords


                    class HelloPaddings : public Entity
                    {
                        public:
                            HelloPaddings();
                            ~HelloPaddings();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class HelloPadding : public Entity
                        {
                            public:
                                HelloPadding();
                                ~HelloPadding();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value level; //type: IsisInternalLevelEnum
                                Value padding_type; //type: IsisHelloPaddingEnum


                                class IsisInternalLevelEnum;
                                class IsisHelloPaddingEnum;


                        }; // Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPadding


                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPadding> > hello_padding;


                    }; // Isis::Instances::Instance::Interfaces::Interface::HelloPaddings


                    class HelloMultipliers : public Entity
                    {
                        public:
                            HelloMultipliers();
                            ~HelloMultipliers();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class HelloMultiplier : public Entity
                        {
                            public:
                                HelloMultiplier();
                                ~HelloMultiplier();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value level; //type: IsisInternalLevelEnum
                                Value multiplier; //type: uint32


                                class IsisInternalLevelEnum;


                        }; // Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultiplier


                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultiplier> > hello_multiplier;


                    }; // Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers


                    class LspFastFloodThresholds : public Entity
                    {
                        public:
                            LspFastFloodThresholds();
                            ~LspFastFloodThresholds();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class LspFastFloodThreshold : public Entity
                        {
                            public:
                                LspFastFloodThreshold();
                                ~LspFastFloodThreshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value level; //type: IsisInternalLevelEnum
                                Value count; //type: uint32


                                class IsisInternalLevelEnum;


                        }; // Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold


                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold> > lsp_fast_flood_threshold;


                    }; // Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds


                    class HelloIntervals : public Entity
                    {
                        public:
                            HelloIntervals();
                            ~HelloIntervals();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class HelloInterval : public Entity
                        {
                            public:
                                HelloInterval();
                                ~HelloInterval();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value level; //type: IsisInternalLevelEnum
                                Value interval; //type: uint32


                                class IsisInternalLevelEnum;


                        }; // Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloInterval


                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloInterval> > hello_interval;


                    }; // Isis::Instances::Instance::Interfaces::Interface::HelloIntervals


                    class InterfaceAfs : public Entity
                    {
                        public:
                            InterfaceAfs();
                            ~InterfaceAfs();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class InterfaceAf : public Entity
                        {
                            public:
                                InterfaceAf();
                                ~InterfaceAf();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value af_name; //type: IsisAddressFamilyEnum
                                Value saf_name; //type: IsisSubAddressFamilyEnum


                            class InterfaceAfData : public Entity
                            {
                                public:
                                    InterfaceAfData();
                                    ~InterfaceAfData();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value interface_af_state; //type: IsisInterfaceAfStateEnum
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
                                        Value type; //type: IsissidEnum
                                        Value value_; //type: uint32
                                        Value php; //type: IsisphpFlagEnum
                                        Value explicit_null; //type: IsisexplicitNullFlagEnum
                                        Value nflag_clear; //type: NflagClearEnum


                                        class IsisexplicitNullFlagEnum;
                                        class NflagClearEnum;
                                        class IsisphpFlagEnum;
                                        class IsissidEnum;


                                }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid


                                class InterfaceFrrTable : public Entity
                                {
                                    public:
                                        InterfaceFrrTable();
                                        ~InterfaceFrrTable();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class FrrlfaCandidateInterfaces : public Entity
                                    {
                                        public:
                                            FrrlfaCandidateInterfaces();
                                            ~FrrlfaCandidateInterfaces();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class FrrlfaCandidateInterface : public Entity
                                        {
                                            public:
                                                FrrlfaCandidateInterface();
                                                ~FrrlfaCandidateInterface();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value interface_name; //type: string
                                                Value frr_type; //type: IsisfrrEnum
                                                Value level; //type: uint32


                                                class IsisfrrEnum;


                                        }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface> > frrlfa_candidate_interface;


                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces


                                    class FrrRemoteLfaMaxMetrics : public Entity
                                    {
                                        public:
                                            FrrRemoteLfaMaxMetrics();
                                            ~FrrRemoteLfaMaxMetrics();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class FrrRemoteLfaMaxMetric : public Entity
                                        {
                                            public:
                                                FrrRemoteLfaMaxMetric();
                                                ~FrrRemoteLfaMaxMetric();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value level; //type: IsisInternalLevelEnum
                                                Value max_metric; //type: uint32


                                                class IsisInternalLevelEnum;


                                        }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric> > frr_remote_lfa_max_metric;


                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics


                                    class FrrTypes : public Entity
                                    {
                                        public:
                                            FrrTypes();
                                            ~FrrTypes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class FrrType : public Entity
                                        {
                                            public:
                                                FrrType();
                                                ~FrrType();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value level; //type: IsisInternalLevelEnum
                                                Value type; //type: IsisfrrEnum


                                                class IsisInternalLevelEnum;
                                                class IsisfrrEnum;


                                        }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType> > frr_type;


                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes


                                    class FrrRemoteLfaTypes : public Entity
                                    {
                                        public:
                                            FrrRemoteLfaTypes();
                                            ~FrrRemoteLfaTypes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class FrrRemoteLfaType : public Entity
                                        {
                                            public:
                                                FrrRemoteLfaType();
                                                ~FrrRemoteLfaType();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value level; //type: IsisInternalLevelEnum
                                                Value type; //type: IsisRemoteLfaEnum


                                                class IsisInternalLevelEnum;
                                                class IsisRemoteLfaEnum;


                                        }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType> > frr_remote_lfa_type;


                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes


                                    class InterfaceFrrTiebreakerDefaults : public Entity
                                    {
                                        public:
                                            InterfaceFrrTiebreakerDefaults();
                                            ~InterfaceFrrTiebreakerDefaults();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class InterfaceFrrTiebreakerDefault : public Entity
                                        {
                                            public:
                                                InterfaceFrrTiebreakerDefault();
                                                ~InterfaceFrrTiebreakerDefault();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value level; //type: IsisInternalLevelEnum


                                                class IsisInternalLevelEnum;


                                        }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault> > interface_frr_tiebreaker_default;


                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults


                                    class FrrtilfaTypes : public Entity
                                    {
                                        public:
                                            FrrtilfaTypes();
                                            ~FrrtilfaTypes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class FrrtilfaType : public Entity
                                        {
                                            public:
                                                FrrtilfaType();
                                                ~FrrtilfaType();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value level; //type: IsisInternalLevelEnum


                                                class IsisInternalLevelEnum;


                                        }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType> > frrtilfa_type;


                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes


                                    class FrrExcludeInterfaces : public Entity
                                    {
                                        public:
                                            FrrExcludeInterfaces();
                                            ~FrrExcludeInterfaces();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class FrrExcludeInterface : public Entity
                                        {
                                            public:
                                                FrrExcludeInterface();
                                                ~FrrExcludeInterface();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value interface_name; //type: string
                                                Value frr_type; //type: IsisfrrEnum
                                                Value level; //type: uint32


                                                class IsisfrrEnum;


                                        }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface> > frr_exclude_interface;


                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces


                                    class InterfaceFrrTiebreakers : public Entity
                                    {
                                        public:
                                            InterfaceFrrTiebreakers();
                                            ~InterfaceFrrTiebreakers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class InterfaceFrrTiebreaker : public Entity
                                        {
                                            public:
                                                InterfaceFrrTiebreaker();
                                                ~InterfaceFrrTiebreaker();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value level; //type: IsisInternalLevelEnum
                                                Value tiebreaker; //type: IsisInterfaceFrrTiebreakerEnum
                                                Value index_; //type: uint32


                                                class IsisInternalLevelEnum;
                                                class IsisInterfaceFrrTiebreakerEnum;


                                        }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker> > interface_frr_tiebreaker;


                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers


                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces> frr_exclude_interfaces;
                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics> frr_remote_lfa_max_metrics;
                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes> frr_remote_lfa_types;
                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes> frr_types;
                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces> frrlfa_candidate_interfaces;
                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes> frrtilfa_types;
                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults> interface_frr_tiebreaker_defaults;
                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers> interface_frr_tiebreakers;


                                }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable


                                class MplsLdp : public Entity
                                {
                                    public:
                                        MplsLdp();
                                        ~MplsLdp();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value sync_level; //type: uint32




                                }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp


                                class AutoMetrics : public Entity
                                {
                                    public:
                                        AutoMetrics();
                                        ~AutoMetrics();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class AutoMetric : public Entity
                                    {
                                        public:
                                            AutoMetric();
                                            ~AutoMetric();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value level; //type: IsisInternalLevelEnum
                                            Value proactive_protect; //type: uint32


                                            class IsisInternalLevelEnum;


                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetric


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetric> > auto_metric;


                                }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics


                                class AdminTags : public Entity
                                {
                                    public:
                                        AdminTags();
                                        ~AdminTags();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class AdminTag : public Entity
                                    {
                                        public:
                                            AdminTag();
                                            ~AdminTag();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value level; //type: IsisInternalLevelEnum
                                            Value admin_tag; //type: uint32


                                            class IsisInternalLevelEnum;


                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTag


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTag> > admin_tag;


                                }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags


                                class InterfaceLinkGroup : public Entity
                                {
                                    public:
                                        InterfaceLinkGroup();
                                        ~InterfaceLinkGroup();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value link_group; //type: string
                                        Value level; //type: uint32




                                }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup


                                class Metrics : public Entity
                                {
                                    public:
                                        Metrics();
                                        ~Metrics();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class Metric : public Entity
                                    {
                                        public:
                                            Metric();
                                            ~Metric();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value level; //type: IsisInternalLevelEnum
                                            Value metric; //type: one of uint32, enumeration


                                            class IsisInternalLevelEnum;
                                            class MetricEnum;


                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric> > metric;


                                }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics


                                class Weights : public Entity
                                {
                                    public:
                                        Weights();
                                        ~Weights();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class Weight : public Entity
                                    {
                                        public:
                                            Weight();
                                            ~Weight();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value level; //type: IsisInternalLevelEnum
                                            Value weight; //type: uint32


                                            class IsisInternalLevelEnum;


                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight> > weight;


                                }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags> admin_tags;
                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics> auto_metrics;
                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable> interface_frr_table;
                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup> interface_link_group; // presence node
                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics> metrics;
                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp> mpls_ldp;
                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid> prefix_sid; // presence node
                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights> weights;
                                    class IsisInterfaceAfStateEnum;


                            }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData


                            class TopologyName : public Entity
                            {
                                public:
                                    TopologyName();
                                    ~TopologyName();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value topology_name; //type: string
                                    Value interface_af_state; //type: IsisInterfaceAfStateEnum
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
                                        Value type; //type: IsissidEnum
                                        Value value_; //type: uint32
                                        Value php; //type: IsisphpFlagEnum
                                        Value explicit_null; //type: IsisexplicitNullFlagEnum
                                        Value nflag_clear; //type: NflagClearEnum


                                        class IsisexplicitNullFlagEnum;
                                        class NflagClearEnum;
                                        class IsisphpFlagEnum;
                                        class IsissidEnum;


                                }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid


                                class InterfaceFrrTable : public Entity
                                {
                                    public:
                                        InterfaceFrrTable();
                                        ~InterfaceFrrTable();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class FrrlfaCandidateInterfaces : public Entity
                                    {
                                        public:
                                            FrrlfaCandidateInterfaces();
                                            ~FrrlfaCandidateInterfaces();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class FrrlfaCandidateInterface : public Entity
                                        {
                                            public:
                                                FrrlfaCandidateInterface();
                                                ~FrrlfaCandidateInterface();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value interface_name; //type: string
                                                Value frr_type; //type: IsisfrrEnum
                                                Value level; //type: uint32


                                                class IsisfrrEnum;


                                        }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface> > frrlfa_candidate_interface;


                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces


                                    class FrrRemoteLfaMaxMetrics : public Entity
                                    {
                                        public:
                                            FrrRemoteLfaMaxMetrics();
                                            ~FrrRemoteLfaMaxMetrics();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class FrrRemoteLfaMaxMetric : public Entity
                                        {
                                            public:
                                                FrrRemoteLfaMaxMetric();
                                                ~FrrRemoteLfaMaxMetric();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value level; //type: IsisInternalLevelEnum
                                                Value max_metric; //type: uint32


                                                class IsisInternalLevelEnum;


                                        }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric> > frr_remote_lfa_max_metric;


                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics


                                    class FrrTypes : public Entity
                                    {
                                        public:
                                            FrrTypes();
                                            ~FrrTypes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class FrrType : public Entity
                                        {
                                            public:
                                                FrrType();
                                                ~FrrType();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value level; //type: IsisInternalLevelEnum
                                                Value type; //type: IsisfrrEnum


                                                class IsisInternalLevelEnum;
                                                class IsisfrrEnum;


                                        }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType> > frr_type;


                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes


                                    class FrrRemoteLfaTypes : public Entity
                                    {
                                        public:
                                            FrrRemoteLfaTypes();
                                            ~FrrRemoteLfaTypes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class FrrRemoteLfaType : public Entity
                                        {
                                            public:
                                                FrrRemoteLfaType();
                                                ~FrrRemoteLfaType();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value level; //type: IsisInternalLevelEnum
                                                Value type; //type: IsisRemoteLfaEnum


                                                class IsisInternalLevelEnum;
                                                class IsisRemoteLfaEnum;


                                        }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType> > frr_remote_lfa_type;


                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes


                                    class InterfaceFrrTiebreakerDefaults : public Entity
                                    {
                                        public:
                                            InterfaceFrrTiebreakerDefaults();
                                            ~InterfaceFrrTiebreakerDefaults();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class InterfaceFrrTiebreakerDefault : public Entity
                                        {
                                            public:
                                                InterfaceFrrTiebreakerDefault();
                                                ~InterfaceFrrTiebreakerDefault();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value level; //type: IsisInternalLevelEnum


                                                class IsisInternalLevelEnum;


                                        }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault> > interface_frr_tiebreaker_default;


                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults


                                    class FrrtilfaTypes : public Entity
                                    {
                                        public:
                                            FrrtilfaTypes();
                                            ~FrrtilfaTypes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class FrrtilfaType : public Entity
                                        {
                                            public:
                                                FrrtilfaType();
                                                ~FrrtilfaType();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value level; //type: IsisInternalLevelEnum


                                                class IsisInternalLevelEnum;


                                        }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType> > frrtilfa_type;


                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes


                                    class FrrExcludeInterfaces : public Entity
                                    {
                                        public:
                                            FrrExcludeInterfaces();
                                            ~FrrExcludeInterfaces();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class FrrExcludeInterface : public Entity
                                        {
                                            public:
                                                FrrExcludeInterface();
                                                ~FrrExcludeInterface();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value interface_name; //type: string
                                                Value frr_type; //type: IsisfrrEnum
                                                Value level; //type: uint32


                                                class IsisfrrEnum;


                                        }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface> > frr_exclude_interface;


                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces


                                    class InterfaceFrrTiebreakers : public Entity
                                    {
                                        public:
                                            InterfaceFrrTiebreakers();
                                            ~InterfaceFrrTiebreakers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class InterfaceFrrTiebreaker : public Entity
                                        {
                                            public:
                                                InterfaceFrrTiebreaker();
                                                ~InterfaceFrrTiebreaker();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value level; //type: IsisInternalLevelEnum
                                                Value tiebreaker; //type: IsisInterfaceFrrTiebreakerEnum
                                                Value index_; //type: uint32


                                                class IsisInternalLevelEnum;
                                                class IsisInterfaceFrrTiebreakerEnum;


                                        }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker> > interface_frr_tiebreaker;


                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers


                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces> frr_exclude_interfaces;
                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics> frr_remote_lfa_max_metrics;
                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes> frr_remote_lfa_types;
                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes> frr_types;
                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces> frrlfa_candidate_interfaces;
                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes> frrtilfa_types;
                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults> interface_frr_tiebreaker_defaults;
                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers> interface_frr_tiebreakers;


                                }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable


                                class MplsLdp : public Entity
                                {
                                    public:
                                        MplsLdp();
                                        ~MplsLdp();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value sync_level; //type: uint32




                                }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp


                                class AutoMetrics : public Entity
                                {
                                    public:
                                        AutoMetrics();
                                        ~AutoMetrics();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class AutoMetric : public Entity
                                    {
                                        public:
                                            AutoMetric();
                                            ~AutoMetric();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value level; //type: IsisInternalLevelEnum
                                            Value proactive_protect; //type: uint32


                                            class IsisInternalLevelEnum;


                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric> > auto_metric;


                                }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics


                                class AdminTags : public Entity
                                {
                                    public:
                                        AdminTags();
                                        ~AdminTags();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class AdminTag : public Entity
                                    {
                                        public:
                                            AdminTag();
                                            ~AdminTag();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value level; //type: IsisInternalLevelEnum
                                            Value admin_tag; //type: uint32


                                            class IsisInternalLevelEnum;


                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag> > admin_tag;


                                }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags


                                class InterfaceLinkGroup : public Entity
                                {
                                    public:
                                        InterfaceLinkGroup();
                                        ~InterfaceLinkGroup();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value link_group; //type: string
                                        Value level; //type: uint32




                                }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup


                                class Metrics : public Entity
                                {
                                    public:
                                        Metrics();
                                        ~Metrics();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class Metric : public Entity
                                    {
                                        public:
                                            Metric();
                                            ~Metric();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value level; //type: IsisInternalLevelEnum
                                            Value metric; //type: one of uint32, enumeration


                                            class IsisInternalLevelEnum;
                                            class MetricEnum;


                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric> > metric;


                                }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics


                                class Weights : public Entity
                                {
                                    public:
                                        Weights();
                                        ~Weights();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class Weight : public Entity
                                    {
                                        public:
                                            Weight();
                                            ~Weight();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value level; //type: IsisInternalLevelEnum
                                            Value weight; //type: uint32


                                            class IsisInternalLevelEnum;


                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight> > weight;


                                }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags> admin_tags;
                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics> auto_metrics;
                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable> interface_frr_table;
                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup> interface_link_group; // presence node
                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics> metrics;
                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp> mpls_ldp;
                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid> prefix_sid; // presence node
                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights> weights;
                                    class IsisInterfaceAfStateEnum;


                            }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName


                                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData> interface_af_data;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName> > topology_name;
                                class IsisAddressFamilyEnum;
                                class IsisSubAddressFamilyEnum;


                        }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf


                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf> > interface_af;


                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs


                    class CsnpIntervals : public Entity
                    {
                        public:
                            CsnpIntervals();
                            ~CsnpIntervals();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class CsnpInterval : public Entity
                        {
                            public:
                                CsnpInterval();
                                ~CsnpInterval();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value level; //type: IsisInternalLevelEnum
                                Value interval; //type: uint32


                                class IsisInternalLevelEnum;


                        }; // Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpInterval


                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpInterval> > csnp_interval;


                    }; // Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals


                    class LspIntervals : public Entity
                    {
                        public:
                            LspIntervals();
                            ~LspIntervals();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class LspInterval : public Entity
                        {
                            public:
                                LspInterval();
                                ~LspInterval();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value level; //type: IsisInternalLevelEnum
                                Value interval; //type: uint32


                                class IsisInternalLevelEnum;


                        }; // Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval


                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval> > lsp_interval;


                    }; // Isis::Instances::Instance::Interfaces::Interface::LspIntervals


                        std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::Bfd> bfd;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals> csnp_intervals;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords> hello_accept_passwords;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::HelloIntervals> hello_intervals;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers> hello_multipliers;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::HelloPaddings> hello_paddings;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::HelloPasswords> hello_passwords;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs> interface_afs;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds> lsp_fast_flood_thresholds;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::LspIntervals> lsp_intervals;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals> lsp_retransmit_intervals;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals> lsp_retransmit_throttle_intervals;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::Priorities> priorities;
                        class IsisConfigurableLevelsEnum;
                        class MeshGroupEnum;
                        class IsisInterfaceStateEnum;


                }; // Isis::Instances::Instance::Interfaces::Interface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface> > interface;


            }; // Isis::Instances::Instance::Interfaces


                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs> afs;
                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Distribute> distribute; // presence node
                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces> interfaces;
                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LinkGroups> link_groups;
                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspAcceptPasswords> lsp_accept_passwords;
                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspArrivalTimes> lsp_arrival_times;
                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspCheckIntervals> lsp_check_intervals;
                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspGenerationIntervals> lsp_generation_intervals;
                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspLifetimes> lsp_lifetimes;
                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspMtus> lsp_mtus;
                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspPasswords> lsp_passwords;
                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspRefreshIntervals> lsp_refresh_intervals;
                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::MaxLinkMetrics> max_link_metrics;
                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Nets> nets;
                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Nsf> nsf;
                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::OverloadBits> overload_bits;
                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Srgb> srgb; // presence node
                std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::TraceBufferSize> trace_buffer_size;
                class IsisConfigurableLevelsEnum;
                class IsisTracingModeEnum;


        }; // Isis::Instances::Instance


            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance> > instance;


    }; // Isis::Instances


        std::unique_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances> instances;


}; // Isis


class IsisSnpAuthEnum : public Enum
{
    public:
        static const Enum::Value send_only;
        static const Enum::Value full;

};

class IsisMibMaxAreaAddressMismatchBooleanEnum : public Enum
{
    public:
        static const Enum::Value false_;
        static const Enum::Value true_;

};

class IsisMibLspTooLargeToPropagateBooleanEnum : public Enum
{
    public:
        static const Enum::Value false_;
        static const Enum::Value true_;

};

class IsisMibSequenceNumberSkipBooleanEnum : public Enum
{
    public:
        static const Enum::Value false_;
        static const Enum::Value true_;

};

class IsisInterfaceFrrTiebreakerEnum : public Enum
{
    public:
        static const Enum::Value node_protecting;
        static const Enum::Value srlg_disjoint;

};

class IsisAuthenticationAlgorithmEnum : public Enum
{
    public:
        static const Enum::Value cleartext;
        static const Enum::Value hmac_md5;
        static const Enum::Value keychain;

};

class IsisOverloadBitModeEnum : public Enum
{
    public:
        static const Enum::Value permanently_set;
        static const Enum::Value startup_period;
        static const Enum::Value wait_for_bgp;

};

class IsisMibRejectedAdjacencyBooleanEnum : public Enum
{
    public:
        static const Enum::Value false_;
        static const Enum::Value true_;

};

class IsisMibCorruptedLspDetectedBooleanEnum : public Enum
{
    public:
        static const Enum::Value false_;
        static const Enum::Value true_;

};

class IsisAdjCheckEnum : public Enum
{
    public:
        static const Enum::Value disabled;

};

class IsisispfStateEnum : public Enum
{
    public:
        static const Enum::Value enabled;

};

class IsisfrrLoadSharingEnum : public Enum
{
    public:
        static const Enum::Value disable;

};

class IsisMibAuthenticationFailureBooleanEnum : public Enum
{
    public:
        static const Enum::Value false_;
        static const Enum::Value true_;

};

class IsisInterfaceStateEnum : public Enum
{
    public:
        static const Enum::Value shutdown;
        static const Enum::Value suppressed;
        static const Enum::Value passive;

};

class IsisTracingModeEnum : public Enum
{
    public:
        static const Enum::Value off;
        static const Enum::Value basic;
        static const Enum::Value enhanced;

};

class IsisMetricStyleEnum : public Enum
{
    public:
        static const Enum::Value old_metric_style;
        static const Enum::Value new_metric_style;
        static const Enum::Value both_metric_style;

};

class IsisNsfFlavorEnum : public Enum
{
    public:
        static const Enum::Value cisco_proprietary_nsf;
        static const Enum::Value ietf_standard_nsf;

};

class IsisInterfaceAfStateEnum : public Enum
{
    public:
        static const Enum::Value disable;

};

class IsisApplyWeightEnum : public Enum
{
    public:
        static const Enum::Value ecmp_only;
        static const Enum::Value ucmp_only;

};

class IsisPrefixPriorityEnum : public Enum
{
    public:
        static const Enum::Value critical_priority;
        static const Enum::Value high_priority;
        static const Enum::Value medium_priority;

};

class IsisMibAuthenticationTypeFailureBooleanEnum : public Enum
{
    public:
        static const Enum::Value false_;
        static const Enum::Value true_;

};

class IsisMicroLoopAvoidanceEnum : public Enum
{
    public:
        static const Enum::Value not_set;
        static const Enum::Value micro_loop_avoidance_all;
        static const Enum::Value micro_loop_avoidance_protected;

};

class IsisAdvTypeExternalEnum : public Enum
{
    public:
        static const Enum::Value external;

};

class IsisRemoteLfaEnum : public Enum
{
    public:
        static const Enum::Value remote_lfa_none;
        static const Enum::Value remote_lfa_tunnel_ldp;

};

class IsisMibAreaMismatchBooleanEnum : public Enum
{
    public:
        static const Enum::Value false_;
        static const Enum::Value true_;

};

class IsisMibAttemptToExceedMaxSequenceBooleanEnum : public Enum
{
    public:
        static const Enum::Value false_;
        static const Enum::Value true_;

};

class IsisConfigurableLevelsEnum : public Enum
{
    public:
        static const Enum::Value level1;
        static const Enum::Value level2;
        static const Enum::Value level1_and2;

};

class IsisfrrTiebreakerEnum : public Enum
{
    public:
        static const Enum::Value downstream;
        static const Enum::Value lc_disjoint;
        static const Enum::Value lowest_backup_metric;
        static const Enum::Value node_protecting;
        static const Enum::Value primary_path;
        static const Enum::Value secondary_path;
        static const Enum::Value srlg_disjoint;

};

class IsisMibManualAddressDropsBooleanEnum : public Enum
{
    public:
        static const Enum::Value false_;
        static const Enum::Value true_;

};

class IsisMetricStyleTransitionEnum : public Enum
{
    public:
        static const Enum::Value disabled;
        static const Enum::Value enabled;

};

class IsisexplicitNullFlagEnum : public Enum
{
    public:
        static const Enum::Value disable;
        static const Enum::Value enable;

};

class IsisMetricEnum : public Enum
{
    public:
        static const Enum::Value internal;
        static const Enum::Value external;

};

class IsisHelloPaddingEnum : public Enum
{
    public:
        static const Enum::Value never;
        static const Enum::Value sometimes;

};

class IsisMibDatabaseOverFlowBooleanEnum : public Enum
{
    public:
        static const Enum::Value false_;
        static const Enum::Value true_;

};

class IsisAdvTypeInterLevelEnum : public Enum
{
    public:
        static const Enum::Value inter_level;

};

class IsisAuthenticationFailureModeEnum : public Enum
{
    public:
        static const Enum::Value drop;
        static const Enum::Value send_only;

};

class IsisMibProtocolsSupportedMismatchBooleanEnum : public Enum
{
    public:
        static const Enum::Value false_;
        static const Enum::Value true_;

};

class IsisRedistProtoEnum : public Enum
{
    public:
        static const Enum::Value connected;
        static const Enum::Value static_;
        static const Enum::Value ospf;
        static const Enum::Value bgp;
        static const Enum::Value isis;
        static const Enum::Value ospfv3;
        static const Enum::Value rip;
        static const Enum::Value eigrp;
        static const Enum::Value subscriber;
        static const Enum::Value application;
        static const Enum::Value mobile;

};

class IsisphpFlagEnum : public Enum
{
    public:
        static const Enum::Value enable;
        static const Enum::Value disable;

};

class IsisMibIdLengthMismatchBooleanEnum : public Enum
{
    public:
        static const Enum::Value false_;
        static const Enum::Value true_;

};

class IsisMibAllBooleanEnum : public Enum
{
    public:
        static const Enum::Value false_;
        static const Enum::Value true_;

};

class IsisMibOriginatedLspBufferSizeMismatchBooleanEnum : public Enum
{
    public:
        static const Enum::Value false_;
        static const Enum::Value true_;

};

class IsissidEnum : public Enum
{
    public:
        static const Enum::Value index_;
        static const Enum::Value absolute;

};

class IsisfrrEnum : public Enum
{
    public:
        static const Enum::Value per_link;
        static const Enum::Value per_prefix;

};

class IsisAttachedBitEnum : public Enum
{
    public:
        static const Enum::Value area;
        static const Enum::Value on;
        static const Enum::Value off;

};

class NflagClearEnum : public Enum
{
    public:
        static const Enum::Value disable;
        static const Enum::Value enable;

};

class IsisLabelPreferenceEnum : public Enum
{
    public:
        static const Enum::Value ldp;
        static const Enum::Value segment_routing;

};

class IsisMibAdjacencyChangeBooleanEnum : public Enum
{
    public:
        static const Enum::Value false_;
        static const Enum::Value true_;

};

class IsisMibLspErrorDetectedBooleanEnum : public Enum
{
    public:
        static const Enum::Value false_;
        static const Enum::Value true_;

};

class IsisMibOwnLspPurgeBooleanEnum : public Enum
{
    public:
        static const Enum::Value false_;
        static const Enum::Value true_;

};

class IsisMibVersionSkewBooleanEnum : public Enum
{
    public:
        static const Enum::Value false_;
        static const Enum::Value true_;

};

class Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric::MetricEnum : public Enum
{
    public:
        static const Enum::Value maximum;

};

class Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric::MetricEnum : public Enum
{
    public:
        static const Enum::Value maximum;

};

class Isis::Instances::Instance::Interfaces::Interface::MeshGroupEnum : public Enum
{
    public:
        static const Enum::Value blocked;

};

class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::MetricEnum : public Enum
{
    public:
        static const Enum::Value maximum;

};

class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::MetricEnum : public Enum
{
    public:
        static const Enum::Value maximum;

};


}
}

#endif /* _CISCO_IOS_XR_CLNS_ISIS_CFG_ */

