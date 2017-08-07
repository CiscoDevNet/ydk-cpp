#ifndef _CISCO_ENTITY_ALARM_MIB_
#define _CISCO_ENTITY_ALARM_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_ENTITY_ALARM_MIB {

class CiscoEntityAlarmMib : public ydk::Entity
{
    public:
        CiscoEntityAlarmMib();
        ~CiscoEntityAlarmMib();

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

        class Cealarmmonitoring; //type: CiscoEntityAlarmMib::Cealarmmonitoring
        class Cealarmhistory; //type: CiscoEntityAlarmMib::Cealarmhistory
        class Cealarmfiltering; //type: CiscoEntityAlarmMib::Cealarmfiltering
        class Cealarmdescrmaptable; //type: CiscoEntityAlarmMib::Cealarmdescrmaptable
        class Cealarmdescrtable; //type: CiscoEntityAlarmMib::Cealarmdescrtable
        class Cealarmtable; //type: CiscoEntityAlarmMib::Cealarmtable
        class Cealarmhisttable; //type: CiscoEntityAlarmMib::Cealarmhisttable
        class Cealarmfilterprofiletable; //type: CiscoEntityAlarmMib::Cealarmfilterprofiletable

        std::shared_ptr<CISCO_ENTITY_ALARM_MIB::CiscoEntityAlarmMib::Cealarmdescrmaptable> cealarmdescrmaptable;
        std::shared_ptr<CISCO_ENTITY_ALARM_MIB::CiscoEntityAlarmMib::Cealarmdescrtable> cealarmdescrtable;
        std::shared_ptr<CISCO_ENTITY_ALARM_MIB::CiscoEntityAlarmMib::Cealarmfiltering> cealarmfiltering;
        std::shared_ptr<CISCO_ENTITY_ALARM_MIB::CiscoEntityAlarmMib::Cealarmfilterprofiletable> cealarmfilterprofiletable;
        std::shared_ptr<CISCO_ENTITY_ALARM_MIB::CiscoEntityAlarmMib::Cealarmhistory> cealarmhistory;
        std::shared_ptr<CISCO_ENTITY_ALARM_MIB::CiscoEntityAlarmMib::Cealarmhisttable> cealarmhisttable;
        std::shared_ptr<CISCO_ENTITY_ALARM_MIB::CiscoEntityAlarmMib::Cealarmmonitoring> cealarmmonitoring;
        std::shared_ptr<CISCO_ENTITY_ALARM_MIB::CiscoEntityAlarmMib::Cealarmtable> cealarmtable;
        
}; // CiscoEntityAlarmMib


class CiscoEntityAlarmMib::Cealarmmonitoring : public ydk::Entity
{
    public:
        Cealarmmonitoring();
        ~Cealarmmonitoring();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cealarmcriticalcount; //type: uint32
        ydk::YLeaf cealarmmajorcount; //type: uint32
        ydk::YLeaf cealarmminorcount; //type: uint32
        ydk::YLeaf cealarmcutoff; //type: boolean

}; // CiscoEntityAlarmMib::Cealarmmonitoring


class CiscoEntityAlarmMib::Cealarmhistory : public ydk::Entity
{
    public:
        Cealarmhistory();
        ~Cealarmhistory();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cealarmhisttablesize; //type: int32
        ydk::YLeaf cealarmhistlastindex; //type: uint32

}; // CiscoEntityAlarmMib::Cealarmhistory


class CiscoEntityAlarmMib::Cealarmfiltering : public ydk::Entity
{
    public:
        Cealarmfiltering();
        ~Cealarmfiltering();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cealarmnotifiesenable; //type: int32
        ydk::YLeaf cealarmsyslogenable; //type: int32
        ydk::YLeaf cealarmfilterprofileindexnext; //type: uint32

}; // CiscoEntityAlarmMib::Cealarmfiltering


class CiscoEntityAlarmMib::Cealarmdescrmaptable : public ydk::Entity
{
    public:
        Cealarmdescrmaptable();
        ~Cealarmdescrmaptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cealarmdescrmapentry; //type: CiscoEntityAlarmMib::Cealarmdescrmaptable::Cealarmdescrmapentry

        std::vector<std::shared_ptr<CISCO_ENTITY_ALARM_MIB::CiscoEntityAlarmMib::Cealarmdescrmaptable::Cealarmdescrmapentry> > cealarmdescrmapentry;
        
}; // CiscoEntityAlarmMib::Cealarmdescrmaptable


class CiscoEntityAlarmMib::Cealarmdescrmaptable::Cealarmdescrmapentry : public ydk::Entity
{
    public:
        Cealarmdescrmapentry();
        ~Cealarmdescrmapentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cealarmdescrindex; //type: uint32
        ydk::YLeaf cealarmdescrvendortype; //type: string

}; // CiscoEntityAlarmMib::Cealarmdescrmaptable::Cealarmdescrmapentry


