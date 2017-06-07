#ifndef _CISCO_IOS_XE_ENVIRONMENT_OPER_
#define _CISCO_IOS_XE_ENVIRONMENT_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XE_environment_oper {

class EnvironmentSensors : public Entity
{
    public:
        EnvironmentSensors();
        ~EnvironmentSensors();

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

        class EnvironmentSensor; //type: EnvironmentSensors::EnvironmentSensor

        std::vector<std::shared_ptr<Cisco_IOS_XE_environment_oper::EnvironmentSensors::EnvironmentSensor> > environment_sensor;
        
}; // EnvironmentSensors


class EnvironmentSensors::EnvironmentSensor : public Entity
{
    public:
        EnvironmentSensor();
        ~EnvironmentSensor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf location; //type: string
        YLeaf state; //type: string
        YLeaf current_reading; //type: uint32
        YLeaf sensor_units; //type: SensorUnitsTypeEnum

}; // EnvironmentSensors::EnvironmentSensor

class SensorUnitsTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Watts;
        static const Enum::YLeaf Celsius;
        static const Enum::YLeaf milliVolts;
        static const Enum::YLeaf Amperes;
        static const Enum::YLeaf Volts_DC;
        static const Enum::YLeaf Volts_AC;
        static const Enum::YLeaf milliAmperes;

};


}
}

#endif /* _CISCO_IOS_XE_ENVIRONMENT_OPER_ */

