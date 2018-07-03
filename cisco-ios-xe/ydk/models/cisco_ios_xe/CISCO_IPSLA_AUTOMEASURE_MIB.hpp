#ifndef _CISCO_IPSLA_AUTOMEASURE_MIB_
#define _CISCO_IPSLA_AUTOMEASURE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IPSLA_AUTOMEASURE_MIB {

class CISCOIPSLAAUTOMEASUREMIB : public ydk::Entity
{
    public:
        CISCOIPSLAAUTOMEASUREMIB();
        ~CISCOIPSLAAUTOMEASUREMIB();

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

        class CipslaAutoGroupTable; //type: CISCOIPSLAAUTOMEASUREMIB::CipslaAutoGroupTable
        class CipslaAutoGroupDestTable; //type: CISCOIPSLAAUTOMEASUREMIB::CipslaAutoGroupDestTable
        class CipslaReactTable; //type: CISCOIPSLAAUTOMEASUREMIB::CipslaReactTable
        class CipslaAutoGroupSchedTable; //type: CISCOIPSLAAUTOMEASUREMIB::CipslaAutoGroupSchedTable

        std::shared_ptr<cisco_ios_xe::CISCO_IPSLA_AUTOMEASURE_MIB::CISCOIPSLAAUTOMEASUREMIB::CipslaAutoGroupTable> cipslaautogrouptable;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSLA_AUTOMEASURE_MIB::CISCOIPSLAAUTOMEASUREMIB::CipslaAutoGroupDestTable> cipslaautogroupdesttable;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSLA_AUTOMEASURE_MIB::CISCOIPSLAAUTOMEASUREMIB::CipslaReactTable> cipslareacttable;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSLA_AUTOMEASURE_MIB::CISCOIPSLAAUTOMEASUREMIB::CipslaAutoGroupSchedTable> cipslaautogroupschedtable;
        
}; // CISCOIPSLAAUTOMEASUREMIB


class CISCOIPSLAAUTOMEASUREMIB::CipslaAutoGroupTable : public ydk::Entity
{
    public:
        CipslaAutoGroupTable();
        ~CipslaAutoGroupTable();

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

        class CipslaAutoGroupEntry; //type: CISCOIPSLAAUTOMEASUREMIB::CipslaAutoGroupTable::CipslaAutoGroupEntry

        ydk::YList cipslaautogroupentry;
        
}; // CISCOIPSLAAUTOMEASUREMIB::CipslaAutoGroupTable


class CISCOIPSLAAUTOMEASUREMIB::CipslaAutoGroupTable::CipslaAutoGroupEntry : public ydk::Entity
{
    public:
        CipslaAutoGroupEntry();
        ~CipslaAutoGroupEntry();

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

        ydk::YLeaf cipslaautogroupname; //type: string
        ydk::YLeaf cipslaautogroupdescription; //type: string
        ydk::YLeaf cipslaautogroupdestinationname; //type: string
        ydk::YLeaf cipslaautogroupaddestport; //type: uint16
        ydk::YLeaf cipslaautogroupopertemplatename; //type: string
        ydk::YLeaf cipslaautogroupschedulerid; //type: string
        ydk::YLeaf cipslaautogroupqosenable; //type: boolean
        ydk::YLeaf cipslaautogroupopertype; //type: IpSlaOperType
        ydk::YLeaf cipslaautogroupdestipadenable; //type: boolean
        ydk::YLeaf cipslaautogroupadmeasureretry; //type: uint32
        ydk::YLeaf cipslaautogroupaddestipageout; //type: uint32
        ydk::YLeaf cipslaautogroupstoragetype; //type: StorageType
        ydk::YLeaf cipslaautogrouprowstatus; //type: RowStatus

}; // CISCOIPSLAAUTOMEASUREMIB::CipslaAutoGroupTable::CipslaAutoGroupEntry


class CISCOIPSLAAUTOMEASUREMIB::CipslaAutoGroupDestTable : public ydk::Entity
{
    public:
        CipslaAutoGroupDestTable();
        ~CipslaAutoGroupDestTable();

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

        class CipslaAutoGroupDestEntry; //type: CISCOIPSLAAUTOMEASUREMIB::CipslaAutoGroupDestTable::CipslaAutoGroupDestEntry

        ydk::YList cipslaautogroupdestentry;
        
}; // CISCOIPSLAAUTOMEASUREMIB::CipslaAutoGroupDestTable


class CISCOIPSLAAUTOMEASUREMIB::CipslaAutoGroupDestTable::CipslaAutoGroupDestEntry : public ydk::Entity
{
    public:
        CipslaAutoGroupDestEntry();
        ~CipslaAutoGroupDestEntry();

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

