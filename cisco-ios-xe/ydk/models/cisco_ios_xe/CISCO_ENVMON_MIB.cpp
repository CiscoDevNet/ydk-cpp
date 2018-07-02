
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_ENVMON_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_ENVMON_MIB {

CISCOENVMONMIB::CISCOENVMONMIB()
    :
    ciscoenvmonobjects(std::make_shared<CISCOENVMONMIB::CiscoEnvMonObjects>())
    , ciscoenvmonmibnotificationenables(std::make_shared<CISCOENVMONMIB::CiscoEnvMonMIBNotificationEnables>())
    , ciscoenvmonvoltagestatustable(std::make_shared<CISCOENVMONMIB::CiscoEnvMonVoltageStatusTable>())
    , ciscoenvmontemperaturestatustable(std::make_shared<CISCOENVMONMIB::CiscoEnvMonTemperatureStatusTable>())
    , ciscoenvmonfanstatustable(std::make_shared<CISCOENVMONMIB::CiscoEnvMonFanStatusTable>())
    , ciscoenvmonsupplystatustable(std::make_shared<CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable>())
{
    ciscoenvmonobjects->parent = this;
    ciscoenvmonmibnotificationenables->parent = this;
    ciscoenvmonvoltagestatustable->parent = this;
    ciscoenvmontemperaturestatustable->parent = this;
    ciscoenvmonfanstatustable->parent = this;
    ciscoenvmonsupplystatustable->parent = this;

    yang_name = "CISCO-ENVMON-MIB"; yang_parent_name = "CISCO-ENVMON-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOENVMONMIB::~CISCOENVMONMIB()
{
}

bool CISCOENVMONMIB::has_data() const
{
    if (is_presence_container) return true;
    return (ciscoenvmonobjects !=  nullptr && ciscoenvmonobjects->has_data())
	|| (ciscoenvmonmibnotificationenables !=  nullptr && ciscoenvmonmibnotificationenables->has_data())
	|| (ciscoenvmonvoltagestatustable !=  nullptr && ciscoenvmonvoltagestatustable->has_data())
	|| (ciscoenvmontemperaturestatustable !=  nullptr && ciscoenvmontemperaturestatustable->has_data())
	|| (ciscoenvmonfanstatustable !=  nullptr && ciscoenvmonfanstatustable->has_data())
	|| (ciscoenvmonsupplystatustable !=  nullptr && ciscoenvmonsupplystatustable->has_data());
}

bool CISCOENVMONMIB::has_operation() const
{
    return is_set(yfilter)
	|| (ciscoenvmonobjects !=  nullptr && ciscoenvmonobjects->has_operation())
	|| (ciscoenvmonmibnotificationenables !=  nullptr && ciscoenvmonmibnotificationenables->has_operation())
	|| (ciscoenvmonvoltagestatustable !=  nullptr && ciscoenvmonvoltagestatustable->has_operation())
	|| (ciscoenvmontemperaturestatustable !=  nullptr && ciscoenvmontemperaturestatustable->has_operation())
	|| (ciscoenvmonfanstatustable !=  nullptr && ciscoenvmonfanstatustable->has_operation())
	|| (ciscoenvmonsupplystatustable !=  nullptr && ciscoenvmonsupplystatustable->has_operation());
}

std::string CISCOENVMONMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENVMON-MIB:CISCO-ENVMON-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENVMONMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENVMONMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoEnvMonObjects")
    {
        if(ciscoenvmonobjects == nullptr)
        {
            ciscoenvmonobjects = std::make_shared<CISCOENVMONMIB::CiscoEnvMonObjects>();
        }
        return ciscoenvmonobjects;
    }

    if(child_yang_name == "ciscoEnvMonMIBNotificationEnables")
    {
        if(ciscoenvmonmibnotificationenables == nullptr)
        {
            ciscoenvmonmibnotificationenables = std::make_shared<CISCOENVMONMIB::CiscoEnvMonMIBNotificationEnables>();
        }
        return ciscoenvmonmibnotificationenables;
    }

    if(child_yang_name == "ciscoEnvMonVoltageStatusTable")
    {
        if(ciscoenvmonvoltagestatustable == nullptr)
        {
            ciscoenvmonvoltagestatustable = std::make_shared<CISCOENVMONMIB::CiscoEnvMonVoltageStatusTable>();
        }
        return ciscoenvmonvoltagestatustable;
    }

    if(child_yang_name == "ciscoEnvMonTemperatureStatusTable")
    {
        if(ciscoenvmontemperaturestatustable == nullptr)
        {
            ciscoenvmontemperaturestatustable = std::make_shared<CISCOENVMONMIB::CiscoEnvMonTemperatureStatusTable>();
        }
        return ciscoenvmontemperaturestatustable;
    }

    if(child_yang_name == "ciscoEnvMonFanStatusTable")
    {
        if(ciscoenvmonfanstatustable == nullptr)
        {
            ciscoenvmonfanstatustable = std::make_shared<CISCOENVMONMIB::CiscoEnvMonFanStatusTable>();
        }
        return ciscoenvmonfanstatustable;
    }

    if(child_yang_name == "ciscoEnvMonSupplyStatusTable")
    {
        if(ciscoenvmonsupplystatustable == nullptr)
        {
            ciscoenvmonsupplystatustable = std::make_shared<CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable>();
        }
        return ciscoenvmonsupplystatustable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENVMONMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ciscoenvmonobjects != nullptr)
    {
        children["ciscoEnvMonObjects"] = ciscoenvmonobjects;
    }

    if(ciscoenvmonmibnotificationenables != nullptr)
    {
        children["ciscoEnvMonMIBNotificationEnables"] = ciscoenvmonmibnotificationenables;
    }

    if(ciscoenvmonvoltagestatustable != nullptr)
    {
        children["ciscoEnvMonVoltageStatusTable"] = ciscoenvmonvoltagestatustable;
    }

    if(ciscoenvmontemperaturestatustable != nullptr)
    {
        children["ciscoEnvMonTemperatureStatusTable"] = ciscoenvmontemperaturestatustable;
    }

    if(ciscoenvmonfanstatustable != nullptr)
    {
        children["ciscoEnvMonFanStatusTable"] = ciscoenvmonfanstatustable;
    }

    if(ciscoenvmonsupplystatustable != nullptr)
    {
        children["ciscoEnvMonSupplyStatusTable"] = ciscoenvmonsupplystatustable;
    }

    return children;
}

void CISCOENVMONMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENVMONMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOENVMONMIB::clone_ptr() const
{
    return std::make_shared<CISCOENVMONMIB>();
}

std::string CISCOENVMONMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOENVMONMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOENVMONMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOENVMONMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOENVMONMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoEnvMonObjects" || name == "ciscoEnvMonMIBNotificationEnables" || name == "ciscoEnvMonVoltageStatusTable" || name == "ciscoEnvMonTemperatureStatusTable" || name == "ciscoEnvMonFanStatusTable" || name == "ciscoEnvMonSupplyStatusTable")
        return true;
    return false;
}

