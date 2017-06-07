#ifndef _CISCO_PW_
#define _CISCO_PW_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace cisco_pw {

class PwSignalingProtocolTypeIdentity : public virtual Identity
{
    public:
        PwSignalingProtocolTypeIdentity();
        ~PwSignalingProtocolTypeIdentity();


}; // PwSignalingProtocolTypeIdentity

class PwLoadBalanceTypeIdentity : public virtual Identity
{
    public:
        PwLoadBalanceTypeIdentity();
        ~PwLoadBalanceTypeIdentity();


}; // PwLoadBalanceTypeIdentity

class PwEncapsulationTypeIdentity : public virtual Identity
{
    public:
        PwEncapsulationTypeIdentity();
        ~PwEncapsulationTypeIdentity();


}; // PwEncapsulationTypeIdentity

class PwVcTypeIdentity : public virtual Identity
{
    public:
        PwVcTypeIdentity();
        ~PwVcTypeIdentity();


}; // PwVcTypeIdentity

class PwSequencingTypeIdentity : public virtual Identity
{
    public:
        PwSequencingTypeIdentity();
        ~PwSequencingTypeIdentity();


}; // PwSequencingTypeIdentity

class PseudowireConfig : public Entity
{
    public:
        PseudowireConfig();
        ~PseudowireConfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Global; //type: PseudowireConfig::Global
        class PwTemplates; //type: PseudowireConfig::PwTemplates
        class PwStaticOamClasses; //type: PseudowireConfig::PwStaticOamClasses

        std::shared_ptr<cisco_pw::PseudowireConfig::Global> global;
        std::shared_ptr<cisco_pw::PseudowireConfig::PwStaticOamClasses> pw_static_oam_classes;
        std::shared_ptr<cisco_pw::PseudowireConfig::PwTemplates> pw_templates;
        
}; // PseudowireConfig


class PseudowireConfig::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pw_grouping; //type: boolean
        YLeaf pw_oam_refresh_transmit; //type: uint32
        YLeaf pw_status; //type: boolean
        YLeaf predictive_redundancy; //type: boolean
        YLeaf vc_state_notification_enabled; //type: boolean
        YLeaf vc_state_notification_batch_size; //type: uint32
        YLeaf vc_state_notification_rate; //type: uint32

}; // PseudowireConfig::Global


class PseudowireConfig::PwTemplates : public Entity
{
    public:
        PwTemplates();
        ~PwTemplates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PwTemplate; //type: PseudowireConfig::PwTemplates::PwTemplate

        std::vector<std::shared_ptr<cisco_pw::PseudowireConfig::PwTemplates::PwTemplate> > pw_template;
        
}; // PseudowireConfig::PwTemplates


class PseudowireConfig::PwTemplates::PwTemplate : public Entity
{
    public:
        PwTemplate();
        ~PwTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf encapsulation; //type: PwEncapsulationTypeIdentity
        YLeaf control_word; //type: boolean
        YLeaf signaling_protocol; //type: PwSignalingProtocolTypeIdentity
        YLeaf vc_type; //type: PwVcTypeIdentity
        YLeaf switching_tlv; //type: boolean
        YLeaf source_ip; //type: string
        YLeaf tag_rewrite_ingress_vlan; //type: uint16
        YLeaf mac_withdraw; //type: boolean
        class LoadBalance; //type: PseudowireConfig::PwTemplates::PwTemplate::LoadBalance
        class PreferredPath; //type: PseudowireConfig::PwTemplates::PwTemplate::PreferredPath
        class Sequencing; //type: PseudowireConfig::PwTemplates::PwTemplate::Sequencing
        class Vccv; //type: PseudowireConfig::PwTemplates::PwTemplate::Vccv
        class SwitchoverDelay; //type: PseudowireConfig::PwTemplates::PwTemplate::SwitchoverDelay
        class Status; //type: PseudowireConfig::PwTemplates::PwTemplate::Status
        class PortProfileSpec; //type: PseudowireConfig::PwTemplates::PwTemplate::PortProfileSpec

