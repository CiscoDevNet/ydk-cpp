#ifndef _OPENCONFIG_PLATFORM_
#define _OPENCONFIG_PLATFORM_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace openconfig_platform {

class Components : public Entity
{
    public:
        Components();
        ~Components();

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

        class Component; //type: Components::Component

        std::vector<std::shared_ptr<openconfig_platform::Components::Component> > component;
        
}; // Components


class Components::Component : public Entity
{
    public:
        Component();
        ~Component();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to openconfig_platform::Components::Component::Config::name)
        YLeaf name;
        class Config; //type: Components::Component::Config
        class State; //type: Components::Component::State
        class Properties; //type: Components::Component::Properties
        class Subcomponents; //type: Components::Component::Subcomponents
        class Transceiver; //type: Components::Component::Transceiver
        class OpticalChannel; //type: Components::Component::OpticalChannel

        std::shared_ptr<openconfig_platform::Components::Component::Config> config;
        std::shared_ptr<openconfig_platform::Components::Component::OpticalChannel> optical_channel;
        std::shared_ptr<openconfig_platform::Components::Component::Properties> properties;
        std::shared_ptr<openconfig_platform::Components::Component::State> state;
        std::shared_ptr<openconfig_platform::Components::Component::Subcomponents> subcomponents;
        std::shared_ptr<openconfig_platform::Components::Component::Transceiver> transceiver;
        
}; // Components::Component


class Components::Component::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Components::Component::Config


class Components::Component::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf type; //type: identityref
        YLeaf id; //type: string
        YLeaf description; //type: string
        YLeaf mfg_name; //type: string
        YLeaf version; //type: string
        YLeaf serial_no; //type: string
        YLeaf part_no; //type: string

}; // Components::Component::State


class Components::Component::Properties : public Entity
{
    public:
        Properties();
        ~Properties();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Property; //type: Components::Component::Properties::Property

        std::vector<std::shared_ptr<openconfig_platform::Components::Component::Properties::Property> > property;
        
}; // Components::Component::Properties


class Components::Component::Properties::Property : public Entity
{
    public:
        Property();
        ~Property();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to openconfig_platform::Components::Component::Properties::Property::Config::name)
        YLeaf name;
        class Config; //type: Components::Component::Properties::Property::Config
        class State; //type: Components::Component::Properties::Property::State

        std::shared_ptr<openconfig_platform::Components::Component::Properties::Property::Config> config;
        std::shared_ptr<openconfig_platform::Components::Component::Properties::Property::State> state;
        
}; // Components::Component::Properties::Property


class Components::Component::Properties::Property::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf value_; //type: one of uint64, boolean, int64, string, decimal64

}; // Components::Component::Properties::Property::Config


class Components::Component::Properties::Property::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf value_; //type: one of uint64, boolean, int64, string, decimal64
        YLeaf configurable; //type: boolean

}; // Components::Component::Properties::Property::State


class Components::Component::Subcomponents : public Entity
{
    public:
        Subcomponents();
        ~Subcomponents();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Subcomponent; //type: Components::Component::Subcomponents::Subcomponent

        std::vector<std::shared_ptr<openconfig_platform::Components::Component::Subcomponents::Subcomponent> > subcomponent;
        
}; // Components::Component::Subcomponents


class Components::Component::Subcomponents::Subcomponent : public Entity
{
    public:
        Subcomponent();
        ~Subcomponent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: leafref (refers to openconfig_platform::Components::Component::Subcomponents::Subcomponent::Config::name)
        YLeaf name;
        class Config; //type: Components::Component::Subcomponents::Subcomponent::Config
        class State; //type: Components::Component::Subcomponents::Subcomponent::State

        std::shared_ptr<openconfig_platform::Components::Component::Subcomponents::Subcomponent::Config> config;
        std::shared_ptr<openconfig_platform::Components::Component::Subcomponents::Subcomponent::State> state;
        
}; // Components::Component::Subcomponents::Subcomponent


