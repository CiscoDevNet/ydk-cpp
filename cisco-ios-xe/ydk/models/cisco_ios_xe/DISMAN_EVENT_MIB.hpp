#ifndef _DISMAN_EVENT_MIB_
#define _DISMAN_EVENT_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace DISMAN_EVENT_MIB {

class DismanEventMib : public ydk::Entity
{
    public:
        DismanEventMib();
        ~DismanEventMib();

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

        std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mteevent> mteevent;
        std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mteeventnotificationtable> mteeventnotificationtable;
        std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mteeventsettable> mteeventsettable;
        std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mteeventtable> mteeventtable;
        std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mteobjectstable> mteobjectstable;
        std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mteresource> mteresource;
        std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mtetrigger> mtetrigger;
        std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mtetriggerbooleantable> mtetriggerbooleantable;
        std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mtetriggerdeltatable> mtetriggerdeltatable;
        std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mtetriggerexistencetable> mtetriggerexistencetable;
        std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mtetriggertable> mtetriggertable;
        std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mtetriggerthresholdtable> mtetriggerthresholdtable;
        
}; // DismanEventMib


class DismanEventMib::Mteresource : public ydk::Entity
{
    public:
        Mteresource();
        ~Mteresource();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mteresourcesampleminimum; //type: int32
        ydk::YLeaf mteresourcesampleinstancemaximum; //type: uint32
        ydk::YLeaf mteresourcesampleinstances; //type: uint32
        ydk::YLeaf mteresourcesampleinstanceshigh; //type: uint32
        ydk::YLeaf mteresourcesampleinstancelacks; //type: uint32

}; // DismanEventMib::Mteresource


class DismanEventMib::Mtetrigger : public ydk::Entity
{
    public:
        Mtetrigger();
        ~Mtetrigger();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mtetriggerfailures; //type: uint32

}; // DismanEventMib::Mtetrigger


class DismanEventMib::Mteevent : public ydk::Entity
{
    public:
        Mteevent();
        ~Mteevent();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mteeventfailures; //type: uint32

}; // DismanEventMib::Mteevent


class DismanEventMib::Mtetriggertable : public ydk::Entity
{
    public:
        Mtetriggertable();
        ~Mtetriggertable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mtetriggerentry; //type: DismanEventMib::Mtetriggertable::Mtetriggerentry

        std::vector<std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mtetriggertable::Mtetriggerentry> > mtetriggerentry;
        
}; // DismanEventMib::Mtetriggertable


class DismanEventMib::Mtetriggertable::Mtetriggerentry : public ydk::Entity
{
    public:
        Mtetriggerentry();
        ~Mtetriggerentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mteowner; //type: string
        ydk::YLeaf mtetriggername; //type: string
        ydk::YLeaf mtetriggercomment; //type: string
        ydk::YLeaf mtetriggertest; //type: Mtetriggertest
        ydk::YLeaf mtetriggersampletype; //type: Mtetriggersampletype
        ydk::YLeaf mtetriggervalueid; //type: string
        ydk::YLeaf mtetriggervalueidwildcard; //type: boolean
        ydk::YLeaf mtetriggertargettag; //type: string
        ydk::YLeaf mtetriggercontextname; //type: string
        ydk::YLeaf mtetriggercontextnamewildcard; //type: boolean
        ydk::YLeaf mtetriggerfrequency; //type: uint32
        ydk::YLeaf mtetriggerobjectsowner; //type: string
        ydk::YLeaf mtetriggerobjects; //type: string
        ydk::YLeaf mtetriggerenabled; //type: boolean
        ydk::YLeaf mtetriggerentrystatus; //type: Rowstatus
        class Mtetriggersampletype;

}; // DismanEventMib::Mtetriggertable::Mtetriggerentry


class DismanEventMib::Mtetriggerdeltatable : public ydk::Entity
{
    public:
        Mtetriggerdeltatable();
        ~Mtetriggerdeltatable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mtetriggerdeltaentry; //type: DismanEventMib::Mtetriggerdeltatable::Mtetriggerdeltaentry

        std::vector<std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mtetriggerdeltatable::Mtetriggerdeltaentry> > mtetriggerdeltaentry;
        
}; // DismanEventMib::Mtetriggerdeltatable


