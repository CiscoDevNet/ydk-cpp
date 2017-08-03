#ifndef _OPENCONFIG_TERMINAL_DEVICE_
#define _OPENCONFIG_TERMINAL_DEVICE_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace openconfig {
namespace openconfig_terminal_device {

class TerminalDevice : public ydk::Entity
{
    public:
        TerminalDevice();
        ~TerminalDevice();

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

        class Config; //type: TerminalDevice::Config
        class State; //type: TerminalDevice::State
        class LogicalChannels; //type: TerminalDevice::LogicalChannels
        class OperationalModes; //type: TerminalDevice::OperationalModes

        std::shared_ptr<openconfig_terminal_device::TerminalDevice::Config> config;
        std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels> logical_channels;
        std::shared_ptr<openconfig_terminal_device::TerminalDevice::OperationalModes> operational_modes;
        std::shared_ptr<openconfig_terminal_device::TerminalDevice::State> state;
        
}; // TerminalDevice


class TerminalDevice::Config : public ydk::Entity
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


}; // TerminalDevice::Config


class TerminalDevice::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // TerminalDevice::State


class TerminalDevice::LogicalChannels : public ydk::Entity
{
    public:
        LogicalChannels();
        ~LogicalChannels();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Channel; //type: TerminalDevice::LogicalChannels::Channel

        std::vector<std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel> > channel;
        
}; // TerminalDevice::LogicalChannels


class TerminalDevice::LogicalChannels::Channel : public ydk::Entity
{
    public:
        Channel();
        ~Channel();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::Config::index_)
        ydk::YLeaf index_;
        class Config; //type: TerminalDevice::LogicalChannels::Channel::Config
        class State; //type: TerminalDevice::LogicalChannels::Channel::State
        class Otn; //type: TerminalDevice::LogicalChannels::Channel::Otn
        class Ethernet; //type: TerminalDevice::LogicalChannels::Channel::Ethernet
        class Ingress; //type: TerminalDevice::LogicalChannels::Channel::Ingress
        class LogicalChannelAssignments; //type: TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments

        std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::Config> config;
        std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::Ethernet> ethernet;
        std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::Ingress> ingress;
        std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments> logical_channel_assignments;
        std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::Otn> otn;
        std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::State> state;
        
}; // TerminalDevice::LogicalChannels::Channel


class TerminalDevice::LogicalChannels::Channel::Config : public ydk::Entity
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

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf description; //type: string
        ydk::YLeaf admin_state; //type: AdminStateType
        ydk::YLeaf rate_class; //type: Tributary_Rate_Class_Type
        ydk::YLeaf trib_protocol; //type: Tributary_Protocol_Type
        ydk::YLeaf logical_channel_type; //type: Logical_Element_Protocol_Type
        ydk::YLeaf loopback_mode; //type: LoopbackModeType

}; // TerminalDevice::LogicalChannels::Channel::Config


class TerminalDevice::LogicalChannels::Channel::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf description; //type: string
        ydk::YLeaf admin_state; //type: AdminStateType
        ydk::YLeaf rate_class; //type: Tributary_Rate_Class_Type
        ydk::YLeaf trib_protocol; //type: Tributary_Protocol_Type
        ydk::YLeaf logical_channel_type; //type: Logical_Element_Protocol_Type
        ydk::YLeaf loopback_mode; //type: LoopbackModeType
        ydk::YLeaf link_state; //type: LinkState
        class LinkState;

}; // TerminalDevice::LogicalChannels::Channel::State


class TerminalDevice::LogicalChannels::Channel::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: TerminalDevice::LogicalChannels::Channel::Otn::Config
        class State; //type: TerminalDevice::LogicalChannels::Channel::Otn::State

        std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::Otn::Config> config;
        std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::Otn::State> state;
        
}; // TerminalDevice::LogicalChannels::Channel::Otn


class TerminalDevice::LogicalChannels::Channel::Otn::Config : public ydk::Entity
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

        ydk::YLeaf tti_msg_transmit; //type: string
        ydk::YLeaf tti_msg_expected; //type: string
        ydk::YLeaf tti_msg_auto; //type: boolean

}; // TerminalDevice::LogicalChannels::Channel::Otn::Config


