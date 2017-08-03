#ifndef _CISCO_IOS_XR_INFRA_SLA_OPER_
#define _CISCO_IOS_XR_INFRA_SLA_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_sla_oper {

class Sla : public ydk::Entity
{
    public:
        Sla();
        ~Sla();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class Protocols; //type: Sla::Protocols

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols> protocols;
        
}; // Sla


class Sla::Protocols : public ydk::Entity
{
    public:
        Protocols();
        ~Protocols();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ethernet; //type: Sla::Protocols::Ethernet

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet> ethernet;
        
}; // Sla::Protocols


class Sla::Protocols::Ethernet : public ydk::Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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


class Sla::Protocols::Ethernet::StatisticsOnDemandCurrents : public ydk::Entity
{
    public:
        StatisticsOnDemandCurrents();
        ~StatisticsOnDemandCurrents();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StatisticsOnDemandCurrent; //type: Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent> > statistics_on_demand_current;
        
}; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents


class Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent : public ydk::Entity
{
    public:
        StatisticsOnDemandCurrent();
        ~StatisticsOnDemandCurrent();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operation_id; //type: uint32
        ydk::YLeaf domain_name; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf mep_id; //type: uint32
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf probe_type; //type: string
        ydk::YLeaf display_short; //type: string
        ydk::YLeaf display_long; //type: string
        ydk::YLeaf flr_calculation_interval; //type: uint32
        class SpecificOptions; //type: Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions
        class OperationSchedule; //type: Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationSchedule
        class OperationMetric; //type: Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric> > operation_metric;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationSchedule> operation_schedule;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions> specific_options;
        
}; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent


class Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions : public ydk::Entity
{
    public:
        SpecificOptions();
        ~SpecificOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oper_type; //type: SlaOperOperation
        class ConfiguredOperationOptions; //type: Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::ConfiguredOperationOptions
        class OndemandOperationOptions; //type: Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::OndemandOperationOptions

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::ConfiguredOperationOptions> configured_operation_options;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::OndemandOperationOptions> ondemand_operation_options;
        
}; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions


class Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::ConfiguredOperationOptions : public ydk::Entity
{
    public:
        ConfiguredOperationOptions();
        ~ConfiguredOperationOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string

}; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::ConfiguredOperationOptions


class Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::OndemandOperationOptions : public ydk::Entity
{
    public:
        OndemandOperationOptions();
        ~OndemandOperationOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ondemand_operation_id; //type: uint32
        ydk::YLeaf probe_count; //type: uint8

}; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::OndemandOperationOptions


class Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationSchedule : public ydk::Entity
{
    public:
        OperationSchedule();
        ~OperationSchedule();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: uint32
        ydk::YLeaf start_time_configured; //type: boolean
        ydk::YLeaf schedule_duration; //type: uint32
        ydk::YLeaf schedule_interval; //type: uint32

}; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationSchedule


class Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric : public ydk::Entity
{
    public:
        OperationMetric();
        ~OperationMetric();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Config
        class Bucket; //type: Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket> > bucket;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Config> config;
        
}; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric


class Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_type; //type: SlaRecordableMetric
        ydk::YLeaf bins_count; //type: uint16
        ydk::YLeaf bins_width; //type: uint16
        ydk::YLeaf bucket_size; //type: uint8
        ydk::YLeaf bucket_size_unit; //type: SlaBucketSize
        ydk::YLeaf buckets_archive; //type: uint32

}; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Config


class Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket : public ydk::Entity
{
    public:
        Bucket();
        ~Bucket();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_at; //type: uint32
        ydk::YLeaf duration; //type: uint32
        ydk::YLeaf sent; //type: uint32
        ydk::YLeaf lost; //type: uint32
        ydk::YLeaf corrupt; //type: uint32
        ydk::YLeaf out_of_order; //type: uint32
        ydk::YLeaf duplicates; //type: uint32
        ydk::YLeaf minimum; //type: int32
        ydk::YLeaf maximum; //type: int32
        ydk::YLeaf time_of_minimum; //type: uint32
        ydk::YLeaf time_of_maximum; //type: uint32
        ydk::YLeaf average; //type: int32
        ydk::YLeaf standard_deviation; //type: int32
        ydk::YLeaf result_count; //type: uint32
        ydk::YLeaf data_sent_count; //type: uint32
        ydk::YLeaf data_lost_count; //type: uint32
        ydk::YLeaf overall_flr; //type: int32
        ydk::YLeaf suspect_start_mid_bucket; //type: boolean
        ydk::YLeaf suspect_schedule_latency; //type: boolean
        ydk::YLeaf suspect_send_fail; //type: boolean
        ydk::YLeaf suspect_premature_end; //type: boolean
        ydk::YLeaf suspect_clock_drift; //type: boolean
        ydk::YLeaf suspect_memory_allocation_failed; //type: boolean
        ydk::YLeaf suspect_cleared_mid_bucket; //type: boolean
        ydk::YLeaf suspect_probe_restarted; //type: boolean
        ydk::YLeaf suspect_management_latency; //type: boolean
        ydk::YLeaf suspect_multiple_buckets; //type: boolean
        ydk::YLeaf suspect_misordering; //type: boolean
        ydk::YLeaf suspect_flr_low_packet_count; //type: boolean
        ydk::YLeaf premature_reason; //type: uint32
        ydk::YLeaf premature_reason_string; //type: string
        class Contents; //type: Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents> contents;
        
}; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket


class Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents : public ydk::Entity
{
    public:
        Contents();
        ~Contents();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bucket_type; //type: SlaOperBucket
        class Aggregated; //type: Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated
        class Unaggregated; //type: Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated> aggregated;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated> unaggregated;
        
}; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents


class Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated : public ydk::Entity
{
    public:
        Aggregated();
        ~Aggregated();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bins; //type: Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins> > bins;
        
}; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated


class Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins : public ydk::Entity
{
    public:
        Bins();
        ~Bins();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lower_bound; //type: int32
        ydk::YLeaf upper_bound; //type: int32
        ydk::YLeaf lower_bound_tenths; //type: int32
        ydk::YLeaf upper_bound_tenths; //type: int32
        ydk::YLeaf sum; //type: int64
        ydk::YLeaf count; //type: uint32

}; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins


class Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated : public ydk::Entity
{
    public:
        Unaggregated();
        ~Unaggregated();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sample; //type: Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample> > sample;
        
}; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated


class Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample : public ydk::Entity
{
    public:
        Sample();
        ~Sample();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_at; //type: uint32
        ydk::YLeaf sent; //type: boolean
        ydk::YLeaf timed_out; //type: boolean
        ydk::YLeaf corrupt; //type: boolean
        ydk::YLeaf out_of_order; //type: boolean
        ydk::YLeaf no_data_packets; //type: boolean
        ydk::YLeaf result; //type: int32
        ydk::YLeaf frames_sent; //type: uint32
        ydk::YLeaf frames_lost; //type: uint32

}; // Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample


class Sla::Protocols::Ethernet::Operations : public ydk::Entity
{
    public:
        Operations();
        ~Operations();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Operation_; //type: Sla::Protocols::Ethernet::Operations::Operation_

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::Operations::Operation_> > operation_;
        
}; // Sla::Protocols::Ethernet::Operations


class Sla::Protocols::Ethernet::Operations::Operation_ : public ydk::Entity
{
    public:
        Operation_();
        ~Operation_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string
        ydk::YLeaf domain_name; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf mep_id; //type: uint32
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf display_short; //type: string
        ydk::YLeaf display_long; //type: string
        ydk::YLeaf last_run; //type: uint32
        class ProfileOptions; //type: Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions
        class SpecificOptions; //type: Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions> profile_options;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions> specific_options;
        
}; // Sla::Protocols::Ethernet::Operations::Operation_


class Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions : public ydk::Entity
{
    public:
        ProfileOptions();
        ~ProfileOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf probe_type; //type: string
        ydk::YLeaf packets_per_burst; //type: uint16
        ydk::YLeaf inter_packet_interval; //type: uint16
        ydk::YLeaf bursts_per_probe; //type: uint32
        ydk::YLeaf inter_burst_interval; //type: uint32
        ydk::YLeaf flr_calculation_interval; //type: uint32
        class PacketPadding; //type: Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::PacketPadding
        class Priority; //type: Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::Priority
        class OperationSchedule; //type: Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationSchedule
        class OperationMetric; //type: Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric> > operation_metric;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationSchedule> operation_schedule;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::PacketPadding> packet_padding;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::Priority> priority;
        
}; // Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions


class Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::PacketPadding : public ydk::Entity
{
    public:
        PacketPadding();
        ~PacketPadding();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_pad_size; //type: uint16
        ydk::YLeaf test_pattern_pad_scheme; //type: SlaOperTestPatternScheme
        ydk::YLeaf test_pattern_pad_hex_string; //type: uint32

}; // Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::PacketPadding


class Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority_type; //type: SlaOperPacketPriority
        ydk::YLeaf cos; //type: uint8

}; // Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::Priority


class Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationSchedule : public ydk::Entity
{
    public:
        OperationSchedule();
        ~OperationSchedule();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: uint32
        ydk::YLeaf start_time_configured; //type: boolean
        ydk::YLeaf schedule_duration; //type: uint32
        ydk::YLeaf schedule_interval; //type: uint32

}; // Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationSchedule


class Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric : public ydk::Entity
{
    public:
        OperationMetric();
        ~OperationMetric();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf current_buckets_archive; //type: uint32
        class MetricConfig; //type: Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric::MetricConfig

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric::MetricConfig> metric_config;
        
}; // Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric


class Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric::MetricConfig : public ydk::Entity
{
    public:
        MetricConfig();
        ~MetricConfig();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_type; //type: SlaRecordableMetric
        ydk::YLeaf bins_count; //type: uint16
        ydk::YLeaf bins_width; //type: uint16
        ydk::YLeaf bucket_size; //type: uint8
        ydk::YLeaf bucket_size_unit; //type: SlaBucketSize
        ydk::YLeaf buckets_archive; //type: uint32

}; // Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric::MetricConfig


class Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions : public ydk::Entity
{
    public:
        SpecificOptions();
        ~SpecificOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oper_type; //type: SlaOperOperation
        class ConfiguredOperationOptions; //type: Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::ConfiguredOperationOptions
        class OndemandOperationOptions; //type: Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::OndemandOperationOptions

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::ConfiguredOperationOptions> configured_operation_options;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::OndemandOperationOptions> ondemand_operation_options;
        
}; // Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions


class Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::ConfiguredOperationOptions : public ydk::Entity
{
    public:
        ConfiguredOperationOptions();
        ~ConfiguredOperationOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string

}; // Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::ConfiguredOperationOptions


class Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::OndemandOperationOptions : public ydk::Entity
{
    public:
        OndemandOperationOptions();
        ~OndemandOperationOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ondemand_operation_id; //type: uint32
        ydk::YLeaf probe_count; //type: uint8

}; // Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::OndemandOperationOptions


class Sla::Protocols::Ethernet::StatisticsHistoricals : public ydk::Entity
{
    public:
        StatisticsHistoricals();
        ~StatisticsHistoricals();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StatisticsHistorical; //type: Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical> > statistics_historical;
        
}; // Sla::Protocols::Ethernet::StatisticsHistoricals


class Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical : public ydk::Entity
{
    public:
        StatisticsHistorical();
        ~StatisticsHistorical();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string
        ydk::YLeaf domain_name; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf mep_id; //type: uint32
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf probe_type; //type: string
        ydk::YLeaf display_short; //type: string
        ydk::YLeaf display_long; //type: string
        ydk::YLeaf flr_calculation_interval; //type: uint32
        class SpecificOptions; //type: Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions
        class OperationSchedule; //type: Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationSchedule
        class OperationMetric; //type: Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric> > operation_metric;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationSchedule> operation_schedule;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions> specific_options;
        
}; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical


class Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions : public ydk::Entity
{
    public:
        SpecificOptions();
        ~SpecificOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oper_type; //type: SlaOperOperation
        class ConfiguredOperationOptions; //type: Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::ConfiguredOperationOptions
        class OndemandOperationOptions; //type: Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::OndemandOperationOptions

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::ConfiguredOperationOptions> configured_operation_options;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::OndemandOperationOptions> ondemand_operation_options;
        
}; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions


class Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::ConfiguredOperationOptions : public ydk::Entity
{
    public:
        ConfiguredOperationOptions();
        ~ConfiguredOperationOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string

}; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::ConfiguredOperationOptions


class Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::OndemandOperationOptions : public ydk::Entity
{
    public:
        OndemandOperationOptions();
        ~OndemandOperationOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ondemand_operation_id; //type: uint32
        ydk::YLeaf probe_count; //type: uint8

}; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::OndemandOperationOptions


class Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationSchedule : public ydk::Entity
{
    public:
        OperationSchedule();
        ~OperationSchedule();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: uint32
        ydk::YLeaf start_time_configured; //type: boolean
        ydk::YLeaf schedule_duration; //type: uint32
        ydk::YLeaf schedule_interval; //type: uint32

}; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationSchedule


class Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric : public ydk::Entity
{
    public:
        OperationMetric();
        ~OperationMetric();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Config
        class Bucket; //type: Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket> > bucket;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Config> config;
        
}; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric


class Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_type; //type: SlaRecordableMetric
        ydk::YLeaf bins_count; //type: uint16
        ydk::YLeaf bins_width; //type: uint16
        ydk::YLeaf bucket_size; //type: uint8
        ydk::YLeaf bucket_size_unit; //type: SlaBucketSize
        ydk::YLeaf buckets_archive; //type: uint32

}; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Config


class Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket : public ydk::Entity
{
    public:
        Bucket();
        ~Bucket();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_at; //type: uint32
        ydk::YLeaf duration; //type: uint32
        ydk::YLeaf sent; //type: uint32
        ydk::YLeaf lost; //type: uint32
        ydk::YLeaf corrupt; //type: uint32
        ydk::YLeaf out_of_order; //type: uint32
        ydk::YLeaf duplicates; //type: uint32
        ydk::YLeaf minimum; //type: int32
        ydk::YLeaf maximum; //type: int32
        ydk::YLeaf time_of_minimum; //type: uint32
        ydk::YLeaf time_of_maximum; //type: uint32
        ydk::YLeaf average; //type: int32
        ydk::YLeaf standard_deviation; //type: int32
        ydk::YLeaf result_count; //type: uint32
        ydk::YLeaf data_sent_count; //type: uint32
        ydk::YLeaf data_lost_count; //type: uint32
        ydk::YLeaf overall_flr; //type: int32
        ydk::YLeaf suspect_start_mid_bucket; //type: boolean
        ydk::YLeaf suspect_schedule_latency; //type: boolean
        ydk::YLeaf suspect_send_fail; //type: boolean
        ydk::YLeaf suspect_premature_end; //type: boolean
        ydk::YLeaf suspect_clock_drift; //type: boolean
        ydk::YLeaf suspect_memory_allocation_failed; //type: boolean
        ydk::YLeaf suspect_cleared_mid_bucket; //type: boolean
        ydk::YLeaf suspect_probe_restarted; //type: boolean
        ydk::YLeaf suspect_management_latency; //type: boolean
        ydk::YLeaf suspect_multiple_buckets; //type: boolean
        ydk::YLeaf suspect_misordering; //type: boolean
        ydk::YLeaf suspect_flr_low_packet_count; //type: boolean
        ydk::YLeaf premature_reason; //type: uint32
        ydk::YLeaf premature_reason_string; //type: string
        class Contents; //type: Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents> contents;
        
}; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket


class Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents : public ydk::Entity
{
    public:
        Contents();
        ~Contents();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bucket_type; //type: SlaOperBucket
        class Aggregated; //type: Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated
        class Unaggregated; //type: Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated> aggregated;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated> unaggregated;
        
}; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents


class Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated : public ydk::Entity
{
    public:
        Aggregated();
        ~Aggregated();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bins; //type: Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins> > bins;
        
}; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated


class Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins : public ydk::Entity
{
    public:
        Bins();
        ~Bins();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lower_bound; //type: int32
        ydk::YLeaf upper_bound; //type: int32
        ydk::YLeaf lower_bound_tenths; //type: int32
        ydk::YLeaf upper_bound_tenths; //type: int32
        ydk::YLeaf sum; //type: int64
        ydk::YLeaf count; //type: uint32

}; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins


class Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated : public ydk::Entity
{
    public:
        Unaggregated();
        ~Unaggregated();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sample; //type: Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample> > sample;
        
}; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated


class Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample : public ydk::Entity
{
    public:
        Sample();
        ~Sample();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_at; //type: uint32
        ydk::YLeaf sent; //type: boolean
        ydk::YLeaf timed_out; //type: boolean
        ydk::YLeaf corrupt; //type: boolean
        ydk::YLeaf out_of_order; //type: boolean
        ydk::YLeaf no_data_packets; //type: boolean
        ydk::YLeaf result; //type: int32
        ydk::YLeaf frames_sent; //type: uint32
        ydk::YLeaf frames_lost; //type: uint32

}; // Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample


class Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals : public ydk::Entity
{
    public:
        StatisticsOnDemandHistoricals();
        ~StatisticsOnDemandHistoricals();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StatisticsOnDemandHistorical; //type: Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical> > statistics_on_demand_historical;
        
}; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals


class Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical : public ydk::Entity
{
    public:
        StatisticsOnDemandHistorical();
        ~StatisticsOnDemandHistorical();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operation_id; //type: uint32
        ydk::YLeaf domain_name; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf mep_id; //type: uint32
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf probe_type; //type: string
        ydk::YLeaf display_short; //type: string
        ydk::YLeaf display_long; //type: string
        ydk::YLeaf flr_calculation_interval; //type: uint32
        class SpecificOptions; //type: Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions
        class OperationSchedule; //type: Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationSchedule
        class OperationMetric; //type: Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric> > operation_metric;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationSchedule> operation_schedule;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions> specific_options;
        
}; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical


class Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions : public ydk::Entity
{
    public:
        SpecificOptions();
        ~SpecificOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oper_type; //type: SlaOperOperation
        class ConfiguredOperationOptions; //type: Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::ConfiguredOperationOptions
        class OndemandOperationOptions; //type: Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::OndemandOperationOptions

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::ConfiguredOperationOptions> configured_operation_options;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::OndemandOperationOptions> ondemand_operation_options;
        
}; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions


class Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::ConfiguredOperationOptions : public ydk::Entity
{
    public:
        ConfiguredOperationOptions();
        ~ConfiguredOperationOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string

}; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::ConfiguredOperationOptions


class Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::OndemandOperationOptions : public ydk::Entity
{
    public:
        OndemandOperationOptions();
        ~OndemandOperationOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ondemand_operation_id; //type: uint32
        ydk::YLeaf probe_count; //type: uint8

}; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::OndemandOperationOptions


class Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationSchedule : public ydk::Entity
{
    public:
        OperationSchedule();
        ~OperationSchedule();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: uint32
        ydk::YLeaf start_time_configured; //type: boolean
        ydk::YLeaf schedule_duration; //type: uint32
        ydk::YLeaf schedule_interval; //type: uint32

}; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationSchedule


class Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric : public ydk::Entity
{
    public:
        OperationMetric();
        ~OperationMetric();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Config
        class Bucket; //type: Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket> > bucket;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Config> config;
        
}; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric


class Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_type; //type: SlaRecordableMetric
        ydk::YLeaf bins_count; //type: uint16
        ydk::YLeaf bins_width; //type: uint16
        ydk::YLeaf bucket_size; //type: uint8
        ydk::YLeaf bucket_size_unit; //type: SlaBucketSize
        ydk::YLeaf buckets_archive; //type: uint32

}; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Config


class Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket : public ydk::Entity
{
    public:
        Bucket();
        ~Bucket();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_at; //type: uint32
        ydk::YLeaf duration; //type: uint32
        ydk::YLeaf sent; //type: uint32
        ydk::YLeaf lost; //type: uint32
        ydk::YLeaf corrupt; //type: uint32
        ydk::YLeaf out_of_order; //type: uint32
        ydk::YLeaf duplicates; //type: uint32
        ydk::YLeaf minimum; //type: int32
        ydk::YLeaf maximum; //type: int32
        ydk::YLeaf time_of_minimum; //type: uint32
        ydk::YLeaf time_of_maximum; //type: uint32
        ydk::YLeaf average; //type: int32
        ydk::YLeaf standard_deviation; //type: int32
        ydk::YLeaf result_count; //type: uint32
        ydk::YLeaf data_sent_count; //type: uint32
        ydk::YLeaf data_lost_count; //type: uint32
        ydk::YLeaf overall_flr; //type: int32
        ydk::YLeaf suspect_start_mid_bucket; //type: boolean
        ydk::YLeaf suspect_schedule_latency; //type: boolean
        ydk::YLeaf suspect_send_fail; //type: boolean
        ydk::YLeaf suspect_premature_end; //type: boolean
        ydk::YLeaf suspect_clock_drift; //type: boolean
        ydk::YLeaf suspect_memory_allocation_failed; //type: boolean
        ydk::YLeaf suspect_cleared_mid_bucket; //type: boolean
        ydk::YLeaf suspect_probe_restarted; //type: boolean
        ydk::YLeaf suspect_management_latency; //type: boolean
        ydk::YLeaf suspect_multiple_buckets; //type: boolean
        ydk::YLeaf suspect_misordering; //type: boolean
        ydk::YLeaf suspect_flr_low_packet_count; //type: boolean
        ydk::YLeaf premature_reason; //type: uint32
        ydk::YLeaf premature_reason_string; //type: string
        class Contents; //type: Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents> contents;
        
}; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket


class Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents : public ydk::Entity
{
    public:
        Contents();
        ~Contents();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bucket_type; //type: SlaOperBucket
        class Aggregated; //type: Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated
        class Unaggregated; //type: Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated> aggregated;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated> unaggregated;
        
}; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents


class Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated : public ydk::Entity
{
    public:
        Aggregated();
        ~Aggregated();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bins; //type: Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins> > bins;
        
}; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated


class Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins : public ydk::Entity
{
    public:
        Bins();
        ~Bins();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lower_bound; //type: int32
        ydk::YLeaf upper_bound; //type: int32
        ydk::YLeaf lower_bound_tenths; //type: int32
        ydk::YLeaf upper_bound_tenths; //type: int32
        ydk::YLeaf sum; //type: int64
        ydk::YLeaf count; //type: uint32

}; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins


class Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated : public ydk::Entity
{
    public:
        Unaggregated();
        ~Unaggregated();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sample; //type: Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample> > sample;
        
}; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated


class Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample : public ydk::Entity
{
    public:
        Sample();
        ~Sample();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_at; //type: uint32
        ydk::YLeaf sent; //type: boolean
        ydk::YLeaf timed_out; //type: boolean
        ydk::YLeaf corrupt; //type: boolean
        ydk::YLeaf out_of_order; //type: boolean
        ydk::YLeaf no_data_packets; //type: boolean
        ydk::YLeaf result; //type: int32
        ydk::YLeaf frames_sent; //type: uint32
        ydk::YLeaf frames_lost; //type: uint32

}; // Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample


class Sla::Protocols::Ethernet::ConfigErrors : public ydk::Entity
{
    public:
        ConfigErrors();
        ~ConfigErrors();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConfigError; //type: Sla::Protocols::Ethernet::ConfigErrors::ConfigError

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::ConfigErrors::ConfigError> > config_error;
        
}; // Sla::Protocols::Ethernet::ConfigErrors


class Sla::Protocols::Ethernet::ConfigErrors::ConfigError : public ydk::Entity
{
    public:
        ConfigError();
        ~ConfigError();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string
        ydk::YLeaf domain_name; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf mep_id; //type: uint32
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf profile_name_xr; //type: string
        ydk::YLeaf display_short; //type: string
        ydk::YLeaf rt_delay_inconsistent; //type: boolean
        ydk::YLeaf ow_delay_sd_inconsistent; //type: boolean
        ydk::YLeaf ow_delay_ds_inconsistent; //type: boolean
        ydk::YLeaf rt_jitter_inconsistent; //type: boolean
        ydk::YLeaf ow_jitter_sd_inconsistent; //type: boolean
        ydk::YLeaf ow_jitter_ds_inconsistent; //type: boolean
        ydk::YLeaf ow_loss_sd_inconsistent; //type: boolean
        ydk::YLeaf ow_loss_ds_inconsistent; //type: boolean
        ydk::YLeaf packet_pad_inconsistent; //type: boolean
        ydk::YLeaf packet_rand_pad_inconsistent; //type: boolean
        ydk::YLeaf min_packet_interval_inconsistent; //type: boolean
        ydk::YLeaf priority_inconsistent; //type: boolean
        ydk::YLeaf packet_type_inconsistent; //type: boolean
        ydk::YLeaf profile_doesnt_exist; //type: boolean
        ydk::YLeaf synthetic_loss_not_supported; //type: boolean
        ydk::YLeaf probe_too_big; //type: boolean
        ydk::YLeafList error_string; //type: list of  string

}; // Sla::Protocols::Ethernet::ConfigErrors::ConfigError


class Sla::Protocols::Ethernet::OnDemandOperations : public ydk::Entity
{
    public:
        OnDemandOperations();
        ~OnDemandOperations();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OnDemandOperation; //type: Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation> > on_demand_operation;
        
}; // Sla::Protocols::Ethernet::OnDemandOperations


class Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation : public ydk::Entity
{
    public:
        OnDemandOperation();
        ~OnDemandOperation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operation_id; //type: uint32
        ydk::YLeaf domain_name; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf mep_id; //type: uint32
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf display_short; //type: string
        ydk::YLeaf display_long; //type: string
        ydk::YLeaf last_run; //type: uint32
        class ProfileOptions; //type: Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions
        class SpecificOptions; //type: Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions> profile_options;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions> specific_options;
        
}; // Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation


class Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions : public ydk::Entity
{
    public:
        ProfileOptions();
        ~ProfileOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf probe_type; //type: string
        ydk::YLeaf packets_per_burst; //type: uint16
        ydk::YLeaf inter_packet_interval; //type: uint16
        ydk::YLeaf bursts_per_probe; //type: uint32
        ydk::YLeaf inter_burst_interval; //type: uint32
        ydk::YLeaf flr_calculation_interval; //type: uint32
        class PacketPadding; //type: Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::PacketPadding
        class Priority; //type: Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::Priority
        class OperationSchedule; //type: Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationSchedule
        class OperationMetric; //type: Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric> > operation_metric;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationSchedule> operation_schedule;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::PacketPadding> packet_padding;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::Priority> priority;
        
}; // Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions


class Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::PacketPadding : public ydk::Entity
{
    public:
        PacketPadding();
        ~PacketPadding();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_pad_size; //type: uint16
        ydk::YLeaf test_pattern_pad_scheme; //type: SlaOperTestPatternScheme
        ydk::YLeaf test_pattern_pad_hex_string; //type: uint32

}; // Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::PacketPadding


class Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority_type; //type: SlaOperPacketPriority
        ydk::YLeaf cos; //type: uint8

}; // Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::Priority


class Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationSchedule : public ydk::Entity
{
    public:
        OperationSchedule();
        ~OperationSchedule();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: uint32
        ydk::YLeaf start_time_configured; //type: boolean
        ydk::YLeaf schedule_duration; //type: uint32
        ydk::YLeaf schedule_interval; //type: uint32

}; // Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationSchedule


class Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric : public ydk::Entity
{
    public:
        OperationMetric();
        ~OperationMetric();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf current_buckets_archive; //type: uint32
        class MetricConfig; //type: Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric::MetricConfig

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric::MetricConfig> metric_config;
        
}; // Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric


class Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric::MetricConfig : public ydk::Entity
{
    public:
        MetricConfig();
        ~MetricConfig();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_type; //type: SlaRecordableMetric
        ydk::YLeaf bins_count; //type: uint16
        ydk::YLeaf bins_width; //type: uint16
        ydk::YLeaf bucket_size; //type: uint8
        ydk::YLeaf bucket_size_unit; //type: SlaBucketSize
        ydk::YLeaf buckets_archive; //type: uint32

}; // Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric::MetricConfig


class Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions : public ydk::Entity
{
    public:
        SpecificOptions();
        ~SpecificOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oper_type; //type: SlaOperOperation
        class ConfiguredOperationOptions; //type: Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::ConfiguredOperationOptions
        class OndemandOperationOptions; //type: Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::OndemandOperationOptions

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::ConfiguredOperationOptions> configured_operation_options;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::OndemandOperationOptions> ondemand_operation_options;
        
}; // Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions


class Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::ConfiguredOperationOptions : public ydk::Entity
{
    public:
        ConfiguredOperationOptions();
        ~ConfiguredOperationOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string

}; // Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::ConfiguredOperationOptions


class Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::OndemandOperationOptions : public ydk::Entity
{
    public:
        OndemandOperationOptions();
        ~OndemandOperationOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ondemand_operation_id; //type: uint32
        ydk::YLeaf probe_count; //type: uint8

}; // Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::OndemandOperationOptions


class Sla::Protocols::Ethernet::StatisticsCurrents : public ydk::Entity
{
    public:
        StatisticsCurrents();
        ~StatisticsCurrents();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StatisticsCurrent; //type: Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent> > statistics_current;
        
}; // Sla::Protocols::Ethernet::StatisticsCurrents


class Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent : public ydk::Entity
{
    public:
        StatisticsCurrent();
        ~StatisticsCurrent();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string
        ydk::YLeaf domain_name; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf mep_id; //type: uint32
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf probe_type; //type: string
        ydk::YLeaf display_short; //type: string
        ydk::YLeaf display_long; //type: string
        ydk::YLeaf flr_calculation_interval; //type: uint32
        class SpecificOptions; //type: Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions
        class OperationSchedule; //type: Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationSchedule
        class OperationMetric; //type: Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric> > operation_metric;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationSchedule> operation_schedule;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions> specific_options;
        
}; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent


class Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions : public ydk::Entity
{
    public:
        SpecificOptions();
        ~SpecificOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oper_type; //type: SlaOperOperation
        class ConfiguredOperationOptions; //type: Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::ConfiguredOperationOptions
        class OndemandOperationOptions; //type: Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::OndemandOperationOptions

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::ConfiguredOperationOptions> configured_operation_options;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::OndemandOperationOptions> ondemand_operation_options;
        
}; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions


class Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::ConfiguredOperationOptions : public ydk::Entity
{
    public:
        ConfiguredOperationOptions();
        ~ConfiguredOperationOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string

}; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::ConfiguredOperationOptions


class Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::OndemandOperationOptions : public ydk::Entity
{
    public:
        OndemandOperationOptions();
        ~OndemandOperationOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ondemand_operation_id; //type: uint32
        ydk::YLeaf probe_count; //type: uint8

}; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::OndemandOperationOptions


class Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationSchedule : public ydk::Entity
{
    public:
        OperationSchedule();
        ~OperationSchedule();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: uint32
        ydk::YLeaf start_time_configured; //type: boolean
        ydk::YLeaf schedule_duration; //type: uint32
        ydk::YLeaf schedule_interval; //type: uint32

}; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationSchedule


class Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric : public ydk::Entity
{
    public:
        OperationMetric();
        ~OperationMetric();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Config
        class Bucket; //type: Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket> > bucket;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Config> config;
        
}; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric


class Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_type; //type: SlaRecordableMetric
        ydk::YLeaf bins_count; //type: uint16
        ydk::YLeaf bins_width; //type: uint16
        ydk::YLeaf bucket_size; //type: uint8
        ydk::YLeaf bucket_size_unit; //type: SlaBucketSize
        ydk::YLeaf buckets_archive; //type: uint32

}; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Config


class Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket : public ydk::Entity
{
    public:
        Bucket();
        ~Bucket();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_at; //type: uint32
        ydk::YLeaf duration; //type: uint32
        ydk::YLeaf sent; //type: uint32
        ydk::YLeaf lost; //type: uint32
        ydk::YLeaf corrupt; //type: uint32
        ydk::YLeaf out_of_order; //type: uint32
        ydk::YLeaf duplicates; //type: uint32
        ydk::YLeaf minimum; //type: int32
        ydk::YLeaf maximum; //type: int32
        ydk::YLeaf time_of_minimum; //type: uint32
        ydk::YLeaf time_of_maximum; //type: uint32
        ydk::YLeaf average; //type: int32
        ydk::YLeaf standard_deviation; //type: int32
        ydk::YLeaf result_count; //type: uint32
        ydk::YLeaf data_sent_count; //type: uint32
        ydk::YLeaf data_lost_count; //type: uint32
        ydk::YLeaf overall_flr; //type: int32
        ydk::YLeaf suspect_start_mid_bucket; //type: boolean
        ydk::YLeaf suspect_schedule_latency; //type: boolean
        ydk::YLeaf suspect_send_fail; //type: boolean
        ydk::YLeaf suspect_premature_end; //type: boolean
        ydk::YLeaf suspect_clock_drift; //type: boolean
        ydk::YLeaf suspect_memory_allocation_failed; //type: boolean
        ydk::YLeaf suspect_cleared_mid_bucket; //type: boolean
        ydk::YLeaf suspect_probe_restarted; //type: boolean
        ydk::YLeaf suspect_management_latency; //type: boolean
        ydk::YLeaf suspect_multiple_buckets; //type: boolean
        ydk::YLeaf suspect_misordering; //type: boolean
        ydk::YLeaf suspect_flr_low_packet_count; //type: boolean
        ydk::YLeaf premature_reason; //type: uint32
        ydk::YLeaf premature_reason_string; //type: string
        class Contents; //type: Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents> contents;
        
}; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket


class Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents : public ydk::Entity
{
    public:
        Contents();
        ~Contents();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bucket_type; //type: SlaOperBucket
        class Aggregated; //type: Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated
        class Unaggregated; //type: Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated

        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated> aggregated;
        std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated> unaggregated;
        
}; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents


class Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated : public ydk::Entity
{
    public:
        Aggregated();
        ~Aggregated();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bins; //type: Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins> > bins;
        
}; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated


class Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins : public ydk::Entity
{
    public:
        Bins();
        ~Bins();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lower_bound; //type: int32
        ydk::YLeaf upper_bound; //type: int32
        ydk::YLeaf lower_bound_tenths; //type: int32
        ydk::YLeaf upper_bound_tenths; //type: int32
        ydk::YLeaf sum; //type: int64
        ydk::YLeaf count; //type: uint32

}; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins


class Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated : public ydk::Entity
{
    public:
        Unaggregated();
        ~Unaggregated();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sample; //type: Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_sla_oper::Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample> > sample;
        
}; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated


class Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample : public ydk::Entity
{
    public:
        Sample();
        ~Sample();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_at; //type: uint32
        ydk::YLeaf sent; //type: boolean
        ydk::YLeaf timed_out; //type: boolean
        ydk::YLeaf corrupt; //type: boolean
        ydk::YLeaf out_of_order; //type: boolean
        ydk::YLeaf no_data_packets; //type: boolean
        ydk::YLeaf result; //type: int32
        ydk::YLeaf frames_sent; //type: uint32
        ydk::YLeaf frames_lost; //type: uint32

}; // Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample

class SlaNodes : public ydk::Entity
{
    public:
        SlaNodes();
        ~SlaNodes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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


}; // SlaNodes


}
}

#endif /* _CISCO_IOS_XR_INFRA_SLA_OPER_ */

