
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_ENTITY_FRU_CONTROL_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_ENTITY_FRU_CONTROL_MIB {

CiscoEntityFruControlMib::CiscoEntityFruControlMib()
    :
    cefcchassiscoolingtable(std::make_shared<CiscoEntityFruControlMib::Cefcchassiscoolingtable>())
	,cefcconnectorratingtable(std::make_shared<CiscoEntityFruControlMib::Cefcconnectorratingtable>())
	,cefcfancoolingcaptable(std::make_shared<CiscoEntityFruControlMib::Cefcfancoolingcaptable>())
	,cefcfancoolingtable(std::make_shared<CiscoEntityFruControlMib::Cefcfancoolingtable>())
	,cefcfantraystatustable(std::make_shared<CiscoEntityFruControlMib::Cefcfantraystatustable>())
	,cefcfrupower(std::make_shared<CiscoEntityFruControlMib::Cefcfrupower>())
	,cefcfrupowerstatustable(std::make_shared<CiscoEntityFruControlMib::Cefcfrupowerstatustable>())
	,cefcfrupowersupplygrouptable(std::make_shared<CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable>())
	,cefcfrupowersupplyvaluetable(std::make_shared<CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable>())
	,cefcintellimoduletable(std::make_shared<CiscoEntityFruControlMib::Cefcintellimoduletable>())
	,cefcmibnotificationenables(std::make_shared<CiscoEntityFruControlMib::Cefcmibnotificationenables>())
	,cefcmodulecoolingtable(std::make_shared<CiscoEntityFruControlMib::Cefcmodulecoolingtable>())
	,cefcmodulelocalswitchingtable(std::make_shared<CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable>())
	,cefcmodulepowerconsumptiontable(std::make_shared<CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable>())
	,cefcmoduletable(std::make_shared<CiscoEntityFruControlMib::Cefcmoduletable>())
	,cefcphysicaltable(std::make_shared<CiscoEntityFruControlMib::Cefcphysicaltable>())
	,cefcpowersupplyinputtable(std::make_shared<CiscoEntityFruControlMib::Cefcpowersupplyinputtable>())
	,cefcpowersupplyoutputtable(std::make_shared<CiscoEntityFruControlMib::Cefcpowersupplyoutputtable>())
{
    cefcchassiscoolingtable->parent = this;

    cefcconnectorratingtable->parent = this;

    cefcfancoolingcaptable->parent = this;

    cefcfancoolingtable->parent = this;

    cefcfantraystatustable->parent = this;

    cefcfrupower->parent = this;

    cefcfrupowerstatustable->parent = this;

    cefcfrupowersupplygrouptable->parent = this;

    cefcfrupowersupplyvaluetable->parent = this;

    cefcintellimoduletable->parent = this;

    cefcmibnotificationenables->parent = this;

    cefcmodulecoolingtable->parent = this;

    cefcmodulelocalswitchingtable->parent = this;

    cefcmodulepowerconsumptiontable->parent = this;

    cefcmoduletable->parent = this;

    cefcphysicaltable->parent = this;

    cefcpowersupplyinputtable->parent = this;

    cefcpowersupplyoutputtable->parent = this;

    yang_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB";
}

CiscoEntityFruControlMib::~CiscoEntityFruControlMib()
{
}

bool CiscoEntityFruControlMib::has_data() const
{
    return (cefcchassiscoolingtable !=  nullptr && cefcchassiscoolingtable->has_data())
	|| (cefcconnectorratingtable !=  nullptr && cefcconnectorratingtable->has_data())
	|| (cefcfancoolingcaptable !=  nullptr && cefcfancoolingcaptable->has_data())
	|| (cefcfancoolingtable !=  nullptr && cefcfancoolingtable->has_data())
	|| (cefcfantraystatustable !=  nullptr && cefcfantraystatustable->has_data())
	|| (cefcfrupower !=  nullptr && cefcfrupower->has_data())
	|| (cefcfrupowerstatustable !=  nullptr && cefcfrupowerstatustable->has_data())
	|| (cefcfrupowersupplygrouptable !=  nullptr && cefcfrupowersupplygrouptable->has_data())
	|| (cefcfrupowersupplyvaluetable !=  nullptr && cefcfrupowersupplyvaluetable->has_data())
	|| (cefcintellimoduletable !=  nullptr && cefcintellimoduletable->has_data())
	|| (cefcmibnotificationenables !=  nullptr && cefcmibnotificationenables->has_data())
	|| (cefcmodulecoolingtable !=  nullptr && cefcmodulecoolingtable->has_data())
	|| (cefcmodulelocalswitchingtable !=  nullptr && cefcmodulelocalswitchingtable->has_data())
	|| (cefcmodulepowerconsumptiontable !=  nullptr && cefcmodulepowerconsumptiontable->has_data())
	|| (cefcmoduletable !=  nullptr && cefcmoduletable->has_data())
	|| (cefcphysicaltable !=  nullptr && cefcphysicaltable->has_data())
	|| (cefcpowersupplyinputtable !=  nullptr && cefcpowersupplyinputtable->has_data())
	|| (cefcpowersupplyoutputtable !=  nullptr && cefcpowersupplyoutputtable->has_data());
}

bool CiscoEntityFruControlMib::has_operation() const
{
    return is_set(yfilter)
	|| (cefcchassiscoolingtable !=  nullptr && cefcchassiscoolingtable->has_operation())
	|| (cefcconnectorratingtable !=  nullptr && cefcconnectorratingtable->has_operation())
	|| (cefcfancoolingcaptable !=  nullptr && cefcfancoolingcaptable->has_operation())
	|| (cefcfancoolingtable !=  nullptr && cefcfancoolingtable->has_operation())
	|| (cefcfantraystatustable !=  nullptr && cefcfantraystatustable->has_operation())
	|| (cefcfrupower !=  nullptr && cefcfrupower->has_operation())
	|| (cefcfrupowerstatustable !=  nullptr && cefcfrupowerstatustable->has_operation())
	|| (cefcfrupowersupplygrouptable !=  nullptr && cefcfrupowersupplygrouptable->has_operation())
	|| (cefcfrupowersupplyvaluetable !=  nullptr && cefcfrupowersupplyvaluetable->has_operation())
	|| (cefcintellimoduletable !=  nullptr && cefcintellimoduletable->has_operation())
	|| (cefcmibnotificationenables !=  nullptr && cefcmibnotificationenables->has_operation())
	|| (cefcmodulecoolingtable !=  nullptr && cefcmodulecoolingtable->has_operation())
	|| (cefcmodulelocalswitchingtable !=  nullptr && cefcmodulelocalswitchingtable->has_operation())
	|| (cefcmodulepowerconsumptiontable !=  nullptr && cefcmodulepowerconsumptiontable->has_operation())
	|| (cefcmoduletable !=  nullptr && cefcmoduletable->has_operation())
	|| (cefcphysicaltable !=  nullptr && cefcphysicaltable->has_operation())
	|| (cefcpowersupplyinputtable !=  nullptr && cefcpowersupplyinputtable->has_operation())
	|| (cefcpowersupplyoutputtable !=  nullptr && cefcpowersupplyoutputtable->has_operation());
}

std::string CiscoEntityFruControlMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB";

    return path_buffer.str();

}

const EntityPath CiscoEntityFruControlMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityFruControlMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcChassisCoolingTable")
    {
        if(cefcchassiscoolingtable == nullptr)
        {
            cefcchassiscoolingtable = std::make_shared<CiscoEntityFruControlMib::Cefcchassiscoolingtable>();
        }
        return cefcchassiscoolingtable;
    }

    if(child_yang_name == "cefcConnectorRatingTable")
    {
        if(cefcconnectorratingtable == nullptr)
        {
            cefcconnectorratingtable = std::make_shared<CiscoEntityFruControlMib::Cefcconnectorratingtable>();
        }
        return cefcconnectorratingtable;
    }

    if(child_yang_name == "cefcFanCoolingCapTable")
    {
        if(cefcfancoolingcaptable == nullptr)
        {
            cefcfancoolingcaptable = std::make_shared<CiscoEntityFruControlMib::Cefcfancoolingcaptable>();
        }
        return cefcfancoolingcaptable;
    }

    if(child_yang_name == "cefcFanCoolingTable")
    {
        if(cefcfancoolingtable == nullptr)
        {
            cefcfancoolingtable = std::make_shared<CiscoEntityFruControlMib::Cefcfancoolingtable>();
        }
        return cefcfancoolingtable;
    }

    if(child_yang_name == "cefcFanTrayStatusTable")
    {
        if(cefcfantraystatustable == nullptr)
        {
            cefcfantraystatustable = std::make_shared<CiscoEntityFruControlMib::Cefcfantraystatustable>();
        }
        return cefcfantraystatustable;
    }

    if(child_yang_name == "cefcFRUPower")
    {
        if(cefcfrupower == nullptr)
        {
            cefcfrupower = std::make_shared<CiscoEntityFruControlMib::Cefcfrupower>();
        }
        return cefcfrupower;
    }

    if(child_yang_name == "cefcFRUPowerStatusTable")
    {
        if(cefcfrupowerstatustable == nullptr)
        {
            cefcfrupowerstatustable = std::make_shared<CiscoEntityFruControlMib::Cefcfrupowerstatustable>();
        }
        return cefcfrupowerstatustable;
    }

    if(child_yang_name == "cefcFRUPowerSupplyGroupTable")
    {
        if(cefcfrupowersupplygrouptable == nullptr)
        {
            cefcfrupowersupplygrouptable = std::make_shared<CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable>();
        }
        return cefcfrupowersupplygrouptable;
    }

    if(child_yang_name == "cefcFRUPowerSupplyValueTable")
    {
        if(cefcfrupowersupplyvaluetable == nullptr)
        {
            cefcfrupowersupplyvaluetable = std::make_shared<CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable>();
        }
        return cefcfrupowersupplyvaluetable;
    }

    if(child_yang_name == "cefcIntelliModuleTable")
    {
        if(cefcintellimoduletable == nullptr)
        {
            cefcintellimoduletable = std::make_shared<CiscoEntityFruControlMib::Cefcintellimoduletable>();
        }
        return cefcintellimoduletable;
    }

    if(child_yang_name == "cefcMIBNotificationEnables")
    {
        if(cefcmibnotificationenables == nullptr)
        {
            cefcmibnotificationenables = std::make_shared<CiscoEntityFruControlMib::Cefcmibnotificationenables>();
        }
        return cefcmibnotificationenables;
    }

    if(child_yang_name == "cefcModuleCoolingTable")
    {
        if(cefcmodulecoolingtable == nullptr)
        {
            cefcmodulecoolingtable = std::make_shared<CiscoEntityFruControlMib::Cefcmodulecoolingtable>();
        }
        return cefcmodulecoolingtable;
    }

    if(child_yang_name == "cefcModuleLocalSwitchingTable")
    {
        if(cefcmodulelocalswitchingtable == nullptr)
        {
            cefcmodulelocalswitchingtable = std::make_shared<CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable>();
        }
        return cefcmodulelocalswitchingtable;
    }

    if(child_yang_name == "cefcModulePowerConsumptionTable")
    {
        if(cefcmodulepowerconsumptiontable == nullptr)
        {
            cefcmodulepowerconsumptiontable = std::make_shared<CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable>();
        }
        return cefcmodulepowerconsumptiontable;
    }

    if(child_yang_name == "cefcModuleTable")
    {
        if(cefcmoduletable == nullptr)
        {
            cefcmoduletable = std::make_shared<CiscoEntityFruControlMib::Cefcmoduletable>();
        }
        return cefcmoduletable;
    }

    if(child_yang_name == "cefcPhysicalTable")
    {
        if(cefcphysicaltable == nullptr)
        {
            cefcphysicaltable = std::make_shared<CiscoEntityFruControlMib::Cefcphysicaltable>();
        }
        return cefcphysicaltable;
    }

    if(child_yang_name == "cefcPowerSupplyInputTable")
    {
        if(cefcpowersupplyinputtable == nullptr)
        {
            cefcpowersupplyinputtable = std::make_shared<CiscoEntityFruControlMib::Cefcpowersupplyinputtable>();
        }
        return cefcpowersupplyinputtable;
    }

    if(child_yang_name == "cefcPowerSupplyOutputTable")
    {
        if(cefcpowersupplyoutputtable == nullptr)
        {
            cefcpowersupplyoutputtable = std::make_shared<CiscoEntityFruControlMib::Cefcpowersupplyoutputtable>();
        }
        return cefcpowersupplyoutputtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cefcchassiscoolingtable != nullptr)
    {
        children["cefcChassisCoolingTable"] = cefcchassiscoolingtable;
    }

    if(cefcconnectorratingtable != nullptr)
    {
        children["cefcConnectorRatingTable"] = cefcconnectorratingtable;
    }

    if(cefcfancoolingcaptable != nullptr)
    {
        children["cefcFanCoolingCapTable"] = cefcfancoolingcaptable;
    }

    if(cefcfancoolingtable != nullptr)
    {
        children["cefcFanCoolingTable"] = cefcfancoolingtable;
    }

    if(cefcfantraystatustable != nullptr)
    {
        children["cefcFanTrayStatusTable"] = cefcfantraystatustable;
    }

    if(cefcfrupower != nullptr)
    {
        children["cefcFRUPower"] = cefcfrupower;
    }

    if(cefcfrupowerstatustable != nullptr)
    {
        children["cefcFRUPowerStatusTable"] = cefcfrupowerstatustable;
    }

    if(cefcfrupowersupplygrouptable != nullptr)
    {
        children["cefcFRUPowerSupplyGroupTable"] = cefcfrupowersupplygrouptable;
    }

    if(cefcfrupowersupplyvaluetable != nullptr)
    {
        children["cefcFRUPowerSupplyValueTable"] = cefcfrupowersupplyvaluetable;
    }

    if(cefcintellimoduletable != nullptr)
    {
        children["cefcIntelliModuleTable"] = cefcintellimoduletable;
    }

    if(cefcmibnotificationenables != nullptr)
    {
        children["cefcMIBNotificationEnables"] = cefcmibnotificationenables;
    }

    if(cefcmodulecoolingtable != nullptr)
    {
        children["cefcModuleCoolingTable"] = cefcmodulecoolingtable;
    }

    if(cefcmodulelocalswitchingtable != nullptr)
    {
        children["cefcModuleLocalSwitchingTable"] = cefcmodulelocalswitchingtable;
    }

    if(cefcmodulepowerconsumptiontable != nullptr)
    {
        children["cefcModulePowerConsumptionTable"] = cefcmodulepowerconsumptiontable;
    }

    if(cefcmoduletable != nullptr)
    {
        children["cefcModuleTable"] = cefcmoduletable;
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

    return children;
}

void CiscoEntityFruControlMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEntityFruControlMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoEntityFruControlMib::clone_ptr() const
{
    return std::make_shared<CiscoEntityFruControlMib>();
}

std::string CiscoEntityFruControlMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoEntityFruControlMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoEntityFruControlMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoEntityFruControlMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoEntityFruControlMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcChassisCoolingTable" || name == "cefcConnectorRatingTable" || name == "cefcFanCoolingCapTable" || name == "cefcFanCoolingTable" || name == "cefcFanTrayStatusTable" || name == "cefcFRUPower" || name == "cefcFRUPowerStatusTable" || name == "cefcFRUPowerSupplyGroupTable" || name == "cefcFRUPowerSupplyValueTable" || name == "cefcIntelliModuleTable" || name == "cefcMIBNotificationEnables" || name == "cefcModuleCoolingTable" || name == "cefcModuleLocalSwitchingTable" || name == "cefcModulePowerConsumptionTable" || name == "cefcModuleTable" || name == "cefcPhysicalTable" || name == "cefcPowerSupplyInputTable" || name == "cefcPowerSupplyOutputTable")
        return true;
    return false;
}

CiscoEntityFruControlMib::Cefcfrupower::Cefcfrupower()
    :
    cefcmaxdefaulthighinlinepower{YType::uint32, "cefcMaxDefaultHighInLinePower"},
    cefcmaxdefaultinlinepower{YType::int32, "cefcMaxDefaultInLinePower"}
{
    yang_name = "cefcFRUPower"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB";
}

CiscoEntityFruControlMib::Cefcfrupower::~Cefcfrupower()
{
}

bool CiscoEntityFruControlMib::Cefcfrupower::has_data() const
{
    return cefcmaxdefaulthighinlinepower.is_set
	|| cefcmaxdefaultinlinepower.is_set;
}

bool CiscoEntityFruControlMib::Cefcfrupower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cefcmaxdefaulthighinlinepower.yfilter)
	|| ydk::is_set(cefcmaxdefaultinlinepower.yfilter);
}

std::string CiscoEntityFruControlMib::Cefcfrupower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFRUPower";

    return path_buffer.str();

}

const EntityPath CiscoEntityFruControlMib::Cefcfrupower::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cefcmaxdefaulthighinlinepower.is_set || is_set(cefcmaxdefaulthighinlinepower.yfilter)) leaf_name_data.push_back(cefcmaxdefaulthighinlinepower.get_name_leafdata());
    if (cefcmaxdefaultinlinepower.is_set || is_set(cefcmaxdefaultinlinepower.yfilter)) leaf_name_data.push_back(cefcmaxdefaultinlinepower.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityFruControlMib::Cefcfrupower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcfrupower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityFruControlMib::Cefcfrupower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cefcMaxDefaultHighInLinePower")
    {
        cefcmaxdefaulthighinlinepower = value;
        cefcmaxdefaulthighinlinepower.value_namespace = name_space;
        cefcmaxdefaulthighinlinepower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcMaxDefaultInLinePower")
    {
        cefcmaxdefaultinlinepower = value;
        cefcmaxdefaultinlinepower.value_namespace = name_space;
        cefcmaxdefaultinlinepower.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEntityFruControlMib::Cefcfrupower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cefcMaxDefaultHighInLinePower")
    {
        cefcmaxdefaulthighinlinepower.yfilter = yfilter;
    }
    if(value_path == "cefcMaxDefaultInLinePower")
    {
        cefcmaxdefaultinlinepower.yfilter = yfilter;
    }
}

bool CiscoEntityFruControlMib::Cefcfrupower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcMaxDefaultHighInLinePower" || name == "cefcMaxDefaultInLinePower")
        return true;
    return false;
}

CiscoEntityFruControlMib::Cefcmibnotificationenables::Cefcmibnotificationenables()
    :
    cefcenablepsoutputchangenotif{YType::boolean, "cefcEnablePSOutputChangeNotif"},
    cefcmibenablestatusnotification{YType::boolean, "cefcMIBEnableStatusNotification"}
{
    yang_name = "cefcMIBNotificationEnables"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB";
}

CiscoEntityFruControlMib::Cefcmibnotificationenables::~Cefcmibnotificationenables()
{
}

bool CiscoEntityFruControlMib::Cefcmibnotificationenables::has_data() const
{
    return cefcenablepsoutputchangenotif.is_set
	|| cefcmibenablestatusnotification.is_set;
}

bool CiscoEntityFruControlMib::Cefcmibnotificationenables::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cefcenablepsoutputchangenotif.yfilter)
	|| ydk::is_set(cefcmibenablestatusnotification.yfilter);
}

std::string CiscoEntityFruControlMib::Cefcmibnotificationenables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcMIBNotificationEnables";

    return path_buffer.str();

}