class Components::Component::Subcomponents::Subcomponent::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to openconfig_platform::Components::Component::Config::name)
        YLeaf name;

}; // Components::Component::Subcomponents::Subcomponent::Config


class Components::Component::Subcomponents::Subcomponent::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to openconfig_platform::Components::Component::Config::name)
        YLeaf name;

}; // Components::Component::Subcomponents::Subcomponent::State


class Components::Component::Transceiver : public Entity
{
    public:
        Transceiver();
        ~Transceiver();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Components::Component::Transceiver::Config
        class State; //type: Components::Component::Transceiver::State
        class PhysicalChannels; //type: Components::Component::Transceiver::PhysicalChannels

        std::shared_ptr<openconfig_platform::Components::Component::Transceiver::Config> config;
        std::shared_ptr<openconfig_platform::Components::Component::Transceiver::PhysicalChannels> physical_channels;
        std::shared_ptr<openconfig_platform::Components::Component::Transceiver::State> state;
        
}; // Components::Component::Transceiver


class Components::Component::Transceiver::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enabled; //type: boolean
        YLeaf form_factor; //type: Transceiver_Form_Factor_TypeIdentity

}; // Components::Component::Transceiver::Config


class Components::Component::Transceiver::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enabled; //type: boolean
        YLeaf form_factor; //type: Transceiver_Form_Factor_TypeIdentity
        YLeaf present; //type: PresentEnum
        YLeaf connector_type; //type: Fiber_Connector_TypeIdentity
        YLeaf internal_temp; //type: int16
        YLeaf vendor; //type: string
        YLeaf vendor_part; //type: string
        YLeaf vendor_rev; //type: string
        YLeaf ethernet_compliance_code; //type: Ethernet_Pmd_TypeIdentity
        YLeaf sonet_sdh_compliance_code; //type: Sonet_Application_CodeIdentity
        YLeaf otn_compliance_code; //type: Otn_Application_CodeIdentity
        YLeaf serial_no; //type: string
        YLeaf date_code; //type: string
        YLeaf fault_condition; //type: boolean
        class PresentEnum;

}; // Components::Component::Transceiver::State


class Components::Component::Transceiver::PhysicalChannels : public Entity
{
    public:
        PhysicalChannels();
        ~PhysicalChannels();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Channel; //type: Components::Component::Transceiver::PhysicalChannels::Channel

        std::vector<std::shared_ptr<openconfig_platform::Components::Component::Transceiver::PhysicalChannels::Channel> > channel;
        
}; // Components::Component::Transceiver::PhysicalChannels


class Components::Component::Transceiver::PhysicalChannels::Channel : public Entity
{
    public:
        Channel();
        ~Channel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint16 (refers to openconfig_platform::Components::Component::Transceiver::PhysicalChannels::Channel::Config::index_)
        YLeaf index_;
        class Config; //type: Components::Component::Transceiver::PhysicalChannels::Channel::Config
        class State; //type: Components::Component::Transceiver::PhysicalChannels::Channel::State

        std::shared_ptr<openconfig_platform::Components::Component::Transceiver::PhysicalChannels::Channel::Config> config;
        std::shared_ptr<openconfig_platform::Components::Component::Transceiver::PhysicalChannels::Channel::State> state;
        
}; // Components::Component::Transceiver::PhysicalChannels::Channel


class Components::Component::Transceiver::PhysicalChannels::Channel::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf index_; //type: uint16
        YLeaf description; //type: string
        YLeaf tx_laser; //type: boolean
        YLeaf target_output_power; //type: decimal64

}; // Components::Component::Transceiver::PhysicalChannels::Channel::Config


