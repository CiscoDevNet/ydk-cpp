
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_ENTITY_FRU_CONTROL_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_ENTITY_FRU_CONTROL_MIB {

CISCOENTITYFRUCONTROLMIB::CISCOENTITYFRUCONTROLMIB()
    :
    cefcfrupower(std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcFRUPower>())
    , cefcmibnotificationenables(std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcMIBNotificationEnables>())
    , cefcfrupowersupplygrouptable(std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable>())
    , cefcfrupowerstatustable(std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable>())
    , cefcfrupowersupplyvaluetable(std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable>())
    , cefcmoduletable(std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcModuleTable>())
    , cefcintellimoduletable(std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable>())
    , cefcmodulelocalswitchingtable(std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable>())
    , cefcfantraystatustable(std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable>())
    , cefcphysicaltable(std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable>())
    , cefcpowersupplyinputtable(std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable>())
    , cefcpowersupplyoutputtable(std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyOutputTable>())
    , cefcchassiscoolingtable(std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcChassisCoolingTable>())
    , cefcfancoolingtable(std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcFanCoolingTable>())
    , cefcmodulecoolingtable(std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcModuleCoolingTable>())
    , cefcfancoolingcaptable(std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcFanCoolingCapTable>())
    , cefcconnectorratingtable(std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcConnectorRatingTable>())
    , cefcmodulepowerconsumptiontable(std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcModulePowerConsumptionTable>())
{
    cefcfrupower->parent = this;
    cefcmibnotificationenables->parent = this;
    cefcfrupowersupplygrouptable->parent = this;
    cefcfrupowerstatustable->parent = this;
    cefcfrupowersupplyvaluetable->parent = this;
    cefcmoduletable->parent = this;
    cefcintellimoduletable->parent = this;
    cefcmodulelocalswitchingtable->parent = this;
    cefcfantraystatustable->parent = this;
    cefcphysicaltable->parent = this;
    cefcpowersupplyinputtable->parent = this;
    cefcpowersupplyoutputtable->parent = this;
    cefcchassiscoolingtable->parent = this;
    cefcfancoolingtable->parent = this;
    cefcmodulecoolingtable->parent = this;
    cefcfancoolingcaptable->parent = this;
    cefcconnectorratingtable->parent = this;
    cefcmodulepowerconsumptiontable->parent = this;

    yang_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::~CISCOENTITYFRUCONTROLMIB()
{
}

bool CISCOENTITYFRUCONTROLMIB::has_data() const
{
    if (is_presence_container) return true;
    return (cefcfrupower !=  nullptr && cefcfrupower->has_data())
	|| (cefcmibnotificationenables !=  nullptr && cefcmibnotificationenables->has_data())
	|| (cefcfrupowersupplygrouptable !=  nullptr && cefcfrupowersupplygrouptable->has_data())
	|| (cefcfrupowerstatustable !=  nullptr && cefcfrupowerstatustable->has_data())
	|| (cefcfrupowersupplyvaluetable !=  nullptr && cefcfrupowersupplyvaluetable->has_data())
	|| (cefcmoduletable !=  nullptr && cefcmoduletable->has_data())
	|| (cefcintellimoduletable !=  nullptr && cefcintellimoduletable->has_data())
	|| (cefcmodulelocalswitchingtable !=  nullptr && cefcmodulelocalswitchingtable->has_data())
	|| (cefcfantraystatustable !=  nullptr && cefcfantraystatustable->has_data())
	|| (cefcphysicaltable !=  nullptr && cefcphysicaltable->has_data())
	|| (cefcpowersupplyinputtable !=  nullptr && cefcpowersupplyinputtable->has_data())
	|| (cefcpowersupplyoutputtable !=  nullptr && cefcpowersupplyoutputtable->has_data())
	|| (cefcchassiscoolingtable !=  nullptr && cefcchassiscoolingtable->has_data())
	|| (cefcfancoolingtable !=  nullptr && cefcfancoolingtable->has_data())
	|| (cefcmodulecoolingtable !=  nullptr && cefcmodulecoolingtable->has_data())
	|| (cefcfancoolingcaptable !=  nullptr && cefcfancoolingcaptable->has_data())
	|| (cefcconnectorratingtable !=  nullptr && cefcconnectorratingtable->has_data())
	|| (cefcmodulepowerconsumptiontable !=  nullptr && cefcmodulepowerconsumptiontable->has_data());
}

bool CISCOENTITYFRUCONTROLMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cefcfrupower !=  nullptr && cefcfrupower->has_operation())
	|| (cefcmibnotificationenables !=  nullptr && cefcmibnotificationenables->has_operation())
	|| (cefcfrupowersupplygrouptable !=  nullptr && cefcfrupowersupplygrouptable->has_operation())
	|| (cefcfrupowerstatustable !=  nullptr && cefcfrupowerstatustable->has_operation())
	|| (cefcfrupowersupplyvaluetable !=  nullptr && cefcfrupowersupplyvaluetable->has_operation())
	|| (cefcmoduletable !=  nullptr && cefcmoduletable->has_operation())
	|| (cefcintellimoduletable !=  nullptr && cefcintellimoduletable->has_operation())
	|| (cefcmodulelocalswitchingtable !=  nullptr && cefcmodulelocalswitchingtable->has_operation())
	|| (cefcfantraystatustable !=  nullptr && cefcfantraystatustable->has_operation())
	|| (cefcphysicaltable !=  nullptr && cefcphysicaltable->has_operation())
	|| (cefcpowersupplyinputtable !=  nullptr && cefcpowersupplyinputtable->has_operation())
	|| (cefcpowersupplyoutputtable !=  nullptr && cefcpowersupplyoutputtable->has_operation())
	|| (cefcchassiscoolingtable !=  nullptr && cefcchassiscoolingtable->has_operation())
	|| (cefcfancoolingtable !=  nullptr && cefcfancoolingtable->has_operation())
	|| (cefcmodulecoolingtable !=  nullptr && cefcmodulecoolingtable->has_operation())
	|| (cefcfancoolingcaptable !=  nullptr && cefcfancoolingcaptable->has_operation())
	|| (cefcconnectorratingtable !=  nullptr && cefcconnectorratingtable->has_operation())
	|| (cefcmodulepowerconsumptiontable !=  nullptr && cefcmodulepowerconsumptiontable->has_operation());
}

std::string CISCOENTITYFRUCONTROLMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcFRUPower")
    {
        if(cefcfrupower == nullptr)
        {
            cefcfrupower = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcFRUPower>();
        }
        return cefcfrupower;
    }

    if(child_yang_name == "cefcMIBNotificationEnables")
    {
        if(cefcmibnotificationenables == nullptr)
        {
            cefcmibnotificationenables = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcMIBNotificationEnables>();
        }
        return cefcmibnotificationenables;
    }

    if(child_yang_name == "cefcFRUPowerSupplyGroupTable")
    {
        if(cefcfrupowersupplygrouptable == nullptr)
        {
            cefcfrupowersupplygrouptable = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable>();
        }
        return cefcfrupowersupplygrouptable;
    }

    if(child_yang_name == "cefcFRUPowerStatusTable")
    {
        if(cefcfrupowerstatustable == nullptr)
        {
            cefcfrupowerstatustable = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable>();
        }
        return cefcfrupowerstatustable;
    }

    if(child_yang_name == "cefcFRUPowerSupplyValueTable")
    {
        if(cefcfrupowersupplyvaluetable == nullptr)
        {
            cefcfrupowersupplyvaluetable = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable>();
        }
        return cefcfrupowersupplyvaluetable;
    }

    if(child_yang_name == "cefcModuleTable")
    {
        if(cefcmoduletable == nullptr)
        {
            cefcmoduletable = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcModuleTable>();
        }
        return cefcmoduletable;
    }

    if(child_yang_name == "cefcIntelliModuleTable")
    {
        if(cefcintellimoduletable == nullptr)
        {
            cefcintellimoduletable = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable>();
        }
        return cefcintellimoduletable;
    }

    if(child_yang_name == "cefcModuleLocalSwitchingTable")
    {
        if(cefcmodulelocalswitchingtable == nullptr)
        {
            cefcmodulelocalswitchingtable = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable>();
        }
        return cefcmodulelocalswitchingtable;
    }

    if(child_yang_name == "cefcFanTrayStatusTable")
    {
        if(cefcfantraystatustable == nullptr)
        {
            cefcfantraystatustable = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable>();
        }
        return cefcfantraystatustable;
    }

    if(child_yang_name == "cefcPhysicalTable")
    {
        if(cefcphysicaltable == nullptr)
        {
            cefcphysicaltable = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable>();
        }
        return cefcphysicaltable;
    }

    if(child_yang_name == "cefcPowerSupplyInputTable")
    {
        if(cefcpowersupplyinputtable == nullptr)
        {
            cefcpowersupplyinputtable = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable>();
        }
        return cefcpowersupplyinputtable;
    }

    if(child_yang_name == "cefcPowerSupplyOutputTable")
    {
        if(cefcpowersupplyoutputtable == nullptr)
        {
            cefcpowersupplyoutputtable = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyOutputTable>();
        }
        return cefcpowersupplyoutputtable;
    }

    if(child_yang_name == "cefcChassisCoolingTable")
    {
        if(cefcchassiscoolingtable == nullptr)
        {
            cefcchassiscoolingtable = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcChassisCoolingTable>();
        }
        return cefcchassiscoolingtable;
    }

    if(child_yang_name == "cefcFanCoolingTable")
    {
        if(cefcfancoolingtable == nullptr)
        {
            cefcfancoolingtable = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcFanCoolingTable>();
        }
        return cefcfancoolingtable;
    }

    if(child_yang_name == "cefcModuleCoolingTable")
    {
        if(cefcmodulecoolingtable == nullptr)
        {
            cefcmodulecoolingtable = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcModuleCoolingTable>();
        }
        return cefcmodulecoolingtable;
    }

    if(child_yang_name == "cefcFanCoolingCapTable")
    {
        if(cefcfancoolingcaptable == nullptr)
        {
            cefcfancoolingcaptable = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcFanCoolingCapTable>();
        }
        return cefcfancoolingcaptable;
    }

    if(child_yang_name == "cefcConnectorRatingTable")
    {
        if(cefcconnectorratingtable == nullptr)
        {
            cefcconnectorratingtable = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcConnectorRatingTable>();
        }
        return cefcconnectorratingtable;
    }

    if(child_yang_name == "cefcModulePowerConsumptionTable")
    {
        if(cefcmodulepowerconsumptiontable == nullptr)
        {
            cefcmodulepowerconsumptiontable = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcModulePowerConsumptionTable>();
        }
        return cefcmodulepowerconsumptiontable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cefcfrupower != nullptr)
    {
        children["cefcFRUPower"] = cefcfrupower;
    }

    if(cefcmibnotificationenables != nullptr)
    {
        children["cefcMIBNotificationEnables"] = cefcmibnotificationenables;
    }

    if(cefcfrupowersupplygrouptable != nullptr)
    {
        children["cefcFRUPowerSupplyGroupTable"] = cefcfrupowersupplygrouptable;
    }

    if(cefcfrupowerstatustable != nullptr)
    {
        children["cefcFRUPowerStatusTable"] = cefcfrupowerstatustable;
    }

    if(cefcfrupowersupplyvaluetable != nullptr)
    {
        children["cefcFRUPowerSupplyValueTable"] = cefcfrupowersupplyvaluetable;
    }

    if(cefcmoduletable != nullptr)
    {
        children["cefcModuleTable"] = cefcmoduletable;
    }

    if(cefcintellimoduletable != nullptr)
    {
        children["cefcIntelliModuleTable"] = cefcintellimoduletable;
    }

    if(cefcmodulelocalswitchingtable != nullptr)
    {
        children["cefcModuleLocalSwitchingTable"] = cefcmodulelocalswitchingtable;
    }

    if(cefcfantraystatustable != nullptr)
    {
        children["cefcFanTrayStatusTable"] = cefcfantraystatustable;
    }

    if(cefcphysicaltable != nullptr)
    {
        children["cefcPhysicalTable"] = cefcphysicaltable;
    }

    if(cefcpowersupplyinputtable != nullptr)
    {
        children["cefcPowerSupplyInputTable"] = cefcpowersupplyinputtable;
    }

    if(cefcpowersupplyoutputtable != nullptr)
    {
        children["cefcPowerSupplyOutputTable"] = cefcpowersupplyoutputtable;
    }

    if(cefcchassiscoolingtable != nullptr)
    {
        children["cefcChassisCoolingTable"] = cefcchassiscoolingtable;
    }

    if(cefcfancoolingtable != nullptr)
    {
        children["cefcFanCoolingTable"] = cefcfancoolingtable;
    }

    if(cefcmodulecoolingtable != nullptr)
    {
        children["cefcModuleCoolingTable"] = cefcmodulecoolingtable;
    }

    if(cefcfancoolingcaptable != nullptr)
    {
        children["cefcFanCoolingCapTable"] = cefcfancoolingcaptable;
    }

    if(cefcconnectorratingtable != nullptr)
    {
        children["cefcConnectorRatingTable"] = cefcconnectorratingtable;
    }

    if(cefcmodulepowerconsumptiontable != nullptr)
    {
        children["cefcModulePowerConsumptionTable"] = cefcmodulepowerconsumptiontable;
    }

    return children;
}

void CISCOENTITYFRUCONTROLMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYFRUCONTROLMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::clone_ptr() const
{
    return std::make_shared<CISCOENTITYFRUCONTROLMIB>();
}

std::string CISCOENTITYFRUCONTROLMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOENTITYFRUCONTROLMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOENTITYFRUCONTROLMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOENTITYFRUCONTROLMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOENTITYFRUCONTROLMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcFRUPower" || name == "cefcMIBNotificationEnables" || name == "cefcFRUPowerSupplyGroupTable" || name == "cefcFRUPowerStatusTable" || name == "cefcFRUPowerSupplyValueTable" || name == "cefcModuleTable" || name == "cefcIntelliModuleTable" || name == "cefcModuleLocalSwitchingTable" || name == "cefcFanTrayStatusTable" || name == "cefcPhysicalTable" || name == "cefcPowerSupplyInputTable" || name == "cefcPowerSupplyOutputTable" || name == "cefcChassisCoolingTable" || name == "cefcFanCoolingTable" || name == "cefcModuleCoolingTable" || name == "cefcFanCoolingCapTable" || name == "cefcConnectorRatingTable" || name == "cefcModulePowerConsumptionTable")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::CefcFRUPower::CefcFRUPower()
    :
    cefcmaxdefaultinlinepower{YType::int32, "cefcMaxDefaultInLinePower"},
    cefcmaxdefaulthighinlinepower{YType::uint32, "cefcMaxDefaultHighInLinePower"}
{

    yang_name = "cefcFRUPower"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::CefcFRUPower::~CefcFRUPower()
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcFRUPower::has_data() const
{
    if (is_presence_container) return true;
    return cefcmaxdefaultinlinepower.is_set
	|| cefcmaxdefaulthighinlinepower.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::CefcFRUPower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cefcmaxdefaultinlinepower.yfilter)
	|| ydk::is_set(cefcmaxdefaulthighinlinepower.yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::CefcFRUPower::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::CefcFRUPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFRUPower";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::CefcFRUPower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cefcmaxdefaultinlinepower.is_set || is_set(cefcmaxdefaultinlinepower.yfilter)) leaf_name_data.push_back(cefcmaxdefaultinlinepower.get_name_leafdata());
    if (cefcmaxdefaulthighinlinepower.is_set || is_set(cefcmaxdefaulthighinlinepower.yfilter)) leaf_name_data.push_back(cefcmaxdefaulthighinlinepower.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::CefcFRUPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::CefcFRUPower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::CefcFRUPower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cefcMaxDefaultInLinePower")
    {
        cefcmaxdefaultinlinepower = value;
        cefcmaxdefaultinlinepower.value_namespace = name_space;
        cefcmaxdefaultinlinepower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcMaxDefaultHighInLinePower")
    {
        cefcmaxdefaulthighinlinepower = value;
        cefcmaxdefaulthighinlinepower.value_namespace = name_space;
        cefcmaxdefaulthighinlinepower.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENTITYFRUCONTROLMIB::CefcFRUPower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cefcMaxDefaultInLinePower")
    {
        cefcmaxdefaultinlinepower.yfilter = yfilter;
    }
    if(value_path == "cefcMaxDefaultHighInLinePower")
    {
        cefcmaxdefaulthighinlinepower.yfilter = yfilter;
    }
}

bool CISCOENTITYFRUCONTROLMIB::CefcFRUPower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcMaxDefaultInLinePower" || name == "cefcMaxDefaultHighInLinePower")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::CefcMIBNotificationEnables::CefcMIBNotificationEnables()
    :
    cefcmibenablestatusnotification{YType::boolean, "cefcMIBEnableStatusNotification"},
    cefcenablepsoutputchangenotif{YType::boolean, "cefcEnablePSOutputChangeNotif"}
{

    yang_name = "cefcMIBNotificationEnables"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::CefcMIBNotificationEnables::~CefcMIBNotificationEnables()
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcMIBNotificationEnables::has_data() const
{
    if (is_presence_container) return true;
    return cefcmibenablestatusnotification.is_set
	|| cefcenablepsoutputchangenotif.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::CefcMIBNotificationEnables::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cefcmibenablestatusnotification.yfilter)
	|| ydk::is_set(cefcenablepsoutputchangenotif.yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::CefcMIBNotificationEnables::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::CefcMIBNotificationEnables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcMIBNotificationEnables";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::CefcMIBNotificationEnables::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cefcmibenablestatusnotification.is_set || is_set(cefcmibenablestatusnotification.yfilter)) leaf_name_data.push_back(cefcmibenablestatusnotification.get_name_leafdata());
    if (cefcenablepsoutputchangenotif.is_set || is_set(cefcenablepsoutputchangenotif.yfilter)) leaf_name_data.push_back(cefcenablepsoutputchangenotif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::CefcMIBNotificationEnables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::CefcMIBNotificationEnables::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::CefcMIBNotificationEnables::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cefcMIBEnableStatusNotification")
    {
        cefcmibenablestatusnotification = value;
        cefcmibenablestatusnotification.value_namespace = name_space;
        cefcmibenablestatusnotification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcEnablePSOutputChangeNotif")
    {
        cefcenablepsoutputchangenotif = value;
        cefcenablepsoutputchangenotif.value_namespace = name_space;
        cefcenablepsoutputchangenotif.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENTITYFRUCONTROLMIB::CefcMIBNotificationEnables::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cefcMIBEnableStatusNotification")
    {
        cefcmibenablestatusnotification.yfilter = yfilter;
    }
    if(value_path == "cefcEnablePSOutputChangeNotif")
    {
        cefcenablepsoutputchangenotif.yfilter = yfilter;
    }
}

bool CISCOENTITYFRUCONTROLMIB::CefcMIBNotificationEnables::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcMIBEnableStatusNotification" || name == "cefcEnablePSOutputChangeNotif")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::CefcFRUPowerSupplyGroupTable()
    :
    cefcfrupowersupplygroupentry(this, {"entphysicalindex"})
{

    yang_name = "cefcFRUPowerSupplyGroupTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::~CefcFRUPowerSupplyGroupTable()
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cefcfrupowersupplygroupentry.len(); index++)
    {
        if(cefcfrupowersupplygroupentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::has_operation() const
{
    for (std::size_t index=0; index<cefcfrupowersupplygroupentry.len(); index++)
    {
        if(cefcfrupowersupplygroupentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFRUPowerSupplyGroupTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcFRUPowerSupplyGroupEntry")
    {
        auto c = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::CefcFRUPowerSupplyGroupEntry>();
        c->parent = this;
        cefcfrupowersupplygroupentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cefcfrupowersupplygroupentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcFRUPowerSupplyGroupEntry")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::CefcFRUPowerSupplyGroupEntry::CefcFRUPowerSupplyGroupEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcpowerredundancymode{YType::enumeration, "cefcPowerRedundancyMode"},
    cefcpowerunits{YType::str, "cefcPowerUnits"},
    cefctotalavailablecurrent{YType::int32, "cefcTotalAvailableCurrent"},
    cefctotaldrawncurrent{YType::int32, "cefcTotalDrawnCurrent"},
    cefcpowerredundancyopermode{YType::enumeration, "cefcPowerRedundancyOperMode"},
    cefcpowernonredundantreason{YType::enumeration, "cefcPowerNonRedundantReason"},
    cefctotaldrawninlinecurrent{YType::int32, "cefcTotalDrawnInlineCurrent"}
{

    yang_name = "cefcFRUPowerSupplyGroupEntry"; yang_parent_name = "cefcFRUPowerSupplyGroupTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::CefcFRUPowerSupplyGroupEntry::~CefcFRUPowerSupplyGroupEntry()
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::CefcFRUPowerSupplyGroupEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| cefcpowerredundancymode.is_set
	|| cefcpowerunits.is_set
	|| cefctotalavailablecurrent.is_set
	|| cefctotaldrawncurrent.is_set
	|| cefcpowerredundancyopermode.is_set
	|| cefcpowernonredundantreason.is_set
	|| cefctotaldrawninlinecurrent.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::CefcFRUPowerSupplyGroupEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcpowerredundancymode.yfilter)
	|| ydk::is_set(cefcpowerunits.yfilter)
	|| ydk::is_set(cefctotalavailablecurrent.yfilter)
	|| ydk::is_set(cefctotaldrawncurrent.yfilter)
	|| ydk::is_set(cefcpowerredundancyopermode.yfilter)
	|| ydk::is_set(cefcpowernonredundantreason.yfilter)
	|| ydk::is_set(cefctotaldrawninlinecurrent.yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::CefcFRUPowerSupplyGroupEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcFRUPowerSupplyGroupTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::CefcFRUPowerSupplyGroupEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFRUPowerSupplyGroupEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::CefcFRUPowerSupplyGroupEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcpowerredundancymode.is_set || is_set(cefcpowerredundancymode.yfilter)) leaf_name_data.push_back(cefcpowerredundancymode.get_name_leafdata());
    if (cefcpowerunits.is_set || is_set(cefcpowerunits.yfilter)) leaf_name_data.push_back(cefcpowerunits.get_name_leafdata());
    if (cefctotalavailablecurrent.is_set || is_set(cefctotalavailablecurrent.yfilter)) leaf_name_data.push_back(cefctotalavailablecurrent.get_name_leafdata());
    if (cefctotaldrawncurrent.is_set || is_set(cefctotaldrawncurrent.yfilter)) leaf_name_data.push_back(cefctotaldrawncurrent.get_name_leafdata());
    if (cefcpowerredundancyopermode.is_set || is_set(cefcpowerredundancyopermode.yfilter)) leaf_name_data.push_back(cefcpowerredundancyopermode.get_name_leafdata());
    if (cefcpowernonredundantreason.is_set || is_set(cefcpowernonredundantreason.yfilter)) leaf_name_data.push_back(cefcpowernonredundantreason.get_name_leafdata());
    if (cefctotaldrawninlinecurrent.is_set || is_set(cefctotaldrawninlinecurrent.yfilter)) leaf_name_data.push_back(cefctotaldrawninlinecurrent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::CefcFRUPowerSupplyGroupEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::CefcFRUPowerSupplyGroupEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::CefcFRUPowerSupplyGroupEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcPowerRedundancyMode")
    {
        cefcpowerredundancymode = value;
        cefcpowerredundancymode.value_namespace = name_space;
        cefcpowerredundancymode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcPowerUnits")
    {
        cefcpowerunits = value;
        cefcpowerunits.value_namespace = name_space;
        cefcpowerunits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcTotalAvailableCurrent")
    {
        cefctotalavailablecurrent = value;
        cefctotalavailablecurrent.value_namespace = name_space;
        cefctotalavailablecurrent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcTotalDrawnCurrent")
    {
        cefctotaldrawncurrent = value;
        cefctotaldrawncurrent.value_namespace = name_space;
        cefctotaldrawncurrent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcPowerRedundancyOperMode")
    {
        cefcpowerredundancyopermode = value;
        cefcpowerredundancyopermode.value_namespace = name_space;
        cefcpowerredundancyopermode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcPowerNonRedundantReason")
    {
        cefcpowernonredundantreason = value;
        cefcpowernonredundantreason.value_namespace = name_space;
        cefcpowernonredundantreason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcTotalDrawnInlineCurrent")
    {
        cefctotaldrawninlinecurrent = value;
        cefctotaldrawninlinecurrent.value_namespace = name_space;
        cefctotaldrawninlinecurrent.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::CefcFRUPowerSupplyGroupEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefcPowerRedundancyMode")
    {
        cefcpowerredundancymode.yfilter = yfilter;
    }
    if(value_path == "cefcPowerUnits")
    {
        cefcpowerunits.yfilter = yfilter;
    }
    if(value_path == "cefcTotalAvailableCurrent")
    {
        cefctotalavailablecurrent.yfilter = yfilter;
    }
    if(value_path == "cefcTotalDrawnCurrent")
    {
        cefctotaldrawncurrent.yfilter = yfilter;
    }
    if(value_path == "cefcPowerRedundancyOperMode")
    {
        cefcpowerredundancyopermode.yfilter = yfilter;
    }
    if(value_path == "cefcPowerNonRedundantReason")
    {
        cefcpowernonredundantreason.yfilter = yfilter;
    }
    if(value_path == "cefcTotalDrawnInlineCurrent")
    {
        cefctotaldrawninlinecurrent.yfilter = yfilter;
    }
}

bool CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::CefcFRUPowerSupplyGroupEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcPowerRedundancyMode" || name == "cefcPowerUnits" || name == "cefcTotalAvailableCurrent" || name == "cefcTotalDrawnCurrent" || name == "cefcPowerRedundancyOperMode" || name == "cefcPowerNonRedundantReason" || name == "cefcTotalDrawnInlineCurrent")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable::CefcFRUPowerStatusTable()
    :
    cefcfrupowerstatusentry(this, {"entphysicalindex"})
{

    yang_name = "cefcFRUPowerStatusTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable::~CefcFRUPowerStatusTable()
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cefcfrupowerstatusentry.len(); index++)
    {
        if(cefcfrupowerstatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable::has_operation() const
{
    for (std::size_t index=0; index<cefcfrupowerstatusentry.len(); index++)
    {
        if(cefcfrupowerstatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFRUPowerStatusTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcFRUPowerStatusEntry")
    {
        auto c = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable::CefcFRUPowerStatusEntry>();
        c->parent = this;
        cefcfrupowerstatusentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cefcfrupowerstatusentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcFRUPowerStatusEntry")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable::CefcFRUPowerStatusEntry::CefcFRUPowerStatusEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcfrupoweradminstatus{YType::enumeration, "cefcFRUPowerAdminStatus"},
    cefcfrupoweroperstatus{YType::enumeration, "cefcFRUPowerOperStatus"},
    cefcfrucurrent{YType::int32, "cefcFRUCurrent"},
    cefcfrupowercapability{YType::bits, "cefcFRUPowerCapability"},
    cefcfrurealtimecurrent{YType::int32, "cefcFRURealTimeCurrent"}
{

    yang_name = "cefcFRUPowerStatusEntry"; yang_parent_name = "cefcFRUPowerStatusTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable::CefcFRUPowerStatusEntry::~CefcFRUPowerStatusEntry()
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable::CefcFRUPowerStatusEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| cefcfrupoweradminstatus.is_set
	|| cefcfrupoweroperstatus.is_set
	|| cefcfrucurrent.is_set
	|| cefcfrupowercapability.is_set
	|| cefcfrurealtimecurrent.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable::CefcFRUPowerStatusEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcfrupoweradminstatus.yfilter)
	|| ydk::is_set(cefcfrupoweroperstatus.yfilter)
	|| ydk::is_set(cefcfrucurrent.yfilter)
	|| ydk::is_set(cefcfrupowercapability.yfilter)
	|| ydk::is_set(cefcfrurealtimecurrent.yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable::CefcFRUPowerStatusEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcFRUPowerStatusTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable::CefcFRUPowerStatusEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFRUPowerStatusEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable::CefcFRUPowerStatusEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcfrupoweradminstatus.is_set || is_set(cefcfrupoweradminstatus.yfilter)) leaf_name_data.push_back(cefcfrupoweradminstatus.get_name_leafdata());
    if (cefcfrupoweroperstatus.is_set || is_set(cefcfrupoweroperstatus.yfilter)) leaf_name_data.push_back(cefcfrupoweroperstatus.get_name_leafdata());
    if (cefcfrucurrent.is_set || is_set(cefcfrucurrent.yfilter)) leaf_name_data.push_back(cefcfrucurrent.get_name_leafdata());
    if (cefcfrupowercapability.is_set || is_set(cefcfrupowercapability.yfilter)) leaf_name_data.push_back(cefcfrupowercapability.get_name_leafdata());
    if (cefcfrurealtimecurrent.is_set || is_set(cefcfrurealtimecurrent.yfilter)) leaf_name_data.push_back(cefcfrurealtimecurrent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable::CefcFRUPowerStatusEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable::CefcFRUPowerStatusEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable::CefcFRUPowerStatusEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcFRUPowerAdminStatus")
    {
        cefcfrupoweradminstatus = value;
        cefcfrupoweradminstatus.value_namespace = name_space;
        cefcfrupoweradminstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcFRUPowerOperStatus")
    {
        cefcfrupoweroperstatus = value;
        cefcfrupoweroperstatus.value_namespace = name_space;
        cefcfrupoweroperstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcFRUCurrent")
    {
        cefcfrucurrent = value;
        cefcfrucurrent.value_namespace = name_space;
        cefcfrucurrent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcFRUPowerCapability")
    {
        cefcfrupowercapability[value] = true;
    }
    if(value_path == "cefcFRURealTimeCurrent")
    {
        cefcfrurealtimecurrent = value;
        cefcfrurealtimecurrent.value_namespace = name_space;
        cefcfrurealtimecurrent.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable::CefcFRUPowerStatusEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefcFRUPowerAdminStatus")
    {
        cefcfrupoweradminstatus.yfilter = yfilter;
    }
    if(value_path == "cefcFRUPowerOperStatus")
    {
        cefcfrupoweroperstatus.yfilter = yfilter;
    }
    if(value_path == "cefcFRUCurrent")
    {
        cefcfrucurrent.yfilter = yfilter;
    }
    if(value_path == "cefcFRUPowerCapability")
    {
        cefcfrupowercapability.yfilter = yfilter;
    }
    if(value_path == "cefcFRURealTimeCurrent")
    {
        cefcfrurealtimecurrent.yfilter = yfilter;
    }
}

bool CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable::CefcFRUPowerStatusEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcFRUPowerAdminStatus" || name == "cefcFRUPowerOperStatus" || name == "cefcFRUCurrent" || name == "cefcFRUPowerCapability" || name == "cefcFRURealTimeCurrent")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable::CefcFRUPowerSupplyValueTable()
    :
    cefcfrupowersupplyvalueentry(this, {"entphysicalindex"})
{

    yang_name = "cefcFRUPowerSupplyValueTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable::~CefcFRUPowerSupplyValueTable()
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cefcfrupowersupplyvalueentry.len(); index++)
    {
        if(cefcfrupowersupplyvalueentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable::has_operation() const
{
    for (std::size_t index=0; index<cefcfrupowersupplyvalueentry.len(); index++)
    {
        if(cefcfrupowersupplyvalueentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFRUPowerSupplyValueTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcFRUPowerSupplyValueEntry")
    {
        auto c = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable::CefcFRUPowerSupplyValueEntry>();
        c->parent = this;
        cefcfrupowersupplyvalueentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cefcfrupowersupplyvalueentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcFRUPowerSupplyValueEntry")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable::CefcFRUPowerSupplyValueEntry::CefcFRUPowerSupplyValueEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcfrutotalsystemcurrent{YType::int32, "cefcFRUTotalSystemCurrent"},
    cefcfrudrawnsystemcurrent{YType::int32, "cefcFRUDrawnSystemCurrent"},
    cefcfrutotalinlinecurrent{YType::int32, "cefcFRUTotalInlineCurrent"},
    cefcfrudrawninlinecurrent{YType::int32, "cefcFRUDrawnInlineCurrent"}
{

    yang_name = "cefcFRUPowerSupplyValueEntry"; yang_parent_name = "cefcFRUPowerSupplyValueTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable::CefcFRUPowerSupplyValueEntry::~CefcFRUPowerSupplyValueEntry()
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable::CefcFRUPowerSupplyValueEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| cefcfrutotalsystemcurrent.is_set
	|| cefcfrudrawnsystemcurrent.is_set
	|| cefcfrutotalinlinecurrent.is_set
	|| cefcfrudrawninlinecurrent.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable::CefcFRUPowerSupplyValueEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcfrutotalsystemcurrent.yfilter)
	|| ydk::is_set(cefcfrudrawnsystemcurrent.yfilter)
	|| ydk::is_set(cefcfrutotalinlinecurrent.yfilter)
	|| ydk::is_set(cefcfrudrawninlinecurrent.yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable::CefcFRUPowerSupplyValueEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcFRUPowerSupplyValueTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable::CefcFRUPowerSupplyValueEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFRUPowerSupplyValueEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable::CefcFRUPowerSupplyValueEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcfrutotalsystemcurrent.is_set || is_set(cefcfrutotalsystemcurrent.yfilter)) leaf_name_data.push_back(cefcfrutotalsystemcurrent.get_name_leafdata());
    if (cefcfrudrawnsystemcurrent.is_set || is_set(cefcfrudrawnsystemcurrent.yfilter)) leaf_name_data.push_back(cefcfrudrawnsystemcurrent.get_name_leafdata());
    if (cefcfrutotalinlinecurrent.is_set || is_set(cefcfrutotalinlinecurrent.yfilter)) leaf_name_data.push_back(cefcfrutotalinlinecurrent.get_name_leafdata());
    if (cefcfrudrawninlinecurrent.is_set || is_set(cefcfrudrawninlinecurrent.yfilter)) leaf_name_data.push_back(cefcfrudrawninlinecurrent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable::CefcFRUPowerSupplyValueEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable::CefcFRUPowerSupplyValueEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable::CefcFRUPowerSupplyValueEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcFRUTotalSystemCurrent")
    {
        cefcfrutotalsystemcurrent = value;
        cefcfrutotalsystemcurrent.value_namespace = name_space;
        cefcfrutotalsystemcurrent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcFRUDrawnSystemCurrent")
    {
        cefcfrudrawnsystemcurrent = value;
        cefcfrudrawnsystemcurrent.value_namespace = name_space;
        cefcfrudrawnsystemcurrent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcFRUTotalInlineCurrent")
    {
        cefcfrutotalinlinecurrent = value;
        cefcfrutotalinlinecurrent.value_namespace = name_space;
        cefcfrutotalinlinecurrent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcFRUDrawnInlineCurrent")
    {
        cefcfrudrawninlinecurrent = value;
        cefcfrudrawninlinecurrent.value_namespace = name_space;
        cefcfrudrawninlinecurrent.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable::CefcFRUPowerSupplyValueEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefcFRUTotalSystemCurrent")
    {
        cefcfrutotalsystemcurrent.yfilter = yfilter;
    }
    if(value_path == "cefcFRUDrawnSystemCurrent")
    {
        cefcfrudrawnsystemcurrent.yfilter = yfilter;
    }
    if(value_path == "cefcFRUTotalInlineCurrent")
    {
        cefcfrutotalinlinecurrent.yfilter = yfilter;
    }
    if(value_path == "cefcFRUDrawnInlineCurrent")
    {
        cefcfrudrawninlinecurrent.yfilter = yfilter;
    }
}

bool CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable::CefcFRUPowerSupplyValueEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcFRUTotalSystemCurrent" || name == "cefcFRUDrawnSystemCurrent" || name == "cefcFRUTotalInlineCurrent" || name == "cefcFRUDrawnInlineCurrent")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::CefcModuleTable::CefcModuleTable()
    :
    cefcmoduleentry(this, {"entphysicalindex"})
{

    yang_name = "cefcModuleTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::CefcModuleTable::~CefcModuleTable()
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcModuleTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cefcmoduleentry.len(); index++)
    {
        if(cefcmoduleentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYFRUCONTROLMIB::CefcModuleTable::has_operation() const
{
    for (std::size_t index=0; index<cefcmoduleentry.len(); index++)
    {
        if(cefcmoduleentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::CefcModuleTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::CefcModuleTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcModuleTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::CefcModuleTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::CefcModuleTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcModuleEntry")
    {
        auto c = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcModuleTable::CefcModuleEntry>();
        c->parent = this;
        cefcmoduleentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::CefcModuleTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cefcmoduleentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYFRUCONTROLMIB::CefcModuleTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYFRUCONTROLMIB::CefcModuleTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcModuleTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcModuleEntry")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::CefcModuleTable::CefcModuleEntry::CefcModuleEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcmoduleadminstatus{YType::enumeration, "cefcModuleAdminStatus"},
    cefcmoduleoperstatus{YType::enumeration, "cefcModuleOperStatus"},
    cefcmoduleresetreason{YType::enumeration, "cefcModuleResetReason"},
    cefcmodulestatuslastchangetime{YType::uint32, "cefcModuleStatusLastChangeTime"},
    cefcmodulelastclearconfigtime{YType::uint32, "cefcModuleLastClearConfigTime"},
    cefcmoduleresetreasondescription{YType::str, "cefcModuleResetReasonDescription"},
    cefcmodulestatechangereasondescr{YType::str, "cefcModuleStateChangeReasonDescr"},
    cefcmoduleuptime{YType::uint32, "cefcModuleUpTime"}
{

    yang_name = "cefcModuleEntry"; yang_parent_name = "cefcModuleTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::CefcModuleTable::CefcModuleEntry::~CefcModuleEntry()
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcModuleTable::CefcModuleEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| cefcmoduleadminstatus.is_set
	|| cefcmoduleoperstatus.is_set
	|| cefcmoduleresetreason.is_set
	|| cefcmodulestatuslastchangetime.is_set
	|| cefcmodulelastclearconfigtime.is_set
	|| cefcmoduleresetreasondescription.is_set
	|| cefcmodulestatechangereasondescr.is_set
	|| cefcmoduleuptime.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::CefcModuleTable::CefcModuleEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcmoduleadminstatus.yfilter)
	|| ydk::is_set(cefcmoduleoperstatus.yfilter)
	|| ydk::is_set(cefcmoduleresetreason.yfilter)
	|| ydk::is_set(cefcmodulestatuslastchangetime.yfilter)
	|| ydk::is_set(cefcmodulelastclearconfigtime.yfilter)
	|| ydk::is_set(cefcmoduleresetreasondescription.yfilter)
	|| ydk::is_set(cefcmodulestatechangereasondescr.yfilter)
	|| ydk::is_set(cefcmoduleuptime.yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::CefcModuleTable::CefcModuleEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcModuleTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::CefcModuleTable::CefcModuleEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcModuleEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::CefcModuleTable::CefcModuleEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcmoduleadminstatus.is_set || is_set(cefcmoduleadminstatus.yfilter)) leaf_name_data.push_back(cefcmoduleadminstatus.get_name_leafdata());
    if (cefcmoduleoperstatus.is_set || is_set(cefcmoduleoperstatus.yfilter)) leaf_name_data.push_back(cefcmoduleoperstatus.get_name_leafdata());
    if (cefcmoduleresetreason.is_set || is_set(cefcmoduleresetreason.yfilter)) leaf_name_data.push_back(cefcmoduleresetreason.get_name_leafdata());
    if (cefcmodulestatuslastchangetime.is_set || is_set(cefcmodulestatuslastchangetime.yfilter)) leaf_name_data.push_back(cefcmodulestatuslastchangetime.get_name_leafdata());
    if (cefcmodulelastclearconfigtime.is_set || is_set(cefcmodulelastclearconfigtime.yfilter)) leaf_name_data.push_back(cefcmodulelastclearconfigtime.get_name_leafdata());
    if (cefcmoduleresetreasondescription.is_set || is_set(cefcmoduleresetreasondescription.yfilter)) leaf_name_data.push_back(cefcmoduleresetreasondescription.get_name_leafdata());
    if (cefcmodulestatechangereasondescr.is_set || is_set(cefcmodulestatechangereasondescr.yfilter)) leaf_name_data.push_back(cefcmodulestatechangereasondescr.get_name_leafdata());
    if (cefcmoduleuptime.is_set || is_set(cefcmoduleuptime.yfilter)) leaf_name_data.push_back(cefcmoduleuptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::CefcModuleTable::CefcModuleEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::CefcModuleTable::CefcModuleEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::CefcModuleTable::CefcModuleEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcModuleAdminStatus")
    {
        cefcmoduleadminstatus = value;
        cefcmoduleadminstatus.value_namespace = name_space;
        cefcmoduleadminstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcModuleOperStatus")
    {
        cefcmoduleoperstatus = value;
        cefcmoduleoperstatus.value_namespace = name_space;
        cefcmoduleoperstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcModuleResetReason")
    {
        cefcmoduleresetreason = value;
        cefcmoduleresetreason.value_namespace = name_space;
        cefcmoduleresetreason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcModuleStatusLastChangeTime")
    {
        cefcmodulestatuslastchangetime = value;
        cefcmodulestatuslastchangetime.value_namespace = name_space;
        cefcmodulestatuslastchangetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcModuleLastClearConfigTime")
    {
        cefcmodulelastclearconfigtime = value;
        cefcmodulelastclearconfigtime.value_namespace = name_space;
        cefcmodulelastclearconfigtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcModuleResetReasonDescription")
    {
        cefcmoduleresetreasondescription = value;
        cefcmoduleresetreasondescription.value_namespace = name_space;
        cefcmoduleresetreasondescription.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcModuleStateChangeReasonDescr")
    {
        cefcmodulestatechangereasondescr = value;
        cefcmodulestatechangereasondescr.value_namespace = name_space;
        cefcmodulestatechangereasondescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcModuleUpTime")
    {
        cefcmoduleuptime = value;
        cefcmoduleuptime.value_namespace = name_space;
        cefcmoduleuptime.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENTITYFRUCONTROLMIB::CefcModuleTable::CefcModuleEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefcModuleAdminStatus")
    {
        cefcmoduleadminstatus.yfilter = yfilter;
    }
    if(value_path == "cefcModuleOperStatus")
    {
        cefcmoduleoperstatus.yfilter = yfilter;
    }
    if(value_path == "cefcModuleResetReason")
    {
        cefcmoduleresetreason.yfilter = yfilter;
    }
    if(value_path == "cefcModuleStatusLastChangeTime")
    {
        cefcmodulestatuslastchangetime.yfilter = yfilter;
    }
    if(value_path == "cefcModuleLastClearConfigTime")
    {
        cefcmodulelastclearconfigtime.yfilter = yfilter;
    }
    if(value_path == "cefcModuleResetReasonDescription")
    {
        cefcmoduleresetreasondescription.yfilter = yfilter;
    }
    if(value_path == "cefcModuleStateChangeReasonDescr")
    {
        cefcmodulestatechangereasondescr.yfilter = yfilter;
    }
    if(value_path == "cefcModuleUpTime")
    {
        cefcmoduleuptime.yfilter = yfilter;
    }
}

bool CISCOENTITYFRUCONTROLMIB::CefcModuleTable::CefcModuleEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcModuleAdminStatus" || name == "cefcModuleOperStatus" || name == "cefcModuleResetReason" || name == "cefcModuleStatusLastChangeTime" || name == "cefcModuleLastClearConfigTime" || name == "cefcModuleResetReasonDescription" || name == "cefcModuleStateChangeReasonDescr" || name == "cefcModuleUpTime")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable::CefcIntelliModuleTable()
    :
    cefcintellimoduleentry(this, {"entphysicalindex"})
{

    yang_name = "cefcIntelliModuleTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable::~CefcIntelliModuleTable()
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cefcintellimoduleentry.len(); index++)
    {
        if(cefcintellimoduleentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable::has_operation() const
{
    for (std::size_t index=0; index<cefcintellimoduleentry.len(); index++)
    {
        if(cefcintellimoduleentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcIntelliModuleTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcIntelliModuleEntry")
    {
        auto c = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable::CefcIntelliModuleEntry>();
        c->parent = this;
        cefcintellimoduleentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cefcintellimoduleentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcIntelliModuleEntry")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable::CefcIntelliModuleEntry::CefcIntelliModuleEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcintellimoduleipaddrtype{YType::enumeration, "cefcIntelliModuleIPAddrType"},
    cefcintellimoduleipaddr{YType::str, "cefcIntelliModuleIPAddr"}
{

    yang_name = "cefcIntelliModuleEntry"; yang_parent_name = "cefcIntelliModuleTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable::CefcIntelliModuleEntry::~CefcIntelliModuleEntry()
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable::CefcIntelliModuleEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| cefcintellimoduleipaddrtype.is_set
	|| cefcintellimoduleipaddr.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable::CefcIntelliModuleEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcintellimoduleipaddrtype.yfilter)
	|| ydk::is_set(cefcintellimoduleipaddr.yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable::CefcIntelliModuleEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcIntelliModuleTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable::CefcIntelliModuleEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcIntelliModuleEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable::CefcIntelliModuleEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcintellimoduleipaddrtype.is_set || is_set(cefcintellimoduleipaddrtype.yfilter)) leaf_name_data.push_back(cefcintellimoduleipaddrtype.get_name_leafdata());
    if (cefcintellimoduleipaddr.is_set || is_set(cefcintellimoduleipaddr.yfilter)) leaf_name_data.push_back(cefcintellimoduleipaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable::CefcIntelliModuleEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable::CefcIntelliModuleEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable::CefcIntelliModuleEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcIntelliModuleIPAddrType")
    {
        cefcintellimoduleipaddrtype = value;
        cefcintellimoduleipaddrtype.value_namespace = name_space;
        cefcintellimoduleipaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcIntelliModuleIPAddr")
    {
        cefcintellimoduleipaddr = value;
        cefcintellimoduleipaddr.value_namespace = name_space;
        cefcintellimoduleipaddr.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable::CefcIntelliModuleEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefcIntelliModuleIPAddrType")
    {
        cefcintellimoduleipaddrtype.yfilter = yfilter;
    }
    if(value_path == "cefcIntelliModuleIPAddr")
    {
        cefcintellimoduleipaddr.yfilter = yfilter;
    }
}

bool CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable::CefcIntelliModuleEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcIntelliModuleIPAddrType" || name == "cefcIntelliModuleIPAddr")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable::CefcModuleLocalSwitchingTable()
    :
    cefcmodulelocalswitchingentry(this, {"entphysicalindex"})
{

    yang_name = "cefcModuleLocalSwitchingTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable::~CefcModuleLocalSwitchingTable()
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cefcmodulelocalswitchingentry.len(); index++)
    {
        if(cefcmodulelocalswitchingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable::has_operation() const
{
    for (std::size_t index=0; index<cefcmodulelocalswitchingentry.len(); index++)
    {
        if(cefcmodulelocalswitchingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcModuleLocalSwitchingTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcModuleLocalSwitchingEntry")
    {
        auto c = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable::CefcModuleLocalSwitchingEntry>();
        c->parent = this;
        cefcmodulelocalswitchingentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cefcmodulelocalswitchingentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcModuleLocalSwitchingEntry")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable::CefcModuleLocalSwitchingEntry::CefcModuleLocalSwitchingEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcmodulelocalswitchingmode{YType::enumeration, "cefcModuleLocalSwitchingMode"}
{

    yang_name = "cefcModuleLocalSwitchingEntry"; yang_parent_name = "cefcModuleLocalSwitchingTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable::CefcModuleLocalSwitchingEntry::~CefcModuleLocalSwitchingEntry()
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable::CefcModuleLocalSwitchingEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| cefcmodulelocalswitchingmode.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable::CefcModuleLocalSwitchingEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcmodulelocalswitchingmode.yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable::CefcModuleLocalSwitchingEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcModuleLocalSwitchingTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable::CefcModuleLocalSwitchingEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcModuleLocalSwitchingEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable::CefcModuleLocalSwitchingEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcmodulelocalswitchingmode.is_set || is_set(cefcmodulelocalswitchingmode.yfilter)) leaf_name_data.push_back(cefcmodulelocalswitchingmode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable::CefcModuleLocalSwitchingEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable::CefcModuleLocalSwitchingEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable::CefcModuleLocalSwitchingEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcModuleLocalSwitchingMode")
    {
        cefcmodulelocalswitchingmode = value;
        cefcmodulelocalswitchingmode.value_namespace = name_space;
        cefcmodulelocalswitchingmode.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable::CefcModuleLocalSwitchingEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefcModuleLocalSwitchingMode")
    {
        cefcmodulelocalswitchingmode.yfilter = yfilter;
    }
}

bool CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable::CefcModuleLocalSwitchingEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcModuleLocalSwitchingMode")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::CefcFanTrayStatusTable()
    :
    cefcfantraystatusentry(this, {"entphysicalindex"})
{

    yang_name = "cefcFanTrayStatusTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::~CefcFanTrayStatusTable()
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cefcfantraystatusentry.len(); index++)
    {
        if(cefcfantraystatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::has_operation() const
{
    for (std::size_t index=0; index<cefcfantraystatusentry.len(); index++)
    {
        if(cefcfantraystatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFanTrayStatusTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcFanTrayStatusEntry")
    {
        auto c = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::CefcFanTrayStatusEntry>();
        c->parent = this;
        cefcfantraystatusentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cefcfantraystatusentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcFanTrayStatusEntry")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::CefcFanTrayStatusEntry::CefcFanTrayStatusEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcfantrayoperstatus{YType::enumeration, "cefcFanTrayOperStatus"}
{

    yang_name = "cefcFanTrayStatusEntry"; yang_parent_name = "cefcFanTrayStatusTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::CefcFanTrayStatusEntry::~CefcFanTrayStatusEntry()
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::CefcFanTrayStatusEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| cefcfantrayoperstatus.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::CefcFanTrayStatusEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcfantrayoperstatus.yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::CefcFanTrayStatusEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcFanTrayStatusTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::CefcFanTrayStatusEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFanTrayStatusEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::CefcFanTrayStatusEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcfantrayoperstatus.is_set || is_set(cefcfantrayoperstatus.yfilter)) leaf_name_data.push_back(cefcfantrayoperstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::CefcFanTrayStatusEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::CefcFanTrayStatusEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::CefcFanTrayStatusEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcFanTrayOperStatus")
    {
        cefcfantrayoperstatus = value;
        cefcfantrayoperstatus.value_namespace = name_space;
        cefcfantrayoperstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::CefcFanTrayStatusEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefcFanTrayOperStatus")
    {
        cefcfantrayoperstatus.yfilter = yfilter;
    }
}

bool CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::CefcFanTrayStatusEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcFanTrayOperStatus")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::CefcPhysicalTable()
    :
    cefcphysicalentry(this, {"entphysicalindex"})
{

    yang_name = "cefcPhysicalTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::~CefcPhysicalTable()
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cefcphysicalentry.len(); index++)
    {
        if(cefcphysicalentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::has_operation() const
{
    for (std::size_t index=0; index<cefcphysicalentry.len(); index++)
    {
        if(cefcphysicalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcPhysicalTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcPhysicalEntry")
    {
        auto c = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::CefcPhysicalEntry>();
        c->parent = this;
        cefcphysicalentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cefcphysicalentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcPhysicalEntry")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::CefcPhysicalEntry::CefcPhysicalEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcphysicalstatus{YType::enumeration, "cefcPhysicalStatus"}
{

    yang_name = "cefcPhysicalEntry"; yang_parent_name = "cefcPhysicalTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::CefcPhysicalEntry::~CefcPhysicalEntry()
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::CefcPhysicalEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| cefcphysicalstatus.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::CefcPhysicalEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcphysicalstatus.yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::CefcPhysicalEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcPhysicalTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::CefcPhysicalEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcPhysicalEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::CefcPhysicalEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcphysicalstatus.is_set || is_set(cefcphysicalstatus.yfilter)) leaf_name_data.push_back(cefcphysicalstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::CefcPhysicalEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::CefcPhysicalEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::CefcPhysicalEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcPhysicalStatus")
    {
        cefcphysicalstatus = value;
        cefcphysicalstatus.value_namespace = name_space;
        cefcphysicalstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::CefcPhysicalEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefcPhysicalStatus")
    {
        cefcphysicalstatus.yfilter = yfilter;
    }
}

bool CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::CefcPhysicalEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcPhysicalStatus")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable::CefcPowerSupplyInputTable()
    :
    cefcpowersupplyinputentry(this, {"entphysicalindex", "cefcpowersupplyinputindex"})
{

    yang_name = "cefcPowerSupplyInputTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable::~CefcPowerSupplyInputTable()
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cefcpowersupplyinputentry.len(); index++)
    {
        if(cefcpowersupplyinputentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable::has_operation() const
{
    for (std::size_t index=0; index<cefcpowersupplyinputentry.len(); index++)
    {
        if(cefcpowersupplyinputentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcPowerSupplyInputTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcPowerSupplyInputEntry")
    {
        auto c = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable::CefcPowerSupplyInputEntry>();
        c->parent = this;
        cefcpowersupplyinputentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cefcpowersupplyinputentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcPowerSupplyInputEntry")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable::CefcPowerSupplyInputEntry::CefcPowerSupplyInputEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcpowersupplyinputindex{YType::uint32, "cefcPowerSupplyInputIndex"},
    cefcpowersupplyinputtype{YType::enumeration, "cefcPowerSupplyInputType"}
{

    yang_name = "cefcPowerSupplyInputEntry"; yang_parent_name = "cefcPowerSupplyInputTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable::CefcPowerSupplyInputEntry::~CefcPowerSupplyInputEntry()
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable::CefcPowerSupplyInputEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| cefcpowersupplyinputindex.is_set
	|| cefcpowersupplyinputtype.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable::CefcPowerSupplyInputEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcpowersupplyinputindex.yfilter)
	|| ydk::is_set(cefcpowersupplyinputtype.yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable::CefcPowerSupplyInputEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcPowerSupplyInputTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable::CefcPowerSupplyInputEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcPowerSupplyInputEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    ADD_KEY_TOKEN(cefcpowersupplyinputindex, "cefcPowerSupplyInputIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable::CefcPowerSupplyInputEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcpowersupplyinputindex.is_set || is_set(cefcpowersupplyinputindex.yfilter)) leaf_name_data.push_back(cefcpowersupplyinputindex.get_name_leafdata());
    if (cefcpowersupplyinputtype.is_set || is_set(cefcpowersupplyinputtype.yfilter)) leaf_name_data.push_back(cefcpowersupplyinputtype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable::CefcPowerSupplyInputEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable::CefcPowerSupplyInputEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable::CefcPowerSupplyInputEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcPowerSupplyInputIndex")
    {
        cefcpowersupplyinputindex = value;
        cefcpowersupplyinputindex.value_namespace = name_space;
        cefcpowersupplyinputindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcPowerSupplyInputType")
    {
        cefcpowersupplyinputtype = value;
        cefcpowersupplyinputtype.value_namespace = name_space;
        cefcpowersupplyinputtype.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable::CefcPowerSupplyInputEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefcPowerSupplyInputIndex")
    {
        cefcpowersupplyinputindex.yfilter = yfilter;
    }
    if(value_path == "cefcPowerSupplyInputType")
    {
        cefcpowersupplyinputtype.yfilter = yfilter;
    }
}

bool CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable::CefcPowerSupplyInputEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcPowerSupplyInputIndex" || name == "cefcPowerSupplyInputType")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyOutputTable::CefcPowerSupplyOutputTable()
    :
    cefcpowersupplyoutputentry(this, {"entphysicalindex", "cefcpsoutputmodeindex"})
{

    yang_name = "cefcPowerSupplyOutputTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyOutputTable::~CefcPowerSupplyOutputTable()
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyOutputTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cefcpowersupplyoutputentry.len(); index++)
    {
        if(cefcpowersupplyoutputentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyOutputTable::has_operation() const
{
    for (std::size_t index=0; index<cefcpowersupplyoutputentry.len(); index++)
    {
        if(cefcpowersupplyoutputentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyOutputTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyOutputTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcPowerSupplyOutputTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyOutputTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyOutputTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcPowerSupplyOutputEntry")
    {
        auto c = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyOutputTable::CefcPowerSupplyOutputEntry>();
        c->parent = this;
        cefcpowersupplyoutputentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyOutputTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cefcpowersupplyoutputentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyOutputTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyOutputTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyOutputTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcPowerSupplyOutputEntry")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyOutputTable::CefcPowerSupplyOutputEntry::CefcPowerSupplyOutputEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcpsoutputmodeindex{YType::uint32, "cefcPSOutputModeIndex"},
    cefcpsoutputmodecurrent{YType::int32, "cefcPSOutputModeCurrent"},
    cefcpsoutputmodeinoperation{YType::boolean, "cefcPSOutputModeInOperation"}
{

    yang_name = "cefcPowerSupplyOutputEntry"; yang_parent_name = "cefcPowerSupplyOutputTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyOutputTable::CefcPowerSupplyOutputEntry::~CefcPowerSupplyOutputEntry()
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyOutputTable::CefcPowerSupplyOutputEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| cefcpsoutputmodeindex.is_set
	|| cefcpsoutputmodecurrent.is_set
	|| cefcpsoutputmodeinoperation.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyOutputTable::CefcPowerSupplyOutputEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcpsoutputmodeindex.yfilter)
	|| ydk::is_set(cefcpsoutputmodecurrent.yfilter)
	|| ydk::is_set(cefcpsoutputmodeinoperation.yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyOutputTable::CefcPowerSupplyOutputEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcPowerSupplyOutputTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyOutputTable::CefcPowerSupplyOutputEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcPowerSupplyOutputEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    ADD_KEY_TOKEN(cefcpsoutputmodeindex, "cefcPSOutputModeIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyOutputTable::CefcPowerSupplyOutputEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcpsoutputmodeindex.is_set || is_set(cefcpsoutputmodeindex.yfilter)) leaf_name_data.push_back(cefcpsoutputmodeindex.get_name_leafdata());
    if (cefcpsoutputmodecurrent.is_set || is_set(cefcpsoutputmodecurrent.yfilter)) leaf_name_data.push_back(cefcpsoutputmodecurrent.get_name_leafdata());
    if (cefcpsoutputmodeinoperation.is_set || is_set(cefcpsoutputmodeinoperation.yfilter)) leaf_name_data.push_back(cefcpsoutputmodeinoperation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyOutputTable::CefcPowerSupplyOutputEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyOutputTable::CefcPowerSupplyOutputEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyOutputTable::CefcPowerSupplyOutputEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcPSOutputModeIndex")
    {
        cefcpsoutputmodeindex = value;
        cefcpsoutputmodeindex.value_namespace = name_space;
        cefcpsoutputmodeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcPSOutputModeCurrent")
    {
        cefcpsoutputmodecurrent = value;
        cefcpsoutputmodecurrent.value_namespace = name_space;
        cefcpsoutputmodecurrent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcPSOutputModeInOperation")
    {
        cefcpsoutputmodeinoperation = value;
        cefcpsoutputmodeinoperation.value_namespace = name_space;
        cefcpsoutputmodeinoperation.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyOutputTable::CefcPowerSupplyOutputEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefcPSOutputModeIndex")
    {
        cefcpsoutputmodeindex.yfilter = yfilter;
    }
    if(value_path == "cefcPSOutputModeCurrent")
    {
        cefcpsoutputmodecurrent.yfilter = yfilter;
    }
    if(value_path == "cefcPSOutputModeInOperation")
    {
        cefcpsoutputmodeinoperation.yfilter = yfilter;
    }
}

bool CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyOutputTable::CefcPowerSupplyOutputEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcPSOutputModeIndex" || name == "cefcPSOutputModeCurrent" || name == "cefcPSOutputModeInOperation")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::CefcChassisCoolingTable::CefcChassisCoolingTable()
    :
    cefcchassiscoolingentry(this, {"entphysicalindex"})
{

    yang_name = "cefcChassisCoolingTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::CefcChassisCoolingTable::~CefcChassisCoolingTable()
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcChassisCoolingTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cefcchassiscoolingentry.len(); index++)
    {
        if(cefcchassiscoolingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYFRUCONTROLMIB::CefcChassisCoolingTable::has_operation() const
{
    for (std::size_t index=0; index<cefcchassiscoolingentry.len(); index++)
    {
        if(cefcchassiscoolingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::CefcChassisCoolingTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::CefcChassisCoolingTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcChassisCoolingTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::CefcChassisCoolingTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::CefcChassisCoolingTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcChassisCoolingEntry")
    {
        auto c = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcChassisCoolingTable::CefcChassisCoolingEntry>();
        c->parent = this;
        cefcchassiscoolingentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::CefcChassisCoolingTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cefcchassiscoolingentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYFRUCONTROLMIB::CefcChassisCoolingTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYFRUCONTROLMIB::CefcChassisCoolingTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcChassisCoolingTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcChassisCoolingEntry")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::CefcChassisCoolingTable::CefcChassisCoolingEntry::CefcChassisCoolingEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcchassisperslotcoolingcap{YType::uint32, "cefcChassisPerSlotCoolingCap"},
    cefcchassisperslotcoolingunit{YType::enumeration, "cefcChassisPerSlotCoolingUnit"}
{

    yang_name = "cefcChassisCoolingEntry"; yang_parent_name = "cefcChassisCoolingTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::CefcChassisCoolingTable::CefcChassisCoolingEntry::~CefcChassisCoolingEntry()
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcChassisCoolingTable::CefcChassisCoolingEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| cefcchassisperslotcoolingcap.is_set
	|| cefcchassisperslotcoolingunit.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::CefcChassisCoolingTable::CefcChassisCoolingEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcchassisperslotcoolingcap.yfilter)
	|| ydk::is_set(cefcchassisperslotcoolingunit.yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::CefcChassisCoolingTable::CefcChassisCoolingEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcChassisCoolingTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::CefcChassisCoolingTable::CefcChassisCoolingEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcChassisCoolingEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::CefcChassisCoolingTable::CefcChassisCoolingEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcchassisperslotcoolingcap.is_set || is_set(cefcchassisperslotcoolingcap.yfilter)) leaf_name_data.push_back(cefcchassisperslotcoolingcap.get_name_leafdata());
    if (cefcchassisperslotcoolingunit.is_set || is_set(cefcchassisperslotcoolingunit.yfilter)) leaf_name_data.push_back(cefcchassisperslotcoolingunit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::CefcChassisCoolingTable::CefcChassisCoolingEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::CefcChassisCoolingTable::CefcChassisCoolingEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::CefcChassisCoolingTable::CefcChassisCoolingEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcChassisPerSlotCoolingCap")
    {
        cefcchassisperslotcoolingcap = value;
        cefcchassisperslotcoolingcap.value_namespace = name_space;
        cefcchassisperslotcoolingcap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcChassisPerSlotCoolingUnit")
    {
        cefcchassisperslotcoolingunit = value;
        cefcchassisperslotcoolingunit.value_namespace = name_space;
        cefcchassisperslotcoolingunit.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENTITYFRUCONTROLMIB::CefcChassisCoolingTable::CefcChassisCoolingEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefcChassisPerSlotCoolingCap")
    {
        cefcchassisperslotcoolingcap.yfilter = yfilter;
    }
    if(value_path == "cefcChassisPerSlotCoolingUnit")
    {
        cefcchassisperslotcoolingunit.yfilter = yfilter;
    }
}

bool CISCOENTITYFRUCONTROLMIB::CefcChassisCoolingTable::CefcChassisCoolingEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcChassisPerSlotCoolingCap" || name == "cefcChassisPerSlotCoolingUnit")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::CefcFanCoolingTable::CefcFanCoolingTable()
    :
    cefcfancoolingentry(this, {"entphysicalindex"})
{

    yang_name = "cefcFanCoolingTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::CefcFanCoolingTable::~CefcFanCoolingTable()
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcFanCoolingTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cefcfancoolingentry.len(); index++)
    {
        if(cefcfancoolingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYFRUCONTROLMIB::CefcFanCoolingTable::has_operation() const
{
    for (std::size_t index=0; index<cefcfancoolingentry.len(); index++)
    {
        if(cefcfancoolingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::CefcFanCoolingTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::CefcFanCoolingTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFanCoolingTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::CefcFanCoolingTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::CefcFanCoolingTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcFanCoolingEntry")
    {
        auto c = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcFanCoolingTable::CefcFanCoolingEntry>();
        c->parent = this;
        cefcfancoolingentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::CefcFanCoolingTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cefcfancoolingentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYFRUCONTROLMIB::CefcFanCoolingTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYFRUCONTROLMIB::CefcFanCoolingTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcFanCoolingTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcFanCoolingEntry")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::CefcFanCoolingTable::CefcFanCoolingEntry::CefcFanCoolingEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcfancoolingcapacity{YType::uint32, "cefcFanCoolingCapacity"},
    cefcfancoolingcapacityunit{YType::enumeration, "cefcFanCoolingCapacityUnit"}
{

    yang_name = "cefcFanCoolingEntry"; yang_parent_name = "cefcFanCoolingTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::CefcFanCoolingTable::CefcFanCoolingEntry::~CefcFanCoolingEntry()
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcFanCoolingTable::CefcFanCoolingEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| cefcfancoolingcapacity.is_set
	|| cefcfancoolingcapacityunit.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::CefcFanCoolingTable::CefcFanCoolingEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcfancoolingcapacity.yfilter)
	|| ydk::is_set(cefcfancoolingcapacityunit.yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::CefcFanCoolingTable::CefcFanCoolingEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcFanCoolingTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::CefcFanCoolingTable::CefcFanCoolingEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFanCoolingEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::CefcFanCoolingTable::CefcFanCoolingEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcfancoolingcapacity.is_set || is_set(cefcfancoolingcapacity.yfilter)) leaf_name_data.push_back(cefcfancoolingcapacity.get_name_leafdata());
    if (cefcfancoolingcapacityunit.is_set || is_set(cefcfancoolingcapacityunit.yfilter)) leaf_name_data.push_back(cefcfancoolingcapacityunit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::CefcFanCoolingTable::CefcFanCoolingEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::CefcFanCoolingTable::CefcFanCoolingEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::CefcFanCoolingTable::CefcFanCoolingEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcFanCoolingCapacity")
    {
        cefcfancoolingcapacity = value;
        cefcfancoolingcapacity.value_namespace = name_space;
        cefcfancoolingcapacity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcFanCoolingCapacityUnit")
    {
        cefcfancoolingcapacityunit = value;
        cefcfancoolingcapacityunit.value_namespace = name_space;
        cefcfancoolingcapacityunit.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENTITYFRUCONTROLMIB::CefcFanCoolingTable::CefcFanCoolingEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefcFanCoolingCapacity")
    {
        cefcfancoolingcapacity.yfilter = yfilter;
    }
    if(value_path == "cefcFanCoolingCapacityUnit")
    {
        cefcfancoolingcapacityunit.yfilter = yfilter;
    }
}

bool CISCOENTITYFRUCONTROLMIB::CefcFanCoolingTable::CefcFanCoolingEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcFanCoolingCapacity" || name == "cefcFanCoolingCapacityUnit")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::CefcModuleCoolingTable::CefcModuleCoolingTable()
    :
    cefcmodulecoolingentry(this, {"entphysicalindex"})
{

    yang_name = "cefcModuleCoolingTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::CefcModuleCoolingTable::~CefcModuleCoolingTable()
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcModuleCoolingTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cefcmodulecoolingentry.len(); index++)
    {
        if(cefcmodulecoolingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYFRUCONTROLMIB::CefcModuleCoolingTable::has_operation() const
{
    for (std::size_t index=0; index<cefcmodulecoolingentry.len(); index++)
    {
        if(cefcmodulecoolingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::CefcModuleCoolingTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::CefcModuleCoolingTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcModuleCoolingTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::CefcModuleCoolingTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::CefcModuleCoolingTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcModuleCoolingEntry")
    {
        auto c = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcModuleCoolingTable::CefcModuleCoolingEntry>();
        c->parent = this;
        cefcmodulecoolingentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::CefcModuleCoolingTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cefcmodulecoolingentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYFRUCONTROLMIB::CefcModuleCoolingTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYFRUCONTROLMIB::CefcModuleCoolingTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcModuleCoolingTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcModuleCoolingEntry")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::CefcModuleCoolingTable::CefcModuleCoolingEntry::CefcModuleCoolingEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcmodulecooling{YType::uint32, "cefcModuleCooling"},
    cefcmodulecoolingunit{YType::enumeration, "cefcModuleCoolingUnit"}
{

    yang_name = "cefcModuleCoolingEntry"; yang_parent_name = "cefcModuleCoolingTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::CefcModuleCoolingTable::CefcModuleCoolingEntry::~CefcModuleCoolingEntry()
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcModuleCoolingTable::CefcModuleCoolingEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| cefcmodulecooling.is_set
	|| cefcmodulecoolingunit.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::CefcModuleCoolingTable::CefcModuleCoolingEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcmodulecooling.yfilter)
	|| ydk::is_set(cefcmodulecoolingunit.yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::CefcModuleCoolingTable::CefcModuleCoolingEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcModuleCoolingTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::CefcModuleCoolingTable::CefcModuleCoolingEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcModuleCoolingEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::CefcModuleCoolingTable::CefcModuleCoolingEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcmodulecooling.is_set || is_set(cefcmodulecooling.yfilter)) leaf_name_data.push_back(cefcmodulecooling.get_name_leafdata());
    if (cefcmodulecoolingunit.is_set || is_set(cefcmodulecoolingunit.yfilter)) leaf_name_data.push_back(cefcmodulecoolingunit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::CefcModuleCoolingTable::CefcModuleCoolingEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::CefcModuleCoolingTable::CefcModuleCoolingEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::CefcModuleCoolingTable::CefcModuleCoolingEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcModuleCooling")
    {
        cefcmodulecooling = value;
        cefcmodulecooling.value_namespace = name_space;
        cefcmodulecooling.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcModuleCoolingUnit")
    {
        cefcmodulecoolingunit = value;
        cefcmodulecoolingunit.value_namespace = name_space;
        cefcmodulecoolingunit.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENTITYFRUCONTROLMIB::CefcModuleCoolingTable::CefcModuleCoolingEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefcModuleCooling")
    {
        cefcmodulecooling.yfilter = yfilter;
    }
    if(value_path == "cefcModuleCoolingUnit")
    {
        cefcmodulecoolingunit.yfilter = yfilter;
    }
}

bool CISCOENTITYFRUCONTROLMIB::CefcModuleCoolingTable::CefcModuleCoolingEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcModuleCooling" || name == "cefcModuleCoolingUnit")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::CefcFanCoolingCapTable::CefcFanCoolingCapTable()
    :
    cefcfancoolingcapentry(this, {"entphysicalindex", "cefcfancoolingcapindex"})
{

    yang_name = "cefcFanCoolingCapTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::CefcFanCoolingCapTable::~CefcFanCoolingCapTable()
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcFanCoolingCapTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cefcfancoolingcapentry.len(); index++)
    {
        if(cefcfancoolingcapentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYFRUCONTROLMIB::CefcFanCoolingCapTable::has_operation() const
{
    for (std::size_t index=0; index<cefcfancoolingcapentry.len(); index++)
    {
        if(cefcfancoolingcapentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::CefcFanCoolingCapTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::CefcFanCoolingCapTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFanCoolingCapTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::CefcFanCoolingCapTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::CefcFanCoolingCapTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcFanCoolingCapEntry")
    {
        auto c = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcFanCoolingCapTable::CefcFanCoolingCapEntry>();
        c->parent = this;
        cefcfancoolingcapentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::CefcFanCoolingCapTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cefcfancoolingcapentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYFRUCONTROLMIB::CefcFanCoolingCapTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYFRUCONTROLMIB::CefcFanCoolingCapTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcFanCoolingCapTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcFanCoolingCapEntry")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::CefcFanCoolingCapTable::CefcFanCoolingCapEntry::CefcFanCoolingCapEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcfancoolingcapindex{YType::uint32, "cefcFanCoolingCapIndex"},
    cefcfancoolingcapmodedescr{YType::str, "cefcFanCoolingCapModeDescr"},
    cefcfancoolingcapcapacity{YType::uint32, "cefcFanCoolingCapCapacity"},
    cefcfancoolingcapcurrent{YType::int32, "cefcFanCoolingCapCurrent"},
    cefcfancoolingcapcapacityunit{YType::enumeration, "cefcFanCoolingCapCapacityUnit"}
{

    yang_name = "cefcFanCoolingCapEntry"; yang_parent_name = "cefcFanCoolingCapTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::CefcFanCoolingCapTable::CefcFanCoolingCapEntry::~CefcFanCoolingCapEntry()
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcFanCoolingCapTable::CefcFanCoolingCapEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| cefcfancoolingcapindex.is_set
	|| cefcfancoolingcapmodedescr.is_set
	|| cefcfancoolingcapcapacity.is_set
	|| cefcfancoolingcapcurrent.is_set
	|| cefcfancoolingcapcapacityunit.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::CefcFanCoolingCapTable::CefcFanCoolingCapEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcfancoolingcapindex.yfilter)
	|| ydk::is_set(cefcfancoolingcapmodedescr.yfilter)
	|| ydk::is_set(cefcfancoolingcapcapacity.yfilter)
	|| ydk::is_set(cefcfancoolingcapcurrent.yfilter)
	|| ydk::is_set(cefcfancoolingcapcapacityunit.yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::CefcFanCoolingCapTable::CefcFanCoolingCapEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcFanCoolingCapTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::CefcFanCoolingCapTable::CefcFanCoolingCapEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFanCoolingCapEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    ADD_KEY_TOKEN(cefcfancoolingcapindex, "cefcFanCoolingCapIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::CefcFanCoolingCapTable::CefcFanCoolingCapEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcfancoolingcapindex.is_set || is_set(cefcfancoolingcapindex.yfilter)) leaf_name_data.push_back(cefcfancoolingcapindex.get_name_leafdata());
    if (cefcfancoolingcapmodedescr.is_set || is_set(cefcfancoolingcapmodedescr.yfilter)) leaf_name_data.push_back(cefcfancoolingcapmodedescr.get_name_leafdata());
    if (cefcfancoolingcapcapacity.is_set || is_set(cefcfancoolingcapcapacity.yfilter)) leaf_name_data.push_back(cefcfancoolingcapcapacity.get_name_leafdata());
    if (cefcfancoolingcapcurrent.is_set || is_set(cefcfancoolingcapcurrent.yfilter)) leaf_name_data.push_back(cefcfancoolingcapcurrent.get_name_leafdata());
    if (cefcfancoolingcapcapacityunit.is_set || is_set(cefcfancoolingcapcapacityunit.yfilter)) leaf_name_data.push_back(cefcfancoolingcapcapacityunit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::CefcFanCoolingCapTable::CefcFanCoolingCapEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::CefcFanCoolingCapTable::CefcFanCoolingCapEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::CefcFanCoolingCapTable::CefcFanCoolingCapEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcFanCoolingCapIndex")
    {
        cefcfancoolingcapindex = value;
        cefcfancoolingcapindex.value_namespace = name_space;
        cefcfancoolingcapindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcFanCoolingCapModeDescr")
    {
        cefcfancoolingcapmodedescr = value;
        cefcfancoolingcapmodedescr.value_namespace = name_space;
        cefcfancoolingcapmodedescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcFanCoolingCapCapacity")
    {
        cefcfancoolingcapcapacity = value;
        cefcfancoolingcapcapacity.value_namespace = name_space;
        cefcfancoolingcapcapacity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcFanCoolingCapCurrent")
    {
        cefcfancoolingcapcurrent = value;
        cefcfancoolingcapcurrent.value_namespace = name_space;
        cefcfancoolingcapcurrent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcFanCoolingCapCapacityUnit")
    {
        cefcfancoolingcapcapacityunit = value;
        cefcfancoolingcapcapacityunit.value_namespace = name_space;
        cefcfancoolingcapcapacityunit.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENTITYFRUCONTROLMIB::CefcFanCoolingCapTable::CefcFanCoolingCapEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefcFanCoolingCapIndex")
    {
        cefcfancoolingcapindex.yfilter = yfilter;
    }
    if(value_path == "cefcFanCoolingCapModeDescr")
    {
        cefcfancoolingcapmodedescr.yfilter = yfilter;
    }
    if(value_path == "cefcFanCoolingCapCapacity")
    {
        cefcfancoolingcapcapacity.yfilter = yfilter;
    }
    if(value_path == "cefcFanCoolingCapCurrent")
    {
        cefcfancoolingcapcurrent.yfilter = yfilter;
    }
    if(value_path == "cefcFanCoolingCapCapacityUnit")
    {
        cefcfancoolingcapcapacityunit.yfilter = yfilter;
    }
}

bool CISCOENTITYFRUCONTROLMIB::CefcFanCoolingCapTable::CefcFanCoolingCapEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcFanCoolingCapIndex" || name == "cefcFanCoolingCapModeDescr" || name == "cefcFanCoolingCapCapacity" || name == "cefcFanCoolingCapCurrent" || name == "cefcFanCoolingCapCapacityUnit")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::CefcConnectorRatingTable::CefcConnectorRatingTable()
    :
    cefcconnectorratingentry(this, {"entphysicalindex"})
{

    yang_name = "cefcConnectorRatingTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::CefcConnectorRatingTable::~CefcConnectorRatingTable()
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcConnectorRatingTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cefcconnectorratingentry.len(); index++)
    {
        if(cefcconnectorratingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYFRUCONTROLMIB::CefcConnectorRatingTable::has_operation() const
{
    for (std::size_t index=0; index<cefcconnectorratingentry.len(); index++)
    {
        if(cefcconnectorratingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::CefcConnectorRatingTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::CefcConnectorRatingTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcConnectorRatingTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::CefcConnectorRatingTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::CefcConnectorRatingTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcConnectorRatingEntry")
    {
        auto c = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcConnectorRatingTable::CefcConnectorRatingEntry>();
        c->parent = this;
        cefcconnectorratingentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::CefcConnectorRatingTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cefcconnectorratingentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYFRUCONTROLMIB::CefcConnectorRatingTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYFRUCONTROLMIB::CefcConnectorRatingTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcConnectorRatingTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcConnectorRatingEntry")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::CefcConnectorRatingTable::CefcConnectorRatingEntry::CefcConnectorRatingEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcconnectorrating{YType::int32, "cefcConnectorRating"}
{

    yang_name = "cefcConnectorRatingEntry"; yang_parent_name = "cefcConnectorRatingTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::CefcConnectorRatingTable::CefcConnectorRatingEntry::~CefcConnectorRatingEntry()
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcConnectorRatingTable::CefcConnectorRatingEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| cefcconnectorrating.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::CefcConnectorRatingTable::CefcConnectorRatingEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcconnectorrating.yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::CefcConnectorRatingTable::CefcConnectorRatingEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcConnectorRatingTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::CefcConnectorRatingTable::CefcConnectorRatingEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcConnectorRatingEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::CefcConnectorRatingTable::CefcConnectorRatingEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcconnectorrating.is_set || is_set(cefcconnectorrating.yfilter)) leaf_name_data.push_back(cefcconnectorrating.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::CefcConnectorRatingTable::CefcConnectorRatingEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::CefcConnectorRatingTable::CefcConnectorRatingEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::CefcConnectorRatingTable::CefcConnectorRatingEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcConnectorRating")
    {
        cefcconnectorrating = value;
        cefcconnectorrating.value_namespace = name_space;
        cefcconnectorrating.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENTITYFRUCONTROLMIB::CefcConnectorRatingTable::CefcConnectorRatingEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefcConnectorRating")
    {
        cefcconnectorrating.yfilter = yfilter;
    }
}

bool CISCOENTITYFRUCONTROLMIB::CefcConnectorRatingTable::CefcConnectorRatingEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcConnectorRating")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::CefcModulePowerConsumptionTable::CefcModulePowerConsumptionTable()
    :
    cefcmodulepowerconsumptionentry(this, {"entphysicalindex"})
{

    yang_name = "cefcModulePowerConsumptionTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::CefcModulePowerConsumptionTable::~CefcModulePowerConsumptionTable()
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcModulePowerConsumptionTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cefcmodulepowerconsumptionentry.len(); index++)
    {
        if(cefcmodulepowerconsumptionentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYFRUCONTROLMIB::CefcModulePowerConsumptionTable::has_operation() const
{
    for (std::size_t index=0; index<cefcmodulepowerconsumptionentry.len(); index++)
    {
        if(cefcmodulepowerconsumptionentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::CefcModulePowerConsumptionTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::CefcModulePowerConsumptionTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcModulePowerConsumptionTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::CefcModulePowerConsumptionTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::CefcModulePowerConsumptionTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcModulePowerConsumptionEntry")
    {
        auto c = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcModulePowerConsumptionTable::CefcModulePowerConsumptionEntry>();
        c->parent = this;
        cefcmodulepowerconsumptionentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::CefcModulePowerConsumptionTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cefcmodulepowerconsumptionentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYFRUCONTROLMIB::CefcModulePowerConsumptionTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYFRUCONTROLMIB::CefcModulePowerConsumptionTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcModulePowerConsumptionTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcModulePowerConsumptionEntry")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::CefcModulePowerConsumptionTable::CefcModulePowerConsumptionEntry::CefcModulePowerConsumptionEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcmodulepowerconsumption{YType::int32, "cefcModulePowerConsumption"}
{

    yang_name = "cefcModulePowerConsumptionEntry"; yang_parent_name = "cefcModulePowerConsumptionTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::CefcModulePowerConsumptionTable::CefcModulePowerConsumptionEntry::~CefcModulePowerConsumptionEntry()
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcModulePowerConsumptionTable::CefcModulePowerConsumptionEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| cefcmodulepowerconsumption.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::CefcModulePowerConsumptionTable::CefcModulePowerConsumptionEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcmodulepowerconsumption.yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::CefcModulePowerConsumptionTable::CefcModulePowerConsumptionEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcModulePowerConsumptionTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::CefcModulePowerConsumptionTable::CefcModulePowerConsumptionEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcModulePowerConsumptionEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::CefcModulePowerConsumptionTable::CefcModulePowerConsumptionEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcmodulepowerconsumption.is_set || is_set(cefcmodulepowerconsumption.yfilter)) leaf_name_data.push_back(cefcmodulepowerconsumption.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::CefcModulePowerConsumptionTable::CefcModulePowerConsumptionEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::CefcModulePowerConsumptionTable::CefcModulePowerConsumptionEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::CefcModulePowerConsumptionTable::CefcModulePowerConsumptionEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcModulePowerConsumption")
    {
        cefcmodulepowerconsumption = value;
        cefcmodulepowerconsumption.value_namespace = name_space;
        cefcmodulepowerconsumption.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENTITYFRUCONTROLMIB::CefcModulePowerConsumptionTable::CefcModulePowerConsumptionEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefcModulePowerConsumption")
    {
        cefcmodulepowerconsumption.yfilter = yfilter;
    }
}

bool CISCOENTITYFRUCONTROLMIB::CefcModulePowerConsumptionTable::CefcModulePowerConsumptionEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcModulePowerConsumption")
        return true;
    return false;
}

const Enum::YLeaf ModuleAdminType::enabled {1, "enabled"};
const Enum::YLeaf ModuleAdminType::disabled {2, "disabled"};
const Enum::YLeaf ModuleAdminType::reset {3, "reset"};
const Enum::YLeaf ModuleAdminType::outOfServiceAdmin {4, "outOfServiceAdmin"};

const Enum::YLeaf FRUCoolingUnit::cfm {1, "cfm"};
const Enum::YLeaf FRUCoolingUnit::watts {2, "watts"};

const Enum::YLeaf PowerAdminType::on {1, "on"};
const Enum::YLeaf PowerAdminType::off {2, "off"};
const Enum::YLeaf PowerAdminType::inlineAuto {3, "inlineAuto"};
const Enum::YLeaf PowerAdminType::inlineOn {4, "inlineOn"};
const Enum::YLeaf PowerAdminType::powerCycle {5, "powerCycle"};

const Enum::YLeaf ModuleOperType::unknown {1, "unknown"};
const Enum::YLeaf ModuleOperType::ok {2, "ok"};
const Enum::YLeaf ModuleOperType::disabled {3, "disabled"};
const Enum::YLeaf ModuleOperType::okButDiagFailed {4, "okButDiagFailed"};
const Enum::YLeaf ModuleOperType::boot {5, "boot"};
const Enum::YLeaf ModuleOperType::selfTest {6, "selfTest"};
const Enum::YLeaf ModuleOperType::failed {7, "failed"};
const Enum::YLeaf ModuleOperType::missing {8, "missing"};
const Enum::YLeaf ModuleOperType::mismatchWithParent {9, "mismatchWithParent"};
const Enum::YLeaf ModuleOperType::mismatchConfig {10, "mismatchConfig"};
const Enum::YLeaf ModuleOperType::diagFailed {11, "diagFailed"};
const Enum::YLeaf ModuleOperType::dormant {12, "dormant"};
const Enum::YLeaf ModuleOperType::outOfServiceAdmin {13, "outOfServiceAdmin"};
const Enum::YLeaf ModuleOperType::outOfServiceEnvTemp {14, "outOfServiceEnvTemp"};
const Enum::YLeaf ModuleOperType::poweredDown {15, "poweredDown"};
const Enum::YLeaf ModuleOperType::poweredUp {16, "poweredUp"};
const Enum::YLeaf ModuleOperType::powerDenied {17, "powerDenied"};
const Enum::YLeaf ModuleOperType::powerCycled {18, "powerCycled"};
const Enum::YLeaf ModuleOperType::okButPowerOverWarning {19, "okButPowerOverWarning"};
const Enum::YLeaf ModuleOperType::okButPowerOverCritical {20, "okButPowerOverCritical"};
const Enum::YLeaf ModuleOperType::syncInProgress {21, "syncInProgress"};
const Enum::YLeaf ModuleOperType::upgrading {22, "upgrading"};
const Enum::YLeaf ModuleOperType::okButAuthFailed {23, "okButAuthFailed"};
const Enum::YLeaf ModuleOperType::mdr {24, "mdr"};
const Enum::YLeaf ModuleOperType::fwMismatchFound {25, "fwMismatchFound"};
const Enum::YLeaf ModuleOperType::fwDownloadSuccess {26, "fwDownloadSuccess"};
const Enum::YLeaf ModuleOperType::fwDownloadFailure {27, "fwDownloadFailure"};

const Enum::YLeaf ModuleResetReasonType::unknown {1, "unknown"};
const Enum::YLeaf ModuleResetReasonType::powerUp {2, "powerUp"};
const Enum::YLeaf ModuleResetReasonType::parityError {3, "parityError"};
const Enum::YLeaf ModuleResetReasonType::clearConfigReset {4, "clearConfigReset"};
const Enum::YLeaf ModuleResetReasonType::manualReset {5, "manualReset"};
const Enum::YLeaf ModuleResetReasonType::watchDogTimeoutReset {6, "watchDogTimeoutReset"};
const Enum::YLeaf ModuleResetReasonType::resourceOverflowReset {7, "resourceOverflowReset"};
const Enum::YLeaf ModuleResetReasonType::missingTaskReset {8, "missingTaskReset"};
const Enum::YLeaf ModuleResetReasonType::lowVoltageReset {9, "lowVoltageReset"};
const Enum::YLeaf ModuleResetReasonType::controllerReset {10, "controllerReset"};
const Enum::YLeaf ModuleResetReasonType::systemReset {11, "systemReset"};
const Enum::YLeaf ModuleResetReasonType::switchoverReset {12, "switchoverReset"};
const Enum::YLeaf ModuleResetReasonType::upgradeReset {13, "upgradeReset"};
const Enum::YLeaf ModuleResetReasonType::downgradeReset {14, "downgradeReset"};
const Enum::YLeaf ModuleResetReasonType::cacheErrorReset {15, "cacheErrorReset"};
const Enum::YLeaf ModuleResetReasonType::deviceDriverReset {16, "deviceDriverReset"};
const Enum::YLeaf ModuleResetReasonType::softwareExceptionReset {17, "softwareExceptionReset"};
const Enum::YLeaf ModuleResetReasonType::restoreConfigReset {18, "restoreConfigReset"};
const Enum::YLeaf ModuleResetReasonType::abortRevReset {19, "abortRevReset"};
const Enum::YLeaf ModuleResetReasonType::burnBootReset {20, "burnBootReset"};
const Enum::YLeaf ModuleResetReasonType::standbyCdHealthierReset {21, "standbyCdHealthierReset"};
const Enum::YLeaf ModuleResetReasonType::nonNativeConfigClearReset {22, "nonNativeConfigClearReset"};
const Enum::YLeaf ModuleResetReasonType::memoryProtectionErrorReset {23, "memoryProtectionErrorReset"};

const Enum::YLeaf PowerRedundancyType::notsupported {1, "notsupported"};
const Enum::YLeaf PowerRedundancyType::redundant {2, "redundant"};
const Enum::YLeaf PowerRedundancyType::combined {3, "combined"};
const Enum::YLeaf PowerRedundancyType::nonRedundant {4, "nonRedundant"};
const Enum::YLeaf PowerRedundancyType::psRedundant {5, "psRedundant"};
const Enum::YLeaf PowerRedundancyType::inPwrSrcRedundant {6, "inPwrSrcRedundant"};
const Enum::YLeaf PowerRedundancyType::psRedundantSingleInput {7, "psRedundantSingleInput"};

const Enum::YLeaf PowerOperType::offEnvOther {1, "offEnvOther"};
const Enum::YLeaf PowerOperType::on {2, "on"};
const Enum::YLeaf PowerOperType::offAdmin {3, "offAdmin"};
const Enum::YLeaf PowerOperType::offDenied {4, "offDenied"};
const Enum::YLeaf PowerOperType::offEnvPower {5, "offEnvPower"};
const Enum::YLeaf PowerOperType::offEnvTemp {6, "offEnvTemp"};
const Enum::YLeaf PowerOperType::offEnvFan {7, "offEnvFan"};
const Enum::YLeaf PowerOperType::failed {8, "failed"};
const Enum::YLeaf PowerOperType::onButFanFail {9, "onButFanFail"};
const Enum::YLeaf PowerOperType::offCooling {10, "offCooling"};
const Enum::YLeaf PowerOperType::offConnectorRating {11, "offConnectorRating"};
const Enum::YLeaf PowerOperType::onButInlinePowerFail {12, "onButInlinePowerFail"};

const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::CefcFRUPowerSupplyGroupEntry::CefcPowerNonRedundantReason::notApplicable {1, "notApplicable"};
const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::CefcFRUPowerSupplyGroupEntry::CefcPowerNonRedundantReason::unknown {2, "unknown"};
const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::CefcFRUPowerSupplyGroupEntry::CefcPowerNonRedundantReason::singleSupply {3, "singleSupply"};
const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::CefcFRUPowerSupplyGroupEntry::CefcPowerNonRedundantReason::mismatchedSupplies {4, "mismatchedSupplies"};
const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::CefcFRUPowerSupplyGroupEntry::CefcPowerNonRedundantReason::supplyError {5, "supplyError"};

const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable::CefcModuleLocalSwitchingEntry::CefcModuleLocalSwitchingMode::enabled {1, "enabled"};
const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::CefcModuleLocalSwitchingTable::CefcModuleLocalSwitchingEntry::CefcModuleLocalSwitchingMode::disabled {2, "disabled"};

const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::CefcFanTrayStatusEntry::CefcFanTrayOperStatus::unknown {1, "unknown"};
const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::CefcFanTrayStatusEntry::CefcFanTrayOperStatus::up {2, "up"};
const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::CefcFanTrayStatusEntry::CefcFanTrayOperStatus::down {3, "down"};
const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::CefcFanTrayStatusEntry::CefcFanTrayOperStatus::warning {4, "warning"};

const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::CefcPhysicalEntry::CefcPhysicalStatus::other {1, "other"};
const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::CefcPhysicalEntry::CefcPhysicalStatus::supported {2, "supported"};
const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::CefcPhysicalEntry::CefcPhysicalStatus::unsupported {3, "unsupported"};
const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::CefcPhysicalEntry::CefcPhysicalStatus::incompatible {4, "incompatible"};

const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable::CefcPowerSupplyInputEntry::CefcPowerSupplyInputType::unknown {1, "unknown"};
const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable::CefcPowerSupplyInputEntry::CefcPowerSupplyInputType::acLow {2, "acLow"};
const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable::CefcPowerSupplyInputEntry::CefcPowerSupplyInputType::acHigh {3, "acHigh"};
const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable::CefcPowerSupplyInputEntry::CefcPowerSupplyInputType::dcLow {4, "dcLow"};
const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::CefcPowerSupplyInputTable::CefcPowerSupplyInputEntry::CefcPowerSupplyInputType::dcHigh {5, "dcHigh"};


}
}