const EntityPath CiscoEntityFruControlMib::Cefcmibnotificationenables::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cefcenablepsoutputchangenotif.is_set || is_set(cefcenablepsoutputchangenotif.yfilter)) leaf_name_data.push_back(cefcenablepsoutputchangenotif.get_name_leafdata());
    if (cefcmibenablestatusnotification.is_set || is_set(cefcmibenablestatusnotification.yfilter)) leaf_name_data.push_back(cefcmibenablestatusnotification.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityFruControlMib::Cefcmibnotificationenables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcmibnotificationenables::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityFruControlMib::Cefcmibnotificationenables::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cefcEnablePSOutputChangeNotif")
    {
        cefcenablepsoutputchangenotif = value;
        cefcenablepsoutputchangenotif.value_namespace = name_space;
        cefcenablepsoutputchangenotif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcMIBEnableStatusNotification")
    {
        cefcmibenablestatusnotification = value;
        cefcmibenablestatusnotification.value_namespace = name_space;
        cefcmibenablestatusnotification.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEntityFruControlMib::Cefcmibnotificationenables::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cefcEnablePSOutputChangeNotif")
    {
        cefcenablepsoutputchangenotif.yfilter = yfilter;
    }
    if(value_path == "cefcMIBEnableStatusNotification")
    {
        cefcmibenablestatusnotification.yfilter = yfilter;
    }
}

bool CiscoEntityFruControlMib::Cefcmibnotificationenables::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcEnablePSOutputChangeNotif" || name == "cefcMIBEnableStatusNotification")
        return true;
    return false;
}

CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygrouptable()
{
    yang_name = "cefcFRUPowerSupplyGroupTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB";
}

CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::~Cefcfrupowersupplygrouptable()
{
}

bool CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::has_data() const
{
    for (std::size_t index=0; index<cefcfrupowersupplygroupentry.size(); index++)
    {
        if(cefcfrupowersupplygroupentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::has_operation() const
{
    for (std::size_t index=0; index<cefcfrupowersupplygroupentry.size(); index++)
    {
        if(cefcfrupowersupplygroupentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFRUPowerSupplyGroupTable";

    return path_buffer.str();

}

const EntityPath CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcFRUPowerSupplyGroupEntry")
    {
        for(auto const & c : cefcfrupowersupplygroupentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry>();
        c->parent = this;
        cefcfrupowersupplygroupentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcfrupowersupplygroupentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcFRUPowerSupplyGroupEntry")
        return true;
    return false;
}

CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::Cefcfrupowersupplygroupentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcpowernonredundantreason{YType::enumeration, "cefcPowerNonRedundantReason"},
    cefcpowerredundancymode{YType::enumeration, "cefcPowerRedundancyMode"},
    cefcpowerredundancyopermode{YType::enumeration, "cefcPowerRedundancyOperMode"},
    cefcpowerunits{YType::str, "cefcPowerUnits"},
    cefctotalavailablecurrent{YType::int32, "cefcTotalAvailableCurrent"},
    cefctotaldrawncurrent{YType::int32, "cefcTotalDrawnCurrent"},
    cefctotaldrawninlinecurrent{YType::int32, "cefcTotalDrawnInlineCurrent"}
{
    yang_name = "cefcFRUPowerSupplyGroupEntry"; yang_parent_name = "cefcFRUPowerSupplyGroupTable";
}

CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::~Cefcfrupowersupplygroupentry()
{
}

bool CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::has_data() const
{
    return entphysicalindex.is_set
	|| cefcpowernonredundantreason.is_set
	|| cefcpowerredundancymode.is_set
	|| cefcpowerredundancyopermode.is_set
	|| cefcpowerunits.is_set
	|| cefctotalavailablecurrent.is_set
	|| cefctotaldrawncurrent.is_set
	|| cefctotaldrawninlinecurrent.is_set;
}

bool CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcpowernonredundantreason.yfilter)
	|| ydk::is_set(cefcpowerredundancymode.yfilter)
	|| ydk::is_set(cefcpowerredundancyopermode.yfilter)
	|| ydk::is_set(cefcpowerunits.yfilter)
	|| ydk::is_set(cefctotalavailablecurrent.yfilter)
	|| ydk::is_set(cefctotaldrawncurrent.yfilter)
	|| ydk::is_set(cefctotaldrawninlinecurrent.yfilter);
}

std::string CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFRUPowerSupplyGroupEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcFRUPowerSupplyGroupTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcpowernonredundantreason.is_set || is_set(cefcpowernonredundantreason.yfilter)) leaf_name_data.push_back(cefcpowernonredundantreason.get_name_leafdata());
    if (cefcpowerredundancymode.is_set || is_set(cefcpowerredundancymode.yfilter)) leaf_name_data.push_back(cefcpowerredundancymode.get_name_leafdata());
    if (cefcpowerredundancyopermode.is_set || is_set(cefcpowerredundancyopermode.yfilter)) leaf_name_data.push_back(cefcpowerredundancyopermode.get_name_leafdata());
    if (cefcpowerunits.is_set || is_set(cefcpowerunits.yfilter)) leaf_name_data.push_back(cefcpowerunits.get_name_leafdata());
    if (cefctotalavailablecurrent.is_set || is_set(cefctotalavailablecurrent.yfilter)) leaf_name_data.push_back(cefctotalavailablecurrent.get_name_leafdata());
    if (cefctotaldrawncurrent.is_set || is_set(cefctotaldrawncurrent.yfilter)) leaf_name_data.push_back(cefctotaldrawncurrent.get_name_leafdata());
    if (cefctotaldrawninlinecurrent.is_set || is_set(cefctotaldrawninlinecurrent.yfilter)) leaf_name_data.push_back(cefctotaldrawninlinecurrent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcPowerNonRedundantReason")
    {
        cefcpowernonredundantreason = value;
        cefcpowernonredundantreason.value_namespace = name_space;
        cefcpowernonredundantreason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcPowerRedundancyMode")
    {
        cefcpowerredundancymode = value;
        cefcpowerredundancymode.value_namespace = name_space;
        cefcpowerredundancymode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcPowerRedundancyOperMode")
    {
        cefcpowerredundancyopermode = value;
        cefcpowerredundancyopermode.value_namespace = name_space;
        cefcpowerredundancyopermode.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cefcTotalDrawnInlineCurrent")
    {
        cefctotaldrawninlinecurrent = value;
        cefctotaldrawninlinecurrent.value_namespace = name_space;
        cefctotaldrawninlinecurrent.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefcPowerNonRedundantReason")
    {
        cefcpowernonredundantreason.yfilter = yfilter;
    }
    if(value_path == "cefcPowerRedundancyMode")
    {
        cefcpowerredundancymode.yfilter = yfilter;
    }
    if(value_path == "cefcPowerRedundancyOperMode")
    {
        cefcpowerredundancyopermode.yfilter = yfilter;
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
    if(value_path == "cefcTotalDrawnInlineCurrent")
    {
        cefctotaldrawninlinecurrent.yfilter = yfilter;
    }
}

bool CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcPowerNonRedundantReason" || name == "cefcPowerRedundancyMode" || name == "cefcPowerRedundancyOperMode" || name == "cefcPowerUnits" || name == "cefcTotalAvailableCurrent" || name == "cefcTotalDrawnCurrent" || name == "cefcTotalDrawnInlineCurrent")
        return true;
    return false;
}

CiscoEntityFruControlMib::Cefcfrupowerstatustable::Cefcfrupowerstatustable()
{
    yang_name = "cefcFRUPowerStatusTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB";
}

CiscoEntityFruControlMib::Cefcfrupowerstatustable::~Cefcfrupowerstatustable()
{
}

bool CiscoEntityFruControlMib::Cefcfrupowerstatustable::has_data() const
{
    for (std::size_t index=0; index<cefcfrupowerstatusentry.size(); index++)
    {
        if(cefcfrupowerstatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityFruControlMib::Cefcfrupowerstatustable::has_operation() const
{
    for (std::size_t index=0; index<cefcfrupowerstatusentry.size(); index++)
    {
        if(cefcfrupowerstatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEntityFruControlMib::Cefcfrupowerstatustable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFRUPowerStatusTable";

    return path_buffer.str();

}

const EntityPath CiscoEntityFruControlMib::Cefcfrupowerstatustable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityFruControlMib::Cefcfrupowerstatustable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcFRUPowerStatusEntry")
    {
        for(auto const & c : cefcfrupowerstatusentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityFruControlMib::Cefcfrupowerstatustable::Cefcfrupowerstatusentry>();
        c->parent = this;
        cefcfrupowerstatusentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcfrupowerstatustable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcfrupowerstatusentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityFruControlMib::Cefcfrupowerstatustable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEntityFruControlMib::Cefcfrupowerstatustable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEntityFruControlMib::Cefcfrupowerstatustable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcFRUPowerStatusEntry")
        return true;
    return false;
}

CiscoEntityFruControlMib::Cefcfrupowerstatustable::Cefcfrupowerstatusentry::Cefcfrupowerstatusentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcfrucurrent{YType::int32, "cefcFRUCurrent"},
    cefcfrupoweradminstatus{YType::enumeration, "cefcFRUPowerAdminStatus"},
    cefcfrupowercapability{YType::bits, "cefcFRUPowerCapability"},
    cefcfrupoweroperstatus{YType::enumeration, "cefcFRUPowerOperStatus"},
    cefcfrurealtimecurrent{YType::int32, "cefcFRURealTimeCurrent"}
{
    yang_name = "cefcFRUPowerStatusEntry"; yang_parent_name = "cefcFRUPowerStatusTable";
}

CiscoEntityFruControlMib::Cefcfrupowerstatustable::Cefcfrupowerstatusentry::~Cefcfrupowerstatusentry()
{
}

bool CiscoEntityFruControlMib::Cefcfrupowerstatustable::Cefcfrupowerstatusentry::has_data() const
{
    return entphysicalindex.is_set
	|| cefcfrucurrent.is_set
	|| cefcfrupoweradminstatus.is_set
	|| cefcfrupowercapability.is_set
	|| cefcfrupoweroperstatus.is_set
	|| cefcfrurealtimecurrent.is_set;
}

bool CiscoEntityFruControlMib::Cefcfrupowerstatustable::Cefcfrupowerstatusentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcfrucurrent.yfilter)
	|| ydk::is_set(cefcfrupoweradminstatus.yfilter)
	|| ydk::is_set(cefcfrupowercapability.yfilter)
	|| ydk::is_set(cefcfrupoweroperstatus.yfilter)
	|| ydk::is_set(cefcfrurealtimecurrent.yfilter);
}

std::string CiscoEntityFruControlMib::Cefcfrupowerstatustable::Cefcfrupowerstatusentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFRUPowerStatusEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEntityFruControlMib::Cefcfrupowerstatustable::Cefcfrupowerstatusentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcFRUPowerStatusTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcfrucurrent.is_set || is_set(cefcfrucurrent.yfilter)) leaf_name_data.push_back(cefcfrucurrent.get_name_leafdata());
    if (cefcfrupoweradminstatus.is_set || is_set(cefcfrupoweradminstatus.yfilter)) leaf_name_data.push_back(cefcfrupoweradminstatus.get_name_leafdata());
    if (cefcfrupowercapability.is_set || is_set(cefcfrupowercapability.yfilter)) leaf_name_data.push_back(cefcfrupowercapability.get_name_leafdata());
    if (cefcfrupoweroperstatus.is_set || is_set(cefcfrupoweroperstatus.yfilter)) leaf_name_data.push_back(cefcfrupoweroperstatus.get_name_leafdata());
    if (cefcfrurealtimecurrent.is_set || is_set(cefcfrurealtimecurrent.yfilter)) leaf_name_data.push_back(cefcfrurealtimecurrent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityFruControlMib::Cefcfrupowerstatustable::Cefcfrupowerstatusentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcfrupowerstatustable::Cefcfrupowerstatusentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityFruControlMib::Cefcfrupowerstatustable::Cefcfrupowerstatusentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcFRUCurrent")
    {
        cefcfrucurrent = value;
        cefcfrucurrent.value_namespace = name_space;
        cefcfrucurrent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcFRUPowerAdminStatus")
    {
        cefcfrupoweradminstatus = value;
        cefcfrupoweradminstatus.value_namespace = name_space;
        cefcfrupoweradminstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcFRUPowerCapability")
    {
        cefcfrupowercapability[value] = true;
    }
    if(value_path == "cefcFRUPowerOperStatus")
    {
        cefcfrupoweroperstatus = value;
        cefcfrupoweroperstatus.value_namespace = name_space;
        cefcfrupoweroperstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcFRURealTimeCurrent")
    {
        cefcfrurealtimecurrent = value;
        cefcfrurealtimecurrent.value_namespace = name_space;
        cefcfrurealtimecurrent.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEntityFruControlMib::Cefcfrupowerstatustable::Cefcfrupowerstatusentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefcFRUCurrent")
    {
        cefcfrucurrent.yfilter = yfilter;
    }
    if(value_path == "cefcFRUPowerAdminStatus")
    {
        cefcfrupoweradminstatus.yfilter = yfilter;
    }
    if(value_path == "cefcFRUPowerCapability")
    {
        cefcfrupowercapability.yfilter = yfilter;
    }
    if(value_path == "cefcFRUPowerOperStatus")
    {
        cefcfrupoweroperstatus.yfilter = yfilter;
    }
    if(value_path == "cefcFRURealTimeCurrent")
    {
        cefcfrurealtimecurrent.yfilter = yfilter;
    }
}

bool CiscoEntityFruControlMib::Cefcfrupowerstatustable::Cefcfrupowerstatusentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcFRUCurrent" || name == "cefcFRUPowerAdminStatus" || name == "cefcFRUPowerCapability" || name == "cefcFRUPowerOperStatus" || name == "cefcFRURealTimeCurrent")
        return true;
    return false;
}

CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvaluetable()
{
    yang_name = "cefcFRUPowerSupplyValueTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB";
}

CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::~Cefcfrupowersupplyvaluetable()
{
}

bool CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::has_data() const
{
    for (std::size_t index=0; index<cefcfrupowersupplyvalueentry.size(); index++)
    {
        if(cefcfrupowersupplyvalueentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::has_operation() const
{
    for (std::size_t index=0; index<cefcfrupowersupplyvalueentry.size(); index++)
    {
        if(cefcfrupowersupplyvalueentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFRUPowerSupplyValueTable";

    return path_buffer.str();

}

const EntityPath CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcFRUPowerSupplyValueEntry")
    {
        for(auto const & c : cefcfrupowersupplyvalueentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry>();
        c->parent = this;
        cefcfrupowersupplyvalueentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcfrupowersupplyvalueentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcFRUPowerSupplyValueEntry")
        return true;
    return false;
}

CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry::Cefcfrupowersupplyvalueentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcfrudrawninlinecurrent{YType::int32, "cefcFRUDrawnInlineCurrent"},
    cefcfrudrawnsystemcurrent{YType::int32, "cefcFRUDrawnSystemCurrent"},
    cefcfrutotalinlinecurrent{YType::int32, "cefcFRUTotalInlineCurrent"},
    cefcfrutotalsystemcurrent{YType::int32, "cefcFRUTotalSystemCurrent"}
{
    yang_name = "cefcFRUPowerSupplyValueEntry"; yang_parent_name = "cefcFRUPowerSupplyValueTable";
}

CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry::~Cefcfrupowersupplyvalueentry()
{
}

bool CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry::has_data() const
{
    return entphysicalindex.is_set
	|| cefcfrudrawninlinecurrent.is_set
	|| cefcfrudrawnsystemcurrent.is_set
	|| cefcfrutotalinlinecurrent.is_set
	|| cefcfrutotalsystemcurrent.is_set;
}

bool CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcfrudrawninlinecurrent.yfilter)
	|| ydk::is_set(cefcfrudrawnsystemcurrent.yfilter)
	|| ydk::is_set(cefcfrutotalinlinecurrent.yfilter)
	|| ydk::is_set(cefcfrutotalsystemcurrent.yfilter);
}

std::string CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFRUPowerSupplyValueEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcFRUPowerSupplyValueTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcfrudrawninlinecurrent.is_set || is_set(cefcfrudrawninlinecurrent.yfilter)) leaf_name_data.push_back(cefcfrudrawninlinecurrent.get_name_leafdata());
    if (cefcfrudrawnsystemcurrent.is_set || is_set(cefcfrudrawnsystemcurrent.yfilter)) leaf_name_data.push_back(cefcfrudrawnsystemcurrent.get_name_leafdata());
    if (cefcfrutotalinlinecurrent.is_set || is_set(cefcfrutotalinlinecurrent.yfilter)) leaf_name_data.push_back(cefcfrutotalinlinecurrent.get_name_leafdata());
    if (cefcfrutotalsystemcurrent.is_set || is_set(cefcfrutotalsystemcurrent.yfilter)) leaf_name_data.push_back(cefcfrutotalsystemcurrent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcFRUDrawnInlineCurrent")
    {
        cefcfrudrawninlinecurrent = value;
        cefcfrudrawninlinecurrent.value_namespace = name_space;
        cefcfrudrawninlinecurrent.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cefcFRUTotalSystemCurrent")
    {
        cefcfrutotalsystemcurrent = value;
        cefcfrutotalsystemcurrent.value_namespace = name_space;
        cefcfrutotalsystemcurrent.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefcFRUDrawnInlineCurrent")
    {
        cefcfrudrawninlinecurrent.yfilter = yfilter;
    }
    if(value_path == "cefcFRUDrawnSystemCurrent")
    {
        cefcfrudrawnsystemcurrent.yfilter = yfilter;
    }
    if(value_path == "cefcFRUTotalInlineCurrent")
    {
        cefcfrutotalinlinecurrent.yfilter = yfilter;
    }
    if(value_path == "cefcFRUTotalSystemCurrent")
    {
        cefcfrutotalsystemcurrent.yfilter = yfilter;
    }
}

bool CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcFRUDrawnInlineCurrent" || name == "cefcFRUDrawnSystemCurrent" || name == "cefcFRUTotalInlineCurrent" || name == "cefcFRUTotalSystemCurrent")
        return true;
    return false;
}

CiscoEntityFruControlMib::Cefcmoduletable::Cefcmoduletable()
{
    yang_name = "cefcModuleTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB";
}

CiscoEntityFruControlMib::Cefcmoduletable::~Cefcmoduletable()
{
}

bool CiscoEntityFruControlMib::Cefcmoduletable::has_data() const
{
    for (std::size_t index=0; index<cefcmoduleentry.size(); index++)
    {
        if(cefcmoduleentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityFruControlMib::Cefcmoduletable::has_operation() const
{
    for (std::size_t index=0; index<cefcmoduleentry.size(); index++)
    {
        if(cefcmoduleentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEntityFruControlMib::Cefcmoduletable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcModuleTable";

    return path_buffer.str();

}

const EntityPath CiscoEntityFruControlMib::Cefcmoduletable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityFruControlMib::Cefcmoduletable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcModuleEntry")
    {
        for(auto const & c : cefcmoduleentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityFruControlMib::Cefcmoduletable::Cefcmoduleentry>();
        c->parent = this;
        cefcmoduleentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcmoduletable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcmoduleentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityFruControlMib::Cefcmoduletable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEntityFruControlMib::Cefcmoduletable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEntityFruControlMib::Cefcmoduletable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcModuleEntry")
        return true;
    return false;
}

CiscoEntityFruControlMib::Cefcmoduletable::Cefcmoduleentry::Cefcmoduleentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcmoduleadminstatus{YType::enumeration, "cefcModuleAdminStatus"},
    cefcmodulelastclearconfigtime{YType::uint32, "cefcModuleLastClearConfigTime"},
    cefcmoduleoperstatus{YType::enumeration, "cefcModuleOperStatus"},
    cefcmoduleresetreason{YType::enumeration, "cefcModuleResetReason"},
    cefcmoduleresetreasondescription{YType::str, "cefcModuleResetReasonDescription"},
    cefcmodulestatechangereasondescr{YType::str, "cefcModuleStateChangeReasonDescr"},
    cefcmodulestatuslastchangetime{YType::uint32, "cefcModuleStatusLastChangeTime"},
    cefcmoduleuptime{YType::uint32, "cefcModuleUpTime"}
{
    yang_name = "cefcModuleEntry"; yang_parent_name = "cefcModuleTable";
}

CiscoEntityFruControlMib::Cefcmoduletable::Cefcmoduleentry::~Cefcmoduleentry()
{
}

bool CiscoEntityFruControlMib::Cefcmoduletable::Cefcmoduleentry::has_data() const
{
    return entphysicalindex.is_set
	|| cefcmoduleadminstatus.is_set
	|| cefcmodulelastclearconfigtime.is_set
	|| cefcmoduleoperstatus.is_set
	|| cefcmoduleresetreason.is_set
	|| cefcmoduleresetreasondescription.is_set
	|| cefcmodulestatechangereasondescr.is_set
	|| cefcmodulestatuslastchangetime.is_set
	|| cefcmoduleuptime.is_set;
}

bool CiscoEntityFruControlMib::Cefcmoduletable::Cefcmoduleentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcmoduleadminstatus.yfilter)
	|| ydk::is_set(cefcmodulelastclearconfigtime.yfilter)
	|| ydk::is_set(cefcmoduleoperstatus.yfilter)
	|| ydk::is_set(cefcmoduleresetreason.yfilter)
	|| ydk::is_set(cefcmoduleresetreasondescription.yfilter)
	|| ydk::is_set(cefcmodulestatechangereasondescr.yfilter)
	|| ydk::is_set(cefcmodulestatuslastchangetime.yfilter)
	|| ydk::is_set(cefcmoduleuptime.yfilter);
}

std::string CiscoEntityFruControlMib::Cefcmoduletable::Cefcmoduleentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcModuleEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEntityFruControlMib::Cefcmoduletable::Cefcmoduleentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcModuleTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcmoduleadminstatus.is_set || is_set(cefcmoduleadminstatus.yfilter)) leaf_name_data.push_back(cefcmoduleadminstatus.get_name_leafdata());
    if (cefcmodulelastclearconfigtime.is_set || is_set(cefcmodulelastclearconfigtime.yfilter)) leaf_name_data.push_back(cefcmodulelastclearconfigtime.get_name_leafdata());
    if (cefcmoduleoperstatus.is_set || is_set(cefcmoduleoperstatus.yfilter)) leaf_name_data.push_back(cefcmoduleoperstatus.get_name_leafdata());
    if (cefcmoduleresetreason.is_set || is_set(cefcmoduleresetreason.yfilter)) leaf_name_data.push_back(cefcmoduleresetreason.get_name_leafdata());
    if (cefcmoduleresetreasondescription.is_set || is_set(cefcmoduleresetreasondescription.yfilter)) leaf_name_data.push_back(cefcmoduleresetreasondescription.get_name_leafdata());
    if (cefcmodulestatechangereasondescr.is_set || is_set(cefcmodulestatechangereasondescr.yfilter)) leaf_name_data.push_back(cefcmodulestatechangereasondescr.get_name_leafdata());
    if (cefcmodulestatuslastchangetime.is_set || is_set(cefcmodulestatuslastchangetime.yfilter)) leaf_name_data.push_back(cefcmodulestatuslastchangetime.get_name_leafdata());
    if (cefcmoduleuptime.is_set || is_set(cefcmoduleuptime.yfilter)) leaf_name_data.push_back(cefcmoduleuptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityFruControlMib::Cefcmoduletable::Cefcmoduleentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcmoduletable::Cefcmoduleentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityFruControlMib::Cefcmoduletable::Cefcmoduleentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cefcModuleLastClearConfigTime")
    {
        cefcmodulelastclearconfigtime = value;
        cefcmodulelastclearconfigtime.value_namespace = name_space;
        cefcmodulelastclearconfigtime.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cefcModuleStatusLastChangeTime")
    {
        cefcmodulestatuslastchangetime = value;
        cefcmodulestatuslastchangetime.value_namespace = name_space;
        cefcmodulestatuslastchangetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcModuleUpTime")
    {
        cefcmoduleuptime = value;
        cefcmoduleuptime.value_namespace = name_space;
        cefcmoduleuptime.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEntityFruControlMib::Cefcmoduletable::Cefcmoduleentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefcModuleAdminStatus")
    {
        cefcmoduleadminstatus.yfilter = yfilter;
    }
    if(value_path == "cefcModuleLastClearConfigTime")
    {
        cefcmodulelastclearconfigtime.yfilter = yfilter;
    }
    if(value_path == "cefcModuleOperStatus")
    {
        cefcmoduleoperstatus.yfilter = yfilter;
    }
    if(value_path == "cefcModuleResetReason")
    {
        cefcmoduleresetreason.yfilter = yfilter;
    }
    if(value_path == "cefcModuleResetReasonDescription")
    {
        cefcmoduleresetreasondescription.yfilter = yfilter;
    }
    if(value_path == "cefcModuleStateChangeReasonDescr")
    {
        cefcmodulestatechangereasondescr.yfilter = yfilter;
    }
    if(value_path == "cefcModuleStatusLastChangeTime")
    {
        cefcmodulestatuslastchangetime.yfilter = yfilter;
    }
    if(value_path == "cefcModuleUpTime")
    {
        cefcmoduleuptime.yfilter = yfilter;
    }
}

bool CiscoEntityFruControlMib::Cefcmoduletable::Cefcmoduleentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcModuleAdminStatus" || name == "cefcModuleLastClearConfigTime" || name == "cefcModuleOperStatus" || name == "cefcModuleResetReason" || name == "cefcModuleResetReasonDescription" || name == "cefcModuleStateChangeReasonDescr" || name == "cefcModuleStatusLastChangeTime" || name == "cefcModuleUpTime")
        return true;
    return false;
}

CiscoEntityFruControlMib::Cefcintellimoduletable::Cefcintellimoduletable()
{
    yang_name = "cefcIntelliModuleTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB";
}

CiscoEntityFruControlMib::Cefcintellimoduletable::~Cefcintellimoduletable()
{
}

bool CiscoEntityFruControlMib::Cefcintellimoduletable::has_data() const
{
    for (std::size_t index=0; index<cefcintellimoduleentry.size(); index++)
    {
        if(cefcintellimoduleentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityFruControlMib::Cefcintellimoduletable::has_operation() const
{
    for (std::size_t index=0; index<cefcintellimoduleentry.size(); index++)
    {
        if(cefcintellimoduleentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEntityFruControlMib::Cefcintellimoduletable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcIntelliModuleTable";

    return path_buffer.str();

}

const EntityPath CiscoEntityFruControlMib::Cefcintellimoduletable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityFruControlMib::Cefcintellimoduletable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcIntelliModuleEntry")
    {
        for(auto const & c : cefcintellimoduleentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityFruControlMib::Cefcintellimoduletable::Cefcintellimoduleentry>();
        c->parent = this;
        cefcintellimoduleentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcintellimoduletable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcintellimoduleentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityFruControlMib::Cefcintellimoduletable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEntityFruControlMib::Cefcintellimoduletable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEntityFruControlMib::Cefcintellimoduletable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcIntelliModuleEntry")
        return true;
    return false;
}

CiscoEntityFruControlMib::Cefcintellimoduletable::Cefcintellimoduleentry::Cefcintellimoduleentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcintellimoduleipaddr{YType::str, "cefcIntelliModuleIPAddr"},
    cefcintellimoduleipaddrtype{YType::enumeration, "cefcIntelliModuleIPAddrType"}
{
    yang_name = "cefcIntelliModuleEntry"; yang_parent_name = "cefcIntelliModuleTable";
}

CiscoEntityFruControlMib::Cefcintellimoduletable::Cefcintellimoduleentry::~Cefcintellimoduleentry()
{
}

bool CiscoEntityFruControlMib::Cefcintellimoduletable::Cefcintellimoduleentry::has_data() const
{
    return entphysicalindex.is_set
	|| cefcintellimoduleipaddr.is_set
	|| cefcintellimoduleipaddrtype.is_set;
}

bool CiscoEntityFruControlMib::Cefcintellimoduletable::Cefcintellimoduleentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcintellimoduleipaddr.yfilter)
	|| ydk::is_set(cefcintellimoduleipaddrtype.yfilter);
}

std::string CiscoEntityFruControlMib::Cefcintellimoduletable::Cefcintellimoduleentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcIntelliModuleEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEntityFruControlMib::Cefcintellimoduletable::Cefcintellimoduleentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcIntelliModuleTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcintellimoduleipaddr.is_set || is_set(cefcintellimoduleipaddr.yfilter)) leaf_name_data.push_back(cefcintellimoduleipaddr.get_name_leafdata());
    if (cefcintellimoduleipaddrtype.is_set || is_set(cefcintellimoduleipaddrtype.yfilter)) leaf_name_data.push_back(cefcintellimoduleipaddrtype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityFruControlMib::Cefcintellimoduletable::Cefcintellimoduleentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcintellimoduletable::Cefcintellimoduleentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityFruControlMib::Cefcintellimoduletable::Cefcintellimoduleentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcIntelliModuleIPAddr")
    {
        cefcintellimoduleipaddr = value;
        cefcintellimoduleipaddr.value_namespace = name_space;
        cefcintellimoduleipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcIntelliModuleIPAddrType")
    {
        cefcintellimoduleipaddrtype = value;
        cefcintellimoduleipaddrtype.value_namespace = name_space;
        cefcintellimoduleipaddrtype.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEntityFruControlMib::Cefcintellimoduletable::Cefcintellimoduleentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefcIntelliModuleIPAddr")
    {
        cefcintellimoduleipaddr.yfilter = yfilter;
    }
    if(value_path == "cefcIntelliModuleIPAddrType")
    {
        cefcintellimoduleipaddrtype.yfilter = yfilter;
    }
}

bool CiscoEntityFruControlMib::Cefcintellimoduletable::Cefcintellimoduleentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcIntelliModuleIPAddr" || name == "cefcIntelliModuleIPAddrType")
        return true;
    return false;
}

CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingtable()
{
    yang_name = "cefcModuleLocalSwitchingTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB";
}

CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::~Cefcmodulelocalswitchingtable()
{
}

bool CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::has_data() const
{
    for (std::size_t index=0; index<cefcmodulelocalswitchingentry.size(); index++)
    {
        if(cefcmodulelocalswitchingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::has_operation() const
{
    for (std::size_t index=0; index<cefcmodulelocalswitchingentry.size(); index++)
    {
        if(cefcmodulelocalswitchingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcModuleLocalSwitchingTable";

    return path_buffer.str();

}

const EntityPath CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcModuleLocalSwitchingEntry")
    {
        for(auto const & c : cefcmodulelocalswitchingentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry>();
        c->parent = this;
        cefcmodulelocalswitchingentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcmodulelocalswitchingentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcModuleLocalSwitchingEntry")
        return true;
    return false;
}

CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry::Cefcmodulelocalswitchingentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcmodulelocalswitchingmode{YType::enumeration, "cefcModuleLocalSwitchingMode"}
{
    yang_name = "cefcModuleLocalSwitchingEntry"; yang_parent_name = "cefcModuleLocalSwitchingTable";
}

CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry::~Cefcmodulelocalswitchingentry()
{
}

bool CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry::has_data() const
{
    return entphysicalindex.is_set
	|| cefcmodulelocalswitchingmode.is_set;
}

bool CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcmodulelocalswitchingmode.yfilter);
}

std::string CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcModuleLocalSwitchingEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcModuleLocalSwitchingTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcmodulelocalswitchingmode.is_set || is_set(cefcmodulelocalswitchingmode.yfilter)) leaf_name_data.push_back(cefcmodulelocalswitchingmode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcModuleLocalSwitchingMode")
        return true;
    return false;
}

CiscoEntityFruControlMib::Cefcfantraystatustable::Cefcfantraystatustable()
{
    yang_name = "cefcFanTrayStatusTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB";
}

CiscoEntityFruControlMib::Cefcfantraystatustable::~Cefcfantraystatustable()
{
}

bool CiscoEntityFruControlMib::Cefcfantraystatustable::has_data() const
{
    for (std::size_t index=0; index<cefcfantraystatusentry.size(); index++)
    {
        if(cefcfantraystatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityFruControlMib::Cefcfantraystatustable::has_operation() const
{
    for (std::size_t index=0; index<cefcfantraystatusentry.size(); index++)
    {
        if(cefcfantraystatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEntityFruControlMib::Cefcfantraystatustable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFanTrayStatusTable";

    return path_buffer.str();

}

const EntityPath CiscoEntityFruControlMib::Cefcfantraystatustable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityFruControlMib::Cefcfantraystatustable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcFanTrayStatusEntry")
    {
        for(auto const & c : cefcfantraystatusentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityFruControlMib::Cefcfantraystatustable::Cefcfantraystatusentry>();
        c->parent = this;
        cefcfantraystatusentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcfantraystatustable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcfantraystatusentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityFruControlMib::Cefcfantraystatustable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEntityFruControlMib::Cefcfantraystatustable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEntityFruControlMib::Cefcfantraystatustable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcFanTrayStatusEntry")
        return true;
    return false;
}

CiscoEntityFruControlMib::Cefcfantraystatustable::Cefcfantraystatusentry::Cefcfantraystatusentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcfantrayoperstatus{YType::enumeration, "cefcFanTrayOperStatus"}
{
    yang_name = "cefcFanTrayStatusEntry"; yang_parent_name = "cefcFanTrayStatusTable";
}

CiscoEntityFruControlMib::Cefcfantraystatustable::Cefcfantraystatusentry::~Cefcfantraystatusentry()
{
}

bool CiscoEntityFruControlMib::Cefcfantraystatustable::Cefcfantraystatusentry::has_data() const
{
    return entphysicalindex.is_set
	|| cefcfantrayoperstatus.is_set;
}

bool CiscoEntityFruControlMib::Cefcfantraystatustable::Cefcfantraystatusentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcfantrayoperstatus.yfilter);
}

std::string CiscoEntityFruControlMib::Cefcfantraystatustable::Cefcfantraystatusentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFanTrayStatusEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEntityFruControlMib::Cefcfantraystatustable::Cefcfantraystatusentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcFanTrayStatusTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcfantrayoperstatus.is_set || is_set(cefcfantrayoperstatus.yfilter)) leaf_name_data.push_back(cefcfantrayoperstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityFruControlMib::Cefcfantraystatustable::Cefcfantraystatusentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcfantraystatustable::Cefcfantraystatusentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityFruControlMib::Cefcfantraystatustable::Cefcfantraystatusentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CiscoEntityFruControlMib::Cefcfantraystatustable::Cefcfantraystatusentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CiscoEntityFruControlMib::Cefcfantraystatustable::Cefcfantraystatusentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcFanTrayOperStatus")
        return true;
    return false;
}

CiscoEntityFruControlMib::Cefcphysicaltable::Cefcphysicaltable()
{
    yang_name = "cefcPhysicalTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB";
}

CiscoEntityFruControlMib::Cefcphysicaltable::~Cefcphysicaltable()
{
}

bool CiscoEntityFruControlMib::Cefcphysicaltable::has_data() const
{
    for (std::size_t index=0; index<cefcphysicalentry.size(); index++)
    {
        if(cefcphysicalentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityFruControlMib::Cefcphysicaltable::has_operation() const
{
    for (std::size_t index=0; index<cefcphysicalentry.size(); index++)
    {
        if(cefcphysicalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEntityFruControlMib::Cefcphysicaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcPhysicalTable";

    return path_buffer.str();

}

const EntityPath CiscoEntityFruControlMib::Cefcphysicaltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityFruControlMib::Cefcphysicaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcPhysicalEntry")
    {
        for(auto const & c : cefcphysicalentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityFruControlMib::Cefcphysicaltable::Cefcphysicalentry>();
        c->parent = this;
        cefcphysicalentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcphysicaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcphysicalentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityFruControlMib::Cefcphysicaltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEntityFruControlMib::Cefcphysicaltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEntityFruControlMib::Cefcphysicaltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcPhysicalEntry")
        return true;
    return false;
}

CiscoEntityFruControlMib::Cefcphysicaltable::Cefcphysicalentry::Cefcphysicalentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcphysicalstatus{YType::enumeration, "cefcPhysicalStatus"}
{
    yang_name = "cefcPhysicalEntry"; yang_parent_name = "cefcPhysicalTable";
}

CiscoEntityFruControlMib::Cefcphysicaltable::Cefcphysicalentry::~Cefcphysicalentry()
{
}

bool CiscoEntityFruControlMib::Cefcphysicaltable::Cefcphysicalentry::has_data() const
{
    return entphysicalindex.is_set
	|| cefcphysicalstatus.is_set;
}

bool CiscoEntityFruControlMib::Cefcphysicaltable::Cefcphysicalentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcphysicalstatus.yfilter);
}

std::string CiscoEntityFruControlMib::Cefcphysicaltable::Cefcphysicalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcPhysicalEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEntityFruControlMib::Cefcphysicaltable::Cefcphysicalentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcPhysicalTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcphysicalstatus.is_set || is_set(cefcphysicalstatus.yfilter)) leaf_name_data.push_back(cefcphysicalstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityFruControlMib::Cefcphysicaltable::Cefcphysicalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcphysicaltable::Cefcphysicalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityFruControlMib::Cefcphysicaltable::Cefcphysicalentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CiscoEntityFruControlMib::Cefcphysicaltable::Cefcphysicalentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CiscoEntityFruControlMib::Cefcphysicaltable::Cefcphysicalentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcPhysicalStatus")
        return true;
    return false;
}

CiscoEntityFruControlMib::Cefcpowersupplyinputtable::Cefcpowersupplyinputtable()
{
    yang_name = "cefcPowerSupplyInputTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB";
}

CiscoEntityFruControlMib::Cefcpowersupplyinputtable::~Cefcpowersupplyinputtable()
{
}

bool CiscoEntityFruControlMib::Cefcpowersupplyinputtable::has_data() const
{
    for (std::size_t index=0; index<cefcpowersupplyinputentry.size(); index++)
    {
        if(cefcpowersupplyinputentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityFruControlMib::Cefcpowersupplyinputtable::has_operation() const
{
    for (std::size_t index=0; index<cefcpowersupplyinputentry.size(); index++)
    {
        if(cefcpowersupplyinputentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEntityFruControlMib::Cefcpowersupplyinputtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcPowerSupplyInputTable";

    return path_buffer.str();

}

const EntityPath CiscoEntityFruControlMib::Cefcpowersupplyinputtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityFruControlMib::Cefcpowersupplyinputtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcPowerSupplyInputEntry")
    {
        for(auto const & c : cefcpowersupplyinputentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityFruControlMib::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry>();
        c->parent = this;
        cefcpowersupplyinputentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcpowersupplyinputtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcpowersupplyinputentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityFruControlMib::Cefcpowersupplyinputtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEntityFruControlMib::Cefcpowersupplyinputtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEntityFruControlMib::Cefcpowersupplyinputtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcPowerSupplyInputEntry")
        return true;
    return false;
}

CiscoEntityFruControlMib::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::Cefcpowersupplyinputentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcpowersupplyinputindex{YType::uint32, "cefcPowerSupplyInputIndex"},
    cefcpowersupplyinputtype{YType::enumeration, "cefcPowerSupplyInputType"}
{
    yang_name = "cefcPowerSupplyInputEntry"; yang_parent_name = "cefcPowerSupplyInputTable";
}

CiscoEntityFruControlMib::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::~Cefcpowersupplyinputentry()
{
}

bool CiscoEntityFruControlMib::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::has_data() const
{
    return entphysicalindex.is_set
	|| cefcpowersupplyinputindex.is_set
	|| cefcpowersupplyinputtype.is_set;
}

bool CiscoEntityFruControlMib::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcpowersupplyinputindex.yfilter)
	|| ydk::is_set(cefcpowersupplyinputtype.yfilter);
}

std::string CiscoEntityFruControlMib::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcPowerSupplyInputEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[cefcPowerSupplyInputIndex='" <<cefcpowersupplyinputindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEntityFruControlMib::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcPowerSupplyInputTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcpowersupplyinputindex.is_set || is_set(cefcpowersupplyinputindex.yfilter)) leaf_name_data.push_back(cefcpowersupplyinputindex.get_name_leafdata());
    if (cefcpowersupplyinputtype.is_set || is_set(cefcpowersupplyinputtype.yfilter)) leaf_name_data.push_back(cefcpowersupplyinputtype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityFruControlMib::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityFruControlMib::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CiscoEntityFruControlMib::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CiscoEntityFruControlMib::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcPowerSupplyInputIndex" || name == "cefcPowerSupplyInputType")
        return true;
    return false;
}

CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputtable()
{
    yang_name = "cefcPowerSupplyOutputTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB";
}

CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::~Cefcpowersupplyoutputtable()
{
}

bool CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::has_data() const
{
    for (std::size_t index=0; index<cefcpowersupplyoutputentry.size(); index++)
    {
        if(cefcpowersupplyoutputentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::has_operation() const
{
    for (std::size_t index=0; index<cefcpowersupplyoutputentry.size(); index++)
    {
        if(cefcpowersupplyoutputentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcPowerSupplyOutputTable";

    return path_buffer.str();

}

const EntityPath CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcPowerSupplyOutputEntry")
    {
        for(auto const & c : cefcpowersupplyoutputentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry>();
        c->parent = this;
        cefcpowersupplyoutputentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcpowersupplyoutputentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcPowerSupplyOutputEntry")
        return true;
    return false;
}

CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry::Cefcpowersupplyoutputentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcpsoutputmodeindex{YType::uint32, "cefcPSOutputModeIndex"},
    cefcpsoutputmodecurrent{YType::int32, "cefcPSOutputModeCurrent"},
    cefcpsoutputmodeinoperation{YType::boolean, "cefcPSOutputModeInOperation"}
{
    yang_name = "cefcPowerSupplyOutputEntry"; yang_parent_name = "cefcPowerSupplyOutputTable";
}

CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry::~Cefcpowersupplyoutputentry()
{
}

bool CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry::has_data() const
{
    return entphysicalindex.is_set
	|| cefcpsoutputmodeindex.is_set
	|| cefcpsoutputmodecurrent.is_set
	|| cefcpsoutputmodeinoperation.is_set;
}

bool CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcpsoutputmodeindex.yfilter)
	|| ydk::is_set(cefcpsoutputmodecurrent.yfilter)
	|| ydk::is_set(cefcpsoutputmodeinoperation.yfilter);
}

std::string CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcPowerSupplyOutputEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[cefcPSOutputModeIndex='" <<cefcpsoutputmodeindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcPowerSupplyOutputTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcpsoutputmodeindex.is_set || is_set(cefcpsoutputmodeindex.yfilter)) leaf_name_data.push_back(cefcpsoutputmodeindex.get_name_leafdata());
    if (cefcpsoutputmodecurrent.is_set || is_set(cefcpsoutputmodecurrent.yfilter)) leaf_name_data.push_back(cefcpsoutputmodecurrent.get_name_leafdata());
    if (cefcpsoutputmodeinoperation.is_set || is_set(cefcpsoutputmodeinoperation.yfilter)) leaf_name_data.push_back(cefcpsoutputmodeinoperation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcPSOutputModeIndex" || name == "cefcPSOutputModeCurrent" || name == "cefcPSOutputModeInOperation")
        return true;
    return false;
}

CiscoEntityFruControlMib::Cefcchassiscoolingtable::Cefcchassiscoolingtable()
{
    yang_name = "cefcChassisCoolingTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB";
}

CiscoEntityFruControlMib::Cefcchassiscoolingtable::~Cefcchassiscoolingtable()
{
}

bool CiscoEntityFruControlMib::Cefcchassiscoolingtable::has_data() const
{
    for (std::size_t index=0; index<cefcchassiscoolingentry.size(); index++)
    {
        if(cefcchassiscoolingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityFruControlMib::Cefcchassiscoolingtable::has_operation() const
{
    for (std::size_t index=0; index<cefcchassiscoolingentry.size(); index++)
    {
        if(cefcchassiscoolingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEntityFruControlMib::Cefcchassiscoolingtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcChassisCoolingTable";

    return path_buffer.str();

}

const EntityPath CiscoEntityFruControlMib::Cefcchassiscoolingtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityFruControlMib::Cefcchassiscoolingtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcChassisCoolingEntry")
    {
        for(auto const & c : cefcchassiscoolingentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityFruControlMib::Cefcchassiscoolingtable::Cefcchassiscoolingentry>();
        c->parent = this;
        cefcchassiscoolingentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcchassiscoolingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcchassiscoolingentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityFruControlMib::Cefcchassiscoolingtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEntityFruControlMib::Cefcchassiscoolingtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEntityFruControlMib::Cefcchassiscoolingtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcChassisCoolingEntry")
        return true;
    return false;
}

CiscoEntityFruControlMib::Cefcchassiscoolingtable::Cefcchassiscoolingentry::Cefcchassiscoolingentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcchassisperslotcoolingcap{YType::uint32, "cefcChassisPerSlotCoolingCap"},
    cefcchassisperslotcoolingunit{YType::enumeration, "cefcChassisPerSlotCoolingUnit"}
{
    yang_name = "cefcChassisCoolingEntry"; yang_parent_name = "cefcChassisCoolingTable";
}

CiscoEntityFruControlMib::Cefcchassiscoolingtable::Cefcchassiscoolingentry::~Cefcchassiscoolingentry()
{
}

bool CiscoEntityFruControlMib::Cefcchassiscoolingtable::Cefcchassiscoolingentry::has_data() const
{
    return entphysicalindex.is_set
	|| cefcchassisperslotcoolingcap.is_set
	|| cefcchassisperslotcoolingunit.is_set;
}

bool CiscoEntityFruControlMib::Cefcchassiscoolingtable::Cefcchassiscoolingentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcchassisperslotcoolingcap.yfilter)
	|| ydk::is_set(cefcchassisperslotcoolingunit.yfilter);
}

std::string CiscoEntityFruControlMib::Cefcchassiscoolingtable::Cefcchassiscoolingentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcChassisCoolingEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEntityFruControlMib::Cefcchassiscoolingtable::Cefcchassiscoolingentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcChassisCoolingTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcchassisperslotcoolingcap.is_set || is_set(cefcchassisperslotcoolingcap.yfilter)) leaf_name_data.push_back(cefcchassisperslotcoolingcap.get_name_leafdata());
    if (cefcchassisperslotcoolingunit.is_set || is_set(cefcchassisperslotcoolingunit.yfilter)) leaf_name_data.push_back(cefcchassisperslotcoolingunit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityFruControlMib::Cefcchassiscoolingtable::Cefcchassiscoolingentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcchassiscoolingtable::Cefcchassiscoolingentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityFruControlMib::Cefcchassiscoolingtable::Cefcchassiscoolingentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CiscoEntityFruControlMib::Cefcchassiscoolingtable::Cefcchassiscoolingentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CiscoEntityFruControlMib::Cefcchassiscoolingtable::Cefcchassiscoolingentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcChassisPerSlotCoolingCap" || name == "cefcChassisPerSlotCoolingUnit")
        return true;
    return false;
}

CiscoEntityFruControlMib::Cefcfancoolingtable::Cefcfancoolingtable()
{
    yang_name = "cefcFanCoolingTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB";
}

CiscoEntityFruControlMib::Cefcfancoolingtable::~Cefcfancoolingtable()
{
}

bool CiscoEntityFruControlMib::Cefcfancoolingtable::has_data() const
{
    for (std::size_t index=0; index<cefcfancoolingentry.size(); index++)
    {
        if(cefcfancoolingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityFruControlMib::Cefcfancoolingtable::has_operation() const
{
    for (std::size_t index=0; index<cefcfancoolingentry.size(); index++)
    {
        if(cefcfancoolingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEntityFruControlMib::Cefcfancoolingtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFanCoolingTable";

    return path_buffer.str();

}

const EntityPath CiscoEntityFruControlMib::Cefcfancoolingtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityFruControlMib::Cefcfancoolingtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcFanCoolingEntry")
    {
        for(auto const & c : cefcfancoolingentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityFruControlMib::Cefcfancoolingtable::Cefcfancoolingentry>();
        c->parent = this;
        cefcfancoolingentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcfancoolingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcfancoolingentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityFruControlMib::Cefcfancoolingtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEntityFruControlMib::Cefcfancoolingtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEntityFruControlMib::Cefcfancoolingtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcFanCoolingEntry")
        return true;
    return false;
}

CiscoEntityFruControlMib::Cefcfancoolingtable::Cefcfancoolingentry::Cefcfancoolingentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcfancoolingcapacity{YType::uint32, "cefcFanCoolingCapacity"},
    cefcfancoolingcapacityunit{YType::enumeration, "cefcFanCoolingCapacityUnit"}
{
    yang_name = "cefcFanCoolingEntry"; yang_parent_name = "cefcFanCoolingTable";
}

CiscoEntityFruControlMib::Cefcfancoolingtable::Cefcfancoolingentry::~Cefcfancoolingentry()
{
}

bool CiscoEntityFruControlMib::Cefcfancoolingtable::Cefcfancoolingentry::has_data() const
{
    return entphysicalindex.is_set
	|| cefcfancoolingcapacity.is_set
	|| cefcfancoolingcapacityunit.is_set;
}

bool CiscoEntityFruControlMib::Cefcfancoolingtable::Cefcfancoolingentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcfancoolingcapacity.yfilter)
	|| ydk::is_set(cefcfancoolingcapacityunit.yfilter);
}

std::string CiscoEntityFruControlMib::Cefcfancoolingtable::Cefcfancoolingentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFanCoolingEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEntityFruControlMib::Cefcfancoolingtable::Cefcfancoolingentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcFanCoolingTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcfancoolingcapacity.is_set || is_set(cefcfancoolingcapacity.yfilter)) leaf_name_data.push_back(cefcfancoolingcapacity.get_name_leafdata());
    if (cefcfancoolingcapacityunit.is_set || is_set(cefcfancoolingcapacityunit.yfilter)) leaf_name_data.push_back(cefcfancoolingcapacityunit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityFruControlMib::Cefcfancoolingtable::Cefcfancoolingentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcfancoolingtable::Cefcfancoolingentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityFruControlMib::Cefcfancoolingtable::Cefcfancoolingentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CiscoEntityFruControlMib::Cefcfancoolingtable::Cefcfancoolingentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CiscoEntityFruControlMib::Cefcfancoolingtable::Cefcfancoolingentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcFanCoolingCapacity" || name == "cefcFanCoolingCapacityUnit")
        return true;
    return false;
}

CiscoEntityFruControlMib::Cefcmodulecoolingtable::Cefcmodulecoolingtable()
{
    yang_name = "cefcModuleCoolingTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB";
}

CiscoEntityFruControlMib::Cefcmodulecoolingtable::~Cefcmodulecoolingtable()
{
}

bool CiscoEntityFruControlMib::Cefcmodulecoolingtable::has_data() const
{
    for (std::size_t index=0; index<cefcmodulecoolingentry.size(); index++)
    {
        if(cefcmodulecoolingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityFruControlMib::Cefcmodulecoolingtable::has_operation() const
{
    for (std::size_t index=0; index<cefcmodulecoolingentry.size(); index++)
    {
        if(cefcmodulecoolingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEntityFruControlMib::Cefcmodulecoolingtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcModuleCoolingTable";

    return path_buffer.str();

}

const EntityPath CiscoEntityFruControlMib::Cefcmodulecoolingtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityFruControlMib::Cefcmodulecoolingtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcModuleCoolingEntry")
    {
        for(auto const & c : cefcmodulecoolingentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityFruControlMib::Cefcmodulecoolingtable::Cefcmodulecoolingentry>();
        c->parent = this;
        cefcmodulecoolingentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcmodulecoolingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcmodulecoolingentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityFruControlMib::Cefcmodulecoolingtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEntityFruControlMib::Cefcmodulecoolingtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEntityFruControlMib::Cefcmodulecoolingtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcModuleCoolingEntry")
        return true;
    return false;
}

CiscoEntityFruControlMib::Cefcmodulecoolingtable::Cefcmodulecoolingentry::Cefcmodulecoolingentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcmodulecooling{YType::uint32, "cefcModuleCooling"},
    cefcmodulecoolingunit{YType::enumeration, "cefcModuleCoolingUnit"}
{
    yang_name = "cefcModuleCoolingEntry"; yang_parent_name = "cefcModuleCoolingTable";
}

CiscoEntityFruControlMib::Cefcmodulecoolingtable::Cefcmodulecoolingentry::~Cefcmodulecoolingentry()
{
}

bool CiscoEntityFruControlMib::Cefcmodulecoolingtable::Cefcmodulecoolingentry::has_data() const
{
    return entphysicalindex.is_set
	|| cefcmodulecooling.is_set
	|| cefcmodulecoolingunit.is_set;
}

bool CiscoEntityFruControlMib::Cefcmodulecoolingtable::Cefcmodulecoolingentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcmodulecooling.yfilter)
	|| ydk::is_set(cefcmodulecoolingunit.yfilter);
}

std::string CiscoEntityFruControlMib::Cefcmodulecoolingtable::Cefcmodulecoolingentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcModuleCoolingEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEntityFruControlMib::Cefcmodulecoolingtable::Cefcmodulecoolingentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcModuleCoolingTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcmodulecooling.is_set || is_set(cefcmodulecooling.yfilter)) leaf_name_data.push_back(cefcmodulecooling.get_name_leafdata());
    if (cefcmodulecoolingunit.is_set || is_set(cefcmodulecoolingunit.yfilter)) leaf_name_data.push_back(cefcmodulecoolingunit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityFruControlMib::Cefcmodulecoolingtable::Cefcmodulecoolingentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcmodulecoolingtable::Cefcmodulecoolingentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityFruControlMib::Cefcmodulecoolingtable::Cefcmodulecoolingentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CiscoEntityFruControlMib::Cefcmodulecoolingtable::Cefcmodulecoolingentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CiscoEntityFruControlMib::Cefcmodulecoolingtable::Cefcmodulecoolingentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcModuleCooling" || name == "cefcModuleCoolingUnit")
        return true;
    return false;
}

CiscoEntityFruControlMib::Cefcfancoolingcaptable::Cefcfancoolingcaptable()
{
    yang_name = "cefcFanCoolingCapTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB";
}

CiscoEntityFruControlMib::Cefcfancoolingcaptable::~Cefcfancoolingcaptable()
{
}

bool CiscoEntityFruControlMib::Cefcfancoolingcaptable::has_data() const
{
    for (std::size_t index=0; index<cefcfancoolingcapentry.size(); index++)
    {
        if(cefcfancoolingcapentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityFruControlMib::Cefcfancoolingcaptable::has_operation() const
{
    for (std::size_t index=0; index<cefcfancoolingcapentry.size(); index++)
    {
        if(cefcfancoolingcapentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEntityFruControlMib::Cefcfancoolingcaptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFanCoolingCapTable";

    return path_buffer.str();

}

const EntityPath CiscoEntityFruControlMib::Cefcfancoolingcaptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityFruControlMib::Cefcfancoolingcaptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcFanCoolingCapEntry")
    {
        for(auto const & c : cefcfancoolingcapentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityFruControlMib::Cefcfancoolingcaptable::Cefcfancoolingcapentry>();
        c->parent = this;
        cefcfancoolingcapentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcfancoolingcaptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcfancoolingcapentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityFruControlMib::Cefcfancoolingcaptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEntityFruControlMib::Cefcfancoolingcaptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEntityFruControlMib::Cefcfancoolingcaptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcFanCoolingCapEntry")
        return true;
    return false;
}

CiscoEntityFruControlMib::Cefcfancoolingcaptable::Cefcfancoolingcapentry::Cefcfancoolingcapentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcfancoolingcapindex{YType::uint32, "cefcFanCoolingCapIndex"},
    cefcfancoolingcapcapacity{YType::uint32, "cefcFanCoolingCapCapacity"},
    cefcfancoolingcapcapacityunit{YType::enumeration, "cefcFanCoolingCapCapacityUnit"},
    cefcfancoolingcapcurrent{YType::int32, "cefcFanCoolingCapCurrent"},
    cefcfancoolingcapmodedescr{YType::str, "cefcFanCoolingCapModeDescr"}
{
    yang_name = "cefcFanCoolingCapEntry"; yang_parent_name = "cefcFanCoolingCapTable";
}

CiscoEntityFruControlMib::Cefcfancoolingcaptable::Cefcfancoolingcapentry::~Cefcfancoolingcapentry()
{
}

bool CiscoEntityFruControlMib::Cefcfancoolingcaptable::Cefcfancoolingcapentry::has_data() const
{
    return entphysicalindex.is_set
	|| cefcfancoolingcapindex.is_set
	|| cefcfancoolingcapcapacity.is_set
	|| cefcfancoolingcapcapacityunit.is_set
	|| cefcfancoolingcapcurrent.is_set
	|| cefcfancoolingcapmodedescr.is_set;
}

bool CiscoEntityFruControlMib::Cefcfancoolingcaptable::Cefcfancoolingcapentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcfancoolingcapindex.yfilter)
	|| ydk::is_set(cefcfancoolingcapcapacity.yfilter)
	|| ydk::is_set(cefcfancoolingcapcapacityunit.yfilter)
	|| ydk::is_set(cefcfancoolingcapcurrent.yfilter)
	|| ydk::is_set(cefcfancoolingcapmodedescr.yfilter);
}

std::string CiscoEntityFruControlMib::Cefcfancoolingcaptable::Cefcfancoolingcapentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcFanCoolingCapEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[cefcFanCoolingCapIndex='" <<cefcfancoolingcapindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEntityFruControlMib::Cefcfancoolingcaptable::Cefcfancoolingcapentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcFanCoolingCapTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcfancoolingcapindex.is_set || is_set(cefcfancoolingcapindex.yfilter)) leaf_name_data.push_back(cefcfancoolingcapindex.get_name_leafdata());
    if (cefcfancoolingcapcapacity.is_set || is_set(cefcfancoolingcapcapacity.yfilter)) leaf_name_data.push_back(cefcfancoolingcapcapacity.get_name_leafdata());
    if (cefcfancoolingcapcapacityunit.is_set || is_set(cefcfancoolingcapcapacityunit.yfilter)) leaf_name_data.push_back(cefcfancoolingcapcapacityunit.get_name_leafdata());
    if (cefcfancoolingcapcurrent.is_set || is_set(cefcfancoolingcapcurrent.yfilter)) leaf_name_data.push_back(cefcfancoolingcapcurrent.get_name_leafdata());
    if (cefcfancoolingcapmodedescr.is_set || is_set(cefcfancoolingcapmodedescr.yfilter)) leaf_name_data.push_back(cefcfancoolingcapmodedescr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityFruControlMib::Cefcfancoolingcaptable::Cefcfancoolingcapentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcfancoolingcaptable::Cefcfancoolingcapentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityFruControlMib::Cefcfancoolingcaptable::Cefcfancoolingcapentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cefcFanCoolingCapCapacity")
    {
        cefcfancoolingcapcapacity = value;
        cefcfancoolingcapcapacity.value_namespace = name_space;
        cefcfancoolingcapcapacity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcFanCoolingCapCapacityUnit")
    {
        cefcfancoolingcapcapacityunit = value;
        cefcfancoolingcapcapacityunit.value_namespace = name_space;
        cefcfancoolingcapcapacityunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcFanCoolingCapCurrent")
    {
        cefcfancoolingcapcurrent = value;
        cefcfancoolingcapcurrent.value_namespace = name_space;
        cefcfancoolingcapcurrent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefcFanCoolingCapModeDescr")
    {
        cefcfancoolingcapmodedescr = value;
        cefcfancoolingcapmodedescr.value_namespace = name_space;
        cefcfancoolingcapmodedescr.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEntityFruControlMib::Cefcfancoolingcaptable::Cefcfancoolingcapentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefcFanCoolingCapIndex")
    {
        cefcfancoolingcapindex.yfilter = yfilter;
    }
    if(value_path == "cefcFanCoolingCapCapacity")
    {
        cefcfancoolingcapcapacity.yfilter = yfilter;
    }
    if(value_path == "cefcFanCoolingCapCapacityUnit")
    {
        cefcfancoolingcapcapacityunit.yfilter = yfilter;
    }
    if(value_path == "cefcFanCoolingCapCurrent")
    {
        cefcfancoolingcapcurrent.yfilter = yfilter;
    }
    if(value_path == "cefcFanCoolingCapModeDescr")
    {
        cefcfancoolingcapmodedescr.yfilter = yfilter;
    }
}

bool CiscoEntityFruControlMib::Cefcfancoolingcaptable::Cefcfancoolingcapentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcFanCoolingCapIndex" || name == "cefcFanCoolingCapCapacity" || name == "cefcFanCoolingCapCapacityUnit" || name == "cefcFanCoolingCapCurrent" || name == "cefcFanCoolingCapModeDescr")
        return true;
    return false;
}

CiscoEntityFruControlMib::Cefcconnectorratingtable::Cefcconnectorratingtable()
{
    yang_name = "cefcConnectorRatingTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB";
}

CiscoEntityFruControlMib::Cefcconnectorratingtable::~Cefcconnectorratingtable()
{
}

bool CiscoEntityFruControlMib::Cefcconnectorratingtable::has_data() const
{
    for (std::size_t index=0; index<cefcconnectorratingentry.size(); index++)
    {
        if(cefcconnectorratingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityFruControlMib::Cefcconnectorratingtable::has_operation() const
{
    for (std::size_t index=0; index<cefcconnectorratingentry.size(); index++)
    {
        if(cefcconnectorratingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEntityFruControlMib::Cefcconnectorratingtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcConnectorRatingTable";

    return path_buffer.str();

}

const EntityPath CiscoEntityFruControlMib::Cefcconnectorratingtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityFruControlMib::Cefcconnectorratingtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcConnectorRatingEntry")
    {
        for(auto const & c : cefcconnectorratingentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityFruControlMib::Cefcconnectorratingtable::Cefcconnectorratingentry>();
        c->parent = this;
        cefcconnectorratingentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcconnectorratingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcconnectorratingentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityFruControlMib::Cefcconnectorratingtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEntityFruControlMib::Cefcconnectorratingtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEntityFruControlMib::Cefcconnectorratingtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcConnectorRatingEntry")
        return true;
    return false;
}

CiscoEntityFruControlMib::Cefcconnectorratingtable::Cefcconnectorratingentry::Cefcconnectorratingentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcconnectorrating{YType::int32, "cefcConnectorRating"}
{
    yang_name = "cefcConnectorRatingEntry"; yang_parent_name = "cefcConnectorRatingTable";
}

CiscoEntityFruControlMib::Cefcconnectorratingtable::Cefcconnectorratingentry::~Cefcconnectorratingentry()
{
}

bool CiscoEntityFruControlMib::Cefcconnectorratingtable::Cefcconnectorratingentry::has_data() const
{
    return entphysicalindex.is_set
	|| cefcconnectorrating.is_set;
}

bool CiscoEntityFruControlMib::Cefcconnectorratingtable::Cefcconnectorratingentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcconnectorrating.yfilter);
}

std::string CiscoEntityFruControlMib::Cefcconnectorratingtable::Cefcconnectorratingentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcConnectorRatingEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEntityFruControlMib::Cefcconnectorratingtable::Cefcconnectorratingentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcConnectorRatingTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcconnectorrating.is_set || is_set(cefcconnectorrating.yfilter)) leaf_name_data.push_back(cefcconnectorrating.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityFruControlMib::Cefcconnectorratingtable::Cefcconnectorratingentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcconnectorratingtable::Cefcconnectorratingentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityFruControlMib::Cefcconnectorratingtable::Cefcconnectorratingentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CiscoEntityFruControlMib::Cefcconnectorratingtable::Cefcconnectorratingentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CiscoEntityFruControlMib::Cefcconnectorratingtable::Cefcconnectorratingentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcConnectorRating")
        return true;
    return false;
}

CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptiontable()
{
    yang_name = "cefcModulePowerConsumptionTable"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB";
}

CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::~Cefcmodulepowerconsumptiontable()
{
}

bool CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::has_data() const
{
    for (std::size_t index=0; index<cefcmodulepowerconsumptionentry.size(); index++)
    {
        if(cefcmodulepowerconsumptionentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::has_operation() const
{
    for (std::size_t index=0; index<cefcmodulepowerconsumptionentry.size(); index++)
    {
        if(cefcmodulepowerconsumptionentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcModulePowerConsumptionTable";

    return path_buffer.str();

}

const EntityPath CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcModulePowerConsumptionEntry")
    {
        for(auto const & c : cefcmodulepowerconsumptionentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry>();
        c->parent = this;
        cefcmodulepowerconsumptionentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcmodulepowerconsumptionentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcModulePowerConsumptionEntry")
        return true;
    return false;
}

CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry::Cefcmodulepowerconsumptionentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefcmodulepowerconsumption{YType::int32, "cefcModulePowerConsumption"}
{
    yang_name = "cefcModulePowerConsumptionEntry"; yang_parent_name = "cefcModulePowerConsumptionTable";
}

CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry::~Cefcmodulepowerconsumptionentry()
{
}

bool CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry::has_data() const
{
    return entphysicalindex.is_set
	|| cefcmodulepowerconsumption.is_set;
}

bool CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcmodulepowerconsumption.yfilter);
}

std::string CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcModulePowerConsumptionEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-FRU-CONTROL-MIB:CISCO-ENTITY-FRU-CONTROL-MIB/cefcModulePowerConsumptionTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcmodulepowerconsumption.is_set || is_set(cefcmodulepowerconsumption.yfilter)) leaf_name_data.push_back(cefcmodulepowerconsumption.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcModulePowerConsumption")
        return true;
    return false;
}

const Enum::YLeaf Powerredundancytype::notsupported {1, "notsupported"};
const Enum::YLeaf Powerredundancytype::redundant {2, "redundant"};
const Enum::YLeaf Powerredundancytype::combined {3, "combined"};
const Enum::YLeaf Powerredundancytype::nonRedundant {4, "nonRedundant"};
const Enum::YLeaf Powerredundancytype::psRedundant {5, "psRedundant"};
const Enum::YLeaf Powerredundancytype::inPwrSrcRedundant {6, "inPwrSrcRedundant"};
const Enum::YLeaf Powerredundancytype::psRedundantSingleInput {7, "psRedundantSingleInput"};

const Enum::YLeaf Poweradmintype::on {1, "on"};
const Enum::YLeaf Poweradmintype::off {2, "off"};
const Enum::YLeaf Poweradmintype::inlineAuto {3, "inlineAuto"};
const Enum::YLeaf Poweradmintype::inlineOn {4, "inlineOn"};
const Enum::YLeaf Poweradmintype::powerCycle {5, "powerCycle"};

const Enum::YLeaf Moduleopertype::unknown {1, "unknown"};
const Enum::YLeaf Moduleopertype::ok {2, "ok"};
const Enum::YLeaf Moduleopertype::disabled {3, "disabled"};
const Enum::YLeaf Moduleopertype::okButDiagFailed {4, "okButDiagFailed"};
const Enum::YLeaf Moduleopertype::boot {5, "boot"};
const Enum::YLeaf Moduleopertype::selfTest {6, "selfTest"};
const Enum::YLeaf Moduleopertype::failed {7, "failed"};
const Enum::YLeaf Moduleopertype::missing {8, "missing"};
const Enum::YLeaf Moduleopertype::mismatchWithParent {9, "mismatchWithParent"};
const Enum::YLeaf Moduleopertype::mismatchConfig {10, "mismatchConfig"};
const Enum::YLeaf Moduleopertype::diagFailed {11, "diagFailed"};
const Enum::YLeaf Moduleopertype::dormant {12, "dormant"};
const Enum::YLeaf Moduleopertype::outOfServiceAdmin {13, "outOfServiceAdmin"};
const Enum::YLeaf Moduleopertype::outOfServiceEnvTemp {14, "outOfServiceEnvTemp"};
const Enum::YLeaf Moduleopertype::poweredDown {15, "poweredDown"};
const Enum::YLeaf Moduleopertype::poweredUp {16, "poweredUp"};
const Enum::YLeaf Moduleopertype::powerDenied {17, "powerDenied"};
const Enum::YLeaf Moduleopertype::powerCycled {18, "powerCycled"};
const Enum::YLeaf Moduleopertype::okButPowerOverWarning {19, "okButPowerOverWarning"};
const Enum::YLeaf Moduleopertype::okButPowerOverCritical {20, "okButPowerOverCritical"};
const Enum::YLeaf Moduleopertype::syncInProgress {21, "syncInProgress"};
const Enum::YLeaf Moduleopertype::upgrading {22, "upgrading"};
const Enum::YLeaf Moduleopertype::okButAuthFailed {23, "okButAuthFailed"};
const Enum::YLeaf Moduleopertype::mdr {24, "mdr"};
const Enum::YLeaf Moduleopertype::fwMismatchFound {25, "fwMismatchFound"};
const Enum::YLeaf Moduleopertype::fwDownloadSuccess {26, "fwDownloadSuccess"};
const Enum::YLeaf Moduleopertype::fwDownloadFailure {27, "fwDownloadFailure"};

const Enum::YLeaf Frucoolingunit::cfm {1, "cfm"};
const Enum::YLeaf Frucoolingunit::watts {2, "watts"};

const Enum::YLeaf Moduleresetreasontype::unknown {1, "unknown"};
const Enum::YLeaf Moduleresetreasontype::powerUp {2, "powerUp"};
const Enum::YLeaf Moduleresetreasontype::parityError {3, "parityError"};
const Enum::YLeaf Moduleresetreasontype::clearConfigReset {4, "clearConfigReset"};
const Enum::YLeaf Moduleresetreasontype::manualReset {5, "manualReset"};
const Enum::YLeaf Moduleresetreasontype::watchDogTimeoutReset {6, "watchDogTimeoutReset"};
const Enum::YLeaf Moduleresetreasontype::resourceOverflowReset {7, "resourceOverflowReset"};
const Enum::YLeaf Moduleresetreasontype::missingTaskReset {8, "missingTaskReset"};
const Enum::YLeaf Moduleresetreasontype::lowVoltageReset {9, "lowVoltageReset"};
const Enum::YLeaf Moduleresetreasontype::controllerReset {10, "controllerReset"};
const Enum::YLeaf Moduleresetreasontype::systemReset {11, "systemReset"};
const Enum::YLeaf Moduleresetreasontype::switchoverReset {12, "switchoverReset"};
const Enum::YLeaf Moduleresetreasontype::upgradeReset {13, "upgradeReset"};
const Enum::YLeaf Moduleresetreasontype::downgradeReset {14, "downgradeReset"};
const Enum::YLeaf Moduleresetreasontype::cacheErrorReset {15, "cacheErrorReset"};
const Enum::YLeaf Moduleresetreasontype::deviceDriverReset {16, "deviceDriverReset"};
const Enum::YLeaf Moduleresetreasontype::softwareExceptionReset {17, "softwareExceptionReset"};
const Enum::YLeaf Moduleresetreasontype::restoreConfigReset {18, "restoreConfigReset"};
const Enum::YLeaf Moduleresetreasontype::abortRevReset {19, "abortRevReset"};
const Enum::YLeaf Moduleresetreasontype::burnBootReset {20, "burnBootReset"};
const Enum::YLeaf Moduleresetreasontype::standbyCdHealthierReset {21, "standbyCdHealthierReset"};
const Enum::YLeaf Moduleresetreasontype::nonNativeConfigClearReset {22, "nonNativeConfigClearReset"};
const Enum::YLeaf Moduleresetreasontype::memoryProtectionErrorReset {23, "memoryProtectionErrorReset"};

const Enum::YLeaf Poweropertype::offEnvOther {1, "offEnvOther"};
const Enum::YLeaf Poweropertype::on {2, "on"};
const Enum::YLeaf Poweropertype::offAdmin {3, "offAdmin"};
const Enum::YLeaf Poweropertype::offDenied {4, "offDenied"};
const Enum::YLeaf Poweropertype::offEnvPower {5, "offEnvPower"};
const Enum::YLeaf Poweropertype::offEnvTemp {6, "offEnvTemp"};
const Enum::YLeaf Poweropertype::offEnvFan {7, "offEnvFan"};
const Enum::YLeaf Poweropertype::failed {8, "failed"};
const Enum::YLeaf Poweropertype::onButFanFail {9, "onButFanFail"};
const Enum::YLeaf Poweropertype::offCooling {10, "offCooling"};
const Enum::YLeaf Poweropertype::offConnectorRating {11, "offConnectorRating"};
const Enum::YLeaf Poweropertype::onButInlinePowerFail {12, "onButInlinePowerFail"};

const Enum::YLeaf Moduleadmintype::enabled {1, "enabled"};
const Enum::YLeaf Moduleadmintype::disabled {2, "disabled"};
const Enum::YLeaf Moduleadmintype::reset {3, "reset"};
const Enum::YLeaf Moduleadmintype::outOfServiceAdmin {4, "outOfServiceAdmin"};

const Enum::YLeaf CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::Cefcpowernonredundantreason::notApplicable {1, "notApplicable"};
const Enum::YLeaf CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::Cefcpowernonredundantreason::unknown {2, "unknown"};
const Enum::YLeaf CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::Cefcpowernonredundantreason::singleSupply {3, "singleSupply"};
const Enum::YLeaf CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::Cefcpowernonredundantreason::mismatchedSupplies {4, "mismatchedSupplies"};
const Enum::YLeaf CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::Cefcpowernonredundantreason::supplyError {5, "supplyError"};

const Enum::YLeaf CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry::Cefcmodulelocalswitchingmode::enabled {1, "enabled"};
const Enum::YLeaf CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry::Cefcmodulelocalswitchingmode::disabled {2, "disabled"};

const Enum::YLeaf CiscoEntityFruControlMib::Cefcfantraystatustable::Cefcfantraystatusentry::Cefcfantrayoperstatus::unknown {1, "unknown"};
const Enum::YLeaf CiscoEntityFruControlMib::Cefcfantraystatustable::Cefcfantraystatusentry::Cefcfantrayoperstatus::up {2, "up"};
const Enum::YLeaf CiscoEntityFruControlMib::Cefcfantraystatustable::Cefcfantraystatusentry::Cefcfantrayoperstatus::down {3, "down"};
const Enum::YLeaf CiscoEntityFruControlMib::Cefcfantraystatustable::Cefcfantraystatusentry::Cefcfantrayoperstatus::warning {4, "warning"};

const Enum::YLeaf CiscoEntityFruControlMib::Cefcphysicaltable::Cefcphysicalentry::Cefcphysicalstatus::other {1, "other"};
const Enum::YLeaf CiscoEntityFruControlMib::Cefcphysicaltable::Cefcphysicalentry::Cefcphysicalstatus::supported {2, "supported"};
const Enum::YLeaf CiscoEntityFruControlMib::Cefcphysicaltable::Cefcphysicalentry::Cefcphysicalstatus::unsupported {3, "unsupported"};
const Enum::YLeaf CiscoEntityFruControlMib::Cefcphysicaltable::Cefcphysicalentry::Cefcphysicalstatus::incompatible {4, "incompatible"};

const Enum::YLeaf CiscoEntityFruControlMib::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::Cefcpowersupplyinputtype::unknown {1, "unknown"};
const Enum::YLeaf CiscoEntityFruControlMib::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::Cefcpowersupplyinputtype::acLow {2, "acLow"};
const Enum::YLeaf CiscoEntityFruControlMib::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::Cefcpowersupplyinputtype::acHigh {3, "acHigh"};
const Enum::YLeaf CiscoEntityFruControlMib::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::Cefcpowersupplyinputtype::dcLow {4, "dcLow"};
const Enum::YLeaf CiscoEntityFruControlMib::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::Cefcpowersupplyinputtype::dcHigh {5, "dcHigh"};


}
}

