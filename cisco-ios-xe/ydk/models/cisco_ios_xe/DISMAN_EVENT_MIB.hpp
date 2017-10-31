#ifndef _DISMAN_EVENT_MIB_
#define _DISMAN_EVENT_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace DISMAN_EVENT_MIB {

class DISMANEVENTMIB : public ydk::Entity
{
    public:
        DISMANEVENTMIB();
        ~DISMANEVENTMIB();

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

        class Mteresource; //type: DISMANEVENTMIB::Mteresource
        class Mtetrigger; //type: DISMANEVENTMIB::Mtetrigger
        class Mteevent; //type: DISMANEVENTMIB::Mteevent
        class Mtetriggertable; //type: DISMANEVENTMIB::Mtetriggertable
        class Mtetriggerdeltatable; //type: DISMANEVENTMIB::Mtetriggerdeltatable
        class Mtetriggerexistencetable; //type: DISMANEVENTMIB::Mtetriggerexistencetable
        class Mtetriggerbooleantable; //type: DISMANEVENTMIB::Mtetriggerbooleantable
        class Mtetriggerthresholdtable; //type: DISMANEVENTMIB::Mtetriggerthresholdtable
        class Mteobjectstable; //type: DISMANEVENTMIB::Mteobjectstable
        class Mteeventtable; //type: DISMANEVENTMIB::Mteeventtable
        class Mteeventnotificationtable; //type: DISMANEVENTMIB::Mteeventnotificationtable
        class Mteeventsettable; //type: DISMANEVENTMIB::Mteeventsettable

        std::shared_ptr<cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::Mteresource> mteresource;
        std::shared_ptr<cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::Mtetrigger> mtetrigger;
        std::shared_ptr<cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::Mteevent> mteevent;
        std::shared_ptr<cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::Mtetriggertable> mtetriggertable;
        std::shared_ptr<cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::Mtetriggerdeltatable> mtetriggerdeltatable;
        std::shared_ptr<cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::Mtetriggerexistencetable> mtetriggerexistencetable;
        std::shared_ptr<cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::Mtetriggerbooleantable> mtetriggerbooleantable;
        std::shared_ptr<cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::Mtetriggerthresholdtable> mtetriggerthresholdtable;
        std::shared_ptr<cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::Mteobjectstable> mteobjectstable;
        std::shared_ptr<cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::Mteeventtable> mteeventtable;
        std::shared_ptr<cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::Mteeventnotificationtable> mteeventnotificationtable;
        std::shared_ptr<cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::Mteeventsettable> mteeventsettable;
        
}; // DISMANEVENTMIB


class DISMANEVENTMIB::Mteresource : public ydk::Entity
{
    public:
        Mteresource();
        ~Mteresource();

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

        ydk::YLeaf mteresourcesampleminimum; //type: int32
        ydk::YLeaf mteresourcesampleinstancemaximum; //type: uint32
        ydk::YLeaf mteresourcesampleinstances; //type: uint32
        ydk::YLeaf mteresourcesampleinstanceshigh; //type: uint32
        ydk::YLeaf mteresourcesampleinstancelacks; //type: uint32

}; // DISMANEVENTMIB::Mteresource


class DISMANEVENTMIB::Mtetrigger : public ydk::Entity
{
    public:
        Mtetrigger();
        ~Mtetrigger();

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

        ydk::YLeaf mtetriggerfailures; //type: uint32

}; // DISMANEVENTMIB::Mtetrigger


class DISMANEVENTMIB::Mteevent : public ydk::Entity
{
    public:
        Mteevent();
        ~Mteevent();

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

        ydk::YLeaf mteeventfailures; //type: uint32

}; // DISMANEVENTMIB::Mteevent


class DISMANEVENTMIB::Mtetriggertable : public ydk::Entity
{
    public:
        Mtetriggertable();
        ~Mtetriggertable();

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

        class Mtetriggerentry; //type: DISMANEVENTMIB::Mtetriggertable::Mtetriggerentry

        std::vector<std::shared_ptr<cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::Mtetriggertable::Mtetriggerentry> > mtetriggerentry;
        
}; // DISMANEVENTMIB::Mtetriggertable


