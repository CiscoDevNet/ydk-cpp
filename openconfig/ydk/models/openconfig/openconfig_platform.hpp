#ifndef _OPENCONFIG_PLATFORM_
#define _OPENCONFIG_PLATFORM_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace openconfig {
namespace openconfig_platform {

class Components : public ydk::Entity
{
    public:
        Components();
        ~Components();

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

        class Component; //type: Components::Component

        std::vector<std::shared_ptr<openconfig::openconfig_platform::Components::Component> > component;
        
}; // Components


class Components::Component : public ydk::Entity
{
    public:
        Component();
        ~Component();

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

        //type: string (refers to openconfig::openconfig_platform::Components::Component::Config::name)
        ydk::YLeaf name;
        class Config; //type: Components::Component::Config
        class State; //type: Components::Component::State
        class Properties; //type: Components::Component::Properties
        class Subcomponents; //type: Components::Component::Subcomponents
        class Transceiver; //type: Components::Component::Transceiver
        class OpticalChannel; //type: Components::Component::OpticalChannel
        class OpticalPort; //type: Components::Component::OpticalPort

        std::shared_ptr<openconfig::openconfig_platform::Components::Component::Config> config;
        std::shared_ptr<openconfig::openconfig_platform::Components::Component::OpticalChannel> optical_channel;
        std::shared_ptr<openconfig::openconfig_platform::Components::Component::OpticalPort> optical_port;
        std::shared_ptr<openconfig::openconfig_platform::Components::Component::Properties> properties;
        std::shared_ptr<openconfig::openconfig_platform::Components::Component::State> state;
        std::shared_ptr<openconfig::openconfig_platform::Components::Component::Subcomponents> subcomponents;
        std::shared_ptr<openconfig::openconfig_platform::Components::Component::Transceiver> transceiver;
        
}; // Components::Component


class Components::Component::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // Components::Component::Config


class Components::Component::OpticalChannel : public ydk::Entity
{
    public:
        OpticalChannel();
        ~OpticalChannel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Components::Component::OpticalChannel::Config
        class State; //type: Components::Component::OpticalChannel::State

        std::shared_ptr<openconfig::openconfig_platform::Components::Component::OpticalChannel::Config> config;
        std::shared_ptr<openconfig::openconfig_platform::Components::Component::OpticalChannel::State> state;
        
}; // Components::Component::OpticalChannel


class Components::Component::OpticalChannel::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frequency; //type: uint64
        ydk::YLeaf target_output_power; //type: decimal64
        ydk::YLeaf operational_mode; //type: uint16
        //type: leafref (refers to openconfig::openconfig_platform::Components::Component::name)
        ydk::YLeaf line_port;

}; // Components::Component::OpticalChannel::Config


class Components::Component::OpticalChannel::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frequency; //type: uint64
        ydk::YLeaf target_output_power; //type: decimal64
        ydk::YLeaf operational_mode; //type: uint16
        //type: leafref (refers to openconfig::openconfig_platform::Components::Component::name)
        ydk::YLeaf line_port;
        ydk::YLeaf group_id; //type: uint32
        class OutputPower; //type: Components::Component::OpticalChannel::State::OutputPower
        class InputPower; //type: Components::Component::OpticalChannel::State::InputPower
        class LaserBiasCurrent; //type: Components::Component::OpticalChannel::State::LaserBiasCurrent
        class ChromaticDispersion; //type: Components::Component::OpticalChannel::State::ChromaticDispersion
        class PolarizationModeDispersion; //type: Components::Component::OpticalChannel::State::PolarizationModeDispersion
        class SecondOrderPolarizationModeDispersion; //type: Components::Component::OpticalChannel::State::SecondOrderPolarizationModeDispersion
        class PolarizationDependentLoss; //type: Components::Component::OpticalChannel::State::PolarizationDependentLoss

        std::shared_ptr<openconfig::openconfig_platform::Components::Component::OpticalChannel::State::ChromaticDispersion> chromatic_dispersion;
        std::shared_ptr<openconfig::openconfig_platform::Components::Component::OpticalChannel::State::InputPower> input_power;
        std::shared_ptr<openconfig::openconfig_platform::Components::Component::OpticalChannel::State::LaserBiasCurrent> laser_bias_current;
        std::shared_ptr<openconfig::openconfig_platform::Components::Component::OpticalChannel::State::OutputPower> output_power;
        std::shared_ptr<openconfig::openconfig_platform::Components::Component::OpticalChannel::State::PolarizationDependentLoss> polarization_dependent_loss;
        std::shared_ptr<openconfig::openconfig_platform::Components::Component::OpticalChannel::State::PolarizationModeDispersion> polarization_mode_dispersion;
        std::shared_ptr<openconfig::openconfig_platform::Components::Component::OpticalChannel::State::SecondOrderPolarizationModeDispersion> second_order_polarization_mode_dispersion;
        
}; // Components::Component::OpticalChannel::State


