#ifndef _CISCO_IOS_XR_MAN_IPSLA_CFG_0_
#define _CISCO_IOS_XR_MAN_IPSLA_CFG_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_man_ipsla_cfg {

class Ipsla : public ydk::Entity
{
    public:
        Ipsla();
        ~Ipsla();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        class Common; //type: Ipsla::Common
        class MplsLspMonitor; //type: Ipsla::MplsLspMonitor
        class Operation; //type: Ipsla::Operation
        class Responder; //type: Ipsla::Responder
        class MplsDiscovery; //type: Ipsla::MplsDiscovery
        class ServerTwamp; //type: Ipsla::ServerTwamp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Common> common;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::MplsLspMonitor> mpls_lsp_monitor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation> operation_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Responder> responder;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::MplsDiscovery> mpls_discovery;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::ServerTwamp> server_twamp;
        
}; // Ipsla


class Ipsla::Common : public ydk::Entity
{
    public:
        Common();
        ~Common();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf low_memory; //type: uint32
        class HardwareTimestamp; //type: Ipsla::Common::HardwareTimestamp
        class Authentication; //type: Ipsla::Common::Authentication

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Common::HardwareTimestamp> hardware_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Common::Authentication> authentication;
        
}; // Ipsla::Common


class Ipsla::Common::HardwareTimestamp : public ydk::Entity
{
    public:
        HardwareTimestamp();
        ~HardwareTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf disable; //type: empty

}; // Ipsla::Common::HardwareTimestamp


class Ipsla::Common::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf key_chain; //type: string

}; // Ipsla::Common::Authentication


class Ipsla::MplsLspMonitor : public ydk::Entity
{
    public:
        MplsLspMonitor();
        ~MplsLspMonitor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Reactions; //type: Ipsla::MplsLspMonitor::Reactions
        class Schedules; //type: Ipsla::MplsLspMonitor::Schedules
        class Definitions; //type: Ipsla::MplsLspMonitor::Definitions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::MplsLspMonitor::Reactions> reactions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::MplsLspMonitor::Schedules> schedules;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::MplsLspMonitor::Definitions> definitions;
        
}; // Ipsla::MplsLspMonitor


class Ipsla::MplsLspMonitor::Reactions : public ydk::Entity
{
    public:
        Reactions();
        ~Reactions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Reaction; //type: Ipsla::MplsLspMonitor::Reactions::Reaction

        ydk::YList reaction;
        
}; // Ipsla::MplsLspMonitor::Reactions


class Ipsla::MplsLspMonitor::Reactions::Reaction : public ydk::Entity
{
    public:
        Reaction();
        ~Reaction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf monitor_id; //type: uint32
        class Condition; //type: Ipsla::MplsLspMonitor::Reactions::Reaction::Condition

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::MplsLspMonitor::Reactions::Reaction::Condition> condition;
        
}; // Ipsla::MplsLspMonitor::Reactions::Reaction


class Ipsla::MplsLspMonitor::Reactions::Reaction::Condition : public ydk::Entity
{
    public:
        Condition();
        ~Condition();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LpdTreeTrace; //type: Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdTreeTrace
        class Timeout; //type: Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout
        class LpdGroup; //type: Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdGroup
        class ConnectionLoss; //type: Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdTreeTrace> lpd_tree_trace;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout> timeout;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdGroup> lpd_group;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss> connection_loss;
        
}; // Ipsla::MplsLspMonitor::Reactions::Reaction::Condition


class Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdTreeTrace : public ydk::Entity
{
    public:
        LpdTreeTrace();
        ~LpdTreeTrace();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf create; //type: empty
        class ActionType; //type: Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdTreeTrace::ActionType

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdTreeTrace::ActionType> action_type;
        
}; // Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdTreeTrace


class Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdTreeTrace::ActionType : public ydk::Entity
{
    public:
        ActionType();
        ~ActionType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: empty

}; // Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdTreeTrace::ActionType


class Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout : public ydk::Entity
{
    public:
        Timeout();
        ~Timeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf create; //type: empty
        class ActionType; //type: Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::ActionType
        class ThresholdType; //type: Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::ThresholdType

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::ActionType> action_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::ThresholdType> threshold_type;
        
}; // Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout


class Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::ActionType : public ydk::Entity
{
    public:
        ActionType();
        ~ActionType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: empty

}; // Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::ActionType


class Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::ThresholdType : public ydk::Entity
{
    public:
        ThresholdType();
        ~ThresholdType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf thresh_type; //type: IpslaLspMonitorThresholdTypes
        ydk::YLeaf count1; //type: uint32
        ydk::YLeaf count2; //type: uint32

}; // Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::ThresholdType


class Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdGroup : public ydk::Entity
{
    public:
        LpdGroup();
        ~LpdGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf create; //type: empty
        class ActionType; //type: Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdGroup::ActionType

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdGroup::ActionType> action_type;
        
}; // Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdGroup


class Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdGroup::ActionType : public ydk::Entity
{
    public:
        ActionType();
        ~ActionType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: empty

}; // Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdGroup::ActionType


class Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss : public ydk::Entity
{
    public:
        ConnectionLoss();
        ~ConnectionLoss();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf create; //type: empty
        class ActionType; //type: Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::ActionType
        class ThresholdType; //type: Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::ThresholdType

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::ActionType> action_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::ThresholdType> threshold_type;
        
}; // Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss


class Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::ActionType : public ydk::Entity
{
    public:
        ActionType();
        ~ActionType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: empty

}; // Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::ActionType


class Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::ThresholdType : public ydk::Entity
{
    public:
        ThresholdType();
        ~ThresholdType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf thresh_type; //type: IpslaLspMonitorThresholdTypes
        ydk::YLeaf count1; //type: uint32
        ydk::YLeaf count2; //type: uint32

}; // Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::ThresholdType


class Ipsla::MplsLspMonitor::Schedules : public ydk::Entity
{
    public:
        Schedules();
        ~Schedules();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Schedule; //type: Ipsla::MplsLspMonitor::Schedules::Schedule

        ydk::YList schedule;
        
}; // Ipsla::MplsLspMonitor::Schedules


class Ipsla::MplsLspMonitor::Schedules::Schedule : public ydk::Entity
{
    public:
        Schedule();
        ~Schedule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf monitor_id; //type: uint32
        ydk::YLeaf frequency; //type: uint32
        ydk::YLeaf period; //type: uint32
        class StartTime; //type: Ipsla::MplsLspMonitor::Schedules::Schedule::StartTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::MplsLspMonitor::Schedules::Schedule::StartTime> start_time;
        
}; // Ipsla::MplsLspMonitor::Schedules::Schedule