class DISMANEVENTMIB::Mtetriggertable::Mtetriggerentry : public ydk::Entity
{
    public:
        Mtetriggerentry();
        ~Mtetriggerentry();

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
        ydk::YLeaf mtetriggerentrystatus; //type: RowStatus
        class Mtetriggersampletype;

}; // DISMANEVENTMIB::Mtetriggertable::Mtetriggerentry


class DISMANEVENTMIB::Mtetriggerdeltatable : public ydk::Entity
{
    public:
        Mtetriggerdeltatable();
        ~Mtetriggerdeltatable();

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

        class Mtetriggerdeltaentry; //type: DISMANEVENTMIB::Mtetriggerdeltatable::Mtetriggerdeltaentry

        std::vector<std::shared_ptr<cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::Mtetriggerdeltatable::Mtetriggerdeltaentry> > mtetriggerdeltaentry;
        
}; // DISMANEVENTMIB::Mtetriggerdeltatable


class DISMANEVENTMIB::Mtetriggerdeltatable::Mtetriggerdeltaentry : public ydk::Entity
{
    public:
        Mtetriggerdeltaentry();
        ~Mtetriggerdeltaentry();

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

        //type: string (refers to cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::Mtetriggertable::Mtetriggerentry::mteowner)
        ydk::YLeaf mteowner;
        //type: string (refers to cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::Mtetriggertable::Mtetriggerentry::mtetriggername)
        ydk::YLeaf mtetriggername;
        ydk::YLeaf mtetriggerdeltadiscontinuityid; //type: string
        ydk::YLeaf mtetriggerdeltadiscontinuityidwildcard; //type: boolean
        ydk::YLeaf mtetriggerdeltadiscontinuityidtype; //type: Mtetriggerdeltadiscontinuityidtype
        class Mtetriggerdeltadiscontinuityidtype;

}; // DISMANEVENTMIB::Mtetriggerdeltatable::Mtetriggerdeltaentry


class DISMANEVENTMIB::Mtetriggerexistencetable : public ydk::Entity
{
    public:
        Mtetriggerexistencetable();
        ~Mtetriggerexistencetable();

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

        class Mtetriggerexistenceentry; //type: DISMANEVENTMIB::Mtetriggerexistencetable::Mtetriggerexistenceentry

        std::vector<std::shared_ptr<cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::Mtetriggerexistencetable::Mtetriggerexistenceentry> > mtetriggerexistenceentry;
        
}; // DISMANEVENTMIB::Mtetriggerexistencetable


class DISMANEVENTMIB::Mtetriggerexistencetable::Mtetriggerexistenceentry : public ydk::Entity
{
    public:
        Mtetriggerexistenceentry();
        ~Mtetriggerexistenceentry();

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

        //type: string (refers to cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::Mtetriggertable::Mtetriggerentry::mteowner)
        ydk::YLeaf mteowner;
        //type: string (refers to cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::Mtetriggertable::Mtetriggerentry::mtetriggername)
        ydk::YLeaf mtetriggername;
        ydk::YLeaf mtetriggerexistencetest; //type: Mtetriggerexistencetest
        ydk::YLeaf mtetriggerexistencestartup; //type: Mtetriggerexistencestartup
        ydk::YLeaf mtetriggerexistenceobjectsowner; //type: string
        ydk::YLeaf mtetriggerexistenceobjects; //type: string
        ydk::YLeaf mtetriggerexistenceeventowner; //type: string
        ydk::YLeaf mtetriggerexistenceevent; //type: string

}; // DISMANEVENTMIB::Mtetriggerexistencetable::Mtetriggerexistenceentry


class DISMANEVENTMIB::Mtetriggerbooleantable : public ydk::Entity
{
    public:
        Mtetriggerbooleantable();
        ~Mtetriggerbooleantable();

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

        class Mtetriggerbooleanentry; //type: DISMANEVENTMIB::Mtetriggerbooleantable::Mtetriggerbooleanentry

        std::vector<std::shared_ptr<cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::Mtetriggerbooleantable::Mtetriggerbooleanentry> > mtetriggerbooleanentry;
        
}; // DISMANEVENTMIB::Mtetriggerbooleantable


class DISMANEVENTMIB::Mtetriggerbooleantable::Mtetriggerbooleanentry : public ydk::Entity
{
    public:
        Mtetriggerbooleanentry();
        ~Mtetriggerbooleanentry();

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