        ydk::YLeaf cipslaautogroupdestname; //type: string
        ydk::YLeaf cipslaautogroupdestipaddrtype; //type: InetAddressType
        ydk::YLeaf cipslaautogroupdestipaddr; //type: binary
        ydk::YLeaf cipslaautogroupdestport; //type: uint16
        ydk::YLeaf cipslaautogroupdeststoragetype; //type: StorageType
        ydk::YLeaf cipslaautogroupdestrowstatus; //type: RowStatus

}; // CISCOIPSLAAUTOMEASUREMIB::CipslaAutoGroupDestTable::CipslaAutoGroupDestEntry


class CISCOIPSLAAUTOMEASUREMIB::CipslaReactTable : public ydk::Entity
{
    public:
        CipslaReactTable();
        ~CipslaReactTable();

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

        class CipslaReactEntry; //type: CISCOIPSLAAUTOMEASUREMIB::CipslaReactTable::CipslaReactEntry

        ydk::YList cipslareactentry;
        
}; // CISCOIPSLAAUTOMEASUREMIB::CipslaReactTable


class CISCOIPSLAAUTOMEASUREMIB::CipslaReactTable::CipslaReactEntry : public ydk::Entity
{
    public:
        CipslaReactEntry();
        ~CipslaReactEntry();

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

        ydk::YLeaf cipslaautogroupopertype; //type: IpSlaOperType
        ydk::YLeaf cipslareactconfigindex; //type: uint32
        //type: string (refers to cisco_ios_xe::CISCO_IPSLA_AUTOMEASURE_MIB::CISCOIPSLAAUTOMEASUREMIB::CipslaAutoGroupTable::CipslaAutoGroupEntry::cipslaautogroupopertemplatename)
        ydk::YLeaf cipslaautogroupopertemplatename;
        ydk::YLeaf cipslareactvar; //type: IpSlaReactVar
        ydk::YLeaf cipslareactthresholdtype; //type: CipslaReactThresholdType
        ydk::YLeaf cipslareactactiontype; //type: CipslaReactActionType
        ydk::YLeaf cipslareactthresholdrising; //type: uint32
        ydk::YLeaf cipslareactthresholdfalling; //type: uint32
        ydk::YLeaf cipslareactthresholdcountx; //type: uint32
        ydk::YLeaf cipslareactthresholdcounty; //type: uint32
        ydk::YLeaf cipslareactstoragetype; //type: StorageType
        ydk::YLeaf cipslareactrowstatus; //type: RowStatus
        class CipslaReactThresholdType;
        class CipslaReactActionType;

}; // CISCOIPSLAAUTOMEASUREMIB::CipslaReactTable::CipslaReactEntry


class CISCOIPSLAAUTOMEASUREMIB::CipslaAutoGroupSchedTable : public ydk::Entity
{
    public:
        CipslaAutoGroupSchedTable();
        ~CipslaAutoGroupSchedTable();

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

        class CipslaAutoGroupSchedEntry; //type: CISCOIPSLAAUTOMEASUREMIB::CipslaAutoGroupSchedTable::CipslaAutoGroupSchedEntry

        ydk::YList cipslaautogroupschedentry;
        
}; // CISCOIPSLAAUTOMEASUREMIB::CipslaAutoGroupSchedTable


class CISCOIPSLAAUTOMEASUREMIB::CipslaAutoGroupSchedTable::CipslaAutoGroupSchedEntry : public ydk::Entity
{
    public:
        CipslaAutoGroupSchedEntry();
        ~CipslaAutoGroupSchedEntry();

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

        ydk::YLeaf cipslaautogroupschedid; //type: string
        ydk::YLeaf cipslaautogroupschedperiod; //type: uint32
        ydk::YLeaf cipslaautogroupschedinterval; //type: uint32
        ydk::YLeaf cipslaautogroupschedlife; //type: uint32
        ydk::YLeaf cipslaautogroupschedageout; //type: uint32
        ydk::YLeaf cipslaautogroupschedmaxinterval; //type: uint32
        ydk::YLeaf cipslaautogroupschedmininterval; //type: uint32
        ydk::YLeaf cipslaautogroupschedstarttime; //type: uint32
        ydk::YLeaf cipslaautogroupschedstoragetype; //type: StorageType
        ydk::YLeaf cipslaautogroupschedrowstatus; //type: RowStatus

}; // CISCOIPSLAAUTOMEASUREMIB::CipslaAutoGroupSchedTable::CipslaAutoGroupSchedEntry

class CISCOIPSLAAUTOMEASUREMIB::CipslaReactTable::CipslaReactEntry::CipslaReactThresholdType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf consecutive;
        static const ydk::Enum::YLeaf xOfy;
        static const ydk::Enum::YLeaf average;

};

class CISCOIPSLAAUTOMEASUREMIB::CipslaReactTable::CipslaReactEntry::CipslaReactActionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf notificationOnly;

};


}
}

#endif /* _CISCO_IPSLA_AUTOMEASURE_MIB_ */

