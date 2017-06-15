#ifndef _ENTITY_STATE_MIB_
#define _ENTITY_STATE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace ENTITY_STATE_MIB {

class EntityStateMib : public Entity
{
    public:
        EntityStateMib();
        ~EntityStateMib();

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

        class Entstatetable; //type: EntityStateMib::Entstatetable

        std::shared_ptr<ENTITY_STATE_MIB::EntityStateMib::Entstatetable> entstatetable_;
        
}; // EntityStateMib


class EntityStateMib::Entstatetable : public Entity
{
    public:
        Entstatetable();
        ~Entstatetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Entstateentry; //type: EntityStateMib::Entstatetable::Entstateentry

        std::vector<std::shared_ptr<ENTITY_STATE_MIB::EntityStateMib::Entstatetable::Entstateentry> > entstateentry_;
        
}; // EntityStateMib::Entstatetable


class EntityStateMib::Entstatetable::Entstateentry : public Entity
{
    public:
        Entstateentry();
        ~Entstateentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf entstatelastchanged; //type: string
        YLeaf entstateadmin; //type: EntityadminstateEnum
        YLeaf entstateoper; //type: EntityoperstateEnum
        YLeaf entstateusage; //type: EntityusagestateEnum
        YLeaf entstatealarm; //type: Entityalarmstatus
        YLeaf entstatestandby; //type: EntitystandbystatusEnum

}; // EntityStateMib::Entstatetable::Entstateentry


}
}

#endif /* _ENTITY_STATE_MIB_ */

