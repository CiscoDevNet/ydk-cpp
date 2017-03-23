#ifndef _CISCO_IOS_XR_INFRA_SLA_OPER_
#define _CISCO_IOS_XR_INFRA_SLA_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


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
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Protocols; //type: Sla::Protocols

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols> protocols;


}; // Sla


class Sla::Protocols : public Entity
{
    public:
        Protocols();
        ~Protocols();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ethernet; //type: Sla::Protocols::Ethernet

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet> ethernet;


}; // Sla::Protocols


class Sla::Protocols::Ethernet : public Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StatisticsOnDemandCurrents; //type: Sla::Protocols::Ethernet::StatisticsOnDemandCurrents
        class Operations; //type: Sla::Protocols::Ethernet::Operations
        class StatisticsHistoricals; //type: Sla::Protocols::Ethernet::StatisticsHistoricals
        class StatisticsOnDemandHistoricals; //type: Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals
        class ConfigErrors; //type: Sla::Protocols::Ethernet::ConfigErrors
        class OnDemandOperations; //type: Sla::Protocols::Ethernet::OnDemandOperations
        class StatisticsCurrents; //type: Sla::Protocols::Ethernet::StatisticsCurrents

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::ConfigErrors> config_errors;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::OnDemandOperations> on_demand_operations;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::Operations> operations;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents> statistics_currents;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals> statistics_historicals;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents> statistics_on_demand_currents;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals> statistics_on_demand_historicals;


}; // Sla::Protocols::Ethernet


class Sla::Protocols::Ethernet::StatisticsOnDemandCurrents : public Entity
{
    public:
        StatisticsOnDemandCurrents();
        ~StatisticsOnDemandCurrents();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StatisticsOnDemandCurrent; //type: Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent> > statistics_on_demand_current;


}; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents


class Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent : public Entity
{
    public:
        StatisticsOnDemandCurrent();
        ~StatisticsOnDemandCurrent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf operation_id; //type: uint32
        YLeaf domain_name; //type: string
        YLeaf interface_name; //type: string
        YLeaf mep_id; //type: uint32
        YLeaf mac_address; //type: string
        YLeaf probe_type; //type: string
        YLeaf display_short; //type: string
        YLeaf display_long; //type: string
        YLeaf flr_calculation_interval; //type: uint32

        class SpecificOptions; //type: Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions
        class OperationSchedule; //type: Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationSchedule
        class OperationMetric; //type: Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric> > operation_metric;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationSchedule> operation_schedule;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions> specific_options;


}; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent


class Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions : public Entity
{
    public:
        SpecificOptions();
        ~SpecificOptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf oper_type; //type: SlaOperOperationEnum

        class ConfiguredOperationOptions; //type: Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::ConfiguredOperationOptions
        class OndemandOperationOptions; //type: Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::OndemandOperationOptions

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::ConfiguredOperationOptions> configured_operation_options;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::OndemandOperationOptions> ondemand_operation_options;


}; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions


class Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::ConfiguredOperationOptions : public Entity
{
    public:
        ConfiguredOperationOptions();
        ~ConfiguredOperationOptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile_name; //type: string



}; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::ConfiguredOperationOptions


class Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::OndemandOperationOptions : public Entity
{
    public:
        OndemandOperationOptions();
        ~OndemandOperationOptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ondemand_operation_id; //type: uint32
        YLeaf probe_count; //type: uint8



}; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::OndemandOperationOptions


class Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationSchedule : public Entity
{
    public:
        OperationSchedule();
        ~OperationSchedule();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: uint32
        YLeaf start_time_configured; //type: boolean
        YLeaf schedule_duration; //type: uint32
        YLeaf schedule_interval; //type: uint32



}; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationSchedule


class Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric : public Entity
{
    public:
        OperationMetric();
        ~OperationMetric();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Config
        class Bucket; //type: Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket> > bucket;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Config> config;


}; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric


class Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf metric_type; //type: SlaRecordableMetricEnum
        YLeaf bins_count; //type: uint16
        YLeaf bins_width; //type: uint16
        YLeaf bucket_size; //type: uint8
        YLeaf bucket_size_unit; //type: SlaBucketSizeEnum
        YLeaf buckets_archive; //type: uint32



}; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Config


class Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket : public Entity
{
    public:
        Bucket();
        ~Bucket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class Contents; //type: Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents> contents;


}; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket


class Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents : public Entity
{
    public:
        Contents();
        ~Contents();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bucket_type; //type: SlaOperBucketEnum

        class Aggregated; //type: Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated
        class Unaggregated; //type: Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated> aggregated;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated> unaggregated;


}; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents


class Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated : public Entity
{
    public:
        Aggregated();
        ~Aggregated();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Bins; //type: Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins> > bins;


}; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated


class Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins : public Entity
{
    public:
        Bins();
        ~Bins();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lower_bound; //type: int32
        YLeaf upper_bound; //type: int32
        YLeaf lower_bound_tenths; //type: int32
        YLeaf upper_bound_tenths; //type: int32
        YLeaf sum; //type: int64
        YLeaf count; //type: uint32



}; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins


class Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated : public Entity
{
    public:
        Unaggregated();
        ~Unaggregated();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sample; //type: Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample> > sample;


}; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated


class Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample : public Entity
{
    public:
        Sample();
        ~Sample();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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


class Sla::Protocols::Ethernet::Operations : public Entity
{
    public:
        Operations();
        ~Operations();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Operation_; //type: Sla::Protocols::Ethernet::Operations::Operation_

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::Operations::Operation_> > operation_;


}; // Sla::Protocols::Ethernet::Operations


class Sla::Protocols::Ethernet::Operations::Operation_ : public Entity
{
    public:
        Operation_();
        ~Operation_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile_name; //type: string
        YLeaf domain_name; //type: string
        YLeaf interface_name; //type: string
        YLeaf mep_id; //type: uint32
        YLeaf mac_address; //type: string
        YLeaf display_short; //type: string
        YLeaf display_long; //type: string
        YLeaf last_run; //type: uint32

        class ProfileOptions; //type: Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions
        class SpecificOptions; //type: Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions> profile_options;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions> specific_options;


}; // Sla::Protocols::Ethernet::Operations::Operation_


class Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions : public Entity
{
    public:
        ProfileOptions();
        ~ProfileOptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf probe_type; //type: string
        YLeaf packets_per_burst; //type: uint16
        YLeaf inter_packet_interval; //type: uint16
        YLeaf bursts_per_probe; //type: uint32
        YLeaf inter_burst_interval; //type: uint32
        YLeaf flr_calculation_interval; //type: uint32

        class PacketPadding; //type: Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::PacketPadding
        class Priority; //type: Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::Priority
        class OperationSchedule; //type: Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationSchedule
        class OperationMetric; //type: Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric> > operation_metric;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationSchedule> operation_schedule;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::PacketPadding> packet_padding;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::Priority> priority;


}; // Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions


class Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::PacketPadding : public Entity
{
    public:
        PacketPadding();
        ~PacketPadding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_pad_size; //type: uint16
        YLeaf test_pattern_pad_scheme; //type: SlaOperTestPatternSchemeEnum
        YLeaf test_pattern_pad_hex_string; //type: uint32



}; // Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::PacketPadding


class Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf priority_type; //type: SlaOperPacketPriorityEnum
        YLeaf cos; //type: uint8



}; // Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::Priority


class Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationSchedule : public Entity
{
    public:
        OperationSchedule();
        ~OperationSchedule();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: uint32
        YLeaf start_time_configured; //type: boolean
        YLeaf schedule_duration; //type: uint32
        YLeaf schedule_interval; //type: uint32



}; // Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationSchedule


class Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric : public Entity
{
    public:
        OperationMetric();
        ~OperationMetric();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf current_buckets_archive; //type: uint32

        class MetricConfig; //type: Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric::MetricConfig

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric::MetricConfig> metric_config;


}; // Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric


class Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric::MetricConfig : public Entity
{
    public:
        MetricConfig();
        ~MetricConfig();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf metric_type; //type: SlaRecordableMetricEnum
        YLeaf bins_count; //type: uint16
        YLeaf bins_width; //type: uint16
        YLeaf bucket_size; //type: uint8
        YLeaf bucket_size_unit; //type: SlaBucketSizeEnum
        YLeaf buckets_archive; //type: uint32



}; // Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric::MetricConfig


class Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions : public Entity
{
    public:
        SpecificOptions();
        ~SpecificOptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf oper_type; //type: SlaOperOperationEnum

        class ConfiguredOperationOptions; //type: Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::ConfiguredOperationOptions
        class OndemandOperationOptions; //type: Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::OndemandOperationOptions

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::ConfiguredOperationOptions> configured_operation_options;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::OndemandOperationOptions> ondemand_operation_options;


}; // Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions


class Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::ConfiguredOperationOptions : public Entity
{
    public:
        ConfiguredOperationOptions();
        ~ConfiguredOperationOptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile_name; //type: string



}; // Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::ConfiguredOperationOptions


class Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::OndemandOperationOptions : public Entity
{
    public:
        OndemandOperationOptions();
        ~OndemandOperationOptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ondemand_operation_id; //type: uint32
        YLeaf probe_count; //type: uint8



}; // Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::OndemandOperationOptions


class Sla::Protocols::Ethernet::StatisticsHistoricals : public Entity
{
    public:
        StatisticsHistoricals();
        ~StatisticsHistoricals();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StatisticsHistorical; //type: Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical> > statistics_historical;


}; // Sla::Protocols::Ethernet::StatisticsHistoricals


class Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical : public Entity
{
    public:
        StatisticsHistorical();
        ~StatisticsHistorical();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile_name; //type: string
        YLeaf domain_name; //type: string
        YLeaf interface_name; //type: string
        YLeaf mep_id; //type: uint32
        YLeaf mac_address; //type: string
        YLeaf probe_type; //type: string
        YLeaf display_short; //type: string
        YLeaf display_long; //type: string
        YLeaf flr_calculation_interval; //type: uint32

        class SpecificOptions; //type: Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions
        class OperationSchedule; //type: Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationSchedule
        class OperationMetric; //type: Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric> > operation_metric;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationSchedule> operation_schedule;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions> specific_options;


}; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical


class Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions : public Entity
{
    public:
        SpecificOptions();
        ~SpecificOptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf oper_type; //type: SlaOperOperationEnum

        class ConfiguredOperationOptions; //type: Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::ConfiguredOperationOptions
        class OndemandOperationOptions; //type: Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::OndemandOperationOptions

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::ConfiguredOperationOptions> configured_operation_options;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::OndemandOperationOptions> ondemand_operation_options;


}; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions


class Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::ConfiguredOperationOptions : public Entity
{
    public:
        ConfiguredOperationOptions();
        ~ConfiguredOperationOptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile_name; //type: string



}; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::ConfiguredOperationOptions


class Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::OndemandOperationOptions : public Entity
{
    public:
        OndemandOperationOptions();
        ~OndemandOperationOptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ondemand_operation_id; //type: uint32
        YLeaf probe_count; //type: uint8



}; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::OndemandOperationOptions


class Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationSchedule : public Entity
{
    public:
        OperationSchedule();
        ~OperationSchedule();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: uint32
        YLeaf start_time_configured; //type: boolean
        YLeaf schedule_duration; //type: uint32
        YLeaf schedule_interval; //type: uint32



}; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationSchedule


class Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric : public Entity
{
    public:
        OperationMetric();
        ~OperationMetric();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Config
        class Bucket; //type: Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket> > bucket;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Config> config;


}; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric


class Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf metric_type; //type: SlaRecordableMetricEnum
        YLeaf bins_count; //type: uint16
        YLeaf bins_width; //type: uint16
        YLeaf bucket_size; //type: uint8
        YLeaf bucket_size_unit; //type: SlaBucketSizeEnum
        YLeaf buckets_archive; //type: uint32



}; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Config


class Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket : public Entity
{
    public:
        Bucket();
        ~Bucket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class Contents; //type: Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents> contents;


}; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket


class Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents : public Entity
{
    public:
        Contents();
        ~Contents();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bucket_type; //type: SlaOperBucketEnum

        class Aggregated; //type: Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated
        class Unaggregated; //type: Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated> aggregated;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated> unaggregated;


}; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents


class Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated : public Entity
{
    public:
        Aggregated();
        ~Aggregated();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Bins; //type: Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins> > bins;


}; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated


class Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins : public Entity
{
    public:
        Bins();
        ~Bins();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lower_bound; //type: int32
        YLeaf upper_bound; //type: int32
        YLeaf lower_bound_tenths; //type: int32
        YLeaf upper_bound_tenths; //type: int32
        YLeaf sum; //type: int64
        YLeaf count; //type: uint32



}; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins


class Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated : public Entity
{
    public:
        Unaggregated();
        ~Unaggregated();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sample; //type: Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample> > sample;


}; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated


class Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample : public Entity
{
    public:
        Sample();
        ~Sample();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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


class Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals : public Entity
{
    public:
        StatisticsOnDemandHistoricals();
        ~StatisticsOnDemandHistoricals();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StatisticsOnDemandHistorical; //type: Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical> > statistics_on_demand_historical;


}; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals


class Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical : public Entity
{
    public:
        StatisticsOnDemandHistorical();
        ~StatisticsOnDemandHistorical();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf operation_id; //type: uint32
        YLeaf domain_name; //type: string
        YLeaf interface_name; //type: string
        YLeaf mep_id; //type: uint32
        YLeaf mac_address; //type: string
        YLeaf probe_type; //type: string
        YLeaf display_short; //type: string
        YLeaf display_long; //type: string
        YLeaf flr_calculation_interval; //type: uint32

        class SpecificOptions; //type: Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions
        class OperationSchedule; //type: Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationSchedule
        class OperationMetric; //type: Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric> > operation_metric;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationSchedule> operation_schedule;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions> specific_options;


}; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical


class Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions : public Entity
{
    public:
        SpecificOptions();
        ~SpecificOptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf oper_type; //type: SlaOperOperationEnum

        class ConfiguredOperationOptions; //type: Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::ConfiguredOperationOptions
        class OndemandOperationOptions; //type: Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::OndemandOperationOptions

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::ConfiguredOperationOptions> configured_operation_options;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::OndemandOperationOptions> ondemand_operation_options;


}; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions


class Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::ConfiguredOperationOptions : public Entity
{
    public:
        ConfiguredOperationOptions();
        ~ConfiguredOperationOptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile_name; //type: string



}; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::ConfiguredOperationOptions


class Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::OndemandOperationOptions : public Entity
{
    public:
        OndemandOperationOptions();
        ~OndemandOperationOptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ondemand_operation_id; //type: uint32
        YLeaf probe_count; //type: uint8



}; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::OndemandOperationOptions


class Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationSchedule : public Entity
{
    public:
        OperationSchedule();
        ~OperationSchedule();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: uint32
        YLeaf start_time_configured; //type: boolean
        YLeaf schedule_duration; //type: uint32
        YLeaf schedule_interval; //type: uint32



}; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationSchedule


class Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric : public Entity
{
    public:
        OperationMetric();
        ~OperationMetric();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Config
        class Bucket; //type: Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket> > bucket;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Config> config;


}; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric


class Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf metric_type; //type: SlaRecordableMetricEnum
        YLeaf bins_count; //type: uint16
        YLeaf bins_width; //type: uint16
        YLeaf bucket_size; //type: uint8
        YLeaf bucket_size_unit; //type: SlaBucketSizeEnum
        YLeaf buckets_archive; //type: uint32



}; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Config


class Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket : public Entity
{
    public:
        Bucket();
        ~Bucket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class Contents; //type: Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents> contents;


}; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket


class Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents : public Entity
{
    public:
        Contents();
        ~Contents();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bucket_type; //type: SlaOperBucketEnum

        class Aggregated; //type: Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated
        class Unaggregated; //type: Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated> aggregated;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated> unaggregated;


}; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents


class Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated : public Entity
{
    public:
        Aggregated();
        ~Aggregated();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Bins; //type: Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins> > bins;


}; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated


class Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins : public Entity
{
    public:
        Bins();
        ~Bins();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lower_bound; //type: int32
        YLeaf upper_bound; //type: int32
        YLeaf lower_bound_tenths; //type: int32
        YLeaf upper_bound_tenths; //type: int32
        YLeaf sum; //type: int64
        YLeaf count; //type: uint32



}; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins


class Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated : public Entity
{
    public:
        Unaggregated();
        ~Unaggregated();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sample; //type: Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample> > sample;


}; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated


class Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample : public Entity
{
    public:
        Sample();
        ~Sample();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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


class Sla::Protocols::Ethernet::ConfigErrors : public Entity
{
    public:
        ConfigErrors();
        ~ConfigErrors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ConfigError; //type: Sla::Protocols::Ethernet::ConfigErrors::ConfigError

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::ConfigErrors::ConfigError> > config_error;


}; // Sla::Protocols::Ethernet::ConfigErrors


class Sla::Protocols::Ethernet::ConfigErrors::ConfigError : public Entity
{
    public:
        ConfigError();
        ~ConfigError();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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


class Sla::Protocols::Ethernet::OnDemandOperations : public Entity
{
    public:
        OnDemandOperations();
        ~OnDemandOperations();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OnDemandOperation; //type: Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation> > on_demand_operation;


}; // Sla::Protocols::Ethernet::OnDemandOperations


class Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation : public Entity
{
    public:
        OnDemandOperation();
        ~OnDemandOperation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf operation_id; //type: uint32
        YLeaf domain_name; //type: string
        YLeaf interface_name; //type: string
        YLeaf mep_id; //type: uint32
        YLeaf mac_address; //type: string
        YLeaf display_short; //type: string
        YLeaf display_long; //type: string
        YLeaf last_run; //type: uint32

        class ProfileOptions; //type: Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions
        class SpecificOptions; //type: Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions> profile_options;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions> specific_options;


}; // Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation


class Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions : public Entity
{
    public:
        ProfileOptions();
        ~ProfileOptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf probe_type; //type: string
        YLeaf packets_per_burst; //type: uint16
        YLeaf inter_packet_interval; //type: uint16
        YLeaf bursts_per_probe; //type: uint32
        YLeaf inter_burst_interval; //type: uint32
        YLeaf flr_calculation_interval; //type: uint32

        class PacketPadding; //type: Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::PacketPadding
        class Priority; //type: Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::Priority
        class OperationSchedule; //type: Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationSchedule
        class OperationMetric; //type: Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric> > operation_metric;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationSchedule> operation_schedule;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::PacketPadding> packet_padding;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::Priority> priority;


}; // Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions


class Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::PacketPadding : public Entity
{
    public:
        PacketPadding();
        ~PacketPadding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_pad_size; //type: uint16
        YLeaf test_pattern_pad_scheme; //type: SlaOperTestPatternSchemeEnum
        YLeaf test_pattern_pad_hex_string; //type: uint32



}; // Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::PacketPadding


class Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf priority_type; //type: SlaOperPacketPriorityEnum
        YLeaf cos; //type: uint8



}; // Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::Priority


class Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationSchedule : public Entity
{
    public:
        OperationSchedule();
        ~OperationSchedule();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: uint32
        YLeaf start_time_configured; //type: boolean
        YLeaf schedule_duration; //type: uint32
        YLeaf schedule_interval; //type: uint32



}; // Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationSchedule


class Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric : public Entity
{
    public:
        OperationMetric();
        ~OperationMetric();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf current_buckets_archive; //type: uint32

        class MetricConfig; //type: Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric::MetricConfig

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric::MetricConfig> metric_config;


}; // Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric


class Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric::MetricConfig : public Entity
{
    public:
        MetricConfig();
        ~MetricConfig();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf metric_type; //type: SlaRecordableMetricEnum
        YLeaf bins_count; //type: uint16
        YLeaf bins_width; //type: uint16
        YLeaf bucket_size; //type: uint8
        YLeaf bucket_size_unit; //type: SlaBucketSizeEnum
        YLeaf buckets_archive; //type: uint32



}; // Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric::MetricConfig


class Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions : public Entity
{
    public:
        SpecificOptions();
        ~SpecificOptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf oper_type; //type: SlaOperOperationEnum

