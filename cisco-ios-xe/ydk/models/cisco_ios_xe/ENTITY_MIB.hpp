#ifndef _ENTITY_MIB_
#define _ENTITY_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace ENTITY_MIB {

class EntityMib : public Entity
{
    public:
        EntityMib();
        ~EntityMib();

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

        class Entitygeneral; //type: EntityMib::Entitygeneral
        class Entphysicaltable; //type: EntityMib::Entphysicaltable
        class Entlogicaltable; //type: EntityMib::Entlogicaltable
        class Entlpmappingtable; //type: EntityMib::Entlpmappingtable
        class Entaliasmappingtable; //type: EntityMib::Entaliasmappingtable
        class Entphysicalcontainstable; //type: EntityMib::Entphysicalcontainstable

        std::shared_ptr<ENTITY_MIB::EntityMib::Entaliasmappingtable> entaliasmappingtable_;
        std::shared_ptr<ENTITY_MIB::EntityMib::Entitygeneral> entitygeneral_;
        std::shared_ptr<ENTITY_MIB::EntityMib::Entlogicaltable> entlogicaltable_;
        std::shared_ptr<ENTITY_MIB::EntityMib::Entlpmappingtable> entlpmappingtable_;
        std::shared_ptr<ENTITY_MIB::EntityMib::Entphysicalcontainstable> entphysicalcontainstable_;
        std::shared_ptr<ENTITY_MIB::EntityMib::Entphysicaltable> entphysicaltable_;
        
}; // EntityMib


class EntityMib::Entitygeneral : public Entity
{
    public:
        Entitygeneral();
        ~Entitygeneral();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf entlastchangetime; //type: uint32

}; // EntityMib::Entitygeneral


class EntityMib::Entphysicaltable : public Entity
{
    public:
        Entphysicaltable();
        ~Entphysicaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Entphysicalentry; //type: EntityMib::Entphysicaltable::Entphysicalentry

        std::vector<std::shared_ptr<ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry> > entphysicalentry_;
        
}; // EntityMib::Entphysicaltable


class EntityMib::Entphysicaltable::Entphysicalentry : public Entity
{
    public:
        Entphysicalentry();
        ~Entphysicalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf entphysicalindex; //type: int32
        YLeaf entphysicaldescr; //type: string
        YLeaf entphysicalvendortype; //type: string
        YLeaf entphysicalcontainedin; //type: int32
        YLeaf entphysicalclass; //type: PhysicalclassEnum
        YLeaf entphysicalparentrelpos; //type: int32
        YLeaf entphysicalname; //type: string
        YLeaf entphysicalhardwarerev; //type: string
        YLeaf entphysicalfirmwarerev; //type: string
        YLeaf entphysicalsoftwarerev; //type: string
        YLeaf entphysicalserialnum; //type: string
        YLeaf entphysicalmfgname; //type: string
        YLeaf entphysicalmodelname; //type: string
        YLeaf entphysicalalias; //type: string
        YLeaf entphysicalassetid; //type: string
        YLeaf entphysicalisfru; //type: boolean
        YLeaf entphysicalmfgdate; //type: string
        YLeaf entphysicaluris; //type: binary
        YLeaf ceentphysicalsecondserialnum; //type: string

}; // EntityMib::Entphysicaltable::Entphysicalentry


class EntityMib::Entlogicaltable : public Entity
{
    public:
        Entlogicaltable();
        ~Entlogicaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Entlogicalentry; //type: EntityMib::Entlogicaltable::Entlogicalentry

        std::vector<std::shared_ptr<ENTITY_MIB::EntityMib::Entlogicaltable::Entlogicalentry> > entlogicalentry_;
        
}; // EntityMib::Entlogicaltable


class EntityMib::Entlogicaltable::Entlogicalentry : public Entity
{
    public:
        Entlogicalentry();
        ~Entlogicalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf entlogicalindex; //type: int32
        YLeaf entlogicaldescr; //type: string
        YLeaf entlogicaltype; //type: string
        YLeaf entlogicalcommunity; //type: binary
        YLeaf entlogicaltaddress; //type: binary
        YLeaf entlogicaltdomain; //type: string
        YLeaf entlogicalcontextengineid; //type: binary
        YLeaf entlogicalcontextname; //type: string

}; // EntityMib::Entlogicaltable::Entlogicalentry


class EntityMib::Entlpmappingtable : public Entity
{
    public:
        Entlpmappingtable();
        ~Entlpmappingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Entlpmappingentry; //type: EntityMib::Entlpmappingtable::Entlpmappingentry

        std::vector<std::shared_ptr<ENTITY_MIB::EntityMib::Entlpmappingtable::Entlpmappingentry> > entlpmappingentry_;
        
}; // EntityMib::Entlpmappingtable


class EntityMib::Entlpmappingtable::Entlpmappingentry : public Entity
{
    public:
        Entlpmappingentry();
        ~Entlpmappingentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entlogicaltable::Entlogicalentry::entlogicalindex)
        YLeaf entlogicalindex;
        YLeaf entlpphysicalindex; //type: int32

}; // EntityMib::Entlpmappingtable::Entlpmappingentry


class EntityMib::Entaliasmappingtable : public Entity
{
    public:
        Entaliasmappingtable();
        ~Entaliasmappingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Entaliasmappingentry; //type: EntityMib::Entaliasmappingtable::Entaliasmappingentry

        std::vector<std::shared_ptr<ENTITY_MIB::EntityMib::Entaliasmappingtable::Entaliasmappingentry> > entaliasmappingentry_;
        
}; // EntityMib::Entaliasmappingtable


class EntityMib::Entaliasmappingtable::Entaliasmappingentry : public Entity
{
    public:
        Entaliasmappingentry();
        ~Entaliasmappingentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf entaliaslogicalindexorzero; //type: int32
        YLeaf entaliasmappingidentifier; //type: string

}; // EntityMib::Entaliasmappingtable::Entaliasmappingentry


class EntityMib::Entphysicalcontainstable : public Entity
{
    public:
        Entphysicalcontainstable();
        ~Entphysicalcontainstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Entphysicalcontainsentry; //type: EntityMib::Entphysicalcontainstable::Entphysicalcontainsentry

        std::vector<std::shared_ptr<ENTITY_MIB::EntityMib::Entphysicalcontainstable::Entphysicalcontainsentry> > entphysicalcontainsentry_;
        
}; // EntityMib::Entphysicalcontainstable


class EntityMib::Entphysicalcontainstable::Entphysicalcontainsentry : public Entity
{
    public:
        Entphysicalcontainsentry();
        ~Entphysicalcontainsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf entphysicalchildindex; //type: int32

}; // EntityMib::Entphysicalcontainstable::Entphysicalcontainsentry

class PhysicalclassEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf chassis;
        static const Enum::YLeaf backplane;
        static const Enum::YLeaf container;
        static const Enum::YLeaf powerSupply;
        static const Enum::YLeaf fan;
        static const Enum::YLeaf sensor;
        static const Enum::YLeaf module;
        static const Enum::YLeaf port;
        static const Enum::YLeaf stack;
        static const Enum::YLeaf cpu;

};


}
}

#endif /* _ENTITY_MIB_ */

