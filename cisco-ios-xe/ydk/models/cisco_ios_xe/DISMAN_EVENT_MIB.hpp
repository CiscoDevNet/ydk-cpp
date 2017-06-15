#ifndef _DISMAN_EVENT_MIB_
#define _DISMAN_EVENT_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace DISMAN_EVENT_MIB {

class DismanEventMib : public Entity
{
    public:
        DismanEventMib();
        ~DismanEventMib();

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

        class Mteresource; //type: DismanEventMib::Mteresource
        class Mtetrigger; //type: DismanEventMib::Mtetrigger
        class Mteevent; //type: DismanEventMib::Mteevent
        class Mtetriggertable; //type: DismanEventMib::Mtetriggertable
        class Mtetriggerdeltatable; //type: DismanEventMib::Mtetriggerdeltatable
        class Mtetriggerexistencetable; //type: DismanEventMib::Mtetriggerexistencetable
        class Mtetriggerbooleantable; //type: DismanEventMib::Mtetriggerbooleantable
        class Mtetriggerthresholdtable; //type: DismanEventMib::Mtetriggerthresholdtable
        class Mteobjectstable; //type: DismanEventMib::Mteobjectstable
        class Mteeventtable; //type: DismanEventMib::Mteeventtable
        class Mteeventnotificationtable; //type: DismanEventMib::Mteeventnotificationtable
        class Mteeventsettable; //type: DismanEventMib::Mteeventsettable

        std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mteevent> mteevent_;
        std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mteeventnotificationtable> mteeventnotificationtable_;
        std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mteeventsettable> mteeventsettable_;
        std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mteeventtable> mteeventtable_;
        std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mteobjectstable> mteobjectstable_;
        std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mteresource> mteresource_;
        std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mtetrigger> mtetrigger_;
        std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mtetriggerbooleantable> mtetriggerbooleantable_;
        std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mtetriggerdeltatable> mtetriggerdeltatable_;
        std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mtetriggerexistencetable> mtetriggerexistencetable_;
        std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mtetriggertable> mtetriggertable_;
        std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mtetriggerthresholdtable> mtetriggerthresholdtable_;
        
}; // DismanEventMib


class DismanEventMib::Mteresource : public Entity
{
    public:
        Mteresource();
        ~Mteresource();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mteresourcesampleminimum; //type: int32
        YLeaf mteresourcesampleinstancemaximum; //type: uint32
        YLeaf mteresourcesampleinstances; //type: uint32
        YLeaf mteresourcesampleinstanceshigh; //type: uint32
        YLeaf mteresourcesampleinstancelacks; //type: uint32

}; // DismanEventMib::Mteresource


class DismanEventMib::Mtetrigger : public Entity
{
    public:
        Mtetrigger();
        ~Mtetrigger();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mtetriggerfailures; //type: uint32

}; // DismanEventMib::Mtetrigger


class DismanEventMib::Mteevent : public Entity
{
    public:
        Mteevent();
        ~Mteevent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mteeventfailures; //type: uint32

}; // DismanEventMib::Mteevent


class DismanEventMib::Mtetriggertable : public Entity
{
    public:
        Mtetriggertable();
        ~Mtetriggertable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mtetriggerentry; //type: DismanEventMib::Mtetriggertable::Mtetriggerentry

        std::vector<std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mtetriggertable::Mtetriggerentry> > mtetriggerentry_;
        
}; // DismanEventMib::Mtetriggertable


class DismanEventMib::Mtetriggertable::Mtetriggerentry : public Entity
{
    public:
        Mtetriggerentry();
        ~Mtetriggerentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mteowner; //type: string
        YLeaf mtetriggername; //type: string
        YLeaf mtetriggercomment; //type: string
        YLeaf mtetriggertest; //type: Mtetriggertest
        YLeaf mtetriggersampletype; //type: MtetriggersampletypeEnum
        YLeaf mtetriggervalueid; //type: string
        YLeaf mtetriggervalueidwildcard; //type: boolean
        YLeaf mtetriggertargettag; //type: string
        YLeaf mtetriggercontextname; //type: string
        YLeaf mtetriggercontextnamewildcard; //type: boolean
        YLeaf mtetriggerfrequency; //type: uint32
        YLeaf mtetriggerobjectsowner; //type: string
        YLeaf mtetriggerobjects; //type: string
        YLeaf mtetriggerenabled; //type: boolean
        YLeaf mtetriggerentrystatus; //type: RowstatusEnum
        class MtetriggersampletypeEnum;

}; // DismanEventMib::Mtetriggertable::Mtetriggerentry