        class ConfiguredOperationOptions; //type: Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::ConfiguredOperationOptions
        class OndemandOperationOptions; //type: Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::OndemandOperationOptions

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::ConfiguredOperationOptions> configured_operation_options;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::OndemandOperationOptions> ondemand_operation_options;


}; // Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions


class Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::ConfiguredOperationOptions : public Entity
{
    public:
        ConfiguredOperationOptions();
        ~ConfiguredOperationOptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile_name; //type: string



}; // Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::ConfiguredOperationOptions


class Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::OndemandOperationOptions : public Entity
{
    public:
        OndemandOperationOptions();
        ~OndemandOperationOptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ondemand_operation_id; //type: uint32
        YLeaf probe_count; //type: uint8



}; // Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::OndemandOperationOptions


class Sla::Protocols::Ethernet::StatisticsCurrents : public Entity
{
    public:
        StatisticsCurrents();
        ~StatisticsCurrents();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StatisticsCurrent; //type: Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent> > statistics_current;


}; // Sla::Protocols::Ethernet::StatisticsCurrents


class Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent : public Entity
{
    public:
        StatisticsCurrent();
        ~StatisticsCurrent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile_name; //type: string
        YLeaf domain_name; //type: string
        YLeaf interface_name; //type: string
        YLeaf mep_id; //type: uint32
        YLeaf mac_address; //type: string
        YLeaf probe_type; //type: string
        YLeaf display_short; //type: string
        YLeaf display_long; //type: string
        YLeaf flr_calculation_interval; //type: uint32

        class SpecificOptions; //type: Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions
        class OperationSchedule; //type: Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationSchedule
        class OperationMetric; //type: Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric> > operation_metric;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationSchedule> operation_schedule;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions> specific_options;


}; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent


class Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions : public Entity
{
    public:
        SpecificOptions();
        ~SpecificOptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf oper_type; //type: SlaOperOperationEnum

        class ConfiguredOperationOptions; //type: Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::ConfiguredOperationOptions
        class OndemandOperationOptions; //type: Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::OndemandOperationOptions

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::ConfiguredOperationOptions> configured_operation_options;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::OndemandOperationOptions> ondemand_operation_options;


}; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions


class Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::ConfiguredOperationOptions : public Entity
{
    public:
        ConfiguredOperationOptions();
        ~ConfiguredOperationOptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile_name; //type: string



}; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::ConfiguredOperationOptions


class Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::OndemandOperationOptions : public Entity
{
    public:
        OndemandOperationOptions();
        ~OndemandOperationOptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ondemand_operation_id; //type: uint32
        YLeaf probe_count; //type: uint8



}; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::OndemandOperationOptions


class Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationSchedule : public Entity
{
    public:
        OperationSchedule();
        ~OperationSchedule();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: uint32
        YLeaf start_time_configured; //type: boolean
        YLeaf schedule_duration; //type: uint32
        YLeaf schedule_interval; //type: uint32



}; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationSchedule


class Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric : public Entity
{
    public:
        OperationMetric();
        ~OperationMetric();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Config
        class Bucket; //type: Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket> > bucket;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Config> config;


}; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric


class Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf metric_type; //type: SlaRecordableMetricEnum
        YLeaf bins_count; //type: uint16
        YLeaf bins_width; //type: uint16
        YLeaf bucket_size; //type: uint8
        YLeaf bucket_size_unit; //type: SlaBucketSizeEnum
        YLeaf buckets_archive; //type: uint32



}; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Config


class Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket : public Entity
{
    public:
        Bucket();
        ~Bucket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class Contents; //type: Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents> contents;


}; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket


class Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents : public Entity
{
    public:
        Contents();
        ~Contents();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bucket_type; //type: SlaOperBucketEnum

        class Aggregated; //type: Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated
        class Unaggregated; //type: Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated> aggregated;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated> unaggregated;


}; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents


class Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated : public Entity
{
    public:
        Aggregated();
        ~Aggregated();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Bins; //type: Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins> > bins;


}; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated


class Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins : public Entity
{
    public:
        Bins();
        ~Bins();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lower_bound; //type: int32
        YLeaf upper_bound; //type: int32
        YLeaf lower_bound_tenths; //type: int32
        YLeaf upper_bound_tenths; //type: int32
        YLeaf sum; //type: int64
        YLeaf count; //type: uint32



}; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins


class Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated : public Entity
{
    public:
        Unaggregated();
        ~Unaggregated();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sample; //type: Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample> > sample;


}; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated


class Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample : public Entity
{
    public:
        Sample();
        ~Sample();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

class SlaNodes : public Entity
{
    public:
        SlaNodes();
        ~SlaNodes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;





}; // SlaNodes


}
}

#endif /* _CISCO_IOS_XR_INFRA_SLA_OPER_ */

