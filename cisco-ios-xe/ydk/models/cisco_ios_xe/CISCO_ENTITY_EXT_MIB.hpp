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

        class CeExtPhysicalProcessorTable; //type: CISCOENTITYEXTMIB::CeExtPhysicalProcessorTable
        class CeExtConfigRegTable; //type: CISCOENTITYEXTMIB::CeExtConfigRegTable
        class CeExtEntityLEDTable; //type: CISCOENTITYEXTMIB::CeExtEntityLEDTable

        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_EXT_MIB::CISCOENTITYEXTMIB::CeExtPhysicalProcessorTable> ceextphysicalprocessortable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_EXT_MIB::CISCOENTITYEXTMIB::CeExtConfigRegTable> ceextconfigregtable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_EXT_MIB::CISCOENTITYEXTMIB::CeExtEntityLEDTable> ceextentityledtable;
        
}; // CISCOENTITYEXTMIB


class CISCOENTITYEXTMIB::CeExtPhysicalProcessorTable : public ydk::Entity
{
    public:
        CeExtPhysicalProcessorTable();
        ~CeExtPhysicalProcessorTable();

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

        class CeExtPhysicalProcessorEntry; //type: CISCOENTITYEXTMIB::CeExtPhysicalProcessorTable::CeExtPhysicalProcessorEntry

        ydk::YList ceextphysicalprocessorentry;
        
}; // CISCOENTITYEXTMIB::CeExtPhysicalProcessorTable


class CISCOENTITYEXTMIB::CeExtPhysicalProcessorTable::CeExtPhysicalProcessorEntry : public ydk::Entity
{
    public:
        CeExtPhysicalProcessorEntry();
        ~CeExtPhysicalProcessorEntry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf ceextprocessorram; //type: uint32
        ydk::YLeaf ceextnvramsize; //type: uint32
        ydk::YLeaf ceextnvramused; //type: uint32
        ydk::YLeaf ceextprocessorramoverflow; //type: uint32
        ydk::YLeaf ceexthcprocessorram; //type: uint64

}; // CISCOENTITYEXTMIB::CeExtPhysicalProcessorTable::CeExtPhysicalProcessorEntry


class CISCOENTITYEXTMIB::CeExtConfigRegTable : public ydk::Entity
{
    public:
        CeExtConfigRegTable();
        ~CeExtConfigRegTable();

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

        class CeExtConfigRegEntry; //type: CISCOENTITYEXTMIB::CeExtConfigRegTable::CeExtConfigRegEntry

        ydk::YList ceextconfigregentry;
        
}; // CISCOENTITYEXTMIB::CeExtConfigRegTable


class CISCOENTITYEXTMIB::CeExtConfigRegTable::CeExtConfigRegEntry : public ydk::Entity
{
    public:
        CeExtConfigRegEntry();
        ~CeExtConfigRegEntry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf ceextconfigregister; //type: string
        ydk::YLeaf ceextconfigregnext; //type: string
        ydk::YLeaf ceextsysbootimagelist; //type: binary
        ydk::YLeaf ceextkickstartimagelist; //type: binary

}; // CISCOENTITYEXTMIB::CeExtConfigRegTable::CeExtConfigRegEntry


class CISCOENTITYEXTMIB::CeExtEntityLEDTable : public ydk::Entity
{
    public:
        CeExtEntityLEDTable();
        ~CeExtEntityLEDTable();

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

        class CeExtEntityLEDEntry; //type: CISCOENTITYEXTMIB::CeExtEntityLEDTable::CeExtEntityLEDEntry

        ydk::YList ceextentityledentry;
        
}; // CISCOENTITYEXTMIB::CeExtEntityLEDTable


class CISCOENTITYEXTMIB::CeExtEntityLEDTable::CeExtEntityLEDEntry : public ydk::Entity
{
    public:
        CeExtEntityLEDEntry();
        ~CeExtEntityLEDEntry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf ceextentityledtype; //type: CeExtEntityLEDType
        ydk::YLeaf ceextentityledcolor; //type: CeExtEntityLEDColor
        class CeExtEntityLEDType;
        class CeExtEntityLEDColor;

}; // CISCOENTITYEXTMIB::CeExtEntityLEDTable::CeExtEntityLEDEntry

class CISCOENTITYEXTMIB::CeExtEntityLEDTable::CeExtEntityLEDEntry::CeExtEntityLEDType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf status;
        static const ydk::Enum::YLeaf system;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf power;
        static const ydk::Enum::YLeaf battery;

};

class CISCOENTITYEXTMIB::CeExtEntityLEDTable::CeExtEntityLEDEntry::CeExtEntityLEDColor : public ydk::Enum
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

