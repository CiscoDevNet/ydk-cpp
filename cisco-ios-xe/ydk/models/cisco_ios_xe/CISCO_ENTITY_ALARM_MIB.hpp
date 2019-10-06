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

        class CeAlarmMonitoring; //type: CISCOENTITYALARMMIB::CeAlarmMonitoring
        class CeAlarmHistory; //type: CISCOENTITYALARMMIB::CeAlarmHistory
        class CeAlarmFiltering; //type: CISCOENTITYALARMMIB::CeAlarmFiltering
        class CeAlarmDescrMapTable; //type: CISCOENTITYALARMMIB::CeAlarmDescrMapTable
        class CeAlarmDescrTable; //type: CISCOENTITYALARMMIB::CeAlarmDescrTable
        class CeAlarmTable; //type: CISCOENTITYALARMMIB::CeAlarmTable
        class CeAlarmHistTable; //type: CISCOENTITYALARMMIB::CeAlarmHistTable
        class CeAlarmFilterProfileTable; //type: CISCOENTITYALARMMIB::CeAlarmFilterProfileTable

        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_ALARM_MIB::CISCOENTITYALARMMIB::CeAlarmMonitoring> cealarmmonitoring;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_ALARM_MIB::CISCOENTITYALARMMIB::CeAlarmHistory> cealarmhistory;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_ALARM_MIB::CISCOENTITYALARMMIB::CeAlarmFiltering> cealarmfiltering;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_ALARM_MIB::CISCOENTITYALARMMIB::CeAlarmDescrMapTable> cealarmdescrmaptable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_ALARM_MIB::CISCOENTITYALARMMIB::CeAlarmDescrTable> cealarmdescrtable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_ALARM_MIB::CISCOENTITYALARMMIB::CeAlarmTable> cealarmtable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_ALARM_MIB::CISCOENTITYALARMMIB::CeAlarmHistTable> cealarmhisttable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_ALARM_MIB::CISCOENTITYALARMMIB::CeAlarmFilterProfileTable> cealarmfilterprofiletable;
        
}; // CISCOENTITYALARMMIB


class CISCOENTITYALARMMIB::CeAlarmMonitoring : public ydk::Entity
{
    public:
        CeAlarmMonitoring();
        ~CeAlarmMonitoring();

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

}; // CISCOENTITYALARMMIB::CeAlarmMonitoring


class CISCOENTITYALARMMIB::CeAlarmHistory : public ydk::Entity
{
    public:
        CeAlarmHistory();
        ~CeAlarmHistory();

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

}; // CISCOENTITYALARMMIB::CeAlarmHistory


class CISCOENTITYALARMMIB::CeAlarmFiltering : public ydk::Entity
{
    public:
        CeAlarmFiltering();
        ~CeAlarmFiltering();

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

}; // CISCOENTITYALARMMIB::CeAlarmFiltering


class CISCOENTITYALARMMIB::CeAlarmDescrMapTable : public ydk::Entity
{
    public:
        CeAlarmDescrMapTable();
        ~CeAlarmDescrMapTable();

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

        class CeAlarmDescrMapEntry; //type: CISCOENTITYALARMMIB::CeAlarmDescrMapTable::CeAlarmDescrMapEntry

        ydk::YList cealarmdescrmapentry;
        
}; // CISCOENTITYALARMMIB::CeAlarmDescrMapTable


class CISCOENTITYALARMMIB::CeAlarmDescrMapTable::CeAlarmDescrMapEntry : public ydk::Entity
{
    public:
        CeAlarmDescrMapEntry();
        ~CeAlarmDescrMapEntry();

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

}; // CISCOENTITYALARMMIB::CeAlarmDescrMapTable::CeAlarmDescrMapEntry


class CISCOENTITYALARMMIB::CeAlarmDescrTable : public ydk::Entity
{
    public:
        CeAlarmDescrTable();
        ~CeAlarmDescrTable();

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

        class CeAlarmDescrEntry; //type: CISCOENTITYALARMMIB::CeAlarmDescrTable::CeAlarmDescrEntry

        ydk::YList cealarmdescrentry;
        
}; // CISCOENTITYALARMMIB::CeAlarmDescrTable


