
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
    cefcfrupower(std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcfrupower>())
	,cefcmibnotificationenables(std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcmibnotificationenables>())
	,cefcfrupowersupplygrouptable(std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable>())
	,cefcfrupowerstatustable(std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcfrupowerstatustable>())
	,cefcfrupowersupplyvaluetable(std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplyvaluetable>())
	,cefcmoduletable(std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcmoduletable>())
	,cefcintellimoduletable(std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcintellimoduletable>())
	,cefcmodulelocalswitchingtable(std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable>())
	,cefcfantraystatustable(std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable>())
	,cefcphysicaltable(std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable>())
	,cefcpowersupplyinputtable(std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable>())
	,cefcpowersupplyoutputtable(std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyoutputtable>())
	,cefcchassiscoolingtable(std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcchassiscoolingtable>())
	,cefcfancoolingtable(std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcfancoolingtable>())
	,cefcmodulecoolingtable(std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcmodulecoolingtable>())
	,cefcfancoolingcaptable(std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcfancoolingcaptable>())
	,cefcconnectorratingtable(std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcconnectorratingtable>())
	,cefcmodulepowerconsumptiontable(std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcmodulepowerconsumptiontable>())
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
            cefcfrupower = std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcfrupower>();
        }
        return cefcfrupower;
    }

    if(child_yang_name == "cefcMIBNotificationEnables")
    {
        if(cefcmibnotificationenables == nullptr)
        {
            cefcmibnotificationenables = std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcmibnotificationenables>();
        }
        return cefcmibnotificationenables;
    }

    if(child_yang_name == "cefcFRUPowerSupplyGroupTable")
    {
        if(cefcfrupowersupplygrouptable == nullptr)
        {
            cefcfrupowersupplygrouptable = std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable>();
        }
        return cefcfrupowersupplygrouptable;
    }

    if(child_yang_name == "cefcFRUPowerStatusTable")
    {
        if(cefcfrupowerstatustable == nullptr)
        {
            cefcfrupowerstatustable = std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcfrupowerstatustable>();
        }
        return cefcfrupowerstatustable;
    }

    if(child_yang_name == "cefcFRUPowerSupplyValueTable")
    {
        if(cefcfrupowersupplyvaluetable == nullptr)
        {
            cefcfrupowersupplyvaluetable = std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplyvaluetable>();
        }
        return cefcfrupowersupplyvaluetable;
    }

    if(child_yang_name == "cefcModuleTable")
    {
        if(cefcmoduletable == nullptr)
        {
            cefcmoduletable = std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcmoduletable>();
        }
        return cefcmoduletable;
    }

    if(child_yang_name == "cefcIntelliModuleTable")
    {
        if(cefcintellimoduletable == nullptr)
        {
            cefcintellimoduletable = std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcintellimoduletable>();
        }
        return cefcintellimoduletable;
    }

    if(child_yang_name == "cefcModuleLocalSwitchingTable")
    {
        if(cefcmodulelocalswitchingtable == nullptr)
        {
            cefcmodulelocalswitchingtable = std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable>();
        }
        return cefcmodulelocalswitchingtable;
    }

    if(child_yang_name == "cefcFanTrayStatusTable")
    {
        if(cefcfantraystatustable == nullptr)
        {
            cefcfantraystatustable = std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable>();
        }
        return cefcfantraystatustable;
    }

    if(child_yang_name == "cefcPhysicalTable")
    {
        if(cefcphysicaltable == nullptr)
        {
            cefcphysicaltable = std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable>();
        }
        return cefcphysicaltable;
    }

    if(child_yang_name == "cefcPowerSupplyInputTable")
    {
        if(cefcpowersupplyinputtable == nullptr)
        {
            cefcpowersupplyinputtable = std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable>();
        }
        return cefcpowersupplyinputtable;
    }

    if(child_yang_name == "cefcPowerSupplyOutputTable")
    {
        if(cefcpowersupplyoutputtable == nullptr)
        {
            cefcpowersupplyoutputtable = std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyoutputtable>();
        }
        return cefcpowersupplyoutputtable;
    }

    if(child_yang_name == "cefcChassisCoolingTable")
    {
        if(cefcchassiscoolingtable == nullptr)
        {
            cefcchassiscoolingtable = std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcchassiscoolingtable>();
        }
        return cefcchassiscoolingtable;
    }

    if(child_yang_name == "cefcFanCoolingTable")
    {
        if(cefcfancoolingtable == nullptr)
        {
            cefcfancoolingtable = std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcfancoolingtable>();
        }
        return cefcfancoolingtable;
    }

    if(child_yang_name == "cefcModuleCoolingTable")
    {
        if(cefcmodulecoolingtable == nullptr)
        {
            cefcmodulecoolingtable = std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcmodulecoolingtable>();
        }
        return cefcmodulecoolingtable;
    }

    if(child_yang_name == "cefcFanCoolingCapTable")
    {
        if(cefcfancoolingcaptable == nullptr)
        {
            cefcfancoolingcaptable = std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcfancoolingcaptable>();
        }
        return cefcfancoolingcaptable;
    }

    if(child_yang_name == "cefcConnectorRatingTable")
    {
        if(cefcconnectorratingtable == nullptr)
        {
            cefcconnectorratingtable = std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcconnectorratingtable>();
        }
        return cefcconnectorratingtable;
    }

    if(child_yang_name == "cefcModulePowerConsumptionTable")
    {
        if(cefcmodulepowerconsumptiontable == nullptr)
        {
            cefcmodulepowerconsumptiontable = std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcmodulepowerconsumptiontable>();
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

CISCOENTITYFRUCONTROLMIB::Cefcfrupower::Cefcfrupower()
    :
    cefcmaxdefaultinlinepower{YType::int32, "cefcMaxDefaultInLinePower"},
    cefcmaxdefaulthighinlinepower{YType::uint32, "cefcMaxDefaultHighInLinePower"}
{

    yang_name = "cefcFRUPower"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYFRUCONTROLMIB::Cefcfrupower::~Cefcfrupower()
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcfrupower::has_data() const
{
    return cefcmaxdefaultinlinepower.is_set
	|| cefcmaxdefaulthighinlinepower.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::Cefcfrupower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cefcmaxdefaultinlinepower.yfilter)
	|| ydk::is_set(cefcmaxdefaulthighinlinepower.yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcfrupower::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcfrupower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFRUPower";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::Cefcfrupower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cefcmaxdefaultinlinepower.is_set || is_set(cefcmaxdefaultinlinepower.yfilter)) leaf_name_data.push_back(cefcmaxdefaultinlinepower.get_name_leafdata());
    if (cefcmaxdefaulthighinlinepower.is_set || is_set(cefcmaxdefaulthighinlinepower.yfilter)) leaf_name_data.push_back(cefcmaxdefaulthighinlinepower.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::Cefcfrupower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::Cefcfrupower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::Cefcfrupower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOENTITYFRUCONTROLMIB::Cefcfrupower::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOENTITYFRUCONTROLMIB::Cefcfrupower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcMaxDefaultInLinePower" || name == "cefcMaxDefaultHighInLinePower")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::Cefcmibnotificationenables::Cefcmibnotificationenables()
    :
    cefcmibenablestatusnotification{YType::boolean, "cefcMIBEnableStatusNotification"},
    cefcenablepsoutputchangenotif{YType::boolean, "cefcEnablePSOutputChangeNotif"}
{

    yang_name = "cefcMIBNotificationEnables"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYFRUCONTROLMIB::Cefcmibnotificationenables::~Cefcmibnotificationenables()
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcmibnotificationenables::has_data() const
{
    return cefcmibenablestatusnotification.is_set
	|| cefcenablepsoutputchangenotif.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::Cefcmibnotificationenables::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cefcmibenablestatusnotification.yfilter)
	|| ydk::is_set(cefcenablepsoutputchangenotif.yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcmibnotificationenables::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcmibnotificationenables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcMIBNotificationEnables";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::Cefcmibnotificationenables::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cefcmibenablestatusnotification.is_set || is_set(cefcmibenablestatusnotification.yfilter)) leaf_name_data.push_back(cefcmibenablestatusnotification.get_name_leafdata());
    if (cefcenablepsoutputchangenotif.is_set || is_set(cefcenablepsoutputchangenotif.yfilter)) leaf_name_data.push_back(cefcenablepsoutputchangenotif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::Cefcmibnotificationenables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::Cefcmibnotificationenables::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::Cefcmibnotificationenables::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOENTITYFRUCONTROLMIB::Cefcmibnotificationenables::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOENTITYFRUCONTROLMIB::Cefcmibnotificationenables::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcMIBEnableStatusNotification" || name == "cefcEnablePSOutputChangeNotif")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygrouptable()
{

    yang_name = "cefcFRUPowerSupplyGroupTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable::~Cefcfrupowersupplygrouptable()
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable::has_data() const
{
    for (std::size_t index=0; index<cefcfrupowersupplygroupentry.size(); index++)
    {
        if(cefcfrupowersupplygroupentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable::has_operation() const
{
    for (std::size_t index=0; index<cefcfrupowersupplygroupentry.size(); index++)
    {
        if(cefcfrupowersupplygroupentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFRUPowerSupplyGroupTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcFRUPowerSupplyGroupEntry")
    {
        auto c = std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry>();
        c->parent = this;
        cefcfrupowersupplygroupentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cefcfrupowersupplygroupentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcFRUPowerSupplyGroupEntry")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::Cefcfrupowersupplygroupentry()
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

CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::~Cefcfrupowersupplygroupentry()
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::has_data() const
{
    return entphysicalindex.is_set
	|| cefcpowerredundancymode.is_set
	|| cefcpowerunits.is_set
	|| cefctotalavailablecurrent.is_set
	|| cefctotaldrawncurrent.is_set
	|| cefcpowerredundancyopermode.is_set
	|| cefcpowernonredundantreason.is_set
	|| cefctotaldrawninlinecurrent.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::has_operation() const
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

std::string CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcFRUPowerSupplyGroupTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFRUPowerSupplyGroupEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::get_name_leaf_data() const
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

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcPowerRedundancyMode" || name == "cefcPowerUnits" || name == "cefcTotalAvailableCurrent" || name == "cefcTotalDrawnCurrent" || name == "cefcPowerRedundancyOperMode" || name == "cefcPowerNonRedundantReason" || name == "cefcTotalDrawnInlineCurrent")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::Cefcfrupowerstatustable::Cefcfrupowerstatustable()
{

    yang_name = "cefcFRUPowerStatusTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYFRUCONTROLMIB::Cefcfrupowerstatustable::~Cefcfrupowerstatustable()
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcfrupowerstatustable::has_data() const
{
    for (std::size_t index=0; index<cefcfrupowerstatusentry.size(); index++)
    {
        if(cefcfrupowerstatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYFRUCONTROLMIB::Cefcfrupowerstatustable::has_operation() const
{
    for (std::size_t index=0; index<cefcfrupowerstatusentry.size(); index++)
    {
        if(cefcfrupowerstatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcfrupowerstatustable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcfrupowerstatustable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFRUPowerStatusTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::Cefcfrupowerstatustable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::Cefcfrupowerstatustable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcFRUPowerStatusEntry")
    {
        auto c = std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcfrupowerstatustable::Cefcfrupowerstatusentry>();
        c->parent = this;
        cefcfrupowerstatusentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::Cefcfrupowerstatustable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cefcfrupowerstatusentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYFRUCONTROLMIB::Cefcfrupowerstatustable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYFRUCONTROLMIB::Cefcfrupowerstatustable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcfrupowerstatustable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcFRUPowerStatusEntry")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::Cefcfrupowerstatustable::Cefcfrupowerstatusentry::Cefcfrupowerstatusentry()
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

CISCOENTITYFRUCONTROLMIB::Cefcfrupowerstatustable::Cefcfrupowerstatusentry::~Cefcfrupowerstatusentry()
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcfrupowerstatustable::Cefcfrupowerstatusentry::has_data() const
{
    return entphysicalindex.is_set
	|| cefcfrupoweradminstatus.is_set
	|| cefcfrupoweroperstatus.is_set
	|| cefcfrucurrent.is_set
	|| cefcfrupowercapability.is_set
	|| cefcfrurealtimecurrent.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::Cefcfrupowerstatustable::Cefcfrupowerstatusentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcfrupoweradminstatus.yfilter)
	|| ydk::is_set(cefcfrupoweroperstatus.yfilter)
	|| ydk::is_set(cefcfrucurrent.yfilter)
	|| ydk::is_set(cefcfrupowercapability.yfilter)
	|| ydk::is_set(cefcfrurealtimecurrent.yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcfrupowerstatustable::Cefcfrupowerstatusentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcFRUPowerStatusTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcfrupowerstatustable::Cefcfrupowerstatusentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFRUPowerStatusEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::Cefcfrupowerstatustable::Cefcfrupowerstatusentry::get_name_leaf_data() const
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

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::Cefcfrupowerstatustable::Cefcfrupowerstatusentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::Cefcfrupowerstatustable::Cefcfrupowerstatusentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::Cefcfrupowerstatustable::Cefcfrupowerstatusentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOENTITYFRUCONTROLMIB::Cefcfrupowerstatustable::Cefcfrupowerstatusentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOENTITYFRUCONTROLMIB::Cefcfrupowerstatustable::Cefcfrupowerstatusentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcFRUPowerAdminStatus" || name == "cefcFRUPowerOperStatus" || name == "cefcFRUCurrent" || name == "cefcFRUPowerCapability" || name == "cefcFRURealTimeCurrent")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvaluetable()
{

    yang_name = "cefcFRUPowerSupplyValueTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplyvaluetable::~Cefcfrupowersupplyvaluetable()
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplyvaluetable::has_data() const
{
    for (std::size_t index=0; index<cefcfrupowersupplyvalueentry.size(); index++)
    {
        if(cefcfrupowersupplyvalueentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplyvaluetable::has_operation() const
{
    for (std::size_t index=0; index<cefcfrupowersupplyvalueentry.size(); index++)
    {
        if(cefcfrupowersupplyvalueentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplyvaluetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplyvaluetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFRUPowerSupplyValueTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplyvaluetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplyvaluetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcFRUPowerSupplyValueEntry")
    {
        auto c = std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry>();
        c->parent = this;
        cefcfrupowersupplyvalueentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplyvaluetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cefcfrupowersupplyvalueentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplyvaluetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplyvaluetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplyvaluetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcFRUPowerSupplyValueEntry")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry::Cefcfrupowersupplyvalueentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcfrutotalsystemcurrent{YType::int32, "cefcFRUTotalSystemCurrent"},
    cefcfrudrawnsystemcurrent{YType::int32, "cefcFRUDrawnSystemCurrent"},
    cefcfrutotalinlinecurrent{YType::int32, "cefcFRUTotalInlineCurrent"},
    cefcfrudrawninlinecurrent{YType::int32, "cefcFRUDrawnInlineCurrent"}
{

    yang_name = "cefcFRUPowerSupplyValueEntry"; yang_parent_name = "cefcFRUPowerSupplyValueTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry::~Cefcfrupowersupplyvalueentry()
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry::has_data() const
{
    return entphysicalindex.is_set
	|| cefcfrutotalsystemcurrent.is_set
	|| cefcfrudrawnsystemcurrent.is_set
	|| cefcfrutotalinlinecurrent.is_set
	|| cefcfrudrawninlinecurrent.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcfrutotalsystemcurrent.yfilter)
	|| ydk::is_set(cefcfrudrawnsystemcurrent.yfilter)
	|| ydk::is_set(cefcfrutotalinlinecurrent.yfilter)
	|| ydk::is_set(cefcfrudrawninlinecurrent.yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcFRUPowerSupplyValueTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFRUPowerSupplyValueEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcfrutotalsystemcurrent.is_set || is_set(cefcfrutotalsystemcurrent.yfilter)) leaf_name_data.push_back(cefcfrutotalsystemcurrent.get_name_leafdata());
    if (cefcfrudrawnsystemcurrent.is_set || is_set(cefcfrudrawnsystemcurrent.yfilter)) leaf_name_data.push_back(cefcfrudrawnsystemcurrent.get_name_leafdata());
    if (cefcfrutotalinlinecurrent.is_set || is_set(cefcfrutotalinlinecurrent.yfilter)) leaf_name_data.push_back(cefcfrutotalinlinecurrent.get_name_leafdata());
    if (cefcfrudrawninlinecurrent.is_set || is_set(cefcfrudrawninlinecurrent.yfilter)) leaf_name_data.push_back(cefcfrudrawninlinecurrent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcFRUTotalSystemCurrent" || name == "cefcFRUDrawnSystemCurrent" || name == "cefcFRUTotalInlineCurrent" || name == "cefcFRUDrawnInlineCurrent")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::Cefcmoduletable::Cefcmoduletable()
{

    yang_name = "cefcModuleTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYFRUCONTROLMIB::Cefcmoduletable::~Cefcmoduletable()
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcmoduletable::has_data() const
{
    for (std::size_t index=0; index<cefcmoduleentry.size(); index++)
    {
        if(cefcmoduleentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYFRUCONTROLMIB::Cefcmoduletable::has_operation() const
{
    for (std::size_t index=0; index<cefcmoduleentry.size(); index++)
    {
        if(cefcmoduleentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcmoduletable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcmoduletable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcModuleTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::Cefcmoduletable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::Cefcmoduletable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcModuleEntry")
    {
        auto c = std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcmoduletable::Cefcmoduleentry>();
        c->parent = this;
        cefcmoduleentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::Cefcmoduletable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cefcmoduleentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYFRUCONTROLMIB::Cefcmoduletable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYFRUCONTROLMIB::Cefcmoduletable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcmoduletable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcModuleEntry")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::Cefcmoduletable::Cefcmoduleentry::Cefcmoduleentry()
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

CISCOENTITYFRUCONTROLMIB::Cefcmoduletable::Cefcmoduleentry::~Cefcmoduleentry()
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcmoduletable::Cefcmoduleentry::has_data() const
{
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

bool CISCOENTITYFRUCONTROLMIB::Cefcmoduletable::Cefcmoduleentry::has_operation() const
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

std::string CISCOENTITYFRUCONTROLMIB::Cefcmoduletable::Cefcmoduleentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcModuleTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcmoduletable::Cefcmoduleentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcModuleEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::Cefcmoduletable::Cefcmoduleentry::get_name_leaf_data() const
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

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::Cefcmoduletable::Cefcmoduleentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::Cefcmoduletable::Cefcmoduleentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::Cefcmoduletable::Cefcmoduleentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOENTITYFRUCONTROLMIB::Cefcmoduletable::Cefcmoduleentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOENTITYFRUCONTROLMIB::Cefcmoduletable::Cefcmoduleentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcModuleAdminStatus" || name == "cefcModuleOperStatus" || name == "cefcModuleResetReason" || name == "cefcModuleStatusLastChangeTime" || name == "cefcModuleLastClearConfigTime" || name == "cefcModuleResetReasonDescription" || name == "cefcModuleStateChangeReasonDescr" || name == "cefcModuleUpTime")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::Cefcintellimoduletable::Cefcintellimoduletable()
{

    yang_name = "cefcIntelliModuleTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYFRUCONTROLMIB::Cefcintellimoduletable::~Cefcintellimoduletable()
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcintellimoduletable::has_data() const
{
    for (std::size_t index=0; index<cefcintellimoduleentry.size(); index++)
    {
        if(cefcintellimoduleentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYFRUCONTROLMIB::Cefcintellimoduletable::has_operation() const
{
    for (std::size_t index=0; index<cefcintellimoduleentry.size(); index++)
    {
        if(cefcintellimoduleentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcintellimoduletable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcintellimoduletable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcIntelliModuleTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::Cefcintellimoduletable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::Cefcintellimoduletable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcIntelliModuleEntry")
    {
        auto c = std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcintellimoduletable::Cefcintellimoduleentry>();
        c->parent = this;
        cefcintellimoduleentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::Cefcintellimoduletable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cefcintellimoduleentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYFRUCONTROLMIB::Cefcintellimoduletable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYFRUCONTROLMIB::Cefcintellimoduletable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcintellimoduletable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcIntelliModuleEntry")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::Cefcintellimoduletable::Cefcintellimoduleentry::Cefcintellimoduleentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcintellimoduleipaddrtype{YType::enumeration, "cefcIntelliModuleIPAddrType"},
    cefcintellimoduleipaddr{YType::str, "cefcIntelliModuleIPAddr"}
{

    yang_name = "cefcIntelliModuleEntry"; yang_parent_name = "cefcIntelliModuleTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYFRUCONTROLMIB::Cefcintellimoduletable::Cefcintellimoduleentry::~Cefcintellimoduleentry()
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcintellimoduletable::Cefcintellimoduleentry::has_data() const
{
    return entphysicalindex.is_set
	|| cefcintellimoduleipaddrtype.is_set
	|| cefcintellimoduleipaddr.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::Cefcintellimoduletable::Cefcintellimoduleentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcintellimoduleipaddrtype.yfilter)
	|| ydk::is_set(cefcintellimoduleipaddr.yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcintellimoduletable::Cefcintellimoduleentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcIntelliModuleTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcintellimoduletable::Cefcintellimoduleentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcIntelliModuleEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::Cefcintellimoduletable::Cefcintellimoduleentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcintellimoduleipaddrtype.is_set || is_set(cefcintellimoduleipaddrtype.yfilter)) leaf_name_data.push_back(cefcintellimoduleipaddrtype.get_name_leafdata());
    if (cefcintellimoduleipaddr.is_set || is_set(cefcintellimoduleipaddr.yfilter)) leaf_name_data.push_back(cefcintellimoduleipaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::Cefcintellimoduletable::Cefcintellimoduleentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::Cefcintellimoduletable::Cefcintellimoduleentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::Cefcintellimoduletable::Cefcintellimoduleentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOENTITYFRUCONTROLMIB::Cefcintellimoduletable::Cefcintellimoduleentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOENTITYFRUCONTROLMIB::Cefcintellimoduletable::Cefcintellimoduleentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcIntelliModuleIPAddrType" || name == "cefcIntelliModuleIPAddr")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingtable()
{

    yang_name = "cefcModuleLocalSwitchingTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable::~Cefcmodulelocalswitchingtable()
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable::has_data() const
{
    for (std::size_t index=0; index<cefcmodulelocalswitchingentry.size(); index++)
    {
        if(cefcmodulelocalswitchingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable::has_operation() const
{
    for (std::size_t index=0; index<cefcmodulelocalswitchingentry.size(); index++)
    {
        if(cefcmodulelocalswitchingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcModuleLocalSwitchingTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcModuleLocalSwitchingEntry")
    {
        auto c = std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry>();
        c->parent = this;
        cefcmodulelocalswitchingentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cefcmodulelocalswitchingentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcModuleLocalSwitchingEntry")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry::Cefcmodulelocalswitchingentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcmodulelocalswitchingmode{YType::enumeration, "cefcModuleLocalSwitchingMode"}
{

    yang_name = "cefcModuleLocalSwitchingEntry"; yang_parent_name = "cefcModuleLocalSwitchingTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry::~Cefcmodulelocalswitchingentry()
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry::has_data() const
{
    return entphysicalindex.is_set
	|| cefcmodulelocalswitchingmode.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcmodulelocalswitchingmode.yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcModuleLocalSwitchingTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcModuleLocalSwitchingEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcmodulelocalswitchingmode.is_set || is_set(cefcmodulelocalswitchingmode.yfilter)) leaf_name_data.push_back(cefcmodulelocalswitchingmode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcModuleLocalSwitchingMode")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable::Cefcfantraystatustable()
{

    yang_name = "cefcFanTrayStatusTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable::~Cefcfantraystatustable()
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable::has_data() const
{
    for (std::size_t index=0; index<cefcfantraystatusentry.size(); index++)
    {
        if(cefcfantraystatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable::has_operation() const
{
    for (std::size_t index=0; index<cefcfantraystatusentry.size(); index++)
    {
        if(cefcfantraystatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFanTrayStatusTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcFanTrayStatusEntry")
    {
        auto c = std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable::Cefcfantraystatusentry>();
        c->parent = this;
        cefcfantraystatusentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cefcfantraystatusentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcFanTrayStatusEntry")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable::Cefcfantraystatusentry::Cefcfantraystatusentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcfantrayoperstatus{YType::enumeration, "cefcFanTrayOperStatus"}
{

    yang_name = "cefcFanTrayStatusEntry"; yang_parent_name = "cefcFanTrayStatusTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable::Cefcfantraystatusentry::~Cefcfantraystatusentry()
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable::Cefcfantraystatusentry::has_data() const
{
    return entphysicalindex.is_set
	|| cefcfantrayoperstatus.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable::Cefcfantraystatusentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcfantrayoperstatus.yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable::Cefcfantraystatusentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcFanTrayStatusTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable::Cefcfantraystatusentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFanTrayStatusEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable::Cefcfantraystatusentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcfantrayoperstatus.is_set || is_set(cefcfantrayoperstatus.yfilter)) leaf_name_data.push_back(cefcfantrayoperstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable::Cefcfantraystatusentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable::Cefcfantraystatusentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable::Cefcfantraystatusentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable::Cefcfantraystatusentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable::Cefcfantraystatusentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcFanTrayOperStatus")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable::Cefcphysicaltable()
{

    yang_name = "cefcPhysicalTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable::~Cefcphysicaltable()
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable::has_data() const
{
    for (std::size_t index=0; index<cefcphysicalentry.size(); index++)
    {
        if(cefcphysicalentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable::has_operation() const
{
    for (std::size_t index=0; index<cefcphysicalentry.size(); index++)
    {
        if(cefcphysicalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcPhysicalTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcPhysicalEntry")
    {
        auto c = std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable::Cefcphysicalentry>();
        c->parent = this;
        cefcphysicalentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cefcphysicalentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcPhysicalEntry")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable::Cefcphysicalentry::Cefcphysicalentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcphysicalstatus{YType::enumeration, "cefcPhysicalStatus"}
{

    yang_name = "cefcPhysicalEntry"; yang_parent_name = "cefcPhysicalTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable::Cefcphysicalentry::~Cefcphysicalentry()
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable::Cefcphysicalentry::has_data() const
{
    return entphysicalindex.is_set
	|| cefcphysicalstatus.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable::Cefcphysicalentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcphysicalstatus.yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable::Cefcphysicalentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcPhysicalTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable::Cefcphysicalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcPhysicalEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable::Cefcphysicalentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcphysicalstatus.is_set || is_set(cefcphysicalstatus.yfilter)) leaf_name_data.push_back(cefcphysicalstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable::Cefcphysicalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable::Cefcphysicalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable::Cefcphysicalentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable::Cefcphysicalentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable::Cefcphysicalentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcPhysicalStatus")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable::Cefcpowersupplyinputtable()
{

    yang_name = "cefcPowerSupplyInputTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable::~Cefcpowersupplyinputtable()
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable::has_data() const
{
    for (std::size_t index=0; index<cefcpowersupplyinputentry.size(); index++)
    {
        if(cefcpowersupplyinputentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable::has_operation() const
{
    for (std::size_t index=0; index<cefcpowersupplyinputentry.size(); index++)
    {
        if(cefcpowersupplyinputentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcPowerSupplyInputTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcPowerSupplyInputEntry")
    {
        auto c = std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry>();
        c->parent = this;
        cefcpowersupplyinputentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cefcpowersupplyinputentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcPowerSupplyInputEntry")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::Cefcpowersupplyinputentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcpowersupplyinputindex{YType::uint32, "cefcPowerSupplyInputIndex"},
    cefcpowersupplyinputtype{YType::enumeration, "cefcPowerSupplyInputType"}
{

    yang_name = "cefcPowerSupplyInputEntry"; yang_parent_name = "cefcPowerSupplyInputTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::~Cefcpowersupplyinputentry()
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::has_data() const
{
    return entphysicalindex.is_set
	|| cefcpowersupplyinputindex.is_set
	|| cefcpowersupplyinputtype.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcpowersupplyinputindex.yfilter)
	|| ydk::is_set(cefcpowersupplyinputtype.yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcPowerSupplyInputTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcPowerSupplyInputEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[cefcPowerSupplyInputIndex='" <<cefcpowersupplyinputindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcpowersupplyinputindex.is_set || is_set(cefcpowersupplyinputindex.yfilter)) leaf_name_data.push_back(cefcpowersupplyinputindex.get_name_leafdata());
    if (cefcpowersupplyinputtype.is_set || is_set(cefcpowersupplyinputtype.yfilter)) leaf_name_data.push_back(cefcpowersupplyinputtype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcPowerSupplyInputIndex" || name == "cefcPowerSupplyInputType")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputtable()
{

    yang_name = "cefcPowerSupplyOutputTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyoutputtable::~Cefcpowersupplyoutputtable()
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyoutputtable::has_data() const
{
    for (std::size_t index=0; index<cefcpowersupplyoutputentry.size(); index++)
    {
        if(cefcpowersupplyoutputentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyoutputtable::has_operation() const
{
    for (std::size_t index=0; index<cefcpowersupplyoutputentry.size(); index++)
    {
        if(cefcpowersupplyoutputentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyoutputtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyoutputtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcPowerSupplyOutputTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyoutputtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyoutputtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcPowerSupplyOutputEntry")
    {
        auto c = std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry>();
        c->parent = this;
        cefcpowersupplyoutputentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyoutputtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cefcpowersupplyoutputentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyoutputtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyoutputtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyoutputtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcPowerSupplyOutputEntry")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry::Cefcpowersupplyoutputentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcpsoutputmodeindex{YType::uint32, "cefcPSOutputModeIndex"},
    cefcpsoutputmodecurrent{YType::int32, "cefcPSOutputModeCurrent"},
    cefcpsoutputmodeinoperation{YType::boolean, "cefcPSOutputModeInOperation"}
{

    yang_name = "cefcPowerSupplyOutputEntry"; yang_parent_name = "cefcPowerSupplyOutputTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry::~Cefcpowersupplyoutputentry()
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry::has_data() const
{
    return entphysicalindex.is_set
	|| cefcpsoutputmodeindex.is_set
	|| cefcpsoutputmodecurrent.is_set
	|| cefcpsoutputmodeinoperation.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcpsoutputmodeindex.yfilter)
	|| ydk::is_set(cefcpsoutputmodecurrent.yfilter)
	|| ydk::is_set(cefcpsoutputmodeinoperation.yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcPowerSupplyOutputTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcPowerSupplyOutputEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[cefcPSOutputModeIndex='" <<cefcpsoutputmodeindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcpsoutputmodeindex.is_set || is_set(cefcpsoutputmodeindex.yfilter)) leaf_name_data.push_back(cefcpsoutputmodeindex.get_name_leafdata());
    if (cefcpsoutputmodecurrent.is_set || is_set(cefcpsoutputmodecurrent.yfilter)) leaf_name_data.push_back(cefcpsoutputmodecurrent.get_name_leafdata());
    if (cefcpsoutputmodeinoperation.is_set || is_set(cefcpsoutputmodeinoperation.yfilter)) leaf_name_data.push_back(cefcpsoutputmodeinoperation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcPSOutputModeIndex" || name == "cefcPSOutputModeCurrent" || name == "cefcPSOutputModeInOperation")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::Cefcchassiscoolingtable::Cefcchassiscoolingtable()
{

    yang_name = "cefcChassisCoolingTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYFRUCONTROLMIB::Cefcchassiscoolingtable::~Cefcchassiscoolingtable()
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcchassiscoolingtable::has_data() const
{
    for (std::size_t index=0; index<cefcchassiscoolingentry.size(); index++)
    {
        if(cefcchassiscoolingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYFRUCONTROLMIB::Cefcchassiscoolingtable::has_operation() const
{
    for (std::size_t index=0; index<cefcchassiscoolingentry.size(); index++)
    {
        if(cefcchassiscoolingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcchassiscoolingtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcchassiscoolingtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcChassisCoolingTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::Cefcchassiscoolingtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::Cefcchassiscoolingtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcChassisCoolingEntry")
    {
        auto c = std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcchassiscoolingtable::Cefcchassiscoolingentry>();
        c->parent = this;
        cefcchassiscoolingentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::Cefcchassiscoolingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cefcchassiscoolingentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYFRUCONTROLMIB::Cefcchassiscoolingtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYFRUCONTROLMIB::Cefcchassiscoolingtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcchassiscoolingtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcChassisCoolingEntry")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::Cefcchassiscoolingtable::Cefcchassiscoolingentry::Cefcchassiscoolingentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcchassisperslotcoolingcap{YType::uint32, "cefcChassisPerSlotCoolingCap"},
    cefcchassisperslotcoolingunit{YType::enumeration, "cefcChassisPerSlotCoolingUnit"}
{

    yang_name = "cefcChassisCoolingEntry"; yang_parent_name = "cefcChassisCoolingTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYFRUCONTROLMIB::Cefcchassiscoolingtable::Cefcchassiscoolingentry::~Cefcchassiscoolingentry()
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcchassiscoolingtable::Cefcchassiscoolingentry::has_data() const
{
    return entphysicalindex.is_set
	|| cefcchassisperslotcoolingcap.is_set
	|| cefcchassisperslotcoolingunit.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::Cefcchassiscoolingtable::Cefcchassiscoolingentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcchassisperslotcoolingcap.yfilter)
	|| ydk::is_set(cefcchassisperslotcoolingunit.yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcchassiscoolingtable::Cefcchassiscoolingentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcChassisCoolingTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcchassiscoolingtable::Cefcchassiscoolingentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcChassisCoolingEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::Cefcchassiscoolingtable::Cefcchassiscoolingentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcchassisperslotcoolingcap.is_set || is_set(cefcchassisperslotcoolingcap.yfilter)) leaf_name_data.push_back(cefcchassisperslotcoolingcap.get_name_leafdata());
    if (cefcchassisperslotcoolingunit.is_set || is_set(cefcchassisperslotcoolingunit.yfilter)) leaf_name_data.push_back(cefcchassisperslotcoolingunit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::Cefcchassiscoolingtable::Cefcchassiscoolingentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::Cefcchassiscoolingtable::Cefcchassiscoolingentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::Cefcchassiscoolingtable::Cefcchassiscoolingentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOENTITYFRUCONTROLMIB::Cefcchassiscoolingtable::Cefcchassiscoolingentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOENTITYFRUCONTROLMIB::Cefcchassiscoolingtable::Cefcchassiscoolingentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcChassisPerSlotCoolingCap" || name == "cefcChassisPerSlotCoolingUnit")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::Cefcfancoolingtable::Cefcfancoolingtable()
{

    yang_name = "cefcFanCoolingTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYFRUCONTROLMIB::Cefcfancoolingtable::~Cefcfancoolingtable()
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcfancoolingtable::has_data() const
{
    for (std::size_t index=0; index<cefcfancoolingentry.size(); index++)
    {
        if(cefcfancoolingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYFRUCONTROLMIB::Cefcfancoolingtable::has_operation() const
{
    for (std::size_t index=0; index<cefcfancoolingentry.size(); index++)
    {
        if(cefcfancoolingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcfancoolingtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcfancoolingtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFanCoolingTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::Cefcfancoolingtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::Cefcfancoolingtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcFanCoolingEntry")
    {
        auto c = std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcfancoolingtable::Cefcfancoolingentry>();
        c->parent = this;
        cefcfancoolingentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::Cefcfancoolingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cefcfancoolingentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYFRUCONTROLMIB::Cefcfancoolingtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYFRUCONTROLMIB::Cefcfancoolingtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcfancoolingtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcFanCoolingEntry")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::Cefcfancoolingtable::Cefcfancoolingentry::Cefcfancoolingentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcfancoolingcapacity{YType::uint32, "cefcFanCoolingCapacity"},
    cefcfancoolingcapacityunit{YType::enumeration, "cefcFanCoolingCapacityUnit"}
{

    yang_name = "cefcFanCoolingEntry"; yang_parent_name = "cefcFanCoolingTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYFRUCONTROLMIB::Cefcfancoolingtable::Cefcfancoolingentry::~Cefcfancoolingentry()
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcfancoolingtable::Cefcfancoolingentry::has_data() const
{
    return entphysicalindex.is_set
	|| cefcfancoolingcapacity.is_set
	|| cefcfancoolingcapacityunit.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::Cefcfancoolingtable::Cefcfancoolingentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcfancoolingcapacity.yfilter)
	|| ydk::is_set(cefcfancoolingcapacityunit.yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcfancoolingtable::Cefcfancoolingentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcFanCoolingTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcfancoolingtable::Cefcfancoolingentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFanCoolingEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::Cefcfancoolingtable::Cefcfancoolingentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcfancoolingcapacity.is_set || is_set(cefcfancoolingcapacity.yfilter)) leaf_name_data.push_back(cefcfancoolingcapacity.get_name_leafdata());
    if (cefcfancoolingcapacityunit.is_set || is_set(cefcfancoolingcapacityunit.yfilter)) leaf_name_data.push_back(cefcfancoolingcapacityunit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::Cefcfancoolingtable::Cefcfancoolingentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::Cefcfancoolingtable::Cefcfancoolingentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::Cefcfancoolingtable::Cefcfancoolingentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOENTITYFRUCONTROLMIB::Cefcfancoolingtable::Cefcfancoolingentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOENTITYFRUCONTROLMIB::Cefcfancoolingtable::Cefcfancoolingentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcFanCoolingCapacity" || name == "cefcFanCoolingCapacityUnit")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::Cefcmodulecoolingtable::Cefcmodulecoolingtable()
{

    yang_name = "cefcModuleCoolingTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYFRUCONTROLMIB::Cefcmodulecoolingtable::~Cefcmodulecoolingtable()
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcmodulecoolingtable::has_data() const
{
    for (std::size_t index=0; index<cefcmodulecoolingentry.size(); index++)
    {
        if(cefcmodulecoolingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYFRUCONTROLMIB::Cefcmodulecoolingtable::has_operation() const
{
    for (std::size_t index=0; index<cefcmodulecoolingentry.size(); index++)
    {
        if(cefcmodulecoolingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcmodulecoolingtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcmodulecoolingtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcModuleCoolingTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::Cefcmodulecoolingtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::Cefcmodulecoolingtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcModuleCoolingEntry")
    {
        auto c = std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcmodulecoolingtable::Cefcmodulecoolingentry>();
        c->parent = this;
        cefcmodulecoolingentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::Cefcmodulecoolingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cefcmodulecoolingentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYFRUCONTROLMIB::Cefcmodulecoolingtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYFRUCONTROLMIB::Cefcmodulecoolingtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcmodulecoolingtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcModuleCoolingEntry")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::Cefcmodulecoolingtable::Cefcmodulecoolingentry::Cefcmodulecoolingentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcmodulecooling{YType::uint32, "cefcModuleCooling"},
    cefcmodulecoolingunit{YType::enumeration, "cefcModuleCoolingUnit"}
{

    yang_name = "cefcModuleCoolingEntry"; yang_parent_name = "cefcModuleCoolingTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYFRUCONTROLMIB::Cefcmodulecoolingtable::Cefcmodulecoolingentry::~Cefcmodulecoolingentry()
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcmodulecoolingtable::Cefcmodulecoolingentry::has_data() const
{
    return entphysicalindex.is_set
	|| cefcmodulecooling.is_set
	|| cefcmodulecoolingunit.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::Cefcmodulecoolingtable::Cefcmodulecoolingentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcmodulecooling.yfilter)
	|| ydk::is_set(cefcmodulecoolingunit.yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcmodulecoolingtable::Cefcmodulecoolingentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcModuleCoolingTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcmodulecoolingtable::Cefcmodulecoolingentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcModuleCoolingEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::Cefcmodulecoolingtable::Cefcmodulecoolingentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcmodulecooling.is_set || is_set(cefcmodulecooling.yfilter)) leaf_name_data.push_back(cefcmodulecooling.get_name_leafdata());
    if (cefcmodulecoolingunit.is_set || is_set(cefcmodulecoolingunit.yfilter)) leaf_name_data.push_back(cefcmodulecoolingunit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::Cefcmodulecoolingtable::Cefcmodulecoolingentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::Cefcmodulecoolingtable::Cefcmodulecoolingentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::Cefcmodulecoolingtable::Cefcmodulecoolingentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOENTITYFRUCONTROLMIB::Cefcmodulecoolingtable::Cefcmodulecoolingentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOENTITYFRUCONTROLMIB::Cefcmodulecoolingtable::Cefcmodulecoolingentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcModuleCooling" || name == "cefcModuleCoolingUnit")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::Cefcfancoolingcaptable::Cefcfancoolingcaptable()
{

    yang_name = "cefcFanCoolingCapTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYFRUCONTROLMIB::Cefcfancoolingcaptable::~Cefcfancoolingcaptable()
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcfancoolingcaptable::has_data() const
{
    for (std::size_t index=0; index<cefcfancoolingcapentry.size(); index++)
    {
        if(cefcfancoolingcapentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYFRUCONTROLMIB::Cefcfancoolingcaptable::has_operation() const
{
    for (std::size_t index=0; index<cefcfancoolingcapentry.size(); index++)
    {
        if(cefcfancoolingcapentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcfancoolingcaptable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcfancoolingcaptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFanCoolingCapTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::Cefcfancoolingcaptable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::Cefcfancoolingcaptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcFanCoolingCapEntry")
    {
        auto c = std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcfancoolingcaptable::Cefcfancoolingcapentry>();
        c->parent = this;
        cefcfancoolingcapentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::Cefcfancoolingcaptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cefcfancoolingcapentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYFRUCONTROLMIB::Cefcfancoolingcaptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYFRUCONTROLMIB::Cefcfancoolingcaptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcfancoolingcaptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcFanCoolingCapEntry")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::Cefcfancoolingcaptable::Cefcfancoolingcapentry::Cefcfancoolingcapentry()
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

CISCOENTITYFRUCONTROLMIB::Cefcfancoolingcaptable::Cefcfancoolingcapentry::~Cefcfancoolingcapentry()
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcfancoolingcaptable::Cefcfancoolingcapentry::has_data() const
{
    return entphysicalindex.is_set
	|| cefcfancoolingcapindex.is_set
	|| cefcfancoolingcapmodedescr.is_set
	|| cefcfancoolingcapcapacity.is_set
	|| cefcfancoolingcapcurrent.is_set
	|| cefcfancoolingcapcapacityunit.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::Cefcfancoolingcaptable::Cefcfancoolingcapentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcfancoolingcapindex.yfilter)
	|| ydk::is_set(cefcfancoolingcapmodedescr.yfilter)
	|| ydk::is_set(cefcfancoolingcapcapacity.yfilter)
	|| ydk::is_set(cefcfancoolingcapcurrent.yfilter)
	|| ydk::is_set(cefcfancoolingcapcapacityunit.yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcfancoolingcaptable::Cefcfancoolingcapentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcFanCoolingCapTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcfancoolingcaptable::Cefcfancoolingcapentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFanCoolingCapEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[cefcFanCoolingCapIndex='" <<cefcfancoolingcapindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::Cefcfancoolingcaptable::Cefcfancoolingcapentry::get_name_leaf_data() const
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

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::Cefcfancoolingcaptable::Cefcfancoolingcapentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::Cefcfancoolingcaptable::Cefcfancoolingcapentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::Cefcfancoolingcaptable::Cefcfancoolingcapentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOENTITYFRUCONTROLMIB::Cefcfancoolingcaptable::Cefcfancoolingcapentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOENTITYFRUCONTROLMIB::Cefcfancoolingcaptable::Cefcfancoolingcapentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcFanCoolingCapIndex" || name == "cefcFanCoolingCapModeDescr" || name == "cefcFanCoolingCapCapacity" || name == "cefcFanCoolingCapCurrent" || name == "cefcFanCoolingCapCapacityUnit")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::Cefcconnectorratingtable::Cefcconnectorratingtable()
{

    yang_name = "cefcConnectorRatingTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYFRUCONTROLMIB::Cefcconnectorratingtable::~Cefcconnectorratingtable()
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcconnectorratingtable::has_data() const
{
    for (std::size_t index=0; index<cefcconnectorratingentry.size(); index++)
    {
        if(cefcconnectorratingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYFRUCONTROLMIB::Cefcconnectorratingtable::has_operation() const
{
    for (std::size_t index=0; index<cefcconnectorratingentry.size(); index++)
    {
        if(cefcconnectorratingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcconnectorratingtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcconnectorratingtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcConnectorRatingTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::Cefcconnectorratingtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::Cefcconnectorratingtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcConnectorRatingEntry")
    {
        auto c = std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcconnectorratingtable::Cefcconnectorratingentry>();
        c->parent = this;
        cefcconnectorratingentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::Cefcconnectorratingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cefcconnectorratingentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYFRUCONTROLMIB::Cefcconnectorratingtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYFRUCONTROLMIB::Cefcconnectorratingtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcconnectorratingtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcConnectorRatingEntry")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::Cefcconnectorratingtable::Cefcconnectorratingentry::Cefcconnectorratingentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcconnectorrating{YType::int32, "cefcConnectorRating"}
{

    yang_name = "cefcConnectorRatingEntry"; yang_parent_name = "cefcConnectorRatingTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYFRUCONTROLMIB::Cefcconnectorratingtable::Cefcconnectorratingentry::~Cefcconnectorratingentry()
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcconnectorratingtable::Cefcconnectorratingentry::has_data() const
{
    return entphysicalindex.is_set
	|| cefcconnectorrating.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::Cefcconnectorratingtable::Cefcconnectorratingentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcconnectorrating.yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcconnectorratingtable::Cefcconnectorratingentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcConnectorRatingTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcconnectorratingtable::Cefcconnectorratingentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcConnectorRatingEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::Cefcconnectorratingtable::Cefcconnectorratingentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcconnectorrating.is_set || is_set(cefcconnectorrating.yfilter)) leaf_name_data.push_back(cefcconnectorrating.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::Cefcconnectorratingtable::Cefcconnectorratingentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::Cefcconnectorratingtable::Cefcconnectorratingentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::Cefcconnectorratingtable::Cefcconnectorratingentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOENTITYFRUCONTROLMIB::Cefcconnectorratingtable::Cefcconnectorratingentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOENTITYFRUCONTROLMIB::Cefcconnectorratingtable::Cefcconnectorratingentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcConnectorRating")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptiontable()
{

    yang_name = "cefcModulePowerConsumptionTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYFRUCONTROLMIB::Cefcmodulepowerconsumptiontable::~Cefcmodulepowerconsumptiontable()
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcmodulepowerconsumptiontable::has_data() const
{
    for (std::size_t index=0; index<cefcmodulepowerconsumptionentry.size(); index++)
    {
        if(cefcmodulepowerconsumptionentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYFRUCONTROLMIB::Cefcmodulepowerconsumptiontable::has_operation() const
{
    for (std::size_t index=0; index<cefcmodulepowerconsumptionentry.size(); index++)
    {
        if(cefcmodulepowerconsumptionentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcmodulepowerconsumptiontable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcmodulepowerconsumptiontable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcModulePowerConsumptionTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::Cefcmodulepowerconsumptiontable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::Cefcmodulepowerconsumptiontable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcModulePowerConsumptionEntry")
    {
        auto c = std::make_shared<CISCOENTITYFRUCONTROLMIB::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry>();
        c->parent = this;
        cefcmodulepowerconsumptionentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::Cefcmodulepowerconsumptiontable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cefcmodulepowerconsumptionentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYFRUCONTROLMIB::Cefcmodulepowerconsumptiontable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYFRUCONTROLMIB::Cefcmodulepowerconsumptiontable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcmodulepowerconsumptiontable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcModulePowerConsumptionEntry")
        return true;
    return false;
}

CISCOENTITYFRUCONTROLMIB::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry::Cefcmodulepowerconsumptionentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcmodulepowerconsumption{YType::int32, "cefcModulePowerConsumption"}
{

    yang_name = "cefcModulePowerConsumptionEntry"; yang_parent_name = "cefcModulePowerConsumptionTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYFRUCONTROLMIB::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry::~Cefcmodulepowerconsumptionentry()
{
}

bool CISCOENTITYFRUCONTROLMIB::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry::has_data() const
{
    return entphysicalindex.is_set
	|| cefcmodulepowerconsumption.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcmodulepowerconsumption.yfilter);
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcModulePowerConsumptionTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYFRUCONTROLMIB::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcModulePowerConsumptionEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYFRUCONTROLMIB::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcmodulepowerconsumption.is_set || is_set(cefcmodulepowerconsumption.yfilter)) leaf_name_data.push_back(cefcmodulepowerconsumption.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYFRUCONTROLMIB::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYFRUCONTROLMIB::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYFRUCONTROLMIB::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOENTITYFRUCONTROLMIB::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOENTITYFRUCONTROLMIB::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcModulePowerConsumption")
        return true;
    return false;
}

const Enum::YLeaf PowerRedundancyType::notsupported {1, "notsupported"};
const Enum::YLeaf PowerRedundancyType::redundant {2, "redundant"};
const Enum::YLeaf PowerRedundancyType::combined {3, "combined"};
const Enum::YLeaf PowerRedundancyType::nonRedundant {4, "nonRedundant"};
const Enum::YLeaf PowerRedundancyType::psRedundant {5, "psRedundant"};
const Enum::YLeaf PowerRedundancyType::inPwrSrcRedundant {6, "inPwrSrcRedundant"};
const Enum::YLeaf PowerRedundancyType::psRedundantSingleInput {7, "psRedundantSingleInput"};

const Enum::YLeaf PowerAdminType::on {1, "on"};
const Enum::YLeaf PowerAdminType::off {2, "off"};
const Enum::YLeaf PowerAdminType::inlineAuto {3, "inlineAuto"};
const Enum::YLeaf PowerAdminType::inlineOn {4, "inlineOn"};
const Enum::YLeaf PowerAdminType::powerCycle {5, "powerCycle"};

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

const Enum::YLeaf ModuleAdminType::enabled {1, "enabled"};
const Enum::YLeaf ModuleAdminType::disabled {2, "disabled"};
const Enum::YLeaf ModuleAdminType::reset {3, "reset"};
const Enum::YLeaf ModuleAdminType::outOfServiceAdmin {4, "outOfServiceAdmin"};

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

const Enum::YLeaf FRUCoolingUnit::cfm {1, "cfm"};
const Enum::YLeaf FRUCoolingUnit::watts {2, "watts"};

const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::Cefcpowernonredundantreason::notApplicable {1, "notApplicable"};
const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::Cefcpowernonredundantreason::unknown {2, "unknown"};
const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::Cefcpowernonredundantreason::singleSupply {3, "singleSupply"};
const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::Cefcpowernonredundantreason::mismatchedSupplies {4, "mismatchedSupplies"};
const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::Cefcpowernonredundantreason::supplyError {5, "supplyError"};

const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry::Cefcmodulelocalswitchingmode::enabled {1, "enabled"};
const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry::Cefcmodulelocalswitchingmode::disabled {2, "disabled"};

const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable::Cefcfantraystatusentry::Cefcfantrayoperstatus::unknown {1, "unknown"};
const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable::Cefcfantraystatusentry::Cefcfantrayoperstatus::up {2, "up"};
const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable::Cefcfantraystatusentry::Cefcfantrayoperstatus::down {3, "down"};
const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable::Cefcfantraystatusentry::Cefcfantrayoperstatus::warning {4, "warning"};

const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable::Cefcphysicalentry::Cefcphysicalstatus::other {1, "other"};
const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable::Cefcphysicalentry::Cefcphysicalstatus::supported {2, "supported"};
const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable::Cefcphysicalentry::Cefcphysicalstatus::unsupported {3, "unsupported"};
const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable::Cefcphysicalentry::Cefcphysicalstatus::incompatible {4, "incompatible"};

const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::Cefcpowersupplyinputtype::unknown {1, "unknown"};
const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::Cefcpowersupplyinputtype::acLow {2, "acLow"};
const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::Cefcpowersupplyinputtype::acHigh {3, "acHigh"};
const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::Cefcpowersupplyinputtype::dcLow {4, "dcLow"};
const Enum::YLeaf CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::Cefcpowersupplyinputtype::dcHigh {5, "dcHigh"};


}
}

