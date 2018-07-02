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

        class MteResource; //type: DISMANEVENTMIB::MteResource
        class MteTrigger; //type: DISMANEVENTMIB::MteTrigger
        class MteEvent; //type: DISMANEVENTMIB::MteEvent
        class MteTriggerTable; //type: DISMANEVENTMIB::MteTriggerTable
        class MteTriggerDeltaTable; //type: DISMANEVENTMIB::MteTriggerDeltaTable
        class MteTriggerExistenceTable; //type: DISMANEVENTMIB::MteTriggerExistenceTable
        class MteTriggerBooleanTable; //type: DISMANEVENTMIB::MteTriggerBooleanTable
        class MteTriggerThresholdTable; //type: DISMANEVENTMIB::MteTriggerThresholdTable
        class MteObjectsTable; //type: DISMANEVENTMIB::MteObjectsTable
        class MteEventTable; //type: DISMANEVENTMIB::MteEventTable
        class MteEventNotificationTable; //type: DISMANEVENTMIB::MteEventNotificationTable
        class MteEventSetTable; //type: DISMANEVENTMIB::MteEventSetTable

        std::shared_ptr<cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::MteResource> mteresource;
        std::shared_ptr<cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::MteTrigger> mtetrigger;
        std::shared_ptr<cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::MteEvent> mteevent;
        std::shared_ptr<cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::MteTriggerTable> mtetriggertable;
        std::shared_ptr<cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::MteTriggerDeltaTable> mtetriggerdeltatable;
        std::shared_ptr<cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::MteTriggerExistenceTable> mtetriggerexistencetable;
        std::shared_ptr<cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::MteTriggerBooleanTable> mtetriggerbooleantable;
        std::shared_ptr<cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::MteTriggerThresholdTable> mtetriggerthresholdtable;
        std::shared_ptr<cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::MteObjectsTable> mteobjectstable;
        std::shared_ptr<cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::MteEventTable> mteeventtable;
        std::shared_ptr<cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::MteEventNotificationTable> mteeventnotificationtable;
        std::shared_ptr<cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::MteEventSetTable> mteeventsettable;
        
}; // DISMANEVENTMIB


class DISMANEVENTMIB::MteResource : public ydk::Entity
{
    public:
        MteResource();
        ~MteResource();

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

}; // DISMANEVENTMIB::MteResource


class DISMANEVENTMIB::MteTrigger : public ydk::Entity
{
    public:
        MteTrigger();
        ~MteTrigger();

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

}; // DISMANEVENTMIB::MteTrigger


class DISMANEVENTMIB::MteEvent : public ydk::Entity
{
    public:
        MteEvent();
        ~MteEvent();

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

}; // DISMANEVENTMIB::MteEvent


class DISMANEVENTMIB::MteTriggerTable : public ydk::Entity
{
    public:
        MteTriggerTable();
        ~MteTriggerTable();

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

        class MteTriggerEntry; //type: DISMANEVENTMIB::MteTriggerTable::MteTriggerEntry

        ydk::YList mtetriggerentry;
        
}; // DISMANEVENTMIB::MteTriggerTable


class DISMANEVENTMIB::MteTriggerTable::MteTriggerEntry : public ydk::Entity
{
    public:
        MteTriggerEntry();
        ~MteTriggerEntry();

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
        ydk::YLeaf mtetriggertest; //type: MteTriggerTest
        ydk::YLeaf mtetriggersampletype; //type: MteTriggerSampleType
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
        class MteTriggerSampleType;

}; // DISMANEVENTMIB::MteTriggerTable::MteTriggerEntry


class DISMANEVENTMIB::MteTriggerDeltaTable : public ydk::Entity
{
    public:
        MteTriggerDeltaTable();
        ~MteTriggerDeltaTable();

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

        class MteTriggerDeltaEntry; //type: DISMANEVENTMIB::MteTriggerDeltaTable::MteTriggerDeltaEntry

