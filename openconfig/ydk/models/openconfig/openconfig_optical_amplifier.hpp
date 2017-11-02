#ifndef _OPENCONFIG_OPTICAL_AMPLIFIER_
#define _OPENCONFIG_OPTICAL_AMPLIFIER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace openconfig_optical_amplifier {

class OPTICALAMPLIFIERTYPE : public virtual ydk::Identity
{
    public:
        OPTICALAMPLIFIERTYPE();
        ~OPTICALAMPLIFIERTYPE();


}; // OPTICALAMPLIFIERTYPE

class GAINRANGE : public virtual ydk::Identity
{
    public:
        GAINRANGE();
        ~GAINRANGE();


}; // GAINRANGE

class OPTICALAMPLIFIERMODE : public virtual ydk::Identity
{
    public:
        OPTICALAMPLIFIERMODE();
        ~OPTICALAMPLIFIERMODE();


}; // OPTICALAMPLIFIERMODE

class OpticalAmplifier : public ydk::Entity
{
    public:
        OpticalAmplifier();
        ~OpticalAmplifier();

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

        class Amplifiers; //type: OpticalAmplifier::Amplifiers
        class SupervisoryChannels; //type: OpticalAmplifier::SupervisoryChannels

        std::shared_ptr<openconfig::openconfig_optical_amplifier::OpticalAmplifier::Amplifiers> amplifiers;
        std::shared_ptr<openconfig::openconfig_optical_amplifier::OpticalAmplifier::SupervisoryChannels> supervisory_channels;
        
}; // OpticalAmplifier


class OpticalAmplifier::Amplifiers : public ydk::Entity
{
    public:
        Amplifiers();
        ~Amplifiers();

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

        class Amplifier; //type: OpticalAmplifier::Amplifiers::Amplifier

        std::vector<std::shared_ptr<openconfig::openconfig_optical_amplifier::OpticalAmplifier::Amplifiers::Amplifier> > amplifier;
        
}; // OpticalAmplifier::Amplifiers


class OpticalAmplifier::Amplifiers::Amplifier : public ydk::Entity
{
    public:
        Amplifier();
        ~Amplifier();

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

        //type: string (refers to openconfig::openconfig_optical_amplifier::OpticalAmplifier::Amplifiers::Amplifier::Config::name)
        ydk::YLeaf name;
        class Config; //type: OpticalAmplifier::Amplifiers::Amplifier::Config
        class State; //type: OpticalAmplifier::Amplifiers::Amplifier::State

        std::shared_ptr<openconfig::openconfig_optical_amplifier::OpticalAmplifier::Amplifiers::Amplifier::Config> config;
        std::shared_ptr<openconfig::openconfig_optical_amplifier::OpticalAmplifier::Amplifiers::Amplifier::State> state;
        
}; // OpticalAmplifier::Amplifiers::Amplifier


class OpticalAmplifier::Amplifiers::Amplifier::Config : public ydk::Entity
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
        ydk::YLeaf type; //type: OPTICALAMPLIFIERTYPE
        ydk::YLeaf target_gain; //type: decimal64
        ydk::YLeaf target_gain_tilt; //type: decimal64
        ydk::YLeaf gain_range; //type: GAINRANGE
        ydk::YLeaf amp_mode; //type: OPTICALAMPLIFIERMODE
        ydk::YLeaf target_output_power; //type: decimal64
        ydk::YLeaf enabled; //type: boolean

}; // OpticalAmplifier::Amplifiers::Amplifier::Config


