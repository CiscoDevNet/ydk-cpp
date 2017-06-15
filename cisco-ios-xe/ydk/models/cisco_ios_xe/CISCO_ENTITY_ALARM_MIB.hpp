#ifndef _CISCO_ENTITY_ALARM_MIB_
#define _CISCO_ENTITY_ALARM_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_ENTITY_ALARM_MIB {

class CiscoEntityAlarmMib : public Entity
{
    public:
        CiscoEntityAlarmMib();
        ~CiscoEntityAlarmMib();

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

        class Cealarmmonitoring; //type: CiscoEntityAlarmMib::Cealarmmonitoring
        class Cealarmhistory; //type: CiscoEntityAlarmMib::Cealarmhistory
        class Cealarmfiltering; //type: CiscoEntityAlarmMib::Cealarmfiltering
        class Cealarmdescrmaptable; //type: CiscoEntityAlarmMib::Cealarmdescrmaptable
        class Cealarmdescrtable; //type: CiscoEntityAlarmMib::Cealarmdescrtable
        class Cealarmtable; //type: CiscoEntityAlarmMib::Cealarmtable
        class Cealarmhisttable; //type: CiscoEntityAlarmMib::Cealarmhisttable
        class Cealarmfilterprofiletable; //type: CiscoEntityAlarmMib::Cealarmfilterprofiletable

        std::shared_ptr<CISCO_ENTITY_ALARM_MIB::CiscoEntityAlarmMib::Cealarmdescrmaptable> cealarmdescrmaptable_;
        std::shared_ptr<CISCO_ENTITY_ALARM_MIB::CiscoEntityAlarmMib::Cealarmdescrtable> cealarmdescrtable_;
        std::shared_ptr<CISCO_ENTITY_ALARM_MIB::CiscoEntityAlarmMib::Cealarmfiltering> cealarmfiltering_;
        std::shared_ptr<CISCO_ENTITY_ALARM_MIB::CiscoEntityAlarmMib::Cealarmfilterprofiletable> cealarmfilterprofiletable_;
        std::shared_ptr<CISCO_ENTITY_ALARM_MIB::CiscoEntityAlarmMib::Cealarmhistory> cealarmhistory_;
        std::shared_ptr<CISCO_ENTITY_ALARM_MIB::CiscoEntityAlarmMib::Cealarmhisttable> cealarmhisttable_;
        std::shared_ptr<CISCO_ENTITY_ALARM_MIB::CiscoEntityAlarmMib::Cealarmmonitoring> cealarmmonitoring_;
        std::shared_ptr<CISCO_ENTITY_ALARM_MIB::CiscoEntityAlarmMib::Cealarmtable> cealarmtable_;
        
}; // CiscoEntityAlarmMib


class CiscoEntityAlarmMib::Cealarmmonitoring : public Entity
{
    public:
        Cealarmmonitoring();
        ~Cealarmmonitoring();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cealarmcriticalcount; //type: uint32
        YLeaf cealarmmajorcount; //type: uint32
        YLeaf cealarmminorcount; //type: uint32
        YLeaf cealarmcutoff; //type: boolean

}; // CiscoEntityAlarmMib::Cealarmmonitoring


class CiscoEntityAlarmMib::Cealarmhistory : public Entity
{
    public:
        Cealarmhistory();
        ~Cealarmhistory();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cealarmhisttablesize; //type: int32
        YLeaf cealarmhistlastindex; //type: uint32

}; // CiscoEntityAlarmMib::Cealarmhistory


class CiscoEntityAlarmMib::Cealarmfiltering : public Entity
{
    public:
        Cealarmfiltering();
        ~Cealarmfiltering();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cealarmnotifiesenable; //type: int32
        YLeaf cealarmsyslogenable; //type: int32
        YLeaf cealarmfilterprofileindexnext; //type: uint32

}; // CiscoEntityAlarmMib::Cealarmfiltering


class CiscoEntityAlarmMib::Cealarmdescrmaptable : public Entity
{
    public:
        Cealarmdescrmaptable();
        ~Cealarmdescrmaptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cealarmdescrmapentry; //type: CiscoEntityAlarmMib::Cealarmdescrmaptable::Cealarmdescrmapentry

        std::vector<std::shared_ptr<CISCO_ENTITY_ALARM_MIB::CiscoEntityAlarmMib::Cealarmdescrmaptable::Cealarmdescrmapentry> > cealarmdescrmapentry_;
        
}; // CiscoEntityAlarmMib::Cealarmdescrmaptable


class CiscoEntityAlarmMib::Cealarmdescrmaptable::Cealarmdescrmapentry : public Entity
{
    public:
        Cealarmdescrmapentry();
        ~Cealarmdescrmapentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cealarmdescrindex; //type: uint32
        YLeaf cealarmdescrvendortype; //type: string

}; // CiscoEntityAlarmMib::Cealarmdescrmaptable::Cealarmdescrmapentry


