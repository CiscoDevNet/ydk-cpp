#ifndef _IETF_DIFFSERV_POLICY_
#define _IETF_DIFFSERV_POLICY_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace ietf_diffserv_policy {

class ActionType : public virtual ydk::Identity
{
    public:
        ActionType();
        ~ActionType();


}; // ActionType

class Policies : public ydk::Entity
{
    public:
        Policies();
        ~Policies();

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

        class PolicyEntry; //type: Policies::PolicyEntry

        std::vector<std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry> > policy_entry;
        
}; // Policies


class Policies::PolicyEntry : public ydk::Entity
{
    public:
        PolicyEntry();
        ~PolicyEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf policy_descr; //type: string
        ydk::YLeaf policy_type; //type: PolicyType
        class ClassifierEntry; //type: Policies::PolicyEntry::ClassifierEntry

        std::vector<std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry> > classifier_entry;
        
}; // Policies::PolicyEntry


class Policies::PolicyEntry::ClassifierEntry : public ydk::Entity
{
    public:
        ClassifierEntry();
        ~ClassifierEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf classifier_entry_name; //type: string
        ydk::YLeaf classifier_entry_inline; //type: boolean
        ydk::YLeaf classifier_entry_filter_oper; //type: ClassifierEntryFilterOperationType
        class FilterEntry; //type: Policies::PolicyEntry::ClassifierEntry::FilterEntry
        class ClassifierActionEntryCfg; //type: Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg

        std::vector<std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg> > classifier_action_entry_cfg;
        std::vector<std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::FilterEntry> > filter_entry;
        
}; // Policies::PolicyEntry::ClassifierEntry


class Policies::PolicyEntry::ClassifierEntry::FilterEntry : public ydk::Entity
{
    public:
        FilterEntry();
        ~FilterEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf filter_type; //type: FilterType
        ydk::YLeaf filter_logical_not; //type: boolean
        class DscpCfg; //type: Policies::PolicyEntry::ClassifierEntry::FilterEntry::DscpCfg
        class SourceIpAddressCfg; //type: Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourceIpAddressCfg
        class DestinationIpAddressCfg; //type: Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationIpAddressCfg
        class SourcePortCfg; //type: Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourcePortCfg
        class DestinationPortCfg; //type: Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationPortCfg
        class ProtocolCfg; //type: Policies::PolicyEntry::ClassifierEntry::FilterEntry::ProtocolCfg

        std::vector<std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationIpAddressCfg> > destination_ip_address_cfg;
        std::vector<std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationPortCfg> > destination_port_cfg;
        std::vector<std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::FilterEntry::DscpCfg> > dscp_cfg;
        std::vector<std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::FilterEntry::ProtocolCfg> > protocol_cfg;
        std::vector<std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourceIpAddressCfg> > source_ip_address_cfg;
        std::vector<std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourcePortCfg> > source_port_cfg;
        
}; // Policies::PolicyEntry::ClassifierEntry::FilterEntry


class Policies::PolicyEntry::ClassifierEntry::FilterEntry::DscpCfg : public ydk::Entity
{
    public:
        DscpCfg();
        ~DscpCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dscp_min; //type: uint8
        ydk::YLeaf dscp_max; //type: uint8

}; // Policies::PolicyEntry::ClassifierEntry::FilterEntry::DscpCfg


class Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourceIpAddressCfg : public ydk::Entity
{
    public:
        SourceIpAddressCfg();
        ~SourceIpAddressCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_ip_addr; //type: string

}; // Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourceIpAddressCfg


class Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationIpAddressCfg : public ydk::Entity
{
    public:
        DestinationIpAddressCfg();
        ~DestinationIpAddressCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_ip_addr; //type: string

}; // Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationIpAddressCfg


class Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourcePortCfg : public ydk::Entity
{
    public:
        SourcePortCfg();
        ~SourcePortCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_port_min; //type: uint16
        ydk::YLeaf source_port_max; //type: uint16

}; // Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourcePortCfg


class Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationPortCfg : public ydk::Entity
{
    public:
        DestinationPortCfg();
        ~DestinationPortCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_port_min; //type: uint16
        ydk::YLeaf destination_port_max; //type: uint16

}; // Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationPortCfg


class Policies::PolicyEntry::ClassifierEntry::FilterEntry::ProtocolCfg : public ydk::Entity
{
    public:
        ProtocolCfg();
        ~ProtocolCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_min; //type: uint8
        ydk::YLeaf protocol_max; //type: uint8

}; // Policies::PolicyEntry::ClassifierEntry::FilterEntry::ProtocolCfg


class Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg : public ydk::Entity
{
    public:
        ClassifierActionEntryCfg();
        ~ClassifierActionEntryCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: ActionType
        class MarkingCfg; //type: Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MarkingCfg
        class PriorityCfg; //type: Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg
        class MeterCfg; //type: Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg
        class MinRateCfg; //type: Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg
        class MaxRateCfg; //type: Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MaxRateCfg
        class DropCfg; //type: Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::DropCfg
        class TailDropCfg; //type: Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg
        class RandomDetectCfg; //type: Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg

        std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::DropCfg> drop_cfg;
        std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MarkingCfg> marking_cfg;
        std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MaxRateCfg> max_rate_cfg;
        std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg> meter_cfg;
        std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg> min_rate_cfg;
        std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg> priority_cfg;
        std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg> random_detect_cfg;
        std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg> tail_drop_cfg;
        
}; // Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg


class Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MarkingCfg : public ydk::Entity
{
    public:
        MarkingCfg();
        ~MarkingCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dscp; //type: uint8

}; // Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MarkingCfg


class Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg : public ydk::Entity
{
    public:
        PriorityCfg();
        ~PriorityCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority_level; //type: uint8
        class RateBurst; //type: Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::RateBurst

        std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::RateBurst> rate_burst;
        
}; // Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg


class Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::RateBurst : public ydk::Entity
{
    public:
        RateBurst();
        ~RateBurst();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rate; //type: uint64
        ydk::YLeaf absolute_rate_metric; //type: Metric
        ydk::YLeaf absolute_rate_units; //type: RateUnit
        ydk::YLeaf rate_percent; //type: uint8
        ydk::YLeaf rate_ratio; //type: uint32
        ydk::YLeaf burst_size; //type: uint64
        ydk::YLeaf burst_interval; //type: uint64

}; // Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::RateBurst


class Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg : public ydk::Entity
{
    public:
        MeterCfg();
        ~MeterCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MeterList; //type: Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList

        std::vector<std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList> > meter_list;
        
}; // Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg


class Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList : public ydk::Entity
{
    public:
        MeterList();
        ~MeterList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf meter_id; //type: uint16
        ydk::YLeaf meter_rate; //type: uint64
        ydk::YLeaf burst_size; //type: uint64
        ydk::YLeaf burst_interval; //type: uint64
        class Color; //type: Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::Color
        class SucceedAction; //type: Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::SucceedAction
        class FailAction; //type: Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::FailAction

        std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::Color> color;
        std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::FailAction> fail_action;
        std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::SucceedAction> succeed_action;
        
}; // Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList


class Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::Color : public ydk::Entity
{
    public:
        Color();
        ~Color();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf classifier_entry_name; //type: string
        ydk::YLeaf classifier_entry_descr; //type: string
        ydk::YLeaf classifier_entry_filter_operation; //type: ClassifierEntryFilterOperationType

}; // Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::Color


class Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::SucceedAction : public ydk::Entity
{
    public:
        SucceedAction();
        ~SucceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf meter_action_type; //type: MeterActionType
        ydk::YLeaf next_meter_id; //type: uint16
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf drop_action; //type: empty

}; // Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::SucceedAction


class Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::FailAction : public ydk::Entity
{
    public:
        FailAction();
        ~FailAction();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf meter_action_type; //type: MeterActionType
        ydk::YLeaf next_meter_id; //type: uint16
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf drop_action; //type: empty

}; // Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::FailAction


class Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg : public ydk::Entity
{
    public:
        MinRateCfg();
        ~MinRateCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min_rate; //type: uint64
        ydk::YLeaf absolute_rate_metric; //type: Metric
        ydk::YLeaf absolute_rate_units; //type: RateUnit
        ydk::YLeaf rate_percent; //type: uint8
        ydk::YLeaf rate_ratio; //type: uint32
        class BwExcessShareCfg; //type: Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::BwExcessShareCfg

        std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::BwExcessShareCfg> bw_excess_share_cfg;
        
}; // Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg


class Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::BwExcessShareCfg : public ydk::Entity
{
    public:
        BwExcessShareCfg();
        ~BwExcessShareCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf absolute_rate_metric; //type: Metric
        ydk::YLeaf absolute_rate_units; //type: RateUnit
        ydk::YLeaf rate_percent; //type: uint8
        ydk::YLeaf rate_ratio; //type: uint32

}; // Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::BwExcessShareCfg


class Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MaxRateCfg : public ydk::Entity
{
    public:
        MaxRateCfg();
        ~MaxRateCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf absolute_rate; //type: uint64
        ydk::YLeaf burst_size; //type: uint64
        ydk::YLeaf burst_interval; //type: uint64
        ydk::YLeaf absolute_rate_metric; //type: Metric
        ydk::YLeaf absolute_rate_units; //type: RateUnit
        ydk::YLeaf rate_percent; //type: uint8
        ydk::YLeaf rate_ratio; //type: uint32

}; // Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MaxRateCfg


class Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::DropCfg : public ydk::Entity
{
    public:
        DropCfg();
        ~DropCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop_action; //type: empty

}; // Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::DropCfg


class Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg : public ydk::Entity
{
    public:
        TailDropCfg();
        ~TailDropCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class QlimitDscpThresh; //type: Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh

        std::vector<std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh> > qlimit_dscp_thresh;
        
}; // Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg


class Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh : public ydk::Entity
{
    public:
        QlimitDscpThresh();
        ~QlimitDscpThresh();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dscp_min; //type: uint8
        ydk::YLeaf dscp_max; //type: uint8
        class Threshold; //type: Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::Threshold

        std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::Threshold> threshold;
        
}; // Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh


class Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_size; //type: uint64
        ydk::YLeaf threshold_interval; //type: uint64

}; // Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::Threshold


class Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg : public ydk::Entity
{
    public:
        RandomDetectCfg();
        ~RandomDetectCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf exp_weighting_const; //type: uint32
        ydk::YLeaf mark_probability; //type: uint32
        class RedMinThresh; //type: Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh
        class RedMaxThresh; //type: Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh

        std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh> red_max_thresh;
        std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh> red_min_thresh;
        
}; // Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg


class Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh : public ydk::Entity
{
    public:
        RedMinThresh();
        ~RedMinThresh();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Threshold; //type: Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::Threshold

        std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::Threshold> threshold;
        
}; // Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh


class Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_size; //type: uint64
        ydk::YLeaf threshold_interval; //type: uint64

}; // Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::Threshold


class Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh : public ydk::Entity
{
    public:
        RedMaxThresh();
        ~RedMaxThresh();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Threshold; //type: Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::Threshold

        std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::Threshold> threshold;
        
}; // Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh


class Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_size; //type: uint64
        ydk::YLeaf threshold_interval; //type: uint64

}; // Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::Threshold


}
}

#endif /* _IETF_DIFFSERV_POLICY_ */