class DismanEventMib::Mtetriggerdeltatable::Mtetriggerdeltaentry : public ydk::Entity
{
    public:
        Mtetriggerdeltaentry();
        ~Mtetriggerdeltaentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to DISMAN_EVENT_MIB::DismanEventMib::Mtetriggertable::Mtetriggerentry::mteowner)
        ydk::YLeaf mteowner;
        //type: string (refers to DISMAN_EVENT_MIB::DismanEventMib::Mtetriggertable::Mtetriggerentry::mtetriggername)
        ydk::YLeaf mtetriggername;
        ydk::YLeaf mtetriggerdeltadiscontinuityid; //type: string
        ydk::YLeaf mtetriggerdeltadiscontinuityidwildcard; //type: boolean
        ydk::YLeaf mtetriggerdeltadiscontinuityidtype; //type: Mtetriggerdeltadiscontinuityidtype
        class Mtetriggerdeltadiscontinuityidtype;

}; // DismanEventMib::Mtetriggerdeltatable::Mtetriggerdeltaentry


class DismanEventMib::Mtetriggerexistencetable : public ydk::Entity
{
    public:
        Mtetriggerexistencetable();
        ~Mtetriggerexistencetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mtetriggerexistenceentry; //type: DismanEventMib::Mtetriggerexistencetable::Mtetriggerexistenceentry

        std::vector<std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mtetriggerexistencetable::Mtetriggerexistenceentry> > mtetriggerexistenceentry;
        
}; // DismanEventMib::Mtetriggerexistencetable


class DismanEventMib::Mtetriggerexistencetable::Mtetriggerexistenceentry : public ydk::Entity
{
    public:
        Mtetriggerexistenceentry();
        ~Mtetriggerexistenceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to DISMAN_EVENT_MIB::DismanEventMib::Mtetriggertable::Mtetriggerentry::mteowner)
        ydk::YLeaf mteowner;
        //type: string (refers to DISMAN_EVENT_MIB::DismanEventMib::Mtetriggertable::Mtetriggerentry::mtetriggername)
        ydk::YLeaf mtetriggername;
        ydk::YLeaf mtetriggerexistencetest; //type: Mtetriggerexistencetest
        ydk::YLeaf mtetriggerexistencestartup; //type: Mtetriggerexistencestartup
        ydk::YLeaf mtetriggerexistenceobjectsowner; //type: string
        ydk::YLeaf mtetriggerexistenceobjects; //type: string
        ydk::YLeaf mtetriggerexistenceeventowner; //type: string
        ydk::YLeaf mtetriggerexistenceevent; //type: string

}; // DismanEventMib::Mtetriggerexistencetable::Mtetriggerexistenceentry


class DismanEventMib::Mtetriggerbooleantable : public ydk::Entity
{
    public:
        Mtetriggerbooleantable();
        ~Mtetriggerbooleantable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mtetriggerbooleanentry; //type: DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry

        std::vector<std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry> > mtetriggerbooleanentry;
        
}; // DismanEventMib::Mtetriggerbooleantable


class DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry : public ydk::Entity
{
    public:
        Mtetriggerbooleanentry();
        ~Mtetriggerbooleanentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to DISMAN_EVENT_MIB::DismanEventMib::Mtetriggertable::Mtetriggerentry::mteowner)
        ydk::YLeaf mteowner;
        //type: string (refers to DISMAN_EVENT_MIB::DismanEventMib::Mtetriggertable::Mtetriggerentry::mtetriggername)
        ydk::YLeaf mtetriggername;
        ydk::YLeaf mtetriggerbooleancomparison; //type: Mtetriggerbooleancomparison
        ydk::YLeaf mtetriggerbooleanvalue; //type: int32
        ydk::YLeaf mtetriggerbooleanstartup; //type: boolean
        ydk::YLeaf mtetriggerbooleanobjectsowner; //type: string
        ydk::YLeaf mtetriggerbooleanobjects; //type: string
        ydk::YLeaf mtetriggerbooleaneventowner; //type: string
        ydk::YLeaf mtetriggerbooleanevent; //type: string
        class Mtetriggerbooleancomparison;

}; // DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry


class DismanEventMib::Mtetriggerthresholdtable : public ydk::Entity
{
    public:
        Mtetriggerthresholdtable();
        ~Mtetriggerthresholdtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mtetriggerthresholdentry; //type: DismanEventMib::Mtetriggerthresholdtable::Mtetriggerthresholdentry

        std::vector<std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mtetriggerthresholdtable::Mtetriggerthresholdentry> > mtetriggerthresholdentry;
        
}; // DismanEventMib::Mtetriggerthresholdtable


