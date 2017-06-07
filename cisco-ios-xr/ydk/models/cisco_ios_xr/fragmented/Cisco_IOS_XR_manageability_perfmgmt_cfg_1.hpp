#ifndef _CISCO_IOS_XR_MANAGEABILITY_PERFMGMT_CFG_1_
#define _CISCO_IOS_XR_MANAGEABILITY_PERFMGMT_CFG_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_manageability_perfmgmt_cfg_0.hpp"

namespace ydk {
namespace Cisco_IOS_XR_manageability_perfmgmt_cfg {


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd : public Entity
{
    public:
        InitMsgsRcvd();
        ~InitMsgsRcvd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: int32
        YLeaf end_range_value; //type: int32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent : public Entity
{
    public:
        LabelReleaseMsgsSent();
        ~LabelReleaseMsgsSent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: int32
        YLeaf end_range_value; //type: int32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent : public Entity
{
    public:
        InitMsgsSent();
        ~InitMsgsSent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: int32
        YLeaf end_range_value; //type: int32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd : public Entity
{
    public:
        LabelMappingMsgsRcvd();
        ~LabelMappingMsgsRcvd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: int32
        YLeaf end_range_value; //type: int32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd : public Entity
{
    public:
        KeepaliveMsgsRcvd();
        ~KeepaliveMsgsRcvd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: int32
        YLeaf end_range_value; //type: int32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent : public Entity
{
    public:
        LabelMappingMsgsSent();
        ~LabelMappingMsgsSent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: int32
        YLeaf end_range_value; //type: int32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent : public Entity
{
    public:
        KeepaliveMsgsSent();
        ~KeepaliveMsgsSent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: int32
        YLeaf end_range_value; //type: int32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd : public Entity
{
    public:
        AddressMsgsRcvd();
        ~AddressMsgsRcvd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: int32
        YLeaf end_range_value; //type: int32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent : public Entity
{
    public:
        AddressMsgsSent();
        ~AddressMsgsSent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: int32
        YLeaf end_range_value; //type: int32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent


class PerfMgmt::Threshold::BasicCounterInterface : public Entity
{
    public:
        BasicCounterInterface();
        ~BasicCounterInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BasicCounterInterfaceTemplates; //type: PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates> basic_counter_interface_templates;
        
}; // PerfMgmt::Threshold::BasicCounterInterface


class PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates : public Entity
{
    public:
        BasicCounterInterfaceTemplates();
        ~BasicCounterInterfaceTemplates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BasicCounterInterfaceTemplate; //type: PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate> > basic_counter_interface_template;
        
}; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates


class PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate : public Entity
{
    public:
        BasicCounterInterfaceTemplate();
        ~BasicCounterInterfaceTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string
        YLeaf sample_interval; //type: uint32
        YLeaf reg_exp_group; //type: string
        YLeaf vrf_group; //type: string
        class InOctets; //type: PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets
        class OutOctets; //type: PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets
        class OutputQueueDrops; //type: PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops
        class InputTotalErrors; //type: PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors
        class OutputTotalDrops; //type: PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops
        class OutPackets; //type: PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets
        class OutputTotalErrors; //type: PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors
        class InPackets; //type: PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets
        class InputQueueDrops; //type: PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops
        class InputTotalDrops; //type: PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets> in_octets; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets> in_packets; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops> input_queue_drops; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops> input_total_drops; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors> input_total_errors; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets> out_octets; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets> out_packets; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops> output_queue_drops; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops> output_total_drops; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors> output_total_errors; // presence node
        
}; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate


class PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets : public Entity
{
    public:
        InOctets();
        ~InOctets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets


class PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets : public Entity
{
    public:
        OutOctets();
        ~OutOctets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets


class PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops : public Entity
{
    public:
        OutputQueueDrops();
        ~OutputQueueDrops();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops


class PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors : public Entity
{
    public:
        InputTotalErrors();
        ~InputTotalErrors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors


class PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops : public Entity
{
    public:
        OutputTotalDrops();
        ~OutputTotalDrops();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops


class PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets : public Entity
{
    public:
        OutPackets();
        ~OutPackets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets


class PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors : public Entity
{
    public:
        OutputTotalErrors();
        ~OutputTotalErrors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors


class PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets : public Entity
{
    public:
        InPackets();
        ~InPackets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets


class PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops : public Entity
{
    public:
        InputQueueDrops();
        ~InputQueueDrops();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops


class PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops : public Entity
{
    public:
        InputTotalDrops();
        ~InputTotalDrops();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops


class PerfMgmt::Threshold::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BgpTemplates; //type: PerfMgmt::Threshold::Bgp::BgpTemplates

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Bgp::BgpTemplates> bgp_templates;
        
}; // PerfMgmt::Threshold::Bgp


class PerfMgmt::Threshold::Bgp::BgpTemplates : public Entity
{
    public:
        BgpTemplates();
        ~BgpTemplates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BgpTemplate; //type: PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate> > bgp_template;
        
}; // PerfMgmt::Threshold::Bgp::BgpTemplates


class PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate : public Entity
{
    public:
        BgpTemplate();
        ~BgpTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string
        YLeaf sample_interval; //type: uint32
        class OutputUpdateMessages; //type: PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages
        class ErrorsReceived; //type: PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived
        class ConnEstablished; //type: PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished
        class OutputMessages; //type: PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages
        class ConnDropped; //type: PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped
        class InputUpdateMessages; //type: PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages
        class ErrorsSent; //type: PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent
        class InputMessages; //type: PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped> conn_dropped; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished> conn_established; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived> errors_received; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent> errors_sent; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages> input_messages; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages> input_update_messages; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages> output_messages; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages> output_update_messages; // presence node
        
}; // PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate


class PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages : public Entity
{
    public:
        OutputUpdateMessages();
        ~OutputUpdateMessages();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages


class PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived : public Entity
{
    public:
        ErrorsReceived();
        ~ErrorsReceived();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived


class PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished : public Entity
{
    public:
        ConnEstablished();
        ~ConnEstablished();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished


class PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages : public Entity
{
    public:
        OutputMessages();
        ~OutputMessages();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages


class PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped : public Entity
{
    public:
        ConnDropped();
        ~ConnDropped();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped


class PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages : public Entity
{
    public:
        InputUpdateMessages();
        ~InputUpdateMessages();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages


class PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent : public Entity
{
    public:
        ErrorsSent();
        ~ErrorsSent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent


class PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages : public Entity
{
    public:
        InputMessages();
        ~InputMessages();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages


class PerfMgmt::Threshold::Ospfv2Protocol : public Entity
{
    public:
        Ospfv2Protocol();
        ~Ospfv2Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ospfv2ProtocolTemplates; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates> ospfv2_protocol_templates;
        
}; // PerfMgmt::Threshold::Ospfv2Protocol


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates : public Entity
{
    public:
        Ospfv2ProtocolTemplates();
        ~Ospfv2ProtocolTemplates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ospfv2ProtocolTemplate; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate> > ospfv2_protocol_template;
        
}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate : public Entity
{
    public:
        Ospfv2ProtocolTemplate();
        ~Ospfv2ProtocolTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string
        YLeaf sample_interval; //type: uint32
        class ChecksumErrors; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors
        class InputLsaAcksLsa; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa
        class OutputDbDsLsa; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa
        class InputDbDsLsa; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa
        class InputLsaUpdates; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates
        class OutputDbDs; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs
        class OutputLsaUpdatesLsa; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa
        class InputDbDs; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs
        class InputLsaUpdatesLsa; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa
        class OutputPackets; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets
        class InputPackets; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets
        class OutputHelloPackets; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets
        class InputHelloPackets; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets
        class OutputLsRequests; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests
        class OutputLsaAcksLsa; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa
        class OutputLsaAcks; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks
        class InputLsaAcks; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks
        class OutputLsaUpdates; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates
        class OutputLsRequestsLsa; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa
        class InputLsRequestsLsa; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa
        class InputLsRequests; //type: PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors> checksum_errors; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs> input_db_ds; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa> input_db_ds_lsa; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets> input_hello_packets; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests> input_ls_requests; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa> input_ls_requests_lsa; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks> input_lsa_acks; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa> input_lsa_acks_lsa; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates> input_lsa_updates; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa> input_lsa_updates_lsa; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets> input_packets; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs> output_db_ds; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa> output_db_ds_lsa; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets> output_hello_packets; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests> output_ls_requests; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa> output_ls_requests_lsa; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks> output_lsa_acks; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa> output_lsa_acks_lsa; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates> output_lsa_updates; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa> output_lsa_updates_lsa; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets> output_packets; // presence node
        
}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors : public Entity
{
    public:
        ChecksumErrors();
        ~ChecksumErrors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa : public Entity
{
    public:
        InputLsaAcksLsa();
        ~InputLsaAcksLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa : public Entity
{
    public:
        OutputDbDsLsa();
        ~OutputDbDsLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa : public Entity
{
    public:
        InputDbDsLsa();
        ~InputDbDsLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates : public Entity
{
    public:
        InputLsaUpdates();
        ~InputLsaUpdates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs : public Entity
{
    public:
        OutputDbDs();
        ~OutputDbDs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa : public Entity
{
    public:
        OutputLsaUpdatesLsa();
        ~OutputLsaUpdatesLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs : public Entity
{
    public:
        InputDbDs();
        ~InputDbDs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa : public Entity
{
    public:
        InputLsaUpdatesLsa();
        ~InputLsaUpdatesLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets : public Entity
{
    public:
        OutputPackets();
        ~OutputPackets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets : public Entity
{
    public:
        InputPackets();
        ~InputPackets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets : public Entity
{
    public:
        OutputHelloPackets();
        ~OutputHelloPackets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets : public Entity
{
    public:
        InputHelloPackets();
        ~InputHelloPackets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests : public Entity
{
    public:
        OutputLsRequests();
        ~OutputLsRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa : public Entity
{
    public:
        OutputLsaAcksLsa();
        ~OutputLsaAcksLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks : public Entity
{
    public:
        OutputLsaAcks();
        ~OutputLsaAcks();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks : public Entity
{
    public:
        InputLsaAcks();
        ~InputLsaAcks();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates : public Entity
{
    public:
        OutputLsaUpdates();
        ~OutputLsaUpdates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa : public Entity
{
    public:
        OutputLsRequestsLsa();
        ~OutputLsRequestsLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa : public Entity
{
    public:
        InputLsRequestsLsa();
        ~InputLsRequestsLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa


class PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests : public Entity
{
    public:
        InputLsRequests();
        ~InputLsRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests


class PerfMgmt::Threshold::CpuNode : public Entity
{
    public:
        CpuNode();
        ~CpuNode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CpuNodeTemplates; //type: PerfMgmt::Threshold::CpuNode::CpuNodeTemplates

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::CpuNode::CpuNodeTemplates> cpu_node_templates;
        
}; // PerfMgmt::Threshold::CpuNode


class PerfMgmt::Threshold::CpuNode::CpuNodeTemplates : public Entity
{
    public:
        CpuNodeTemplates();
        ~CpuNodeTemplates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CpuNodeTemplate; //type: PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate> > cpu_node_template;
        
}; // PerfMgmt::Threshold::CpuNode::CpuNodeTemplates


class PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate : public Entity
{
    public:
        CpuNodeTemplate();
        ~CpuNodeTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string
        YLeaf sample_interval; //type: uint32
        class AverageCpuUsed; //type: PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed
        class NoProcesses; //type: PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed> average_cpu_used; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses> no_processes; // presence node
        
}; // PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate


class PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed : public Entity
{
    public:
        AverageCpuUsed();
        ~AverageCpuUsed();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed


class PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses : public Entity
{
    public:
        NoProcesses();
        ~NoProcesses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: int32
        YLeaf end_range_value; //type: int32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses


class PerfMgmt::Threshold::DataRateInterface : public Entity
{
    public:
        DataRateInterface();
        ~DataRateInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DataRateInterfaceTemplates; //type: PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates> data_rate_interface_templates;
        
}; // PerfMgmt::Threshold::DataRateInterface


class PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates : public Entity
{
    public:
        DataRateInterfaceTemplates();
        ~DataRateInterfaceTemplates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DataRateInterfaceTemplate; //type: PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate> > data_rate_interface_template;
        
}; // PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates


class PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate : public Entity
{
    public:
        DataRateInterfaceTemplate();
        ~DataRateInterfaceTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string
        YLeaf sample_interval; //type: uint32
        YLeaf reg_exp_group; //type: string
        YLeaf vrf_group; //type: string
        class InputDataRate; //type: PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate
        class Bandwidth; //type: PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth
        class OutputPacketRate; //type: PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate
        class InputPeakPkts; //type: PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts
        class OutputPeakRate; //type: PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate
        class OutputDataRate; //type: PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate
        class InputPacketRate; //type: PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate
        class OutputPeakPkts; //type: PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts
        class InputPeakRate; //type: PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth> bandwidth; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate> input_data_rate; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate> input_packet_rate; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts> input_peak_pkts; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate> input_peak_rate; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate> output_data_rate; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate> output_packet_rate; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts> output_peak_pkts; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate> output_peak_rate; // presence node
        
}; // PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate


class PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate : public Entity
{
    public:
        InputDataRate();
        ~InputDataRate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate


class PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth : public Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth


class PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate : public Entity
{
    public:
        OutputPacketRate();
        ~OutputPacketRate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate


class PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts : public Entity
{
    public:
        InputPeakPkts();
        ~InputPeakPkts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts


class PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate : public Entity
{
    public:
        OutputPeakRate();
        ~OutputPeakRate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate


class PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate : public Entity
{
    public:
        OutputDataRate();
        ~OutputDataRate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate


class PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate : public Entity
{
    public:
        InputPacketRate();
        ~InputPacketRate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate


class PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts : public Entity
{
    public:
        OutputPeakPkts();
        ~OutputPeakPkts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts


class PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate : public Entity
{
    public:
        InputPeakRate();
        ~InputPeakRate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate


class PerfMgmt::Threshold::ProcessNode : public Entity
{
    public:
        ProcessNode();
        ~ProcessNode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ProcessNodeTemplates; //type: PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates> process_node_templates;
        
}; // PerfMgmt::Threshold::ProcessNode


class PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates : public Entity
{
    public:
        ProcessNodeTemplates();
        ~ProcessNodeTemplates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ProcessNodeTemplate; //type: PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate> > process_node_template;
        
}; // PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates


class PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate : public Entity
{
    public:
        ProcessNodeTemplate();
        ~ProcessNodeTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string
        YLeaf sample_interval; //type: uint32
        class AverageCpuUsed; //type: PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed
        class PeakMemory; //type: PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory
        class NoThreads; //type: PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed> average_cpu_used; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads> no_threads; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory> peak_memory; // presence node
        
}; // PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate


class PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed : public Entity
{
    public:
        AverageCpuUsed();
        ~AverageCpuUsed();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed


class PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory : public Entity
{
    public:
        PeakMemory();
        ~PeakMemory();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: int32
        YLeaf end_range_value; //type: int32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory


class PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads : public Entity
{
    public:
        NoThreads();
        ~NoThreads();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads


class PerfMgmt::Threshold::MemoryNode : public Entity
{
    public:
        MemoryNode();
        ~MemoryNode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MemoryNodeTemplates; //type: PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates> memory_node_templates;
        
}; // PerfMgmt::Threshold::MemoryNode


class PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates : public Entity
{
    public:
        MemoryNodeTemplates();
        ~MemoryNodeTemplates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MemoryNodeTemplate; //type: PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate> > memory_node_template;
        
}; // PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates


class PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate : public Entity
{
    public:
        MemoryNodeTemplate();
        ~MemoryNodeTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string
        YLeaf sample_interval; //type: uint32
        class PeakMemory; //type: PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory
        class CurrMemory; //type: PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory> curr_memory; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory> peak_memory; // presence node
        
}; // PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate


class PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory : public Entity
{
    public:
        PeakMemory();
        ~PeakMemory();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory


class PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory : public Entity
{
    public:
        CurrMemory();
        ~CurrMemory();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: int32
        YLeaf end_range_value; //type: int32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory


class PerfMgmt::Threshold::Ospfv3Protocol : public Entity
{
    public:
        Ospfv3Protocol();
        ~Ospfv3Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ospfv3ProtocolTemplates; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates> ospfv3_protocol_templates;
        
}; // PerfMgmt::Threshold::Ospfv3Protocol


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates : public Entity
{
    public:
        Ospfv3ProtocolTemplates();
        ~Ospfv3ProtocolTemplates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ospfv3ProtocolTemplate; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate> > ospfv3_protocol_template;
        
}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate : public Entity
{
    public:
        Ospfv3ProtocolTemplate();
        ~Ospfv3ProtocolTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string
        YLeaf sample_interval; //type: uint32
        class InputLsaAcksLsa; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa
        class OutputDbDsLsa; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa
        class InputDbDsLsa; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa
        class InputLsaUpdates; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates
        class OutputDbDs; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs
        class OutputLsaUpdatesLsa; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa
        class InputDbDs; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs
        class InputLsaUpdatesLsa; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa
        class OutputPackets; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets
        class InputPackets; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets
        class OutputHelloPackets; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets
        class InputHelloPackets; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets
        class OutputLsRequests; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests
        class OutputLsaAcksLsa; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa
        class OutputLsaAcks; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks
        class InputLsaAcks; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks
        class OutputLsaUpdates; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates
        class OutputLsRequestsLsa; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa
        class InputLsRequestsLsa; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa
        class InputLsRequests; //type: PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs> input_db_ds; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa> input_db_ds_lsa; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets> input_hello_packets; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests> input_ls_requests; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa> input_ls_requests_lsa; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks> input_lsa_acks; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa> input_lsa_acks_lsa; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates> input_lsa_updates; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa> input_lsa_updates_lsa; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets> input_packets; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs> output_db_ds; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa> output_db_ds_lsa; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets> output_hello_packets; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests> output_ls_requests; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa> output_ls_requests_lsa; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks> output_lsa_acks; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa> output_lsa_acks_lsa; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates> output_lsa_updates; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa> output_lsa_updates_lsa; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets> output_packets; // presence node
        
}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa : public Entity
{
    public:
        InputLsaAcksLsa();
        ~InputLsaAcksLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa : public Entity
{
    public:
        OutputDbDsLsa();
        ~OutputDbDsLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa : public Entity
{
    public:
        InputDbDsLsa();
        ~InputDbDsLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates : public Entity
{
    public:
        InputLsaUpdates();
        ~InputLsaUpdates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs : public Entity
{
    public:
        OutputDbDs();
        ~OutputDbDs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa : public Entity
{
    public:
        OutputLsaUpdatesLsa();
        ~OutputLsaUpdatesLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs : public Entity
{
    public:
        InputDbDs();
        ~InputDbDs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa : public Entity
{
    public:
        InputLsaUpdatesLsa();
        ~InputLsaUpdatesLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets : public Entity
{
    public:
        OutputPackets();
        ~OutputPackets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets : public Entity
{
    public:
        InputPackets();
        ~InputPackets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets : public Entity
{
    public:
        OutputHelloPackets();
        ~OutputHelloPackets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets : public Entity
{
    public:
        InputHelloPackets();
        ~InputHelloPackets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests : public Entity
{
    public:
        OutputLsRequests();
        ~OutputLsRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa : public Entity
{
    public:
        OutputLsaAcksLsa();
        ~OutputLsaAcksLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks : public Entity
{
    public:
        OutputLsaAcks();
        ~OutputLsaAcks();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks : public Entity
{
    public:
        InputLsaAcks();
        ~InputLsaAcks();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates : public Entity
{
    public:
        OutputLsaUpdates();
        ~OutputLsaUpdates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa : public Entity
{
    public:
        OutputLsRequestsLsa();
        ~OutputLsRequestsLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa : public Entity
{
    public:
        InputLsRequestsLsa();
        ~InputLsRequestsLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa


class PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests : public Entity
{
    public:
        InputLsRequests();
        ~InputLsRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests


}
}

#endif /* _CISCO_IOS_XR_MANAGEABILITY_PERFMGMT_CFG_1_ */

