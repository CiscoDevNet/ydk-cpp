
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_ENTITY_FRU_CONTROL_MIB.hpp"

namespace ydk {
namespace CISCO_ENTITY_FRU_CONTROL_MIB {

CiscoEntityFruControlMib::CiscoEntityFruControlMib()
    :
    cefcchassiscoolingtable_(std::make_shared<CiscoEntityFruControlMib::Cefcchassiscoolingtable>())
	,cefcconnectorratingtable_(std::make_shared<CiscoEntityFruControlMib::Cefcconnectorratingtable>())
	,cefcfancoolingcaptable_(std::make_shared<CiscoEntityFruControlMib::Cefcfancoolingcaptable>())
	,cefcfancoolingtable_(std::make_shared<CiscoEntityFruControlMib::Cefcfancoolingtable>())
	,cefcfantraystatustable_(std::make_shared<CiscoEntityFruControlMib::Cefcfantraystatustable>())
	,cefcfrupower_(std::make_shared<CiscoEntityFruControlMib::Cefcfrupower>())
	,cefcfrupowerstatustable_(std::make_shared<CiscoEntityFruControlMib::Cefcfrupowerstatustable>())
	,cefcfrupowersupplygrouptable_(std::make_shared<CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable>())
	,cefcfrupowersupplyvaluetable_(std::make_shared<CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable>())
	,cefcintellimoduletable_(std::make_shared<CiscoEntityFruControlMib::Cefcintellimoduletable>())
	,cefcmibnotificationenables_(std::make_shared<CiscoEntityFruControlMib::Cefcmibnotificationenables>())
	,cefcmodulecoolingtable_(std::make_shared<CiscoEntityFruControlMib::Cefcmodulecoolingtable>())
	,cefcmodulelocalswitchingtable_(std::make_shared<CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable>())
	,cefcmodulepowerconsumptiontable_(std::make_shared<CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable>())
	,cefcmoduletable_(std::make_shared<CiscoEntityFruControlMib::Cefcmoduletable>())
	,cefcphysicaltable_(std::make_shared<CiscoEntityFruControlMib::Cefcphysicaltable>())
	,cefcpowersupplyinputtable_(std::make_shared<CiscoEntityFruControlMib::Cefcpowersupplyinputtable>())
	,cefcpowersupplyoutputtable_(std::make_shared<CiscoEntityFruControlMib::Cefcpowersupplyoutputtable>())
{
    cefcchassiscoolingtable_->parent = this;

    cefcconnectorratingtable_->parent = this;

    cefcfancoolingcaptable_->parent = this;

    cefcfancoolingtable_->parent = this;

    cefcfantraystatustable_->parent = this;

    cefcfrupower_->parent = this;

    cefcfrupowerstatustable_->parent = this;

    cefcfrupowersupplygrouptable_->parent = this;

    cefcfrupowersupplyvaluetable_->parent = this;

    cefcintellimoduletable_->parent = this;

    cefcmibnotificationenables_->parent = this;

    cefcmodulecoolingtable_->parent = this;

    cefcmodulelocalswitchingtable_->parent = this;

    cefcmodulepowerconsumptiontable_->parent = this;

    cefcmoduletable_->parent = this;

    cefcphysicaltable_->parent = this;

    cefcpowersupplyinputtable_->parent = this;

    cefcpowersupplyoutputtable_->parent = this;

    yang_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB";
}

CiscoEntityFruControlMib::~CiscoEntityFruControlMib()
{
}

bool CiscoEntityFruControlMib::has_data() const
{
    return (cefcchassiscoolingtable_ !=  nullptr && cefcchassiscoolingtable_->has_data())
	|| (cefcconnectorratingtable_ !=  nullptr && cefcconnectorratingtable_->has_data())
	|| (cefcfancoolingcaptable_ !=  nullptr && cefcfancoolingcaptable_->has_data())
	|| (cefcfancoolingtable_ !=  nullptr && cefcfancoolingtable_->has_data())
	|| (cefcfantraystatustable_ !=  nullptr && cefcfantraystatustable_->has_data())
	|| (cefcfrupower_ !=  nullptr && cefcfrupower_->has_data())
	|| (cefcfrupowerstatustable_ !=  nullptr && cefcfrupowerstatustable_->has_data())
	|| (cefcfrupowersupplygrouptable_ !=  nullptr && cefcfrupowersupplygrouptable_->has_data())
	|| (cefcfrupowersupplyvaluetable_ !=  nullptr && cefcfrupowersupplyvaluetable_->has_data())
	|| (cefcintellimoduletable_ !=  nullptr && cefcintellimoduletable_->has_data())
	|| (cefcmibnotificationenables_ !=  nullptr && cefcmibnotificationenables_->has_data())
	|| (cefcmodulecoolingtable_ !=  nullptr && cefcmodulecoolingtable_->has_data())
	|| (cefcmodulelocalswitchingtable_ !=  nullptr && cefcmodulelocalswitchingtable_->has_data())
	|| (cefcmodulepowerconsumptiontable_ !=  nullptr && cefcmodulepowerconsumptiontable_->has_data())
	|| (cefcmoduletable_ !=  nullptr && cefcmoduletable_->has_data())
	|| (cefcphysicaltable_ !=  nullptr && cefcphysicaltable_->has_data())
	|| (cefcpowersupplyinputtable_ !=  nullptr && cefcpowersupplyinputtable_->has_data())
	|| (cefcpowersupplyoutputtable_ !=  nullptr && cefcpowersupplyoutputtable_->has_data());
}

bool CiscoEntityFruControlMib::has_operation() const
{
    return is_set(operation)
	|| (cefcchassiscoolingtable_ !=  nullptr && cefcchassiscoolingtable_->has_operation())
	|| (cefcconnectorratingtable_ !=  nullptr && cefcconnectorratingtable_->has_operation())
	|| (cefcfancoolingcaptable_ !=  nullptr && cefcfancoolingcaptable_->has_operation())
	|| (cefcfancoolingtable_ !=  nullptr && cefcfancoolingtable_->has_operation())
	|| (cefcfantraystatustable_ !=  nullptr && cefcfantraystatustable_->has_operation())
	|| (cefcfrupower_ !=  nullptr && cefcfrupower_->has_operation())
	|| (cefcfrupowerstatustable_ !=  nullptr && cefcfrupowerstatustable_->has_operation())
	|| (cefcfrupowersupplygrouptable_ !=  nullptr && cefcfrupowersupplygrouptable_->has_operation())
	|| (cefcfrupowersupplyvaluetable_ !=  nullptr && cefcfrupowersupplyvaluetable_->has_operation())
	|| (cefcintellimoduletable_ !=  nullptr && cefcintellimoduletable_->has_operation())
	|| (cefcmibnotificationenables_ !=  nullptr && cefcmibnotificationenables_->has_operation())
	|| (cefcmodulecoolingtable_ !=  nullptr && cefcmodulecoolingtable_->has_operation())
	|| (cefcmodulelocalswitchingtable_ !=  nullptr && cefcmodulelocalswitchingtable_->has_operation())
	|| (cefcmodulepowerconsumptiontable_ !=  nullptr && cefcmodulepowerconsumptiontable_->has_operation())
	|| (cefcmoduletable_ !=  nullptr && cefcmoduletable_->has_operation())
	|| (cefcphysicaltable_ !=  nullptr && cefcphysicaltable_->has_operation())
	|| (cefcpowersupplyinputtable_ !=  nullptr && cefcpowersupplyinputtable_->has_operation())
	|| (cefcpowersupplyoutputtable_ !=  nullptr && cefcpowersupplyoutputtable_->has_operation());
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
        if(cefcchassiscoolingtable_ == nullptr)
        {
            cefcchassiscoolingtable_ = std::make_shared<CiscoEntityFruControlMib::Cefcchassiscoolingtable>();
        }
        return cefcchassiscoolingtable_;
    }