class DismanEventMib::Mtetriggerdeltatable : public Entity
{
    public:
        Mtetriggerdeltatable();
        ~Mtetriggerdeltatable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mtetriggerdeltaentry; //type: DismanEventMib::Mtetriggerdeltatable::Mtetriggerdeltaentry

        std::vector<std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mtetriggerdeltatable::Mtetriggerdeltaentry> > mtetriggerdeltaentry_;
        
}; // DismanEventMib::Mtetriggerdeltatable


class DismanEventMib::Mtetriggerdeltatable::Mtetriggerdeltaentry : public Entity
{
    public:
        Mtetriggerdeltaentry();
        ~Mtetriggerdeltaentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to DISMAN_EVENT_MIB::DismanEventMib::Mtetriggertable::Mtetriggerentry::mteowner)
        YLeaf mteowner;
        //type: string (refers to DISMAN_EVENT_MIB::DismanEventMib::Mtetriggertable::Mtetriggerentry::mtetriggername)
        YLeaf mtetriggername;
        YLeaf mtetriggerdeltadiscontinuityid; //type: string
        YLeaf mtetriggerdeltadiscontinuityidwildcard; //type: boolean
        YLeaf mtetriggerdeltadiscontinuityidtype; //type: MtetriggerdeltadiscontinuityidtypeEnum
        class MtetriggerdeltadiscontinuityidtypeEnum;

}; // DismanEventMib::Mtetriggerdeltatable::Mtetriggerdeltaentry


class DismanEventMib::Mtetriggerexistencetable : public Entity
{
    public:
        Mtetriggerexistencetable();
        ~Mtetriggerexistencetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mtetriggerexistenceentry; //type: DismanEventMib::Mtetriggerexistencetable::Mtetriggerexistenceentry

        std::vector<std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mtetriggerexistencetable::Mtetriggerexistenceentry> > mtetriggerexistenceentry_;
        
}; // DismanEventMib::Mtetriggerexistencetable


class DismanEventMib::Mtetriggerexistencetable::Mtetriggerexistenceentry : public Entity
{
    public:
        Mtetriggerexistenceentry();
        ~Mtetriggerexistenceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to DISMAN_EVENT_MIB::DismanEventMib::Mtetriggertable::Mtetriggerentry::mteowner)
        YLeaf mteowner;
        //type: string (refers to DISMAN_EVENT_MIB::DismanEventMib::Mtetriggertable::Mtetriggerentry::mtetriggername)
        YLeaf mtetriggername;
        YLeaf mtetriggerexistencetest; //type: Mtetriggerexistencetest
        YLeaf mtetriggerexistencestartup; //type: Mtetriggerexistencestartup
        YLeaf mtetriggerexistenceobjectsowner; //type: string
        YLeaf mtetriggerexistenceobjects; //type: string
        YLeaf mtetriggerexistenceeventowner; //type: string
        YLeaf mtetriggerexistenceevent; //type: string

}; // DismanEventMib::Mtetriggerexistencetable::Mtetriggerexistenceentry


class DismanEventMib::Mtetriggerbooleantable : public Entity
{
    public:
        Mtetriggerbooleantable();
        ~Mtetriggerbooleantable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mtetriggerbooleanentry; //type: DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry

        std::vector<std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry> > mtetriggerbooleanentry_;
        
}; // DismanEventMib::Mtetriggerbooleantable


class DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry : public Entity
{
    public:
        Mtetriggerbooleanentry();
        ~Mtetriggerbooleanentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to DISMAN_EVENT_MIB::DismanEventMib::Mtetriggertable::Mtetriggerentry::mteowner)
        YLeaf mteowner;
        //type: string (refers to DISMAN_EVENT_MIB::DismanEventMib::Mtetriggertable::Mtetriggerentry::mtetriggername)
        YLeaf mtetriggername;
        YLeaf mtetriggerbooleancomparison; //type: MtetriggerbooleancomparisonEnum
        YLeaf mtetriggerbooleanvalue; //type: int32
        YLeaf mtetriggerbooleanstartup; //type: boolean
        YLeaf mtetriggerbooleanobjectsowner; //type: string
        YLeaf mtetriggerbooleanobjects; //type: string
        YLeaf mtetriggerbooleaneventowner; //type: string
        YLeaf mtetriggerbooleanevent; //type: string
        class MtetriggerbooleancomparisonEnum;

}; // DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry


class DismanEventMib::Mtetriggerthresholdtable : public Entity
{
    public:
        Mtetriggerthresholdtable();
        ~Mtetriggerthresholdtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mtetriggerthresholdentry; //type: DismanEventMib::Mtetriggerthresholdtable::Mtetriggerthresholdentry

        std::vector<std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mtetriggerthresholdtable::Mtetriggerthresholdentry> > mtetriggerthresholdentry_;
        
}; // DismanEventMib::Mtetriggerthresholdtable


class DismanEventMib::Mtetriggerthresholdtable::Mtetriggerthresholdentry : public Entity
{
    public:
        Mtetriggerthresholdentry();
        ~Mtetriggerthresholdentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to DISMAN_EVENT_MIB::DismanEventMib::Mtetriggertable::Mtetriggerentry::mteowner)
        YLeaf mteowner;
        //type: string (refers to DISMAN_EVENT_MIB::DismanEventMib::Mtetriggertable::Mtetriggerentry::mtetriggername)
        YLeaf mtetriggername;
        YLeaf mtetriggerthresholdstartup; //type: MtetriggerthresholdstartupEnum
        YLeaf mtetriggerthresholdrising; //type: int32
        YLeaf mtetriggerthresholdfalling; //type: int32
        YLeaf mtetriggerthresholddeltarising; //type: int32
        YLeaf mtetriggerthresholddeltafalling; //type: int32
        YLeaf mtetriggerthresholdobjectsowner; //type: string
        YLeaf mtetriggerthresholdobjects; //type: string
        YLeaf mtetriggerthresholdrisingeventowner; //type: string
        YLeaf mtetriggerthresholdrisingevent; //type: string
        YLeaf mtetriggerthresholdfallingeventowner; //type: string
        YLeaf mtetriggerthresholdfallingevent; //type: string
        YLeaf mtetriggerthresholddeltarisingeventowner; //type: string
        YLeaf mtetriggerthresholddeltarisingevent; //type: string
        YLeaf mtetriggerthresholddeltafallingeventowner; //type: string
        YLeaf mtetriggerthresholddeltafallingevent; //type: string
        class MtetriggerthresholdstartupEnum;

}; // DismanEventMib::Mtetriggerthresholdtable::Mtetriggerthresholdentry


class DismanEventMib::Mteobjectstable : public Entity
{
    public:
        Mteobjectstable();
        ~Mteobjectstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mteobjectsentry; //type: DismanEventMib::Mteobjectstable::Mteobjectsentry

        std::vector<std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mteobjectstable::Mteobjectsentry> > mteobjectsentry_;
        
}; // DismanEventMib::Mteobjectstable


class DismanEventMib::Mteobjectstable::Mteobjectsentry : public Entity
{
    public:
        Mteobjectsentry();
        ~Mteobjectsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to DISMAN_EVENT_MIB::DismanEventMib::Mtetriggertable::Mtetriggerentry::mteowner)
        YLeaf mteowner;
        YLeaf mteobjectsname; //type: string
        YLeaf mteobjectsindex; //type: uint32
        YLeaf mteobjectsid; //type: string
        YLeaf mteobjectsidwildcard; //type: boolean
        YLeaf mteobjectsentrystatus; //type: RowstatusEnum

}; // DismanEventMib::Mteobjectstable::Mteobjectsentry


class DismanEventMib::Mteeventtable : public Entity
{
    public:
        Mteeventtable();
        ~Mteeventtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mteevententry; //type: DismanEventMib::Mteeventtable::Mteevententry

        std::vector<std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mteeventtable::Mteevententry> > mteevententry_;
        
}; // DismanEventMib::Mteeventtable


class DismanEventMib::Mteeventtable::Mteevententry : public Entity
{
    public:
        Mteevententry();
        ~Mteevententry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to DISMAN_EVENT_MIB::DismanEventMib::Mtetriggertable::Mtetriggerentry::mteowner)
        YLeaf mteowner;
        YLeaf mteeventname; //type: string
        YLeaf mteeventcomment; //type: string
        YLeaf mteeventactions; //type: Mteeventactions
        YLeaf mteeventenabled; //type: boolean
        YLeaf mteevententrystatus; //type: RowstatusEnum

}; // DismanEventMib::Mteeventtable::Mteevententry


class DismanEventMib::Mteeventnotificationtable : public Entity
{
    public:
        Mteeventnotificationtable();
        ~Mteeventnotificationtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mteeventnotificationentry; //type: DismanEventMib::Mteeventnotificationtable::Mteeventnotificationentry

        std::vector<std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mteeventnotificationtable::Mteeventnotificationentry> > mteeventnotificationentry_;
        
}; // DismanEventMib::Mteeventnotificationtable


