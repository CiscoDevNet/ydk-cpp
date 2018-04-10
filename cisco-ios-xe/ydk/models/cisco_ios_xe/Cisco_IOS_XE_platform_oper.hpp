#ifndef _CISCO_IOS_XE_PLATFORM_OPER_
#define _CISCO_IOS_XE_PLATFORM_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_platform_oper {

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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_platform_oper::Components::Component> > component;
        
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

        ydk::YLeaf cname; //type: string
        class State; //type: Components::Component::State
        class PlatformProperties; //type: Components::Component::PlatformProperties
        class PlatformSubcomponents; //type: Components::Component::PlatformSubcomponents

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_platform_oper::Components::Component::State> state;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_platform_oper::Components::Component::PlatformProperties> platform_properties;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_platform_oper::Components::Component::PlatformSubcomponents> platform_subcomponents;
        
}; // Components::Component


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

        ydk::YLeaf type; //type: PlatformCompType
        ydk::YLeaf id; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf mfg_name; //type: string
        ydk::YLeaf version; //type: string
        ydk::YLeaf serial_no; //type: string
        ydk::YLeaf part_no; //type: string
        class Temp; //type: Components::Component::State::Temp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_platform_oper::Components::Component::State::Temp> temp;
        
}; // Components::Component::State


class Components::Component::State::Temp : public ydk::Entity
{
    public:
        Temp();
        ~Temp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf temp_instant; //type: decimal64
        ydk::YLeaf temp_avg; //type: decimal64
        ydk::YLeaf temp_max; //type: decimal64
        ydk::YLeaf temp_min; //type: decimal64

}; // Components::Component::State::Temp


class Components::Component::PlatformProperties : public ydk::Entity
{
    public:
        PlatformProperties();
        ~PlatformProperties();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PlatformProperty; //type: Components::Component::PlatformProperties::PlatformProperty

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_platform_oper::Components::Component::PlatformProperties::PlatformProperty> > platform_property;
        
}; // Components::Component::PlatformProperties


class Components::Component::PlatformProperties::PlatformProperty : public ydk::Entity
{
    public:
        PlatformProperty();
        ~PlatformProperty();

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
        ydk::YLeaf configurable; //type: boolean
        class Value; //type: Components::Component::PlatformProperties::PlatformProperty::Value

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_platform_oper::Components::Component::PlatformProperties::PlatformProperty::Value> value_;
        
}; // Components::Component::PlatformProperties::PlatformProperty


class Components::Component::PlatformProperties::PlatformProperty::Value : public ydk::Entity
{
    public:
        Value();
        ~Value();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf string; //type: string
        ydk::YLeaf boolean; //type: boolean
        ydk::YLeaf intsixfour; //type: int64
        ydk::YLeaf uintsixfour; //type: uint64
        ydk::YLeaf decimal; //type: decimal64

}; // Components::Component::PlatformProperties::PlatformProperty::Value


class Components::Component::PlatformSubcomponents : public ydk::Entity
{
    public:
        PlatformSubcomponents();
        ~PlatformSubcomponents();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PlatformSubcomponent; //type: Components::Component::PlatformSubcomponents::PlatformSubcomponent

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_platform_oper::Components::Component::PlatformSubcomponents::PlatformSubcomponent> > platform_subcomponent;
        
}; // Components::Component::PlatformSubcomponents


class Components::Component::PlatformSubcomponents::PlatformSubcomponent : public ydk::Entity
{
    public:
        PlatformSubcomponent();
        ~PlatformSubcomponent();

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

}; // Components::Component::PlatformSubcomponents::PlatformSubcomponent

class PlatformCompType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf comp_chassis;
        static const ydk::Enum::YLeaf comp_backplane;
        static const ydk::Enum::YLeaf comp_power_supply;
        static const ydk::Enum::YLeaf comp_fan;
        static const ydk::Enum::YLeaf comp_sensor;
        static const ydk::Enum::YLeaf comp_module;
        static const ydk::Enum::YLeaf comp_linecard;
        static const ydk::Enum::YLeaf comp_port;
        static const ydk::Enum::YLeaf comp_cpu;
        static const ydk::Enum::YLeaf comp_operating_system;
        static const ydk::Enum::YLeaf comp_optical_channel;
        static const ydk::Enum::YLeaf comp_container;

};

class PlatformPropValueType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf property_string;
        static const ydk::Enum::YLeaf property_boolean;
        static const ydk::Enum::YLeaf property_int64;
        static const ydk::Enum::YLeaf property_uint64;
        static const ydk::Enum::YLeaf property_decimal64;

};


}
}

#endif /* _CISCO_IOS_XE_PLATFORM_OPER_ */

