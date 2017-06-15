#ifndef _ENTITY_SENSOR_MIB_
#define _ENTITY_SENSOR_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace ENTITY_SENSOR_MIB {

class EntitySensorMib : public Entity
{
    public:
        EntitySensorMib();
        ~EntitySensorMib();

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

        class Entphysensortable; //type: EntitySensorMib::Entphysensortable

        std::shared_ptr<ENTITY_SENSOR_MIB::EntitySensorMib::Entphysensortable> entphysensortable_;
        
}; // EntitySensorMib


class EntitySensorMib::Entphysensortable : public Entity
{
    public:
        Entphysensortable();
        ~Entphysensortable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Entphysensorentry; //type: EntitySensorMib::Entphysensortable::Entphysensorentry

        std::vector<std::shared_ptr<ENTITY_SENSOR_MIB::EntitySensorMib::Entphysensortable::Entphysensorentry> > entphysensorentry_;
        
}; // EntitySensorMib::Entphysensortable


class EntitySensorMib::Entphysensortable::Entphysensorentry : public Entity
{
    public:
        Entphysensorentry();
        ~Entphysensorentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf entphysensortype; //type: EntitysensordatatypeEnum
        YLeaf entphysensorscale; //type: EntitysensordatascaleEnum
        YLeaf entphysensorprecision; //type: int32
        YLeaf entphysensorvalue; //type: int32
        YLeaf entphysensoroperstatus; //type: EntitysensorstatusEnum
        YLeaf entphysensorunitsdisplay; //type: string
        YLeaf entphysensorvaluetimestamp; //type: uint32
        YLeaf entphysensorvalueupdaterate; //type: uint32

}; // EntitySensorMib::Entphysensortable::Entphysensorentry

class EntitysensordatatypeEnum : public Enum
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

};

class EntitysensorstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf ok;
        static const Enum::YLeaf unavailable;
        static const Enum::YLeaf nonoperational;

};

class EntitysensordatascaleEnum : public Enum
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

#endif /* _ENTITY_SENSOR_MIB_ */