    if(child_yang_name == "cefcConnectorRatingTable")
    {
        if(cefcconnectorratingtable_ == nullptr)
        {
            cefcconnectorratingtable_ = std::make_shared<CiscoEntityFruControlMib::Cefcconnectorratingtable>();
        }
        return cefcconnectorratingtable_;
    }

    if(child_yang_name == "cefcFanCoolingCapTable")
    {
        if(cefcfancoolingcaptable_ == nullptr)
        {
            cefcfancoolingcaptable_ = std::make_shared<CiscoEntityFruControlMib::Cefcfancoolingcaptable>();
        }
        return cefcfancoolingcaptable_;
    }

    if(child_yang_name == "cefcFanCoolingTable")
    {
        if(cefcfancoolingtable_ == nullptr)
        {
            cefcfancoolingtable_ = std::make_shared<CiscoEntityFruControlMib::Cefcfancoolingtable>();
        }
        return cefcfancoolingtable_;
    }

    if(child_yang_name == "cefcFanTrayStatusTable")
    {
        if(cefcfantraystatustable_ == nullptr)
        {
            cefcfantraystatustable_ = std::make_shared<CiscoEntityFruControlMib::Cefcfantraystatustable>();
        }
        return cefcfantraystatustable_;
    }

    if(child_yang_name == "cefcFRUPower")
    {
        if(cefcfrupower_ == nullptr)
        {
            cefcfrupower_ = std::make_shared<CiscoEntityFruControlMib::Cefcfrupower>();
        }
        return cefcfrupower_;
    }

    if(child_yang_name == "cefcFRUPowerStatusTable")
    {
        if(cefcfrupowerstatustable_ == nullptr)
        {
            cefcfrupowerstatustable_ = std::make_shared<CiscoEntityFruControlMib::Cefcfrupowerstatustable>();
        }
        return cefcfrupowerstatustable_;
    }

    if(child_yang_name == "cefcFRUPowerSupplyGroupTable")
    {
        if(cefcfrupowersupplygrouptable_ == nullptr)
        {
            cefcfrupowersupplygrouptable_ = std::make_shared<CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable>();
        }
        return cefcfrupowersupplygrouptable_;
    }

    if(child_yang_name == "cefcFRUPowerSupplyValueTable")
    {
        if(cefcfrupowersupplyvaluetable_ == nullptr)
        {
            cefcfrupowersupplyvaluetable_ = std::make_shared<CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable>();
        }
        return cefcfrupowersupplyvaluetable_;
    }

    if(child_yang_name == "cefcIntelliModuleTable")
    {
        if(cefcintellimoduletable_ == nullptr)
        {
            cefcintellimoduletable_ = std::make_shared<CiscoEntityFruControlMib::Cefcintellimoduletable>();
        }
        return cefcintellimoduletable_;
    }

    if(child_yang_name == "cefcMIBNotificationEnables")
    {
        if(cefcmibnotificationenables_ == nullptr)
        {
            cefcmibnotificationenables_ = std::make_shared<CiscoEntityFruControlMib::Cefcmibnotificationenables>();
        }
        return cefcmibnotificationenables_;
    }

    if(child_yang_name == "cefcModuleCoolingTable")
    {
        if(cefcmodulecoolingtable_ == nullptr)
        {
            cefcmodulecoolingtable_ = std::make_shared<CiscoEntityFruControlMib::Cefcmodulecoolingtable>();
        }
        return cefcmodulecoolingtable_;
    }

    if(child_yang_name == "cefcModuleLocalSwitchingTable")
    {
        if(cefcmodulelocalswitchingtable_ == nullptr)
        {
            cefcmodulelocalswitchingtable_ = std::make_shared<CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable>();
        }
        return cefcmodulelocalswitchingtable_;
    }

    if(child_yang_name == "cefcModulePowerConsumptionTable")
    {
        if(cefcmodulepowerconsumptiontable_ == nullptr)
        {
            cefcmodulepowerconsumptiontable_ = std::make_shared<CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable>();
        }
        return cefcmodulepowerconsumptiontable_;
    }

    if(child_yang_name == "cefcModuleTable")
    {
        if(cefcmoduletable_ == nullptr)
        {
            cefcmoduletable_ = std::make_shared<CiscoEntityFruControlMib::Cefcmoduletable>();
        }
        return cefcmoduletable_;
    }

    if(child_yang_name == "cefcPhysicalTable")
    {
        if(cefcphysicaltable_ == nullptr)
        {
            cefcphysicaltable_ = std::make_shared<CiscoEntityFruControlMib::Cefcphysicaltable>();
        }
        return cefcphysicaltable_;
    }

    if(child_yang_name == "cefcPowerSupplyInputTable")
    {
        if(cefcpowersupplyinputtable_ == nullptr)
        {
            cefcpowersupplyinputtable_ = std::make_shared<CiscoEntityFruControlMib::Cefcpowersupplyinputtable>();
        }
        return cefcpowersupplyinputtable_;
    }

    if(child_yang_name == "cefcPowerSupplyOutputTable")
    {
        if(cefcpowersupplyoutputtable_ == nullptr)
        {
            cefcpowersupplyoutputtable_ = std::make_shared<CiscoEntityFruControlMib::Cefcpowersupplyoutputtable>();
        }
        return cefcpowersupplyoutputtable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cefcchassiscoolingtable_ != nullptr)
    {
        children["cefcChassisCoolingTable"] = cefcchassiscoolingtable_;
    }

    if(cefcconnectorratingtable_ != nullptr)
    {
        children["cefcConnectorRatingTable"] = cefcconnectorratingtable_;
    }

    if(cefcfancoolingcaptable_ != nullptr)
    {
        children["cefcFanCoolingCapTable"] = cefcfancoolingcaptable_;
    }

    if(cefcfancoolingtable_ != nullptr)
    {
        children["cefcFanCoolingTable"] = cefcfancoolingtable_;
    }

    if(cefcfantraystatustable_ != nullptr)
    {
        children["cefcFanTrayStatusTable"] = cefcfantraystatustable_;
    }

    if(cefcfrupower_ != nullptr)
    {
        children["cefcFRUPower"] = cefcfrupower_;
    }