class CiscoEntityAlarmMib::Cealarmdescrtable : public ydk::Entity
{
    public:
        Cealarmdescrtable();
        ~Cealarmdescrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cealarmdescrentry; //type: CiscoEntityAlarmMib::Cealarmdescrtable::Cealarmdescrentry

        std::vector<std::shared_ptr<CISCO_ENTITY_ALARM_MIB::CiscoEntityAlarmMib::Cealarmdescrtable::Cealarmdescrentry> > cealarmdescrentry;
        
}; // CiscoEntityAlarmMib::Cealarmdescrtable


class CiscoEntityAlarmMib::Cealarmdescrtable::Cealarmdescrentry : public ydk::Entity
{
    public:
        Cealarmdescrentry();
        ~Cealarmdescrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_ENTITY_ALARM_MIB::CiscoEntityAlarmMib::Cealarmdescrmaptable::Cealarmdescrmapentry::cealarmdescrindex)
        ydk::YLeaf cealarmdescrindex;
        ydk::YLeaf cealarmdescralarmtype; //type: int32
        ydk::YLeaf cealarmdescrseverity; //type: int32
        ydk::YLeaf cealarmdescrtext; //type: string

}; // CiscoEntityAlarmMib::Cealarmdescrtable::Cealarmdescrentry


class CiscoEntityAlarmMib::Cealarmtable : public ydk::Entity
{
    public:
        Cealarmtable();
        ~Cealarmtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cealarmentry; //type: CiscoEntityAlarmMib::Cealarmtable::Cealarmentry

        std::vector<std::shared_ptr<CISCO_ENTITY_ALARM_MIB::CiscoEntityAlarmMib::Cealarmtable::Cealarmentry> > cealarmentry;
        
}; // CiscoEntityAlarmMib::Cealarmtable


class CiscoEntityAlarmMib::Cealarmtable::Cealarmentry : public ydk::Entity
{
    public:
        Cealarmentry();
        ~Cealarmentry();

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
        ydk::YLeaf cealarmfilterprofile; //type: uint32
        ydk::YLeaf cealarmseverity; //type: int32
        ydk::YLeaf cealarmlist; //type: binary

}; // CiscoEntityAlarmMib::Cealarmtable::Cealarmentry


class CiscoEntityAlarmMib::Cealarmhisttable : public ydk::Entity
{
    public:
        Cealarmhisttable();
        ~Cealarmhisttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cealarmhistentry; //type: CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry

        std::vector<std::shared_ptr<CISCO_ENTITY_ALARM_MIB::CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry> > cealarmhistentry;
        
}; // CiscoEntityAlarmMib::Cealarmhisttable


class CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry : public ydk::Entity
{
    public:
        Cealarmhistentry();
        ~Cealarmhistentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cealarmhistindex; //type: uint32
        ydk::YLeaf cealarmhisttype; //type: Cealarmhisttype
        ydk::YLeaf cealarmhistentphysicalindex; //type: int32
        ydk::YLeaf cealarmhistalarmtype; //type: int32
        ydk::YLeaf cealarmhistseverity; //type: Alarmseverity
        ydk::YLeaf cealarmhisttimestamp; //type: uint32
        class Cealarmhisttype;

}; // CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry


class CiscoEntityAlarmMib::Cealarmfilterprofiletable : public ydk::Entity
{
    public:
        Cealarmfilterprofiletable();
        ~Cealarmfilterprofiletable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cealarmfilterprofileentry; //type: CiscoEntityAlarmMib::Cealarmfilterprofiletable::Cealarmfilterprofileentry

        std::vector<std::shared_ptr<CISCO_ENTITY_ALARM_MIB::CiscoEntityAlarmMib::Cealarmfilterprofiletable::Cealarmfilterprofileentry> > cealarmfilterprofileentry;
        
}; // CiscoEntityAlarmMib::Cealarmfilterprofiletable


class CiscoEntityAlarmMib::Cealarmfilterprofiletable::Cealarmfilterprofileentry : public ydk::Entity
{
    public:
        Cealarmfilterprofileentry();
        ~Cealarmfilterprofileentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cealarmfilterindex; //type: uint32
        ydk::YLeaf cealarmfilterstatus; //type: Rowstatus
        ydk::YLeaf cealarmfilteralias; //type: string
        ydk::YLeaf cealarmfilteralarmsenabled; //type: binary
        ydk::YLeaf cealarmfilternotifiesenabled; //type: binary
        ydk::YLeaf cealarmfiltersyslogenabled; //type: binary

}; // CiscoEntityAlarmMib::Cealarmfilterprofiletable::Cealarmfilterprofileentry

class Alarmseverity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf major;
        static const ydk::Enum::YLeaf minor;
        static const ydk::Enum::YLeaf info;

};

class CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry::Cealarmhisttype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf asserted;
        static const ydk::Enum::YLeaf cleared;

};


}
}

#endif /* _CISCO_ENTITY_ALARM_MIB_ */

