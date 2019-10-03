#ifndef _CISCO_PW_
#define _CISCO_PW_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace cisco_pw {

class PwSignalingProtocolType : public virtual ydk::Identity
{
    public:
        PwSignalingProtocolType();
        ~PwSignalingProtocolType();


}; // PwSignalingProtocolType

class PwLoadBalanceType : public virtual ydk::Identity
{
    public:
        PwLoadBalanceType();
        ~PwLoadBalanceType();


}; // PwLoadBalanceType

class PwEncapsulationType : public virtual ydk::Identity
{
    public:
        PwEncapsulationType();
        ~PwEncapsulationType();


}; // PwEncapsulationType

class PwVcType : public virtual ydk::Identity
{
    public:
        PwVcType();
        ~PwVcType();


}; // PwVcType

class PwSequencingType : public virtual ydk::Identity
{
    public:
        PwSequencingType();
        ~PwSequencingType();


}; // PwSequencingType

class PseudowireConfig : public ydk::Entity
{
    public:
        PseudowireConfig();
        ~PseudowireConfig();

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

        class Global; //type: PseudowireConfig::Global
        class PwTemplates; //type: PseudowireConfig::PwTemplates
        class PwStaticOamClasses; //type: PseudowireConfig::PwStaticOamClasses

        std::shared_ptr<cisco_ios_xe::cisco_pw::PseudowireConfig::Global> global;
        std::shared_ptr<cisco_ios_xe::cisco_pw::PseudowireConfig::PwTemplates> pw_templates;
        std::shared_ptr<cisco_ios_xe::cisco_pw::PseudowireConfig::PwStaticOamClasses> pw_static_oam_classes;
        
}; // PseudowireConfig


class PseudowireConfig::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

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

        ydk::YLeaf pw_grouping; //type: boolean
        ydk::YLeaf pw_oam_refresh_transmit; //type: uint32
        ydk::YLeaf pw_status; //type: boolean
        ydk::YLeaf predictive_redundancy; //type: boolean
        ydk::YLeaf vc_state_notification_enabled; //type: boolean
        ydk::YLeaf vc_state_notification_batch_size; //type: uint32
        ydk::YLeaf vc_state_notification_rate; //type: uint32

}; // PseudowireConfig::Global


class PseudowireConfig::PwTemplates : public ydk::Entity
{
    public:
        PwTemplates();
        ~PwTemplates();

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

        class PwTemplate; //type: PseudowireConfig::PwTemplates::PwTemplate

        ydk::YList pw_template;
        
}; // PseudowireConfig::PwTemplates


class PseudowireConfig::PwTemplates::PwTemplate : public ydk::Entity
{
    public:
        PwTemplate();
        ~PwTemplate();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf encapsulation; //type: PwEncapsulationType
        ydk::YLeaf control_word; //type: boolean
        ydk::YLeaf signaling_protocol; //type: PwSignalingProtocolType
        ydk::YLeaf vc_type; //type: PwVcType
        ydk::YLeaf switching_tlv; //type: boolean
        ydk::YLeaf source_ip; //type: string
        ydk::YLeaf tag_rewrite_ingress_vlan; //type: uint16
        ydk::YLeaf mac_withdraw; //type: boolean
        class LoadBalance; //type: PseudowireConfig::PwTemplates::PwTemplate::LoadBalance
        class PreferredPath; //type: PseudowireConfig::PwTemplates::PwTemplate::PreferredPath
        class Sequencing; //type: PseudowireConfig::PwTemplates::PwTemplate::Sequencing
        class Vccv; //type: PseudowireConfig::PwTemplates::PwTemplate::Vccv
        class SwitchoverDelay; //type: PseudowireConfig::PwTemplates::PwTemplate::SwitchoverDelay
        class Status; //type: PseudowireConfig::PwTemplates::PwTemplate::Status
        class PortProfileSpec; //type: PseudowireConfig::PwTemplates::PwTemplate::PortProfileSpec

        std::shared_ptr<cisco_ios_xe::cisco_pw::PseudowireConfig::PwTemplates::PwTemplate::LoadBalance> load_balance;
        std::shared_ptr<cisco_ios_xe::cisco_pw::PseudowireConfig::PwTemplates::PwTemplate::PreferredPath> preferred_path;
        std::shared_ptr<cisco_ios_xe::cisco_pw::PseudowireConfig::PwTemplates::PwTemplate::Sequencing> sequencing;
        std::shared_ptr<cisco_ios_xe::cisco_pw::PseudowireConfig::PwTemplates::PwTemplate::Vccv> vccv;
        std::shared_ptr<cisco_ios_xe::cisco_pw::PseudowireConfig::PwTemplates::PwTemplate::SwitchoverDelay> switchover_delay;
        std::shared_ptr<cisco_ios_xe::cisco_pw::PseudowireConfig::PwTemplates::PwTemplate::Status> status;
        std::shared_ptr<cisco_ios_xe::cisco_pw::PseudowireConfig::PwTemplates::PwTemplate::PortProfileSpec> port_profile_spec;
        
}; // PseudowireConfig::PwTemplates::PwTemplate


