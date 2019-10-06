#ifndef _CISCO_IOS_XE_ENVIRONMENT_OPER_
#define _CISCO_IOS_XE_ENVIRONMENT_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_environment_oper {

class EnvironmentSensors : public ydk::Entity
{
    public:
        EnvironmentSensors();
        ~EnvironmentSensors();

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

        class EnvironmentSensor; //type: EnvironmentSensors::EnvironmentSensor

        ydk::YList environment_sensor;
        
}; // EnvironmentSensors


class EnvironmentSensors::EnvironmentSensor : public ydk::Entity
{
    public:
        EnvironmentSensor();
        ~EnvironmentSensor();

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
        ydk::YLeaf location; //type: string
        ydk::YLeaf state; //type: string
        ydk::YLeaf current_reading; //type: uint32
        ydk::YLeaf sensor_units; //type: SensorUnitsType
        ydk::YLeaf low_critical_threshold; //type: int32
        ydk::YLeaf low_normal_threshold; //type: int32
        ydk::YLeaf high_normal_threshold; //type: int32
        ydk::YLeaf high_critical_threshold; //type: int32

}; // EnvironmentSensors::EnvironmentSensor

class SensorUnitsType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf watts;
        static const ydk::Enum::YLeaf celsius;
        static const ydk::Enum::YLeaf millivolts;
        static const ydk::Enum::YLeaf amperes;
        static const ydk::Enum::YLeaf volts_dc;
        static const ydk::Enum::YLeaf volts_ac;
        static const ydk::Enum::YLeaf milliamperes;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf revolutions_per_minute;

        static int get_enum_value(const std::string & name) {
            if (name == "watts") return 0;
            if (name == "celsius") return 1;
            if (name == "millivolts") return 2;
            if (name == "amperes") return 3;
            if (name == "volts-dc") return 4;
            if (name == "volts-ac") return 5;
            if (name == "milliamperes") return 6;
            if (name == "unknown") return 7;
            if (name == "revolutions-per-minute") return 8;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_ENVIRONMENT_OPER_ */