        std::shared_ptr<cisco_pw::PseudowireConfig::PwTemplates::PwTemplate::LoadBalance> load_balance;
        std::shared_ptr<cisco_pw::PseudowireConfig::PwTemplates::PwTemplate::PortProfileSpec> port_profile_spec;
        std::shared_ptr<cisco_pw::PseudowireConfig::PwTemplates::PwTemplate::PreferredPath> preferred_path;
        std::shared_ptr<cisco_pw::PseudowireConfig::PwTemplates::PwTemplate::Sequencing> sequencing;
        std::shared_ptr<cisco_pw::PseudowireConfig::PwTemplates::PwTemplate::Status> status;
        std::shared_ptr<cisco_pw::PseudowireConfig::PwTemplates::PwTemplate::SwitchoverDelay> switchover_delay;
        std::shared_ptr<cisco_pw::PseudowireConfig::PwTemplates::PwTemplate::Vccv> vccv;
        
}; // PseudowireConfig::PwTemplates::PwTemplate


class PseudowireConfig::PwTemplates::PwTemplate::LoadBalance : public Entity
{
    public:
        LoadBalance();
        ~LoadBalance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ethernet; //type: PwLbEthernetTypeIdentity
        YLeaf ip; //type: PwLbIpTypeIdentity
        class FlowLabel; //type: PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel

        std::shared_ptr<cisco_pw::PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel> flow_label;
        
}; // PseudowireConfig::PwTemplates::PwTemplate::LoadBalance


class PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel : public Entity
{
    public:
        FlowLabel();
        ~FlowLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf direction; //type: DirectionEnum
        YLeaf tlv_code_17; //type: boolean
        YLeaf static_; //type: boolean
        class DirectionEnum;

}; // PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel


class PseudowireConfig::PwTemplates::PwTemplate::PreferredPath : public Entity
{
    public:
        PreferredPath();
        ~PreferredPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        YLeaf interface;
        YLeaf address; //type: string
        YLeaf hostname; //type: string
        YLeaf disable_fallback; //type: boolean

}; // PseudowireConfig::PwTemplates::PwTemplate::PreferredPath


class PseudowireConfig::PwTemplates::PwTemplate::Sequencing : public Entity
{
    public:
        Sequencing();
        ~Sequencing();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf direction; //type: PwSequencingTypeIdentity
        YLeaf resync; //type: int32

}; // PseudowireConfig::PwTemplates::PwTemplate::Sequencing


class PseudowireConfig::PwTemplates::PwTemplate::Vccv : public Entity
{
    public:
        Vccv();
        ~Vccv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf control_word; //type: boolean

}; // PseudowireConfig::PwTemplates::PwTemplate::Vccv


class PseudowireConfig::PwTemplates::PwTemplate::SwitchoverDelay : public Entity
{
    public:
        SwitchoverDelay();
        ~SwitchoverDelay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switchover_timer; //type: uint8
        YLeaf timer; //type: uint8
        YLeaf never; //type: boolean

}; // PseudowireConfig::PwTemplates::PwTemplate::SwitchoverDelay


class PseudowireConfig::PwTemplates::PwTemplate::Status : public Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf decoupled; //type: boolean
        YLeaf disable; //type: boolean
        YLeaf peer_topo_dual_homed; //type: boolean
        YLeaf route_watch_disable; //type: boolean
        YLeaf redundancy_master; //type: boolean

}; // PseudowireConfig::PwTemplates::PwTemplate::Status


class PseudowireConfig::PwTemplates::PwTemplate::PortProfileSpec : public Entity
{
    public:
        PortProfileSpec();
        ~PortProfileSpec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        YLeaf shutdown; //type: boolean
        YLeaf shut_force; //type: boolean
        YLeaf mtu; //type: uint32
        YLeaf max_ports; //type: uint16
        YLeaf enabled; //type: boolean

}; // PseudowireConfig::PwTemplates::PwTemplate::PortProfileSpec


class PseudowireConfig::PwStaticOamClasses : public Entity
{
    public:
        PwStaticOamClasses();
        ~PwStaticOamClasses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PwStaticOamClass; //type: PseudowireConfig::PwStaticOamClasses::PwStaticOamClass

        std::vector<std::shared_ptr<cisco_pw::PseudowireConfig::PwStaticOamClasses::PwStaticOamClass> > pw_static_oam_class;
        
}; // PseudowireConfig::PwStaticOamClasses


class PseudowireConfig::PwStaticOamClasses::PwStaticOamClass : public Entity
{
    public:
        PwStaticOamClass();
        ~PwStaticOamClass();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf ack; //type: boolean
        YLeaf keepalive; //type: uint32
        YLeaf timeout_refresh_send; //type: uint32
        YLeaf timeout_refresh_ack; //type: uint32

}; // PseudowireConfig::PwStaticOamClasses::PwStaticOamClass