class PseudowireConfig::PwTemplates::PwTemplate::LoadBalance : public ydk::Entity
{
    public:
        LoadBalance();
        ~LoadBalance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethernet; //type: PwLbEthernetType
        ydk::YLeaf ip; //type: PwLbIpType
        class FlowLabel; //type: PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel

        std::shared_ptr<cisco_ios_xe::cisco_pw::PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel> flow_label;
        
}; // PseudowireConfig::PwTemplates::PwTemplate::LoadBalance


class PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel : public ydk::Entity
{
    public:
        FlowLabel();
        ~FlowLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: Direction
        ydk::YLeaf tlv_code_17; //type: boolean
        ydk::YLeaf static_; //type: boolean
        class Direction;

}; // PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel


class PseudowireConfig::PwTemplates::PwTemplate::PreferredPath : public ydk::Entity
{
    public:
        PreferredPath();
        ~PreferredPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to ietf::ietf_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        ydk::YLeaf address; //type: string
        ydk::YLeaf hostname; //type: string
        ydk::YLeaf disable_fallback; //type: boolean

}; // PseudowireConfig::PwTemplates::PwTemplate::PreferredPath


class PseudowireConfig::PwTemplates::PwTemplate::Sequencing : public ydk::Entity
{
    public:
        Sequencing();
        ~Sequencing();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: PwSequencingType
        ydk::YLeaf resync; //type: int32

}; // PseudowireConfig::PwTemplates::PwTemplate::Sequencing


class PseudowireConfig::PwTemplates::PwTemplate::Vccv : public ydk::Entity
{
    public:
        Vccv();
        ~Vccv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf control_word; //type: boolean

}; // PseudowireConfig::PwTemplates::PwTemplate::Vccv


class PseudowireConfig::PwTemplates::PwTemplate::SwitchoverDelay : public ydk::Entity
{
    public:
        SwitchoverDelay();
        ~SwitchoverDelay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switchover_timer; //type: uint8
        ydk::YLeaf timer; //type: uint8
        ydk::YLeaf never; //type: boolean

}; // PseudowireConfig::PwTemplates::PwTemplate::SwitchoverDelay


class PseudowireConfig::PwTemplates::PwTemplate::Status : public ydk::Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf decoupled; //type: boolean
        ydk::YLeaf disable; //type: boolean
        ydk::YLeaf peer_topo_dual_homed; //type: boolean
        ydk::YLeaf route_watch_disable; //type: boolean
        ydk::YLeaf redundancy_master; //type: boolean

}; // PseudowireConfig::PwTemplates::PwTemplate::Status


class PseudowireConfig::PwTemplates::PwTemplate::PortProfileSpec : public ydk::Entity
{
    public:
        PortProfileSpec();
        ~PortProfileSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf shutdown; //type: boolean
        ydk::YLeaf shut_force; //type: boolean
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf max_ports; //type: uint16
        ydk::YLeaf enabled; //type: boolean

}; // PseudowireConfig::PwTemplates::PwTemplate::PortProfileSpec


class PseudowireConfig::PwStaticOamClasses : public ydk::Entity
{
    public:
        PwStaticOamClasses();
        ~PwStaticOamClasses();

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

        class PwStaticOamClass; //type: PseudowireConfig::PwStaticOamClasses::PwStaticOamClass

        ydk::YList pw_static_oam_class;
        
}; // PseudowireConfig::PwStaticOamClasses


class PseudowireConfig::PwStaticOamClasses::PwStaticOamClass : public ydk::Entity
{
    public:
        PwStaticOamClass();
        ~PwStaticOamClass();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf ack; //type: boolean
        ydk::YLeaf keepalive; //type: uint32
        ydk::YLeaf timeout_refresh_send; //type: uint32
        ydk::YLeaf timeout_refresh_ack; //type: uint32

}; // PseudowireConfig::PwStaticOamClasses::PwStaticOamClass

class PseudowireState : public ydk::Entity
{
    public:
        PseudowireState();
        ~PseudowireState();

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

        class Pseudowires; //type: PseudowireState::Pseudowires

        ydk::YList pseudowires;
        
}; // PseudowireState


class PseudowireState::Pseudowires : public ydk::Entity
{
    public:
        Pseudowires();
        ~Pseudowires();

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