class DismanEventMib::Mteeventnotificationtable::Mteeventnotificationentry : public Entity
{
    public:
        Mteeventnotificationentry();
        ~Mteeventnotificationentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to DISMAN_EVENT_MIB::DismanEventMib::Mtetriggertable::Mtetriggerentry::mteowner)
        YLeaf mteowner;
        //type: string (refers to DISMAN_EVENT_MIB::DismanEventMib::Mteeventtable::Mteevententry::mteeventname)
        YLeaf mteeventname;
        YLeaf mteeventnotification; //type: string
        YLeaf mteeventnotificationobjectsowner; //type: string
        YLeaf mteeventnotificationobjects; //type: string

}; // DismanEventMib::Mteeventnotificationtable::Mteeventnotificationentry


class DismanEventMib::Mteeventsettable : public Entity
{
    public:
        Mteeventsettable();
        ~Mteeventsettable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mteeventsetentry; //type: DismanEventMib::Mteeventsettable::Mteeventsetentry

        std::vector<std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mteeventsettable::Mteeventsetentry> > mteeventsetentry_;
        
}; // DismanEventMib::Mteeventsettable


class DismanEventMib::Mteeventsettable::Mteeventsetentry : public Entity
{
    public:
        Mteeventsetentry();
        ~Mteeventsetentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to DISMAN_EVENT_MIB::DismanEventMib::Mtetriggertable::Mtetriggerentry::mteowner)
        YLeaf mteowner;
        //type: string (refers to DISMAN_EVENT_MIB::DismanEventMib::Mteeventtable::Mteevententry::mteeventname)
        YLeaf mteeventname;
        YLeaf mteeventsetobject; //type: string
        YLeaf mteeventsetobjectwildcard; //type: boolean
        YLeaf mteeventsetvalue; //type: int32
        YLeaf mteeventsettargettag; //type: string
        YLeaf mteeventsetcontextname; //type: string
        YLeaf mteeventsetcontextnamewildcard; //type: boolean

}; // DismanEventMib::Mteeventsettable::Mteeventsetentry

class FailurereasonEnum : public Enum
{
    public:
        static const Enum::YLeaf sampleOverrun;
        static const Enum::YLeaf badType;
        static const Enum::YLeaf noResponse;
        static const Enum::YLeaf destinationUnreachable;
        static const Enum::YLeaf badDestination;
        static const Enum::YLeaf localResourceLack;
        static const Enum::YLeaf noError;
        static const Enum::YLeaf tooBig;
        static const Enum::YLeaf noSuchName;
        static const Enum::YLeaf badValue;
        static const Enum::YLeaf readOnly;
        static const Enum::YLeaf genErr;
        static const Enum::YLeaf noAccess;
        static const Enum::YLeaf wrongType;
        static const Enum::YLeaf wrongLength;
        static const Enum::YLeaf wrongEncoding;
        static const Enum::YLeaf wrongValue;
        static const Enum::YLeaf noCreation;
        static const Enum::YLeaf inconsistentValue;
        static const Enum::YLeaf resourceUnavailable;
        static const Enum::YLeaf commitFailed;
        static const Enum::YLeaf undoFailed;
        static const Enum::YLeaf authorizationError;
        static const Enum::YLeaf notWritable;
        static const Enum::YLeaf inconsistentName;

};

class DismanEventMib::Mtetriggertable::Mtetriggerentry::MtetriggersampletypeEnum : public Enum
{
    public:
        static const Enum::YLeaf absoluteValue;
        static const Enum::YLeaf deltaValue;

};

class DismanEventMib::Mtetriggerdeltatable::Mtetriggerdeltaentry::MtetriggerdeltadiscontinuityidtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf timeTicks;
        static const Enum::YLeaf timeStamp;
        static const Enum::YLeaf dateAndTime;

};

class DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry::MtetriggerbooleancomparisonEnum : public Enum
{
    public:
        static const Enum::YLeaf unequal;
        static const Enum::YLeaf equal;
        static const Enum::YLeaf less;
        static const Enum::YLeaf lessOrEqual;
        static const Enum::YLeaf greater;
        static const Enum::YLeaf greaterOrEqual;

};

class DismanEventMib::Mtetriggerthresholdtable::Mtetriggerthresholdentry::MtetriggerthresholdstartupEnum : public Enum
{
    public:
        static const Enum::YLeaf rising;
        static const Enum::YLeaf falling;
        static const Enum::YLeaf risingOrFalling;

};


}
}

#endif /* _DISMAN_EVENT_MIB_ */

