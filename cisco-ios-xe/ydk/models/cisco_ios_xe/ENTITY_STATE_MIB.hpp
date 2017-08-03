#ifndef _ENTITY_STATE_MIB_
#define _ENTITY_STATE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace ENTITY_STATE_MIB {

class EntityStateMib : public ydk::Entity
{
    public:
        EntityStateMib();
        ~EntityStateMib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class Entstatetable; //type: EntityStateMib::Entstatetable

        std::shared_ptr<ENTITY_STATE_MIB::EntityStateMib::Entstatetable> entstatetable;
        
}; // EntityStateMib


class EntityStateMib::Entstatetable : public ydk::Entity
{
    public:
        Entstatetable();
        ~Entstatetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Entstateentry; //type: EntityStateMib::Entstatetable::Entstateentry

        std::vector<std::shared_ptr<ENTITY_STATE_MIB::EntityStateMib::Entstatetable::Entstateentry> > entstateentry;
        
}; // EntityStateMib::Entstatetable


class EntityStateMib::Entstatetable::Entstateentry : public ydk::Entity
{
    public:
        Entstateentry();
        ~Entstateentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf entstatelastchanged; //type: string
        ydk::YLeaf entstateadmin; //type: Entityadminstate
        ydk::YLeaf entstateoper; //type: Entityoperstate
        ydk::YLeaf entstateusage; //type: Entityusagestate
        ydk::YLeaf entstatealarm; //type: Entityalarmstatus
        ydk::YLeaf entstatestandby; //type: Entitystandbystatus

}; // EntityStateMib::Entstatetable::Entstateentry


}
}

#endif /* _ENTITY_STATE_MIB_ */

