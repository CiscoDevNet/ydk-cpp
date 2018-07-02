#ifndef _OPENCONFIG_TRANSPORT_LINE_PROTECTION_
#define _OPENCONFIG_TRANSPORT_LINE_PROTECTION_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace openconfig_transport_line_protection {

class APSPATHS : public virtual ydk::Identity
{
    public:
        APSPATHS();
        ~APSPATHS();


}; // APSPATHS

class Aps : public ydk::Entity
{
    public:
        Aps();
        ~Aps();

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

        class ApsModules; //type: Aps::ApsModules

        std::shared_ptr<openconfig::openconfig_transport_line_protection::Aps::ApsModules> aps_modules;
        
}; // Aps


class Aps::ApsModules : public ydk::Entity
{
    public:
        ApsModules();
        ~ApsModules();

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

        class ApsModule; //type: Aps::ApsModules::ApsModule

        ydk::YList aps_module;
        
}; // Aps::ApsModules


class Aps::ApsModules::ApsModule : public ydk::Entity
{
    public:
        ApsModule();
        ~ApsModule();

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

        //type: leafref (refers to openconfig::openconfig_transport_line_protection::Aps::ApsModules::ApsModule::Config::name)
        ydk::YLeaf name;
        class Config; //type: Aps::ApsModules::ApsModule::Config
        class State; //type: Aps::ApsModules::ApsModule::State
        class Ports; //type: Aps::ApsModules::ApsModule::Ports

        std::shared_ptr<openconfig::openconfig_transport_line_protection::Aps::ApsModules::ApsModule::Config> config;
        std::shared_ptr<openconfig::openconfig_transport_line_protection::Aps::ApsModules::ApsModule::State> state;
        std::shared_ptr<openconfig::openconfig_transport_line_protection::Aps::ApsModules::ApsModule::Ports> ports;
        
}; // Aps::ApsModules::ApsModule


class Aps::ApsModules::ApsModule::Config : public ydk::Entity
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

        //type: leafref (refers to openconfig::openconfig_platform::Components::Component::name)
        ydk::YLeaf name;
        ydk::YLeaf revertive; //type: boolean
        ydk::YLeaf primary_switch_threshold; //type: decimal64
        ydk::YLeaf primary_switch_hysteresis; //type: decimal64
        ydk::YLeaf secondary_switch_threshold; //type: decimal64
        ydk::YLeaf secondary_switch_hysteresis; //type: decimal64

}; // Aps::ApsModules::ApsModule::Config


class Aps::ApsModules::ApsModule::State : public ydk::Entity
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

        //type: leafref (refers to openconfig::openconfig_platform::Components::Component::name)
        ydk::YLeaf name;
        ydk::YLeaf revertive; //type: boolean
        ydk::YLeaf primary_switch_threshold; //type: decimal64
        ydk::YLeaf primary_switch_hysteresis; //type: decimal64
        ydk::YLeaf secondary_switch_threshold; //type: decimal64
        ydk::YLeaf secondary_switch_hysteresis; //type: decimal64
        ydk::YLeaf active_path; //type: APSPATHS

}; // Aps::ApsModules::ApsModule::State


class Aps::ApsModules::ApsModule::Ports : public ydk::Entity
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

        class LinePrimaryIn; //type: Aps::ApsModules::ApsModule::Ports::LinePrimaryIn
        class LinePrimaryOut; //type: Aps::ApsModules::ApsModule::Ports::LinePrimaryOut
        class LineSecondaryIn; //type: Aps::ApsModules::ApsModule::Ports::LineSecondaryIn
        class LineSecondaryOut; //type: Aps::ApsModules::ApsModule::Ports::LineSecondaryOut
        class CommonIn; //type: Aps::ApsModules::ApsModule::Ports::CommonIn
        class CommonOutput; //type: Aps::ApsModules::ApsModule::Ports::CommonOutput

        std::shared_ptr<openconfig::openconfig_transport_line_protection::Aps::ApsModules::ApsModule::Ports::LinePrimaryIn> line_primary_in;
        std::shared_ptr<openconfig::openconfig_transport_line_protection::Aps::ApsModules::ApsModule::Ports::LinePrimaryOut> line_primary_out;
        std::shared_ptr<openconfig::openconfig_transport_line_protection::Aps::ApsModules::ApsModule::Ports::LineSecondaryIn> line_secondary_in;
        std::shared_ptr<openconfig::openconfig_transport_line_protection::Aps::ApsModules::ApsModule::Ports::LineSecondaryOut> line_secondary_out;
        std::shared_ptr<openconfig::openconfig_transport_line_protection::Aps::ApsModules::ApsModule::Ports::CommonIn> common_in;
        std::shared_ptr<openconfig::openconfig_transport_line_protection::Aps::ApsModules::ApsModule::Ports::CommonOutput> common_output;
        
}; // Aps::ApsModules::ApsModule::Ports


