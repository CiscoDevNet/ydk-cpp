#ifndef _OPENCONFIG_TERMINAL_DEVICE_
#define _OPENCONFIG_TERMINAL_DEVICE_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace openconfig_terminal_device {

class TerminalDevice : public Entity
{
    public:
        TerminalDevice();
        ~TerminalDevice();

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



        class Config; //type: TerminalDevice::Config
        class State; //type: TerminalDevice::State
        class LogicalChannels; //type: TerminalDevice::LogicalChannels
        class OperationalModes; //type: TerminalDevice::OperationalModes

        std::shared_ptr<openconfig_terminal_device::TerminalDevice::Config> config;
        std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels> logical_channels;
        std::shared_ptr<openconfig_terminal_device::TerminalDevice::OperationalModes> operational_modes;
        std::shared_ptr<openconfig_terminal_device::TerminalDevice::State> state;


}; // TerminalDevice


class TerminalDevice::Config : public Entity
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





}; // TerminalDevice::Config


class TerminalDevice::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // TerminalDevice::State


class TerminalDevice::LogicalChannels : public Entity
{
    public:
        LogicalChannels();
        ~LogicalChannels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Channel; //type: TerminalDevice::LogicalChannels::Channel

        std::vector<std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel> > channel;


}; // TerminalDevice::LogicalChannels


class TerminalDevice::LogicalChannels::Channel : public Entity
{
    public:
        Channel();
        ~Channel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        //type: uint32 (refers to openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::Config::index_)
        YLeaf index_;

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


class TerminalDevice::LogicalChannels::Channel::Config : public Entity
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


        YLeaf index_; //type: uint32
        YLeaf description; //type: string
        YLeaf admin_state; //type: AdminStateTypeEnum
        YLeaf rate_class; //type: Tributary_Rate_Class_TypeIdentity
        YLeaf trib_protocol; //type: Tributary_Protocol_TypeIdentity
        YLeaf logical_channel_type; //type: Logical_Element_Protocol_TypeIdentity
        YLeaf loopback_mode; //type: LoopbackModeTypeEnum



}; // TerminalDevice::LogicalChannels::Channel::Config


class TerminalDevice::LogicalChannels::Channel::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: uint32
        YLeaf description; //type: string
        YLeaf admin_state; //type: AdminStateTypeEnum
        YLeaf rate_class; //type: Tributary_Rate_Class_TypeIdentity
        YLeaf trib_protocol; //type: Tributary_Protocol_TypeIdentity
        YLeaf logical_channel_type; //type: Logical_Element_Protocol_TypeIdentity
        YLeaf loopback_mode; //type: LoopbackModeTypeEnum
        YLeaf link_state; //type: LinkStateEnum

        class LinkStateEnum;


}; // TerminalDevice::LogicalChannels::Channel::State


class TerminalDevice::LogicalChannels::Channel::Otn : public Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: TerminalDevice::LogicalChannels::Channel::Otn::Config
        class State; //type: TerminalDevice::LogicalChannels::Channel::Otn::State

        std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::Otn::Config> config;
        std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::Otn::State> state;


}; // TerminalDevice::LogicalChannels::Channel::Otn


class TerminalDevice::LogicalChannels::Channel::Otn::Config : public Entity
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


        YLeaf tti_msg_transmit; //type: string
        YLeaf tti_msg_expected; //type: string
        YLeaf tti_msg_auto; //type: boolean



}; // TerminalDevice::LogicalChannels::Channel::Otn::Config