class PseudowireState : public Entity
{
    public:
        PseudowireState();
        ~PseudowireState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Pseudowires; //type: PseudowireState::Pseudowires

        std::vector<std::shared_ptr<cisco_pw::PseudowireState::Pseudowires> > pseudowires;
        
}; // PseudowireState


class PseudowireState::Pseudowires : public Entity
{
    public:
        Pseudowires();
        ~Pseudowires();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vc_peer_address; //type: string
        YLeaf vc_id; //type: uint32
        YLeaf vc_owner_type; //type: VcOwnerTypeEnum
        YLeaf vc_name; //type: string
        YLeaf vc_index; //type: uint32
        YLeaf vc_type; //type: PwVcTypeIdentity
        YLeaf vc_owner_name; //type: string
        YLeaf vc_psn_type; //type: VcPsnTypeEnum
        YLeaf vc_local_group_id; //type: uint32
        YLeaf vc_control_word; //type: boolean
        YLeaf vc_local_if_mtu; //type: uint32
        YLeaf vc_remote_group_id; //type: uint32
        YLeaf vc_remote_control_word; //type: VcRemoteControlWordEnum
        YLeaf vc_remote_if_mtu; //type: uint32
        YLeaf vc_outbound_label; //type: uint32
        YLeaf vc_inbound_label; //type: uint32
        YLeaf vc_oper_status; //type: PwOperStateTypeEnum
        YLeaf vc_inbound_oper_status; //type: PwOperStateTypeEnum
        YLeaf vc_outbound_oper_status; //type: PwOperStateTypeEnum
        class Statistics; //type: PseudowireState::Pseudowires::Statistics

        std::shared_ptr<cisco_pw::PseudowireState::Pseudowires::Statistics> statistics;
                class VcOwnerTypeEnum;
        class VcPsnTypeEnum;
        class VcRemoteControlWordEnum;

}; // PseudowireState::Pseudowires


class PseudowireState::Pseudowires::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vc_create_time; //type: uint32
        YLeaf vc_up_time; //type: uint32
        YLeaf discontinuity_time; //type: string
        YLeaf in_octets; //type: uint64
        YLeaf in_pkts; //type: uint64
        YLeaf in_errors; //type: uint64
        YLeaf out_octets; //type: uint64
        YLeaf out_pkts; //type: uint64
        YLeaf out_errors; //type: uint64

}; // PseudowireState::Pseudowires::Statistics

class PwVcTypeEtherIdentity : public cisco_pw::PwVcTypeIdentity, virtual Identity
{
    public:
        PwVcTypeEtherIdentity();
        ~PwVcTypeEtherIdentity();


}; // PwVcTypeEtherIdentity

class PwSequencingTransmitIdentity : public cisco_pw::PwSequencingTypeIdentity, virtual Identity
{
    public:
        PwSequencingTransmitIdentity();
        ~PwSequencingTransmitIdentity();


}; // PwSequencingTransmitIdentity

class PwVcTypeVlanPassthroughIdentity : public cisco_pw::PwVcTypeIdentity, virtual Identity
{
    public:
        PwVcTypeVlanPassthroughIdentity();
        ~PwVcTypeVlanPassthroughIdentity();


}; // PwVcTypeVlanPassthroughIdentity

class PwEncapMplsIdentity : public cisco_pw::PwEncapsulationTypeIdentity, virtual Identity
{
    public:
        PwEncapMplsIdentity();
        ~PwEncapMplsIdentity();


}; // PwEncapMplsIdentity

class PwLbIpDstIpIdentity : public cisco_pw::PwLoadBalanceTypeIdentity, virtual Identity
{
    public:
        PwLbIpDstIpIdentity();
        ~PwLbIpDstIpIdentity();


}; // PwLbIpDstIpIdentity

class PwSequencingReceiveIdentity : public cisco_pw::PwSequencingTypeIdentity, virtual Identity
{
    public:
        PwSequencingReceiveIdentity();
        ~PwSequencingReceiveIdentity();


}; // PwSequencingReceiveIdentity

class PwLbEthernetTypeIdentity : public cisco_pw::PwLoadBalanceTypeIdentity, virtual Identity
{
    public:
        PwLbEthernetTypeIdentity();
        ~PwLbEthernetTypeIdentity();


}; // PwLbEthernetTypeIdentity