class Aps::ApsModules::ApsModule::Ports::LinePrimaryIn : public ydk::Entity
{
    public:
        LinePrimaryIn();
        ~LinePrimaryIn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::Config
        class State; //type: Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::State

        std::shared_ptr<openconfig::openconfig_transport_line_protection::Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::Config> config;
        std::shared_ptr<openconfig::openconfig_transport_line_protection::Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::State> state;
        
}; // Aps::ApsModules::ApsModule::Ports::LinePrimaryIn


class Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::Config : public ydk::Entity
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
        ydk::YLeaf target_attenuation; //type: decimal64

}; // Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::Config


class Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::State : public ydk::Entity
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
        ydk::YLeaf target_attenuation; //type: decimal64
        ydk::YLeaf attenuation; //type: decimal64
        class OpticalPower; //type: Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::State::OpticalPower

        std::shared_ptr<openconfig::openconfig_transport_line_protection::Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::State::OpticalPower> optical_power;
        
}; // Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::State


class Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::State::OpticalPower : public ydk::Entity
{
    public:
        OpticalPower();
        ~OpticalPower();

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

}; // Aps::ApsModules::ApsModule::Ports::LinePrimaryIn::State::OpticalPower


class Aps::ApsModules::ApsModule::Ports::LinePrimaryOut : public ydk::Entity
{
    public:
        LinePrimaryOut();
        ~LinePrimaryOut();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::Config
        class State; //type: Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::State

        std::shared_ptr<openconfig::openconfig_transport_line_protection::Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::Config> config;
        std::shared_ptr<openconfig::openconfig_transport_line_protection::Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::State> state;
        
}; // Aps::ApsModules::ApsModule::Ports::LinePrimaryOut


class Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::Config : public ydk::Entity
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

        ydk::YLeaf target_attenuation; //type: decimal64

}; // Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::Config


class Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::State : public ydk::Entity
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

        ydk::YLeaf target_attenuation; //type: decimal64
        ydk::YLeaf attenuation; //type: decimal64
        class OpticalPower; //type: Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::State::OpticalPower

        std::shared_ptr<openconfig::openconfig_transport_line_protection::Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::State::OpticalPower> optical_power;
        
}; // Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::State


class Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::State::OpticalPower : public ydk::Entity
{
    public:
        OpticalPower();
        ~OpticalPower();

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

}; // Aps::ApsModules::ApsModule::Ports::LinePrimaryOut::State::OpticalPower


class Aps::ApsModules::ApsModule::Ports::LineSecondaryIn : public ydk::Entity
{
    public:
        LineSecondaryIn();
        ~LineSecondaryIn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::Config
        class State; //type: Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::State

        std::shared_ptr<openconfig::openconfig_transport_line_protection::Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::Config> config;
        std::shared_ptr<openconfig::openconfig_transport_line_protection::Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::State> state;
        
}; // Aps::ApsModules::ApsModule::Ports::LineSecondaryIn


class Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::Config : public ydk::Entity
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
        ydk::YLeaf target_attenuation; //type: decimal64

}; // Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::Config


class Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::State : public ydk::Entity
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
        ydk::YLeaf target_attenuation; //type: decimal64
        ydk::YLeaf attenuation; //type: decimal64
        class OpticalPower; //type: Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::State::OpticalPower

        std::shared_ptr<openconfig::openconfig_transport_line_protection::Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::State::OpticalPower> optical_power;
        
}; // Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::State


class Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::State::OpticalPower : public ydk::Entity
{
    public:
        OpticalPower();
        ~OpticalPower();

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

}; // Aps::ApsModules::ApsModule::Ports::LineSecondaryIn::State::OpticalPower


class Aps::ApsModules::ApsModule::Ports::LineSecondaryOut : public ydk::Entity
{
    public:
        LineSecondaryOut();
        ~LineSecondaryOut();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::Config
        class State; //type: Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::State

        std::shared_ptr<openconfig::openconfig_transport_line_protection::Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::Config> config;
        std::shared_ptr<openconfig::openconfig_transport_line_protection::Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::State> state;
        
}; // Aps::ApsModules::ApsModule::Ports::LineSecondaryOut


class Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::Config : public ydk::Entity
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

        ydk::YLeaf target_attenuation; //type: decimal64

}; // Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::Config


class Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::State : public ydk::Entity
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

        ydk::YLeaf target_attenuation; //type: decimal64
        ydk::YLeaf attenuation; //type: decimal64
        class OpticalPower; //type: Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::State::OpticalPower

        std::shared_ptr<openconfig::openconfig_transport_line_protection::Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::State::OpticalPower> optical_power;
        
}; // Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::State


class Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::State::OpticalPower : public ydk::Entity
{
    public:
        OpticalPower();
        ~OpticalPower();

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

}; // Aps::ApsModules::ApsModule::Ports::LineSecondaryOut::State::OpticalPower


class Aps::ApsModules::ApsModule::Ports::CommonIn : public ydk::Entity
{
    public:
        CommonIn();
        ~CommonIn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Aps::ApsModules::ApsModule::Ports::CommonIn::Config
        class State; //type: Aps::ApsModules::ApsModule::Ports::CommonIn::State

        std::shared_ptr<openconfig::openconfig_transport_line_protection::Aps::ApsModules::ApsModule::Ports::CommonIn::Config> config;
        std::shared_ptr<openconfig::openconfig_transport_line_protection::Aps::ApsModules::ApsModule::Ports::CommonIn::State> state;
        
}; // Aps::ApsModules::ApsModule::Ports::CommonIn


class Aps::ApsModules::ApsModule::Ports::CommonIn::Config : public ydk::Entity
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
        ydk::YLeaf target_attenuation; //type: decimal64

}; // Aps::ApsModules::ApsModule::Ports::CommonIn::Config


class Aps::ApsModules::ApsModule::Ports::CommonIn::State : public ydk::Entity
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
        ydk::YLeaf target_attenuation; //type: decimal64
        ydk::YLeaf attenuation; //type: decimal64
        class OpticalPower; //type: Aps::ApsModules::ApsModule::Ports::CommonIn::State::OpticalPower

        std::shared_ptr<openconfig::openconfig_transport_line_protection::Aps::ApsModules::ApsModule::Ports::CommonIn::State::OpticalPower> optical_power;
        
}; // Aps::ApsModules::ApsModule::Ports::CommonIn::State


class Aps::ApsModules::ApsModule::Ports::CommonIn::State::OpticalPower : public ydk::Entity
{
    public:
        OpticalPower();
        ~OpticalPower();

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

}; // Aps::ApsModules::ApsModule::Ports::CommonIn::State::OpticalPower


class Aps::ApsModules::ApsModule::Ports::CommonOutput : public ydk::Entity
{
    public:
        CommonOutput();
        ~CommonOutput();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Aps::ApsModules::ApsModule::Ports::CommonOutput::Config
        class State; //type: Aps::ApsModules::ApsModule::Ports::CommonOutput::State

        std::shared_ptr<openconfig::openconfig_transport_line_protection::Aps::ApsModules::ApsModule::Ports::CommonOutput::Config> config;
        std::shared_ptr<openconfig::openconfig_transport_line_protection::Aps::ApsModules::ApsModule::Ports::CommonOutput::State> state;
        
}; // Aps::ApsModules::ApsModule::Ports::CommonOutput


class Aps::ApsModules::ApsModule::Ports::CommonOutput::Config : public ydk::Entity
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

        ydk::YLeaf target_attenuation; //type: decimal64

}; // Aps::ApsModules::ApsModule::Ports::CommonOutput::Config


class Aps::ApsModules::ApsModule::Ports::CommonOutput::State : public ydk::Entity
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

        ydk::YLeaf target_attenuation; //type: decimal64
        ydk::YLeaf attenuation; //type: decimal64
        class OpticalPower; //type: Aps::ApsModules::ApsModule::Ports::CommonOutput::State::OpticalPower

        std::shared_ptr<openconfig::openconfig_transport_line_protection::Aps::ApsModules::ApsModule::Ports::CommonOutput::State::OpticalPower> optical_power;
        
}; // Aps::ApsModules::ApsModule::Ports::CommonOutput::State


class Aps::ApsModules::ApsModule::Ports::CommonOutput::State::OpticalPower : public ydk::Entity
{
    public:
        OpticalPower();
        ~OpticalPower();

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

}; // Aps::ApsModules::ApsModule::Ports::CommonOutput::State::OpticalPower

class PRIMARY : public openconfig::openconfig_transport_line_protection::APSPATHS, virtual ydk::Identity
{
    public:
        PRIMARY();
        ~PRIMARY();


}; // PRIMARY

class SECONDARY : public openconfig::openconfig_transport_line_protection::APSPATHS, virtual ydk::Identity
{
    public:
        SECONDARY();
        ~SECONDARY();


}; // SECONDARY


}
}

#endif /* _OPENCONFIG_TRANSPORT_LINE_PROTECTION_ */