        ydk::YList mtetriggerdeltaentry;
        
}; // DISMANEVENTMIB::MteTriggerDeltaTable


class DISMANEVENTMIB::MteTriggerDeltaTable::MteTriggerDeltaEntry : public ydk::Entity
{
    public:
        MteTriggerDeltaEntry();
        ~MteTriggerDeltaEntry();

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

        //type: string (refers to cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::MteTriggerTable::MteTriggerEntry::mteowner)
        ydk::YLeaf mteowner;
        //type: string (refers to cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::MteTriggerTable::MteTriggerEntry::mtetriggername)
        ydk::YLeaf mtetriggername;
        ydk::YLeaf mtetriggerdeltadiscontinuityid; //type: string
        ydk::YLeaf mtetriggerdeltadiscontinuityidwildcard; //type: boolean
        ydk::YLeaf mtetriggerdeltadiscontinuityidtype; //type: MteTriggerDeltaDiscontinuityIDType
        class MteTriggerDeltaDiscontinuityIDType;

}; // DISMANEVENTMIB::MteTriggerDeltaTable::MteTriggerDeltaEntry


class DISMANEVENTMIB::MteTriggerExistenceTable : public ydk::Entity
{
    public:
        MteTriggerExistenceTable();
        ~MteTriggerExistenceTable();

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

        class MteTriggerExistenceEntry; //type: DISMANEVENTMIB::MteTriggerExistenceTable::MteTriggerExistenceEntry

        ydk::YList mtetriggerexistenceentry;
        
}; // DISMANEVENTMIB::MteTriggerExistenceTable


class DISMANEVENTMIB::MteTriggerExistenceTable::MteTriggerExistenceEntry : public ydk::Entity
{
    public:
        MteTriggerExistenceEntry();
        ~MteTriggerExistenceEntry();

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

        //type: string (refers to cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::MteTriggerTable::MteTriggerEntry::mteowner)
        ydk::YLeaf mteowner;
        //type: string (refers to cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::MteTriggerTable::MteTriggerEntry::mtetriggername)
        ydk::YLeaf mtetriggername;
        ydk::YLeaf mtetriggerexistencetest; //type: MteTriggerExistenceTest
        ydk::YLeaf mtetriggerexistencestartup; //type: MteTriggerExistenceStartup
        ydk::YLeaf mtetriggerexistenceobjectsowner; //type: string
        ydk::YLeaf mtetriggerexistenceobjects; //type: string
        ydk::YLeaf mtetriggerexistenceeventowner; //type: string
        ydk::YLeaf mtetriggerexistenceevent; //type: string

}; // DISMANEVENTMIB::MteTriggerExistenceTable::MteTriggerExistenceEntry


class DISMANEVENTMIB::MteTriggerBooleanTable : public ydk::Entity
{
    public:
        MteTriggerBooleanTable();
        ~MteTriggerBooleanTable();

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

        class MteTriggerBooleanEntry; //type: DISMANEVENTMIB::MteTriggerBooleanTable::MteTriggerBooleanEntry

        ydk::YList mtetriggerbooleanentry;
        
}; // DISMANEVENTMIB::MteTriggerBooleanTable


class DISMANEVENTMIB::MteTriggerBooleanTable::MteTriggerBooleanEntry : public ydk::Entity
{
    public:
        MteTriggerBooleanEntry();
        ~MteTriggerBooleanEntry();

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