CISCOENVMONMIB::CiscoEnvMonObjects::CiscoEnvMonObjects()
    :
    ciscoenvmonpresent{YType::enumeration, "ciscoEnvMonPresent"},
    ciscoenvmonalarmcontacts{YType::bits, "ciscoEnvMonAlarmContacts"}
{

    yang_name = "ciscoEnvMonObjects"; yang_parent_name = "CISCO-ENVMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENVMONMIB::CiscoEnvMonObjects::~CiscoEnvMonObjects()
{
}

bool CISCOENVMONMIB::CiscoEnvMonObjects::has_data() const
{
    if (is_presence_container) return true;
    return ciscoenvmonpresent.is_set
	|| ciscoenvmonalarmcontacts.is_set;
}

bool CISCOENVMONMIB::CiscoEnvMonObjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoenvmonpresent.yfilter)
	|| ydk::is_set(ciscoenvmonalarmcontacts.yfilter);
}

std::string CISCOENVMONMIB::CiscoEnvMonObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENVMON-MIB:CISCO-ENVMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENVMONMIB::CiscoEnvMonObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoEnvMonObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENVMONMIB::CiscoEnvMonObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoenvmonpresent.is_set || is_set(ciscoenvmonpresent.yfilter)) leaf_name_data.push_back(ciscoenvmonpresent.get_name_leafdata());
    if (ciscoenvmonalarmcontacts.is_set || is_set(ciscoenvmonalarmcontacts.yfilter)) leaf_name_data.push_back(ciscoenvmonalarmcontacts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENVMONMIB::CiscoEnvMonObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENVMONMIB::CiscoEnvMonObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENVMONMIB::CiscoEnvMonObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoEnvMonPresent")
    {
        ciscoenvmonpresent = value;
        ciscoenvmonpresent.value_namespace = name_space;
        ciscoenvmonpresent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoEnvMonAlarmContacts")
    {
        ciscoenvmonalarmcontacts[value] = true;
    }
}

void CISCOENVMONMIB::CiscoEnvMonObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoEnvMonPresent")
    {
        ciscoenvmonpresent.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonAlarmContacts")
    {
        ciscoenvmonalarmcontacts.yfilter = yfilter;
    }
}

bool CISCOENVMONMIB::CiscoEnvMonObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoEnvMonPresent" || name == "ciscoEnvMonAlarmContacts")
        return true;
    return false;
}

CISCOENVMONMIB::CiscoEnvMonMIBNotificationEnables::CiscoEnvMonMIBNotificationEnables()
    :
    ciscoenvmonenableshutdownnotification{YType::boolean, "ciscoEnvMonEnableShutdownNotification"},
    ciscoenvmonenablevoltagenotification{YType::boolean, "ciscoEnvMonEnableVoltageNotification"},
    ciscoenvmonenabletemperaturenotification{YType::boolean, "ciscoEnvMonEnableTemperatureNotification"},
    ciscoenvmonenablefannotification{YType::boolean, "ciscoEnvMonEnableFanNotification"},
    ciscoenvmonenableredundantsupplynotification{YType::boolean, "ciscoEnvMonEnableRedundantSupplyNotification"},
    ciscoenvmonenablestatchangenotif{YType::boolean, "ciscoEnvMonEnableStatChangeNotif"}
{

    yang_name = "ciscoEnvMonMIBNotificationEnables"; yang_parent_name = "CISCO-ENVMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENVMONMIB::CiscoEnvMonMIBNotificationEnables::~CiscoEnvMonMIBNotificationEnables()
{
}

bool CISCOENVMONMIB::CiscoEnvMonMIBNotificationEnables::has_data() const
{
    if (is_presence_container) return true;
    return ciscoenvmonenableshutdownnotification.is_set
	|| ciscoenvmonenablevoltagenotification.is_set
	|| ciscoenvmonenabletemperaturenotification.is_set
	|| ciscoenvmonenablefannotification.is_set
	|| ciscoenvmonenableredundantsupplynotification.is_set
	|| ciscoenvmonenablestatchangenotif.is_set;
}

bool CISCOENVMONMIB::CiscoEnvMonMIBNotificationEnables::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoenvmonenableshutdownnotification.yfilter)
	|| ydk::is_set(ciscoenvmonenablevoltagenotification.yfilter)
	|| ydk::is_set(ciscoenvmonenabletemperaturenotification.yfilter)
	|| ydk::is_set(ciscoenvmonenablefannotification.yfilter)
	|| ydk::is_set(ciscoenvmonenableredundantsupplynotification.yfilter)
	|| ydk::is_set(ciscoenvmonenablestatchangenotif.yfilter);
}