class TerminalDevice::LogicalChannels::Channel::Otn::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tti_msg_transmit; //type: string
        ydk::YLeaf tti_msg_expected; //type: string
        ydk::YLeaf tti_msg_auto; //type: boolean
        ydk::YLeaf tti_msg_recv; //type: string
        ydk::YLeaf rdi_msg; //type: string
        ydk::YLeaf errored_seconds; //type: uint64
        ydk::YLeaf severely_errored_seconds; //type: uint64
        ydk::YLeaf unavailable_seconds; //type: uint64
        ydk::YLeaf code_violations; //type: uint64
        ydk::YLeaf fec_uncorrectable_words; //type: uint64
        ydk::YLeaf fec_corrected_bytes; //type: uint64
        ydk::YLeaf fec_corrected_bits; //type: uint64
        ydk::YLeaf background_block_errors; //type: uint64
        class PreFecBer; //type: TerminalDevice::LogicalChannels::Channel::Otn::State::PreFecBer
        class PostFecBer; //type: TerminalDevice::LogicalChannels::Channel::Otn::State::PostFecBer
        class QValue; //type: TerminalDevice::LogicalChannels::Channel::Otn::State::QValue
        class Esnr; //type: TerminalDevice::LogicalChannels::Channel::Otn::State::Esnr

        std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::Otn::State::Esnr> esnr;
        std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::Otn::State::PostFecBer> post_fec_ber;
        std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::Otn::State::PreFecBer> pre_fec_ber;
        std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::Otn::State::QValue> q_value;
        
}; // TerminalDevice::LogicalChannels::Channel::Otn::State


class TerminalDevice::LogicalChannels::Channel::Otn::State::PreFecBer : public ydk::Entity
{
    public:
        PreFecBer();
        ~PreFecBer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instant; //type: decimal64
        ydk::YLeaf avg; //type: decimal64
        ydk::YLeaf min; //type: decimal64
        ydk::YLeaf max; //type: decimal64

}; // TerminalDevice::LogicalChannels::Channel::Otn::State::PreFecBer


class TerminalDevice::LogicalChannels::Channel::Otn::State::PostFecBer : public ydk::Entity
{
    public:
        PostFecBer();
        ~PostFecBer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instant; //type: decimal64
        ydk::YLeaf avg; //type: decimal64
        ydk::YLeaf min; //type: decimal64
        ydk::YLeaf max; //type: decimal64

}; // TerminalDevice::LogicalChannels::Channel::Otn::State::PostFecBer


class TerminalDevice::LogicalChannels::Channel::Otn::State::QValue : public ydk::Entity
{
    public:
        QValue();
        ~QValue();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instant; //type: decimal64
        ydk::YLeaf avg; //type: decimal64
        ydk::YLeaf min; //type: decimal64
        ydk::YLeaf max; //type: decimal64

}; // TerminalDevice::LogicalChannels::Channel::Otn::State::QValue


class TerminalDevice::LogicalChannels::Channel::Otn::State::Esnr : public ydk::Entity
{
    public:
        Esnr();
        ~Esnr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instant; //type: decimal64
        ydk::YLeaf avg; //type: decimal64
        ydk::YLeaf min; //type: decimal64
        ydk::YLeaf max; //type: decimal64

}; // TerminalDevice::LogicalChannels::Channel::Otn::State::Esnr


class TerminalDevice::LogicalChannels::Channel::Ethernet : public ydk::Entity
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

        class Config; //type: TerminalDevice::LogicalChannels::Channel::Ethernet::Config
        class State; //type: TerminalDevice::LogicalChannels::Channel::Ethernet::State

        std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::Ethernet::Config> config;
        std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::Ethernet::State> state;
        
}; // TerminalDevice::LogicalChannels::Channel::Ethernet


class TerminalDevice::LogicalChannels::Channel::Ethernet::Config : public ydk::Entity
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


}; // TerminalDevice::LogicalChannels::Channel::Ethernet::Config


class TerminalDevice::LogicalChannels::Channel::Ethernet::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_mac_control_frames; //type: uint64
        ydk::YLeaf in_mac_pause_frames; //type: uint64
        ydk::YLeaf in_oversize_frames; //type: uint64
        ydk::YLeaf in_jabber_frames; //type: uint64
        ydk::YLeaf in_fragment_frames; //type: uint64
        ydk::YLeaf in_8021q_frames; //type: uint64
        ydk::YLeaf in_crc_errors; //type: uint64
        ydk::YLeaf out_mac_control_frames; //type: uint64
        ydk::YLeaf out_mac_pause_frames; //type: uint64
        ydk::YLeaf out_8021q_frames; //type: uint64

}; // TerminalDevice::LogicalChannels::Channel::Ethernet::State