class Ipsla::MplsLspMonitor::Schedules::Schedule::StartTime : public ydk::Entity
{
    public:
        StartTime();
        ~StartTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf schedule_type; //type: IpslaSched
        ydk::YLeaf hour; //type: uint32
        ydk::YLeaf minute; //type: uint32
        ydk::YLeaf second; //type: uint32
        ydk::YLeaf month; //type: IpslaMonth
        ydk::YLeaf day; //type: uint32
        ydk::YLeaf year; //type: uint32

}; // Ipsla::MplsLspMonitor::Schedules::Schedule::StartTime


class Ipsla::MplsLspMonitor::Definitions : public ydk::Entity
{
    public:
        Definitions();
        ~Definitions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Definition; //type: Ipsla::MplsLspMonitor::Definitions::Definition

        ydk::YList definition;
        
}; // Ipsla::MplsLspMonitor::Definitions


class Ipsla::MplsLspMonitor::Definitions::Definition : public ydk::Entity
{
    public:
        Definition();
        ~Definition();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf monitor_id; //type: uint32
        class OperationType; //type: Ipsla::MplsLspMonitor::Definitions::Definition::OperationType

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::MplsLspMonitor::Definitions::Definition::OperationType> operation_type;
        
}; // Ipsla::MplsLspMonitor::Definitions::Definition


class Ipsla::MplsLspMonitor::Definitions::Definition::OperationType : public ydk::Entity
{
    public:
        OperationType();
        ~OperationType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MplsLspTrace; //type: Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace
        class MplsLspPing; //type: Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace> mpls_lsp_trace;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing> mpls_lsp_ping;
        
}; // Ipsla::MplsLspMonitor::Definitions::Definition::OperationType


class Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace : public ydk::Entity
{
    public:
        MplsLspTrace();
        ~MplsLspTrace();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ttl; //type: uint32
        ydk::YLeaf exp_bits; //type: uint32
        ydk::YLeaf tag; //type: string
        ydk::YLeaf lsp_selector; //type: string
        ydk::YLeaf output_interface; //type: string
        ydk::YLeaf accesslist; //type: string
        ydk::YLeaf create; //type: empty
        ydk::YLeaf output_nexthop; //type: string
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf force_explicit_null; //type: empty
        ydk::YLeaf vrf; //type: string
        class Reply; //type: Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Reply
        class Statistics; //type: Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Statistics
        class Scan; //type: Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Scan

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Reply> reply;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Scan> scan;
        
}; // Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace


class Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Reply : public ydk::Entity
{
    public:
        Reply();
        ~Reply();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dscp_bits; //type: one of uint32, enumeration
        ydk::YLeaf mode; //type: IpslaLspMonitorReplyMode

}; // Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Reply


class Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hours; //type: uint32

}; // Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Statistics


class Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Scan : public ydk::Entity
{
    public:
        Scan();
        ~Scan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf delete_factor; //type: uint32

}; // Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Scan


class Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing : public ydk::Entity
{
    public:
        MplsLspPing();
        ~MplsLspPing();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ttl; //type: uint32
        ydk::YLeaf exp_bits; //type: uint32
        ydk::YLeaf tag; //type: string
        ydk::YLeaf lsp_selector; //type: string
        ydk::YLeaf output_interface; //type: string
        ydk::YLeaf accesslist; //type: string
        ydk::YLeaf create; //type: empty
        ydk::YLeaf output_nexthop; //type: string
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf force_explicit_null; //type: empty
        ydk::YLeaf vrf; //type: string
        class DataSize; //type: Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::DataSize
        class PathDiscover; //type: Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover
        class Reply; //type: Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Reply
        class Statistics; //type: Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Statistics
        class Scan; //type: Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Scan

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::DataSize> data_size;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover> path_discover;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Reply> reply;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Scan> scan;
        
}; // Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing


class Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::DataSize : public ydk::Entity
{
    public:
        DataSize();
        ~DataSize();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf request; //type: uint32

}; // Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::DataSize


class Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover : public ydk::Entity
{
    public:
        PathDiscover();
        ~PathDiscover();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf scan_period; //type: uint32
        ydk::YLeaf create; //type: empty
        class Session; //type: Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Session
        class Path; //type: Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Path
        class Echo; //type: Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Echo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Session> session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Path> path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Echo> echo;
        
}; // Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover


class Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf limit; //type: uint32

}; // Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Session


class Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf retry; //type: uint32
        class SecondaryFrequency; //type: Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Path::SecondaryFrequency

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Path::SecondaryFrequency> secondary_frequency; // presence node
        
}; // Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Path


class Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Path::SecondaryFrequency : public ydk::Entity
{
    public:
        SecondaryFrequency();
        ~SecondaryFrequency();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: IpslaSecondaryFrequency
        ydk::YLeaf frequency; //type: uint32

}; // Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Path::SecondaryFrequency


class Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Echo : public ydk::Entity
{
    public:
        Echo();
        ~Echo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf retry; //type: uint32
        ydk::YLeaf maximum_lsp_selector; //type: string
        class Multipath; //type: Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Echo::Multipath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Echo::Multipath> multipath;
        
}; // Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Echo


class Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Echo::Multipath : public ydk::Entity
{
    public:
        Multipath();
        ~Multipath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bitmap_size; //type: uint32

}; // Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Echo::Multipath


class Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Reply : public ydk::Entity
{
    public:
        Reply();
        ~Reply();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dscp_bits; //type: one of uint32, enumeration
        ydk::YLeaf mode; //type: IpslaLspMonitorReplyMode

}; // Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Reply


class Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hours; //type: uint32

}; // Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Statistics


class Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Scan : public ydk::Entity
{
    public:
        Scan();
        ~Scan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf delete_factor; //type: uint32

}; // Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Scan


class Ipsla::Operation : public ydk::Entity
{
    public:
        Operation();
        ~Operation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Schedules; //type: Ipsla::Operation::Schedules
        class Reactions; //type: Ipsla::Operation::Reactions
        class ReactionTriggers; //type: Ipsla::Operation::ReactionTriggers
        class Definitions; //type: Ipsla::Operation::Definitions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Schedules> schedules;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Reactions> reactions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::ReactionTriggers> reaction_triggers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions> definitions;
        
}; // Ipsla::Operation