class Components::Component::Transceiver::PhysicalChannels::Channel::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf index_; //type: uint16
        YLeaf description; //type: string
        YLeaf tx_laser; //type: boolean
        YLeaf target_output_power; //type: decimal64
        YLeaf output_frequency; //type: uint64
        class OutputPower; //type: Components::Component::Transceiver::PhysicalChannels::Channel::State::OutputPower
        class InputPower; //type: Components::Component::Transceiver::PhysicalChannels::Channel::State::InputPower
        class LaserBiasCurrent; //type: Components::Component::Transceiver::PhysicalChannels::Channel::State::LaserBiasCurrent

        std::shared_ptr<openconfig_platform::Components::Component::Transceiver::PhysicalChannels::Channel::State::InputPower> input_power;
        std::shared_ptr<openconfig_platform::Components::Component::Transceiver::PhysicalChannels::Channel::State::LaserBiasCurrent> laser_bias_current;
        std::shared_ptr<openconfig_platform::Components::Component::Transceiver::PhysicalChannels::Channel::State::OutputPower> output_power;
        
}; // Components::Component::Transceiver::PhysicalChannels::Channel::State


class Components::Component::Transceiver::PhysicalChannels::Channel::State::OutputPower : public Entity
{
    public:
        OutputPower();
        ~OutputPower();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instant; //type: decimal64
        YLeaf avg; //type: decimal64
        YLeaf min; //type: decimal64
        YLeaf max; //type: decimal64

}; // Components::Component::Transceiver::PhysicalChannels::Channel::State::OutputPower


class Components::Component::Transceiver::PhysicalChannels::Channel::State::InputPower : public Entity
{
    public:
        InputPower();
        ~InputPower();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instant; //type: decimal64
        YLeaf avg; //type: decimal64
        YLeaf min; //type: decimal64
        YLeaf max; //type: decimal64

}; // Components::Component::Transceiver::PhysicalChannels::Channel::State::InputPower


class Components::Component::Transceiver::PhysicalChannels::Channel::State::LaserBiasCurrent : public Entity
{
    public:
        LaserBiasCurrent();
        ~LaserBiasCurrent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instant; //type: decimal64
        YLeaf avg; //type: decimal64
        YLeaf min; //type: decimal64
        YLeaf max; //type: decimal64

}; // Components::Component::Transceiver::PhysicalChannels::Channel::State::LaserBiasCurrent


class Components::Component::OpticalChannel : public Entity
{
    public:
        OpticalChannel();
        ~OpticalChannel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Components::Component::OpticalChannel::Config
        class State; //type: Components::Component::OpticalChannel::State

        std::shared_ptr<openconfig_platform::Components::Component::OpticalChannel::Config> config;
        std::shared_ptr<openconfig_platform::Components::Component::OpticalChannel::State> state;
        
}; // Components::Component::OpticalChannel


class Components::Component::OpticalChannel::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf frequency; //type: uint64
        YLeaf target_output_power; //type: decimal64
        YLeaf operational_mode; //type: uint16
        //type: leafref (refers to openconfig_platform::Components::Component::name)
        YLeaf line_port;

}; // Components::Component::OpticalChannel::Config


class Components::Component::OpticalChannel::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf frequency; //type: uint64
        YLeaf target_output_power; //type: decimal64
        YLeaf operational_mode; //type: uint16
        //type: leafref (refers to openconfig_platform::Components::Component::name)
        YLeaf line_port;
        YLeaf group_id; //type: uint32
        class OutputPower; //type: Components::Component::OpticalChannel::State::OutputPower
        class InputPower; //type: Components::Component::OpticalChannel::State::InputPower
        class LaserBiasCurrent; //type: Components::Component::OpticalChannel::State::LaserBiasCurrent
        class ChromaticDispersion; //type: Components::Component::OpticalChannel::State::ChromaticDispersion
        class PolarizationModeDispersion; //type: Components::Component::OpticalChannel::State::PolarizationModeDispersion
        class SecondOrderPolarizationModeDispersion; //type: Components::Component::OpticalChannel::State::SecondOrderPolarizationModeDispersion
        class PolarizationDependentLoss; //type: Components::Component::OpticalChannel::State::PolarizationDependentLoss

        std::shared_ptr<openconfig_platform::Components::Component::OpticalChannel::State::ChromaticDispersion> chromatic_dispersion;
        std::shared_ptr<openconfig_platform::Components::Component::OpticalChannel::State::InputPower> input_power;
        std::shared_ptr<openconfig_platform::Components::Component::OpticalChannel::State::LaserBiasCurrent> laser_bias_current;
        std::shared_ptr<openconfig_platform::Components::Component::OpticalChannel::State::OutputPower> output_power;
        std::shared_ptr<openconfig_platform::Components::Component::OpticalChannel::State::PolarizationDependentLoss> polarization_dependent_loss;
        std::shared_ptr<openconfig_platform::Components::Component::OpticalChannel::State::PolarizationModeDispersion> polarization_mode_dispersion;
        std::shared_ptr<openconfig_platform::Components::Component::OpticalChannel::State::SecondOrderPolarizationModeDispersion> second_order_polarization_mode_dispersion;
        
}; // Components::Component::OpticalChannel::State