class OpticalAmplifier::Amplifiers::Amplifier::State : public ydk::Entity
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
        ydk::YLeaf type; //type: OPTICALAMPLIFIERTYPE
        ydk::YLeaf target_gain; //type: decimal64
        ydk::YLeaf target_gain_tilt; //type: decimal64
        ydk::YLeaf gain_range; //type: GAINRANGE
        ydk::YLeaf amp_mode; //type: OPTICALAMPLIFIERMODE
        ydk::YLeaf target_output_power; //type: decimal64
        ydk::YLeaf enabled; //type: boolean
        //type: leafref (refers to openconfig::openconfig_platform::Components::Component::name)
        ydk::YLeaf ingress_port;
        //type: leafref (refers to openconfig::openconfig_platform::Components::Component::name)
        ydk::YLeaf egress_port;
        class ActualGain; //type: OpticalAmplifier::Amplifiers::Amplifier::State::ActualGain
        class ActualGainTilt; //type: OpticalAmplifier::Amplifiers::Amplifier::State::ActualGainTilt
        class InputPowerTotal; //type: OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerTotal
        class InputPowerCBand; //type: OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerCBand
        class InputPowerLBand; //type: OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerLBand
        class OutputPowerTotal; //type: OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerTotal
        class OutputPowerCBand; //type: OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerCBand
        class OutputPowerLBand; //type: OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerLBand
        class LaserBiasCurrent; //type: OpticalAmplifier::Amplifiers::Amplifier::State::LaserBiasCurrent
        class OpticalReturnLoss; //type: OpticalAmplifier::Amplifiers::Amplifier::State::OpticalReturnLoss

        std::shared_ptr<openconfig::openconfig_optical_amplifier::OpticalAmplifier::Amplifiers::Amplifier::State::ActualGain> actual_gain;
        std::shared_ptr<openconfig::openconfig_optical_amplifier::OpticalAmplifier::Amplifiers::Amplifier::State::ActualGainTilt> actual_gain_tilt;
        std::shared_ptr<openconfig::openconfig_optical_amplifier::OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerTotal> input_power_total;
        std::shared_ptr<openconfig::openconfig_optical_amplifier::OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerCBand> input_power_c_band;
        std::shared_ptr<openconfig::openconfig_optical_amplifier::OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerLBand> input_power_l_band;
        std::shared_ptr<openconfig::openconfig_optical_amplifier::OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerTotal> output_power_total;
        std::shared_ptr<openconfig::openconfig_optical_amplifier::OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerCBand> output_power_c_band;
        std::shared_ptr<openconfig::openconfig_optical_amplifier::OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerLBand> output_power_l_band;
        std::shared_ptr<openconfig::openconfig_optical_amplifier::OpticalAmplifier::Amplifiers::Amplifier::State::LaserBiasCurrent> laser_bias_current;
        std::shared_ptr<openconfig::openconfig_optical_amplifier::OpticalAmplifier::Amplifiers::Amplifier::State::OpticalReturnLoss> optical_return_loss;
        
}; // OpticalAmplifier::Amplifiers::Amplifier::State


class OpticalAmplifier::Amplifiers::Amplifier::State::ActualGain : public ydk::Entity
{
    public:
        ActualGain();
        ~ActualGain();

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

}; // OpticalAmplifier::Amplifiers::Amplifier::State::ActualGain


class OpticalAmplifier::Amplifiers::Amplifier::State::ActualGainTilt : public ydk::Entity
{
    public:
        ActualGainTilt();
        ~ActualGainTilt();

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

}; // OpticalAmplifier::Amplifiers::Amplifier::State::ActualGainTilt


class OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerTotal : public ydk::Entity
{
    public:
        InputPowerTotal();
        ~InputPowerTotal();

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

}; // OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerTotal


class OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerCBand : public ydk::Entity
{
    public:
        InputPowerCBand();
        ~InputPowerCBand();

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

}; // OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerCBand


class OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerLBand : public ydk::Entity
{
    public:
        InputPowerLBand();
        ~InputPowerLBand();

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

}; // OpticalAmplifier::Amplifiers::Amplifier::State::InputPowerLBand


class OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerTotal : public ydk::Entity
{
    public:
        OutputPowerTotal();
        ~OutputPowerTotal();

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

}; // OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerTotal


class OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerCBand : public ydk::Entity
{
    public:
        OutputPowerCBand();
        ~OutputPowerCBand();

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

}; // OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerCBand


class OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerLBand : public ydk::Entity
{
    public:
        OutputPowerLBand();
        ~OutputPowerLBand();

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

}; // OpticalAmplifier::Amplifiers::Amplifier::State::OutputPowerLBand


class OpticalAmplifier::Amplifiers::Amplifier::State::LaserBiasCurrent : public ydk::Entity
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

}; // OpticalAmplifier::Amplifiers::Amplifier::State::LaserBiasCurrent


class OpticalAmplifier::Amplifiers::Amplifier::State::OpticalReturnLoss : public ydk::Entity
{
    public:
        OpticalReturnLoss();
        ~OpticalReturnLoss();

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

}; // OpticalAmplifier::Amplifiers::Amplifier::State::OpticalReturnLoss


class OpticalAmplifier::SupervisoryChannels : public ydk::Entity
{
    public:
        SupervisoryChannels();
        ~SupervisoryChannels();

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

        class SupervisoryChannel; //type: OpticalAmplifier::SupervisoryChannels::SupervisoryChannel