class Ipsla::Operation::Schedules : public ydk::Entity
{
    public:
        Schedules();
        ~Schedules();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Schedule; //type: Ipsla::Operation::Schedules::Schedule

        ydk::YList schedule;
        
}; // Ipsla::Operation::Schedules


class Ipsla::Operation::Schedules::Schedule : public ydk::Entity
{
    public:
        Schedule();
        ~Schedule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf operation_id; //type: uint32
        ydk::YLeaf life; //type: one of uint32, enumeration
        ydk::YLeaf ageout; //type: uint32
        ydk::YLeaf recurring; //type: empty
        class StartTime; //type: Ipsla::Operation::Schedules::Schedule::StartTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Schedules::Schedule::StartTime> start_time;
        
}; // Ipsla::Operation::Schedules::Schedule


class Ipsla::Operation::Schedules::Schedule::StartTime : public ydk::Entity
{
    public:
        StartTime();
        ~StartTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf schedule_type; //type: IpslaSched
        ydk::YLeaf hour; //type: uint32
        ydk::YLeaf minute; //type: uint32
        ydk::YLeaf second; //type: uint32
        ydk::YLeaf month; //type: IpslaMonth
        ydk::YLeaf day; //type: uint32
        ydk::YLeaf year; //type: uint32

}; // Ipsla::Operation::Schedules::Schedule::StartTime


class Ipsla::Operation::Reactions : public ydk::Entity
{
    public:
        Reactions();
        ~Reactions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Reaction; //type: Ipsla::Operation::Reactions::Reaction

        ydk::YList reaction;
        
}; // Ipsla::Operation::Reactions


class Ipsla::Operation::Reactions::Reaction : public ydk::Entity
{
    public:
        Reaction();
        ~Reaction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf operation_id; //type: uint32
        class Condition; //type: Ipsla::Operation::Reactions::Reaction::Condition

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Reactions::Reaction::Condition> condition;
        
}; // Ipsla::Operation::Reactions::Reaction


class Ipsla::Operation::Reactions::Reaction::Condition : public ydk::Entity
{
    public:
        Condition();
        ~Condition();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class JitterAverageDs; //type: Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs
        class Timeout; //type: Ipsla::Operation::Reactions::Reaction::Condition::Timeout
        class JitterAverage; //type: Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage
        class VerifyError; //type: Ipsla::Operation::Reactions::Reaction::Condition::VerifyError
        class Rtt; //type: Ipsla::Operation::Reactions::Reaction::Condition::Rtt
        class PacketLossSd; //type: Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd
        class JitterAverageSd; //type: Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd
        class ConnectionLoss; //type: Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss
        class PacketLossDs; //type: Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs> jitter_average_ds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Reactions::Reaction::Condition::Timeout> timeout;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage> jitter_average;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Reactions::Reaction::Condition::VerifyError> verify_error;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Reactions::Reaction::Condition::Rtt> rtt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd> packet_loss_sd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd> jitter_average_sd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss> connection_loss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs> packet_loss_ds;
        
}; // Ipsla::Operation::Reactions::Reaction::Condition


class Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs : public ydk::Entity
{
    public:
        JitterAverageDs();
        ~JitterAverageDs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf create; //type: empty
        class ThresholdLimits; //type: Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ThresholdLimits
        class ActionType; //type: Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ActionType
        class ThresholdType; //type: Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ThresholdType

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ThresholdLimits> threshold_limits; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ActionType> action_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ThresholdType> threshold_type;
        
}; // Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs


class Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ThresholdLimits : public ydk::Entity
{
    public:
        ThresholdLimits();
        ~ThresholdLimits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lower_limit; //type: uint32
        ydk::YLeaf upper_limit; //type: uint32

}; // Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ThresholdLimits


class Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ActionType : public ydk::Entity
{
    public:
        ActionType();
        ~ActionType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: empty
        ydk::YLeaf trigger; //type: empty

}; // Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ActionType


class Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ThresholdType : public ydk::Entity
{
    public:
        ThresholdType();
        ~ThresholdType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf thresh_type; //type: IpslaThresholdTypes
        ydk::YLeaf count1; //type: uint32
        ydk::YLeaf count2; //type: uint32

}; // Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ThresholdType


class Ipsla::Operation::Reactions::Reaction::Condition::Timeout : public ydk::Entity
{
    public:
        Timeout();
        ~Timeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf create; //type: empty
        class ActionType; //type: Ipsla::Operation::Reactions::Reaction::Condition::Timeout::ActionType
        class ThresholdType; //type: Ipsla::Operation::Reactions::Reaction::Condition::Timeout::ThresholdType

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Reactions::Reaction::Condition::Timeout::ActionType> action_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Reactions::Reaction::Condition::Timeout::ThresholdType> threshold_type;
        
}; // Ipsla::Operation::Reactions::Reaction::Condition::Timeout


class Ipsla::Operation::Reactions::Reaction::Condition::Timeout::ActionType : public ydk::Entity
{
    public:
        ActionType();
        ~ActionType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: empty
        ydk::YLeaf trigger; //type: empty

}; // Ipsla::Operation::Reactions::Reaction::Condition::Timeout::ActionType


class Ipsla::Operation::Reactions::Reaction::Condition::Timeout::ThresholdType : public ydk::Entity
{
    public:
        ThresholdType();
        ~ThresholdType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf thresh_type; //type: IpslaThresholdTypes
        ydk::YLeaf count1; //type: uint32
        ydk::YLeaf count2; //type: uint32

}; // Ipsla::Operation::Reactions::Reaction::Condition::Timeout::ThresholdType


class Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage : public ydk::Entity
{
    public:
        JitterAverage();
        ~JitterAverage();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf create; //type: empty
        class ThresholdLimits; //type: Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ThresholdLimits
        class ActionType; //type: Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ActionType
        class ThresholdType; //type: Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ThresholdType

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ThresholdLimits> threshold_limits; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ActionType> action_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ThresholdType> threshold_type;
        
}; // Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage


class Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ThresholdLimits : public ydk::Entity
{
    public:
        ThresholdLimits();
        ~ThresholdLimits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lower_limit; //type: uint32
        ydk::YLeaf upper_limit; //type: uint32

}; // Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ThresholdLimits


class Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ActionType : public ydk::Entity
{
    public:
        ActionType();
        ~ActionType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: empty
        ydk::YLeaf trigger; //type: empty

}; // Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ActionType


class Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ThresholdType : public ydk::Entity
{
    public:
        ThresholdType();
        ~ThresholdType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf thresh_type; //type: IpslaThresholdTypes
        ydk::YLeaf count1; //type: uint32
        ydk::YLeaf count2; //type: uint32

}; // Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ThresholdType


class Ipsla::Operation::Reactions::Reaction::Condition::VerifyError : public ydk::Entity
{
    public:
        VerifyError();
        ~VerifyError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf create; //type: empty
        class ActionType; //type: Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::ActionType
        class ThresholdType; //type: Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::ThresholdType

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::ActionType> action_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::ThresholdType> threshold_type;
        
}; // Ipsla::Operation::Reactions::Reaction::Condition::VerifyError


class Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::ActionType : public ydk::Entity
{
    public:
        ActionType();
        ~ActionType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: empty
        ydk::YLeaf trigger; //type: empty

}; // Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::ActionType


class Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::ThresholdType : public ydk::Entity
{
    public:
        ThresholdType();
        ~ThresholdType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf thresh_type; //type: IpslaThresholdTypes
        ydk::YLeaf count1; //type: uint32
        ydk::YLeaf count2; //type: uint32

}; // Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::ThresholdType


class Ipsla::Operation::Reactions::Reaction::Condition::Rtt : public ydk::Entity
{
    public:
        Rtt();
        ~Rtt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf create; //type: empty
        class ThresholdLimits; //type: Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ThresholdLimits
        class ActionType; //type: Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ActionType
        class ThresholdType; //type: Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ThresholdType

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ThresholdLimits> threshold_limits; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ActionType> action_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ThresholdType> threshold_type;
        
}; // Ipsla::Operation::Reactions::Reaction::Condition::Rtt


class Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ThresholdLimits : public ydk::Entity
{
    public:
        ThresholdLimits();
        ~ThresholdLimits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lower_limit; //type: uint32
        ydk::YLeaf upper_limit; //type: uint32

}; // Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ThresholdLimits


class Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ActionType : public ydk::Entity
{
    public:
        ActionType();
        ~ActionType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: empty
        ydk::YLeaf trigger; //type: empty

}; // Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ActionType


class Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ThresholdType : public ydk::Entity
{
    public:
        ThresholdType();
        ~ThresholdType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf thresh_type; //type: IpslaThresholdTypes
        ydk::YLeaf count1; //type: uint32
        ydk::YLeaf count2; //type: uint32

}; // Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ThresholdType


class Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd : public ydk::Entity
{
    public:
        PacketLossSd();
        ~PacketLossSd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf create; //type: empty
        class ThresholdLimits; //type: Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ThresholdLimits
        class ActionType; //type: Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ActionType
        class ThresholdType; //type: Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ThresholdType

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ThresholdLimits> threshold_limits; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ActionType> action_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ThresholdType> threshold_type;
        
}; // Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd


class Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ThresholdLimits : public ydk::Entity
{
    public:
        ThresholdLimits();
        ~ThresholdLimits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lower_limit; //type: uint32
        ydk::YLeaf upper_limit; //type: uint32

}; // Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ThresholdLimits


class Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ActionType : public ydk::Entity
{
    public:
        ActionType();
        ~ActionType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: empty
        ydk::YLeaf trigger; //type: empty

}; // Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ActionType


class Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ThresholdType : public ydk::Entity
{
    public:
        ThresholdType();
        ~ThresholdType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf thresh_type; //type: IpslaThresholdTypes
        ydk::YLeaf count1; //type: uint32
        ydk::YLeaf count2; //type: uint32

}; // Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ThresholdType


class Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd : public ydk::Entity
{
    public:
        JitterAverageSd();
        ~JitterAverageSd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf create; //type: empty
        class ThresholdLimits; //type: Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ThresholdLimits
        class ActionType; //type: Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ActionType
        class ThresholdType; //type: Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ThresholdType

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ThresholdLimits> threshold_limits; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ActionType> action_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ThresholdType> threshold_type;
        
}; // Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd


class Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ThresholdLimits : public ydk::Entity
{
    public:
        ThresholdLimits();
        ~ThresholdLimits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lower_limit; //type: uint32
        ydk::YLeaf upper_limit; //type: uint32

}; // Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ThresholdLimits


class Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ActionType : public ydk::Entity
{
    public:
        ActionType();
        ~ActionType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: empty
        ydk::YLeaf trigger; //type: empty

}; // Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ActionType


class Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ThresholdType : public ydk::Entity
{
    public:
        ThresholdType();
        ~ThresholdType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf thresh_type; //type: IpslaThresholdTypes
        ydk::YLeaf count1; //type: uint32
        ydk::YLeaf count2; //type: uint32

}; // Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ThresholdType


class Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss : public ydk::Entity
{
    public:
        ConnectionLoss();
        ~ConnectionLoss();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf create; //type: empty
        class ActionType; //type: Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::ActionType
        class ThresholdType; //type: Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::ThresholdType

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::ActionType> action_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::ThresholdType> threshold_type;
        
}; // Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss


class Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::ActionType : public ydk::Entity
{
    public:
        ActionType();
        ~ActionType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: empty
        ydk::YLeaf trigger; //type: empty

}; // Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::ActionType


class Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::ThresholdType : public ydk::Entity
{
    public:
        ThresholdType();
        ~ThresholdType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf thresh_type; //type: IpslaThresholdTypes
        ydk::YLeaf count1; //type: uint32
        ydk::YLeaf count2; //type: uint32

}; // Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::ThresholdType


class Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs : public ydk::Entity
{
    public:
        PacketLossDs();
        ~PacketLossDs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf create; //type: empty
        class ThresholdLimits; //type: Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ThresholdLimits
        class ActionType; //type: Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ActionType
        class ThresholdType; //type: Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ThresholdType

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ThresholdLimits> threshold_limits; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ActionType> action_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ThresholdType> threshold_type;
        
}; // Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs


class Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ThresholdLimits : public ydk::Entity
{
    public:
        ThresholdLimits();
        ~ThresholdLimits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lower_limit; //type: uint32
        ydk::YLeaf upper_limit; //type: uint32

}; // Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ThresholdLimits


class Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ActionType : public ydk::Entity
{
    public:
        ActionType();
        ~ActionType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: empty
        ydk::YLeaf trigger; //type: empty

}; // Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ActionType


class Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ThresholdType : public ydk::Entity
{
    public:
        ThresholdType();
        ~ThresholdType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf thresh_type; //type: IpslaThresholdTypes
        ydk::YLeaf count1; //type: uint32
        ydk::YLeaf count2; //type: uint32

}; // Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ThresholdType


class Ipsla::Operation::ReactionTriggers : public ydk::Entity
{
    public:
        ReactionTriggers();
        ~ReactionTriggers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ReactionTrigger; //type: Ipsla::Operation::ReactionTriggers::ReactionTrigger

        ydk::YList reaction_trigger;
        
}; // Ipsla::Operation::ReactionTriggers


class Ipsla::Operation::ReactionTriggers::ReactionTrigger : public ydk::Entity
{
    public:
        ReactionTrigger();
        ~ReactionTrigger();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf operation_id; //type: uint32
        ydk::YLeaf triggered_op_id; //type: uint32

}; // Ipsla::Operation::ReactionTriggers::ReactionTrigger


class Ipsla::Operation::Definitions : public ydk::Entity
{
    public:
        Definitions();
        ~Definitions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Definition; //type: Ipsla::Operation::Definitions::Definition

        ydk::YList definition;
        
}; // Ipsla::Operation::Definitions


class Ipsla::Operation::Definitions::Definition : public ydk::Entity
{
    public:
        Definition();
        ~Definition();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf operation_id; //type: uint32
        class OperationType; //type: Ipsla::Operation::Definitions::Definition::OperationType

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType> operation_type;
        
}; // Ipsla::Operation::Definitions::Definition


class Ipsla::Operation::Definitions::Definition::OperationType : public ydk::Entity
{
    public:
        OperationType();
        ~OperationType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IcmpEcho; //type: Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho
        class MplsLspPing; //type: Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing
        class UdpEcho; //type: Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho
        class MplsLspTrace; //type: Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace
        class UdpJitter; //type: Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter
        class IcmpPathEcho; //type: Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho
        class IcmpPathJitter; //type: Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho> icmp_echo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing> mpls_lsp_ping;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho> udp_echo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace> mpls_lsp_trace;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter> udp_jitter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho> icmp_path_echo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter> icmp_path_jitter;
        
}; // Ipsla::Operation::Definitions::Definition::OperationType


class Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho : public ydk::Entity
{
    public:
        IcmpEcho();
        ~IcmpEcho();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address_v6; //type: string
        ydk::YLeaf dest_address_v6; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf tos; //type: uint32
        ydk::YLeaf create; //type: empty
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf frequency; //type: uint32
        ydk::YLeaf dest_address; //type: string
        ydk::YLeaf tag; //type: string
        class DataSize; //type: Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::DataSize
        class Statistics; //type: Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::Statistics
        class History; //type: Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::History
        class EnhancedStats; //type: Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::EnhancedStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::DataSize> data_size;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::History> history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::EnhancedStats> enhanced_stats;
        
}; // Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho


class Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::DataSize : public ydk::Entity
{
    public:
        DataSize();
        ~DataSize();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf request; //type: uint32

}; // Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::DataSize


class Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hours; //type: uint32
        ydk::YLeaf dist_interval; //type: uint32
        ydk::YLeaf dist_count; //type: uint32

}; // Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::Statistics


class Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lives; //type: uint32
        ydk::YLeaf history_filter; //type: IpslaHistoryFilter
        ydk::YLeaf buckets; //type: uint32

}; // Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::History


class Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::EnhancedStats : public ydk::Entity
{
    public:
        EnhancedStats();
        ~EnhancedStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EnhancedStat; //type: Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::EnhancedStats::EnhancedStat

        ydk::YList enhanced_stat;
        
}; // Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::EnhancedStats


class Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::EnhancedStats::EnhancedStat : public ydk::Entity
{
    public:
        EnhancedStat();
        ~EnhancedStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf buckets; //type: uint32

}; // Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::EnhancedStats::EnhancedStat


class Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing : public ydk::Entity
{
    public:
        MplsLspPing();
        ~MplsLspPing();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ttl; //type: uint32
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf output_nexthop; //type: string
        ydk::YLeaf create; //type: empty
        ydk::YLeaf lsp_selector; //type: string
        ydk::YLeaf exp_bits; //type: uint32
        ydk::YLeaf force_explicit_null; //type: empty
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf output_interface; //type: string
        ydk::YLeaf frequency; //type: uint32
        ydk::YLeaf tag; //type: string
        class DataSize; //type: Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::DataSize
        class Reply; //type: Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Reply
        class Target; //type: Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target
        class Statistics; //type: Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Statistics
        class History; //type: Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::History
        class EnhancedStats; //type: Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::EnhancedStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::DataSize> data_size;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Reply> reply;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target> target;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::History> history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::EnhancedStats> enhanced_stats;
        
}; // Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing


class Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::DataSize : public ydk::Entity
{
    public:
        DataSize();
        ~DataSize();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf request; //type: uint32

}; // Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::DataSize


class Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Reply : public ydk::Entity
{
    public:
        Reply();
        ~Reply();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mode; //type: IpslaLspPingReplyMode
        ydk::YLeaf dscp_bits; //type: one of uint32, enumeration

}; // Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Reply


class Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target : public ydk::Entity
{
    public:
        Target();
        ~Target();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TrafficEngineering; //type: Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::TrafficEngineering
        class Ipv4; //type: Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Ipv4
        class Pseudowire; //type: Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Pseudowire

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::TrafficEngineering> traffic_engineering;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Pseudowire> pseudowire;
        
}; // Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target


class Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::TrafficEngineering : public ydk::Entity
{
    public:
        TrafficEngineering();
        ~TrafficEngineering();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: uint32

}; // Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::TrafficEngineering


class Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FecAddress; //type: Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Ipv4::FecAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Ipv4::FecAddress> fec_address; // presence node
        
}; // Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Ipv4


class Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Ipv4::FecAddress : public ydk::Entity
{
    public:
        FecAddress();
        ~FecAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf mask; //type: string

}; // Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Ipv4::FecAddress


class Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Pseudowire : public ydk::Entity
{
    public:
        Pseudowire();
        ~Pseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TargetAddress; //type: Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Pseudowire::TargetAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Pseudowire::TargetAddress> target_address; // presence node
        
}; // Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Pseudowire


class Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Pseudowire::TargetAddress : public ydk::Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf vc_id; //type: uint32

}; // Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Pseudowire::TargetAddress


class Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hours; //type: uint32
        ydk::YLeaf dist_interval; //type: uint32
        ydk::YLeaf dist_count; //type: uint32

}; // Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Statistics


class Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lives; //type: uint32
        ydk::YLeaf history_filter; //type: IpslaHistoryFilter
        ydk::YLeaf buckets; //type: uint32

}; // Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::History


class Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::EnhancedStats : public ydk::Entity
{
    public:
        EnhancedStats();
        ~EnhancedStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EnhancedStat; //type: Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::EnhancedStats::EnhancedStat

        ydk::YList enhanced_stat;
        
}; // Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::EnhancedStats


class Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::EnhancedStats::EnhancedStat : public ydk::Entity
{
    public:
        EnhancedStat();
        ~EnhancedStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf buckets; //type: uint32

}; // Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::EnhancedStats::EnhancedStat


class Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho : public ydk::Entity
{
    public:
        UdpEcho();
        ~UdpEcho();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf tos; //type: uint32
        ydk::YLeaf control_disable; //type: empty
        ydk::YLeaf source_port; //type: uint16
        ydk::YLeaf create; //type: empty
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf frequency; //type: uint32
        ydk::YLeaf dest_port; //type: uint16
        ydk::YLeaf verify_data; //type: empty
        ydk::YLeaf dest_address; //type: string
        ydk::YLeaf tag; //type: string
        class DataSize; //type: Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::DataSize
        class Statistics; //type: Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::Statistics
        class History; //type: Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::History
        class EnhancedStats; //type: Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::EnhancedStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::DataSize> data_size;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::History> history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::EnhancedStats> enhanced_stats;
        
}; // Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho


class Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::DataSize : public ydk::Entity
{
    public:
        DataSize();
        ~DataSize();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf request; //type: uint32

}; // Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::DataSize


class Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hours; //type: uint32
        ydk::YLeaf dist_interval; //type: uint32
        ydk::YLeaf dist_count; //type: uint32

}; // Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::Statistics


class Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lives; //type: uint32
        ydk::YLeaf history_filter; //type: IpslaHistoryFilter
        ydk::YLeaf buckets; //type: uint32

}; // Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::History


class Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::EnhancedStats : public ydk::Entity
{
    public:
        EnhancedStats();
        ~EnhancedStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EnhancedStat; //type: Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::EnhancedStats::EnhancedStat

        ydk::YList enhanced_stat;
        
}; // Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::EnhancedStats


class Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::EnhancedStats::EnhancedStat : public ydk::Entity
{
    public:
        EnhancedStat();
        ~EnhancedStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf buckets; //type: uint32

}; // Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::EnhancedStats::EnhancedStat


class Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace : public ydk::Entity
{
    public:
        MplsLspTrace();
        ~MplsLspTrace();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ttl; //type: uint32
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf output_nexthop; //type: string
        ydk::YLeaf create; //type: empty
        ydk::YLeaf lsp_selector; //type: string
        ydk::YLeaf exp_bits; //type: uint32
        ydk::YLeaf force_explicit_null; //type: empty
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf output_interface; //type: string
        ydk::YLeaf frequency; //type: uint32
        ydk::YLeaf tag; //type: string
        class Target; //type: Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target
        class Reply; //type: Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Reply
        class Statistics; //type: Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Statistics
        class History; //type: Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::History

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target> target;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Reply> reply;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::History> history;
        
}; // Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace


class Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target : public ydk::Entity
{
    public:
        Target();
        ~Target();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TrafficEngineering; //type: Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::TrafficEngineering
        class Ipv4; //type: Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::Ipv4

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::TrafficEngineering> traffic_engineering;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::Ipv4> ipv4;
        
}; // Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target


class Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::TrafficEngineering : public ydk::Entity
{
    public:
        TrafficEngineering();
        ~TrafficEngineering();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: uint32

}; // Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::TrafficEngineering


class Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FecAddress; //type: Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::Ipv4::FecAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::Ipv4::FecAddress> fec_address; // presence node
        
}; // Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::Ipv4


class Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::Ipv4::FecAddress : public ydk::Entity
{
    public:
        FecAddress();
        ~FecAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf mask; //type: string

}; // Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::Ipv4::FecAddress


class Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Reply : public ydk::Entity
{
    public:
        Reply();
        ~Reply();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mode; //type: IpslaLspTraceReplyMode
        ydk::YLeaf dscp_bits; //type: one of uint32, enumeration

}; // Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Reply


class Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hours; //type: uint32
        ydk::YLeaf dist_interval; //type: uint32
        ydk::YLeaf dist_count; //type: uint32

}; // Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Statistics


class Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lives; //type: uint32
        ydk::YLeaf history_filter; //type: IpslaHistoryFilter
        ydk::YLeaf buckets; //type: uint32

}; // Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::History


class Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter : public ydk::Entity
{
    public:
        UdpJitter();
        ~UdpJitter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf tos; //type: uint32
        ydk::YLeaf control_disable; //type: empty
        ydk::YLeaf source_port; //type: uint16
        ydk::YLeaf create; //type: empty
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf frequency; //type: uint32
        ydk::YLeaf dest_port; //type: uint16
        ydk::YLeaf verify_data; //type: empty
        ydk::YLeaf dest_address; //type: string
        ydk::YLeaf tag; //type: string
        class DataSize; //type: Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::DataSize
        class Packet; //type: Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::Packet
        class Statistics; //type: Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::Statistics
        class EnhancedStats; //type: Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::EnhancedStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::DataSize> data_size;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::Packet> packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::EnhancedStats> enhanced_stats;
        
}; // Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter


class Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::DataSize : public ydk::Entity
{
    public:
        DataSize();
        ~DataSize();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf request; //type: uint32

}; // Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::DataSize


class Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::Packet : public ydk::Entity
{
    public:
        Packet();
        ~Packet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32
        ydk::YLeaf interval; //type: uint32

}; // Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::Packet


class Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hours; //type: uint32
        ydk::YLeaf dist_interval; //type: uint32
        ydk::YLeaf dist_count; //type: uint32

}; // Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::Statistics


class Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::EnhancedStats : public ydk::Entity
{
    public:
        EnhancedStats();
        ~EnhancedStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EnhancedStat; //type: Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::EnhancedStats::EnhancedStat

        ydk::YList enhanced_stat;
        
}; // Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::EnhancedStats


class Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::EnhancedStats::EnhancedStat : public ydk::Entity
{
    public:
        EnhancedStat();
        ~EnhancedStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf buckets; //type: uint32

}; // Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::EnhancedStats::EnhancedStat


class Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho : public ydk::Entity
{
    public:
        IcmpPathEcho();
        ~IcmpPathEcho();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf tos; //type: uint32
        ydk::YLeaf create; //type: empty
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf frequency; //type: uint32
        ydk::YLeaf dest_address; //type: string
        ydk::YLeaf tag; //type: string
        class History; //type: Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::History
        class DataSize; //type: Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::DataSize
        class Statistics; //type: Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::Statistics
        class LsrPath; //type: Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::LsrPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::History> history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::DataSize> data_size;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::LsrPath> lsr_path; // presence node
        
}; // Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho


class Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf samples; //type: uint32
        ydk::YLeaf buckets; //type: uint32
        ydk::YLeaf history_filter; //type: IpslaHistoryFilter
        ydk::YLeaf lives; //type: uint32

}; // Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::History


class Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::DataSize : public ydk::Entity
{
    public:
        DataSize();
        ~DataSize();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf request; //type: uint32

}; // Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::DataSize


class Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf paths; //type: uint32
        ydk::YLeaf dist_interval; //type: uint32
        ydk::YLeaf dist_count; //type: uint32
        ydk::YLeaf hours; //type: uint32
        ydk::YLeaf hops; //type: uint32

}; // Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::Statistics


class Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::LsrPath : public ydk::Entity
{
    public:
        LsrPath();
        ~LsrPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node1; //type: string
        ydk::YLeaf node2; //type: string
        ydk::YLeaf node3; //type: string
        ydk::YLeaf node4; //type: string
        ydk::YLeaf node5; //type: string
        ydk::YLeaf node6; //type: string
        ydk::YLeaf node7; //type: string
        ydk::YLeaf node8; //type: string

}; // Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::LsrPath


class Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter : public ydk::Entity
{
    public:
        IcmpPathJitter();
        ~IcmpPathJitter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf tos; //type: uint32
        ydk::YLeaf create; //type: empty
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf frequency; //type: uint32
        ydk::YLeaf dest_address; //type: string
        ydk::YLeaf tag; //type: string
        class DataSize; //type: Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::DataSize
        class Packet; //type: Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::Packet
        class LsrPath; //type: Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::LsrPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::DataSize> data_size;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::Packet> packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::LsrPath> lsr_path; // presence node
        
}; // Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter


class Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::DataSize : public ydk::Entity
{
    public:
        DataSize();
        ~DataSize();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf request; //type: uint32

}; // Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::DataSize


class Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::Packet : public ydk::Entity
{
    public:
        Packet();
        ~Packet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32
        ydk::YLeaf interval; //type: uint32

}; // Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::Packet


class Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::LsrPath : public ydk::Entity
{
    public:
        LsrPath();
        ~LsrPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node1; //type: string
        ydk::YLeaf node2; //type: string
        ydk::YLeaf node3; //type: string
        ydk::YLeaf node4; //type: string
        ydk::YLeaf node5; //type: string
        ydk::YLeaf node6; //type: string
        ydk::YLeaf node7; //type: string
        ydk::YLeaf node8; //type: string

}; // Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::LsrPath


class Ipsla::Responder : public ydk::Entity
{
    public:
        Responder();
        ~Responder();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Twamp; //type: Ipsla::Responder::Twamp
        class Type; //type: Ipsla::Responder::Type
        class TwampLight; //type: Ipsla::Responder::TwampLight

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Responder::Twamp> twamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Responder::Type> type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Responder::TwampLight> twamp_light;
        
}; // Ipsla::Responder


class Ipsla::Responder::Twamp : public ydk::Entity
{
    public:
        Twamp();
        ~Twamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf timeout; //type: uint32

}; // Ipsla::Responder::Twamp


class Ipsla::Responder::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Udp; //type: Ipsla::Responder::Type::Udp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Responder::Type::Udp> udp;
        
}; // Ipsla::Responder::Type


class Ipsla::Responder::Type::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Addresses; //type: Ipsla::Responder::Type::Udp::Addresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Responder::Type::Udp::Addresses> addresses;
        
}; // Ipsla::Responder::Type::Udp


class Ipsla::Responder::Type::Udp::Addresses : public ydk::Entity
{
    public:
        Addresses();
        ~Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Address; //type: Ipsla::Responder::Type::Udp::Addresses::Address

        ydk::YList address;
        
}; // Ipsla::Responder::Type::Udp::Addresses


class Ipsla::Responder::Type::Udp::Addresses::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf local_address; //type: string
        class Ports; //type: Ipsla::Responder::Type::Udp::Addresses::Address::Ports

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Responder::Type::Udp::Addresses::Address::Ports> ports;
        
}; // Ipsla::Responder::Type::Udp::Addresses::Address


class Ipsla::Responder::Type::Udp::Addresses::Address::Ports : public ydk::Entity
{
    public:
        Ports();
        ~Ports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Port; //type: Ipsla::Responder::Type::Udp::Addresses::Address::Ports::Port

        ydk::YList port;
        
}; // Ipsla::Responder::Type::Udp::Addresses::Address::Ports


class Ipsla::Responder::Type::Udp::Addresses::Address::Ports::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: uint16

}; // Ipsla::Responder::Type::Udp::Addresses::Address::Ports::Port


class Ipsla::Responder::TwampLight : public ydk::Entity
{
    public:
        TwampLight();
        ~TwampLight();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SessionIds; //type: Ipsla::Responder::TwampLight::SessionIds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Responder::TwampLight::SessionIds> session_ids;
        
}; // Ipsla::Responder::TwampLight


class Ipsla::Responder::TwampLight::SessionIds : public ydk::Entity
{
    public:
        SessionIds();
        ~SessionIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SessionId; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId

        ydk::YList session_id;
        
}; // Ipsla::Responder::TwampLight::SessionIds


class Ipsla::Responder::TwampLight::SessionIds::SessionId : public ydk::Entity
{
    public:
        SessionId();
        ~SessionId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf twamp_light_timeout; //type: uint32
        class LocalIp; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp> local_ip;
        
}; // Ipsla::Responder::TwampLight::SessionIds::SessionId


class Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp : public ydk::Entity
{
    public:
        LocalIp();
        ~LocalIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LocalIpv6Addresses; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses
        class LocalIpv4Addresses; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses> local_ipv6_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses> local_ipv4_addresses;
        
}; // Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp


class Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses : public ydk::Entity
{
    public:
        LocalIpv6Addresses();
        ~LocalIpv6Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LocalIpv6Address; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address

        ydk::YList local_ipv6_address;
        
}; // Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses


class Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address : public ydk::Entity
{
    public:
        LocalIpv6Address();
        ~LocalIpv6Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf localv6_address; //type: string
        class LocalPortNumbers; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers> local_port_numbers;
        
}; // Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address


class Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers : public ydk::Entity
{
    public:
        LocalPortNumbers();
        ~LocalPortNumbers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LocalPortNumber; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber

        ydk::YList local_port_number;
        
}; // Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers


class Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber : public ydk::Entity
{
    public:
        LocalPortNumber();
        ~LocalPortNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_port; //type: uint16
        class RemoteIp; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp> remote_ip;
        
}; // Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber


class Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp : public ydk::Entity
{
    public:
        RemoteIp();
        ~RemoteIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RemoteIpv4Addresses; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses
        class RemoteIpv6Addresses; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses> remote_ipv4_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses> remote_ipv6_addresses;
        
}; // Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp


class Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses : public ydk::Entity
{
    public:
        RemoteIpv4Addresses();
        ~RemoteIpv4Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RemoteIpv4Address; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address

        ydk::YList remote_ipv4_address;
        
}; // Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses

class IpslaMonth : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf january;
        static const ydk::Enum::YLeaf february;
        static const ydk::Enum::YLeaf march;
        static const ydk::Enum::YLeaf april;
        static const ydk::Enum::YLeaf may;
        static const ydk::Enum::YLeaf june;
        static const ydk::Enum::YLeaf july;
        static const ydk::Enum::YLeaf august;
        static const ydk::Enum::YLeaf september;
        static const ydk::Enum::YLeaf october;
        static const ydk::Enum::YLeaf november;
        static const ydk::Enum::YLeaf december;

        static int get_enum_value(const std::string & name) {
            if (name == "january") return 0;
            if (name == "february") return 1;
            if (name == "march") return 2;
            if (name == "april") return 3;
            if (name == "may") return 4;
            if (name == "june") return 5;
            if (name == "july") return 6;
            if (name == "august") return 7;
            if (name == "september") return 8;
            if (name == "october") return 9;
            if (name == "november") return 10;
            if (name == "december") return 11;
            return -1;
        }
};

class IpslaLspPingReplyMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4_udp_router_alert;
        static const ydk::Enum::YLeaf control_channel;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4-udp-router-alert") return 3;
            if (name == "control-channel") return 4;
            return -1;
        }
};

class IpslaHistoryFilter : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf failed;
        static const ydk::Enum::YLeaf all;

        static int get_enum_value(const std::string & name) {
            if (name == "failed") return 2;
            if (name == "all") return 255;
            return -1;
        }
};

class IpslaLspTraceReplyMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4_udp_router_alert;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4-udp-router-alert") return 3;
            return -1;
        }
};

class IpslaSecondaryFrequency : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf connection_loss;
        static const ydk::Enum::YLeaf timeout;
        static const ydk::Enum::YLeaf both;

        static int get_enum_value(const std::string & name) {
            if (name == "connection-loss") return 1;
            if (name == "timeout") return 2;
            if (name == "both") return 3;
            return -1;
        }
};

class IpslaLife : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf forever;

        static int get_enum_value(const std::string & name) {
            if (name == "forever") return 0;
            return -1;
        }
};

class IpslaLspReplyDscp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf af11;
        static const ydk::Enum::YLeaf af12;
        static const ydk::Enum::YLeaf af13;
        static const ydk::Enum::YLeaf af21;
        static const ydk::Enum::YLeaf af22;
        static const ydk::Enum::YLeaf af23;
        static const ydk::Enum::YLeaf af31;
        static const ydk::Enum::YLeaf af32;
        static const ydk::Enum::YLeaf af33;
        static const ydk::Enum::YLeaf af41;
        static const ydk::Enum::YLeaf af42;
        static const ydk::Enum::YLeaf af43;
        static const ydk::Enum::YLeaf cs1;
        static const ydk::Enum::YLeaf cs2;
        static const ydk::Enum::YLeaf cs3;
        static const ydk::Enum::YLeaf cs4;
        static const ydk::Enum::YLeaf cs5;
        static const ydk::Enum::YLeaf cs6;
        static const ydk::Enum::YLeaf cs7;
        static const ydk::Enum::YLeaf ef;

        static int get_enum_value(const std::string & name) {
            if (name == "default") return 0;
            if (name == "af11") return 10;
            if (name == "af12") return 12;
            if (name == "af13") return 14;
            if (name == "af21") return 18;
            if (name == "af22") return 20;
            if (name == "af23") return 22;
            if (name == "af31") return 26;
            if (name == "af32") return 28;
            if (name == "af33") return 30;
            if (name == "af41") return 34;
            if (name == "af42") return 36;
            if (name == "af43") return 38;
            if (name == "cs1") return 8;
            if (name == "cs2") return 16;
            if (name == "cs3") return 24;
            if (name == "cs4") return 32;
            if (name == "cs5") return 40;
            if (name == "cs6") return 48;
            if (name == "cs7") return 56;
            if (name == "ef") return 46;
            return -1;
        }
};

class IpslaLspMonitorReplyMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4_udp_router_alert;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4-udp-router-alert") return 3;
            return -1;
        }
};

class IpslaThresholdTypes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf consecutive;
        static const ydk::Enum::YLeaf xof_y;
        static const ydk::Enum::YLeaf average;

        static int get_enum_value(const std::string & name) {
            if (name == "immediate") return 2;
            if (name == "consecutive") return 3;
            if (name == "xof-y") return 4;
            if (name == "average") return 5;
            return -1;
        }
};

class IpslaSched : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pending;
        static const ydk::Enum::YLeaf now;
        static const ydk::Enum::YLeaf after;
        static const ydk::Enum::YLeaf at;

        static int get_enum_value(const std::string & name) {
            if (name == "pending") return 1;
            if (name == "now") return 2;
            if (name == "after") return 3;
            if (name == "at") return 4;
            return -1;
        }
};

class IpslaLspMonitorThresholdTypes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf consecutive;

        static int get_enum_value(const std::string & name) {
            if (name == "immediate") return 2;
            if (name == "consecutive") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_MAN_IPSLA_CFG_0_ */

