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

        class Entitygeneral; //type: ENTITYMIB::Entitygeneral
        class Entphysicaltable; //type: ENTITYMIB::Entphysicaltable
        class Entlogicaltable; //type: ENTITYMIB::Entlogicaltable
        class Entlpmappingtable; //type: ENTITYMIB::Entlpmappingtable
        class Entaliasmappingtable; //type: ENTITYMIB::Entaliasmappingtable
        class Entphysicalcontainstable; //type: ENTITYMIB::Entphysicalcontainstable

        std::shared_ptr<cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entaliasmappingtable> entaliasmappingtable;
        std::shared_ptr<cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entitygeneral> entitygeneral;
        std::shared_ptr<cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entlogicaltable> entlogicaltable;
        std::shared_ptr<cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entlpmappingtable> entlpmappingtable;
        std::shared_ptr<cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicalcontainstable> entphysicalcontainstable;
        std::shared_ptr<cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable> entphysicaltable;
        
}; // ENTITYMIB


class ENTITYMIB::Entaliasmappingtable : public ydk::Entity
{
    public:
        Entaliasmappingtable();
        ~Entaliasmappingtable();

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

        class Entaliasmappingentry; //type: ENTITYMIB::Entaliasmappingtable::Entaliasmappingentry

        std::vector<std::shared_ptr<cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entaliasmappingtable::Entaliasmappingentry> > entaliasmappingentry;
        
}; // ENTITYMIB::Entaliasmappingtable


class ENTITYMIB::Entaliasmappingtable::Entaliasmappingentry : public ydk::Entity
{
    public:
        Entaliasmappingentry();
        ~Entaliasmappingentry();

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
        ydk::YLeaf entaliaslogicalindexorzero; //type: int32
        ydk::YLeaf entaliasmappingidentifier; //type: string

}; // ENTITYMIB::Entaliasmappingtable::Entaliasmappingentry


class ENTITYMIB::Entitygeneral : public ydk::Entity
{
    public:
        Entitygeneral();
        ~Entitygeneral();

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

}; // ENTITYMIB::Entitygeneral


class ENTITYMIB::Entlogicaltable : public ydk::Entity
{
    public:
        Entlogicaltable();
        ~Entlogicaltable();

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

        class Entlogicalentry; //type: ENTITYMIB::Entlogicaltable::Entlogicalentry

        std::vector<std::shared_ptr<cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entlogicaltable::Entlogicalentry> > entlogicalentry;
        
}; // ENTITYMIB::Entlogicaltable


class ENTITYMIB::Entlogicaltable::Entlogicalentry : public ydk::Entity
{
    public:
        Entlogicalentry();
        ~Entlogicalentry();

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

}; // ENTITYMIB::Entlogicaltable::Entlogicalentry


class ENTITYMIB::Entlpmappingtable : public ydk::Entity
{
    public:
        Entlpmappingtable();
        ~Entlpmappingtable();

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

        class Entlpmappingentry; //type: ENTITYMIB::Entlpmappingtable::Entlpmappingentry

        std::vector<std::shared_ptr<cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entlpmappingtable::Entlpmappingentry> > entlpmappingentry;
        
}; // ENTITYMIB::Entlpmappingtable


class ENTITYMIB::Entlpmappingtable::Entlpmappingentry : public ydk::Entity
{
    public:
        Entlpmappingentry();
        ~Entlpmappingentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entlogicaltable::Entlogicalentry::entlogicalindex)
        ydk::YLeaf entlogicalindex;
        ydk::YLeaf entlpphysicalindex; //type: int32

}; // ENTITYMIB::Entlpmappingtable::Entlpmappingentry


class ENTITYMIB::Entphysicalcontainstable : public ydk::Entity
{
    public:
        Entphysicalcontainstable();
        ~Entphysicalcontainstable();

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

        class Entphysicalcontainsentry; //type: ENTITYMIB::Entphysicalcontainstable::Entphysicalcontainsentry

        std::vector<std::shared_ptr<cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicalcontainstable::Entphysicalcontainsentry> > entphysicalcontainsentry;
        
}; // ENTITYMIB::Entphysicalcontainstable


class ENTITYMIB::Entphysicalcontainstable::Entphysicalcontainsentry : public ydk::Entity
{
    public:
        Entphysicalcontainsentry();
        ~Entphysicalcontainsentry();

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
        ydk::YLeaf entphysicalchildindex; //type: int32

}; // ENTITYMIB::Entphysicalcontainstable::Entphysicalcontainsentry


class ENTITYMIB::Entphysicaltable : public ydk::Entity
{
    public:
        Entphysicaltable();
        ~Entphysicaltable();

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

        class Entphysicalentry; //type: ENTITYMIB::Entphysicaltable::Entphysicalentry

        std::vector<std::shared_ptr<cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry> > entphysicalentry;
        
}; // ENTITYMIB::Entphysicaltable


class ENTITYMIB::Entphysicaltable::Entphysicalentry : public ydk::Entity
{
    public:
        Entphysicalentry();
        ~Entphysicalentry();

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

}; // ENTITYMIB::Entphysicaltable::Entphysicalentry

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