        std::vector<std::shared_ptr<openconfig::openconfig_optical_amplifier::OpticalAmplifier::SupervisoryChannels::SupervisoryChannel> > supervisory_channel;
        
}; // OpticalAmplifier::SupervisoryChannels


class OpticalAmplifier::SupervisoryChannels::SupervisoryChannel : public ydk::Entity
{
    public:
        SupervisoryChannel();
        ~SupervisoryChannel();

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

        //type: leafref (refers to openconfig::openconfig_optical_amplifier::OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::Config::interface)
        ydk::YLeaf interface;
        class Config; //type: OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::Config
        class State; //type: OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State

        std::shared_ptr<openconfig::openconfig_optical_amplifier::OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::Config> config;
        std::shared_ptr<openconfig::openconfig_optical_amplifier::OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State> state;
        
}; // OpticalAmplifier::SupervisoryChannels::SupervisoryChannel


class OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::Config : public ydk::Entity
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

        //type: list of  leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeafList interface;

}; // OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::Config


class OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State : public ydk::Entity
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

        //type: list of  leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeafList interface;
        class InputPower; //type: OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::InputPower
        class OutputPower; //type: OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::OutputPower
        class LaserBiasCurrent; //type: OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::LaserBiasCurrent

        std::shared_ptr<openconfig::openconfig_optical_amplifier::OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::InputPower> input_power;
        std::shared_ptr<openconfig::openconfig_optical_amplifier::OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::OutputPower> output_power;
        std::shared_ptr<openconfig::openconfig_optical_amplifier::OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::LaserBiasCurrent> laser_bias_current;
        
}; // OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State


class OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::InputPower : public ydk::Entity
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

}; // OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::InputPower


class OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::OutputPower : public ydk::Entity
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

}; // OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::OutputPower


class OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::LaserBiasCurrent : public ydk::Entity
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

}; // OpticalAmplifier::SupervisoryChannels::SupervisoryChannel::State::LaserBiasCurrent

class EDFA : public openconfig::openconfig_optical_amplifier::OPTICALAMPLIFIERTYPE, virtual ydk::Identity
{
    public:
        EDFA();
        ~EDFA();


}; // EDFA

class FORWARDRAMAN : public openconfig::openconfig_optical_amplifier::OPTICALAMPLIFIERTYPE, virtual ydk::Identity
{
    public:
        FORWARDRAMAN();
        ~FORWARDRAMAN();


}; // FORWARDRAMAN

class BACKWARDRAMAN : public openconfig::openconfig_optical_amplifier::OPTICALAMPLIFIERTYPE, virtual ydk::Identity
{
    public:
        BACKWARDRAMAN();
        ~BACKWARDRAMAN();


}; // BACKWARDRAMAN

class HYBRID : public openconfig::openconfig_optical_amplifier::OPTICALAMPLIFIERTYPE, virtual ydk::Identity
{
    public:
        HYBRID();
        ~HYBRID();


}; // HYBRID

class LOWGAINRANGE : public openconfig::openconfig_optical_amplifier::GAINRANGE, virtual ydk::Identity
{
    public:
        LOWGAINRANGE();
        ~LOWGAINRANGE();


}; // LOWGAINRANGE

class MIDGAINRANGE : public openconfig::openconfig_optical_amplifier::GAINRANGE, virtual ydk::Identity
{
    public:
        MIDGAINRANGE();
        ~MIDGAINRANGE();


}; // MIDGAINRANGE

class HIGHGAINRANGE : public openconfig::openconfig_optical_amplifier::GAINRANGE, virtual ydk::Identity
{
    public:
        HIGHGAINRANGE();
        ~HIGHGAINRANGE();


}; // HIGHGAINRANGE

class FIXEDGAINRANGE : public openconfig::openconfig_optical_amplifier::GAINRANGE, virtual ydk::Identity
{
    public:
        FIXEDGAINRANGE();
        ~FIXEDGAINRANGE();


}; // FIXEDGAINRANGE

class CONSTANTPOWER : public openconfig::openconfig_optical_amplifier::OPTICALAMPLIFIERMODE, virtual ydk::Identity
{
    public:
        CONSTANTPOWER();
        ~CONSTANTPOWER();


}; // CONSTANTPOWER

class CONSTANTGAIN : public openconfig::openconfig_optical_amplifier::OPTICALAMPLIFIERMODE, virtual ydk::Identity
{
    public:
        CONSTANTGAIN();
        ~CONSTANTGAIN();


}; // CONSTANTGAIN


}
}

#endif /* _OPENCONFIG_OPTICAL_AMPLIFIER_ */