class PwSignalingProtocolLdpIdentity : public cisco_pw::PwSignalingProtocolTypeIdentity, virtual Identity
{
    public:
        PwSignalingProtocolLdpIdentity();
        ~PwSignalingProtocolLdpIdentity();


}; // PwSignalingProtocolLdpIdentity

class PwSequencingBothIdentity : public cisco_pw::PwSequencingTypeIdentity, virtual Identity
{
    public:
        PwSequencingBothIdentity();
        ~PwSequencingBothIdentity();


}; // PwSequencingBothIdentity

class PwVcTypeVlanIdentity : public cisco_pw::PwVcTypeIdentity, virtual Identity
{
    public:
        PwVcTypeVlanIdentity();
        ~PwVcTypeVlanIdentity();


}; // PwVcTypeVlanIdentity

class PwLbIpTypeIdentity : public cisco_pw::PwLoadBalanceTypeIdentity, virtual Identity
{
    public:
        PwLbIpTypeIdentity();
        ~PwLbIpTypeIdentity();


}; // PwLbIpTypeIdentity

class PwSignalingProtocolNoneIdentity : public cisco_pw::PwSignalingProtocolTypeIdentity, virtual Identity
{
    public:
        PwSignalingProtocolNoneIdentity();
        ~PwSignalingProtocolNoneIdentity();


}; // PwSignalingProtocolNoneIdentity

class PwSignalingProtocolBgpIdentity : public cisco_pw::PwSignalingProtocolTypeIdentity, virtual Identity
{
    public:
        PwSignalingProtocolBgpIdentity();
        ~PwSignalingProtocolBgpIdentity();


}; // PwSignalingProtocolBgpIdentity

class PwLbIpSrcIpIdentity : public cisco_pw::PwLbIpTypeIdentity, virtual Identity
{
    public:
        PwLbIpSrcIpIdentity();
        ~PwLbIpSrcIpIdentity();


}; // PwLbIpSrcIpIdentity

class PwLbEthSrcDstMacIdentity : public cisco_pw::PwLbEthernetTypeIdentity, virtual Identity
{
    public:
        PwLbEthSrcDstMacIdentity();
        ~PwLbEthSrcDstMacIdentity();


}; // PwLbEthSrcDstMacIdentity

class PwLbEthDstMacIdentity : public cisco_pw::PwLbEthernetTypeIdentity, virtual Identity
{
    public:
        PwLbEthDstMacIdentity();
        ~PwLbEthDstMacIdentity();


}; // PwLbEthDstMacIdentity

class PwLbIpSrcDstIpIdentity : public cisco_pw::PwLbIpTypeIdentity, virtual Identity
{
    public:
        PwLbIpSrcDstIpIdentity();
        ~PwLbIpSrcDstIpIdentity();


}; // PwLbIpSrcDstIpIdentity

class PwLbEthSrcMacIdentity : public cisco_pw::PwLbEthernetTypeIdentity, virtual Identity
{
    public:
        PwLbEthSrcMacIdentity();
        ~PwLbEthSrcMacIdentity();


}; // PwLbEthSrcMacIdentity

class PwOperStateTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;
        static const Enum::YLeaf cold_standby;
        static const Enum::YLeaf hot_standby;
        static const Enum::YLeaf recovering;
        static const Enum::YLeaf no_hardware;
        static const Enum::YLeaf unresolved;
        static const Enum::YLeaf provisioned;
        static const Enum::YLeaf remote_standby;
        static const Enum::YLeaf local_ready;
        static const Enum::YLeaf all_ready;

};

class PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf transmit;
        static const Enum::YLeaf receive;
        static const Enum::YLeaf both;

};

class PseudowireState::Pseudowires::VcOwnerTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf vpws;
        static const Enum::YLeaf vpls_vfi;
        static const Enum::YLeaf vpls_bridge_domain;
        static const Enum::YLeaf interface;

};

class PseudowireState::Pseudowires::VcPsnTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls;
        static const Enum::YLeaf l2tp;
        static const Enum::YLeaf ip;
        static const Enum::YLeaf mpls_over_ip;
        static const Enum::YLeaf gre;
        static const Enum::YLeaf other;

};

class PseudowireState::Pseudowires::VcRemoteControlWordEnum : public Enum
{
    public:
        static const Enum::YLeaf noControlWord;
        static const Enum::YLeaf withControlWord;
        static const Enum::YLeaf notYetKnown;

};


}
}

#endif /* _CISCO_PW_ */

