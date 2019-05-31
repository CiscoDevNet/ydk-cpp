
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_ENTITY_FRU_CONTROL_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xr {
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
    , cefcfantraystatustable(std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable>())
    , cefcphysicaltable(std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable>())
{
    cefcfrupower->parent = this;
    cefcmibnotificationenables->parent = this;
    cefcfrupowersupplygrouptable->parent = this;
    cefcfrupowerstatustable->parent = this;
    cefcfrupowersupplyvaluetable->parent = this;
    cefcmoduletable->parent = this;
    cefcintellimoduletable->parent = this;
    cefcfantraystatustable->parent = this;
    cefcphysicaltable->parent = this;

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
	|| (cefcfantraystatustable !=  nullptr && cefcfantraystatustable->has_data())
	|| (cefcphysicaltable !=  nullptr && cefcphysicaltable->has_data());
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
	|| (cefcfantraystatustable !=  nullptr && cefcfantraystatustable->has_operation())
	|| (cefcphysicaltable !=  nullptr && cefcphysicaltable->has_operation());
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

std::shared_ptr<ydk::Entity> CISCOENTITYFRUCONTROLMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOENTITYFRUCONTROLMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cefcfrupower != nullptr)
    {
        _children["cefcFRUPower"] = cefcfrupower;
    }

    if(cefcmibnotificationenables != nullptr)
    {
        _children["cefcMIBNotificationEnables"] = cefcmibnotificationenables;
    }

    if(cefcfrupowersupplygrouptable != nullptr)
    {
        _children["cefcFRUPowerSupplyGroupTable"] = cefcfrupowersupplygrouptable;
    }

    if(cefcfrupowerstatustable != nullptr)
    {
        _children["cefcFRUPowerStatusTable"] = cefcfrupowerstatustable;
    }

    if(cefcfrupowersupplyvaluetable != nullptr)
    {
        _children["cefcFRUPowerSupplyValueTable"] = cefcfrupowersupplyvaluetable;
    }

    if(cefcmoduletable != nullptr)
    {
        _children["cefcModuleTable"] = cefcmoduletable;
    }

    if(cefcintellimoduletable != nullptr)
    {
        _children["cefcIntelliModuleTable"] = cefcintellimoduletable;
    }

    if(cefcfantraystatustable != nullptr)
    {
        _children["cefcFanTrayStatusTable"] = cefcfantraystatustable;
    }

    if(cefcphysicaltable != nullptr)
    {
        _children["cefcPhysicalTable"] = cefcphysicaltable;
    }

    return _children;
}

void CISCOENTITYFRUCONTROLMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYFRUCONTROLMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CISCOENTITYFRUCONTROLMIB::clone_ptr() const
{
    return std::make_shared<CISCOENTITYFRUCONTROLMIB>();
}

std::string CISCOENTITYFRUCONTROLMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string CISCOENTITYFRUCONTROLMIB::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function CISCOENTITYFRUCONTROLMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOENTITYFRUCONTROLMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool CISCOENTITYFRUCONTROLMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcFRUPower" || name == "cefcMIBNotificationEnables" || name == "cefcFRUPowerSupplyGroupTable" || name == "cefcFRUPowerStatusTable" || name == "cefcFRUPowerSupplyValueTable" || name == "cefcModuleTable" || name == "cefcIntelliModuleTable" || name == "cefcFanTrayStatusTable" || name == "cefcPhysicalTable")
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