class CISCOENTITYALARMMIB::CeAlarmDescrTable::CeAlarmDescrEntry : public ydk::Entity
{
    public:
        CeAlarmDescrEntry();
        ~CeAlarmDescrEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_ENTITY_ALARM_MIB::CISCOENTITYALARMMIB::CeAlarmDescrMapTable::CeAlarmDescrMapEntry::cealarmdescrindex)
        ydk::YLeaf cealarmdescrindex;
        ydk::YLeaf cealarmdescralarmtype; //type: int32
        ydk::YLeaf cealarmdescrseverity; //type: int32
        ydk::YLeaf cealarmdescrtext; //type: string

}; // CISCOENTITYALARMMIB::CeAlarmDescrTable::CeAlarmDescrEntry


class CISCOENTITYALARMMIB::CeAlarmTable : public ydk::Entity
{
    public:
        CeAlarmTable();
        ~CeAlarmTable();

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

        class CeAlarmEntry; //type: CISCOENTITYALARMMIB::CeAlarmTable::CeAlarmEntry

        ydk::YList cealarmentry;
        
}; // CISCOENTITYALARMMIB::CeAlarmTable


class CISCOENTITYALARMMIB::CeAlarmTable::CeAlarmEntry : public ydk::Entity
{
    public:
        CeAlarmEntry();
        ~CeAlarmEntry();

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
        ydk::YLeaf cealarmfilterprofile; //type: uint32
        ydk::YLeaf cealarmseverity; //type: int32
        ydk::YLeaf cealarmlist; //type: binary

}; // CISCOENTITYALARMMIB::CeAlarmTable::CeAlarmEntry


class CISCOENTITYALARMMIB::CeAlarmHistTable : public ydk::Entity
{
    public:
        CeAlarmHistTable();
        ~CeAlarmHistTable();

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

        class CeAlarmHistEntry; //type: CISCOENTITYALARMMIB::CeAlarmHistTable::CeAlarmHistEntry

        ydk::YList cealarmhistentry;
        
}; // CISCOENTITYALARMMIB::CeAlarmHistTable


class CISCOENTITYALARMMIB::CeAlarmHistTable::CeAlarmHistEntry : public ydk::Entity
{
    public:
        CeAlarmHistEntry();
        ~CeAlarmHistEntry();

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
        ydk::YLeaf cealarmhisttype; //type: CeAlarmHistType
        ydk::YLeaf cealarmhistentphysicalindex; //type: int32
        ydk::YLeaf cealarmhistalarmtype; //type: int32
        ydk::YLeaf cealarmhistseverity; //type: AlarmSeverity
        ydk::YLeaf cealarmhisttimestamp; //type: uint32
        class CeAlarmHistType;

}; // CISCOENTITYALARMMIB::CeAlarmHistTable::CeAlarmHistEntry


class CISCOENTITYALARMMIB::CeAlarmFilterProfileTable : public ydk::Entity
{
    public:
        CeAlarmFilterProfileTable();
        ~CeAlarmFilterProfileTable();

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

        class CeAlarmFilterProfileEntry; //type: CISCOENTITYALARMMIB::CeAlarmFilterProfileTable::CeAlarmFilterProfileEntry

        ydk::YList cealarmfilterprofileentry;
        
}; // CISCOENTITYALARMMIB::CeAlarmFilterProfileTable


class CISCOENTITYALARMMIB::CeAlarmFilterProfileTable::CeAlarmFilterProfileEntry : public ydk::Entity
{
    public:
        CeAlarmFilterProfileEntry();
        ~CeAlarmFilterProfileEntry();

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

}; // CISCOENTITYALARMMIB::CeAlarmFilterProfileTable::CeAlarmFilterProfileEntry

class AlarmSeverity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf major_;
        static const ydk::Enum::YLeaf minor;
        static const ydk::Enum::YLeaf info;

        static int get_enum_value(const std::string & name) {
            if (name == "critical") return 1;
            if (name == "major") return 2;
            if (name == "minor") return 3;
            if (name == "info") return 4;
            return -1;
        }
};

class CISCOENTITYALARMMIB::CeAlarmHistTable::CeAlarmHistEntry::CeAlarmHistType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf asserted;
        static const ydk::Enum::YLeaf cleared;

        static int get_enum_value(const std::string & name) {
            if (name == "asserted") return 1;
            if (name == "cleared") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_ENTITY_ALARM_MIB_ */