class CiscoEntityAlarmMib::Cealarmdescrtable : public Entity
{
    public:
        Cealarmdescrtable();
        ~Cealarmdescrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cealarmdescrentry; //type: CiscoEntityAlarmMib::Cealarmdescrtable::Cealarmdescrentry

        std::vector<std::shared_ptr<CISCO_ENTITY_ALARM_MIB::CiscoEntityAlarmMib::Cealarmdescrtable::Cealarmdescrentry> > cealarmdescrentry_;
        
}; // CiscoEntityAlarmMib::Cealarmdescrtable


class CiscoEntityAlarmMib::Cealarmdescrtable::Cealarmdescrentry : public Entity
{
    public:
        Cealarmdescrentry();
        ~Cealarmdescrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_ENTITY_ALARM_MIB::CiscoEntityAlarmMib::Cealarmdescrmaptable::Cealarmdescrmapentry::cealarmdescrindex)
        YLeaf cealarmdescrindex;
        YLeaf cealarmdescralarmtype; //type: int32
        YLeaf cealarmdescrseverity; //type: int32
        YLeaf cealarmdescrtext; //type: string

}; // CiscoEntityAlarmMib::Cealarmdescrtable::Cealarmdescrentry


class CiscoEntityAlarmMib::Cealarmtable : public Entity
{
    public:
        Cealarmtable();
        ~Cealarmtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cealarmentry; //type: CiscoEntityAlarmMib::Cealarmtable::Cealarmentry

        std::vector<std::shared_ptr<CISCO_ENTITY_ALARM_MIB::CiscoEntityAlarmMib::Cealarmtable::Cealarmentry> > cealarmentry_;
        
}; // CiscoEntityAlarmMib::Cealarmtable


class CiscoEntityAlarmMib::Cealarmtable::Cealarmentry : public Entity
{
    public:
        Cealarmentry();
        ~Cealarmentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf cealarmfilterprofile; //type: uint32
        YLeaf cealarmseverity; //type: int32
        YLeaf cealarmlist; //type: binary

}; // CiscoEntityAlarmMib::Cealarmtable::Cealarmentry


class CiscoEntityAlarmMib::Cealarmhisttable : public Entity
{
    public:
        Cealarmhisttable();
        ~Cealarmhisttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cealarmhistentry; //type: CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry

        std::vector<std::shared_ptr<CISCO_ENTITY_ALARM_MIB::CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry> > cealarmhistentry_;
        
}; // CiscoEntityAlarmMib::Cealarmhisttable


class CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry : public Entity
{
    public:
        Cealarmhistentry();
        ~Cealarmhistentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cealarmhistindex; //type: uint32
        YLeaf cealarmhisttype; //type: CealarmhisttypeEnum
        YLeaf cealarmhistentphysicalindex; //type: int32
        YLeaf cealarmhistalarmtype; //type: int32
        YLeaf cealarmhistseverity; //type: AlarmseverityEnum
        YLeaf cealarmhisttimestamp; //type: uint32
        class CealarmhisttypeEnum;

}; // CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry


class CiscoEntityAlarmMib::Cealarmfilterprofiletable : public Entity
{
    public:
        Cealarmfilterprofiletable();
        ~Cealarmfilterprofiletable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cealarmfilterprofileentry; //type: CiscoEntityAlarmMib::Cealarmfilterprofiletable::Cealarmfilterprofileentry

        std::vector<std::shared_ptr<CISCO_ENTITY_ALARM_MIB::CiscoEntityAlarmMib::Cealarmfilterprofiletable::Cealarmfilterprofileentry> > cealarmfilterprofileentry_;
        
}; // CiscoEntityAlarmMib::Cealarmfilterprofiletable


class CiscoEntityAlarmMib::Cealarmfilterprofiletable::Cealarmfilterprofileentry : public Entity
{
    public:
        Cealarmfilterprofileentry();
        ~Cealarmfilterprofileentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cealarmfilterindex; //type: uint32
        YLeaf cealarmfilterstatus; //type: RowstatusEnum
        YLeaf cealarmfilteralias; //type: string
        YLeaf cealarmfilteralarmsenabled; //type: binary
        YLeaf cealarmfilternotifiesenabled; //type: binary
        YLeaf cealarmfiltersyslogenabled; //type: binary

}; // CiscoEntityAlarmMib::Cealarmfilterprofiletable::Cealarmfilterprofileentry

class AlarmseverityEnum : public Enum
{
    public:
        static const Enum::YLeaf critical;
        static const Enum::YLeaf major;
        static const Enum::YLeaf minor;
        static const Enum::YLeaf info;

};

class CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry::CealarmhisttypeEnum : public Enum
{
    public:
        static const Enum::YLeaf asserted;
        static const Enum::YLeaf cleared;

};


}
}

#endif /* _CISCO_ENTITY_ALARM_MIB_ */