        //type: string (refers to cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::Mtetriggertable::Mtetriggerentry::mteowner)
        ydk::YLeaf mteowner;
        //type: string (refers to cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::Mtetriggertable::Mtetriggerentry::mtetriggername)
        ydk::YLeaf mtetriggername;
        ydk::YLeaf mtetriggerbooleancomparison; //type: Mtetriggerbooleancomparison
        ydk::YLeaf mtetriggerbooleanvalue; //type: int32
        ydk::YLeaf mtetriggerbooleanstartup; //type: boolean
        ydk::YLeaf mtetriggerbooleanobjectsowner; //type: string
        ydk::YLeaf mtetriggerbooleanobjects; //type: string
        ydk::YLeaf mtetriggerbooleaneventowner; //type: string
        ydk::YLeaf mtetriggerbooleanevent; //type: string
        class Mtetriggerbooleancomparison;

}; // DISMANEVENTMIB::Mtetriggerbooleantable::Mtetriggerbooleanentry


class DISMANEVENTMIB::Mtetriggerthresholdtable : public ydk::Entity
{
    public:
        Mtetriggerthresholdtable();
        ~Mtetriggerthresholdtable();

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

        class Mtetriggerthresholdentry; //type: DISMANEVENTMIB::Mtetriggerthresholdtable::Mtetriggerthresholdentry

        std::vector<std::shared_ptr<cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::Mtetriggerthresholdtable::Mtetriggerthresholdentry> > mtetriggerthresholdentry;
        
}; // DISMANEVENTMIB::Mtetriggerthresholdtable


class DISMANEVENTMIB::Mtetriggerthresholdtable::Mtetriggerthresholdentry : public ydk::Entity
{
    public:
        Mtetriggerthresholdentry();
        ~Mtetriggerthresholdentry();

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

        //type: string (refers to cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::Mtetriggertable::Mtetriggerentry::mteowner)
        ydk::YLeaf mteowner;
        //type: string (refers to cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::Mtetriggertable::Mtetriggerentry::mtetriggername)
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

}; // DISMANEVENTMIB::Mtetriggerthresholdtable::Mtetriggerthresholdentry


class DISMANEVENTMIB::Mteobjectstable : public ydk::Entity
{
    public:
        Mteobjectstable();
        ~Mteobjectstable();

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

        class Mteobjectsentry; //type: DISMANEVENTMIB::Mteobjectstable::Mteobjectsentry

        std::vector<std::shared_ptr<cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::Mteobjectstable::Mteobjectsentry> > mteobjectsentry;
        
}; // DISMANEVENTMIB::Mteobjectstable


class DISMANEVENTMIB::Mteobjectstable::Mteobjectsentry : public ydk::Entity
{
    public:
        Mteobjectsentry();
        ~Mteobjectsentry();

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

        //type: string (refers to cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::Mtetriggertable::Mtetriggerentry::mteowner)
        ydk::YLeaf mteowner;
        ydk::YLeaf mteobjectsname; //type: string
        ydk::YLeaf mteobjectsindex; //type: uint32
        ydk::YLeaf mteobjectsid; //type: string
        ydk::YLeaf mteobjectsidwildcard; //type: boolean
        ydk::YLeaf mteobjectsentrystatus; //type: RowStatus

}; // DISMANEVENTMIB::Mteobjectstable::Mteobjectsentry


class DISMANEVENTMIB::Mteeventtable : public ydk::Entity
{
    public:
        Mteeventtable();
        ~Mteeventtable();

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

        class Mteevententry; //type: DISMANEVENTMIB::Mteeventtable::Mteevententry

        std::vector<std::shared_ptr<cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::Mteeventtable::Mteevententry> > mteevententry;
        
}; // DISMANEVENTMIB::Mteeventtable


class DISMANEVENTMIB::Mteeventtable::Mteevententry : public ydk::Entity
{
    public:
        Mteevententry();
        ~Mteevententry();

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

        //type: string (refers to cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::Mtetriggertable::Mtetriggerentry::mteowner)
        ydk::YLeaf mteowner;
        ydk::YLeaf mteeventname; //type: string
        ydk::YLeaf mteeventcomment; //type: string
        ydk::YLeaf mteeventactions; //type: Mteeventactions
        ydk::YLeaf mteeventenabled; //type: boolean
        ydk::YLeaf mteevententrystatus; //type: RowStatus

}; // DISMANEVENTMIB::Mteeventtable::Mteevententry