class TerminalDevice::LogicalChannels::Channel::Otn::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tti_msg_transmit; //type: string
        YLeaf tti_msg_expected; //type: string
        YLeaf tti_msg_auto; //type: boolean
        YLeaf tti_msg_recv; //type: string
        YLeaf rdi_msg; //type: string
        YLeaf errored_seconds; //type: uint64
        YLeaf severely_errored_seconds; //type: uint64
        YLeaf unavailable_seconds; //type: uint64
        YLeaf code_violations; //type: uint64
        YLeaf fec_uncorrectable_words; //type: uint64
        YLeaf fec_corrected_bytes; //type: uint64
        YLeaf fec_corrected_bits; //type: uint64
        YLeaf background_block_errors; //type: uint64

        class PreFecBer; //type: TerminalDevice::LogicalChannels::Channel::Otn::State::PreFecBer
        class PostFecBer; //type: TerminalDevice::LogicalChannels::Channel::Otn::State::PostFecBer
        class QValue; //type: TerminalDevice::LogicalChannels::Channel::Otn::State::QValue
        class Esnr; //type: TerminalDevice::LogicalChannels::Channel::Otn::State::Esnr

        std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::Otn::State::Esnr> esnr;
        std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::Otn::State::PostFecBer> post_fec_ber;
        std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::Otn::State::PreFecBer> pre_fec_ber;
        std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::Otn::State::QValue> q_value;


}; // TerminalDevice::LogicalChannels::Channel::Otn::State


class TerminalDevice::LogicalChannels::Channel::Otn::State::PreFecBer : public Entity
{
    public:
        PreFecBer();
        ~PreFecBer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf instant; //type: decimal64
        YLeaf avg; //type: decimal64
        YLeaf min; //type: decimal64
        YLeaf max; //type: decimal64



}; // TerminalDevice::LogicalChannels::Channel::Otn::State::PreFecBer


class TerminalDevice::LogicalChannels::Channel::Otn::State::PostFecBer : public Entity
{
    public:
        PostFecBer();
        ~PostFecBer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf instant; //type: decimal64
        YLeaf avg; //type: decimal64
        YLeaf min; //type: decimal64
        YLeaf max; //type: decimal64



}; // TerminalDevice::LogicalChannels::Channel::Otn::State::PostFecBer


class TerminalDevice::LogicalChannels::Channel::Otn::State::QValue : public Entity
{
    public:
        QValue();
        ~QValue();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf instant; //type: decimal64
        YLeaf avg; //type: decimal64
        YLeaf min; //type: decimal64
        YLeaf max; //type: decimal64



}; // TerminalDevice::LogicalChannels::Channel::Otn::State::QValue


class TerminalDevice::LogicalChannels::Channel::Otn::State::Esnr : public Entity
{
    public:
        Esnr();
        ~Esnr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf instant; //type: decimal64
        YLeaf avg; //type: decimal64
        YLeaf min; //type: decimal64
        YLeaf max; //type: decimal64



}; // TerminalDevice::LogicalChannels::Channel::Otn::State::Esnr


class TerminalDevice::LogicalChannels::Channel::Ethernet : public Entity
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



        class Config; //type: TerminalDevice::LogicalChannels::Channel::Ethernet::Config
        class State; //type: TerminalDevice::LogicalChannels::Channel::Ethernet::State

        std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::Ethernet::Config> config;
        std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::Ethernet::State> state;


}; // TerminalDevice::LogicalChannels::Channel::Ethernet


class TerminalDevice::LogicalChannels::Channel::Ethernet::Config : public Entity
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





}; // TerminalDevice::LogicalChannels::Channel::Ethernet::Config


class TerminalDevice::LogicalChannels::Channel::Ethernet::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_mac_control_frames; //type: uint64
        YLeaf in_mac_pause_frames; //type: uint64
        YLeaf in_oversize_frames; //type: uint64
        YLeaf in_jabber_frames; //type: uint64
        YLeaf in_fragment_frames; //type: uint64
        YLeaf in_8021q_frames; //type: uint64
        YLeaf in_crc_errors; //type: uint64
        YLeaf out_mac_control_frames; //type: uint64
        YLeaf out_mac_pause_frames; //type: uint64
        YLeaf out_8021q_frames; //type: uint64



}; // TerminalDevice::LogicalChannels::Channel::Ethernet::State


class TerminalDevice::LogicalChannels::Channel::Ingress : public Entity
{
    public:
        Ingress();
        ~Ingress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: TerminalDevice::LogicalChannels::Channel::Ingress::Config
        class State; //type: TerminalDevice::LogicalChannels::Channel::Ingress::State

        std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::Ingress::Config> config;
        std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::Ingress::State> state;


}; // TerminalDevice::LogicalChannels::Channel::Ingress


