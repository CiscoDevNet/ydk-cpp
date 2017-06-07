#ifndef _CISCO_ENTITY_EXT_MIB_
#define _CISCO_ENTITY_EXT_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_ENTITY_EXT_MIB {

class CiscoEntityExtMib : public Entity
{
    public:
        CiscoEntityExtMib();
        ~CiscoEntityExtMib();

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

        class Ceextphysicalprocessortable; //type: CiscoEntityExtMib::Ceextphysicalprocessortable
        class Ceextconfigregtable; //type: CiscoEntityExtMib::Ceextconfigregtable
        class Ceextentityledtable; //type: CiscoEntityExtMib::Ceextentityledtable

        std::shared_ptr<CISCO_ENTITY_EXT_MIB::CiscoEntityExtMib::Ceextconfigregtable> ceextconfigregtable;
        std::shared_ptr<CISCO_ENTITY_EXT_MIB::CiscoEntityExtMib::Ceextentityledtable> ceextentityledtable;
        std::shared_ptr<CISCO_ENTITY_EXT_MIB::CiscoEntityExtMib::Ceextphysicalprocessortable> ceextphysicalprocessortable;
        
}; // CiscoEntityExtMib


class CiscoEntityExtMib::Ceextphysicalprocessortable : public Entity
{
    public:
        Ceextphysicalprocessortable();
        ~Ceextphysicalprocessortable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ceextphysicalprocessorentry; //type: CiscoEntityExtMib::Ceextphysicalprocessortable::Ceextphysicalprocessorentry

        std::vector<std::shared_ptr<CISCO_ENTITY_EXT_MIB::CiscoEntityExtMib::Ceextphysicalprocessortable::Ceextphysicalprocessorentry> > ceextphysicalprocessorentry;
        
}; // CiscoEntityExtMib::Ceextphysicalprocessortable


class CiscoEntityExtMib::Ceextphysicalprocessortable::Ceextphysicalprocessorentry : public Entity
{
    public:
        Ceextphysicalprocessorentry();
        ~Ceextphysicalprocessorentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf ceextprocessorram; //type: uint32
        YLeaf ceextnvramsize; //type: uint32
        YLeaf ceextnvramused; //type: uint32
        YLeaf ceextprocessorramoverflow; //type: uint32
        YLeaf ceexthcprocessorram; //type: uint64

}; // CiscoEntityExtMib::Ceextphysicalprocessortable::Ceextphysicalprocessorentry


class CiscoEntityExtMib::Ceextconfigregtable : public Entity
{
    public:
        Ceextconfigregtable();
        ~Ceextconfigregtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ceextconfigregentry; //type: CiscoEntityExtMib::Ceextconfigregtable::Ceextconfigregentry

        std::vector<std::shared_ptr<CISCO_ENTITY_EXT_MIB::CiscoEntityExtMib::Ceextconfigregtable::Ceextconfigregentry> > ceextconfigregentry;
        
}; // CiscoEntityExtMib::Ceextconfigregtable


class CiscoEntityExtMib::Ceextconfigregtable::Ceextconfigregentry : public Entity
{
    public:
        Ceextconfigregentry();
        ~Ceextconfigregentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf ceextconfigregister; //type: string
        YLeaf ceextconfigregnext; //type: string
        YLeaf ceextsysbootimagelist; //type: binary
        YLeaf ceextkickstartimagelist; //type: binary

}; // CiscoEntityExtMib::Ceextconfigregtable::Ceextconfigregentry


class CiscoEntityExtMib::Ceextentityledtable : public Entity
{
    public:
        Ceextentityledtable();
        ~Ceextentityledtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ceextentityledentry; //type: CiscoEntityExtMib::Ceextentityledtable::Ceextentityledentry

        std::vector<std::shared_ptr<CISCO_ENTITY_EXT_MIB::CiscoEntityExtMib::Ceextentityledtable::Ceextentityledentry> > ceextentityledentry;
        
}; // CiscoEntityExtMib::Ceextentityledtable


class CiscoEntityExtMib::Ceextentityledtable::Ceextentityledentry : public Entity
{
    public:
        Ceextentityledentry();
        ~Ceextentityledentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf ceextentityledtype; //type: CeextentityledtypeEnum
        YLeaf ceextentityledcolor; //type: CeextentityledcolorEnum
        class CeextentityledtypeEnum;
        class CeextentityledcolorEnum;

}; // CiscoEntityExtMib::Ceextentityledtable::Ceextentityledentry

class CiscoEntityExtMib::Ceextentityledtable::Ceextentityledentry::CeextentityledtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf status;
        static const Enum::YLeaf system;
        static const Enum::YLeaf active;
        static const Enum::YLeaf power;
        static const Enum::YLeaf battery;

};

class CiscoEntityExtMib::Ceextentityledtable::Ceextentityledentry::CeextentityledcolorEnum : public Enum
{
    public:
        static const Enum::YLeaf off;
        static const Enum::YLeaf green;
        static const Enum::YLeaf amber;
        static const Enum::YLeaf red;

};


}
}

#endif /* _CISCO_ENTITY_EXT_MIB_ */