        ydk::YLeaf vc_peer_address; //type: string
        ydk::YLeaf vc_id; //type: uint32
        ydk::YLeaf vc_owner_type; //type: VcOwnerType
        ydk::YLeaf vc_name; //type: string
        ydk::YLeaf vc_index; //type: uint32
        ydk::YLeaf vc_type; //type: PwVcType
        ydk::YLeaf vc_owner_name; //type: string
        ydk::YLeaf vc_psn_type; //type: VcPsnType
        ydk::YLeaf vc_local_group_id; //type: uint32
        ydk::YLeaf vc_control_word; //type: boolean
        ydk::YLeaf vc_local_if_mtu; //type: uint32
        ydk::YLeaf vc_remote_group_id; //type: uint32
        ydk::YLeaf vc_remote_control_word; //type: VcRemoteControlWord
        ydk::YLeaf vc_remote_if_mtu; //type: uint32
        ydk::YLeaf vc_outbound_label; //type: uint32
        ydk::YLeaf vc_inbound_label; //type: uint32
        ydk::YLeaf vc_oper_status; //type: PwOperStateType
        ydk::YLeaf vc_inbound_oper_status; //type: PwOperStateType
        ydk::YLeaf vc_outbound_oper_status; //type: PwOperStateType
        class Statistics; //type: PseudowireState::Pseudowires::Statistics

        std::shared_ptr<cisco_ios_xe::cisco_pw::PseudowireState::Pseudowires::Statistics> statistics;
                class VcOwnerType;
        class VcPsnType;
        class VcRemoteControlWord;

}; // PseudowireState::Pseudowires


class PseudowireState::Pseudowires::Statistics : public ydk::Entity
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

        ydk::YLeaf vc_create_time; //type: uint32
        ydk::YLeaf vc_up_time; //type: uint32
        ydk::YLeaf discontinuity_time; //type: string
        ydk::YLeaf in_octets; //type: uint64
        ydk::YLeaf in_pkts; //type: uint64
        ydk::YLeaf in_errors; //type: uint64
        ydk::YLeaf out_octets; //type: uint64
        ydk::YLeaf out_pkts; //type: uint64
        ydk::YLeaf out_errors; //type: uint64

}; // PseudowireState::Pseudowires::Statistics

class PwVcTypeEther : public cisco_ios_xe::cisco_pw::PwVcType, virtual ydk::Identity
{
    public:
        PwVcTypeEther();
        ~PwVcTypeEther();


}; // PwVcTypeEther

class PwSequencingTransmit : public cisco_ios_xe::cisco_pw::PwSequencingType, virtual ydk::Identity
{
    public:
        PwSequencingTransmit();
        ~PwSequencingTransmit();


}; // PwSequencingTransmit

class PwVcTypeVlanPassthrough : public cisco_ios_xe::cisco_pw::PwVcType, virtual ydk::Identity
{
    public:
        PwVcTypeVlanPassthrough();
        ~PwVcTypeVlanPassthrough();


}; // PwVcTypeVlanPassthrough

class PwEncapMpls : public cisco_ios_xe::cisco_pw::PwEncapsulationType, virtual ydk::Identity
{
    public:
        PwEncapMpls();
        ~PwEncapMpls();


}; // PwEncapMpls

class PwLbIpDstIp : public cisco_ios_xe::cisco_pw::PwLoadBalanceType, virtual ydk::Identity
{
    public:
        PwLbIpDstIp();
        ~PwLbIpDstIp();


}; // PwLbIpDstIp

class PwSequencingReceive : public cisco_ios_xe::cisco_pw::PwSequencingType, virtual ydk::Identity
{
    public:
        PwSequencingReceive();
        ~PwSequencingReceive();


}; // PwSequencingReceive

class PwLbEthernetType : public cisco_ios_xe::cisco_pw::PwLoadBalanceType, virtual ydk::Identity
{
    public:
        PwLbEthernetType();
        ~PwLbEthernetType();


}; // PwLbEthernetType

class PwSignalingProtocolLdp : public cisco_ios_xe::cisco_pw::PwSignalingProtocolType, virtual ydk::Identity
{
    public:
        PwSignalingProtocolLdp();
        ~PwSignalingProtocolLdp();


}; // PwSignalingProtocolLdp

class PwSequencingBoth : public cisco_ios_xe::cisco_pw::PwSequencingType, virtual ydk::Identity
{
    public:
        PwSequencingBoth();
        ~PwSequencingBoth();


}; // PwSequencingBoth

class PwVcTypeVlan : public cisco_ios_xe::cisco_pw::PwVcType, virtual ydk::Identity
{
    public:
        PwVcTypeVlan();
        ~PwVcTypeVlan();


}; // PwVcTypeVlan