std::shared_ptr<ydk::Entity> CISCOENTITYFRUCONTROLMIB::CefcFRUPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOENTITYFRUCONTROLMIB::CefcFRUPower::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    cefcmibenablestatusnotification{YType::enumeration, "cefcMIBEnableStatusNotification"}
{

    yang_name = "cefcMIBNotificationEnables"; yang_parent_name = "CISCO-ENTITY-FRU-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYFRUCONTROLMIB::CefcMIBNotificationEnables::~CefcMIBNotificationEnables()
{
}

bool CISCOENTITYFRUCONTROLMIB::CefcMIBNotificationEnables::has_data() const
{
    if (is_presence_container) return true;
    return cefcmibenablestatusnotification.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::CefcMIBNotificationEnables::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cefcmibenablestatusnotification.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOENTITYFRUCONTROLMIB::CefcMIBNotificationEnables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOENTITYFRUCONTROLMIB::CefcMIBNotificationEnables::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOENTITYFRUCONTROLMIB::CefcMIBNotificationEnables::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cefcMIBEnableStatusNotification")
    {
        cefcmibenablestatusnotification = value;
        cefcmibenablestatusnotification.value_namespace = name_space;
        cefcmibenablestatusnotification.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENTITYFRUCONTROLMIB::CefcMIBNotificationEnables::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cefcMIBEnableStatusNotification")
    {
        cefcmibenablestatusnotification.yfilter = yfilter;
    }
}

bool CISCOENTITYFRUCONTROLMIB::CefcMIBNotificationEnables::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefcMIBEnableStatusNotification")
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

std::shared_ptr<ydk::Entity> CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcFRUPowerSupplyGroupEntry")
    {
        auto ent_ = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::CefcFRUPowerSupplyGroupEntry>();
        ent_->parent = this;
        cefcfrupowersupplygroupentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cefcfrupowersupplygroupentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    entphysicalindex{YType::int32, "entPhysicalIndex"},
    cefcpowerredundancymode{YType::enumeration, "cefcPowerRedundancyMode"},
    cefcpowerunits{YType::str, "cefcPowerUnits"},
    cefctotalavailablecurrent{YType::int32, "cefcTotalAvailableCurrent"},
    cefctotaldrawncurrent{YType::int32, "cefcTotalDrawnCurrent"},
    cefcpowerredundancyopermode{YType::enumeration, "cefcPowerRedundancyOperMode"}
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
	|| cefcpowerredundancyopermode.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::CefcFRUPowerSupplyGroupEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcpowerredundancymode.yfilter)
	|| ydk::is_set(cefcpowerunits.yfilter)
	|| ydk::is_set(cefctotalavailablecurrent.yfilter)
	|| ydk::is_set(cefctotaldrawncurrent.yfilter)
	|| ydk::is_set(cefcpowerredundancyopermode.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::CefcFRUPowerSupplyGroupEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::CefcFRUPowerSupplyGroupEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
}

bool CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyGroupTable::CefcFRUPowerSupplyGroupEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcPowerRedundancyMode" || name == "cefcPowerUnits" || name == "cefcTotalAvailableCurrent" || name == "cefcTotalDrawnCurrent" || name == "cefcPowerRedundancyOperMode")
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

std::shared_ptr<ydk::Entity> CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcFRUPowerStatusEntry")
    {
        auto ent_ = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable::CefcFRUPowerStatusEntry>();
        ent_->parent = this;
        cefcfrupowerstatusentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cefcfrupowerstatusentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    entphysicalindex{YType::int32, "entPhysicalIndex"},
    cefcfrupoweradminstatus{YType::enumeration, "cefcFRUPowerAdminStatus"},
    cefcfrupoweroperstatus{YType::enumeration, "cefcFRUPowerOperStatus"},
    cefcfrucurrent{YType::int32, "cefcFRUCurrent"}
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
	|| cefcfrucurrent.is_set;
}

bool CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable::CefcFRUPowerStatusEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefcfrupoweradminstatus.yfilter)
	|| ydk::is_set(cefcfrupoweroperstatus.yfilter)
	|| ydk::is_set(cefcfrucurrent.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable::CefcFRUPowerStatusEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable::CefcFRUPowerStatusEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
}

bool CISCOENTITYFRUCONTROLMIB::CefcFRUPowerStatusTable::CefcFRUPowerStatusEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefcFRUPowerAdminStatus" || name == "cefcFRUPowerOperStatus" || name == "cefcFRUCurrent")
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

std::shared_ptr<ydk::Entity> CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcFRUPowerSupplyValueEntry")
    {
        auto ent_ = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable::CefcFRUPowerSupplyValueEntry>();
        ent_->parent = this;
        cefcfrupowersupplyvalueentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cefcfrupowersupplyvalueentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    entphysicalindex{YType::int32, "entPhysicalIndex"},
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

std::shared_ptr<ydk::Entity> CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable::CefcFRUPowerSupplyValueEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOENTITYFRUCONTROLMIB::CefcFRUPowerSupplyValueTable::CefcFRUPowerSupplyValueEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> CISCOENTITYFRUCONTROLMIB::CefcModuleTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcModuleEntry")
    {
        auto ent_ = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcModuleTable::CefcModuleEntry>();
        ent_->parent = this;
        cefcmoduleentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOENTITYFRUCONTROLMIB::CefcModuleTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cefcmoduleentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    entphysicalindex{YType::int32, "entPhysicalIndex"},
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

std::shared_ptr<ydk::Entity> CISCOENTITYFRUCONTROLMIB::CefcModuleTable::CefcModuleEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOENTITYFRUCONTROLMIB::CefcModuleTable::CefcModuleEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcIntelliModuleEntry")
    {
        auto ent_ = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable::CefcIntelliModuleEntry>();
        ent_->parent = this;
        cefcintellimoduleentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cefcintellimoduleentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    entphysicalindex{YType::int32, "entPhysicalIndex"},
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

std::shared_ptr<ydk::Entity> CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable::CefcIntelliModuleEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOENTITYFRUCONTROLMIB::CefcIntelliModuleTable::CefcIntelliModuleEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcFanTrayStatusEntry")
    {
        auto ent_ = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::CefcFanTrayStatusEntry>();
        ent_->parent = this;
        cefcfantraystatusentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cefcfantraystatusentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    entphysicalindex{YType::int32, "entPhysicalIndex"},
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

std::shared_ptr<ydk::Entity> CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::CefcFanTrayStatusEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOENTITYFRUCONTROLMIB::CefcFanTrayStatusTable::CefcFanTrayStatusEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefcPhysicalEntry")
    {
        auto ent_ = std::make_shared<CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::CefcPhysicalEntry>();
        ent_->parent = this;
        cefcphysicalentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cefcphysicalentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    entphysicalindex{YType::int32, "entPhysicalIndex"},
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

std::shared_ptr<ydk::Entity> CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::CefcPhysicalEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOENTITYFRUCONTROLMIB::CefcPhysicalTable::CefcPhysicalEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

const Enum::YLeaf PowerRedundancyType::notsupported {1, "notsupported"};
const Enum::YLeaf PowerRedundancyType::redundant {2, "redundant"};
const Enum::YLeaf PowerRedundancyType::combined {3, "combined"};

const Enum::YLeaf PowerAdminType::on {1, "on"};
const Enum::YLeaf PowerAdminType::off {2, "off"};
const Enum::YLeaf PowerAdminType::inlineAuto {3, "inlineAuto"};
const Enum::YLeaf PowerAdminType::inlineOn {4, "inlineOn"};

const Enum::YLeaf PowerOperType::offEnvOther {1, "offEnvOther"};
const Enum::YLeaf PowerOperType::on {2, "on"};
const Enum::YLeaf PowerOperType::offAdmin {3, "offAdmin"};
const Enum::YLeaf PowerOperType::offDenied {4, "offDenied"};
const Enum::YLeaf PowerOperType::offEnvPower {5, "offEnvPower"};
const Enum::YLeaf PowerOperType::offEnvTemp {6, "offEnvTemp"};
const Enum::YLeaf PowerOperType::offEnvFan {7, "offEnvFan"};
const Enum::YLeaf PowerOperType::failed {8, "failed"};
const Enum::YLeaf PowerOperType::onButFanFail {9, "onButFanFail"};

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
const Enum::YLeaf ModuleOperType::updatingFPD {21, "updatingFPD"};

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

const Enum::YLeaf CefcFanTrayOperStatusType::unknown {1, "unknown"};
const Enum::YLeaf CefcFanTrayOperStatusType::up {2, "up"};
const Enum::YLeaf CefcFanTrayOperStatusType::down {3, "down"};
const Enum::YLeaf CefcFanTrayOperStatusType::warning {4, "warning"};

const Enum::YLeaf CefcPhysicalStatusType::other {1, "other"};
const Enum::YLeaf CefcPhysicalStatusType::supported {2, "supported"};
const Enum::YLeaf CefcPhysicalStatusType::unsupported {3, "unsupported"};
const Enum::YLeaf CefcPhysicalStatusType::incompatible {4, "incompatible"};


}
}