class DISMANEVENTMIB::Mteeventnotificationtable : public ydk::Entity
{
    public:
        Mteeventnotificationtable();
        ~Mteeventnotificationtable();

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

        class Mteeventnotificationentry; //type: DISMANEVENTMIB::Mteeventnotificationtable::Mteeventnotificationentry

        std::vector<std::shared_ptr<cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::Mteeventnotificationtable::Mteeventnotificationentry> > mteeventnotificationentry;
        
}; // DISMANEVENTMIB::Mteeventnotificationtable


class DISMANEVENTMIB::Mteeventnotificationtable::Mteeventnotificationentry : public ydk::Entity
{
    public:
        Mteeventnotificationentry();
        ~Mteeventnotificationentry();

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

        //type: string (refers to cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::Mtetriggertable::Mtetriggerentry::mteowner)
        ydk::YLeaf mteowner;
        //type: string (refers to cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::Mteeventtable::Mteevententry::mteeventname)
        ydk::YLeaf mteeventname;
        ydk::YLeaf mteeventnotification; //type: string
        ydk::YLeaf mteeventnotificationobjectsowner; //type: string
        ydk::YLeaf mteeventnotificationobjects; //type: string

}; // DISMANEVENTMIB::Mteeventnotificationtable::Mteeventnotificationentry


class DISMANEVENTMIB::Mteeventsettable : public ydk::Entity
{
    public:
        Mteeventsettable();
        ~Mteeventsettable();

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

        class Mteeventsetentry; //type: DISMANEVENTMIB::Mteeventsettable::Mteeventsetentry

        std::vector<std::shared_ptr<cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::Mteeventsettable::Mteeventsetentry> > mteeventsetentry;
        
}; // DISMANEVENTMIB::Mteeventsettable


class DISMANEVENTMIB::Mteeventsettable::Mteeventsetentry : public ydk::Entity
{
    public:
        Mteeventsetentry();
        ~Mteeventsetentry();

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

        //type: string (refers to cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::Mtetriggertable::Mtetriggerentry::mteowner)
        ydk::YLeaf mteowner;
        //type: string (refers to cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::Mteeventtable::Mteevententry::mteeventname)
        ydk::YLeaf mteeventname;
        ydk::YLeaf mteeventsetobject; //type: string
        ydk::YLeaf mteeventsetobjectwildcard; //type: boolean
        ydk::YLeaf mteeventsetvalue; //type: int32
        ydk::YLeaf mteeventsettargettag; //type: string
        ydk::YLeaf mteeventsetcontextname; //type: string
        ydk::YLeaf mteeventsetcontextnamewildcard; //type: boolean

}; // DISMANEVENTMIB::Mteeventsettable::Mteeventsetentry

class FailureReason : public ydk::Enum
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

class DISMANEVENTMIB::Mtetriggertable::Mtetriggerentry::Mtetriggersampletype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf absoluteValue;
        static const ydk::Enum::YLeaf deltaValue;

};

class DISMANEVENTMIB::Mtetriggerdeltatable::Mtetriggerdeltaentry::Mtetriggerdeltadiscontinuityidtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf timeTicks;
        static const ydk::Enum::YLeaf timeStamp;
        static const ydk::Enum::YLeaf dateAndTime;

};

class DISMANEVENTMIB::Mtetriggerbooleantable::Mtetriggerbooleanentry::Mtetriggerbooleancomparison : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unequal;
        static const ydk::Enum::YLeaf equal;
        static const ydk::Enum::YLeaf less;
        static const ydk::Enum::YLeaf lessOrEqual;
        static const ydk::Enum::YLeaf greater;
        static const ydk::Enum::YLeaf greaterOrEqual;

};

class DISMANEVENTMIB::Mtetriggerthresholdtable::Mtetriggerthresholdentry::Mtetriggerthresholdstartup : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rising;
        static const ydk::Enum::YLeaf falling;
        static const ydk::Enum::YLeaf risingOrFalling;

};


}
}

#endif /* _DISMAN_EVENT_MIB_ */

