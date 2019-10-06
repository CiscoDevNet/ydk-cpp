#ifndef _CISCO_IOS_XR_SYSADMIN_ENTITY_SENSOR_MIB_
#define _CISCO_IOS_XR_SYSADMIN_ENTITY_SENSOR_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_entity_sensor_mib {

class CISCOENTITYSENSORMIB : public ydk::Entity
{
    public:
        CISCOENTITYSENSORMIB();
        ~CISCOENTITYSENSORMIB();

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

        class EntSensorValueTable; //type: CISCOENTITYSENSORMIB::EntSensorValueTable
        class EntSensorThresholdTable; //type: CISCOENTITYSENSORMIB::EntSensorThresholdTable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_entity_sensor_mib::CISCOENTITYSENSORMIB::EntSensorValueTable> entsensorvaluetable;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_entity_sensor_mib::CISCOENTITYSENSORMIB::EntSensorThresholdTable> entsensorthresholdtable;
        
}; // CISCOENTITYSENSORMIB


class CISCOENTITYSENSORMIB::EntSensorValueTable : public ydk::Entity
{
    public:
        EntSensorValueTable();
        ~EntSensorValueTable();

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

        class EntSensorValueEntry; //type: CISCOENTITYSENSORMIB::EntSensorValueTable::EntSensorValueEntry

        ydk::YList entsensorvalueentry;
        
}; // CISCOENTITYSENSORMIB::EntSensorValueTable


class CISCOENTITYSENSORMIB::EntSensorValueTable::EntSensorValueEntry : public ydk::Entity
{
    public:
        EntSensorValueEntry();
        ~EntSensorValueEntry();

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

        ydk::YLeaf entphysicalindex; //type: int32
        ydk::YLeaf entsensortype; //type: SensorDataType
        ydk::YLeaf entsensorscale; //type: SensorDataScale
        ydk::YLeaf entsensorprecision; //type: int32
        ydk::YLeaf entsensorvalue; //type: int32
        ydk::YLeaf entsensorstatus; //type: SensorStatus
        ydk::YLeaf entsensorvaluetimestamp; //type: uint32
        ydk::YLeaf entsensorvalueupdaterate; //type: int32
        ydk::YLeaf entsensormeasuredentity; //type: int32

}; // CISCOENTITYSENSORMIB::EntSensorValueTable::EntSensorValueEntry


class CISCOENTITYSENSORMIB::EntSensorThresholdTable : public ydk::Entity
{
    public:
        EntSensorThresholdTable();
        ~EntSensorThresholdTable();

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

        class EntSensorThresholdEntry; //type: CISCOENTITYSENSORMIB::EntSensorThresholdTable::EntSensorThresholdEntry

        ydk::YList entsensorthresholdentry;
        
}; // CISCOENTITYSENSORMIB::EntSensorThresholdTable


class CISCOENTITYSENSORMIB::EntSensorThresholdTable::EntSensorThresholdEntry : public ydk::Entity
{
    public:
        EntSensorThresholdEntry();
        ~EntSensorThresholdEntry();

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

        ydk::YLeaf entphysicalindex; //type: int32
        ydk::YLeaf entsensorthresholdindex; //type: int32
        ydk::YLeaf entsensorthresholdseverity; //type: SensorThresholdSeverity
        ydk::YLeaf entsensorthresholdrelation; //type: SensorThresholdRelation
        ydk::YLeaf entsensorthresholdvalue; //type: int32
        ydk::YLeaf entsensorthresholdevaluation; //type: TruthValue
        ydk::YLeaf entsensorthresholdnotificationenable; //type: TruthValue

}; // CISCOENTITYSENSORMIB::EntSensorThresholdTable::EntSensorThresholdEntry

class SensorThresholdSeverity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf minor;
        static const ydk::Enum::YLeaf major_;
        static const ydk::Enum::YLeaf critical;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "minor") return 10;
            if (name == "major") return 20;
            if (name == "critical") return 30;
            return -1;
        }
};

class SensorStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ok;
        static const ydk::Enum::YLeaf unavailable;
        static const ydk::Enum::YLeaf nonoperational;

        static int get_enum_value(const std::string & name) {
            if (name == "ok") return 1;
            if (name == "unavailable") return 2;
            if (name == "nonoperational") return 3;
            return -1;
        }
};

class SensorDataType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf voltsAC;
        static const ydk::Enum::YLeaf voltsDC;
        static const ydk::Enum::YLeaf amperes;
        static const ydk::Enum::YLeaf watts;
        static const ydk::Enum::YLeaf hertz;
        static const ydk::Enum::YLeaf celsius;
        static const ydk::Enum::YLeaf percentRH;
        static const ydk::Enum::YLeaf rpm;
        static const ydk::Enum::YLeaf cmm;
        static const ydk::Enum::YLeaf truthvalue;
        static const ydk::Enum::YLeaf specialEnum;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "unknown") return 2;
            if (name == "voltsAC") return 3;
            if (name == "voltsDC") return 4;
            if (name == "amperes") return 5;
            if (name == "watts") return 6;
            if (name == "hertz") return 7;
            if (name == "celsius") return 8;
            if (name == "percentRH") return 9;
            if (name == "rpm") return 10;
            if (name == "cmm") return 11;
            if (name == "truthvalue") return 12;
            if (name == "specialEnum") return 13;
            return -1;
        }
};

class SensorThresholdRelation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lessThan;
        static const ydk::Enum::YLeaf lessOrEqual;
        static const ydk::Enum::YLeaf greaterThan;
        static const ydk::Enum::YLeaf greaterOrEqual;
        static const ydk::Enum::YLeaf equalTo;
        static const ydk::Enum::YLeaf notEqualTo;

        static int get_enum_value(const std::string & name) {
            if (name == "lessThan") return 1;
            if (name == "lessOrEqual") return 2;
            if (name == "greaterThan") return 3;
            if (name == "greaterOrEqual") return 4;
            if (name == "equalTo") return 5;
            if (name == "notEqualTo") return 6;
            return -1;
        }
};

class SensorDataScale : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf yocto;
        static const ydk::Enum::YLeaf zepto;
        static const ydk::Enum::YLeaf atto;
        static const ydk::Enum::YLeaf femto;
        static const ydk::Enum::YLeaf pico;
        static const ydk::Enum::YLeaf nano;
        static const ydk::Enum::YLeaf micro;
        static const ydk::Enum::YLeaf milli;
        static const ydk::Enum::YLeaf units;
        static const ydk::Enum::YLeaf kilo;
        static const ydk::Enum::YLeaf mega;
        static const ydk::Enum::YLeaf giga;
        static const ydk::Enum::YLeaf tera;
        static const ydk::Enum::YLeaf exa;
        static const ydk::Enum::YLeaf peta;
        static const ydk::Enum::YLeaf zetta;
        static const ydk::Enum::YLeaf yotta;

        static int get_enum_value(const std::string & name) {
            if (name == "yocto") return 1;
            if (name == "zepto") return 2;
            if (name == "atto") return 3;
            if (name == "femto") return 4;
            if (name == "pico") return 5;
            if (name == "nano") return 6;
            if (name == "micro") return 7;
            if (name == "milli") return 8;
            if (name == "units") return 9;
            if (name == "kilo") return 10;
            if (name == "mega") return 11;
            if (name == "giga") return 12;
            if (name == "tera") return 13;
            if (name == "exa") return 14;
            if (name == "peta") return 15;
            if (name == "zetta") return 16;
            if (name == "yotta") return 17;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_ENTITY_SENSOR_MIB_ */