class Components::Component::OpticalChannel::State::OutputPower : public Entity
{
    public:
        OutputPower();
        ~OutputPower();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instant; //type: decimal64
        YLeaf avg; //type: decimal64
        YLeaf min; //type: decimal64
        YLeaf max; //type: decimal64

}; // Components::Component::OpticalChannel::State::OutputPower


class Components::Component::OpticalChannel::State::InputPower : public Entity
{
    public:
        InputPower();
        ~InputPower();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instant; //type: decimal64
        YLeaf avg; //type: decimal64
        YLeaf min; //type: decimal64
        YLeaf max; //type: decimal64

}; // Components::Component::OpticalChannel::State::InputPower


class Components::Component::OpticalChannel::State::LaserBiasCurrent : public Entity
{
    public:
        LaserBiasCurrent();
        ~LaserBiasCurrent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instant; //type: decimal64
        YLeaf avg; //type: decimal64
        YLeaf min; //type: decimal64
        YLeaf max; //type: decimal64

}; // Components::Component::OpticalChannel::State::LaserBiasCurrent


class Components::Component::OpticalChannel::State::ChromaticDispersion : public Entity
{
    public:
        ChromaticDispersion();
        ~ChromaticDispersion();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instant; //type: decimal64
        YLeaf avg; //type: decimal64
        YLeaf min; //type: decimal64
        YLeaf max; //type: decimal64

}; // Components::Component::OpticalChannel::State::ChromaticDispersion


class Components::Component::OpticalChannel::State::PolarizationModeDispersion : public Entity
{
    public:
        PolarizationModeDispersion();
        ~PolarizationModeDispersion();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instant; //type: decimal64
        YLeaf avg; //type: decimal64
        YLeaf min; //type: decimal64
        YLeaf max; //type: decimal64

}; // Components::Component::OpticalChannel::State::PolarizationModeDispersion


class Components::Component::OpticalChannel::State::SecondOrderPolarizationModeDispersion : public Entity
{
    public:
        SecondOrderPolarizationModeDispersion();
        ~SecondOrderPolarizationModeDispersion();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instant; //type: decimal64
        YLeaf avg; //type: decimal64
        YLeaf min; //type: decimal64
        YLeaf max; //type: decimal64

}; // Components::Component::OpticalChannel::State::SecondOrderPolarizationModeDispersion


class Components::Component::OpticalChannel::State::PolarizationDependentLoss : public Entity
{
    public:
        PolarizationDependentLoss();
        ~PolarizationDependentLoss();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instant; //type: decimal64
        YLeaf avg; //type: decimal64
        YLeaf min; //type: decimal64
        YLeaf max; //type: decimal64

}; // Components::Component::OpticalChannel::State::PolarizationDependentLoss

class Components::Component::Transceiver::State::PresentEnum : public Enum
{
    public:
        static const Enum::YLeaf PRESENT;
        static const Enum::YLeaf NOT_PRESENT;

};


}
}

#endif /* _OPENCONFIG_PLATFORM_ */