class TerminalDevice::LogicalChannels::Channel::Ingress : public ydk::Entity
{
    public:
        Ingress();
        ~Ingress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: TerminalDevice::LogicalChannels::Channel::Ingress::Config
        class State; //type: TerminalDevice::LogicalChannels::Channel::Ingress::State

        std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::Ingress::Config> config;
        std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::Ingress::State> state;
        
}; // TerminalDevice::LogicalChannels::Channel::Ingress


class TerminalDevice::LogicalChannels::Channel::Ingress::Config : public ydk::Entity
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

        //type: leafref (refers to openconfig_platform::Components::Component::name)
        ydk::YLeaf transceiver;
        //type: list of  leafref (refers to openconfig_platform::Components::Component::Transceiver::PhysicalChannels::Channel::index_)
        ydk::YLeafList physical_channel;

}; // TerminalDevice::LogicalChannels::Channel::Ingress::Config


class TerminalDevice::LogicalChannels::Channel::Ingress::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig_platform::Components::Component::name)
        ydk::YLeaf transceiver;
        //type: list of  leafref (refers to openconfig_platform::Components::Component::Transceiver::PhysicalChannels::Channel::index_)
        ydk::YLeafList physical_channel;

}; // TerminalDevice::LogicalChannels::Channel::Ingress::State


class TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments : public ydk::Entity
{
    public:
        LogicalChannelAssignments();
        ~LogicalChannelAssignments();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Assignment; //type: TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment

        std::vector<std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment> > assignment;
        
}; // TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments


class TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment : public ydk::Entity
{
    public:
        Assignment();
        ~Assignment();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config::index_)
        ydk::YLeaf index_;
        class Config; //type: TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config
        class State; //type: TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State

        std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config> config;
        std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State> state;
        
}; // TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment


class TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config : public ydk::Entity
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

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf description; //type: string
        ydk::YLeaf assignment_type; //type: AssignmentType
        //type: leafref (refers to openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::index_)
        ydk::YLeaf logical_channel;
        //type: leafref (refers to openconfig_platform::Components::Component::name)
        ydk::YLeaf optical_channel;
        ydk::YLeaf allocation; //type: decimal64
        class AssignmentType;

}; // TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config


class TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf description; //type: string
        ydk::YLeaf assignment_type; //type: AssignmentType
        //type: leafref (refers to openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::index_)
        ydk::YLeaf logical_channel;
        //type: leafref (refers to openconfig_platform::Components::Component::name)
        ydk::YLeaf optical_channel;
        ydk::YLeaf allocation; //type: decimal64
        class AssignmentType;

}; // TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State


class TerminalDevice::OperationalModes : public ydk::Entity
{
    public:
        OperationalModes();
        ~OperationalModes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mode; //type: TerminalDevice::OperationalModes::Mode

        std::vector<std::shared_ptr<openconfig_terminal_device::TerminalDevice::OperationalModes::Mode> > mode;
        
}; // TerminalDevice::OperationalModes


class TerminalDevice::OperationalModes::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint16 (refers to openconfig_terminal_device::TerminalDevice::OperationalModes::Mode::State::mode_id)
        ydk::YLeaf mode_id;
        class Config; //type: TerminalDevice::OperationalModes::Mode::Config
        class State; //type: TerminalDevice::OperationalModes::Mode::State

        std::shared_ptr<openconfig_terminal_device::TerminalDevice::OperationalModes::Mode::Config> config;
        std::shared_ptr<openconfig_terminal_device::TerminalDevice::OperationalModes::Mode::State> state;
        
}; // TerminalDevice::OperationalModes::Mode


class TerminalDevice::OperationalModes::Mode::Config : public ydk::Entity
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


}; // TerminalDevice::OperationalModes::Mode::Config


class TerminalDevice::OperationalModes::Mode::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mode_id; //type: uint16
        ydk::YLeaf description; //type: string
        ydk::YLeaf vendor_id; //type: string

}; // TerminalDevice::OperationalModes::Mode::State

class TerminalDevice::LogicalChannels::Channel::State::LinkState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf UP;
        static const ydk::Enum::YLeaf DOWN;

};

class TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config::AssignmentType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf LOGICAL_CHANNEL;
        static const ydk::Enum::YLeaf OPTICAL_CHANNEL;

};

class TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State::AssignmentType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf LOGICAL_CHANNEL;
        static const ydk::Enum::YLeaf OPTICAL_CHANNEL;

};


}
}

#endif /* _OPENCONFIG_TERMINAL_DEVICE_ */

