#ifndef _ENTITY_MIB_
#define _ENTITY_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace ENTITY_MIB {

class EntityMib : public ydk::Entity
{
    public:
        EntityMib();
        ~EntityMib();

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

        class Entitygeneral; //type: EntityMib::Entitygeneral
        class Entphysicaltable; //type: EntityMib::Entphysicaltable
        class Entlogicaltable; //type: EntityMib::Entlogicaltable
        class Entlpmappingtable; //type: EntityMib::Entlpmappingtable
        class Entaliasmappingtable; //type: EntityMib::Entaliasmappingtable
        class Entphysicalcontainstable; //type: EntityMib::Entphysicalcontainstable

        std::shared_ptr<ENTITY_MIB::EntityMib::Entaliasmappingtable> entaliasmappingtable;
        std::shared_ptr<ENTITY_MIB::EntityMib::Entitygeneral> entitygeneral;
        std::shared_ptr<ENTITY_MIB::EntityMib::Entlogicaltable> entlogicaltable;
        std::shared_ptr<ENTITY_MIB::EntityMib::Entlpmappingtable> entlpmappingtable;
        std::shared_ptr<ENTITY_MIB::EntityMib::Entphysicalcontainstable> entphysicalcontainstable;
        std::shared_ptr<ENTITY_MIB::EntityMib::Entphysicaltable> entphysicaltable;
        
}; // EntityMib


class EntityMib::Entitygeneral : public ydk::Entity
{
    public:
        Entitygeneral();
        ~Entitygeneral();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entlastchangetime; //type: uint32

}; // EntityMib::Entitygeneral


class EntityMib::Entphysicaltable : public ydk::Entity
{
    public:
        Entphysicaltable();
        ~Entphysicaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Entphysicalentry; //type: EntityMib::Entphysicaltable::Entphysicalentry

        std::vector<std::shared_ptr<ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry> > entphysicalentry;
        
}; // EntityMib::Entphysicaltable


class EntityMib::Entphysicaltable::Entphysicalentry : public ydk::Entity
{
    public:
        Entphysicalentry();
        ~Entphysicalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entphysicalindex; //type: int32
        ydk::YLeaf entphysicaldescr; //type: string
        ydk::YLeaf entphysicalvendortype; //type: string
        ydk::YLeaf entphysicalcontainedin; //type: int32
        ydk::YLeaf entphysicalclass; //type: Physicalclass
        ydk::YLeaf entphysicalparentrelpos; //type: int32
        ydk::YLeaf entphysicalname; //type: string
        ydk::YLeaf entphysicalhardwarerev; //type: string
        ydk::YLeaf entphysicalfirmwarerev; //type: string
        ydk::YLeaf entphysicalsoftwarerev; //type: string
        ydk::YLeaf entphysicalserialnum; //type: string
        ydk::YLeaf entphysicalmfgname; //type: string
        ydk::YLeaf entphysicalmodelname; //type: string
        ydk::YLeaf entphysicalalias; //type: string
        ydk::YLeaf entphysicalassetid; //type: string
        ydk::YLeaf entphysicalisfru; //type: boolean
        ydk::YLeaf entphysicalmfgdate; //type: string
        ydk::YLeaf entphysicaluris; //type: binary
        ydk::YLeaf ceentphysicalsecondserialnum; //type: string

}; // EntityMib::Entphysicaltable::Entphysicalentry


class EntityMib::Entlogicaltable : public ydk::Entity
{
    public:
        Entlogicaltable();
        ~Entlogicaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Entlogicalentry; //type: EntityMib::Entlogicaltable::Entlogicalentry

        std::vector<std::shared_ptr<ENTITY_MIB::EntityMib::Entlogicaltable::Entlogicalentry> > entlogicalentry;
        
}; // EntityMib::Entlogicaltable


class EntityMib::Entlogicaltable::Entlogicalentry : public ydk::Entity
{
    public:
        Entlogicalentry();
        ~Entlogicalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entlogicalindex; //type: int32
        ydk::YLeaf entlogicaldescr; //type: string
        ydk::YLeaf entlogicaltype; //type: string
        ydk::YLeaf entlogicalcommunity; //type: binary
        ydk::YLeaf entlogicaltaddress; //type: binary
        ydk::YLeaf entlogicaltdomain; //type: string
        ydk::YLeaf entlogicalcontextengineid; //type: binary
        ydk::YLeaf entlogicalcontextname; //type: string

}; // EntityMib::Entlogicaltable::Entlogicalentry


class EntityMib::Entlpmappingtable : public ydk::Entity
{
    public:
        Entlpmappingtable();
        ~Entlpmappingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Entlpmappingentry; //type: EntityMib::Entlpmappingtable::Entlpmappingentry

        std::vector<std::shared_ptr<ENTITY_MIB::EntityMib::Entlpmappingtable::Entlpmappingentry> > entlpmappingentry;
        
}; // EntityMib::Entlpmappingtable


class EntityMib::Entlpmappingtable::Entlpmappingentry : public ydk::Entity
{
    public:
        Entlpmappingentry();
        ~Entlpmappingentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entlogicaltable::Entlogicalentry::entlogicalindex)
        ydk::YLeaf entlogicalindex;
        ydk::YLeaf entlpphysicalindex; //type: int32

}; // EntityMib::Entlpmappingtable::Entlpmappingentry


class EntityMib::Entaliasmappingtable : public ydk::Entity
{
    public:
        Entaliasmappingtable();
        ~Entaliasmappingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Entaliasmappingentry; //type: EntityMib::Entaliasmappingtable::Entaliasmappingentry

        std::vector<std::shared_ptr<ENTITY_MIB::EntityMib::Entaliasmappingtable::Entaliasmappingentry> > entaliasmappingentry;
        
}; // EntityMib::Entaliasmappingtable


class EntityMib::Entaliasmappingtable::Entaliasmappingentry : public ydk::Entity
{
    public:
        Entaliasmappingentry();
        ~Entaliasmappingentry();

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
        ydk::YLeaf entaliaslogicalindexorzero; //type: int32
        ydk::YLeaf entaliasmappingidentifier; //type: string

}; // EntityMib::Entaliasmappingtable::Entaliasmappingentry


class EntityMib::Entphysicalcontainstable : public ydk::Entity
{
    public:
        Entphysicalcontainstable();
        ~Entphysicalcontainstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Entphysicalcontainsentry; //type: EntityMib::Entphysicalcontainstable::Entphysicalcontainsentry

        std::vector<std::shared_ptr<ENTITY_MIB::EntityMib::Entphysicalcontainstable::Entphysicalcontainsentry> > entphysicalcontainsentry;
        
}; // EntityMib::Entphysicalcontainstable


class EntityMib::Entphysicalcontainstable::Entphysicalcontainsentry : public ydk::Entity
{
    public:
        Entphysicalcontainsentry();
        ~Entphysicalcontainsentry();

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
        ydk::YLeaf entphysicalchildindex; //type: int32

}; // EntityMib::Entphysicalcontainstable::Entphysicalcontainsentry

class Physicalclass : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf chassis;
        static const ydk::Enum::YLeaf backplane;
        static const ydk::Enum::YLeaf container;
        static const ydk::Enum::YLeaf powerSupply;
        static const ydk::Enum::YLeaf fan;
        static const ydk::Enum::YLeaf sensor;
        static const ydk::Enum::YLeaf module;
        static const ydk::Enum::YLeaf port;
        static const ydk::Enum::YLeaf stack;
        static const ydk::Enum::YLeaf cpu;

};


}
}

#endif /* _ENTITY_MIB_ */

