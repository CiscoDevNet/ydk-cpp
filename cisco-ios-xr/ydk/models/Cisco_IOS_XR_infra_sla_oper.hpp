#ifndef _CISCO_IOS_XR_INFRA_SLA_OPER_
#define _CISCO_IOS_XR_INFRA_SLA_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"


namespace ydk {
namespace Cisco_IOS_XR_infra_sla_oper {

class Sla : public Entity
{
    public:
        Sla();
        ~Sla();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class Protocols : public Entity
    {
        public:
            Protocols();
            ~Protocols();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Ethernet : public Entity
        {
            public:
                Ethernet();
                ~Ethernet();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class StatisticsOnDemandCurrents : public Entity
            {
                public:
                    StatisticsOnDemandCurrents();
                    ~StatisticsOnDemandCurrents();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class StatisticsOnDemandCurrent : public Entity
                {
                    public:
                        StatisticsOnDemandCurrent();
                        ~StatisticsOnDemandCurrent();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf operation_id; //type: uint32
                        YLeaf domain_name; //type: string
                        YLeaf interface_name; //type: string
                        YLeaf mep_id; //type: uint32
                        YLeaf mac_address; //type: string
                        YLeaf probe_type; //type: string
                        YLeaf display_short; //type: string
                        YLeaf display_long; //type: string
                        YLeaf flr_calculation_interval; //type: uint32

                    class SpecificOptions : public Entity
                    {
                        public:
                            SpecificOptions();
                            ~SpecificOptions();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf oper_type; //type: SlaOperOperationEnum

                        class ConfiguredOperationOptions : public Entity
                        {
                            public:
                                ConfiguredOperationOptions();
                                ~ConfiguredOperationOptions();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf profile_name; //type: string



                        }; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::ConfiguredOperationOptions


                        class OndemandOperationOptions : public Entity
                        {
                            public:
                                OndemandOperationOptions();
                                ~OndemandOperationOptions();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf ondemand_operation_id; //type: uint32
                                YLeaf probe_count; //type: uint8



                        }; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::OndemandOperationOptions


                            std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::ConfiguredOperationOptions> configured_operation_options;
                            std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::OndemandOperationOptions> ondemand_operation_options;


                    }; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions


                    class OperationSchedule : public Entity
                    {
                        public:
                            OperationSchedule();
                            ~OperationSchedule();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf start_time; //type: uint32
                            YLeaf start_time_configured; //type: boolean
                            YLeaf schedule_duration; //type: uint32
                            YLeaf schedule_interval; //type: uint32



                    }; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationSchedule


                    class OperationMetric : public Entity
                    {
                        public:
                            OperationMetric();
                            ~OperationMetric();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Config : public Entity
                        {
                            public:
                                Config();
                                ~Config();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf metric_type; //type: SlaRecordableMetricEnum
                                YLeaf bins_count; //type: uint16
                                YLeaf bins_width; //type: uint16
                                YLeaf bucket_size; //type: uint8
                                YLeaf bucket_size_unit; //type: SlaBucketSizeEnum
                                YLeaf buckets_archive; //type: uint32



                        }; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Config


                        class Bucket : public Entity
                        {
                            public:
                                Bucket();
                                ~Bucket();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf start_at; //type: uint32
                                YLeaf duration; //type: uint32
                                YLeaf sent; //type: uint32
                                YLeaf lost; //type: uint32
                                YLeaf corrupt; //type: uint32
                                YLeaf out_of_order; //type: uint32
                                YLeaf duplicates; //type: uint32
                                YLeaf minimum; //type: int32
                                YLeaf maximum; //type: int32
                                YLeaf time_of_minimum; //type: uint32
                                YLeaf time_of_maximum; //type: uint32
                                YLeaf average; //type: int32
                                YLeaf standard_deviation; //type: int32
                                YLeaf result_count; //type: uint32
                                YLeaf data_sent_count; //type: uint32
                                YLeaf data_lost_count; //type: uint32
                                YLeaf overall_flr; //type: int32
                                YLeaf suspect_start_mid_bucket; //type: boolean
                                YLeaf suspect_schedule_latency; //type: boolean
                                YLeaf suspect_send_fail; //type: boolean
                                YLeaf suspect_premature_end; //type: boolean
                                YLeaf suspect_clock_drift; //type: boolean
                                YLeaf suspect_memory_allocation_failed; //type: boolean
                                YLeaf suspect_cleared_mid_bucket; //type: boolean
                                YLeaf suspect_probe_restarted; //type: boolean
                                YLeaf suspect_management_latency; //type: boolean
                                YLeaf suspect_multiple_buckets; //type: boolean
                                YLeaf suspect_misordering; //type: boolean
                                YLeaf suspect_flr_low_packet_count; //type: boolean
                                YLeaf premature_reason; //type: uint32
                                YLeaf premature_reason_string; //type: string

                            class Contents : public Entity
                            {
                                public:
                                    Contents();
                                    ~Contents();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf bucket_type; //type: SlaOperBucketEnum

                                class Aggregated : public Entity
                                {
                                    public:
                                        Aggregated();
                                        ~Aggregated();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Bins : public Entity
                                    {
                                        public:
                                            Bins();
                                            ~Bins();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf lower_bound; //type: int32
                                            YLeaf upper_bound; //type: int32
                                            YLeaf lower_bound_tenths; //type: int32
                                            YLeaf upper_bound_tenths; //type: int32
                                            YLeaf sum; //type: int64
                                            YLeaf count; //type: uint32



                                    }; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins> > bins;


                                }; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated


                                class Unaggregated : public Entity
                                {
                                    public:
                                        Unaggregated();
                                        ~Unaggregated();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Sample : public Entity
                                    {
                                        public:
                                            Sample();
                                            ~Sample();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf sent_at; //type: uint32
                                            YLeaf sent; //type: boolean
                                            YLeaf timed_out; //type: boolean
                                            YLeaf corrupt; //type: boolean
                                            YLeaf out_of_order; //type: boolean
                                            YLeaf no_data_packets; //type: boolean
                                            YLeaf result; //type: int32
                                            YLeaf frames_sent; //type: uint32
                                            YLeaf frames_lost; //type: uint32



                                    }; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample> > sample;


                                }; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated


                                    std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated> aggregated;
                                    std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated> unaggregated;


                            }; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents


                                std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents> contents;


                        }; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket


                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket> > bucket;
                            std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Config> config;


                    }; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric> > operation_metric;
                        std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationSchedule> operation_schedule;
                        std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions> specific_options;


                }; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent> > statistics_on_demand_current;


            }; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents


            class Operations : public Entity
            {
                public:
                    Operations();
                    ~Operations();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Operation_ : public Entity
                {
                    public:
                        Operation_();
                        ~Operation_();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf profile_name; //type: string
                        YLeaf domain_name; //type: string
                        YLeaf interface_name; //type: string
                        YLeaf mep_id; //type: uint32
                        YLeaf mac_address; //type: string
                        YLeaf display_short; //type: string
                        YLeaf display_long; //type: string
                        YLeaf last_run; //type: uint32

                    class ProfileOptions : public Entity
                    {
                        public:
                            ProfileOptions();
                            ~ProfileOptions();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf probe_type; //type: string
                            YLeaf packets_per_burst; //type: uint16
                            YLeaf inter_packet_interval; //type: uint16
                            YLeaf bursts_per_probe; //type: uint32
                            YLeaf inter_burst_interval; //type: uint32
                            YLeaf flr_calculation_interval; //type: uint32

                        class PacketPadding : public Entity
                        {
                            public:
                                PacketPadding();
                                ~PacketPadding();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf packet_pad_size; //type: uint16
                                YLeaf test_pattern_pad_scheme; //type: SlaOperTestPatternSchemeEnum
                                YLeaf test_pattern_pad_hex_string; //type: uint32



                        }; // Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::PacketPadding


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


                                YLeaf priority_type; //type: SlaOperPacketPriorityEnum
                                YLeaf cos; //type: uint8



                        }; // Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::Priority


                        class OperationSchedule : public Entity
                        {
                            public:
                                OperationSchedule();
                                ~OperationSchedule();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf start_time; //type: uint32
                                YLeaf start_time_configured; //type: boolean
                                YLeaf schedule_duration; //type: uint32
                                YLeaf schedule_interval; //type: uint32



                        }; // Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationSchedule


                        class OperationMetric : public Entity
                        {
                            public:
                                OperationMetric();
                                ~OperationMetric();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf current_buckets_archive; //type: uint32

                            class MetricConfig : public Entity
                            {
                                public:
                                    MetricConfig();
                                    ~MetricConfig();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf metric_type; //type: SlaRecordableMetricEnum
                                    YLeaf bins_count; //type: uint16
                                    YLeaf bins_width; //type: uint16
                                    YLeaf bucket_size; //type: uint8
                                    YLeaf bucket_size_unit; //type: SlaBucketSizeEnum
                                    YLeaf buckets_archive; //type: uint32



                            }; // Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric::MetricConfig


                                std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric::MetricConfig> metric_config;


                        }; // Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric


                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric> > operation_metric;
                            std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationSchedule> operation_schedule;
                            std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::PacketPadding> packet_padding;
                            std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::Priority> priority;


                    }; // Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions


                    class SpecificOptions : public Entity
                    {
                        public:
                            SpecificOptions();
                            ~SpecificOptions();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf oper_type; //type: SlaOperOperationEnum

                        class ConfiguredOperationOptions : public Entity
                        {
                            public:
                                ConfiguredOperationOptions();
                                ~ConfiguredOperationOptions();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf profile_name; //type: string



                        }; // Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::ConfiguredOperationOptions


                        class OndemandOperationOptions : public Entity
                        {
                            public:
                                OndemandOperationOptions();
                                ~OndemandOperationOptions();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf ondemand_operation_id; //type: uint32
                                YLeaf probe_count; //type: uint8



                        }; // Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::OndemandOperationOptions


                            std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::ConfiguredOperationOptions> configured_operation_options;
                            std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::OndemandOperationOptions> ondemand_operation_options;


                    }; // Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions


                        std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions> profile_options;
                        std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions> specific_options;


                }; // Sla::Protocols::Ethernet::Operations::Operation_


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::Operations::Operation_> > operation_;


            }; // Sla::Protocols::Ethernet::Operations


            class StatisticsHistoricals : public Entity
            {
                public:
                    StatisticsHistoricals();
                    ~StatisticsHistoricals();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class StatisticsHistorical : public Entity
                {
                    public:
                        StatisticsHistorical();
                        ~StatisticsHistorical();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf profile_name; //type: string
                        YLeaf domain_name; //type: string
                        YLeaf interface_name; //type: string
                        YLeaf mep_id; //type: uint32
                        YLeaf mac_address; //type: string
                        YLeaf probe_type; //type: string
                        YLeaf display_short; //type: string
                        YLeaf display_long; //type: string
                        YLeaf flr_calculation_interval; //type: uint32

                    class SpecificOptions : public Entity
                    {
                        public:
                            SpecificOptions();
                            ~SpecificOptions();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf oper_type; //type: SlaOperOperationEnum

                        class ConfiguredOperationOptions : public Entity
                        {
                            public:
                                ConfiguredOperationOptions();
                                ~ConfiguredOperationOptions();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf profile_name; //type: string



                        }; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::ConfiguredOperationOptions


                        class OndemandOperationOptions : public Entity
                        {
                            public:
                                OndemandOperationOptions();
                                ~OndemandOperationOptions();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf ondemand_operation_id; //type: uint32
                                YLeaf probe_count; //type: uint8



                        }; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::OndemandOperationOptions


                            std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::ConfiguredOperationOptions> configured_operation_options;
                            std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::OndemandOperationOptions> ondemand_operation_options;


                    }; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions


                    class OperationSchedule : public Entity
                    {
                        public:
                            OperationSchedule();
                            ~OperationSchedule();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf start_time; //type: uint32
                            YLeaf start_time_configured; //type: boolean
                            YLeaf schedule_duration; //type: uint32
                            YLeaf schedule_interval; //type: uint32



                    }; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationSchedule


                    class OperationMetric : public Entity
                    {
                        public:
                            OperationMetric();
                            ~OperationMetric();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Config : public Entity
                        {
                            public:
                                Config();
                                ~Config();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf metric_type; //type: SlaRecordableMetricEnum
                                YLeaf bins_count; //type: uint16
                                YLeaf bins_width; //type: uint16
                                YLeaf bucket_size; //type: uint8
                                YLeaf bucket_size_unit; //type: SlaBucketSizeEnum
                                YLeaf buckets_archive; //type: uint32



                        }; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Config


                        class Bucket : public Entity
                        {
                            public:
                                Bucket();
                                ~Bucket();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf start_at; //type: uint32
                                YLeaf duration; //type: uint32
                                YLeaf sent; //type: uint32
                                YLeaf lost; //type: uint32
                                YLeaf corrupt; //type: uint32
                                YLeaf out_of_order; //type: uint32
                                YLeaf duplicates; //type: uint32
                                YLeaf minimum; //type: int32
                                YLeaf maximum; //type: int32
                                YLeaf time_of_minimum; //type: uint32
                                YLeaf time_of_maximum; //type: uint32
                                YLeaf average; //type: int32
                                YLeaf standard_deviation; //type: int32
                                YLeaf result_count; //type: uint32
                                YLeaf data_sent_count; //type: uint32
                                YLeaf data_lost_count; //type: uint32
                                YLeaf overall_flr; //type: int32
                                YLeaf suspect_start_mid_bucket; //type: boolean
                                YLeaf suspect_schedule_latency; //type: boolean
                                YLeaf suspect_send_fail; //type: boolean
                                YLeaf suspect_premature_end; //type: boolean
                                YLeaf suspect_clock_drift; //type: boolean
                                YLeaf suspect_memory_allocation_failed; //type: boolean
                                YLeaf suspect_cleared_mid_bucket; //type: boolean
                                YLeaf suspect_probe_restarted; //type: boolean
                                YLeaf suspect_management_latency; //type: boolean
                                YLeaf suspect_multiple_buckets; //type: boolean
                                YLeaf suspect_misordering; //type: boolean
                                YLeaf suspect_flr_low_packet_count; //type: boolean
                                YLeaf premature_reason; //type: uint32
                                YLeaf premature_reason_string; //type: string

                            class Contents : public Entity
                            {
                                public:
                                    Contents();
                                    ~Contents();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf bucket_type; //type: SlaOperBucketEnum

                                class Aggregated : public Entity
                                {
                                    public:
                                        Aggregated();
                                        ~Aggregated();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Bins : public Entity
                                    {
                                        public:
                                            Bins();
                                            ~Bins();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf lower_bound; //type: int32
                                            YLeaf upper_bound; //type: int32
                                            YLeaf lower_bound_tenths; //type: int32
                                            YLeaf upper_bound_tenths; //type: int32
                                            YLeaf sum; //type: int64
                                            YLeaf count; //type: uint32



                                    }; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins> > bins;


                                }; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated


                                class Unaggregated : public Entity
                                {
                                    public:
                                        Unaggregated();
                                        ~Unaggregated();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Sample : public Entity
                                    {
                                        public:
                                            Sample();
                                            ~Sample();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf sent_at; //type: uint32
                                            YLeaf sent; //type: boolean
                                            YLeaf timed_out; //type: boolean
                                            YLeaf corrupt; //type: boolean
                                            YLeaf out_of_order; //type: boolean
                                            YLeaf no_data_packets; //type: boolean
                                            YLeaf result; //type: int32
                                            YLeaf frames_sent; //type: uint32
                                            YLeaf frames_lost; //type: uint32



                                    }; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample> > sample;


                                }; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated


                                    std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated> aggregated;
                                    std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated> unaggregated;


                            }; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents


                                std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents> contents;


                        }; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket


                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket> > bucket;
                            std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Config> config;


                    }; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric> > operation_metric;
                        std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationSchedule> operation_schedule;
                        std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions> specific_options;


                }; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical> > statistics_historical;


            }; // Sla::Protocols::Ethernet::StatisticsHistoricals


            class StatisticsOnDemandHistoricals : public Entity
            {
                public:
                    StatisticsOnDemandHistoricals();
                    ~StatisticsOnDemandHistoricals();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class StatisticsOnDemandHistorical : public Entity
                {
                    public:
                        StatisticsOnDemandHistorical();
                        ~StatisticsOnDemandHistorical();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf operation_id; //type: uint32
                        YLeaf domain_name; //type: string
                        YLeaf interface_name; //type: string
                        YLeaf mep_id; //type: uint32
                        YLeaf mac_address; //type: string
                        YLeaf probe_type; //type: string
                        YLeaf display_short; //type: string
                        YLeaf display_long; //type: string
                        YLeaf flr_calculation_interval; //type: uint32

                    class SpecificOptions : public Entity
                    {
                        public:
                            SpecificOptions();
                            ~SpecificOptions();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf oper_type; //type: SlaOperOperationEnum

                        class ConfiguredOperationOptions : public Entity
                        {
                            public:
                                ConfiguredOperationOptions();
                                ~ConfiguredOperationOptions();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf profile_name; //type: string



                        }; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::ConfiguredOperationOptions


                        class OndemandOperationOptions : public Entity
                        {
                            public:
                                OndemandOperationOptions();
                                ~OndemandOperationOptions();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf ondemand_operation_id; //type: uint32
                                YLeaf probe_count; //type: uint8



                        }; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::OndemandOperationOptions


                            std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::ConfiguredOperationOptions> configured_operation_options;
                            std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::OndemandOperationOptions> ondemand_operation_options;


                    }; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions


                    class OperationSchedule : public Entity
                    {
                        public:
                            OperationSchedule();
                            ~OperationSchedule();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf start_time; //type: uint32
                            YLeaf start_time_configured; //type: boolean
                            YLeaf schedule_duration; //type: uint32
                            YLeaf schedule_interval; //type: uint32



                    }; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationSchedule


                    class OperationMetric : public Entity
                    {
                        public:
                            OperationMetric();
                            ~OperationMetric();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Config : public Entity
                        {
                            public:
                                Config();
                                ~Config();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf metric_type; //type: SlaRecordableMetricEnum
                                YLeaf bins_count; //type: uint16
                                YLeaf bins_width; //type: uint16
                                YLeaf bucket_size; //type: uint8
                                YLeaf bucket_size_unit; //type: SlaBucketSizeEnum
                                YLeaf buckets_archive; //type: uint32



                        }; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Config


                        class Bucket : public Entity
                        {
                            public:
                                Bucket();
                                ~Bucket();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf start_at; //type: uint32
                                YLeaf duration; //type: uint32
                                YLeaf sent; //type: uint32
                                YLeaf lost; //type: uint32
                                YLeaf corrupt; //type: uint32
                                YLeaf out_of_order; //type: uint32
                                YLeaf duplicates; //type: uint32
                                YLeaf minimum; //type: int32
                                YLeaf maximum; //type: int32
                                YLeaf time_of_minimum; //type: uint32
                                YLeaf time_of_maximum; //type: uint32
                                YLeaf average; //type: int32
                                YLeaf standard_deviation; //type: int32
                                YLeaf result_count; //type: uint32
                                YLeaf data_sent_count; //type: uint32
                                YLeaf data_lost_count; //type: uint32
                                YLeaf overall_flr; //type: int32
                                YLeaf suspect_start_mid_bucket; //type: boolean
                                YLeaf suspect_schedule_latency; //type: boolean
                                YLeaf suspect_send_fail; //type: boolean
                                YLeaf suspect_premature_end; //type: boolean
                                YLeaf suspect_clock_drift; //type: boolean
                                YLeaf suspect_memory_allocation_failed; //type: boolean
                                YLeaf suspect_cleared_mid_bucket; //type: boolean
                                YLeaf suspect_probe_restarted; //type: boolean
                                YLeaf suspect_management_latency; //type: boolean
                                YLeaf suspect_multiple_buckets; //type: boolean
                                YLeaf suspect_misordering; //type: boolean
                                YLeaf suspect_flr_low_packet_count; //type: boolean
                                YLeaf premature_reason; //type: uint32
                                YLeaf premature_reason_string; //type: string

                            class Contents : public Entity
                            {
                                public:
                                    Contents();
                                    ~Contents();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf bucket_type; //type: SlaOperBucketEnum

                                class Aggregated : public Entity
                                {
                                    public:
                                        Aggregated();
                                        ~Aggregated();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Bins : public Entity
                                    {
                                        public:
                                            Bins();
                                            ~Bins();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf lower_bound; //type: int32
                                            YLeaf upper_bound; //type: int32
                                            YLeaf lower_bound_tenths; //type: int32
                                            YLeaf upper_bound_tenths; //type: int32
                                            YLeaf sum; //type: int64
                                            YLeaf count; //type: uint32



                                    }; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins> > bins;


                                }; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated


                                class Unaggregated : public Entity
                                {
                                    public:
                                        Unaggregated();
                                        ~Unaggregated();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Sample : public Entity
                                    {
                                        public:
                                            Sample();
                                            ~Sample();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf sent_at; //type: uint32
                                            YLeaf sent; //type: boolean
                                            YLeaf timed_out; //type: boolean
                                            YLeaf corrupt; //type: boolean
                                            YLeaf out_of_order; //type: boolean
                                            YLeaf no_data_packets; //type: boolean
                                            YLeaf result; //type: int32
                                            YLeaf frames_sent; //type: uint32
                                            YLeaf frames_lost; //type: uint32



                                    }; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample> > sample;


                                }; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated


                                    std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated> aggregated;
                                    std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated> unaggregated;


                            }; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents


                                std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents> contents;


                        }; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket


                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket> > bucket;
                            std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Config> config;


                    }; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric> > operation_metric;
                        std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationSchedule> operation_schedule;
                        std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions> specific_options;


                }; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical> > statistics_on_demand_historical;


            }; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals


            class ConfigErrors : public Entity
            {
                public:
                    ConfigErrors();
                    ~ConfigErrors();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class ConfigError : public Entity
                {
                    public:
                        ConfigError();
                        ~ConfigError();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf profile_name; //type: string
                        YLeaf domain_name; //type: string
                        YLeaf interface_name; //type: string
                        YLeaf mep_id; //type: uint32
                        YLeaf mac_address; //type: string
                        YLeaf profile_name_xr; //type: string
                        YLeaf display_short; //type: string
                        YLeaf rt_delay_inconsistent; //type: boolean
                        YLeaf ow_delay_sd_inconsistent; //type: boolean
                        YLeaf ow_delay_ds_inconsistent; //type: boolean
                        YLeaf rt_jitter_inconsistent; //type: boolean
                        YLeaf ow_jitter_sd_inconsistent; //type: boolean
                        YLeaf ow_jitter_ds_inconsistent; //type: boolean
                        YLeaf ow_loss_sd_inconsistent; //type: boolean
                        YLeaf ow_loss_ds_inconsistent; //type: boolean
                        YLeaf packet_pad_inconsistent; //type: boolean
                        YLeaf packet_rand_pad_inconsistent; //type: boolean
                        YLeaf min_packet_interval_inconsistent; //type: boolean
                        YLeaf priority_inconsistent; //type: boolean
                        YLeaf packet_type_inconsistent; //type: boolean
                        YLeaf profile_doesnt_exist; //type: boolean
                        YLeaf synthetic_loss_not_supported; //type: boolean
                        YLeaf probe_too_big; //type: boolean
                        YLeafList error_string; //type: list of  string



                }; // Sla::Protocols::Ethernet::ConfigErrors::ConfigError


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::ConfigErrors::ConfigError> > config_error;


            }; // Sla::Protocols::Ethernet::ConfigErrors


            class OnDemandOperations : public Entity
            {
                public:
                    OnDemandOperations();
                    ~OnDemandOperations();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class OnDemandOperation : public Entity
                {
                    public:
                        OnDemandOperation();
                        ~OnDemandOperation();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf operation_id; //type: uint32
                        YLeaf domain_name; //type: string
                        YLeaf interface_name; //type: string
                        YLeaf mep_id; //type: uint32
                        YLeaf mac_address; //type: string
                        YLeaf display_short; //type: string
                        YLeaf display_long; //type: string
                        YLeaf last_run; //type: uint32

                    class ProfileOptions : public Entity
                    {
                        public:
                            ProfileOptions();
                            ~ProfileOptions();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf probe_type; //type: string
                            YLeaf packets_per_burst; //type: uint16
                            YLeaf inter_packet_interval; //type: uint16
                            YLeaf bursts_per_probe; //type: uint32
                            YLeaf inter_burst_interval; //type: uint32
                            YLeaf flr_calculation_interval; //type: uint32

                        class PacketPadding : public Entity
                        {
                            public:
                                PacketPadding();
                                ~PacketPadding();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf packet_pad_size; //type: uint16
                                YLeaf test_pattern_pad_scheme; //type: SlaOperTestPatternSchemeEnum
                                YLeaf test_pattern_pad_hex_string; //type: uint32



                        }; // Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::PacketPadding


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


                                YLeaf priority_type; //type: SlaOperPacketPriorityEnum
                                YLeaf cos; //type: uint8



                        }; // Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::Priority


                        class OperationSchedule : public Entity
                        {
                            public:
                                OperationSchedule();
                                ~OperationSchedule();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf start_time; //type: uint32
                                YLeaf start_time_configured; //type: boolean
                                YLeaf schedule_duration; //type: uint32
                                YLeaf schedule_interval; //type: uint32



                        }; // Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationSchedule


                        class OperationMetric : public Entity
                        {
                            public:
                                OperationMetric();
                                ~OperationMetric();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf current_buckets_archive; //type: uint32

                            class MetricConfig : public Entity
                            {
                                public:
                                    MetricConfig();
                                    ~MetricConfig();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf metric_type; //type: SlaRecordableMetricEnum
                                    YLeaf bins_count; //type: uint16
                                    YLeaf bins_width; //type: uint16
                                    YLeaf bucket_size; //type: uint8
                                    YLeaf bucket_size_unit; //type: SlaBucketSizeEnum
                                    YLeaf buckets_archive; //type: uint32



                            }; // Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric::MetricConfig


                                std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric::MetricConfig> metric_config;


                        }; // Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric


                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric> > operation_metric;
                            std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationSchedule> operation_schedule;
                            std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::PacketPadding> packet_padding;
                            std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::Priority> priority;


                    }; // Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions


                    class SpecificOptions : public Entity
                    {
                        public:
                            SpecificOptions();
                            ~SpecificOptions();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf oper_type; //type: SlaOperOperationEnum

                        class ConfiguredOperationOptions : public Entity
                        {
                            public:
                                ConfiguredOperationOptions();
                                ~ConfiguredOperationOptions();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf profile_name; //type: string



                        }; // Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::ConfiguredOperationOptions


                        class OndemandOperationOptions : public Entity
                        {
                            public:
                                OndemandOperationOptions();
                                ~OndemandOperationOptions();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf ondemand_operation_id; //type: uint32
                                YLeaf probe_count; //type: uint8



                        }; // Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::OndemandOperationOptions


                            std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::ConfiguredOperationOptions> configured_operation_options;
                            std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::OndemandOperationOptions> ondemand_operation_options;


                    }; // Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions


                        std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions> profile_options;
                        std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions> specific_options;


                }; // Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation> > on_demand_operation;


            }; // Sla::Protocols::Ethernet::OnDemandOperations