    if(cefcfrupowerstatustable_ != nullptr)
    {
        children["cefcFRUPowerStatusTable"] = cefcfrupowerstatustable_;
    }

    if(cefcfrupowersupplygrouptable_ != nullptr)
    {
        children["cefcFRUPowerSupplyGroupTable"] = cefcfrupowersupplygrouptable_;
    }

    if(cefcfrupowersupplyvaluetable_ != nullptr)
    {
        children["cefcFRUPowerSupplyValueTable"] = cefcfrupowersupplyvaluetable_;
    }

    if(cefcintellimoduletable_ != nullptr)
    {
        children["cefcIntelliModuleTable"] = cefcintellimoduletable_;
    }

    if(cefcmibnotificationenables_ != nullptr)
    {
        children["cefcMIBNotificationEnables"] = cefcmibnotificationenables_;
    }

    if(cefcmodulecoolingtable_ != nullptr)
    {
        children["cefcModuleCoolingTable"] = cefcmodulecoolingtable_;
    }

    if(cefcmodulelocalswitchingtable_ != nullptr)
    {
        children["cefcModuleLocalSwitchingTable"] = cefcmodulelocalswitchingtable_;
    }

    if(cefcmodulepowerconsumptiontable_ != nullptr)
    {
        children["cefcModulePowerConsumptionTable"] = cefcmodulepowerconsumptiontable_;
    }

    if(cefcmoduletable_ != nullptr)
    {
        children["cefcModuleTable"] = cefcmoduletable_;
    }

    if(cefcphysicaltable_ != nullptr)
    {
        children["cefcPhysicalTable"] = cefcphysicaltable_;
    }

    if(cefcpowersupplyinputtable_ != nullptr)
    {
        children["cefcPowerSupplyInputTable"] = cefcpowersupplyinputtable_;
    }

    if(cefcpowersupplyoutputtable_ != nullptr)
    {
        children["cefcPowerSupplyOutputTable"] = cefcpowersupplyoutputtable_;
    }

    return children;
}

void CiscoEntityFruControlMib::set_value(const std::string & value_path, std::string value)
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
    return is_set(operation)
	|| is_set(cefcmaxdefaulthighinlinepower.operation)
	|| is_set(cefcmaxdefaultinlinepower.operation);
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

    if (cefcmaxdefaulthighinlinepower.is_set || is_set(cefcmaxdefaulthighinlinepower.operation)) leaf_name_data.push_back(cefcmaxdefaulthighinlinepower.get_name_leafdata());
    if (cefcmaxdefaultinlinepower.is_set || is_set(cefcmaxdefaultinlinepower.operation)) leaf_name_data.push_back(cefcmaxdefaultinlinepower.get_name_leafdata());


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

void CiscoEntityFruControlMib::Cefcfrupower::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cefcMaxDefaultHighInLinePower")
    {
        cefcmaxdefaulthighinlinepower = value;
    }
    if(value_path == "cefcMaxDefaultInLinePower")
    {
        cefcmaxdefaultinlinepower = value;
    }
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
    return is_set(operation)
	|| is_set(cefcenablepsoutputchangenotif.operation)
	|| is_set(cefcmibenablestatusnotification.operation);
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