        //type: string (refers to cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::MteTriggerTable::MteTriggerEntry::mteowner)
        ydk::YLeaf mteowner;
        //type: string (refers to cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::MteTriggerTable::MteTriggerEntry::mtetriggername)
        ydk::YLeaf mtetriggername;
        ydk::YLeaf mtetriggerbooleancomparison; //type: MteTriggerBooleanComparison
        ydk::YLeaf mtetriggerbooleanvalue; //type: int32
        ydk::YLeaf mtetriggerbooleanstartup; //type: boolean
        ydk::YLeaf mtetriggerbooleanobjectsowner; //type: string
        ydk::YLeaf mtetriggerbooleanobjects; //type: string
        ydk::YLeaf mtetriggerbooleaneventowner; //type: string
        ydk::YLeaf mtetriggerbooleanevent; //type: string
        class MteTriggerBooleanComparison;

}; // DISMANEVENTMIB::MteTriggerBooleanTable::MteTriggerBooleanEntry


class DISMANEVENTMIB::MteTriggerThresholdTable : public ydk::Entity
{
    public:
        MteTriggerThresholdTable();
        ~MteTriggerThresholdTable();

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

        class MteTriggerThresholdEntry; //type: DISMANEVENTMIB::MteTriggerThresholdTable::MteTriggerThresholdEntry

        ydk::YList mtetriggerthresholdentry;
        
}; // DISMANEVENTMIB::MteTriggerThresholdTable


class DISMANEVENTMIB::MteTriggerThresholdTable::MteTriggerThresholdEntry : public ydk::Entity
{
    public:
        MteTriggerThresholdEntry();
        ~MteTriggerThresholdEntry();

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

        //type: string (refers to cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::MteTriggerTable::MteTriggerEntry::mteowner)
        ydk::YLeaf mteowner;
        //type: string (refers to cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::MteTriggerTable::MteTriggerEntry::mtetriggername)
        ydk::YLeaf mtetriggername;
        ydk::YLeaf mtetriggerthresholdstartup; //type: MteTriggerThresholdStartup
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
        class MteTriggerThresholdStartup;

}; // DISMANEVENTMIB::MteTriggerThresholdTable::MteTriggerThresholdEntry


class DISMANEVENTMIB::MteObjectsTable : public ydk::Entity
{
    public:
        MteObjectsTable();
        ~MteObjectsTable();

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

        class MteObjectsEntry; //type: DISMANEVENTMIB::MteObjectsTable::MteObjectsEntry

        ydk::YList mteobjectsentry;
        
}; // DISMANEVENTMIB::MteObjectsTable


class DISMANEVENTMIB::MteObjectsTable::MteObjectsEntry : public ydk::Entity
{
    public:
        MteObjectsEntry();
        ~MteObjectsEntry();

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

        //type: string (refers to cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::MteTriggerTable::MteTriggerEntry::mteowner)
        ydk::YLeaf mteowner;
        ydk::YLeaf mteobjectsname; //type: string
        ydk::YLeaf mteobjectsindex; //type: uint32
        ydk::YLeaf mteobjectsid; //type: string
        ydk::YLeaf mteobjectsidwildcard; //type: boolean
        ydk::YLeaf mteobjectsentrystatus; //type: RowStatus

}; // DISMANEVENTMIB::MteObjectsTable::MteObjectsEntry


class DISMANEVENTMIB::MteEventTable : public ydk::Entity
{
    public:
        MteEventTable();
        ~MteEventTable();

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

        class MteEventEntry; //type: DISMANEVENTMIB::MteEventTable::MteEventEntry

        ydk::YList mteevententry;
        
}; // DISMANEVENTMIB::MteEventTable


class DISMANEVENTMIB::MteEventTable::MteEventEntry : public ydk::Entity
{
    public:
        MteEventEntry();
        ~MteEventEntry();

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

        //type: string (refers to cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::MteTriggerTable::MteTriggerEntry::mteowner)
        ydk::YLeaf mteowner;
        ydk::YLeaf mteeventname; //type: string
        ydk::YLeaf mteeventcomment; //type: string
        ydk::YLeaf mteeventactions; //type: MteEventActions
        ydk::YLeaf mteeventenabled; //type: boolean
        ydk::YLeaf mteevententrystatus; //type: RowStatus

}; // DISMANEVENTMIB::MteEventTable::MteEventEntry