std::string CISCOENVMONMIB::CiscoEnvMonMIBNotificationEnables::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENVMON-MIB:CISCO-ENVMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENVMONMIB::CiscoEnvMonMIBNotificationEnables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoEnvMonMIBNotificationEnables";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENVMONMIB::CiscoEnvMonMIBNotificationEnables::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoenvmonenableshutdownnotification.is_set || is_set(ciscoenvmonenableshutdownnotification.yfilter)) leaf_name_data.push_back(ciscoenvmonenableshutdownnotification.get_name_leafdata());
    if (ciscoenvmonenablevoltagenotification.is_set || is_set(ciscoenvmonenablevoltagenotification.yfilter)) leaf_name_data.push_back(ciscoenvmonenablevoltagenotification.get_name_leafdata());
    if (ciscoenvmonenabletemperaturenotification.is_set || is_set(ciscoenvmonenabletemperaturenotification.yfilter)) leaf_name_data.push_back(ciscoenvmonenabletemperaturenotification.get_name_leafdata());
    if (ciscoenvmonenablefannotification.is_set || is_set(ciscoenvmonenablefannotification.yfilter)) leaf_name_data.push_back(ciscoenvmonenablefannotification.get_name_leafdata());
    if (ciscoenvmonenableredundantsupplynotification.is_set || is_set(ciscoenvmonenableredundantsupplynotification.yfilter)) leaf_name_data.push_back(ciscoenvmonenableredundantsupplynotification.get_name_leafdata());
    if (ciscoenvmonenablestatchangenotif.is_set || is_set(ciscoenvmonenablestatchangenotif.yfilter)) leaf_name_data.push_back(ciscoenvmonenablestatchangenotif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENVMONMIB::CiscoEnvMonMIBNotificationEnables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENVMONMIB::CiscoEnvMonMIBNotificationEnables::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENVMONMIB::CiscoEnvMonMIBNotificationEnables::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoEnvMonEnableShutdownNotification")
    {
        ciscoenvmonenableshutdownnotification = value;
        ciscoenvmonenableshutdownnotification.value_namespace = name_space;
        ciscoenvmonenableshutdownnotification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoEnvMonEnableVoltageNotification")
    {
        ciscoenvmonenablevoltagenotification = value;
        ciscoenvmonenablevoltagenotification.value_namespace = name_space;
        ciscoenvmonenablevoltagenotification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoEnvMonEnableTemperatureNotification")
    {
        ciscoenvmonenabletemperaturenotification = value;
        ciscoenvmonenabletemperaturenotification.value_namespace = name_space;
        ciscoenvmonenabletemperaturenotification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoEnvMonEnableFanNotification")
    {
        ciscoenvmonenablefannotification = value;
        ciscoenvmonenablefannotification.value_namespace = name_space;
        ciscoenvmonenablefannotification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoEnvMonEnableRedundantSupplyNotification")
    {
        ciscoenvmonenableredundantsupplynotification = value;
        ciscoenvmonenableredundantsupplynotification.value_namespace = name_space;
        ciscoenvmonenableredundantsupplynotification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoEnvMonEnableStatChangeNotif")
    {
        ciscoenvmonenablestatchangenotif = value;
        ciscoenvmonenablestatchangenotif.value_namespace = name_space;
        ciscoenvmonenablestatchangenotif.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENVMONMIB::CiscoEnvMonMIBNotificationEnables::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoEnvMonEnableShutdownNotification")
    {
        ciscoenvmonenableshutdownnotification.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonEnableVoltageNotification")
    {
        ciscoenvmonenablevoltagenotification.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonEnableTemperatureNotification")
    {
        ciscoenvmonenabletemperaturenotification.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonEnableFanNotification")
    {
        ciscoenvmonenablefannotification.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonEnableRedundantSupplyNotification")
    {
        ciscoenvmonenableredundantsupplynotification.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonEnableStatChangeNotif")
    {
        ciscoenvmonenablestatchangenotif.yfilter = yfilter;
    }
}

bool CISCOENVMONMIB::CiscoEnvMonMIBNotificationEnables::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoEnvMonEnableShutdownNotification" || name == "ciscoEnvMonEnableVoltageNotification" || name == "ciscoEnvMonEnableTemperatureNotification" || name == "ciscoEnvMonEnableFanNotification" || name == "ciscoEnvMonEnableRedundantSupplyNotification" || name == "ciscoEnvMonEnableStatChangeNotif")
        return true;
    return false;
}

CISCOENVMONMIB::CiscoEnvMonVoltageStatusTable::CiscoEnvMonVoltageStatusTable()
    :
    ciscoenvmonvoltagestatusentry(this, {"ciscoenvmonvoltagestatusindex"})
{

    yang_name = "ciscoEnvMonVoltageStatusTable"; yang_parent_name = "CISCO-ENVMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENVMONMIB::CiscoEnvMonVoltageStatusTable::~CiscoEnvMonVoltageStatusTable()
{
}

bool CISCOENVMONMIB::CiscoEnvMonVoltageStatusTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciscoenvmonvoltagestatusentry.len(); index++)
    {
        if(ciscoenvmonvoltagestatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENVMONMIB::CiscoEnvMonVoltageStatusTable::has_operation() const
{
    for (std::size_t index=0; index<ciscoenvmonvoltagestatusentry.len(); index++)
    {
        if(ciscoenvmonvoltagestatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENVMONMIB::CiscoEnvMonVoltageStatusTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENVMON-MIB:CISCO-ENVMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENVMONMIB::CiscoEnvMonVoltageStatusTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoEnvMonVoltageStatusTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENVMONMIB::CiscoEnvMonVoltageStatusTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENVMONMIB::CiscoEnvMonVoltageStatusTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoEnvMonVoltageStatusEntry")
    {
        auto c = std::make_shared<CISCOENVMONMIB::CiscoEnvMonVoltageStatusTable::CiscoEnvMonVoltageStatusEntry>();
        c->parent = this;
        ciscoenvmonvoltagestatusentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENVMONMIB::CiscoEnvMonVoltageStatusTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ciscoenvmonvoltagestatusentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENVMONMIB::CiscoEnvMonVoltageStatusTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENVMONMIB::CiscoEnvMonVoltageStatusTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENVMONMIB::CiscoEnvMonVoltageStatusTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoEnvMonVoltageStatusEntry")
        return true;
    return false;
}

CISCOENVMONMIB::CiscoEnvMonVoltageStatusTable::CiscoEnvMonVoltageStatusEntry::CiscoEnvMonVoltageStatusEntry()
    :
    ciscoenvmonvoltagestatusindex{YType::int32, "ciscoEnvMonVoltageStatusIndex"},
    ciscoenvmonvoltagestatusdescr{YType::str, "ciscoEnvMonVoltageStatusDescr"},
    ciscoenvmonvoltagestatusvalue{YType::int32, "ciscoEnvMonVoltageStatusValue"},
    ciscoenvmonvoltagethresholdlow{YType::int32, "ciscoEnvMonVoltageThresholdLow"},
    ciscoenvmonvoltagethresholdhigh{YType::int32, "ciscoEnvMonVoltageThresholdHigh"},
    ciscoenvmonvoltagelastshutdown{YType::int32, "ciscoEnvMonVoltageLastShutdown"},
    ciscoenvmonvoltagestate{YType::enumeration, "ciscoEnvMonVoltageState"}
{

    yang_name = "ciscoEnvMonVoltageStatusEntry"; yang_parent_name = "ciscoEnvMonVoltageStatusTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENVMONMIB::CiscoEnvMonVoltageStatusTable::CiscoEnvMonVoltageStatusEntry::~CiscoEnvMonVoltageStatusEntry()
{
}

bool CISCOENVMONMIB::CiscoEnvMonVoltageStatusTable::CiscoEnvMonVoltageStatusEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciscoenvmonvoltagestatusindex.is_set
	|| ciscoenvmonvoltagestatusdescr.is_set
	|| ciscoenvmonvoltagestatusvalue.is_set
	|| ciscoenvmonvoltagethresholdlow.is_set
	|| ciscoenvmonvoltagethresholdhigh.is_set
	|| ciscoenvmonvoltagelastshutdown.is_set
	|| ciscoenvmonvoltagestate.is_set;
}

bool CISCOENVMONMIB::CiscoEnvMonVoltageStatusTable::CiscoEnvMonVoltageStatusEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoenvmonvoltagestatusindex.yfilter)
	|| ydk::is_set(ciscoenvmonvoltagestatusdescr.yfilter)
	|| ydk::is_set(ciscoenvmonvoltagestatusvalue.yfilter)
	|| ydk::is_set(ciscoenvmonvoltagethresholdlow.yfilter)
	|| ydk::is_set(ciscoenvmonvoltagethresholdhigh.yfilter)
	|| ydk::is_set(ciscoenvmonvoltagelastshutdown.yfilter)
	|| ydk::is_set(ciscoenvmonvoltagestate.yfilter);
}

std::string CISCOENVMONMIB::CiscoEnvMonVoltageStatusTable::CiscoEnvMonVoltageStatusEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENVMON-MIB:CISCO-ENVMON-MIB/ciscoEnvMonVoltageStatusTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENVMONMIB::CiscoEnvMonVoltageStatusTable::CiscoEnvMonVoltageStatusEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoEnvMonVoltageStatusEntry";
    ADD_KEY_TOKEN(ciscoenvmonvoltagestatusindex, "ciscoEnvMonVoltageStatusIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENVMONMIB::CiscoEnvMonVoltageStatusTable::CiscoEnvMonVoltageStatusEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoenvmonvoltagestatusindex.is_set || is_set(ciscoenvmonvoltagestatusindex.yfilter)) leaf_name_data.push_back(ciscoenvmonvoltagestatusindex.get_name_leafdata());
    if (ciscoenvmonvoltagestatusdescr.is_set || is_set(ciscoenvmonvoltagestatusdescr.yfilter)) leaf_name_data.push_back(ciscoenvmonvoltagestatusdescr.get_name_leafdata());
    if (ciscoenvmonvoltagestatusvalue.is_set || is_set(ciscoenvmonvoltagestatusvalue.yfilter)) leaf_name_data.push_back(ciscoenvmonvoltagestatusvalue.get_name_leafdata());
    if (ciscoenvmonvoltagethresholdlow.is_set || is_set(ciscoenvmonvoltagethresholdlow.yfilter)) leaf_name_data.push_back(ciscoenvmonvoltagethresholdlow.get_name_leafdata());
    if (ciscoenvmonvoltagethresholdhigh.is_set || is_set(ciscoenvmonvoltagethresholdhigh.yfilter)) leaf_name_data.push_back(ciscoenvmonvoltagethresholdhigh.get_name_leafdata());
    if (ciscoenvmonvoltagelastshutdown.is_set || is_set(ciscoenvmonvoltagelastshutdown.yfilter)) leaf_name_data.push_back(ciscoenvmonvoltagelastshutdown.get_name_leafdata());
    if (ciscoenvmonvoltagestate.is_set || is_set(ciscoenvmonvoltagestate.yfilter)) leaf_name_data.push_back(ciscoenvmonvoltagestate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENVMONMIB::CiscoEnvMonVoltageStatusTable::CiscoEnvMonVoltageStatusEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENVMONMIB::CiscoEnvMonVoltageStatusTable::CiscoEnvMonVoltageStatusEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENVMONMIB::CiscoEnvMonVoltageStatusTable::CiscoEnvMonVoltageStatusEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoEnvMonVoltageStatusIndex")
    {
        ciscoenvmonvoltagestatusindex = value;
        ciscoenvmonvoltagestatusindex.value_namespace = name_space;
        ciscoenvmonvoltagestatusindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoEnvMonVoltageStatusDescr")
    {
        ciscoenvmonvoltagestatusdescr = value;
        ciscoenvmonvoltagestatusdescr.value_namespace = name_space;
        ciscoenvmonvoltagestatusdescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoEnvMonVoltageStatusValue")
    {
        ciscoenvmonvoltagestatusvalue = value;
        ciscoenvmonvoltagestatusvalue.value_namespace = name_space;
        ciscoenvmonvoltagestatusvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoEnvMonVoltageThresholdLow")
    {
        ciscoenvmonvoltagethresholdlow = value;
        ciscoenvmonvoltagethresholdlow.value_namespace = name_space;
        ciscoenvmonvoltagethresholdlow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoEnvMonVoltageThresholdHigh")
    {
        ciscoenvmonvoltagethresholdhigh = value;
        ciscoenvmonvoltagethresholdhigh.value_namespace = name_space;
        ciscoenvmonvoltagethresholdhigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoEnvMonVoltageLastShutdown")
    {
        ciscoenvmonvoltagelastshutdown = value;
        ciscoenvmonvoltagelastshutdown.value_namespace = name_space;
        ciscoenvmonvoltagelastshutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoEnvMonVoltageState")
    {
        ciscoenvmonvoltagestate = value;
        ciscoenvmonvoltagestate.value_namespace = name_space;
        ciscoenvmonvoltagestate.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENVMONMIB::CiscoEnvMonVoltageStatusTable::CiscoEnvMonVoltageStatusEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoEnvMonVoltageStatusIndex")
    {
        ciscoenvmonvoltagestatusindex.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonVoltageStatusDescr")
    {
        ciscoenvmonvoltagestatusdescr.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonVoltageStatusValue")
    {
        ciscoenvmonvoltagestatusvalue.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonVoltageThresholdLow")
    {
        ciscoenvmonvoltagethresholdlow.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonVoltageThresholdHigh")
    {
        ciscoenvmonvoltagethresholdhigh.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonVoltageLastShutdown")
    {
        ciscoenvmonvoltagelastshutdown.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonVoltageState")
    {
        ciscoenvmonvoltagestate.yfilter = yfilter;
    }
}

bool CISCOENVMONMIB::CiscoEnvMonVoltageStatusTable::CiscoEnvMonVoltageStatusEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoEnvMonVoltageStatusIndex" || name == "ciscoEnvMonVoltageStatusDescr" || name == "ciscoEnvMonVoltageStatusValue" || name == "ciscoEnvMonVoltageThresholdLow" || name == "ciscoEnvMonVoltageThresholdHigh" || name == "ciscoEnvMonVoltageLastShutdown" || name == "ciscoEnvMonVoltageState")
        return true;
    return false;
}

CISCOENVMONMIB::CiscoEnvMonTemperatureStatusTable::CiscoEnvMonTemperatureStatusTable()
    :
    ciscoenvmontemperaturestatusentry(this, {"ciscoenvmontemperaturestatusindex"})
{

    yang_name = "ciscoEnvMonTemperatureStatusTable"; yang_parent_name = "CISCO-ENVMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENVMONMIB::CiscoEnvMonTemperatureStatusTable::~CiscoEnvMonTemperatureStatusTable()
{
}

bool CISCOENVMONMIB::CiscoEnvMonTemperatureStatusTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciscoenvmontemperaturestatusentry.len(); index++)
    {
        if(ciscoenvmontemperaturestatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENVMONMIB::CiscoEnvMonTemperatureStatusTable::has_operation() const
{
    for (std::size_t index=0; index<ciscoenvmontemperaturestatusentry.len(); index++)
    {
        if(ciscoenvmontemperaturestatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENVMONMIB::CiscoEnvMonTemperatureStatusTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENVMON-MIB:CISCO-ENVMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENVMONMIB::CiscoEnvMonTemperatureStatusTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoEnvMonTemperatureStatusTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENVMONMIB::CiscoEnvMonTemperatureStatusTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENVMONMIB::CiscoEnvMonTemperatureStatusTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoEnvMonTemperatureStatusEntry")
    {
        auto c = std::make_shared<CISCOENVMONMIB::CiscoEnvMonTemperatureStatusTable::CiscoEnvMonTemperatureStatusEntry>();
        c->parent = this;
        ciscoenvmontemperaturestatusentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENVMONMIB::CiscoEnvMonTemperatureStatusTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ciscoenvmontemperaturestatusentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENVMONMIB::CiscoEnvMonTemperatureStatusTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENVMONMIB::CiscoEnvMonTemperatureStatusTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENVMONMIB::CiscoEnvMonTemperatureStatusTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoEnvMonTemperatureStatusEntry")
        return true;
    return false;
}

CISCOENVMONMIB::CiscoEnvMonTemperatureStatusTable::CiscoEnvMonTemperatureStatusEntry::CiscoEnvMonTemperatureStatusEntry()
    :
    ciscoenvmontemperaturestatusindex{YType::int32, "ciscoEnvMonTemperatureStatusIndex"},
    ciscoenvmontemperaturestatusdescr{YType::str, "ciscoEnvMonTemperatureStatusDescr"},
    ciscoenvmontemperaturestatusvalue{YType::uint32, "ciscoEnvMonTemperatureStatusValue"},
    ciscoenvmontemperaturethreshold{YType::int32, "ciscoEnvMonTemperatureThreshold"},
    ciscoenvmontemperaturelastshutdown{YType::int32, "ciscoEnvMonTemperatureLastShutdown"},
    ciscoenvmontemperaturestate{YType::enumeration, "ciscoEnvMonTemperatureState"}
{

    yang_name = "ciscoEnvMonTemperatureStatusEntry"; yang_parent_name = "ciscoEnvMonTemperatureStatusTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENVMONMIB::CiscoEnvMonTemperatureStatusTable::CiscoEnvMonTemperatureStatusEntry::~CiscoEnvMonTemperatureStatusEntry()
{
}

bool CISCOENVMONMIB::CiscoEnvMonTemperatureStatusTable::CiscoEnvMonTemperatureStatusEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciscoenvmontemperaturestatusindex.is_set
	|| ciscoenvmontemperaturestatusdescr.is_set
	|| ciscoenvmontemperaturestatusvalue.is_set
	|| ciscoenvmontemperaturethreshold.is_set
	|| ciscoenvmontemperaturelastshutdown.is_set
	|| ciscoenvmontemperaturestate.is_set;
}

bool CISCOENVMONMIB::CiscoEnvMonTemperatureStatusTable::CiscoEnvMonTemperatureStatusEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoenvmontemperaturestatusindex.yfilter)
	|| ydk::is_set(ciscoenvmontemperaturestatusdescr.yfilter)
	|| ydk::is_set(ciscoenvmontemperaturestatusvalue.yfilter)
	|| ydk::is_set(ciscoenvmontemperaturethreshold.yfilter)
	|| ydk::is_set(ciscoenvmontemperaturelastshutdown.yfilter)
	|| ydk::is_set(ciscoenvmontemperaturestate.yfilter);
}

std::string CISCOENVMONMIB::CiscoEnvMonTemperatureStatusTable::CiscoEnvMonTemperatureStatusEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENVMON-MIB:CISCO-ENVMON-MIB/ciscoEnvMonTemperatureStatusTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENVMONMIB::CiscoEnvMonTemperatureStatusTable::CiscoEnvMonTemperatureStatusEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoEnvMonTemperatureStatusEntry";
    ADD_KEY_TOKEN(ciscoenvmontemperaturestatusindex, "ciscoEnvMonTemperatureStatusIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENVMONMIB::CiscoEnvMonTemperatureStatusTable::CiscoEnvMonTemperatureStatusEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoenvmontemperaturestatusindex.is_set || is_set(ciscoenvmontemperaturestatusindex.yfilter)) leaf_name_data.push_back(ciscoenvmontemperaturestatusindex.get_name_leafdata());
    if (ciscoenvmontemperaturestatusdescr.is_set || is_set(ciscoenvmontemperaturestatusdescr.yfilter)) leaf_name_data.push_back(ciscoenvmontemperaturestatusdescr.get_name_leafdata());
    if (ciscoenvmontemperaturestatusvalue.is_set || is_set(ciscoenvmontemperaturestatusvalue.yfilter)) leaf_name_data.push_back(ciscoenvmontemperaturestatusvalue.get_name_leafdata());
    if (ciscoenvmontemperaturethreshold.is_set || is_set(ciscoenvmontemperaturethreshold.yfilter)) leaf_name_data.push_back(ciscoenvmontemperaturethreshold.get_name_leafdata());
    if (ciscoenvmontemperaturelastshutdown.is_set || is_set(ciscoenvmontemperaturelastshutdown.yfilter)) leaf_name_data.push_back(ciscoenvmontemperaturelastshutdown.get_name_leafdata());
    if (ciscoenvmontemperaturestate.is_set || is_set(ciscoenvmontemperaturestate.yfilter)) leaf_name_data.push_back(ciscoenvmontemperaturestate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENVMONMIB::CiscoEnvMonTemperatureStatusTable::CiscoEnvMonTemperatureStatusEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENVMONMIB::CiscoEnvMonTemperatureStatusTable::CiscoEnvMonTemperatureStatusEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENVMONMIB::CiscoEnvMonTemperatureStatusTable::CiscoEnvMonTemperatureStatusEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoEnvMonTemperatureStatusIndex")
    {
        ciscoenvmontemperaturestatusindex = value;
        ciscoenvmontemperaturestatusindex.value_namespace = name_space;
        ciscoenvmontemperaturestatusindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoEnvMonTemperatureStatusDescr")
    {
        ciscoenvmontemperaturestatusdescr = value;
        ciscoenvmontemperaturestatusdescr.value_namespace = name_space;
        ciscoenvmontemperaturestatusdescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoEnvMonTemperatureStatusValue")
    {
        ciscoenvmontemperaturestatusvalue = value;
        ciscoenvmontemperaturestatusvalue.value_namespace = name_space;
        ciscoenvmontemperaturestatusvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoEnvMonTemperatureThreshold")
    {
        ciscoenvmontemperaturethreshold = value;
        ciscoenvmontemperaturethreshold.value_namespace = name_space;
        ciscoenvmontemperaturethreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoEnvMonTemperatureLastShutdown")
    {
        ciscoenvmontemperaturelastshutdown = value;
        ciscoenvmontemperaturelastshutdown.value_namespace = name_space;
        ciscoenvmontemperaturelastshutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoEnvMonTemperatureState")
    {
        ciscoenvmontemperaturestate = value;
        ciscoenvmontemperaturestate.value_namespace = name_space;
        ciscoenvmontemperaturestate.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENVMONMIB::CiscoEnvMonTemperatureStatusTable::CiscoEnvMonTemperatureStatusEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoEnvMonTemperatureStatusIndex")
    {
        ciscoenvmontemperaturestatusindex.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonTemperatureStatusDescr")
    {
        ciscoenvmontemperaturestatusdescr.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonTemperatureStatusValue")
    {
        ciscoenvmontemperaturestatusvalue.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonTemperatureThreshold")
    {
        ciscoenvmontemperaturethreshold.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonTemperatureLastShutdown")
    {
        ciscoenvmontemperaturelastshutdown.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonTemperatureState")
    {
        ciscoenvmontemperaturestate.yfilter = yfilter;
    }
}

bool CISCOENVMONMIB::CiscoEnvMonTemperatureStatusTable::CiscoEnvMonTemperatureStatusEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoEnvMonTemperatureStatusIndex" || name == "ciscoEnvMonTemperatureStatusDescr" || name == "ciscoEnvMonTemperatureStatusValue" || name == "ciscoEnvMonTemperatureThreshold" || name == "ciscoEnvMonTemperatureLastShutdown" || name == "ciscoEnvMonTemperatureState")
        return true;
    return false;
}

CISCOENVMONMIB::CiscoEnvMonFanStatusTable::CiscoEnvMonFanStatusTable()
    :
    ciscoenvmonfanstatusentry(this, {"ciscoenvmonfanstatusindex"})
{

    yang_name = "ciscoEnvMonFanStatusTable"; yang_parent_name = "CISCO-ENVMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENVMONMIB::CiscoEnvMonFanStatusTable::~CiscoEnvMonFanStatusTable()
{
}

bool CISCOENVMONMIB::CiscoEnvMonFanStatusTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciscoenvmonfanstatusentry.len(); index++)
    {
        if(ciscoenvmonfanstatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENVMONMIB::CiscoEnvMonFanStatusTable::has_operation() const
{
    for (std::size_t index=0; index<ciscoenvmonfanstatusentry.len(); index++)
    {
        if(ciscoenvmonfanstatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENVMONMIB::CiscoEnvMonFanStatusTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENVMON-MIB:CISCO-ENVMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENVMONMIB::CiscoEnvMonFanStatusTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoEnvMonFanStatusTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENVMONMIB::CiscoEnvMonFanStatusTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENVMONMIB::CiscoEnvMonFanStatusTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoEnvMonFanStatusEntry")
    {
        auto c = std::make_shared<CISCOENVMONMIB::CiscoEnvMonFanStatusTable::CiscoEnvMonFanStatusEntry>();
        c->parent = this;
        ciscoenvmonfanstatusentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENVMONMIB::CiscoEnvMonFanStatusTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ciscoenvmonfanstatusentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENVMONMIB::CiscoEnvMonFanStatusTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENVMONMIB::CiscoEnvMonFanStatusTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENVMONMIB::CiscoEnvMonFanStatusTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoEnvMonFanStatusEntry")
        return true;
    return false;
}

CISCOENVMONMIB::CiscoEnvMonFanStatusTable::CiscoEnvMonFanStatusEntry::CiscoEnvMonFanStatusEntry()
    :
    ciscoenvmonfanstatusindex{YType::int32, "ciscoEnvMonFanStatusIndex"},
    ciscoenvmonfanstatusdescr{YType::str, "ciscoEnvMonFanStatusDescr"},
    ciscoenvmonfanstate{YType::enumeration, "ciscoEnvMonFanState"}
{

    yang_name = "ciscoEnvMonFanStatusEntry"; yang_parent_name = "ciscoEnvMonFanStatusTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENVMONMIB::CiscoEnvMonFanStatusTable::CiscoEnvMonFanStatusEntry::~CiscoEnvMonFanStatusEntry()
{
}

bool CISCOENVMONMIB::CiscoEnvMonFanStatusTable::CiscoEnvMonFanStatusEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciscoenvmonfanstatusindex.is_set
	|| ciscoenvmonfanstatusdescr.is_set
	|| ciscoenvmonfanstate.is_set;
}

bool CISCOENVMONMIB::CiscoEnvMonFanStatusTable::CiscoEnvMonFanStatusEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoenvmonfanstatusindex.yfilter)
	|| ydk::is_set(ciscoenvmonfanstatusdescr.yfilter)
	|| ydk::is_set(ciscoenvmonfanstate.yfilter);
}

std::string CISCOENVMONMIB::CiscoEnvMonFanStatusTable::CiscoEnvMonFanStatusEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENVMON-MIB:CISCO-ENVMON-MIB/ciscoEnvMonFanStatusTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENVMONMIB::CiscoEnvMonFanStatusTable::CiscoEnvMonFanStatusEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoEnvMonFanStatusEntry";
    ADD_KEY_TOKEN(ciscoenvmonfanstatusindex, "ciscoEnvMonFanStatusIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENVMONMIB::CiscoEnvMonFanStatusTable::CiscoEnvMonFanStatusEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoenvmonfanstatusindex.is_set || is_set(ciscoenvmonfanstatusindex.yfilter)) leaf_name_data.push_back(ciscoenvmonfanstatusindex.get_name_leafdata());
    if (ciscoenvmonfanstatusdescr.is_set || is_set(ciscoenvmonfanstatusdescr.yfilter)) leaf_name_data.push_back(ciscoenvmonfanstatusdescr.get_name_leafdata());
    if (ciscoenvmonfanstate.is_set || is_set(ciscoenvmonfanstate.yfilter)) leaf_name_data.push_back(ciscoenvmonfanstate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENVMONMIB::CiscoEnvMonFanStatusTable::CiscoEnvMonFanStatusEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENVMONMIB::CiscoEnvMonFanStatusTable::CiscoEnvMonFanStatusEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENVMONMIB::CiscoEnvMonFanStatusTable::CiscoEnvMonFanStatusEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoEnvMonFanStatusIndex")
    {
        ciscoenvmonfanstatusindex = value;
        ciscoenvmonfanstatusindex.value_namespace = name_space;
        ciscoenvmonfanstatusindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoEnvMonFanStatusDescr")
    {
        ciscoenvmonfanstatusdescr = value;
        ciscoenvmonfanstatusdescr.value_namespace = name_space;
        ciscoenvmonfanstatusdescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoEnvMonFanState")
    {
        ciscoenvmonfanstate = value;
        ciscoenvmonfanstate.value_namespace = name_space;
        ciscoenvmonfanstate.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENVMONMIB::CiscoEnvMonFanStatusTable::CiscoEnvMonFanStatusEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoEnvMonFanStatusIndex")
    {
        ciscoenvmonfanstatusindex.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonFanStatusDescr")
    {
        ciscoenvmonfanstatusdescr.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonFanState")
    {
        ciscoenvmonfanstate.yfilter = yfilter;
    }
}

bool CISCOENVMONMIB::CiscoEnvMonFanStatusTable::CiscoEnvMonFanStatusEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoEnvMonFanStatusIndex" || name == "ciscoEnvMonFanStatusDescr" || name == "ciscoEnvMonFanState")
        return true;
    return false;
}

CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable::CiscoEnvMonSupplyStatusTable()
    :
    ciscoenvmonsupplystatusentry(this, {"ciscoenvmonsupplystatusindex"})
{

    yang_name = "ciscoEnvMonSupplyStatusTable"; yang_parent_name = "CISCO-ENVMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable::~CiscoEnvMonSupplyStatusTable()
{
}

bool CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciscoenvmonsupplystatusentry.len(); index++)
    {
        if(ciscoenvmonsupplystatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable::has_operation() const
{
    for (std::size_t index=0; index<ciscoenvmonsupplystatusentry.len(); index++)
    {
        if(ciscoenvmonsupplystatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENVMON-MIB:CISCO-ENVMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoEnvMonSupplyStatusTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoEnvMonSupplyStatusEntry")
    {
        auto c = std::make_shared<CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable::CiscoEnvMonSupplyStatusEntry>();
        c->parent = this;
        ciscoenvmonsupplystatusentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ciscoenvmonsupplystatusentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoEnvMonSupplyStatusEntry")
        return true;
    return false;
}

CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable::CiscoEnvMonSupplyStatusEntry::CiscoEnvMonSupplyStatusEntry()
    :
    ciscoenvmonsupplystatusindex{YType::int32, "ciscoEnvMonSupplyStatusIndex"},
    ciscoenvmonsupplystatusdescr{YType::str, "ciscoEnvMonSupplyStatusDescr"},
    ciscoenvmonsupplystate{YType::enumeration, "ciscoEnvMonSupplyState"},
    ciscoenvmonsupplysource{YType::enumeration, "ciscoEnvMonSupplySource"}
{

    yang_name = "ciscoEnvMonSupplyStatusEntry"; yang_parent_name = "ciscoEnvMonSupplyStatusTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable::CiscoEnvMonSupplyStatusEntry::~CiscoEnvMonSupplyStatusEntry()
{
}

bool CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable::CiscoEnvMonSupplyStatusEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciscoenvmonsupplystatusindex.is_set
	|| ciscoenvmonsupplystatusdescr.is_set
	|| ciscoenvmonsupplystate.is_set
	|| ciscoenvmonsupplysource.is_set;
}

bool CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable::CiscoEnvMonSupplyStatusEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoenvmonsupplystatusindex.yfilter)
	|| ydk::is_set(ciscoenvmonsupplystatusdescr.yfilter)
	|| ydk::is_set(ciscoenvmonsupplystate.yfilter)
	|| ydk::is_set(ciscoenvmonsupplysource.yfilter);
}

std::string CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable::CiscoEnvMonSupplyStatusEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENVMON-MIB:CISCO-ENVMON-MIB/ciscoEnvMonSupplyStatusTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable::CiscoEnvMonSupplyStatusEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoEnvMonSupplyStatusEntry";
    ADD_KEY_TOKEN(ciscoenvmonsupplystatusindex, "ciscoEnvMonSupplyStatusIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable::CiscoEnvMonSupplyStatusEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoenvmonsupplystatusindex.is_set || is_set(ciscoenvmonsupplystatusindex.yfilter)) leaf_name_data.push_back(ciscoenvmonsupplystatusindex.get_name_leafdata());
    if (ciscoenvmonsupplystatusdescr.is_set || is_set(ciscoenvmonsupplystatusdescr.yfilter)) leaf_name_data.push_back(ciscoenvmonsupplystatusdescr.get_name_leafdata());
    if (ciscoenvmonsupplystate.is_set || is_set(ciscoenvmonsupplystate.yfilter)) leaf_name_data.push_back(ciscoenvmonsupplystate.get_name_leafdata());
    if (ciscoenvmonsupplysource.is_set || is_set(ciscoenvmonsupplysource.yfilter)) leaf_name_data.push_back(ciscoenvmonsupplysource.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable::CiscoEnvMonSupplyStatusEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable::CiscoEnvMonSupplyStatusEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable::CiscoEnvMonSupplyStatusEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoEnvMonSupplyStatusIndex")
    {
        ciscoenvmonsupplystatusindex = value;
        ciscoenvmonsupplystatusindex.value_namespace = name_space;
        ciscoenvmonsupplystatusindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoEnvMonSupplyStatusDescr")
    {
        ciscoenvmonsupplystatusdescr = value;
        ciscoenvmonsupplystatusdescr.value_namespace = name_space;
        ciscoenvmonsupplystatusdescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoEnvMonSupplyState")
    {
        ciscoenvmonsupplystate = value;
        ciscoenvmonsupplystate.value_namespace = name_space;
        ciscoenvmonsupplystate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoEnvMonSupplySource")
    {
        ciscoenvmonsupplysource = value;
        ciscoenvmonsupplysource.value_namespace = name_space;
        ciscoenvmonsupplysource.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable::CiscoEnvMonSupplyStatusEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoEnvMonSupplyStatusIndex")
    {
        ciscoenvmonsupplystatusindex.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonSupplyStatusDescr")
    {
        ciscoenvmonsupplystatusdescr.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonSupplyState")
    {
        ciscoenvmonsupplystate.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonSupplySource")
    {
        ciscoenvmonsupplysource.yfilter = yfilter;
    }
}

bool CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable::CiscoEnvMonSupplyStatusEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoEnvMonSupplyStatusIndex" || name == "ciscoEnvMonSupplyStatusDescr" || name == "ciscoEnvMonSupplyState" || name == "ciscoEnvMonSupplySource")
        return true;
    return false;
}

const Enum::YLeaf CiscoEnvMonState::normal {1, "normal"};
const Enum::YLeaf CiscoEnvMonState::warning {2, "warning"};
const Enum::YLeaf CiscoEnvMonState::critical {3, "critical"};
const Enum::YLeaf CiscoEnvMonState::shutdown {4, "shutdown"};
const Enum::YLeaf CiscoEnvMonState::notPresent {5, "notPresent"};
const Enum::YLeaf CiscoEnvMonState::notFunctioning {6, "notFunctioning"};

const Enum::YLeaf CISCOENVMONMIB::CiscoEnvMonObjects::CiscoEnvMonPresent::oldAgs {1, "oldAgs"};
const Enum::YLeaf CISCOENVMONMIB::CiscoEnvMonObjects::CiscoEnvMonPresent::ags {2, "ags"};
const Enum::YLeaf CISCOENVMONMIB::CiscoEnvMonObjects::CiscoEnvMonPresent::c7000 {3, "c7000"};
const Enum::YLeaf CISCOENVMONMIB::CiscoEnvMonObjects::CiscoEnvMonPresent::ci {4, "ci"};
const Enum::YLeaf CISCOENVMONMIB::CiscoEnvMonObjects::CiscoEnvMonPresent::cAccessMon {6, "cAccessMon"};
const Enum::YLeaf CISCOENVMONMIB::CiscoEnvMonObjects::CiscoEnvMonPresent::cat6000 {7, "cat6000"};
const Enum::YLeaf CISCOENVMONMIB::CiscoEnvMonObjects::CiscoEnvMonPresent::ubr7200 {8, "ubr7200"};
const Enum::YLeaf CISCOENVMONMIB::CiscoEnvMonObjects::CiscoEnvMonPresent::cat4000 {9, "cat4000"};
const Enum::YLeaf CISCOENVMONMIB::CiscoEnvMonObjects::CiscoEnvMonPresent::c10000 {10, "c10000"};
const Enum::YLeaf CISCOENVMONMIB::CiscoEnvMonObjects::CiscoEnvMonPresent::osr7600 {11, "osr7600"};
const Enum::YLeaf CISCOENVMONMIB::CiscoEnvMonObjects::CiscoEnvMonPresent::c7600 {12, "c7600"};
const Enum::YLeaf CISCOENVMONMIB::CiscoEnvMonObjects::CiscoEnvMonPresent::c37xx {13, "c37xx"};
const Enum::YLeaf CISCOENVMONMIB::CiscoEnvMonObjects::CiscoEnvMonPresent::other {14, "other"};

const Enum::YLeaf CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable::CiscoEnvMonSupplyStatusEntry::CiscoEnvMonSupplySource::unknown {1, "unknown"};
const Enum::YLeaf CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable::CiscoEnvMonSupplyStatusEntry::CiscoEnvMonSupplySource::ac {2, "ac"};
const Enum::YLeaf CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable::CiscoEnvMonSupplyStatusEntry::CiscoEnvMonSupplySource::dc {3, "dc"};
const Enum::YLeaf CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable::CiscoEnvMonSupplyStatusEntry::CiscoEnvMonSupplySource::externalPowerSupply {4, "externalPowerSupply"};
const Enum::YLeaf CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable::CiscoEnvMonSupplyStatusEntry::CiscoEnvMonSupplySource::internalRedundant {5, "internalRedundant"};


}
}

