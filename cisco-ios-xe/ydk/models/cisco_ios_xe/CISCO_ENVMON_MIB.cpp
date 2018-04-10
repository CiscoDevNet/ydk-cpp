
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
    ciscoenvmonobjects(std::make_shared<CISCOENVMONMIB::Ciscoenvmonobjects>())
	,ciscoenvmonmibnotificationenables(std::make_shared<CISCOENVMONMIB::Ciscoenvmonmibnotificationenables>())
	,ciscoenvmonvoltagestatustable(std::make_shared<CISCOENVMONMIB::Ciscoenvmonvoltagestatustable>())
	,ciscoenvmontemperaturestatustable(std::make_shared<CISCOENVMONMIB::Ciscoenvmontemperaturestatustable>())
	,ciscoenvmonfanstatustable(std::make_shared<CISCOENVMONMIB::Ciscoenvmonfanstatustable>())
	,ciscoenvmonsupplystatustable(std::make_shared<CISCOENVMONMIB::Ciscoenvmonsupplystatustable>())
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
            ciscoenvmonobjects = std::make_shared<CISCOENVMONMIB::Ciscoenvmonobjects>();
        }
        return ciscoenvmonobjects;
    }

    if(child_yang_name == "ciscoEnvMonMIBNotificationEnables")
    {
        if(ciscoenvmonmibnotificationenables == nullptr)
        {
            ciscoenvmonmibnotificationenables = std::make_shared<CISCOENVMONMIB::Ciscoenvmonmibnotificationenables>();
        }
        return ciscoenvmonmibnotificationenables;
    }

    if(child_yang_name == "ciscoEnvMonVoltageStatusTable")
    {
        if(ciscoenvmonvoltagestatustable == nullptr)
        {
            ciscoenvmonvoltagestatustable = std::make_shared<CISCOENVMONMIB::Ciscoenvmonvoltagestatustable>();
        }
        return ciscoenvmonvoltagestatustable;
    }

    if(child_yang_name == "ciscoEnvMonTemperatureStatusTable")
    {
        if(ciscoenvmontemperaturestatustable == nullptr)
        {
            ciscoenvmontemperaturestatustable = std::make_shared<CISCOENVMONMIB::Ciscoenvmontemperaturestatustable>();
        }
        return ciscoenvmontemperaturestatustable;
    }

    if(child_yang_name == "ciscoEnvMonFanStatusTable")
    {
        if(ciscoenvmonfanstatustable == nullptr)
        {
            ciscoenvmonfanstatustable = std::make_shared<CISCOENVMONMIB::Ciscoenvmonfanstatustable>();
        }
        return ciscoenvmonfanstatustable;
    }

    if(child_yang_name == "ciscoEnvMonSupplyStatusTable")
    {
        if(ciscoenvmonsupplystatustable == nullptr)
        {
            ciscoenvmonsupplystatustable = std::make_shared<CISCOENVMONMIB::Ciscoenvmonsupplystatustable>();
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

CISCOENVMONMIB::Ciscoenvmonobjects::Ciscoenvmonobjects()
    :
    ciscoenvmonpresent{YType::enumeration, "ciscoEnvMonPresent"},
    ciscoenvmonalarmcontacts{YType::bits, "ciscoEnvMonAlarmContacts"}
{

    yang_name = "ciscoEnvMonObjects"; yang_parent_name = "CISCO-ENVMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENVMONMIB::Ciscoenvmonobjects::~Ciscoenvmonobjects()
{
}

bool CISCOENVMONMIB::Ciscoenvmonobjects::has_data() const
{
    return ciscoenvmonpresent.is_set
	|| ciscoenvmonalarmcontacts.is_set;
}

bool CISCOENVMONMIB::Ciscoenvmonobjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoenvmonpresent.yfilter)
	|| ydk::is_set(ciscoenvmonalarmcontacts.yfilter);
}

std::string CISCOENVMONMIB::Ciscoenvmonobjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENVMON-MIB:CISCO-ENVMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENVMONMIB::Ciscoenvmonobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoEnvMonObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENVMONMIB::Ciscoenvmonobjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoenvmonpresent.is_set || is_set(ciscoenvmonpresent.yfilter)) leaf_name_data.push_back(ciscoenvmonpresent.get_name_leafdata());
    if (ciscoenvmonalarmcontacts.is_set || is_set(ciscoenvmonalarmcontacts.yfilter)) leaf_name_data.push_back(ciscoenvmonalarmcontacts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENVMONMIB::Ciscoenvmonobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENVMONMIB::Ciscoenvmonobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENVMONMIB::Ciscoenvmonobjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOENVMONMIB::Ciscoenvmonobjects::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOENVMONMIB::Ciscoenvmonobjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoEnvMonPresent" || name == "ciscoEnvMonAlarmContacts")
        return true;
    return false;
}