class Components::Component::OpticalChannel::State::ChromaticDispersion : public ydk::Entity
{
    public:
        ChromaticDispersion();
        ~ChromaticDispersion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // Components::Component::OpticalChannel::State::ChromaticDispersion


class Components::Component::OpticalChannel::State::InputPower : public ydk::Entity
{
    public:
        InputPower();
        ~InputPower();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // Components::Component::OpticalChannel::State::InputPower


class Components::Component::OpticalChannel::State::LaserBiasCurrent : public ydk::Entity
{
    public:
        LaserBiasCurrent();
        ~LaserBiasCurrent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // Components::Component::OpticalChannel::State::LaserBiasCurrent


class Components::Component::OpticalChannel::State::OutputPower : public ydk::Entity
{
    public:
        OutputPower();
        ~OutputPower();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // Components::Component::OpticalChannel::State::OutputPower


class Components::Component::OpticalChannel::State::PolarizationDependentLoss : public ydk::Entity
{
    public:
        PolarizationDependentLoss();
        ~PolarizationDependentLoss();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // Components::Component::OpticalChannel::State::PolarizationDependentLoss


class Components::Component::OpticalChannel::State::PolarizationModeDispersion : public ydk::Entity
{
    public:
        PolarizationModeDispersion();
        ~PolarizationModeDispersion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // Components::Component::OpticalChannel::State::PolarizationModeDispersion


class Components::Component::OpticalChannel::State::SecondOrderPolarizationModeDispersion : public ydk::Entity
{
    public:
        SecondOrderPolarizationModeDispersion();
        ~SecondOrderPolarizationModeDispersion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // Components::Component::OpticalChannel::State::SecondOrderPolarizationModeDispersion


class Components::Component::OpticalPort : public ydk::Entity
{
    public:
        OpticalPort();
        ~OpticalPort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Components::Component::OpticalPort::Config
        class State; //type: Components::Component::OpticalPort::State

        std::shared_ptr<openconfig::openconfig_platform::Components::Component::OpticalPort::Config> config;
        std::shared_ptr<openconfig::openconfig_platform::Components::Component::OpticalPort::State> state;
        
}; // Components::Component::OpticalPort


class Components::Component::OpticalPort::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf admin_state; //type: AdminStateType

}; // Components::Component::OpticalPort::Config


class Components::Component::OpticalPort::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf admin_state; //type: AdminStateType
        ydk::YLeaf optical_port_type; //type: OPTICALLINEPORTTYPE
        class InputPower; //type: Components::Component::OpticalPort::State::InputPower
        class OutputPower; //type: Components::Component::OpticalPort::State::OutputPower

        std::shared_ptr<openconfig::openconfig_platform::Components::Component::OpticalPort::State::InputPower> input_power;
        std::shared_ptr<openconfig::openconfig_platform::Components::Component::OpticalPort::State::OutputPower> output_power;
        
}; // Components::Component::OpticalPort::State


class Components::Component::OpticalPort::State::InputPower : public ydk::Entity
{
    public:
        InputPower();
        ~InputPower();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // Components::Component::OpticalPort::State::InputPower


class Components::Component::OpticalPort::State::OutputPower : public ydk::Entity
{
    public:
        OutputPower();
        ~OutputPower();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // Components::Component::OpticalPort::State::OutputPower


class Components::Component::Properties : public ydk::Entity
{
    public:
        Properties();
        ~Properties();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Property; //type: Components::Component::Properties::Property