class DISMANEVENTMIB::MteEventNotificationTable : public ydk::Entity
{
    public:
        MteEventNotificationTable();
        ~MteEventNotificationTable();

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

        class MteEventNotificationEntry; //type: DISMANEVENTMIB::MteEventNotificationTable::MteEventNotificationEntry

        ydk::YList mteeventnotificationentry;
        
}; // DISMANEVENTMIB::MteEventNotificationTable


class DISMANEVENTMIB::MteEventNotificationTable::MteEventNotificationEntry : public ydk::Entity
{
    public:
        MteEventNotificationEntry();
        ~MteEventNotificationEntry();

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

        //type: string (refers to cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::MteTriggerTable::MteTriggerEntry::mteowner)
        ydk::YLeaf mteowner;
        //type: string (refers to cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::MteEventTable::MteEventEntry::mteeventname)
        ydk::YLeaf mteeventname;
        ydk::YLeaf mteeventnotification; //type: string
        ydk::YLeaf mteeventnotificationobjectsowner; //type: string
        ydk::YLeaf mteeventnotificationobjects; //type: string

}; // DISMANEVENTMIB::MteEventNotificationTable::MteEventNotificationEntry


class DISMANEVENTMIB::MteEventSetTable : public ydk::Entity
{
    public:
        MteEventSetTable();
        ~MteEventSetTable();

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

        class MteEventSetEntry; //type: DISMANEVENTMIB::MteEventSetTable::MteEventSetEntry

        ydk::YList mteeventsetentry;
        
}; // DISMANEVENTMIB::MteEventSetTable


class DISMANEVENTMIB::MteEventSetTable::MteEventSetEntry : public ydk::Entity
{
    public:
        MteEventSetEntry();
        ~MteEventSetEntry();

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

        //type: string (refers to cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::MteTriggerTable::MteTriggerEntry::mteowner)
        ydk::YLeaf mteowner;
        //type: string (refers to cisco_ios_xe::DISMAN_EVENT_MIB::DISMANEVENTMIB::MteEventTable::MteEventEntry::mteeventname)
        ydk::YLeaf mteeventname;
        ydk::YLeaf mteeventsetobject; //type: string
        ydk::YLeaf mteeventsetobjectwildcard; //type: boolean
        ydk::YLeaf mteeventsetvalue; //type: int32
        ydk::YLeaf mteeventsettargettag; //type: string
        ydk::YLeaf mteeventsetcontextname; //type: string
        ydk::YLeaf mteeventsetcontextnamewildcard; //type: boolean

}; // DISMANEVENTMIB::MteEventSetTable::MteEventSetEntry

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

class DISMANEVENTMIB::MteTriggerTable::MteTriggerEntry::MteTriggerSampleType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf absoluteValue;
        static const ydk::Enum::YLeaf deltaValue;

};

class DISMANEVENTMIB::MteTriggerDeltaTable::MteTriggerDeltaEntry::MteTriggerDeltaDiscontinuityIDType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf timeTicks;
        static const ydk::Enum::YLeaf timeStamp;
        static const ydk::Enum::YLeaf dateAndTime;

};

class DISMANEVENTMIB::MteTriggerBooleanTable::MteTriggerBooleanEntry::MteTriggerBooleanComparison : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unequal;
        static const ydk::Enum::YLeaf equal;
        static const ydk::Enum::YLeaf less;
        static const ydk::Enum::YLeaf lessOrEqual;
        static const ydk::Enum::YLeaf greater;
        static const ydk::Enum::YLeaf greaterOrEqual;

};

class DISMANEVENTMIB::MteTriggerThresholdTable::MteTriggerThresholdEntry::MteTriggerThresholdStartup : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rising;
        static const ydk::Enum::YLeaf falling;
        static const ydk::Enum::YLeaf risingOrFalling;

};


}
}

#endif /* _DISMAN_EVENT_MIB_ */

