#ifndef _CISCO_ENTITY_ALARM_MIB_
#define _CISCO_ENTITY_ALARM_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_ENTITY_ALARM_MIB {

class CISCOENTITYALARMMIB : public ydk::Entity
{
    public:
        CISCOENTITYALARMMIB();
        ~CISCOENTITYALARMMIB();

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

        class Cealarmmonitoring; //type: CISCOENTITYALARMMIB::Cealarmmonitoring
        class Cealarmhistory; //type: CISCOENTITYALARMMIB::Cealarmhistory
        class Cealarmfiltering; //type: CISCOENTITYALARMMIB::Cealarmfiltering
        class Cealarmdescrmaptable; //type: CISCOENTITYALARMMIB::Cealarmdescrmaptable
        class Cealarmdescrtable; //type: CISCOENTITYALARMMIB::Cealarmdescrtable
        class Cealarmtable; //type: CISCOENTITYALARMMIB::Cealarmtable
        class Cealarmhisttable; //type: CISCOENTITYALARMMIB::Cealarmhisttable
        class Cealarmfilterprofiletable; //type: CISCOENTITYALARMMIB::Cealarmfilterprofiletable

        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_ALARM_MIB::CISCOENTITYALARMMIB::Cealarmdescrmaptable> cealarmdescrmaptable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_ALARM_MIB::CISCOENTITYALARMMIB::Cealarmdescrtable> cealarmdescrtable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_ALARM_MIB::CISCOENTITYALARMMIB::Cealarmfiltering> cealarmfiltering;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_ALARM_MIB::CISCOENTITYALARMMIB::Cealarmfilterprofiletable> cealarmfilterprofiletable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_ALARM_MIB::CISCOENTITYALARMMIB::Cealarmhistory> cealarmhistory;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_ALARM_MIB::CISCOENTITYALARMMIB::Cealarmhisttable> cealarmhisttable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_ALARM_MIB::CISCOENTITYALARMMIB::Cealarmmonitoring> cealarmmonitoring;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_ALARM_MIB::CISCOENTITYALARMMIB::Cealarmtable> cealarmtable;
        
}; // CISCOENTITYALARMMIB


class CISCOENTITYALARMMIB::Cealarmdescrmaptable : public ydk::Entity
{
    public:
        Cealarmdescrmaptable();
        ~Cealarmdescrmaptable();

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

        class Cealarmdescrmapentry; //type: CISCOENTITYALARMMIB::Cealarmdescrmaptable::Cealarmdescrmapentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_ALARM_MIB::CISCOENTITYALARMMIB::Cealarmdescrmaptable::Cealarmdescrmapentry> > cealarmdescrmapentry;
        
}; // CISCOENTITYALARMMIB::Cealarmdescrmaptable


class CISCOENTITYALARMMIB::Cealarmdescrmaptable::Cealarmdescrmapentry : public ydk::Entity
{
    public:
        Cealarmdescrmapentry();
        ~Cealarmdescrmapentry();

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

        ydk::YLeaf cealarmdescrindex; //type: uint32
        ydk::YLeaf cealarmdescrvendortype; //type: string

}; // CISCOENTITYALARMMIB::Cealarmdescrmaptable::Cealarmdescrmapentry


class CISCOENTITYALARMMIB::Cealarmdescrtable : public ydk::Entity
{
    public:
        Cealarmdescrtable();
        ~Cealarmdescrtable();

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

        class Cealarmdescrentry; //type: CISCOENTITYALARMMIB::Cealarmdescrtable::Cealarmdescrentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_ALARM_MIB::CISCOENTITYALARMMIB::Cealarmdescrtable::Cealarmdescrentry> > cealarmdescrentry;
        
}; // CISCOENTITYALARMMIB::Cealarmdescrtable


class CISCOENTITYALARMMIB::Cealarmdescrtable::Cealarmdescrentry : public ydk::Entity
{
    public:
        Cealarmdescrentry();
        ~Cealarmdescrentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_ENTITY_ALARM_MIB::CISCOENTITYALARMMIB::Cealarmdescrmaptable::Cealarmdescrmapentry::cealarmdescrindex)
        ydk::YLeaf cealarmdescrindex;
        ydk::YLeaf cealarmdescralarmtype; //type: int32
        ydk::YLeaf cealarmdescrseverity; //type: int32
        ydk::YLeaf cealarmdescrtext; //type: string

}; // CISCOENTITYALARMMIB::Cealarmdescrtable::Cealarmdescrentry


class CISCOENTITYALARMMIB::Cealarmfiltering : public ydk::Entity
{
    public:
        Cealarmfiltering();
        ~Cealarmfiltering();

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

        ydk::YLeaf cealarmnotifiesenable; //type: int32
        ydk::YLeaf cealarmsyslogenable; //type: int32
        ydk::YLeaf cealarmfilterprofileindexnext; //type: uint32

}; // CISCOENTITYALARMMIB::Cealarmfiltering


