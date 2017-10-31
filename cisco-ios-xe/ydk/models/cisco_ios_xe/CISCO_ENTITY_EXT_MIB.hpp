#ifndef _CISCO_ENTITY_EXT_MIB_
#define _CISCO_ENTITY_EXT_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_ENTITY_EXT_MIB {

class CISCOENTITYEXTMIB : public ydk::Entity
{
    public:
        CISCOENTITYEXTMIB();
        ~CISCOENTITYEXTMIB();

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

        class Ceextphysicalprocessortable; //type: CISCOENTITYEXTMIB::Ceextphysicalprocessortable
        class Ceextconfigregtable; //type: CISCOENTITYEXTMIB::Ceextconfigregtable
        class Ceextentityledtable; //type: CISCOENTITYEXTMIB::Ceextentityledtable

        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_EXT_MIB::CISCOENTITYEXTMIB::Ceextphysicalprocessortable> ceextphysicalprocessortable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_EXT_MIB::CISCOENTITYEXTMIB::Ceextconfigregtable> ceextconfigregtable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_EXT_MIB::CISCOENTITYEXTMIB::Ceextentityledtable> ceextentityledtable;
        
}; // CISCOENTITYEXTMIB


class CISCOENTITYEXTMIB::Ceextphysicalprocessortable : public ydk::Entity
{
    public:
        Ceextphysicalprocessortable();
        ~Ceextphysicalprocessortable();

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

        class Ceextphysicalprocessorentry; //type: CISCOENTITYEXTMIB::Ceextphysicalprocessortable::Ceextphysicalprocessorentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_EXT_MIB::CISCOENTITYEXTMIB::Ceextphysicalprocessortable::Ceextphysicalprocessorentry> > ceextphysicalprocessorentry;
        
}; // CISCOENTITYEXTMIB::Ceextphysicalprocessortable


class CISCOENTITYEXTMIB::Ceextphysicalprocessortable::Ceextphysicalprocessorentry : public ydk::Entity
{
    public:
        Ceextphysicalprocessorentry();
        ~Ceextphysicalprocessorentry();

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
        ydk::YLeaf ceextprocessorram; //type: uint32
        ydk::YLeaf ceextnvramsize; //type: uint32
        ydk::YLeaf ceextnvramused; //type: uint32
        ydk::YLeaf ceextprocessorramoverflow; //type: uint32
        ydk::YLeaf ceexthcprocessorram; //type: uint64

}; // CISCOENTITYEXTMIB::Ceextphysicalprocessortable::Ceextphysicalprocessorentry


class CISCOENTITYEXTMIB::Ceextconfigregtable : public ydk::Entity
{
    public:
        Ceextconfigregtable();
        ~Ceextconfigregtable();

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

        class Ceextconfigregentry; //type: CISCOENTITYEXTMIB::Ceextconfigregtable::Ceextconfigregentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_EXT_MIB::CISCOENTITYEXTMIB::Ceextconfigregtable::Ceextconfigregentry> > ceextconfigregentry;
        
}; // CISCOENTITYEXTMIB::Ceextconfigregtable


class CISCOENTITYEXTMIB::Ceextconfigregtable::Ceextconfigregentry : public ydk::Entity
{
    public:
        Ceextconfigregentry();
        ~Ceextconfigregentry();

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
        ydk::YLeaf ceextconfigregister; //type: string
        ydk::YLeaf ceextconfigregnext; //type: string
        ydk::YLeaf ceextsysbootimagelist; //type: binary
        ydk::YLeaf ceextkickstartimagelist; //type: binary

}; // CISCOENTITYEXTMIB::Ceextconfigregtable::Ceextconfigregentry


class CISCOENTITYEXTMIB::Ceextentityledtable : public ydk::Entity
{
    public:
        Ceextentityledtable();
        ~Ceextentityledtable();

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

        class Ceextentityledentry; //type: CISCOENTITYEXTMIB::Ceextentityledtable::Ceextentityledentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_EXT_MIB::CISCOENTITYEXTMIB::Ceextentityledtable::Ceextentityledentry> > ceextentityledentry;
        
}; // CISCOENTITYEXTMIB::Ceextentityledtable


class CISCOENTITYEXTMIB::Ceextentityledtable::Ceextentityledentry : public ydk::Entity
{
    public:
        Ceextentityledentry();
        ~Ceextentityledentry();

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
        ydk::YLeaf ceextentityledtype; //type: Ceextentityledtype
        ydk::YLeaf ceextentityledcolor; //type: Ceextentityledcolor
        class Ceextentityledtype;
        class Ceextentityledcolor;

}; // CISCOENTITYEXTMIB::Ceextentityledtable::Ceextentityledentry

class CISCOENTITYEXTMIB::Ceextentityledtable::Ceextentityledentry::Ceextentityledtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf status;
        static const ydk::Enum::YLeaf system;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf power;
        static const ydk::Enum::YLeaf battery;

};

class CISCOENTITYEXTMIB::Ceextentityledtable::Ceextentityledentry::Ceextentityledcolor : public ydk::Enum
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