CISCOENVMONMIB::Ciscoenvmonmibnotificationenables::Ciscoenvmonmibnotificationenables()
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

CISCOENVMONMIB::Ciscoenvmonmibnotificationenables::~Ciscoenvmonmibnotificationenables()
{
}

bool CISCOENVMONMIB::Ciscoenvmonmibnotificationenables::has_data() const
{
    return ciscoenvmonenableshutdownnotification.is_set
	|| ciscoenvmonenablevoltagenotification.is_set
	|| ciscoenvmonenabletemperaturenotification.is_set
	|| ciscoenvmonenablefannotification.is_set
	|| ciscoenvmonenableredundantsupplynotification.is_set
	|| ciscoenvmonenablestatchangenotif.is_set;
}

bool CISCOENVMONMIB::Ciscoenvmonmibnotificationenables::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoenvmonenableshutdownnotification.yfilter)
	|| ydk::is_set(ciscoenvmonenablevoltagenotification.yfilter)
	|| ydk::is_set(ciscoenvmonenabletemperaturenotification.yfilter)
	|| ydk::is_set(ciscoenvmonenablefannotification.yfilter)
	|| ydk::is_set(ciscoenvmonenableredundantsupplynotification.yfilter)
	|| ydk::is_set(ciscoenvmonenablestatchangenotif.yfilter);
}

std::string CISCOENVMONMIB::Ciscoenvmonmibnotificationenables::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENVMON-MIB:CISCO-ENVMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENVMONMIB::Ciscoenvmonmibnotificationenables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoEnvMonMIBNotificationEnables";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENVMONMIB::Ciscoenvmonmibnotificationenables::get_name_leaf_data() const
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

std::shared_ptr<Entity> CISCOENVMONMIB::Ciscoenvmonmibnotificationenables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENVMONMIB::Ciscoenvmonmibnotificationenables::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENVMONMIB::Ciscoenvmonmibnotificationenables::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOENVMONMIB::Ciscoenvmonmibnotificationenables::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOENVMONMIB::Ciscoenvmonmibnotificationenables::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoEnvMonEnableShutdownNotification" || name == "ciscoEnvMonEnableVoltageNotification" || name == "ciscoEnvMonEnableTemperatureNotification" || name == "ciscoEnvMonEnableFanNotification" || name == "ciscoEnvMonEnableRedundantSupplyNotification" || name == "ciscoEnvMonEnableStatChangeNotif")
        return true;
    return false;
}

