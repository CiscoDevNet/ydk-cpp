#ifndef _CISCO_ENTITY_FRU_CONTROL_MIB_
#define _CISCO_ENTITY_FRU_CONTROL_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
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
        class CefcModuleLocalSwitchingTable; //type: CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable
        class CefcFanTrayStatusTable; //type: CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable
        class CefcPhysicalTable; //type: CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable
        class CefcPowerSupplyInputTable; //type: CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable
        class CefcPowerSupplyOutputTable; //type: CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyOutputTable
        class CefcChassisCoolingTable; //type: CISCOENTITYFRUCONTROLMIB::CefcChassisCoolingTable
        class CefcFanCoolingTable; //type: CISCOENTITYFRUCONTROLMIB::CefcFanCoolingTable
        class CefcModuleCoolingTable; //type: CISCOENTITYFRUCONTROLMIB::CefcModuleCoolingTable
        class CefcFanCoolingCapTable; //type: CISCOENTITYFRUCONTROLMIB::CefcFanCoolingCapTable
        class CefcConnectorRatingTable; //type: CISCOENTITYFRUCONTROLMIB::CefcConnectorRatingTable
        class CefcModulePowerConsumptionTable; //type: CISCOENTITYFRUCONTROLMIB::CefcModulePowerConsumptionTable

        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::CefcFRUPower> cefcfrupower;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::CefcMIBNotificationEnables> cefcmibnotificationenables;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable> cefcfrupowersupplygrouptable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable> cefcfrupowerstatustable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable> cefcfrupowersupplyvaluetable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::CefcModuleTable> cefcmoduletable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable> cefcintellimoduletable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable> cefcmodulelocalswitchingtable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable> cefcfantraystatustable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable> cefcphysicaltable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable> cefcpowersupplyinputtable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyOutputTable> cefcpowersupplyoutputtable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::CefcChassisCoolingTable> cefcchassiscoolingtable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::CefcFanCoolingTable> cefcfancoolingtable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::CefcModuleCoolingTable> cefcmodulecoolingtable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::CefcFanCoolingCapTable> cefcfancoolingcaptable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::CefcConnectorRatingTable> cefcconnectorratingtable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::CefcModulePowerConsumptionTable> cefcmodulepowerconsumptiontable;
        
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

        ydk::YLeaf cefcmibenablestatusnotification; //type: boolean
        ydk::YLeaf cefcenablepsoutputchangenotif; //type: boolean

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cefcpowerredundancymode; //type: PowerRedundancyType
        ydk::YLeaf cefcpowerunits; //type: string
        ydk::YLeaf cefctotalavailablecurrent; //type: int32
        ydk::YLeaf cefctotaldrawncurrent; //type: int32
        ydk::YLeaf cefcpowerredundancyopermode; //type: PowerRedundancyType
        ydk::YLeaf cefcpowernonredundantreason; //type: CefcPowerNonRedundantReason
        ydk::YLeaf cefctotaldrawninlinecurrent; //type: int32
        class CefcPowerNonRedundantReason;

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cefcfrupoweradminstatus; //type: PowerAdminType
        ydk::YLeaf cefcfrupoweroperstatus; //type: PowerOperType
        ydk::YLeaf cefcfrucurrent; //type: int32
        ydk::YLeaf cefcfrupowercapability; //type: CefcFRUPowerCapability
        ydk::YLeaf cefcfrurealtimecurrent; //type: int32

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cefcintellimoduleipaddrtype; //type: InetAddressType
        ydk::YLeaf cefcintellimoduleipaddr; //type: binary

}; // CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable::CefcIntelliModuleEntry


class CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable : public ydk::Entity
{
    public:
        CefcModuleLocalSwitchingTable();
        ~CefcModuleLocalSwitchingTable();

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

        class CefcModuleLocalSwitchingEntry; //type: CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable::CefcModuleLocalSwitchingEntry

        ydk::YList cefcmodulelocalswitchingentry;
        
}; // CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable


class CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable::CefcModuleLocalSwitchingEntry : public ydk::Entity
{
    public:
        CefcModuleLocalSwitchingEntry();
        ~CefcModuleLocalSwitchingEntry();

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
        ydk::YLeaf cefcmodulelocalswitchingmode; //type: CefcModuleLocalSwitchingMode
        class CefcModuleLocalSwitchingMode;

}; // CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable::CefcModuleLocalSwitchingEntry


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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cefcfantrayoperstatus; //type: CefcFanTrayOperStatus
        class CefcFanTrayOperStatus;

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cefcphysicalstatus; //type: CefcPhysicalStatus
        class CefcPhysicalStatus;

}; // CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::CefcPhysicalEntry


class CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable : public ydk::Entity
{
    public:
        CefcPowerSupplyInputTable();
        ~CefcPowerSupplyInputTable();

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

        class CefcPowerSupplyInputEntry; //type: CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable::CefcPowerSupplyInputEntry

        ydk::YList cefcpowersupplyinputentry;
        
}; // CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable


class CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable::CefcPowerSupplyInputEntry : public ydk::Entity
{
    public:
        CefcPowerSupplyInputEntry();
        ~CefcPowerSupplyInputEntry();

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
        ydk::YLeaf cefcpowersupplyinputindex; //type: uint32
        ydk::YLeaf cefcpowersupplyinputtype; //type: CefcPowerSupplyInputType
        class CefcPowerSupplyInputType;

}; // CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable::CefcPowerSupplyInputEntry


class CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyOutputTable : public ydk::Entity
{
    public:
        CefcPowerSupplyOutputTable();
        ~CefcPowerSupplyOutputTable();

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

        class CefcPowerSupplyOutputEntry; //type: CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyOutputTable::CefcPowerSupplyOutputEntry

        ydk::YList cefcpowersupplyoutputentry;
        
}; // CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyOutputTable


class CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyOutputTable::CefcPowerSupplyOutputEntry : public ydk::Entity
{
    public:
        CefcPowerSupplyOutputEntry();
        ~CefcPowerSupplyOutputEntry();

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
        ydk::YLeaf cefcpsoutputmodeindex; //type: uint32
        ydk::YLeaf cefcpsoutputmodecurrent; //type: int32
        ydk::YLeaf cefcpsoutputmodeinoperation; //type: boolean

}; // CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyOutputTable::CefcPowerSupplyOutputEntry


class CISCOENTITYFRUCONTROLMIB::CefcChassisCoolingTable : public ydk::Entity
{
    public:
        CefcChassisCoolingTable();
        ~CefcChassisCoolingTable();

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

        class CefcChassisCoolingEntry; //type: CISCOENTITYFRUCONTROLMIB::CefcChassisCoolingTable::CefcChassisCoolingEntry

        ydk::YList cefcchassiscoolingentry;
        
}; // CISCOENTITYFRUCONTROLMIB::CefcChassisCoolingTable


class CISCOENTITYFRUCONTROLMIB::CefcChassisCoolingTable::CefcChassisCoolingEntry : public ydk::Entity
{
    public:
        CefcChassisCoolingEntry();
        ~CefcChassisCoolingEntry();

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
        ydk::YLeaf cefcchassisperslotcoolingcap; //type: uint32
        ydk::YLeaf cefcchassisperslotcoolingunit; //type: FRUCoolingUnit

}; // CISCOENTITYFRUCONTROLMIB::CefcChassisCoolingTable::CefcChassisCoolingEntry


class CISCOENTITYFRUCONTROLMIB::CefcFanCoolingTable : public ydk::Entity
{
    public:
        CefcFanCoolingTable();
        ~CefcFanCoolingTable();

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

        class CefcFanCoolingEntry; //type: CISCOENTITYFRUCONTROLMIB::CefcFanCoolingTable::CefcFanCoolingEntry

        ydk::YList cefcfancoolingentry;
        
}; // CISCOENTITYFRUCONTROLMIB::CefcFanCoolingTable


class CISCOENTITYFRUCONTROLMIB::CefcFanCoolingTable::CefcFanCoolingEntry : public ydk::Entity
{
    public:
        CefcFanCoolingEntry();
        ~CefcFanCoolingEntry();

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
        ydk::YLeaf cefcfancoolingcapacity; //type: uint32
        ydk::YLeaf cefcfancoolingcapacityunit; //type: FRUCoolingUnit

}; // CISCOENTITYFRUCONTROLMIB::CefcFanCoolingTable::CefcFanCoolingEntry


class CISCOENTITYFRUCONTROLMIB::CefcModuleCoolingTable : public ydk::Entity
{
    public:
        CefcModuleCoolingTable();
        ~CefcModuleCoolingTable();

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

        class CefcModuleCoolingEntry; //type: CISCOENTITYFRUCONTROLMIB::CefcModuleCoolingTable::CefcModuleCoolingEntry

        ydk::YList cefcmodulecoolingentry;
        
}; // CISCOENTITYFRUCONTROLMIB::CefcModuleCoolingTable


class CISCOENTITYFRUCONTROLMIB::CefcModuleCoolingTable::CefcModuleCoolingEntry : public ydk::Entity
{
    public:
        CefcModuleCoolingEntry();
        ~CefcModuleCoolingEntry();

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
        ydk::YLeaf cefcmodulecooling; //type: uint32
        ydk::YLeaf cefcmodulecoolingunit; //type: FRUCoolingUnit

}; // CISCOENTITYFRUCONTROLMIB::CefcModuleCoolingTable::CefcModuleCoolingEntry


class CISCOENTITYFRUCONTROLMIB::CefcFanCoolingCapTable : public ydk::Entity
{
    public:
        CefcFanCoolingCapTable();
        ~CefcFanCoolingCapTable();

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

        class CefcFanCoolingCapEntry; //type: CISCOENTITYFRUCONTROLMIB::CefcFanCoolingCapTable::CefcFanCoolingCapEntry

        ydk::YList cefcfancoolingcapentry;
        
}; // CISCOENTITYFRUCONTROLMIB::CefcFanCoolingCapTable


