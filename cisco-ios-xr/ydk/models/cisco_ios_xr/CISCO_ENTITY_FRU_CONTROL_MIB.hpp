#ifndef _CISCO_ENTITY_FRU_CONTROL_MIB_
#define _CISCO_ENTITY_FRU_CONTROL_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace CISCO_ENTITY_FRU_CONTROL_MIB {

class CISCOENTITYFRUCONTROLMIB : public ydk::Entity
{
    public:
        CISCOENTITYFRUCONTROLMIB();
        ~CISCOENTITYFRUCONTROLMIB();

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

        class CefcFRUPower; //type: CISCOENTITYFRUCONTROLMIB::CefcFRUPower
        class CefcMIBNotificationEnables; //type: CISCOENTITYFRUCONTROLMIB::CefcMIBNotificationEnables
        class CefcFRUPowerSupplyGroupTable; //type: CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable
        class CefcFRUPowerStatusTable; //type: CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable
        class CefcFRUPowerSupplyValueTable; //type: CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable
        class CefcModuleTable; //type: CISCOENTITYFRUCONTROLMIB::CefcModuleTable
        class CefcIntelliModuleTable; //type: CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable
        class CefcFanTrayStatusTable; //type: CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable
        class CefcPhysicalTable; //type: CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable

        std::shared_ptr<cisco_ios_xr::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::CefcFRUPower> cefcfrupower;
        std::shared_ptr<cisco_ios_xr::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::CefcMIBNotificationEnables> cefcmibnotificationenables;
        std::shared_ptr<cisco_ios_xr::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable> cefcfrupowersupplygrouptable;
        std::shared_ptr<cisco_ios_xr::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable> cefcfrupowerstatustable;
        std::shared_ptr<cisco_ios_xr::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable> cefcfrupowersupplyvaluetable;
        std::shared_ptr<cisco_ios_xr::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::CefcModuleTable> cefcmoduletable;
        std::shared_ptr<cisco_ios_xr::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable> cefcintellimoduletable;
        std::shared_ptr<cisco_ios_xr::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable> cefcfantraystatustable;
        std::shared_ptr<cisco_ios_xr::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable> cefcphysicaltable;
        
}; // CISCOENTITYFRUCONTROLMIB


class CISCOENTITYFRUCONTROLMIB::CefcFRUPower : public ydk::Entity
{
    public:
        CefcFRUPower();
        ~CefcFRUPower();

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

        ydk::YLeaf cefcmaxdefaultinlinepower; //type: int32
        ydk::YLeaf cefcmaxdefaulthighinlinepower; //type: uint32

}; // CISCOENTITYFRUCONTROLMIB::CefcFRUPower


class CISCOENTITYFRUCONTROLMIB::CefcMIBNotificationEnables : public ydk::Entity
{
    public:
        CefcMIBNotificationEnables();
        ~CefcMIBNotificationEnables();

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

        ydk::YLeaf cefcmibenablestatusnotification; //type: TruthValue

}; // CISCOENTITYFRUCONTROLMIB::CefcMIBNotificationEnables


class CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable : public ydk::Entity
{
    public:
        CefcFRUPowerSupplyGroupTable();
        ~CefcFRUPowerSupplyGroupTable();

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

        class CefcFRUPowerSupplyGroupEntry; //type: CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::CefcFRUPowerSupplyGroupEntry

        ydk::YList cefcfrupowersupplygroupentry;
        
}; // CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable


class CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::CefcFRUPowerSupplyGroupEntry : public ydk::Entity
{
    public:
        CefcFRUPowerSupplyGroupEntry();
        ~CefcFRUPowerSupplyGroupEntry();

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
        ydk::YLeaf cefcpowerredundancymode; //type: PowerRedundancyType
        ydk::YLeaf cefcpowerunits; //type: string
        ydk::YLeaf cefctotalavailablecurrent; //type: int32
        ydk::YLeaf cefctotaldrawncurrent; //type: int32
        ydk::YLeaf cefcpowerredundancyopermode; //type: PowerRedundancyType

}; // CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::CefcFRUPowerSupplyGroupEntry


class CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable : public ydk::Entity
{
    public:
        CefcFRUPowerStatusTable();
        ~CefcFRUPowerStatusTable();

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