class DismanEventMib::Mtetriggerthresholdtable::Mtetriggerthresholdentry : public ydk::Entity
{
    public:
        Mtetriggerthresholdentry();
        ~Mtetriggerthresholdentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to DISMAN_EVENT_MIB::DismanEventMib::Mtetriggertable::Mtetriggerentry::mteowner)
        ydk::YLeaf mteowner;
        //type: string (refers to DISMAN_EVENT_MIB::DismanEventMib::Mtetriggertable::Mtetriggerentry::mtetriggername)
        ydk::YLeaf mtetriggername;
        ydk::YLeaf mtetriggerthresholdstartup; //type: Mtetriggerthresholdstartup
        ydk::YLeaf mtetriggerthresholdrising; //type: int32
        ydk::YLeaf mtetriggerthresholdfalling; //type: int32
        ydk::YLeaf mtetriggerthresholddeltarising; //type: int32
        ydk::YLeaf mtetriggerthresholddeltafalling; //type: int32
        ydk::YLeaf mtetriggerthresholdobjectsowner; //type: string
        ydk::YLeaf mtetriggerthresholdobjects; //type: string
        ydk::YLeaf mtetriggerthresholdrisingeventowner; //type: string
        ydk::YLeaf mtetriggerthresholdrisingevent; //type: string
        ydk::YLeaf mtetriggerthresholdfallingeventowner; //type: string
        ydk::YLeaf mtetriggerthresholdfallingevent; //type: string
        ydk::YLeaf mtetriggerthresholddeltarisingeventowner; //type: string
        ydk::YLeaf mtetriggerthresholddeltarisingevent; //type: string
        ydk::YLeaf mtetriggerthresholddeltafallingeventowner; //type: string
        ydk::YLeaf mtetriggerthresholddeltafallingevent; //type: string
        class Mtetriggerthresholdstartup;

}; // DismanEventMib::Mtetriggerthresholdtable::Mtetriggerthresholdentry


class DismanEventMib::Mteobjectstable : public ydk::Entity
{
    public:
        Mteobjectstable();
        ~Mteobjectstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mteobjectsentry; //type: DismanEventMib::Mteobjectstable::Mteobjectsentry

        std::vector<std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mteobjectstable::Mteobjectsentry> > mteobjectsentry;
        
}; // DismanEventMib::Mteobjectstable


class DismanEventMib::Mteobjectstable::Mteobjectsentry : public ydk::Entity
{
    public:
        Mteobjectsentry();
        ~Mteobjectsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to DISMAN_EVENT_MIB::DismanEventMib::Mtetriggertable::Mtetriggerentry::mteowner)
        ydk::YLeaf mteowner;
        ydk::YLeaf mteobjectsname; //type: string
        ydk::YLeaf mteobjectsindex; //type: uint32
        ydk::YLeaf mteobjectsid; //type: string
        ydk::YLeaf mteobjectsidwildcard; //type: boolean
        ydk::YLeaf mteobjectsentrystatus; //type: Rowstatus

}; // DismanEventMib::Mteobjectstable::Mteobjectsentry


class DismanEventMib::Mteeventtable : public ydk::Entity
{
    public:
        Mteeventtable();
        ~Mteeventtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mteevententry; //type: DismanEventMib::Mteeventtable::Mteevententry

        std::vector<std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mteeventtable::Mteevententry> > mteevententry;
        
}; // DismanEventMib::Mteeventtable


class DismanEventMib::Mteeventtable::Mteevententry : public ydk::Entity
{
    public:
        Mteevententry();
        ~Mteevententry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to DISMAN_EVENT_MIB::DismanEventMib::Mtetriggertable::Mtetriggerentry::mteowner)
        ydk::YLeaf mteowner;
        ydk::YLeaf mteeventname; //type: string
        ydk::YLeaf mteeventcomment; //type: string
        ydk::YLeaf mteeventactions; //type: Mteeventactions
        ydk::YLeaf mteeventenabled; //type: boolean
        ydk::YLeaf mteevententrystatus; //type: Rowstatus

}; // DismanEventMib::Mteeventtable::Mteevententry


class DismanEventMib::Mteeventnotificationtable : public ydk::Entity
{
    public:
        Mteeventnotificationtable();
        ~Mteeventnotificationtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mteeventnotificationentry; //type: DismanEventMib::Mteeventnotificationtable::Mteeventnotificationentry

        std::vector<std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mteeventnotificationtable::Mteeventnotificationentry> > mteeventnotificationentry;
        
}; // DismanEventMib::Mteeventnotificationtable