class CISCOENTITYFRUCONTROLMIB::CefcFanCoolingCapTable::CefcFanCoolingCapEntry : public ydk::Entity
{
    public:
        CefcFanCoolingCapEntry();
        ~CefcFanCoolingCapEntry();

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
        ydk::YLeaf cefcfancoolingcapindex; //type: uint32
        ydk::YLeaf cefcfancoolingcapmodedescr; //type: string
        ydk::YLeaf cefcfancoolingcapcapacity; //type: uint32
        ydk::YLeaf cefcfancoolingcapcurrent; //type: int32
        ydk::YLeaf cefcfancoolingcapcapacityunit; //type: FRUCoolingUnit

}; // CISCOENTITYFRUCONTROLMIB::CefcFanCoolingCapTable::CefcFanCoolingCapEntry


class CISCOENTITYFRUCONTROLMIB::CefcConnectorRatingTable : public ydk::Entity
{
    public:
        CefcConnectorRatingTable();
        ~CefcConnectorRatingTable();

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

        class CefcConnectorRatingEntry; //type: CISCOENTITYFRUCONTROLMIB::CefcConnectorRatingTable::CefcConnectorRatingEntry

        ydk::YList cefcconnectorratingentry;
        
}; // CISCOENTITYFRUCONTROLMIB::CefcConnectorRatingTable


class CISCOENTITYFRUCONTROLMIB::CefcConnectorRatingTable::CefcConnectorRatingEntry : public ydk::Entity
{
    public:
        CefcConnectorRatingEntry();
        ~CefcConnectorRatingEntry();

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
        ydk::YLeaf cefcconnectorrating; //type: int32

}; // CISCOENTITYFRUCONTROLMIB::CefcConnectorRatingTable::CefcConnectorRatingEntry


class CISCOENTITYFRUCONTROLMIB::CefcModulePowerConsumptionTable : public ydk::Entity
{
    public:
        CefcModulePowerConsumptionTable();
        ~CefcModulePowerConsumptionTable();

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

        class CefcModulePowerConsumptionEntry; //type: CISCOENTITYFRUCONTROLMIB::CefcModulePowerConsumptionTable::CefcModulePowerConsumptionEntry

        ydk::YList cefcmodulepowerconsumptionentry;
        
}; // CISCOENTITYFRUCONTROLMIB::CefcModulePowerConsumptionTable


class CISCOENTITYFRUCONTROLMIB::CefcModulePowerConsumptionTable::CefcModulePowerConsumptionEntry : public ydk::Entity
{
    public:
        CefcModulePowerConsumptionEntry();
        ~CefcModulePowerConsumptionEntry();

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
        ydk::YLeaf cefcmodulepowerconsumption; //type: int32

}; // CISCOENTITYFRUCONTROLMIB::CefcModulePowerConsumptionTable::CefcModulePowerConsumptionEntry

class ModuleAdminType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf reset;
        static const ydk::Enum::YLeaf outOfServiceAdmin;

};

class FRUCoolingUnit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cfm;
        static const ydk::Enum::YLeaf watts;

};

class PowerAdminType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf inlineAuto;
        static const ydk::Enum::YLeaf inlineOn;
        static const ydk::Enum::YLeaf powerCycle;

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
        static const ydk::Enum::YLeaf syncInProgress;
        static const ydk::Enum::YLeaf upgrading;
        static const ydk::Enum::YLeaf okButAuthFailed;
        static const ydk::Enum::YLeaf mdr;
        static const ydk::Enum::YLeaf fwMismatchFound;
        static const ydk::Enum::YLeaf fwDownloadSuccess;
        static const ydk::Enum::YLeaf fwDownloadFailure;

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

class PowerRedundancyType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notsupported;
        static const ydk::Enum::YLeaf redundant;
        static const ydk::Enum::YLeaf combined;
        static const ydk::Enum::YLeaf nonRedundant;
        static const ydk::Enum::YLeaf psRedundant;
        static const ydk::Enum::YLeaf inPwrSrcRedundant;
        static const ydk::Enum::YLeaf psRedundantSingleInput;

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
        static const ydk::Enum::YLeaf offCooling;
        static const ydk::Enum::YLeaf offConnectorRating;
        static const ydk::Enum::YLeaf onButInlinePowerFail;

};

class CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::CefcFRUPowerSupplyGroupEntry::CefcPowerNonRedundantReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notApplicable;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf singleSupply;
        static const ydk::Enum::YLeaf mismatchedSupplies;
        static const ydk::Enum::YLeaf supplyError;

};

class CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable::CefcModuleLocalSwitchingEntry::CefcModuleLocalSwitchingMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::CefcFanTrayStatusEntry::CefcFanTrayOperStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf warning;

};

class CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::CefcPhysicalEntry::CefcPhysicalStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf supported;
        static const ydk::Enum::YLeaf unsupported;
        static const ydk::Enum::YLeaf incompatible;

};

class CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable::CefcPowerSupplyInputEntry::CefcPowerSupplyInputType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf acLow;
        static const ydk::Enum::YLeaf acHigh;
        static const ydk::Enum::YLeaf dcLow;
        static const ydk::Enum::YLeaf dcHigh;

};


}
}

#endif /* _CISCO_ENTITY_FRU_CONTROL_MIB_ */