CISCOENVMONMIB::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatustable()
{

    yang_name = "ciscoEnvMonVoltageStatusTable"; yang_parent_name = "CISCO-ENVMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENVMONMIB::Ciscoenvmonvoltagestatustable::~Ciscoenvmonvoltagestatustable()
{
}

bool CISCOENVMONMIB::Ciscoenvmonvoltagestatustable::has_data() const
{
    for (std::size_t index=0; index<ciscoenvmonvoltagestatusentry.size(); index++)
    {
        if(ciscoenvmonvoltagestatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENVMONMIB::Ciscoenvmonvoltagestatustable::has_operation() const
{
    for (std::size_t index=0; index<ciscoenvmonvoltagestatusentry.size(); index++)
    {
        if(ciscoenvmonvoltagestatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENVMONMIB::Ciscoenvmonvoltagestatustable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENVMON-MIB:CISCO-ENVMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENVMONMIB::Ciscoenvmonvoltagestatustable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoEnvMonVoltageStatusTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENVMONMIB::Ciscoenvmonvoltagestatustable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENVMONMIB::Ciscoenvmonvoltagestatustable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoEnvMonVoltageStatusEntry")
    {
        auto c = std::make_shared<CISCOENVMONMIB::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatusentry>();
        c->parent = this;
        ciscoenvmonvoltagestatusentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENVMONMIB::Ciscoenvmonvoltagestatustable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ciscoenvmonvoltagestatusentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENVMONMIB::Ciscoenvmonvoltagestatustable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENVMONMIB::Ciscoenvmonvoltagestatustable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENVMONMIB::Ciscoenvmonvoltagestatustable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoEnvMonVoltageStatusEntry")
        return true;
    return false;
}

CISCOENVMONMIB::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatusentry::Ciscoenvmonvoltagestatusentry()
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

CISCOENVMONMIB::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatusentry::~Ciscoenvmonvoltagestatusentry()
{
}

bool CISCOENVMONMIB::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatusentry::has_data() const
{
    return ciscoenvmonvoltagestatusindex.is_set
	|| ciscoenvmonvoltagestatusdescr.is_set
	|| ciscoenvmonvoltagestatusvalue.is_set
	|| ciscoenvmonvoltagethresholdlow.is_set
	|| ciscoenvmonvoltagethresholdhigh.is_set
	|| ciscoenvmonvoltagelastshutdown.is_set
	|| ciscoenvmonvoltagestate.is_set;
}

bool CISCOENVMONMIB::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatusentry::has_operation() const
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

std::string CISCOENVMONMIB::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatusentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENVMON-MIB:CISCO-ENVMON-MIB/ciscoEnvMonVoltageStatusTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENVMONMIB::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatusentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoEnvMonVoltageStatusEntry" <<"[ciscoEnvMonVoltageStatusIndex='" <<ciscoenvmonvoltagestatusindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENVMONMIB::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatusentry::get_name_leaf_data() const
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

std::shared_ptr<Entity> CISCOENVMONMIB::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatusentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENVMONMIB::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatusentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENVMONMIB::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatusentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOENVMONMIB::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatusentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOENVMONMIB::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatusentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoEnvMonVoltageStatusIndex" || name == "ciscoEnvMonVoltageStatusDescr" || name == "ciscoEnvMonVoltageStatusValue" || name == "ciscoEnvMonVoltageThresholdLow" || name == "ciscoEnvMonVoltageThresholdHigh" || name == "ciscoEnvMonVoltageLastShutdown" || name == "ciscoEnvMonVoltageState")
        return true;
    return false;
}

CISCOENVMONMIB::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatustable()
{

    yang_name = "ciscoEnvMonTemperatureStatusTable"; yang_parent_name = "CISCO-ENVMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENVMONMIB::Ciscoenvmontemperaturestatustable::~Ciscoenvmontemperaturestatustable()
{
}

bool CISCOENVMONMIB::Ciscoenvmontemperaturestatustable::has_data() const
{
    for (std::size_t index=0; index<ciscoenvmontemperaturestatusentry.size(); index++)
    {
        if(ciscoenvmontemperaturestatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENVMONMIB::Ciscoenvmontemperaturestatustable::has_operation() const
{
    for (std::size_t index=0; index<ciscoenvmontemperaturestatusentry.size(); index++)
    {
        if(ciscoenvmontemperaturestatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENVMONMIB::Ciscoenvmontemperaturestatustable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENVMON-MIB:CISCO-ENVMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENVMONMIB::Ciscoenvmontemperaturestatustable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoEnvMonTemperatureStatusTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENVMONMIB::Ciscoenvmontemperaturestatustable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENVMONMIB::Ciscoenvmontemperaturestatustable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoEnvMonTemperatureStatusEntry")
    {
        auto c = std::make_shared<CISCOENVMONMIB::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatusentry>();
        c->parent = this;
        ciscoenvmontemperaturestatusentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENVMONMIB::Ciscoenvmontemperaturestatustable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ciscoenvmontemperaturestatusentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENVMONMIB::Ciscoenvmontemperaturestatustable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENVMONMIB::Ciscoenvmontemperaturestatustable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENVMONMIB::Ciscoenvmontemperaturestatustable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoEnvMonTemperatureStatusEntry")
        return true;
    return false;
}

CISCOENVMONMIB::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatusentry::Ciscoenvmontemperaturestatusentry()
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

CISCOENVMONMIB::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatusentry::~Ciscoenvmontemperaturestatusentry()
{
}

bool CISCOENVMONMIB::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatusentry::has_data() const
{
    return ciscoenvmontemperaturestatusindex.is_set
	|| ciscoenvmontemperaturestatusdescr.is_set
	|| ciscoenvmontemperaturestatusvalue.is_set
	|| ciscoenvmontemperaturethreshold.is_set
	|| ciscoenvmontemperaturelastshutdown.is_set
	|| ciscoenvmontemperaturestate.is_set;
}

bool CISCOENVMONMIB::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatusentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoenvmontemperaturestatusindex.yfilter)
	|| ydk::is_set(ciscoenvmontemperaturestatusdescr.yfilter)
	|| ydk::is_set(ciscoenvmontemperaturestatusvalue.yfilter)
	|| ydk::is_set(ciscoenvmontemperaturethreshold.yfilter)
	|| ydk::is_set(ciscoenvmontemperaturelastshutdown.yfilter)
	|| ydk::is_set(ciscoenvmontemperaturestate.yfilter);
}

std::string CISCOENVMONMIB::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatusentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENVMON-MIB:CISCO-ENVMON-MIB/ciscoEnvMonTemperatureStatusTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENVMONMIB::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatusentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoEnvMonTemperatureStatusEntry" <<"[ciscoEnvMonTemperatureStatusIndex='" <<ciscoenvmontemperaturestatusindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENVMONMIB::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatusentry::get_name_leaf_data() const
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

std::shared_ptr<Entity> CISCOENVMONMIB::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatusentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENVMONMIB::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatusentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENVMONMIB::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatusentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOENVMONMIB::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatusentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOENVMONMIB::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatusentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoEnvMonTemperatureStatusIndex" || name == "ciscoEnvMonTemperatureStatusDescr" || name == "ciscoEnvMonTemperatureStatusValue" || name == "ciscoEnvMonTemperatureThreshold" || name == "ciscoEnvMonTemperatureLastShutdown" || name == "ciscoEnvMonTemperatureState")
        return true;
    return false;
}

CISCOENVMONMIB::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatustable()
{

    yang_name = "ciscoEnvMonFanStatusTable"; yang_parent_name = "CISCO-ENVMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENVMONMIB::Ciscoenvmonfanstatustable::~Ciscoenvmonfanstatustable()
{
}

bool CISCOENVMONMIB::Ciscoenvmonfanstatustable::has_data() const
{
    for (std::size_t index=0; index<ciscoenvmonfanstatusentry.size(); index++)
    {
        if(ciscoenvmonfanstatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENVMONMIB::Ciscoenvmonfanstatustable::has_operation() const
{
    for (std::size_t index=0; index<ciscoenvmonfanstatusentry.size(); index++)
    {
        if(ciscoenvmonfanstatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENVMONMIB::Ciscoenvmonfanstatustable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENVMON-MIB:CISCO-ENVMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENVMONMIB::Ciscoenvmonfanstatustable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoEnvMonFanStatusTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENVMONMIB::Ciscoenvmonfanstatustable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENVMONMIB::Ciscoenvmonfanstatustable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoEnvMonFanStatusEntry")
    {
        auto c = std::make_shared<CISCOENVMONMIB::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatusentry>();
        c->parent = this;
        ciscoenvmonfanstatusentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENVMONMIB::Ciscoenvmonfanstatustable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ciscoenvmonfanstatusentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENVMONMIB::Ciscoenvmonfanstatustable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENVMONMIB::Ciscoenvmonfanstatustable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENVMONMIB::Ciscoenvmonfanstatustable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoEnvMonFanStatusEntry")
        return true;
    return false;
}

CISCOENVMONMIB::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatusentry::Ciscoenvmonfanstatusentry()
    :
    ciscoenvmonfanstatusindex{YType::int32, "ciscoEnvMonFanStatusIndex"},
    ciscoenvmonfanstatusdescr{YType::str, "ciscoEnvMonFanStatusDescr"},
    ciscoenvmonfanstate{YType::enumeration, "ciscoEnvMonFanState"}
{

    yang_name = "ciscoEnvMonFanStatusEntry"; yang_parent_name = "ciscoEnvMonFanStatusTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENVMONMIB::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatusentry::~Ciscoenvmonfanstatusentry()
{
}

bool CISCOENVMONMIB::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatusentry::has_data() const
{
    return ciscoenvmonfanstatusindex.is_set
	|| ciscoenvmonfanstatusdescr.is_set
	|| ciscoenvmonfanstate.is_set;
}

bool CISCOENVMONMIB::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatusentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoenvmonfanstatusindex.yfilter)
	|| ydk::is_set(ciscoenvmonfanstatusdescr.yfilter)
	|| ydk::is_set(ciscoenvmonfanstate.yfilter);
}

std::string CISCOENVMONMIB::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatusentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENVMON-MIB:CISCO-ENVMON-MIB/ciscoEnvMonFanStatusTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENVMONMIB::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatusentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoEnvMonFanStatusEntry" <<"[ciscoEnvMonFanStatusIndex='" <<ciscoenvmonfanstatusindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENVMONMIB::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatusentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoenvmonfanstatusindex.is_set || is_set(ciscoenvmonfanstatusindex.yfilter)) leaf_name_data.push_back(ciscoenvmonfanstatusindex.get_name_leafdata());
    if (ciscoenvmonfanstatusdescr.is_set || is_set(ciscoenvmonfanstatusdescr.yfilter)) leaf_name_data.push_back(ciscoenvmonfanstatusdescr.get_name_leafdata());
    if (ciscoenvmonfanstate.is_set || is_set(ciscoenvmonfanstate.yfilter)) leaf_name_data.push_back(ciscoenvmonfanstate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENVMONMIB::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatusentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENVMONMIB::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatusentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENVMONMIB::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatusentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOENVMONMIB::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatusentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOENVMONMIB::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatusentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoEnvMonFanStatusIndex" || name == "ciscoEnvMonFanStatusDescr" || name == "ciscoEnvMonFanState")
        return true;
    return false;
}

CISCOENVMONMIB::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatustable()
{

    yang_name = "ciscoEnvMonSupplyStatusTable"; yang_parent_name = "CISCO-ENVMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENVMONMIB::Ciscoenvmonsupplystatustable::~Ciscoenvmonsupplystatustable()
{
}

bool CISCOENVMONMIB::Ciscoenvmonsupplystatustable::has_data() const
{
    for (std::size_t index=0; index<ciscoenvmonsupplystatusentry.size(); index++)
    {
        if(ciscoenvmonsupplystatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENVMONMIB::Ciscoenvmonsupplystatustable::has_operation() const
{
    for (std::size_t index=0; index<ciscoenvmonsupplystatusentry.size(); index++)
    {
        if(ciscoenvmonsupplystatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENVMONMIB::Ciscoenvmonsupplystatustable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENVMON-MIB:CISCO-ENVMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENVMONMIB::Ciscoenvmonsupplystatustable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoEnvMonSupplyStatusTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENVMONMIB::Ciscoenvmonsupplystatustable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENVMONMIB::Ciscoenvmonsupplystatustable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoEnvMonSupplyStatusEntry")
    {
        auto c = std::make_shared<CISCOENVMONMIB::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry>();
        c->parent = this;
        ciscoenvmonsupplystatusentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENVMONMIB::Ciscoenvmonsupplystatustable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ciscoenvmonsupplystatusentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENVMONMIB::Ciscoenvmonsupplystatustable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENVMONMIB::Ciscoenvmonsupplystatustable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENVMONMIB::Ciscoenvmonsupplystatustable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoEnvMonSupplyStatusEntry")
        return true;
    return false;
}

CISCOENVMONMIB::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::Ciscoenvmonsupplystatusentry()
    :
    ciscoenvmonsupplystatusindex{YType::int32, "ciscoEnvMonSupplyStatusIndex"},
    ciscoenvmonsupplystatusdescr{YType::str, "ciscoEnvMonSupplyStatusDescr"},
    ciscoenvmonsupplystate{YType::enumeration, "ciscoEnvMonSupplyState"},
    ciscoenvmonsupplysource{YType::enumeration, "ciscoEnvMonSupplySource"}
{

    yang_name = "ciscoEnvMonSupplyStatusEntry"; yang_parent_name = "ciscoEnvMonSupplyStatusTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENVMONMIB::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::~Ciscoenvmonsupplystatusentry()
{
}

bool CISCOENVMONMIB::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::has_data() const
{
    return ciscoenvmonsupplystatusindex.is_set
	|| ciscoenvmonsupplystatusdescr.is_set
	|| ciscoenvmonsupplystate.is_set
	|| ciscoenvmonsupplysource.is_set;
}

bool CISCOENVMONMIB::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoenvmonsupplystatusindex.yfilter)
	|| ydk::is_set(ciscoenvmonsupplystatusdescr.yfilter)
	|| ydk::is_set(ciscoenvmonsupplystate.yfilter)
	|| ydk::is_set(ciscoenvmonsupplysource.yfilter);
}

std::string CISCOENVMONMIB::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENVMON-MIB:CISCO-ENVMON-MIB/ciscoEnvMonSupplyStatusTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENVMONMIB::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoEnvMonSupplyStatusEntry" <<"[ciscoEnvMonSupplyStatusIndex='" <<ciscoenvmonsupplystatusindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENVMONMIB::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoenvmonsupplystatusindex.is_set || is_set(ciscoenvmonsupplystatusindex.yfilter)) leaf_name_data.push_back(ciscoenvmonsupplystatusindex.get_name_leafdata());
    if (ciscoenvmonsupplystatusdescr.is_set || is_set(ciscoenvmonsupplystatusdescr.yfilter)) leaf_name_data.push_back(ciscoenvmonsupplystatusdescr.get_name_leafdata());
    if (ciscoenvmonsupplystate.is_set || is_set(ciscoenvmonsupplystate.yfilter)) leaf_name_data.push_back(ciscoenvmonsupplystate.get_name_leafdata());
    if (ciscoenvmonsupplysource.is_set || is_set(ciscoenvmonsupplysource.yfilter)) leaf_name_data.push_back(ciscoenvmonsupplysource.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENVMONMIB::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENVMONMIB::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENVMONMIB::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOENVMONMIB::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOENVMONMIB::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::has_leaf_or_child_of_name(const std::string & name) const
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

const Enum::YLeaf CISCOENVMONMIB::Ciscoenvmonobjects::Ciscoenvmonpresent::oldAgs {1, "oldAgs"};
const Enum::YLeaf CISCOENVMONMIB::Ciscoenvmonobjects::Ciscoenvmonpresent::ags {2, "ags"};
const Enum::YLeaf CISCOENVMONMIB::Ciscoenvmonobjects::Ciscoenvmonpresent::c7000 {3, "c7000"};
const Enum::YLeaf CISCOENVMONMIB::Ciscoenvmonobjects::Ciscoenvmonpresent::ci {4, "ci"};
const Enum::YLeaf CISCOENVMONMIB::Ciscoenvmonobjects::Ciscoenvmonpresent::cAccessMon {6, "cAccessMon"};
const Enum::YLeaf CISCOENVMONMIB::Ciscoenvmonobjects::Ciscoenvmonpresent::cat6000 {7, "cat6000"};
const Enum::YLeaf CISCOENVMONMIB::Ciscoenvmonobjects::Ciscoenvmonpresent::ubr7200 {8, "ubr7200"};
const Enum::YLeaf CISCOENVMONMIB::Ciscoenvmonobjects::Ciscoenvmonpresent::cat4000 {9, "cat4000"};
const Enum::YLeaf CISCOENVMONMIB::Ciscoenvmonobjects::Ciscoenvmonpresent::c10000 {10, "c10000"};
const Enum::YLeaf CISCOENVMONMIB::Ciscoenvmonobjects::Ciscoenvmonpresent::osr7600 {11, "osr7600"};
const Enum::YLeaf CISCOENVMONMIB::Ciscoenvmonobjects::Ciscoenvmonpresent::c7600 {12, "c7600"};
const Enum::YLeaf CISCOENVMONMIB::Ciscoenvmonobjects::Ciscoenvmonpresent::c37xx {13, "c37xx"};
const Enum::YLeaf CISCOENVMONMIB::Ciscoenvmonobjects::Ciscoenvmonpresent::other {14, "other"};

const Enum::YLeaf CISCOENVMONMIB::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::Ciscoenvmonsupplysource::unknown {1, "unknown"};
const Enum::YLeaf CISCOENVMONMIB::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::Ciscoenvmonsupplysource::ac {2, "ac"};
const Enum::YLeaf CISCOENVMONMIB::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::Ciscoenvmonsupplysource::dc {3, "dc"};
const Enum::YLeaf CISCOENVMONMIB::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::Ciscoenvmonsupplysource::externalPowerSupply {4, "externalPowerSupply"};
const Enum::YLeaf CISCOENVMONMIB::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::Ciscoenvmonsupplysource::internalRedundant {5, "internalRedundant"};


}
}