class TerminalDevice::LogicalChannels::Channel::Ingress::Config : public Entity
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


        //type: leafref (refers to openconfig_platform::Components::Component::name)
        YLeaf transceiver;
        //type: list of  leafref (refers to openconfig_platform::Components::Component::Transceiver::PhysicalChannels::Channel::index_)
        YLeafList physical_channel;



}; // TerminalDevice::LogicalChannels::Channel::Ingress::Config


class TerminalDevice::LogicalChannels::Channel::Ingress::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        //type: leafref (refers to openconfig_platform::Components::Component::name)
        YLeaf transceiver;
        //type: list of  leafref (refers to openconfig_platform::Components::Component::Transceiver::PhysicalChannels::Channel::index_)
        YLeafList physical_channel;



}; // TerminalDevice::LogicalChannels::Channel::Ingress::State


class TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments : public Entity
{
    public:
        LogicalChannelAssignments();
        ~LogicalChannelAssignments();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Assignment; //type: TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment

        std::vector<std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment> > assignment;


}; // TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments


class TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment : public Entity
{
    public:
        Assignment();
        ~Assignment();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        //type: uint32 (refers to openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config::index_)
        YLeaf index_;

        class Config; //type: TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config
        class State; //type: TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State

        std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config> config;
        std::shared_ptr<openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State> state;


}; // TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment


class TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config : public Entity
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


        YLeaf index_; //type: uint32
        YLeaf description; //type: string
        YLeaf assignment_type; //type: AssignmentTypeEnum
        //type: leafref (refers to openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::index_)
        YLeaf logical_channel;
        //type: leafref (refers to openconfig_platform::Components::Component::name)
        YLeaf optical_channel;
        YLeaf allocation; //type: decimal64

        class AssignmentTypeEnum;


}; // TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config


class TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: uint32
        YLeaf description; //type: string
        YLeaf assignment_type; //type: AssignmentTypeEnum
        //type: leafref (refers to openconfig_terminal_device::TerminalDevice::LogicalChannels::Channel::index_)
        YLeaf logical_channel;
        //type: leafref (refers to openconfig_platform::Components::Component::name)
        YLeaf optical_channel;
        YLeaf allocation; //type: decimal64

        class AssignmentTypeEnum;


}; // TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State


class TerminalDevice::OperationalModes : public Entity
{
    public:
        OperationalModes();
        ~OperationalModes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Mode; //type: TerminalDevice::OperationalModes::Mode

        std::vector<std::shared_ptr<openconfig_terminal_device::TerminalDevice::OperationalModes::Mode> > mode;


}; // TerminalDevice::OperationalModes


class TerminalDevice::OperationalModes::Mode : public Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        //type: uint16 (refers to openconfig_terminal_device::TerminalDevice::OperationalModes::Mode::State::mode_id)
        YLeaf mode_id;

        class Config; //type: TerminalDevice::OperationalModes::Mode::Config
        class State; //type: TerminalDevice::OperationalModes::Mode::State

        std::shared_ptr<openconfig_terminal_device::TerminalDevice::OperationalModes::Mode::Config> config;
        std::shared_ptr<openconfig_terminal_device::TerminalDevice::OperationalModes::Mode::State> state;


}; // TerminalDevice::OperationalModes::Mode


class TerminalDevice::OperationalModes::Mode::Config : public Entity
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





}; // TerminalDevice::OperationalModes::Mode::Config


class TerminalDevice::OperationalModes::Mode::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mode_id; //type: uint16
        YLeaf description; //type: string
        YLeaf vendor_id; //type: string



}; // TerminalDevice::OperationalModes::Mode::State

class TerminalDevice::LogicalChannels::Channel::State::LinkStateEnum : public Enum
{
    public:
        static const Enum::YLeaf UP;
        static const Enum::YLeaf DOWN;

};

class TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config::AssignmentTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf LOGICAL_CHANNEL;
        static const Enum::YLeaf OPTICAL_CHANNEL;

};

class TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State::AssignmentTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf LOGICAL_CHANNEL;
        static const Enum::YLeaf OPTICAL_CHANNEL;

};


}
}

#endif /* _OPENCONFIG_TERMINAL_DEVICE_ */

