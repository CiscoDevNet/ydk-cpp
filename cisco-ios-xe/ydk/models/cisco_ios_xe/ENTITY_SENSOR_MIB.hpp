#ifndef _ENTITY_SENSOR_MIB_
#define _ENTITY_SENSOR_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace ENTITY_SENSOR_MIB {

class ENTITYSENSORMIB : public ydk::Entity
{
    public:
        ENTITYSENSORMIB();
        ~ENTITYSENSORMIB();

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

        class Entphysensortable; //type: ENTITYSENSORMIB::Entphysensortable

        std::shared_ptr<cisco_ios_xe::ENTITY_SENSOR_MIB::ENTITYSENSORMIB::Entphysensortable> entphysensortable;
        
}; // ENTITYSENSORMIB


class ENTITYSENSORMIB::Entphysensortable : public ydk::Entity
{
    public:
        Entphysensortable();
        ~Entphysensortable();

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

        class Entphysensorentry; //type: ENTITYSENSORMIB::Entphysensortable::Entphysensorentry

        std::vector<std::shared_ptr<cisco_ios_xe::ENTITY_SENSOR_MIB::ENTITYSENSORMIB::Entphysensortable::Entphysensorentry> > entphysensorentry;
        
}; // ENTITYSENSORMIB::Entphysensortable


class ENTITYSENSORMIB::Entphysensortable::Entphysensorentry : public ydk::Entity
{
    public:
        Entphysensorentry();
        ~Entphysensorentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf entphysensortype; //type: EntitySensorDataType
        ydk::YLeaf entphysensorscale; //type: EntitySensorDataScale
        ydk::YLeaf entphysensorprecision; //type: int32
        ydk::YLeaf entphysensorvalue; //type: int32
        ydk::YLeaf entphysensoroperstatus; //type: EntitySensorStatus
        ydk::YLeaf entphysensorunitsdisplay; //type: string
        ydk::YLeaf entphysensorvaluetimestamp; //type: uint32
        ydk::YLeaf entphysensorvalueupdaterate; //type: uint32

}; // ENTITYSENSORMIB::Entphysensortable::Entphysensorentry

class EntitySensorStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ok;
        static const ydk::Enum::YLeaf unavailable;
        static const ydk::Enum::YLeaf nonoperational;

};

class EntitySensorDataScale : public ydk::Enum
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

};

class EntitySensorDataType : public ydk::Enum
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

};


}
}

#endif /* _ENTITY_SENSOR_MIB_ */