        std::vector<std::shared_ptr<openconfig::openconfig_platform::Components::Component::Properties::Property> > property;
        
}; // Components::Component::Properties


class Components::Component::Properties::Property : public ydk::Entity
{
    public:
        Property();
        ~Property();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig::openconfig_platform::Components::Component::Properties::Property::Config::name)
        ydk::YLeaf name;
        class Config; //type: Components::Component::Properties::Property::Config
        class State; //type: Components::Component::Properties::Property::State

        std::shared_ptr<openconfig::openconfig_platform::Components::Component::Properties::Property::Config> config;
        std::shared_ptr<openconfig::openconfig_platform::Components::Component::Properties::Property::State> state;
        
}; // Components::Component::Properties::Property


class Components::Component::Properties::Property::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf value_; //type: one of uint64, boolean, decimal64, int64, string

}; // Components::Component::Properties::Property::Config


class Components::Component::Properties::Property::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf value_; //type: one of uint64, boolean, decimal64, int64, string
        ydk::YLeaf configurable; //type: boolean

}; // Components::Component::Properties::Property::State


class Components::Component::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf type; //type: identityref
        ydk::YLeaf id; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf mfg_name; //type: string
        ydk::YLeaf version; //type: string
        ydk::YLeaf serial_no; //type: string
        ydk::YLeaf part_no; //type: string

}; // Components::Component::State


class Components::Component::Subcomponents : public ydk::Entity
{
    public:
        Subcomponents();
        ~Subcomponents();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Subcomponent; //type: Components::Component::Subcomponents::Subcomponent

        std::vector<std::shared_ptr<openconfig::openconfig_platform::Components::Component::Subcomponents::Subcomponent> > subcomponent;
        
}; // Components::Component::Subcomponents


class Components::Component::Subcomponents::Subcomponent : public ydk::Entity
{
    public:
        Subcomponent();
        ~Subcomponent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig::openconfig_platform::Components::Component::Subcomponents::Subcomponent::Config::name)
        ydk::YLeaf name;
        class Config; //type: Components::Component::Subcomponents::Subcomponent::Config
        class State; //type: Components::Component::Subcomponents::Subcomponent::State

        std::shared_ptr<openconfig::openconfig_platform::Components::Component::Subcomponents::Subcomponent::Config> config;
        std::shared_ptr<openconfig::openconfig_platform::Components::Component::Subcomponents::Subcomponent::State> state;
        
}; // Components::Component::Subcomponents::Subcomponent


class Components::Component::Subcomponents::Subcomponent::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig::openconfig_platform::Components::Component::Config::name)
        ydk::YLeaf name;

}; // Components::Component::Subcomponents::Subcomponent::Config


class Components::Component::Subcomponents::Subcomponent::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig::openconfig_platform::Components::Component::Config::name)
        ydk::YLeaf name;

}; // Components::Component::Subcomponents::Subcomponent::State


class Components::Component::Transceiver : public ydk::Entity
{
    public:
        Transceiver();
        ~Transceiver();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Components::Component::Transceiver::Config
        class State; //type: Components::Component::Transceiver::State
        class PhysicalChannels; //type: Components::Component::Transceiver::PhysicalChannels

        std::shared_ptr<openconfig::openconfig_platform::Components::Component::Transceiver::Config> config;
        std::shared_ptr<openconfig::openconfig_platform::Components::Component::Transceiver::PhysicalChannels> physical_channels;
        std::shared_ptr<openconfig::openconfig_platform::Components::Component::Transceiver::State> state;
        
}; // Components::Component::Transceiver


class Components::Component::Transceiver::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf form_factor; //type: TRANSCEIVERFORMFACTORTYPE

}; // Components::Component::Transceiver::Config


class Components::Component::Transceiver::PhysicalChannels : public ydk::Entity
{
    public:
        PhysicalChannels();
        ~PhysicalChannels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Channel; //type: Components::Component::Transceiver::PhysicalChannels::Channel

        std::vector<std::shared_ptr<openconfig::openconfig_platform::Components::Component::Transceiver::PhysicalChannels::Channel> > channel;
        
}; // Components::Component::Transceiver::PhysicalChannels