class PwLbIpType : public cisco_ios_xe::cisco_pw::PwLoadBalanceType, virtual ydk::Identity
{
    public:
        PwLbIpType();
        ~PwLbIpType();


}; // PwLbIpType

class PwSignalingProtocolNone : public cisco_ios_xe::cisco_pw::PwSignalingProtocolType, virtual ydk::Identity
{
    public:
        PwSignalingProtocolNone();
        ~PwSignalingProtocolNone();


}; // PwSignalingProtocolNone

class PwSignalingProtocolBgp : public cisco_ios_xe::cisco_pw::PwSignalingProtocolType, virtual ydk::Identity
{
    public:
        PwSignalingProtocolBgp();
        ~PwSignalingProtocolBgp();


}; // PwSignalingProtocolBgp

class PwLbIpSrcIp : public cisco_ios_xe::cisco_pw::PwLbIpType, virtual ydk::Identity
{
    public:
        PwLbIpSrcIp();
        ~PwLbIpSrcIp();


}; // PwLbIpSrcIp

class PwLbEthSrcDstMac : public cisco_ios_xe::cisco_pw::PwLbEthernetType, virtual ydk::Identity
{
    public:
        PwLbEthSrcDstMac();
        ~PwLbEthSrcDstMac();


}; // PwLbEthSrcDstMac

class PwLbEthDstMac : public cisco_ios_xe::cisco_pw::PwLbEthernetType, virtual ydk::Identity
{
    public:
        PwLbEthDstMac();
        ~PwLbEthDstMac();


}; // PwLbEthDstMac

class PwLbIpSrcDstIp : public cisco_ios_xe::cisco_pw::PwLbIpType, virtual ydk::Identity
{
    public:
        PwLbIpSrcDstIp();
        ~PwLbIpSrcDstIp();


}; // PwLbIpSrcDstIp

class PwLbEthSrcMac : public cisco_ios_xe::cisco_pw::PwLbEthernetType, virtual ydk::Identity
{
    public:
        PwLbEthSrcMac();
        ~PwLbEthSrcMac();


}; // PwLbEthSrcMac

class PwOperStateType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf cold_standby;
        static const ydk::Enum::YLeaf hot_standby;
        static const ydk::Enum::YLeaf recovering;
        static const ydk::Enum::YLeaf no_hardware;
        static const ydk::Enum::YLeaf unresolved;
        static const ydk::Enum::YLeaf provisioned;
        static const ydk::Enum::YLeaf remote_standby;
        static const ydk::Enum::YLeaf local_ready;
        static const ydk::Enum::YLeaf all_ready;

        static int get_enum_value(const std::string & name) {
            if (name == "up") return 1;
            if (name == "down") return 2;
            if (name == "cold-standby") return 3;
            if (name == "hot-standby") return 4;
            if (name == "recovering") return 5;
            if (name == "no-hardware") return 6;
            if (name == "unresolved") return 7;
            if (name == "provisioned") return 8;
            if (name == "remote-standby") return 9;
            if (name == "local-ready") return 10;
            if (name == "all-ready") return 11;
            return -1;
        }
};

class PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf transmit;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf both;

        static int get_enum_value(const std::string & name) {
            if (name == "transmit") return 1;
            if (name == "receive") return 2;
            if (name == "both") return 3;
            return -1;
        }
};

class PseudowireState::Pseudowires::VcOwnerType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vpws;
        static const ydk::Enum::YLeaf vpls_vfi;
        static const ydk::Enum::YLeaf vpls_bridge_domain;
        static const ydk::Enum::YLeaf interface;

        static int get_enum_value(const std::string & name) {
            if (name == "vpws") return 1;
            if (name == "vpls-vfi") return 2;
            if (name == "vpls-bridge-domain") return 3;
            if (name == "interface") return 4;
            return -1;
        }
};

class PseudowireState::Pseudowires::VcPsnType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf l2tp;
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf mpls_over_ip;
        static const ydk::Enum::YLeaf gre;
        static const ydk::Enum::YLeaf other;

        static int get_enum_value(const std::string & name) {
            if (name == "mpls") return 1;
            if (name == "l2tp") return 2;
            if (name == "ip") return 3;
            if (name == "mpls-over-ip") return 4;
            if (name == "gre") return 5;
            if (name == "other") return 6;
            return -1;
        }
};

class PseudowireState::Pseudowires::VcRemoteControlWord : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noControlWord;
        static const ydk::Enum::YLeaf withControlWord;
        static const ydk::Enum::YLeaf notYetKnown;

        static int get_enum_value(const std::string & name) {
            if (name == "noControlWord") return 1;
            if (name == "withControlWord") return 2;
            if (name == "notYetKnown") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_PW_ */