class DismanEventMib::Mteeventnotificationtable::Mteeventnotificationentry : public ydk::Entity
{
    public:
        Mteeventnotificationentry();
        ~Mteeventnotificationentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to DISMAN_EVENT_MIB::DismanEventMib::Mtetriggertable::Mtetriggerentry::mteowner)
        ydk::YLeaf mteowner;
        //type: string (refers to DISMAN_EVENT_MIB::DismanEventMib::Mteeventtable::Mteevententry::mteeventname)
        ydk::YLeaf mteeventname;
        ydk::YLeaf mteeventnotification; //type: string
        ydk::YLeaf mteeventnotificationobjectsowner; //type: string
        ydk::YLeaf mteeventnotificationobjects; //type: string

}; // DismanEventMib::Mteeventnotificationtable::Mteeventnotificationentry


class DismanEventMib::Mteeventsettable : public ydk::Entity
{
    public:
        Mteeventsettable();
        ~Mteeventsettable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mteeventsetentry; //type: DismanEventMib::Mteeventsettable::Mteeventsetentry

        std::vector<std::shared_ptr<DISMAN_EVENT_MIB::DismanEventMib::Mteeventsettable::Mteeventsetentry> > mteeventsetentry;
        
}; // DismanEventMib::Mteeventsettable


class DismanEventMib::Mteeventsettable::Mteeventsetentry : public ydk::Entity
{
    public:
        Mteeventsetentry();
        ~Mteeventsetentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to DISMAN_EVENT_MIB::DismanEventMib::Mtetriggertable::Mtetriggerentry::mteowner)
        ydk::YLeaf mteowner;
        //type: string (refers to DISMAN_EVENT_MIB::DismanEventMib::Mteeventtable::Mteevententry::mteeventname)
        ydk::YLeaf mteeventname;
        ydk::YLeaf mteeventsetobject; //type: string
        ydk::YLeaf mteeventsetobjectwildcard; //type: boolean
        ydk::YLeaf mteeventsetvalue; //type: int32
        ydk::YLeaf mteeventsettargettag; //type: string
        ydk::YLeaf mteeventsetcontextname; //type: string
        ydk::YLeaf mteeventsetcontextnamewildcard; //type: boolean

}; // DismanEventMib::Mteeventsettable::Mteeventsetentry

class Failurereason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sampleOverrun;
        static const ydk::Enum::YLeaf badType;
        static const ydk::Enum::YLeaf noResponse;
        static const ydk::Enum::YLeaf destinationUnreachable;
        static const ydk::Enum::YLeaf badDestination;
        static const ydk::Enum::YLeaf localResourceLack;
        static const ydk::Enum::YLeaf noError;
        static const ydk::Enum::YLeaf tooBig;
        static const ydk::Enum::YLeaf noSuchName;
        static const ydk::Enum::YLeaf badValue;
        static const ydk::Enum::YLeaf readOnly;
        static const ydk::Enum::YLeaf genErr;
        static const ydk::Enum::YLeaf noAccess;
        static const ydk::Enum::YLeaf wrongType;
        static const ydk::Enum::YLeaf wrongLength;
        static const ydk::Enum::YLeaf wrongEncoding;
        static const ydk::Enum::YLeaf wrongValue;
        static const ydk::Enum::YLeaf noCreation;
        static const ydk::Enum::YLeaf inconsistentValue;
        static const ydk::Enum::YLeaf resourceUnavailable;
        static const ydk::Enum::YLeaf commitFailed;
        static const ydk::Enum::YLeaf undoFailed;
        static const ydk::Enum::YLeaf authorizationError;
        static const ydk::Enum::YLeaf notWritable;
        static const ydk::Enum::YLeaf inconsistentName;

};

class DismanEventMib::Mtetriggertable::Mtetriggerentry::Mtetriggersampletype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf absoluteValue;
        static const ydk::Enum::YLeaf deltaValue;

};

class DismanEventMib::Mtetriggerdeltatable::Mtetriggerdeltaentry::Mtetriggerdeltadiscontinuityidtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf timeTicks;
        static const ydk::Enum::YLeaf timeStamp;
        static const ydk::Enum::YLeaf dateAndTime;

};

class DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry::Mtetriggerbooleancomparison : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unequal;
        static const ydk::Enum::YLeaf equal;
        static const ydk::Enum::YLeaf less;
        static const ydk::Enum::YLeaf lessOrEqual;
        static const ydk::Enum::YLeaf greater;
        static const ydk::Enum::YLeaf greaterOrEqual;

};

class DismanEventMib::Mtetriggerthresholdtable::Mtetriggerthresholdentry::Mtetriggerthresholdstartup : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rising;
        static const ydk::Enum::YLeaf falling;
        static const ydk::Enum::YLeaf risingOrFalling;

};


}
}

#endif /* _DISMAN_EVENT_MIB_ */

