#ifndef _CISCO_ENTITY_SENSOR_MIB_
#define _CISCO_ENTITY_SENSOR_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_ENTITY_SENSOR_MIB {

class CiscoEntitySensorMib : public Entity
{
    public:
        CiscoEntitySensorMib();
        ~CiscoEntitySensorMib();

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

        class Entsensorglobalobjects; //type: CiscoEntitySensorMib::Entsensorglobalobjects
        class Entsensorvaluetable; //type: CiscoEntitySensorMib::Entsensorvaluetable
        class Entsensorthresholdtable; //type: CiscoEntitySensorMib::Entsensorthresholdtable

        std::shared_ptr<CISCO_ENTITY_SENSOR_MIB::CiscoEntitySensorMib::Entsensorglobalobjects> entsensorglobalobjects_;
        std::shared_ptr<CISCO_ENTITY_SENSOR_MIB::CiscoEntitySensorMib::Entsensorthresholdtable> entsensorthresholdtable_;
        std::shared_ptr<CISCO_ENTITY_SENSOR_MIB::CiscoEntitySensorMib::Entsensorvaluetable> entsensorvaluetable_;
        
}; // CiscoEntitySensorMib


class CiscoEntitySensorMib::Entsensorglobalobjects : public Entity
{
    public:
        Entsensorglobalobjects();
        ~Entsensorglobalobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf entsensorthreshnotifglobalenable; //type: boolean

}; // CiscoEntitySensorMib::Entsensorglobalobjects


class CiscoEntitySensorMib::Entsensorvaluetable : public Entity
{
    public:
        Entsensorvaluetable();
        ~Entsensorvaluetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Entsensorvalueentry; //type: CiscoEntitySensorMib::Entsensorvaluetable::Entsensorvalueentry

        std::vector<std::shared_ptr<CISCO_ENTITY_SENSOR_MIB::CiscoEntitySensorMib::Entsensorvaluetable::Entsensorvalueentry> > entsensorvalueentry_;
        
}; // CiscoEntitySensorMib::Entsensorvaluetable


class CiscoEntitySensorMib::Entsensorvaluetable::Entsensorvalueentry : public Entity
{
    public:
        Entsensorvalueentry();
        ~Entsensorvalueentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf entsensortype; //type: SensordatatypeEnum
        YLeaf entsensorscale; //type: SensordatascaleEnum
        YLeaf entsensorprecision; //type: int32
        YLeaf entsensorvalue; //type: int32
        YLeaf entsensorstatus; //type: SensorstatusEnum
        YLeaf entsensorvaluetimestamp; //type: uint32
        YLeaf entsensorvalueupdaterate; //type: int32
        YLeaf entsensormeasuredentity; //type: int32

}; // CiscoEntitySensorMib::Entsensorvaluetable::Entsensorvalueentry


class CiscoEntitySensorMib::Entsensorthresholdtable : public Entity
{
    public:
        Entsensorthresholdtable();
        ~Entsensorthresholdtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Entsensorthresholdentry; //type: CiscoEntitySensorMib::Entsensorthresholdtable::Entsensorthresholdentry

        std::vector<std::shared_ptr<CISCO_ENTITY_SENSOR_MIB::CiscoEntitySensorMib::Entsensorthresholdtable::Entsensorthresholdentry> > entsensorthresholdentry_;
        
}; // CiscoEntitySensorMib::Entsensorthresholdtable


class CiscoEntitySensorMib::Entsensorthresholdtable::Entsensorthresholdentry : public Entity
{
    public:
        Entsensorthresholdentry();
        ~Entsensorthresholdentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf entsensorthresholdindex; //type: int32
        YLeaf entsensorthresholdseverity; //type: SensorthresholdseverityEnum
        YLeaf entsensorthresholdrelation; //type: SensorthresholdrelationEnum
        YLeaf entsensorthresholdvalue; //type: int32
        YLeaf entsensorthresholdevaluation; //type: boolean
        YLeaf entsensorthresholdnotificationenable; //type: boolean

}; // CiscoEntitySensorMib::Entsensorthresholdtable::Entsensorthresholdentry

class SensorthresholdseverityEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf minor;
        static const Enum::YLeaf major;
        static const Enum::YLeaf critical;

};

class SensorstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf ok;
        static const Enum::YLeaf unavailable;
        static const Enum::YLeaf nonoperational;

};

class SensordatatypeEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf voltsAC;
        static const Enum::YLeaf voltsDC;
        static const Enum::YLeaf amperes;
        static const Enum::YLeaf watts;
        static const Enum::YLeaf hertz;
        static const Enum::YLeaf celsius;
        static const Enum::YLeaf percentRH;
        static const Enum::YLeaf rpm;
        static const Enum::YLeaf cmm;
        static const Enum::YLeaf truthvalue;
        static const Enum::YLeaf specialEnum;
        static const Enum::YLeaf dBm;

};

class SensorthresholdrelationEnum : public Enum
{
    public:
        static const Enum::YLeaf lessThan;
        static const Enum::YLeaf lessOrEqual;
        static const Enum::YLeaf greaterThan;
        static const Enum::YLeaf greaterOrEqual;
        static const Enum::YLeaf equalTo;
        static const Enum::YLeaf notEqualTo;

};

class SensordatascaleEnum : public Enum
{
    public:
        static const Enum::YLeaf yocto;
        static const Enum::YLeaf zepto;
        static const Enum::YLeaf atto;
        static const Enum::YLeaf femto;
        static const Enum::YLeaf pico;
        static const Enum::YLeaf nano;
        static const Enum::YLeaf micro;
        static const Enum::YLeaf milli;
        static const Enum::YLeaf units;
        static const Enum::YLeaf kilo;
        static const Enum::YLeaf mega;
        static const Enum::YLeaf giga;
        static const Enum::YLeaf tera;
        static const Enum::YLeaf exa;
        static const Enum::YLeaf peta;
        static const Enum::YLeaf zetta;
        static const Enum::YLeaf yotta;

};


}
}

#endif /* _CISCO_ENTITY_SENSOR_MIB_ */