    if (cefcenablepsoutputchangenotif.is_set || is_set(cefcenablepsoutputchangenotif.operation)) leaf_name_data.push_back(cefcenablepsoutputchangenotif.get_name_leafdata());
    if (cefcmibenablestatusnotification.is_set || is_set(cefcmibenablestatusnotification.operation)) leaf_name_data.push_back(cefcmibenablestatusnotification.get_name_leafdata());


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

void CiscoEntityFruControlMib::Cefcmibnotificationenables::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cefcEnablePSOutputChangeNotif")
    {
        cefcenablepsoutputchangenotif = value;
    }
    if(value_path == "cefcMIBEnableStatusNotification")
    {
        cefcmibenablestatusnotification = value;
    }
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
    for (std::size_t index=0; index<cefcfrupowersupplygroupentry_.size(); index++)
    {
        if(cefcfrupowersupplygroupentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::has_operation() const
{
    for (std::size_t index=0; index<cefcfrupowersupplygroupentry_.size(); index++)
    {
        if(cefcfrupowersupplygroupentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cefcfrupowersupplygroupentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry>();
        c->parent = this;
        cefcfrupowersupplygroupentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcfrupowersupplygroupentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(cefcpowernonredundantreason.operation)
	|| is_set(cefcpowerredundancymode.operation)
	|| is_set(cefcpowerredundancyopermode.operation)
	|| is_set(cefcpowerunits.operation)
	|| is_set(cefctotalavailablecurrent.operation)
	|| is_set(cefctotaldrawncurrent.operation)
	|| is_set(cefctotaldrawninlinecurrent.operation);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcpowernonredundantreason.is_set || is_set(cefcpowernonredundantreason.operation)) leaf_name_data.push_back(cefcpowernonredundantreason.get_name_leafdata());
    if (cefcpowerredundancymode.is_set || is_set(cefcpowerredundancymode.operation)) leaf_name_data.push_back(cefcpowerredundancymode.get_name_leafdata());
    if (cefcpowerredundancyopermode.is_set || is_set(cefcpowerredundancyopermode.operation)) leaf_name_data.push_back(cefcpowerredundancyopermode.get_name_leafdata());
    if (cefcpowerunits.is_set || is_set(cefcpowerunits.operation)) leaf_name_data.push_back(cefcpowerunits.get_name_leafdata());
    if (cefctotalavailablecurrent.is_set || is_set(cefctotalavailablecurrent.operation)) leaf_name_data.push_back(cefctotalavailablecurrent.get_name_leafdata());
    if (cefctotaldrawncurrent.is_set || is_set(cefctotaldrawncurrent.operation)) leaf_name_data.push_back(cefctotaldrawncurrent.get_name_leafdata());
    if (cefctotaldrawninlinecurrent.is_set || is_set(cefctotaldrawninlinecurrent.operation)) leaf_name_data.push_back(cefctotaldrawninlinecurrent.get_name_leafdata());


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

void CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "cefcPowerNonRedundantReason")
    {
        cefcpowernonredundantreason = value;
    }
    if(value_path == "cefcPowerRedundancyMode")
    {
        cefcpowerredundancymode = value;
    }
    if(value_path == "cefcPowerRedundancyOperMode")
    {
        cefcpowerredundancyopermode = value;
    }
    if(value_path == "cefcPowerUnits")
    {
        cefcpowerunits = value;
    }
    if(value_path == "cefcTotalAvailableCurrent")
    {
        cefctotalavailablecurrent = value;
    }
    if(value_path == "cefcTotalDrawnCurrent")
    {
        cefctotaldrawncurrent = value;
    }
    if(value_path == "cefcTotalDrawnInlineCurrent")
    {
        cefctotaldrawninlinecurrent = value;
    }
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
    for (std::size_t index=0; index<cefcfrupowerstatusentry_.size(); index++)
    {
        if(cefcfrupowerstatusentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityFruControlMib::Cefcfrupowerstatustable::has_operation() const
{
    for (std::size_t index=0; index<cefcfrupowerstatusentry_.size(); index++)
    {
        if(cefcfrupowerstatusentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cefcfrupowerstatusentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityFruControlMib::Cefcfrupowerstatustable::Cefcfrupowerstatusentry>();
        c->parent = this;
        cefcfrupowerstatusentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcfrupowerstatustable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcfrupowerstatusentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityFruControlMib::Cefcfrupowerstatustable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(cefcfrucurrent.operation)
	|| is_set(cefcfrupoweradminstatus.operation)
	|| is_set(cefcfrupowercapability.operation)
	|| is_set(cefcfrupoweroperstatus.operation)
	|| is_set(cefcfrurealtimecurrent.operation);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcfrucurrent.is_set || is_set(cefcfrucurrent.operation)) leaf_name_data.push_back(cefcfrucurrent.get_name_leafdata());
    if (cefcfrupoweradminstatus.is_set || is_set(cefcfrupoweradminstatus.operation)) leaf_name_data.push_back(cefcfrupoweradminstatus.get_name_leafdata());
    if (cefcfrupowercapability.is_set || is_set(cefcfrupowercapability.operation)) leaf_name_data.push_back(cefcfrupowercapability.get_name_leafdata());
    if (cefcfrupoweroperstatus.is_set || is_set(cefcfrupoweroperstatus.operation)) leaf_name_data.push_back(cefcfrupoweroperstatus.get_name_leafdata());
    if (cefcfrurealtimecurrent.is_set || is_set(cefcfrurealtimecurrent.operation)) leaf_name_data.push_back(cefcfrurealtimecurrent.get_name_leafdata());


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

void CiscoEntityFruControlMib::Cefcfrupowerstatustable::Cefcfrupowerstatusentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "cefcFRUCurrent")
    {
        cefcfrucurrent = value;
    }
    if(value_path == "cefcFRUPowerAdminStatus")
    {
        cefcfrupoweradminstatus = value;
    }
    if(value_path == "cefcFRUPowerCapability")
    {
        cefcfrupowercapability[value] = true;
    }
    if(value_path == "cefcFRUPowerOperStatus")
    {
        cefcfrupoweroperstatus = value;
    }
    if(value_path == "cefcFRURealTimeCurrent")
    {
        cefcfrurealtimecurrent = value;
    }
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
    for (std::size_t index=0; index<cefcfrupowersupplyvalueentry_.size(); index++)
    {
        if(cefcfrupowersupplyvalueentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::has_operation() const
{
    for (std::size_t index=0; index<cefcfrupowersupplyvalueentry_.size(); index++)
    {
        if(cefcfrupowersupplyvalueentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cefcfrupowersupplyvalueentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry>();
        c->parent = this;
        cefcfrupowersupplyvalueentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcfrupowersupplyvalueentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(cefcfrudrawninlinecurrent.operation)
	|| is_set(cefcfrudrawnsystemcurrent.operation)
	|| is_set(cefcfrutotalinlinecurrent.operation)
	|| is_set(cefcfrutotalsystemcurrent.operation);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcfrudrawninlinecurrent.is_set || is_set(cefcfrudrawninlinecurrent.operation)) leaf_name_data.push_back(cefcfrudrawninlinecurrent.get_name_leafdata());
    if (cefcfrudrawnsystemcurrent.is_set || is_set(cefcfrudrawnsystemcurrent.operation)) leaf_name_data.push_back(cefcfrudrawnsystemcurrent.get_name_leafdata());
    if (cefcfrutotalinlinecurrent.is_set || is_set(cefcfrutotalinlinecurrent.operation)) leaf_name_data.push_back(cefcfrutotalinlinecurrent.get_name_leafdata());
    if (cefcfrutotalsystemcurrent.is_set || is_set(cefcfrutotalsystemcurrent.operation)) leaf_name_data.push_back(cefcfrutotalsystemcurrent.get_name_leafdata());


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

void CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "cefcFRUDrawnInlineCurrent")
    {
        cefcfrudrawninlinecurrent = value;
    }
    if(value_path == "cefcFRUDrawnSystemCurrent")
    {
        cefcfrudrawnsystemcurrent = value;
    }
    if(value_path == "cefcFRUTotalInlineCurrent")
    {
        cefcfrutotalinlinecurrent = value;
    }
    if(value_path == "cefcFRUTotalSystemCurrent")
    {
        cefcfrutotalsystemcurrent = value;
    }
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
    for (std::size_t index=0; index<cefcmoduleentry_.size(); index++)
    {
        if(cefcmoduleentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityFruControlMib::Cefcmoduletable::has_operation() const
{
    for (std::size_t index=0; index<cefcmoduleentry_.size(); index++)
    {
        if(cefcmoduleentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cefcmoduleentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityFruControlMib::Cefcmoduletable::Cefcmoduleentry>();
        c->parent = this;
        cefcmoduleentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcmoduletable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcmoduleentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityFruControlMib::Cefcmoduletable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(cefcmoduleadminstatus.operation)
	|| is_set(cefcmodulelastclearconfigtime.operation)
	|| is_set(cefcmoduleoperstatus.operation)
	|| is_set(cefcmoduleresetreason.operation)
	|| is_set(cefcmoduleresetreasondescription.operation)
	|| is_set(cefcmodulestatechangereasondescr.operation)
	|| is_set(cefcmodulestatuslastchangetime.operation)
	|| is_set(cefcmoduleuptime.operation);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcmoduleadminstatus.is_set || is_set(cefcmoduleadminstatus.operation)) leaf_name_data.push_back(cefcmoduleadminstatus.get_name_leafdata());
    if (cefcmodulelastclearconfigtime.is_set || is_set(cefcmodulelastclearconfigtime.operation)) leaf_name_data.push_back(cefcmodulelastclearconfigtime.get_name_leafdata());
    if (cefcmoduleoperstatus.is_set || is_set(cefcmoduleoperstatus.operation)) leaf_name_data.push_back(cefcmoduleoperstatus.get_name_leafdata());
    if (cefcmoduleresetreason.is_set || is_set(cefcmoduleresetreason.operation)) leaf_name_data.push_back(cefcmoduleresetreason.get_name_leafdata());
    if (cefcmoduleresetreasondescription.is_set || is_set(cefcmoduleresetreasondescription.operation)) leaf_name_data.push_back(cefcmoduleresetreasondescription.get_name_leafdata());
    if (cefcmodulestatechangereasondescr.is_set || is_set(cefcmodulestatechangereasondescr.operation)) leaf_name_data.push_back(cefcmodulestatechangereasondescr.get_name_leafdata());
    if (cefcmodulestatuslastchangetime.is_set || is_set(cefcmodulestatuslastchangetime.operation)) leaf_name_data.push_back(cefcmodulestatuslastchangetime.get_name_leafdata());
    if (cefcmoduleuptime.is_set || is_set(cefcmoduleuptime.operation)) leaf_name_data.push_back(cefcmoduleuptime.get_name_leafdata());


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

void CiscoEntityFruControlMib::Cefcmoduletable::Cefcmoduleentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "cefcModuleAdminStatus")
    {
        cefcmoduleadminstatus = value;
    }
    if(value_path == "cefcModuleLastClearConfigTime")
    {
        cefcmodulelastclearconfigtime = value;
    }
    if(value_path == "cefcModuleOperStatus")
    {
        cefcmoduleoperstatus = value;
    }
    if(value_path == "cefcModuleResetReason")
    {
        cefcmoduleresetreason = value;
    }
    if(value_path == "cefcModuleResetReasonDescription")
    {
        cefcmoduleresetreasondescription = value;
    }
    if(value_path == "cefcModuleStateChangeReasonDescr")
    {
        cefcmodulestatechangereasondescr = value;
    }
    if(value_path == "cefcModuleStatusLastChangeTime")
    {
        cefcmodulestatuslastchangetime = value;
    }
    if(value_path == "cefcModuleUpTime")
    {
        cefcmoduleuptime = value;
    }
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
    for (std::size_t index=0; index<cefcintellimoduleentry_.size(); index++)
    {
        if(cefcintellimoduleentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityFruControlMib::Cefcintellimoduletable::has_operation() const
{
    for (std::size_t index=0; index<cefcintellimoduleentry_.size(); index++)
    {
        if(cefcintellimoduleentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cefcintellimoduleentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityFruControlMib::Cefcintellimoduletable::Cefcintellimoduleentry>();
        c->parent = this;
        cefcintellimoduleentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcintellimoduletable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcintellimoduleentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityFruControlMib::Cefcintellimoduletable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(cefcintellimoduleipaddr.operation)
	|| is_set(cefcintellimoduleipaddrtype.operation);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcintellimoduleipaddr.is_set || is_set(cefcintellimoduleipaddr.operation)) leaf_name_data.push_back(cefcintellimoduleipaddr.get_name_leafdata());
    if (cefcintellimoduleipaddrtype.is_set || is_set(cefcintellimoduleipaddrtype.operation)) leaf_name_data.push_back(cefcintellimoduleipaddrtype.get_name_leafdata());


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

void CiscoEntityFruControlMib::Cefcintellimoduletable::Cefcintellimoduleentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "cefcIntelliModuleIPAddr")
    {
        cefcintellimoduleipaddr = value;
    }
    if(value_path == "cefcIntelliModuleIPAddrType")
    {
        cefcintellimoduleipaddrtype = value;
    }
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
    for (std::size_t index=0; index<cefcmodulelocalswitchingentry_.size(); index++)
    {
        if(cefcmodulelocalswitchingentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::has_operation() const
{
    for (std::size_t index=0; index<cefcmodulelocalswitchingentry_.size(); index++)
    {
        if(cefcmodulelocalswitchingentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cefcmodulelocalswitchingentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry>();
        c->parent = this;
        cefcmodulelocalswitchingentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcmodulelocalswitchingentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(cefcmodulelocalswitchingmode.operation);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcmodulelocalswitchingmode.is_set || is_set(cefcmodulelocalswitchingmode.operation)) leaf_name_data.push_back(cefcmodulelocalswitchingmode.get_name_leafdata());


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

void CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "cefcModuleLocalSwitchingMode")
    {
        cefcmodulelocalswitchingmode = value;
    }
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
    for (std::size_t index=0; index<cefcfantraystatusentry_.size(); index++)
    {
        if(cefcfantraystatusentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityFruControlMib::Cefcfantraystatustable::has_operation() const
{
    for (std::size_t index=0; index<cefcfantraystatusentry_.size(); index++)
    {
        if(cefcfantraystatusentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cefcfantraystatusentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityFruControlMib::Cefcfantraystatustable::Cefcfantraystatusentry>();
        c->parent = this;
        cefcfantraystatusentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcfantraystatustable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcfantraystatusentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityFruControlMib::Cefcfantraystatustable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(cefcfantrayoperstatus.operation);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcfantrayoperstatus.is_set || is_set(cefcfantrayoperstatus.operation)) leaf_name_data.push_back(cefcfantrayoperstatus.get_name_leafdata());


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

void CiscoEntityFruControlMib::Cefcfantraystatustable::Cefcfantraystatusentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "cefcFanTrayOperStatus")
    {
        cefcfantrayoperstatus = value;
    }
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
    for (std::size_t index=0; index<cefcphysicalentry_.size(); index++)
    {
        if(cefcphysicalentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityFruControlMib::Cefcphysicaltable::has_operation() const
{
    for (std::size_t index=0; index<cefcphysicalentry_.size(); index++)
    {
        if(cefcphysicalentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cefcphysicalentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityFruControlMib::Cefcphysicaltable::Cefcphysicalentry>();
        c->parent = this;
        cefcphysicalentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcphysicaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcphysicalentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityFruControlMib::Cefcphysicaltable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(cefcphysicalstatus.operation);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcphysicalstatus.is_set || is_set(cefcphysicalstatus.operation)) leaf_name_data.push_back(cefcphysicalstatus.get_name_leafdata());


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

void CiscoEntityFruControlMib::Cefcphysicaltable::Cefcphysicalentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "cefcPhysicalStatus")
    {
        cefcphysicalstatus = value;
    }
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
    for (std::size_t index=0; index<cefcpowersupplyinputentry_.size(); index++)
    {
        if(cefcpowersupplyinputentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityFruControlMib::Cefcpowersupplyinputtable::has_operation() const
{
    for (std::size_t index=0; index<cefcpowersupplyinputentry_.size(); index++)
    {
        if(cefcpowersupplyinputentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cefcpowersupplyinputentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityFruControlMib::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry>();
        c->parent = this;
        cefcpowersupplyinputentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcpowersupplyinputtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcpowersupplyinputentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityFruControlMib::Cefcpowersupplyinputtable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(cefcpowersupplyinputindex.operation)
	|| is_set(cefcpowersupplyinputtype.operation);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcpowersupplyinputindex.is_set || is_set(cefcpowersupplyinputindex.operation)) leaf_name_data.push_back(cefcpowersupplyinputindex.get_name_leafdata());
    if (cefcpowersupplyinputtype.is_set || is_set(cefcpowersupplyinputtype.operation)) leaf_name_data.push_back(cefcpowersupplyinputtype.get_name_leafdata());


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

void CiscoEntityFruControlMib::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "cefcPowerSupplyInputIndex")
    {
        cefcpowersupplyinputindex = value;
    }
    if(value_path == "cefcPowerSupplyInputType")
    {
        cefcpowersupplyinputtype = value;
    }
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
    for (std::size_t index=0; index<cefcpowersupplyoutputentry_.size(); index++)
    {
        if(cefcpowersupplyoutputentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::has_operation() const
{
    for (std::size_t index=0; index<cefcpowersupplyoutputentry_.size(); index++)
    {
        if(cefcpowersupplyoutputentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cefcpowersupplyoutputentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry>();
        c->parent = this;
        cefcpowersupplyoutputentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcpowersupplyoutputentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(cefcpsoutputmodeindex.operation)
	|| is_set(cefcpsoutputmodecurrent.operation)
	|| is_set(cefcpsoutputmodeinoperation.operation);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcpsoutputmodeindex.is_set || is_set(cefcpsoutputmodeindex.operation)) leaf_name_data.push_back(cefcpsoutputmodeindex.get_name_leafdata());
    if (cefcpsoutputmodecurrent.is_set || is_set(cefcpsoutputmodecurrent.operation)) leaf_name_data.push_back(cefcpsoutputmodecurrent.get_name_leafdata());
    if (cefcpsoutputmodeinoperation.is_set || is_set(cefcpsoutputmodeinoperation.operation)) leaf_name_data.push_back(cefcpsoutputmodeinoperation.get_name_leafdata());


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

void CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "cefcPSOutputModeIndex")
    {
        cefcpsoutputmodeindex = value;
    }
    if(value_path == "cefcPSOutputModeCurrent")
    {
        cefcpsoutputmodecurrent = value;
    }
    if(value_path == "cefcPSOutputModeInOperation")
    {
        cefcpsoutputmodeinoperation = value;
    }
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
    for (std::size_t index=0; index<cefcchassiscoolingentry_.size(); index++)
    {
        if(cefcchassiscoolingentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityFruControlMib::Cefcchassiscoolingtable::has_operation() const
{
    for (std::size_t index=0; index<cefcchassiscoolingentry_.size(); index++)
    {
        if(cefcchassiscoolingentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cefcchassiscoolingentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityFruControlMib::Cefcchassiscoolingtable::Cefcchassiscoolingentry>();
        c->parent = this;
        cefcchassiscoolingentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcchassiscoolingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcchassiscoolingentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityFruControlMib::Cefcchassiscoolingtable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(cefcchassisperslotcoolingcap.operation)
	|| is_set(cefcchassisperslotcoolingunit.operation);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcchassisperslotcoolingcap.is_set || is_set(cefcchassisperslotcoolingcap.operation)) leaf_name_data.push_back(cefcchassisperslotcoolingcap.get_name_leafdata());
    if (cefcchassisperslotcoolingunit.is_set || is_set(cefcchassisperslotcoolingunit.operation)) leaf_name_data.push_back(cefcchassisperslotcoolingunit.get_name_leafdata());


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

void CiscoEntityFruControlMib::Cefcchassiscoolingtable::Cefcchassiscoolingentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "cefcChassisPerSlotCoolingCap")
    {
        cefcchassisperslotcoolingcap = value;
    }
    if(value_path == "cefcChassisPerSlotCoolingUnit")
    {
        cefcchassisperslotcoolingunit = value;
    }
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
    for (std::size_t index=0; index<cefcfancoolingentry_.size(); index++)
    {
        if(cefcfancoolingentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityFruControlMib::Cefcfancoolingtable::has_operation() const
{
    for (std::size_t index=0; index<cefcfancoolingentry_.size(); index++)
    {
        if(cefcfancoolingentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cefcfancoolingentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityFruControlMib::Cefcfancoolingtable::Cefcfancoolingentry>();
        c->parent = this;
        cefcfancoolingentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcfancoolingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcfancoolingentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityFruControlMib::Cefcfancoolingtable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(cefcfancoolingcapacity.operation)
	|| is_set(cefcfancoolingcapacityunit.operation);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcfancoolingcapacity.is_set || is_set(cefcfancoolingcapacity.operation)) leaf_name_data.push_back(cefcfancoolingcapacity.get_name_leafdata());
    if (cefcfancoolingcapacityunit.is_set || is_set(cefcfancoolingcapacityunit.operation)) leaf_name_data.push_back(cefcfancoolingcapacityunit.get_name_leafdata());


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

void CiscoEntityFruControlMib::Cefcfancoolingtable::Cefcfancoolingentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "cefcFanCoolingCapacity")
    {
        cefcfancoolingcapacity = value;
    }
    if(value_path == "cefcFanCoolingCapacityUnit")
    {
        cefcfancoolingcapacityunit = value;
    }
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
    for (std::size_t index=0; index<cefcmodulecoolingentry_.size(); index++)
    {
        if(cefcmodulecoolingentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityFruControlMib::Cefcmodulecoolingtable::has_operation() const
{
    for (std::size_t index=0; index<cefcmodulecoolingentry_.size(); index++)
    {
        if(cefcmodulecoolingentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cefcmodulecoolingentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityFruControlMib::Cefcmodulecoolingtable::Cefcmodulecoolingentry>();
        c->parent = this;
        cefcmodulecoolingentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcmodulecoolingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcmodulecoolingentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityFruControlMib::Cefcmodulecoolingtable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(cefcmodulecooling.operation)
	|| is_set(cefcmodulecoolingunit.operation);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcmodulecooling.is_set || is_set(cefcmodulecooling.operation)) leaf_name_data.push_back(cefcmodulecooling.get_name_leafdata());
    if (cefcmodulecoolingunit.is_set || is_set(cefcmodulecoolingunit.operation)) leaf_name_data.push_back(cefcmodulecoolingunit.get_name_leafdata());


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

void CiscoEntityFruControlMib::Cefcmodulecoolingtable::Cefcmodulecoolingentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "cefcModuleCooling")
    {
        cefcmodulecooling = value;
    }
    if(value_path == "cefcModuleCoolingUnit")
    {
        cefcmodulecoolingunit = value;
    }
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
    for (std::size_t index=0; index<cefcfancoolingcapentry_.size(); index++)
    {
        if(cefcfancoolingcapentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityFruControlMib::Cefcfancoolingcaptable::has_operation() const
{
    for (std::size_t index=0; index<cefcfancoolingcapentry_.size(); index++)
    {
        if(cefcfancoolingcapentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cefcfancoolingcapentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityFruControlMib::Cefcfancoolingcaptable::Cefcfancoolingcapentry>();
        c->parent = this;
        cefcfancoolingcapentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcfancoolingcaptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcfancoolingcapentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityFruControlMib::Cefcfancoolingcaptable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(cefcfancoolingcapindex.operation)
	|| is_set(cefcfancoolingcapcapacity.operation)
	|| is_set(cefcfancoolingcapcapacityunit.operation)
	|| is_set(cefcfancoolingcapcurrent.operation)
	|| is_set(cefcfancoolingcapmodedescr.operation);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcfancoolingcapindex.is_set || is_set(cefcfancoolingcapindex.operation)) leaf_name_data.push_back(cefcfancoolingcapindex.get_name_leafdata());
    if (cefcfancoolingcapcapacity.is_set || is_set(cefcfancoolingcapcapacity.operation)) leaf_name_data.push_back(cefcfancoolingcapcapacity.get_name_leafdata());
    if (cefcfancoolingcapcapacityunit.is_set || is_set(cefcfancoolingcapcapacityunit.operation)) leaf_name_data.push_back(cefcfancoolingcapcapacityunit.get_name_leafdata());
    if (cefcfancoolingcapcurrent.is_set || is_set(cefcfancoolingcapcurrent.operation)) leaf_name_data.push_back(cefcfancoolingcapcurrent.get_name_leafdata());
    if (cefcfancoolingcapmodedescr.is_set || is_set(cefcfancoolingcapmodedescr.operation)) leaf_name_data.push_back(cefcfancoolingcapmodedescr.get_name_leafdata());


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

void CiscoEntityFruControlMib::Cefcfancoolingcaptable::Cefcfancoolingcapentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "cefcFanCoolingCapIndex")
    {
        cefcfancoolingcapindex = value;
    }
    if(value_path == "cefcFanCoolingCapCapacity")
    {
        cefcfancoolingcapcapacity = value;
    }
    if(value_path == "cefcFanCoolingCapCapacityUnit")
    {
        cefcfancoolingcapcapacityunit = value;
    }
    if(value_path == "cefcFanCoolingCapCurrent")
    {
        cefcfancoolingcapcurrent = value;
    }
    if(value_path == "cefcFanCoolingCapModeDescr")
    {
        cefcfancoolingcapmodedescr = value;
    }
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
    for (std::size_t index=0; index<cefcconnectorratingentry_.size(); index++)
    {
        if(cefcconnectorratingentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityFruControlMib::Cefcconnectorratingtable::has_operation() const
{
    for (std::size_t index=0; index<cefcconnectorratingentry_.size(); index++)
    {
        if(cefcconnectorratingentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cefcconnectorratingentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityFruControlMib::Cefcconnectorratingtable::Cefcconnectorratingentry>();
        c->parent = this;
        cefcconnectorratingentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcconnectorratingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcconnectorratingentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityFruControlMib::Cefcconnectorratingtable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(cefcconnectorrating.operation);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcconnectorrating.is_set || is_set(cefcconnectorrating.operation)) leaf_name_data.push_back(cefcconnectorrating.get_name_leafdata());


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

void CiscoEntityFruControlMib::Cefcconnectorratingtable::Cefcconnectorratingentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "cefcConnectorRating")
    {
        cefcconnectorrating = value;
    }
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
    for (std::size_t index=0; index<cefcmodulepowerconsumptionentry_.size(); index++)
    {
        if(cefcmodulepowerconsumptionentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::has_operation() const
{
    for (std::size_t index=0; index<cefcmodulepowerconsumptionentry_.size(); index++)
    {
        if(cefcmodulepowerconsumptionentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cefcmodulepowerconsumptionentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry>();
        c->parent = this;
        cefcmodulepowerconsumptionentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcmodulepowerconsumptionentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(cefcmodulepowerconsumption.operation);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefcmodulepowerconsumption.is_set || is_set(cefcmodulepowerconsumption.operation)) leaf_name_data.push_back(cefcmodulepowerconsumption.get_name_leafdata());


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

void CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "cefcModulePowerConsumption")
    {
        cefcmodulepowerconsumption = value;
    }
}

const Enum::YLeaf ModuleadmintypeEnum::enabled {1, "enabled"};
const Enum::YLeaf ModuleadmintypeEnum::disabled {2, "disabled"};
const Enum::YLeaf ModuleadmintypeEnum::reset {3, "reset"};
const Enum::YLeaf ModuleadmintypeEnum::outOfServiceAdmin {4, "outOfServiceAdmin"};

const Enum::YLeaf FrucoolingunitEnum::cfm {1, "cfm"};
const Enum::YLeaf FrucoolingunitEnum::watts {2, "watts"};

const Enum::YLeaf PoweradmintypeEnum::on {1, "on"};
const Enum::YLeaf PoweradmintypeEnum::off {2, "off"};
const Enum::YLeaf PoweradmintypeEnum::inlineAuto {3, "inlineAuto"};
const Enum::YLeaf PoweradmintypeEnum::inlineOn {4, "inlineOn"};
const Enum::YLeaf PoweradmintypeEnum::powerCycle {5, "powerCycle"};

const Enum::YLeaf ModuleopertypeEnum::unknown {1, "unknown"};
const Enum::YLeaf ModuleopertypeEnum::ok {2, "ok"};
const Enum::YLeaf ModuleopertypeEnum::disabled {3, "disabled"};
const Enum::YLeaf ModuleopertypeEnum::okButDiagFailed {4, "okButDiagFailed"};
const Enum::YLeaf ModuleopertypeEnum::boot {5, "boot"};
const Enum::YLeaf ModuleopertypeEnum::selfTest {6, "selfTest"};
const Enum::YLeaf ModuleopertypeEnum::failed {7, "failed"};
const Enum::YLeaf ModuleopertypeEnum::missing {8, "missing"};
const Enum::YLeaf ModuleopertypeEnum::mismatchWithParent {9, "mismatchWithParent"};
const Enum::YLeaf ModuleopertypeEnum::mismatchConfig {10, "mismatchConfig"};
const Enum::YLeaf ModuleopertypeEnum::diagFailed {11, "diagFailed"};
const Enum::YLeaf ModuleopertypeEnum::dormant {12, "dormant"};
const Enum::YLeaf ModuleopertypeEnum::outOfServiceAdmin {13, "outOfServiceAdmin"};
const Enum::YLeaf ModuleopertypeEnum::outOfServiceEnvTemp {14, "outOfServiceEnvTemp"};
const Enum::YLeaf ModuleopertypeEnum::poweredDown {15, "poweredDown"};
const Enum::YLeaf ModuleopertypeEnum::poweredUp {16, "poweredUp"};
const Enum::YLeaf ModuleopertypeEnum::powerDenied {17, "powerDenied"};
const Enum::YLeaf ModuleopertypeEnum::powerCycled {18, "powerCycled"};
const Enum::YLeaf ModuleopertypeEnum::okButPowerOverWarning {19, "okButPowerOverWarning"};
const Enum::YLeaf ModuleopertypeEnum::okButPowerOverCritical {20, "okButPowerOverCritical"};
const Enum::YLeaf ModuleopertypeEnum::syncInProgress {21, "syncInProgress"};
const Enum::YLeaf ModuleopertypeEnum::upgrading {22, "upgrading"};
const Enum::YLeaf ModuleopertypeEnum::okButAuthFailed {23, "okButAuthFailed"};
const Enum::YLeaf ModuleopertypeEnum::mdr {24, "mdr"};
const Enum::YLeaf ModuleopertypeEnum::fwMismatchFound {25, "fwMismatchFound"};
const Enum::YLeaf ModuleopertypeEnum::fwDownloadSuccess {26, "fwDownloadSuccess"};
const Enum::YLeaf ModuleopertypeEnum::fwDownloadFailure {27, "fwDownloadFailure"};

const Enum::YLeaf ModuleresetreasontypeEnum::unknown {1, "unknown"};
const Enum::YLeaf ModuleresetreasontypeEnum::powerUp {2, "powerUp"};
const Enum::YLeaf ModuleresetreasontypeEnum::parityError {3, "parityError"};
const Enum::YLeaf ModuleresetreasontypeEnum::clearConfigReset {4, "clearConfigReset"};
const Enum::YLeaf ModuleresetreasontypeEnum::manualReset {5, "manualReset"};
const Enum::YLeaf ModuleresetreasontypeEnum::watchDogTimeoutReset {6, "watchDogTimeoutReset"};
const Enum::YLeaf ModuleresetreasontypeEnum::resourceOverflowReset {7, "resourceOverflowReset"};
const Enum::YLeaf ModuleresetreasontypeEnum::missingTaskReset {8, "missingTaskReset"};
const Enum::YLeaf ModuleresetreasontypeEnum::lowVoltageReset {9, "lowVoltageReset"};
const Enum::YLeaf ModuleresetreasontypeEnum::controllerReset {10, "controllerReset"};
const Enum::YLeaf ModuleresetreasontypeEnum::systemReset {11, "systemReset"};
const Enum::YLeaf ModuleresetreasontypeEnum::switchoverReset {12, "switchoverReset"};
const Enum::YLeaf ModuleresetreasontypeEnum::upgradeReset {13, "upgradeReset"};
const Enum::YLeaf ModuleresetreasontypeEnum::downgradeReset {14, "downgradeReset"};
const Enum::YLeaf ModuleresetreasontypeEnum::cacheErrorReset {15, "cacheErrorReset"};
const Enum::YLeaf ModuleresetreasontypeEnum::deviceDriverReset {16, "deviceDriverReset"};
const Enum::YLeaf ModuleresetreasontypeEnum::softwareExceptionReset {17, "softwareExceptionReset"};
const Enum::YLeaf ModuleresetreasontypeEnum::restoreConfigReset {18, "restoreConfigReset"};
const Enum::YLeaf ModuleresetreasontypeEnum::abortRevReset {19, "abortRevReset"};
const Enum::YLeaf ModuleresetreasontypeEnum::burnBootReset {20, "burnBootReset"};
const Enum::YLeaf ModuleresetreasontypeEnum::standbyCdHealthierReset {21, "standbyCdHealthierReset"};
const Enum::YLeaf ModuleresetreasontypeEnum::nonNativeConfigClearReset {22, "nonNativeConfigClearReset"};
const Enum::YLeaf ModuleresetreasontypeEnum::memoryProtectionErrorReset {23, "memoryProtectionErrorReset"};

const Enum::YLeaf PowerredundancytypeEnum::notsupported {1, "notsupported"};
const Enum::YLeaf PowerredundancytypeEnum::redundant {2, "redundant"};
const Enum::YLeaf PowerredundancytypeEnum::combined {3, "combined"};
const Enum::YLeaf PowerredundancytypeEnum::nonRedundant {4, "nonRedundant"};
const Enum::YLeaf PowerredundancytypeEnum::psRedundant {5, "psRedundant"};
const Enum::YLeaf PowerredundancytypeEnum::inPwrSrcRedundant {6, "inPwrSrcRedundant"};
const Enum::YLeaf PowerredundancytypeEnum::psRedundantSingleInput {7, "psRedundantSingleInput"};

const Enum::YLeaf PoweropertypeEnum::offEnvOther {1, "offEnvOther"};
const Enum::YLeaf PoweropertypeEnum::on {2, "on"};
const Enum::YLeaf PoweropertypeEnum::offAdmin {3, "offAdmin"};
const Enum::YLeaf PoweropertypeEnum::offDenied {4, "offDenied"};
const Enum::YLeaf PoweropertypeEnum::offEnvPower {5, "offEnvPower"};
const Enum::YLeaf PoweropertypeEnum::offEnvTemp {6, "offEnvTemp"};
const Enum::YLeaf PoweropertypeEnum::offEnvFan {7, "offEnvFan"};
const Enum::YLeaf PoweropertypeEnum::failed {8, "failed"};
const Enum::YLeaf PoweropertypeEnum::onButFanFail {9, "onButFanFail"};
const Enum::YLeaf PoweropertypeEnum::offCooling {10, "offCooling"};
const Enum::YLeaf PoweropertypeEnum::offConnectorRating {11, "offConnectorRating"};
const Enum::YLeaf PoweropertypeEnum::onButInlinePowerFail {12, "onButInlinePowerFail"};

const Enum::YLeaf CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::CefcpowernonredundantreasonEnum::notApplicable {1, "notApplicable"};
const Enum::YLeaf CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::CefcpowernonredundantreasonEnum::unknown {2, "unknown"};
const Enum::YLeaf CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::CefcpowernonredundantreasonEnum::singleSupply {3, "singleSupply"};
const Enum::YLeaf CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::CefcpowernonredundantreasonEnum::mismatchedSupplies {4, "mismatchedSupplies"};
const Enum::YLeaf CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::CefcpowernonredundantreasonEnum::supplyError {5, "supplyError"};

const Enum::YLeaf CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry::CefcmodulelocalswitchingmodeEnum::enabled {1, "enabled"};
const Enum::YLeaf CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry::CefcmodulelocalswitchingmodeEnum::disabled {2, "disabled"};

const Enum::YLeaf CiscoEntityFruControlMib::Cefcfantraystatustable::Cefcfantraystatusentry::CefcfantrayoperstatusEnum::unknown {1, "unknown"};
const Enum::YLeaf CiscoEntityFruControlMib::Cefcfantraystatustable::Cefcfantraystatusentry::CefcfantrayoperstatusEnum::up {2, "up"};
const Enum::YLeaf CiscoEntityFruControlMib::Cefcfantraystatustable::Cefcfantraystatusentry::CefcfantrayoperstatusEnum::down {3, "down"};
const Enum::YLeaf CiscoEntityFruControlMib::Cefcfantraystatustable::Cefcfantraystatusentry::CefcfantrayoperstatusEnum::warning {4, "warning"};

const Enum::YLeaf CiscoEntityFruControlMib::Cefcphysicaltable::Cefcphysicalentry::CefcphysicalstatusEnum::other {1, "other"};
const Enum::YLeaf CiscoEntityFruControlMib::Cefcphysicaltable::Cefcphysicalentry::CefcphysicalstatusEnum::supported {2, "supported"};
const Enum::YLeaf CiscoEntityFruControlMib::Cefcphysicaltable::Cefcphysicalentry::CefcphysicalstatusEnum::unsupported {3, "unsupported"};
const Enum::YLeaf CiscoEntityFruControlMib::Cefcphysicaltable::Cefcphysicalentry::CefcphysicalstatusEnum::incompatible {4, "incompatible"};

const Enum::YLeaf CiscoEntityFruControlMib::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::CefcpowersupplyinputtypeEnum::unknown {1, "unknown"};
const Enum::YLeaf CiscoEntityFruControlMib::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::CefcpowersupplyinputtypeEnum::acLow {2, "acLow"};
const Enum::YLeaf CiscoEntityFruControlMib::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::CefcpowersupplyinputtypeEnum::acHigh {3, "acHigh"};
const Enum::YLeaf CiscoEntityFruControlMib::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::CefcpowersupplyinputtypeEnum::dcLow {4, "dcLow"};
const Enum::YLeaf CiscoEntityFruControlMib::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::CefcpowersupplyinputtypeEnum::dcHigh {5, "dcHigh"};


}
}