class CISCOENTITYALARMMIB::Cealarmfilterprofiletable : public ydk::Entity
{
    public:
        Cealarmfilterprofiletable();
        ~Cealarmfilterprofiletable();

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

        class Cealarmfilterprofileentry; //type: CISCOENTITYALARMMIB::Cealarmfilterprofiletable::Cealarmfilterprofileentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_ALARM_MIB::CISCOENTITYALARMMIB::Cealarmfilterprofiletable::Cealarmfilterprofileentry> > cealarmfilterprofileentry;
        
}; // CISCOENTITYALARMMIB::Cealarmfilterprofiletable


class CISCOENTITYALARMMIB::Cealarmfilterprofiletable::Cealarmfilterprofileentry : public ydk::Entity
{
    public:
        Cealarmfilterprofileentry();
        ~Cealarmfilterprofileentry();

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

        ydk::YLeaf cealarmfilterindex; //type: uint32
        ydk::YLeaf cealarmfilterstatus; //type: RowStatus
        ydk::YLeaf cealarmfilteralias; //type: string
        ydk::YLeaf cealarmfilteralarmsenabled; //type: binary
        ydk::YLeaf cealarmfilternotifiesenabled; //type: binary
        ydk::YLeaf cealarmfiltersyslogenabled; //type: binary

}; // CISCOENTITYALARMMIB::Cealarmfilterprofiletable::Cealarmfilterprofileentry


class CISCOENTITYALARMMIB::Cealarmhistory : public ydk::Entity
{
    public:
        Cealarmhistory();
        ~Cealarmhistory();

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

        ydk::YLeaf cealarmhisttablesize; //type: int32
        ydk::YLeaf cealarmhistlastindex; //type: uint32

}; // CISCOENTITYALARMMIB::Cealarmhistory


class CISCOENTITYALARMMIB::Cealarmhisttable : public ydk::Entity
{
    public:
        Cealarmhisttable();
        ~Cealarmhisttable();

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

        class Cealarmhistentry; //type: CISCOENTITYALARMMIB::Cealarmhisttable::Cealarmhistentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_ALARM_MIB::CISCOENTITYALARMMIB::Cealarmhisttable::Cealarmhistentry> > cealarmhistentry;
        
}; // CISCOENTITYALARMMIB::Cealarmhisttable


class CISCOENTITYALARMMIB::Cealarmhisttable::Cealarmhistentry : public ydk::Entity
{
    public:
        Cealarmhistentry();
        ~Cealarmhistentry();

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

        ydk::YLeaf cealarmhistindex; //type: uint32
        ydk::YLeaf cealarmhisttype; //type: Cealarmhisttype
        ydk::YLeaf cealarmhistentphysicalindex; //type: int32
        ydk::YLeaf cealarmhistalarmtype; //type: int32
        ydk::YLeaf cealarmhistseverity; //type: AlarmSeverity
        ydk::YLeaf cealarmhisttimestamp; //type: uint32
        class Cealarmhisttype;

}; // CISCOENTITYALARMMIB::Cealarmhisttable::Cealarmhistentry


class CISCOENTITYALARMMIB::Cealarmmonitoring : public ydk::Entity
{
    public:
        Cealarmmonitoring();
        ~Cealarmmonitoring();

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

        ydk::YLeaf cealarmcriticalcount; //type: uint32
        ydk::YLeaf cealarmmajorcount; //type: uint32
        ydk::YLeaf cealarmminorcount; //type: uint32
        ydk::YLeaf cealarmcutoff; //type: boolean

}; // CISCOENTITYALARMMIB::Cealarmmonitoring


class CISCOENTITYALARMMIB::Cealarmtable : public ydk::Entity
{
    public:
        Cealarmtable();
        ~Cealarmtable();

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

        class Cealarmentry; //type: CISCOENTITYALARMMIB::Cealarmtable::Cealarmentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_ALARM_MIB::CISCOENTITYALARMMIB::Cealarmtable::Cealarmentry> > cealarmentry;
        
}; // CISCOENTITYALARMMIB::Cealarmtable


class CISCOENTITYALARMMIB::Cealarmtable::Cealarmentry : public ydk::Entity
{
    public:
        Cealarmentry();
        ~Cealarmentry();

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
        ydk::YLeaf cealarmfilterprofile; //type: uint32
        ydk::YLeaf cealarmseverity; //type: int32
        ydk::YLeaf cealarmlist; //type: binary

}; // CISCOENTITYALARMMIB::Cealarmtable::Cealarmentry

class AlarmSeverity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf major;
        static const ydk::Enum::YLeaf minor;
        static const ydk::Enum::YLeaf info;

};

class CISCOENTITYALARMMIB::Cealarmhisttable::Cealarmhistentry::Cealarmhisttype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf asserted;
        static const ydk::Enum::YLeaf cleared;

};


}
}

#endif /* _CISCO_ENTITY_ALARM_MIB_ */