            class StatisticsCurrents : public Entity
            {
                public:
                    StatisticsCurrents();
                    ~StatisticsCurrents();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class StatisticsCurrent : public Entity
                {
                    public:
                        StatisticsCurrent();
                        ~StatisticsCurrent();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf profile_name; //type: string
                        YLeaf domain_name; //type: string
                        YLeaf interface_name; //type: string
                        YLeaf mep_id; //type: uint32
                        YLeaf mac_address; //type: string
                        YLeaf probe_type; //type: string
                        YLeaf display_short; //type: string
                        YLeaf display_long; //type: string
                        YLeaf flr_calculation_interval; //type: uint32

                    class SpecificOptions : public Entity
                    {
                        public:
                            SpecificOptions();
                            ~SpecificOptions();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf oper_type; //type: SlaOperOperationEnum

                        class ConfiguredOperationOptions : public Entity
                        {
                            public:
                                ConfiguredOperationOptions();
                                ~ConfiguredOperationOptions();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf profile_name; //type: string



                        }; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::ConfiguredOperationOptions


                        class OndemandOperationOptions : public Entity
                        {
                            public:
                                OndemandOperationOptions();
                                ~OndemandOperationOptions();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf ondemand_operation_id; //type: uint32
                                YLeaf probe_count; //type: uint8



                        }; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::OndemandOperationOptions


                            std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::ConfiguredOperationOptions> configured_operation_options;
                            std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::OndemandOperationOptions> ondemand_operation_options;


                    }; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions


                    class OperationSchedule : public Entity
                    {
                        public:
                            OperationSchedule();
                            ~OperationSchedule();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf start_time; //type: uint32
                            YLeaf start_time_configured; //type: boolean
                            YLeaf schedule_duration; //type: uint32
                            YLeaf schedule_interval; //type: uint32



                    }; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationSchedule


                    class OperationMetric : public Entity
                    {
                        public:
                            OperationMetric();
                            ~OperationMetric();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Config : public Entity
                        {
                            public:
                                Config();
                                ~Config();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf metric_type; //type: SlaRecordableMetricEnum
                                YLeaf bins_count; //type: uint16
                                YLeaf bins_width; //type: uint16
                                YLeaf bucket_size; //type: uint8
                                YLeaf bucket_size_unit; //type: SlaBucketSizeEnum
                                YLeaf buckets_archive; //type: uint32



                        }; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Config


                        class Bucket : public Entity
                        {
                            public:
                                Bucket();
                                ~Bucket();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf start_at; //type: uint32
                                YLeaf duration; //type: uint32
                                YLeaf sent; //type: uint32
                                YLeaf lost; //type: uint32
                                YLeaf corrupt; //type: uint32
                                YLeaf out_of_order; //type: uint32
                                YLeaf duplicates; //type: uint32
                                YLeaf minimum; //type: int32
                                YLeaf maximum; //type: int32
                                YLeaf time_of_minimum; //type: uint32
                                YLeaf time_of_maximum; //type: uint32
                                YLeaf average; //type: int32
                                YLeaf standard_deviation; //type: int32
                                YLeaf result_count; //type: uint32
                                YLeaf data_sent_count; //type: uint32
                                YLeaf data_lost_count; //type: uint32
                                YLeaf overall_flr; //type: int32
                                YLeaf suspect_start_mid_bucket; //type: boolean
                                YLeaf suspect_schedule_latency; //type: boolean
                                YLeaf suspect_send_fail; //type: boolean
                                YLeaf suspect_premature_end; //type: boolean
                                YLeaf suspect_clock_drift; //type: boolean
                                YLeaf suspect_memory_allocation_failed; //type: boolean
                                YLeaf suspect_cleared_mid_bucket; //type: boolean
                                YLeaf suspect_probe_restarted; //type: boolean
                                YLeaf suspect_management_latency; //type: boolean
                                YLeaf suspect_multiple_buckets; //type: boolean
                                YLeaf suspect_misordering; //type: boolean
                                YLeaf suspect_flr_low_packet_count; //type: boolean
                                YLeaf premature_reason; //type: uint32
                                YLeaf premature_reason_string; //type: string

                            class Contents : public Entity
                            {
                                public:
                                    Contents();
                                    ~Contents();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf bucket_type; //type: SlaOperBucketEnum

                                class Aggregated : public Entity
                                {
                                    public:
                                        Aggregated();
                                        ~Aggregated();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Bins : public Entity
                                    {
                                        public:
                                            Bins();
                                            ~Bins();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf lower_bound; //type: int32
                                            YLeaf upper_bound; //type: int32
                                            YLeaf lower_bound_tenths; //type: int32
                                            YLeaf upper_bound_tenths; //type: int32
                                            YLeaf sum; //type: int64
                                            YLeaf count; //type: uint32



                                    }; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins> > bins;


                                }; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated


                                class Unaggregated : public Entity
                                {
                                    public:
                                        Unaggregated();
                                        ~Unaggregated();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Sample : public Entity
                                    {
                                        public:
                                            Sample();
                                            ~Sample();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf sent_at; //type: uint32
                                            YLeaf sent; //type: boolean
                                            YLeaf timed_out; //type: boolean
                                            YLeaf corrupt; //type: boolean
                                            YLeaf out_of_order; //type: boolean
                                            YLeaf no_data_packets; //type: boolean
                                            YLeaf result; //type: int32
                                            YLeaf frames_sent; //type: uint32
                                            YLeaf frames_lost; //type: uint32



                                    }; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample> > sample;


                                }; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated


                                    std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated> aggregated;
                                    std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated> unaggregated;


                            }; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents


                                std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents> contents;


                        }; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket


                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket> > bucket;
                            std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Config> config;


                    }; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric> > operation_metric;
                        std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationSchedule> operation_schedule;
                        std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions> specific_options;


                }; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent> > statistics_current;


            }; // Sla::Protocols::Ethernet::StatisticsCurrents


                std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::ConfigErrors> config_errors;
                std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::OnDemandOperations> on_demand_operations;
                std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::Operations> operations;
                std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents> statistics_currents;
                std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals> statistics_historicals;
                std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents> statistics_on_demand_currents;
                std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals> statistics_on_demand_historicals;


        }; // Sla::Protocols::Ethernet


            std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet> ethernet;


    }; // Sla::Protocols


        std::unique_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols> protocols;


}; // Sla

class SlaNodes : public Entity
{
    public:
        SlaNodes();
        ~SlaNodes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;





}; // SlaNodes



}
}

#endif /* _CISCO_IOS_XR_INFRA_SLA_OPER_ */

