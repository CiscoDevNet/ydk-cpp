#ifndef _CISCO_ENTITY_EXT_MIB_
#define _CISCO_ENTITY_EXT_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_ENTITY_EXT_MIB {

class CiscoEntityExtMib : public ydk::Entity
{
    public:
        CiscoEntityExtMib();
        ~CiscoEntityExtMib();

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

        class Ceextphysicalprocessortable; //type: CiscoEntityExtMib::Ceextphysicalprocessortable
        class Ceextconfigregtable; //type: CiscoEntityExtMib::Ceextconfigregtable
        class Ceextentityledtable; //type: CiscoEntityExtMib::Ceextentityledtable

        std::shared_ptr<CISCO_ENTITY_EXT_MIB::CiscoEntityExtMib::Ceextconfigregtable> ceextconfigregtable;
        std::shared_ptr<CISCO_ENTITY_EXT_MIB::CiscoEntityExtMib::Ceextentityledtable> ceextentityledtable;
        std::shared_ptr<CISCO_ENTITY_EXT_MIB::CiscoEntityExtMib::Ceextphysicalprocessortable> ceextphysicalprocessortable;
        
}; // CiscoEntityExtMib


class CiscoEntityExtMib::Ceextphysicalprocessortable : public ydk::Entity
{
    public:
        Ceextphysicalprocessortable();
        ~Ceextphysicalprocessortable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ceextphysicalprocessorentry; //type: CiscoEntityExtMib::Ceextphysicalprocessortable::Ceextphysicalprocessorentry

        std::vector<std::shared_ptr<CISCO_ENTITY_EXT_MIB::CiscoEntityExtMib::Ceextphysicalprocessortable::Ceextphysicalprocessorentry> > ceextphysicalprocessorentry;
        
}; // CiscoEntityExtMib::Ceextphysicalprocessortable


class CiscoEntityExtMib::Ceextphysicalprocessortable::Ceextphysicalprocessorentry : public ydk::Entity
{
    public:
        Ceextphysicalprocessorentry();
        ~Ceextphysicalprocessorentry();

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
        ydk::YLeaf ceextprocessorram; //type: uint32
        ydk::YLeaf ceextnvramsize; //type: uint32
        ydk::YLeaf ceextnvramused; //type: uint32
        ydk::YLeaf ceextprocessorramoverflow; //type: uint32
        ydk::YLeaf ceexthcprocessorram; //type: uint64

}; // CiscoEntityExtMib::Ceextphysicalprocessortable::Ceextphysicalprocessorentry


class CiscoEntityExtMib::Ceextconfigregtable : public ydk::Entity
{
    public:
        Ceextconfigregtable();
        ~Ceextconfigregtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ceextconfigregentry; //type: CiscoEntityExtMib::Ceextconfigregtable::Ceextconfigregentry

        std::vector<std::shared_ptr<CISCO_ENTITY_EXT_MIB::CiscoEntityExtMib::Ceextconfigregtable::Ceextconfigregentry> > ceextconfigregentry;
        
}; // CiscoEntityExtMib::Ceextconfigregtable


class CiscoEntityExtMib::Ceextconfigregtable::Ceextconfigregentry : public ydk::Entity
{
    public:
        Ceextconfigregentry();
        ~Ceextconfigregentry();

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
        ydk::YLeaf ceextconfigregister; //type: string
        ydk::YLeaf ceextconfigregnext; //type: string
        ydk::YLeaf ceextsysbootimagelist; //type: binary
        ydk::YLeaf ceextkickstartimagelist; //type: binary

}; // CiscoEntityExtMib::Ceextconfigregtable::Ceextconfigregentry


class CiscoEntityExtMib::Ceextentityledtable : public ydk::Entity
{
    public:
        Ceextentityledtable();
        ~Ceextentityledtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ceextentityledentry; //type: CiscoEntityExtMib::Ceextentityledtable::Ceextentityledentry

        std::vector<std::shared_ptr<CISCO_ENTITY_EXT_MIB::CiscoEntityExtMib::Ceextentityledtable::Ceextentityledentry> > ceextentityledentry;
        
}; // CiscoEntityExtMib::Ceextentityledtable


class CiscoEntityExtMib::Ceextentityledtable::Ceextentityledentry : public ydk::Entity
{
    public:
        Ceextentityledentry();
        ~Ceextentityledentry();

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
        ydk::YLeaf ceextentityledtype; //type: Ceextentityledtype
        ydk::YLeaf ceextentityledcolor; //type: Ceextentityledcolor
        class Ceextentityledtype;
        class Ceextentityledcolor;

}; // CiscoEntityExtMib::Ceextentityledtable::Ceextentityledentry

class CiscoEntityExtMib::Ceextentityledtable::Ceextentityledentry::Ceextentityledtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf status;
        static const ydk::Enum::YLeaf system;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf power;
        static const ydk::Enum::YLeaf battery;

};

class CiscoEntityExtMib::Ceextentityledtable::Ceextentityledentry::Ceextentityledcolor : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf green;
        static const ydk::Enum::YLeaf amber;
        static const ydk::Enum::YLeaf red;

};


}
}

#endif /* _CISCO_ENTITY_EXT_MIB_ */