        class CefcFRUPowerStatusEntry; //type: CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable::CefcFRUPowerStatusEntry

        ydk::YList cefcfrupowerstatusentry;
        
}; // CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable


class CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable::CefcFRUPowerStatusEntry : public ydk::Entity
{
    public:
        CefcFRUPowerStatusEntry();
        ~CefcFRUPowerStatusEntry();

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
        ydk::YLeaf cefcfrupoweradminstatus; //type: PowerAdminType
        ydk::YLeaf cefcfrupoweroperstatus; //type: PowerOperType
        ydk::YLeaf cefcfrucurrent; //type: int32

}; // CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable::CefcFRUPowerStatusEntry


class CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable : public ydk::Entity
{
    public:
        CefcFRUPowerSupplyValueTable();
        ~CefcFRUPowerSupplyValueTable();

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

        class CefcFRUPowerSupplyValueEntry; //type: CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable::CefcFRUPowerSupplyValueEntry

        ydk::YList cefcfrupowersupplyvalueentry;
        
}; // CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable


class CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable::CefcFRUPowerSupplyValueEntry : public ydk::Entity
{
    public:
        CefcFRUPowerSupplyValueEntry();
        ~CefcFRUPowerSupplyValueEntry();

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
        ydk::YLeaf cefcfrutotalsystemcurrent; //type: int32
        ydk::YLeaf cefcfrudrawnsystemcurrent; //type: int32
        ydk::YLeaf cefcfrutotalinlinecurrent; //type: int32
        ydk::YLeaf cefcfrudrawninlinecurrent; //type: int32

}; // CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable::CefcFRUPowerSupplyValueEntry


class CISCOENTITYFRUCONTROLMIB::CefcModuleTable : public ydk::Entity
{
    public:
        CefcModuleTable();
        ~CefcModuleTable();

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

        class CefcModuleEntry; //type: CISCOENTITYFRUCONTROLMIB::CefcModuleTable::CefcModuleEntry

        ydk::YList cefcmoduleentry;
        
}; // CISCOENTITYFRUCONTROLMIB::CefcModuleTable


class CISCOENTITYFRUCONTROLMIB::CefcModuleTable::CefcModuleEntry : public ydk::Entity
{
    public:
        CefcModuleEntry();
        ~CefcModuleEntry();

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
        ydk::YLeaf cefcmoduleadminstatus; //type: ModuleAdminType
        ydk::YLeaf cefcmoduleoperstatus; //type: ModuleOperType
        ydk::YLeaf cefcmoduleresetreason; //type: ModuleResetReasonType
        ydk::YLeaf cefcmodulestatuslastchangetime; //type: uint32
        ydk::YLeaf cefcmodulelastclearconfigtime; //type: uint32
        ydk::YLeaf cefcmoduleresetreasondescription; //type: string
        ydk::YLeaf cefcmodulestatechangereasondescr; //type: string
        ydk::YLeaf cefcmoduleuptime; //type: uint32

}; // CISCOENTITYFRUCONTROLMIB::CefcModuleTable::CefcModuleEntry


class CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable : public ydk::Entity
{
    public:
        CefcIntelliModuleTable();
        ~CefcIntelliModuleTable();

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

        class CefcIntelliModuleEntry; //type: CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable::CefcIntelliModuleEntry

        ydk::YList cefcintellimoduleentry;
        
}; // CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable


class CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable::CefcIntelliModuleEntry : public ydk::Entity
{
    public:
        CefcIntelliModuleEntry();
        ~CefcIntelliModuleEntry();

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
        ydk::YLeaf cefcintellimoduleipaddrtype; //type: InetAddressType
        ydk::YLeaf cefcintellimoduleipaddr; //type: string

}; // CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable::CefcIntelliModuleEntry


class CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable : public ydk::Entity
{
    public:
        CefcFanTrayStatusTable();
        ~CefcFanTrayStatusTable();

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

        class CefcFanTrayStatusEntry; //type: CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::CefcFanTrayStatusEntry

        ydk::YList cefcfantraystatusentry;
        
}; // CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable


class CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::CefcFanTrayStatusEntry : public ydk::Entity
{
    public:
        CefcFanTrayStatusEntry();
        ~CefcFanTrayStatusEntry();

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
        ydk::YLeaf cefcfantrayoperstatus; //type: CefcFanTrayOperStatusType

}; // CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::CefcFanTrayStatusEntry


class CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable : public ydk::Entity
{
    public:
        CefcPhysicalTable();
        ~CefcPhysicalTable();

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

        class CefcPhysicalEntry; //type: CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::CefcPhysicalEntry

        ydk::YList cefcphysicalentry;
        
}; // CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable


class CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::CefcPhysicalEntry : public ydk::Entity
{
    public:
        CefcPhysicalEntry();
        ~CefcPhysicalEntry();

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
        ydk::YLeaf cefcphysicalstatus; //type: CefcPhysicalStatusType

}; // CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::CefcPhysicalEntry

class PowerRedundancyType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notsupported;
        static const ydk::Enum::YLeaf redundant;
        static const ydk::Enum::YLeaf combined;

};

class PowerAdminType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf inlineAuto;
        static const ydk::Enum::YLeaf inlineOn;

};

class PowerOperType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf offEnvOther;
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf offAdmin;
        static const ydk::Enum::YLeaf offDenied;
        static const ydk::Enum::YLeaf offEnvPower;
        static const ydk::Enum::YLeaf offEnvTemp;
        static const ydk::Enum::YLeaf offEnvFan;
        static const ydk::Enum::YLeaf failed;
        static const ydk::Enum::YLeaf onButFanFail;

};

class ModuleAdminType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf reset;
        static const ydk::Enum::YLeaf outOfServiceAdmin;

};

class ModuleOperType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf ok;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf okButDiagFailed;
        static const ydk::Enum::YLeaf boot;
        static const ydk::Enum::YLeaf selfTest;
        static const ydk::Enum::YLeaf failed;
        static const ydk::Enum::YLeaf missing;
        static const ydk::Enum::YLeaf mismatchWithParent;
        static const ydk::Enum::YLeaf mismatchConfig;
        static const ydk::Enum::YLeaf diagFailed;
        static const ydk::Enum::YLeaf dormant;
        static const ydk::Enum::YLeaf outOfServiceAdmin;
        static const ydk::Enum::YLeaf outOfServiceEnvTemp;
        static const ydk::Enum::YLeaf poweredDown;
        static const ydk::Enum::YLeaf poweredUp;
        static const ydk::Enum::YLeaf powerDenied;
        static const ydk::Enum::YLeaf powerCycled;
        static const ydk::Enum::YLeaf okButPowerOverWarning;
        static const ydk::Enum::YLeaf okButPowerOverCritical;
        static const ydk::Enum::YLeaf updatingFPD;

};

class ModuleResetReasonType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf powerUp;
        static const ydk::Enum::YLeaf parityError;
        static const ydk::Enum::YLeaf clearConfigReset;
        static const ydk::Enum::YLeaf manualReset;
        static const ydk::Enum::YLeaf watchDogTimeoutReset;
        static const ydk::Enum::YLeaf resourceOverflowReset;
        static const ydk::Enum::YLeaf missingTaskReset;
        static const ydk::Enum::YLeaf lowVoltageReset;
        static const ydk::Enum::YLeaf controllerReset;
        static const ydk::Enum::YLeaf systemReset;
        static const ydk::Enum::YLeaf switchoverReset;
        static const ydk::Enum::YLeaf upgradeReset;
        static const ydk::Enum::YLeaf downgradeReset;
        static const ydk::Enum::YLeaf cacheErrorReset;
        static const ydk::Enum::YLeaf deviceDriverReset;
        static const ydk::Enum::YLeaf softwareExceptionReset;
        static const ydk::Enum::YLeaf restoreConfigReset;
        static const ydk::Enum::YLeaf abortRevReset;
        static const ydk::Enum::YLeaf burnBootReset;
        static const ydk::Enum::YLeaf standbyCdHealthierReset;
        static const ydk::Enum::YLeaf nonNativeConfigClearReset;
        static const ydk::Enum::YLeaf memoryProtectionErrorReset;

};

class CefcFanTrayOperStatusType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf warning;

};

class CefcPhysicalStatusType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf supported;
        static const ydk::Enum::YLeaf unsupported;
        static const ydk::Enum::YLeaf incompatible;

};


}
}

#endif /* _CISCO_ENTITY_FRU_CONTROL_MIB_ */

