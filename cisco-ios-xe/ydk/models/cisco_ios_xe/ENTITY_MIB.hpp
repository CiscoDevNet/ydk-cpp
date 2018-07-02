#ifndef _ENTITY_MIB_
#define _ENTITY_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace ENTITY_MIB {

class ENTITYMIB : public ydk::Entity
{
    public:
        ENTITYMIB();
        ~ENTITYMIB();

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

        class EntityGeneral; //type: ENTITYMIB::EntityGeneral
        class EntPhysicalTable; //type: ENTITYMIB::EntPhysicalTable
        class EntLogicalTable; //type: ENTITYMIB::EntLogicalTable
        class EntLPMappingTable; //type: ENTITYMIB::EntLPMappingTable
        class EntAliasMappingTable; //type: ENTITYMIB::EntAliasMappingTable
        class EntPhysicalContainsTable; //type: ENTITYMIB::EntPhysicalContainsTable

        std::shared_ptr<cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntityGeneral> entitygeneral;
        std::shared_ptr<cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable> entphysicaltable;
        std::shared_ptr<cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntLogicalTable> entlogicaltable;
        std::shared_ptr<cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntLPMappingTable> entlpmappingtable;
        std::shared_ptr<cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntAliasMappingTable> entaliasmappingtable;
        std::shared_ptr<cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalContainsTable> entphysicalcontainstable;
        
}; // ENTITYMIB


class ENTITYMIB::EntityGeneral : public ydk::Entity
{
    public:
        EntityGeneral();
        ~EntityGeneral();

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

        ydk::YLeaf entlastchangetime; //type: uint32

}; // ENTITYMIB::EntityGeneral


class ENTITYMIB::EntPhysicalTable : public ydk::Entity
{
    public:
        EntPhysicalTable();
        ~EntPhysicalTable();

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

        class EntPhysicalEntry; //type: ENTITYMIB::EntPhysicalTable::EntPhysicalEntry

        ydk::YList entphysicalentry;
        
}; // ENTITYMIB::EntPhysicalTable


class ENTITYMIB::EntPhysicalTable::EntPhysicalEntry : public ydk::Entity
{
    public:
        EntPhysicalEntry();
        ~EntPhysicalEntry();

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

        ydk::YLeaf entphysicalindex; //type: int32
        ydk::YLeaf entphysicaldescr; //type: string
        ydk::YLeaf entphysicalvendortype; //type: string
        ydk::YLeaf entphysicalcontainedin; //type: int32
        ydk::YLeaf entphysicalclass; //type: PhysicalClass
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

}; // ENTITYMIB::EntPhysicalTable::EntPhysicalEntry


class ENTITYMIB::EntLogicalTable : public ydk::Entity
{
    public:
        EntLogicalTable();
        ~EntLogicalTable();

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

        class EntLogicalEntry; //type: ENTITYMIB::EntLogicalTable::EntLogicalEntry

        ydk::YList entlogicalentry;
        
}; // ENTITYMIB::EntLogicalTable


class ENTITYMIB::EntLogicalTable::EntLogicalEntry : public ydk::Entity
{
    public:
        EntLogicalEntry();
        ~EntLogicalEntry();

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

        ydk::YLeaf entlogicalindex; //type: int32
        ydk::YLeaf entlogicaldescr; //type: string
        ydk::YLeaf entlogicaltype; //type: string
        ydk::YLeaf entlogicalcommunity; //type: binary
        ydk::YLeaf entlogicaltaddress; //type: binary
        ydk::YLeaf entlogicaltdomain; //type: string
        ydk::YLeaf entlogicalcontextengineid; //type: binary
        ydk::YLeaf entlogicalcontextname; //type: string

}; // ENTITYMIB::EntLogicalTable::EntLogicalEntry


class ENTITYMIB::EntLPMappingTable : public ydk::Entity
{
    public:
        EntLPMappingTable();
        ~EntLPMappingTable();

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

        class EntLPMappingEntry; //type: ENTITYMIB::EntLPMappingTable::EntLPMappingEntry

        ydk::YList entlpmappingentry;
        
}; // ENTITYMIB::EntLPMappingTable


class ENTITYMIB::EntLPMappingTable::EntLPMappingEntry : public ydk::Entity
{
    public:
        EntLPMappingEntry();
        ~EntLPMappingEntry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntLogicalTable::EntLogicalEntry::entlogicalindex)
        ydk::YLeaf entlogicalindex;
        ydk::YLeaf entlpphysicalindex; //type: int32

}; // ENTITYMIB::EntLPMappingTable::EntLPMappingEntry


class ENTITYMIB::EntAliasMappingTable : public ydk::Entity
{
    public:
        EntAliasMappingTable();
        ~EntAliasMappingTable();

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

        class EntAliasMappingEntry; //type: ENTITYMIB::EntAliasMappingTable::EntAliasMappingEntry

        ydk::YList entaliasmappingentry;
        
}; // ENTITYMIB::EntAliasMappingTable


class ENTITYMIB::EntAliasMappingTable::EntAliasMappingEntry : public ydk::Entity
{
    public:
        EntAliasMappingEntry();
        ~EntAliasMappingEntry();

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
        ydk::YLeaf entaliaslogicalindexorzero; //type: int32
        ydk::YLeaf entaliasmappingidentifier; //type: string

}; // ENTITYMIB::EntAliasMappingTable::EntAliasMappingEntry


class ENTITYMIB::EntPhysicalContainsTable : public ydk::Entity
{
    public:
        EntPhysicalContainsTable();
        ~EntPhysicalContainsTable();

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

        class EntPhysicalContainsEntry; //type: ENTITYMIB::EntPhysicalContainsTable::EntPhysicalContainsEntry

        ydk::YList entphysicalcontainsentry;
        
}; // ENTITYMIB::EntPhysicalContainsTable


class ENTITYMIB::EntPhysicalContainsTable::EntPhysicalContainsEntry : public ydk::Entity
{
    public:
        EntPhysicalContainsEntry();
        ~EntPhysicalContainsEntry();

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
        ydk::YLeaf entphysicalchildindex; //type: int32

}; // ENTITYMIB::EntPhysicalContainsTable::EntPhysicalContainsEntry

class PhysicalClass : public ydk::Enum
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