class Components::Component::Transceiver::PhysicalChannels::Channel : public ydk::Entity
{
    public:
        Channel();
        ~Channel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint16 (refers to openconfig::openconfig_platform::Components::Component::Transceiver::PhysicalChannels::Channel::Config::index_)
        ydk::YLeaf index_;
        class Config; //type: Components::Component::Transceiver::PhysicalChannels::Channel::Config
        class State; //type: Components::Component::Transceiver::PhysicalChannels::Channel::State

        std::shared_ptr<openconfig::openconfig_platform::Components::Component::Transceiver::PhysicalChannels::Channel::Config> config;
        std::shared_ptr<openconfig::openconfig_platform::Components::Component::Transceiver::PhysicalChannels::Channel::State> state;
        
}; // Components::Component::Transceiver::PhysicalChannels::Channel


class Components::Component::Transceiver::PhysicalChannels::Channel::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint16
        ydk::YLeaf description; //type: string
        ydk::YLeaf tx_laser; //type: boolean
        ydk::YLeaf target_output_power; //type: decimal64

}; // Components::Component::Transceiver::PhysicalChannels::Channel::Config


class Components::Component::Transceiver::PhysicalChannels::Channel::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint16
        ydk::YLeaf description; //type: string
        ydk::YLeaf tx_laser; //type: boolean
        ydk::YLeaf target_output_power; //type: decimal64
        ydk::YLeaf output_frequency; //type: uint64
        class OutputPower; //type: Components::Component::Transceiver::PhysicalChannels::Channel::State::OutputPower
        class InputPower; //type: Components::Component::Transceiver::PhysicalChannels::Channel::State::InputPower
        class LaserBiasCurrent; //type: Components::Component::Transceiver::PhysicalChannels::Channel::State::LaserBiasCurrent

        std::shared_ptr<openconfig::openconfig_platform::Components::Component::Transceiver::PhysicalChannels::Channel::State::InputPower> input_power;
        std::shared_ptr<openconfig::openconfig_platform::Components::Component::Transceiver::PhysicalChannels::Channel::State::LaserBiasCurrent> laser_bias_current;
        std::shared_ptr<openconfig::openconfig_platform::Components::Component::Transceiver::PhysicalChannels::Channel::State::OutputPower> output_power;
        
}; // Components::Component::Transceiver::PhysicalChannels::Channel::State


class Components::Component::Transceiver::PhysicalChannels::Channel::State::InputPower : public ydk::Entity
{
    public:
        InputPower();
        ~InputPower();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // Components::Component::Transceiver::PhysicalChannels::Channel::State::InputPower


class Components::Component::Transceiver::PhysicalChannels::Channel::State::LaserBiasCurrent : public ydk::Entity
{
    public:
        LaserBiasCurrent();
        ~LaserBiasCurrent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // Components::Component::Transceiver::PhysicalChannels::Channel::State::LaserBiasCurrent


class Components::Component::Transceiver::PhysicalChannels::Channel::State::OutputPower : public ydk::Entity
{
    public:
        OutputPower();
        ~OutputPower();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // Components::Component::Transceiver::PhysicalChannels::Channel::State::OutputPower


class Components::Component::Transceiver::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf form_factor; //type: TRANSCEIVERFORMFACTORTYPE
        ydk::YLeaf present; //type: Present
        ydk::YLeaf connector_type; //type: FIBERCONNECTORTYPE
        ydk::YLeaf internal_temp; //type: int16
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf vendor_part; //type: string
        ydk::YLeaf vendor_rev; //type: string
        ydk::YLeaf ethernet_compliance_code; //type: ETHERNETPMDTYPE
        ydk::YLeaf sonet_sdh_compliance_code; //type: SONETAPPLICATIONCODE
        ydk::YLeaf otn_compliance_code; //type: OTNAPPLICATIONCODE
        ydk::YLeaf serial_no; //type: string
        ydk::YLeaf date_code; //type: string
        ydk::YLeaf fault_condition; //type: boolean
        class Present;

}; // Components::Component::Transceiver::State

class Components::Component::Transceiver::State::Present : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf PRESENT;
        static const ydk::Enum::YLeaf NOT_PRESENT;

};


}
}

#endif /* _OPENCONFIG_PLATFORM_ */

