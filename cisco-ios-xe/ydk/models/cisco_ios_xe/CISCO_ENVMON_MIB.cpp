
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_ENVMON_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_ENVMON_MIB {

CiscoEnvmonMib::CiscoEnvmonMib()
    :
    ciscoenvmonfanstatustable(std::make_shared<CiscoEnvmonMib::Ciscoenvmonfanstatustable>())
	,ciscoenvmonmibnotificationenables(std::make_shared<CiscoEnvmonMib::Ciscoenvmonmibnotificationenables>())
	,ciscoenvmonobjects(std::make_shared<CiscoEnvmonMib::Ciscoenvmonobjects>())
	,ciscoenvmonsupplystatustable(std::make_shared<CiscoEnvmonMib::Ciscoenvmonsupplystatustable>())
	,ciscoenvmontemperaturestatustable(std::make_shared<CiscoEnvmonMib::Ciscoenvmontemperaturestatustable>())
	,ciscoenvmonvoltagestatustable(std::make_shared<CiscoEnvmonMib::Ciscoenvmonvoltagestatustable>())
{
    ciscoenvmonfanstatustable->parent = this;

    ciscoenvmonmibnotificationenables->parent = this;

    ciscoenvmonobjects->parent = this;

    ciscoenvmonsupplystatustable->parent = this;

    ciscoenvmontemperaturestatustable->parent = this;

    ciscoenvmonvoltagestatustable->parent = this;

    yang_name = "CISCO-ENVMON-MIB"; yang_parent_name = "CISCO-ENVMON-MIB";
}

CiscoEnvmonMib::~CiscoEnvmonMib()
{
}

bool CiscoEnvmonMib::has_data() const
{
    return (ciscoenvmonfanstatustable !=  nullptr && ciscoenvmonfanstatustable->has_data())
	|| (ciscoenvmonmibnotificationenables !=  nullptr && ciscoenvmonmibnotificationenables->has_data())
	|| (ciscoenvmonobjects !=  nullptr && ciscoenvmonobjects->has_data())
	|| (ciscoenvmonsupplystatustable !=  nullptr && ciscoenvmonsupplystatustable->has_data())
	|| (ciscoenvmontemperaturestatustable !=  nullptr && ciscoenvmontemperaturestatustable->has_data())
	|| (ciscoenvmonvoltagestatustable !=  nullptr && ciscoenvmonvoltagestatustable->has_data());
}

bool CiscoEnvmonMib::has_operation() const
{
    return is_set(yfilter)
	|| (ciscoenvmonfanstatustable !=  nullptr && ciscoenvmonfanstatustable->has_operation())
	|| (ciscoenvmonmibnotificationenables !=  nullptr && ciscoenvmonmibnotificationenables->has_operation())
	|| (ciscoenvmonobjects !=  nullptr && ciscoenvmonobjects->has_operation())
	|| (ciscoenvmonsupplystatustable !=  nullptr && ciscoenvmonsupplystatustable->has_operation())
	|| (ciscoenvmontemperaturestatustable !=  nullptr && ciscoenvmontemperaturestatustable->has_operation())
	|| (ciscoenvmonvoltagestatustable !=  nullptr && ciscoenvmonvoltagestatustable->has_operation());
}

std::string CiscoEnvmonMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENVMON-MIB:CISCO-ENVMON-MIB";

    return path_buffer.str();

}

const EntityPath CiscoEnvmonMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoEnvmonMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoEnvMonFanStatusTable")
    {
        if(ciscoenvmonfanstatustable == nullptr)
        {
            ciscoenvmonfanstatustable = std::make_shared<CiscoEnvmonMib::Ciscoenvmonfanstatustable>();
        }
        return ciscoenvmonfanstatustable;
    }

    if(child_yang_name == "ciscoEnvMonMIBNotificationEnables")
    {
        if(ciscoenvmonmibnotificationenables == nullptr)
        {
            ciscoenvmonmibnotificationenables = std::make_shared<CiscoEnvmonMib::Ciscoenvmonmibnotificationenables>();
        }
        return ciscoenvmonmibnotificationenables;
    }

    if(child_yang_name == "ciscoEnvMonObjects")
    {
        if(ciscoenvmonobjects == nullptr)
        {
            ciscoenvmonobjects = std::make_shared<CiscoEnvmonMib::Ciscoenvmonobjects>();
        }
        return ciscoenvmonobjects;
    }

    if(child_yang_name == "ciscoEnvMonSupplyStatusTable")
    {
        if(ciscoenvmonsupplystatustable == nullptr)
        {
            ciscoenvmonsupplystatustable = std::make_shared<CiscoEnvmonMib::Ciscoenvmonsupplystatustable>();
        }
        return ciscoenvmonsupplystatustable;
    }

    if(child_yang_name == "ciscoEnvMonTemperatureStatusTable")
    {
        if(ciscoenvmontemperaturestatustable == nullptr)
        {
            ciscoenvmontemperaturestatustable = std::make_shared<CiscoEnvmonMib::Ciscoenvmontemperaturestatustable>();
        }
        return ciscoenvmontemperaturestatustable;
    }

    if(child_yang_name == "ciscoEnvMonVoltageStatusTable")
    {
        if(ciscoenvmonvoltagestatustable == nullptr)
        {
            ciscoenvmonvoltagestatustable = std::make_shared<CiscoEnvmonMib::Ciscoenvmonvoltagestatustable>();
        }
        return ciscoenvmonvoltagestatustable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEnvmonMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ciscoenvmonfanstatustable != nullptr)
    {
        children["ciscoEnvMonFanStatusTable"] = ciscoenvmonfanstatustable;
    }

    if(ciscoenvmonmibnotificationenables != nullptr)
    {
        children["ciscoEnvMonMIBNotificationEnables"] = ciscoenvmonmibnotificationenables;
    }

    if(ciscoenvmonobjects != nullptr)
    {
        children["ciscoEnvMonObjects"] = ciscoenvmonobjects;
    }

    if(ciscoenvmonsupplystatustable != nullptr)
    {
        children["ciscoEnvMonSupplyStatusTable"] = ciscoenvmonsupplystatustable;
    }

    if(ciscoenvmontemperaturestatustable != nullptr)
    {
        children["ciscoEnvMonTemperatureStatusTable"] = ciscoenvmontemperaturestatustable;
    }

    if(ciscoenvmonvoltagestatustable != nullptr)
    {
        children["ciscoEnvMonVoltageStatusTable"] = ciscoenvmonvoltagestatustable;
    }

    return children;
}

void CiscoEnvmonMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEnvmonMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoEnvmonMib::clone_ptr() const
{
    return std::make_shared<CiscoEnvmonMib>();
}

std::string CiscoEnvmonMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoEnvmonMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoEnvmonMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoEnvmonMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoEnvmonMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoEnvMonFanStatusTable" || name == "ciscoEnvMonMIBNotificationEnables" || name == "ciscoEnvMonObjects" || name == "ciscoEnvMonSupplyStatusTable" || name == "ciscoEnvMonTemperatureStatusTable" || name == "ciscoEnvMonVoltageStatusTable")
        return true;
    return false;
}

CiscoEnvmonMib::Ciscoenvmonobjects::Ciscoenvmonobjects()
    :
    ciscoenvmonalarmcontacts{YType::bits, "ciscoEnvMonAlarmContacts"},
    ciscoenvmonpresent{YType::enumeration, "ciscoEnvMonPresent"}
{
    yang_name = "ciscoEnvMonObjects"; yang_parent_name = "CISCO-ENVMON-MIB";
}

CiscoEnvmonMib::Ciscoenvmonobjects::~Ciscoenvmonobjects()
{
}

bool CiscoEnvmonMib::Ciscoenvmonobjects::has_data() const
{
    return ciscoenvmonalarmcontacts.is_set
	|| ciscoenvmonpresent.is_set;
}

bool CiscoEnvmonMib::Ciscoenvmonobjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoenvmonalarmcontacts.yfilter)
	|| ydk::is_set(ciscoenvmonpresent.yfilter);
}

std::string CiscoEnvmonMib::Ciscoenvmonobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoEnvMonObjects";

    return path_buffer.str();

}

const EntityPath CiscoEnvmonMib::Ciscoenvmonobjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENVMON-MIB:CISCO-ENVMON-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoenvmonalarmcontacts.is_set || is_set(ciscoenvmonalarmcontacts.yfilter)) leaf_name_data.push_back(ciscoenvmonalarmcontacts.get_name_leafdata());
    if (ciscoenvmonpresent.is_set || is_set(ciscoenvmonpresent.yfilter)) leaf_name_data.push_back(ciscoenvmonpresent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEnvmonMib::Ciscoenvmonobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEnvmonMib::Ciscoenvmonobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEnvmonMib::Ciscoenvmonobjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoEnvMonAlarmContacts")
    {
        ciscoenvmonalarmcontacts[value] = true;
    }
    if(value_path == "ciscoEnvMonPresent")
    {
        ciscoenvmonpresent = value;
        ciscoenvmonpresent.value_namespace = name_space;
        ciscoenvmonpresent.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEnvmonMib::Ciscoenvmonobjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoEnvMonAlarmContacts")
    {
        ciscoenvmonalarmcontacts.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonPresent")
    {
        ciscoenvmonpresent.yfilter = yfilter;
    }
}

bool CiscoEnvmonMib::Ciscoenvmonobjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoEnvMonAlarmContacts" || name == "ciscoEnvMonPresent")
        return true;
    return false;
}

CiscoEnvmonMib::Ciscoenvmonmibnotificationenables::Ciscoenvmonmibnotificationenables()
    :
    ciscoenvmonenablefannotification{YType::boolean, "ciscoEnvMonEnableFanNotification"},
    ciscoenvmonenableredundantsupplynotification{YType::boolean, "ciscoEnvMonEnableRedundantSupplyNotification"},
    ciscoenvmonenableshutdownnotification{YType::boolean, "ciscoEnvMonEnableShutdownNotification"},
    ciscoenvmonenablestatchangenotif{YType::boolean, "ciscoEnvMonEnableStatChangeNotif"},
    ciscoenvmonenabletemperaturenotification{YType::boolean, "ciscoEnvMonEnableTemperatureNotification"},
    ciscoenvmonenablevoltagenotification{YType::boolean, "ciscoEnvMonEnableVoltageNotification"}
{
    yang_name = "ciscoEnvMonMIBNotificationEnables"; yang_parent_name = "CISCO-ENVMON-MIB";
}

CiscoEnvmonMib::Ciscoenvmonmibnotificationenables::~Ciscoenvmonmibnotificationenables()
{
}

bool CiscoEnvmonMib::Ciscoenvmonmibnotificationenables::has_data() const
{
    return ciscoenvmonenablefannotification.is_set
	|| ciscoenvmonenableredundantsupplynotification.is_set
	|| ciscoenvmonenableshutdownnotification.is_set
	|| ciscoenvmonenablestatchangenotif.is_set
	|| ciscoenvmonenabletemperaturenotification.is_set
	|| ciscoenvmonenablevoltagenotification.is_set;
}

bool CiscoEnvmonMib::Ciscoenvmonmibnotificationenables::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoenvmonenablefannotification.yfilter)
	|| ydk::is_set(ciscoenvmonenableredundantsupplynotification.yfilter)
	|| ydk::is_set(ciscoenvmonenableshutdownnotification.yfilter)
	|| ydk::is_set(ciscoenvmonenablestatchangenotif.yfilter)
	|| ydk::is_set(ciscoenvmonenabletemperaturenotification.yfilter)
	|| ydk::is_set(ciscoenvmonenablevoltagenotification.yfilter);
}

std::string CiscoEnvmonMib::Ciscoenvmonmibnotificationenables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoEnvMonMIBNotificationEnables";

    return path_buffer.str();

}

const EntityPath CiscoEnvmonMib::Ciscoenvmonmibnotificationenables::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENVMON-MIB:CISCO-ENVMON-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoenvmonenablefannotification.is_set || is_set(ciscoenvmonenablefannotification.yfilter)) leaf_name_data.push_back(ciscoenvmonenablefannotification.get_name_leafdata());
    if (ciscoenvmonenableredundantsupplynotification.is_set || is_set(ciscoenvmonenableredundantsupplynotification.yfilter)) leaf_name_data.push_back(ciscoenvmonenableredundantsupplynotification.get_name_leafdata());
    if (ciscoenvmonenableshutdownnotification.is_set || is_set(ciscoenvmonenableshutdownnotification.yfilter)) leaf_name_data.push_back(ciscoenvmonenableshutdownnotification.get_name_leafdata());
    if (ciscoenvmonenablestatchangenotif.is_set || is_set(ciscoenvmonenablestatchangenotif.yfilter)) leaf_name_data.push_back(ciscoenvmonenablestatchangenotif.get_name_leafdata());
    if (ciscoenvmonenabletemperaturenotification.is_set || is_set(ciscoenvmonenabletemperaturenotification.yfilter)) leaf_name_data.push_back(ciscoenvmonenabletemperaturenotification.get_name_leafdata());
    if (ciscoenvmonenablevoltagenotification.is_set || is_set(ciscoenvmonenablevoltagenotification.yfilter)) leaf_name_data.push_back(ciscoenvmonenablevoltagenotification.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEnvmonMib::Ciscoenvmonmibnotificationenables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEnvmonMib::Ciscoenvmonmibnotificationenables::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEnvmonMib::Ciscoenvmonmibnotificationenables::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "ciscoEnvMonEnableShutdownNotification")
    {
        ciscoenvmonenableshutdownnotification = value;
        ciscoenvmonenableshutdownnotification.value_namespace = name_space;
        ciscoenvmonenableshutdownnotification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoEnvMonEnableStatChangeNotif")
    {
        ciscoenvmonenablestatchangenotif = value;
        ciscoenvmonenablestatchangenotif.value_namespace = name_space;
        ciscoenvmonenablestatchangenotif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoEnvMonEnableTemperatureNotification")
    {
        ciscoenvmonenabletemperaturenotification = value;
        ciscoenvmonenabletemperaturenotification.value_namespace = name_space;
        ciscoenvmonenabletemperaturenotification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoEnvMonEnableVoltageNotification")
    {
        ciscoenvmonenablevoltagenotification = value;
        ciscoenvmonenablevoltagenotification.value_namespace = name_space;
        ciscoenvmonenablevoltagenotification.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEnvmonMib::Ciscoenvmonmibnotificationenables::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoEnvMonEnableFanNotification")
    {
        ciscoenvmonenablefannotification.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonEnableRedundantSupplyNotification")
    {
        ciscoenvmonenableredundantsupplynotification.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonEnableShutdownNotification")
    {
        ciscoenvmonenableshutdownnotification.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonEnableStatChangeNotif")
    {
        ciscoenvmonenablestatchangenotif.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonEnableTemperatureNotification")
    {
        ciscoenvmonenabletemperaturenotification.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonEnableVoltageNotification")
    {
        ciscoenvmonenablevoltagenotification.yfilter = yfilter;
    }
}

bool CiscoEnvmonMib::Ciscoenvmonmibnotificationenables::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoEnvMonEnableFanNotification" || name == "ciscoEnvMonEnableRedundantSupplyNotification" || name == "ciscoEnvMonEnableShutdownNotification" || name == "ciscoEnvMonEnableStatChangeNotif" || name == "ciscoEnvMonEnableTemperatureNotification" || name == "ciscoEnvMonEnableVoltageNotification")
        return true;
    return false;
}

CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatustable()
{
    yang_name = "ciscoEnvMonVoltageStatusTable"; yang_parent_name = "CISCO-ENVMON-MIB";
}

CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::~Ciscoenvmonvoltagestatustable()
{
}

bool CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::has_data() const
{
    for (std::size_t index=0; index<ciscoenvmonvoltagestatusentry.size(); index++)
    {
        if(ciscoenvmonvoltagestatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::has_operation() const
{
    for (std::size_t index=0; index<ciscoenvmonvoltagestatusentry.size(); index++)
    {
        if(ciscoenvmonvoltagestatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoEnvMonVoltageStatusTable";

    return path_buffer.str();

}

const EntityPath CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENVMON-MIB:CISCO-ENVMON-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoEnvMonVoltageStatusEntry")
    {
        for(auto const & c : ciscoenvmonvoltagestatusentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatusentry>();
        c->parent = this;
        ciscoenvmonvoltagestatusentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciscoenvmonvoltagestatusentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoEnvMonVoltageStatusEntry")
        return true;
    return false;
}

CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatusentry::Ciscoenvmonvoltagestatusentry()
    :
    ciscoenvmonvoltagestatusindex{YType::int32, "ciscoEnvMonVoltageStatusIndex"},
    ciscoenvmonvoltagelastshutdown{YType::int32, "ciscoEnvMonVoltageLastShutdown"},
    ciscoenvmonvoltagestate{YType::enumeration, "ciscoEnvMonVoltageState"},
    ciscoenvmonvoltagestatusdescr{YType::str, "ciscoEnvMonVoltageStatusDescr"},
    ciscoenvmonvoltagestatusvalue{YType::int32, "ciscoEnvMonVoltageStatusValue"},
    ciscoenvmonvoltagethresholdhigh{YType::int32, "ciscoEnvMonVoltageThresholdHigh"},
    ciscoenvmonvoltagethresholdlow{YType::int32, "ciscoEnvMonVoltageThresholdLow"}
{
    yang_name = "ciscoEnvMonVoltageStatusEntry"; yang_parent_name = "ciscoEnvMonVoltageStatusTable";
}

CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatusentry::~Ciscoenvmonvoltagestatusentry()
{
}

bool CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatusentry::has_data() const
{
    return ciscoenvmonvoltagestatusindex.is_set
	|| ciscoenvmonvoltagelastshutdown.is_set
	|| ciscoenvmonvoltagestate.is_set
	|| ciscoenvmonvoltagestatusdescr.is_set
	|| ciscoenvmonvoltagestatusvalue.is_set
	|| ciscoenvmonvoltagethresholdhigh.is_set
	|| ciscoenvmonvoltagethresholdlow.is_set;
}

bool CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatusentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoenvmonvoltagestatusindex.yfilter)
	|| ydk::is_set(ciscoenvmonvoltagelastshutdown.yfilter)
	|| ydk::is_set(ciscoenvmonvoltagestate.yfilter)
	|| ydk::is_set(ciscoenvmonvoltagestatusdescr.yfilter)
	|| ydk::is_set(ciscoenvmonvoltagestatusvalue.yfilter)
	|| ydk::is_set(ciscoenvmonvoltagethresholdhigh.yfilter)
	|| ydk::is_set(ciscoenvmonvoltagethresholdlow.yfilter);
}

std::string CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatusentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoEnvMonVoltageStatusEntry" <<"[ciscoEnvMonVoltageStatusIndex='" <<ciscoenvmonvoltagestatusindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatusentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENVMON-MIB:CISCO-ENVMON-MIB/ciscoEnvMonVoltageStatusTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoenvmonvoltagestatusindex.is_set || is_set(ciscoenvmonvoltagestatusindex.yfilter)) leaf_name_data.push_back(ciscoenvmonvoltagestatusindex.get_name_leafdata());
    if (ciscoenvmonvoltagelastshutdown.is_set || is_set(ciscoenvmonvoltagelastshutdown.yfilter)) leaf_name_data.push_back(ciscoenvmonvoltagelastshutdown.get_name_leafdata());
    if (ciscoenvmonvoltagestate.is_set || is_set(ciscoenvmonvoltagestate.yfilter)) leaf_name_data.push_back(ciscoenvmonvoltagestate.get_name_leafdata());
    if (ciscoenvmonvoltagestatusdescr.is_set || is_set(ciscoenvmonvoltagestatusdescr.yfilter)) leaf_name_data.push_back(ciscoenvmonvoltagestatusdescr.get_name_leafdata());
    if (ciscoenvmonvoltagestatusvalue.is_set || is_set(ciscoenvmonvoltagestatusvalue.yfilter)) leaf_name_data.push_back(ciscoenvmonvoltagestatusvalue.get_name_leafdata());
    if (ciscoenvmonvoltagethresholdhigh.is_set || is_set(ciscoenvmonvoltagethresholdhigh.yfilter)) leaf_name_data.push_back(ciscoenvmonvoltagethresholdhigh.get_name_leafdata());
    if (ciscoenvmonvoltagethresholdlow.is_set || is_set(ciscoenvmonvoltagethresholdlow.yfilter)) leaf_name_data.push_back(ciscoenvmonvoltagethresholdlow.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatusentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatusentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatusentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoEnvMonVoltageStatusIndex")
    {
        ciscoenvmonvoltagestatusindex = value;
        ciscoenvmonvoltagestatusindex.value_namespace = name_space;
        ciscoenvmonvoltagestatusindex.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ciscoEnvMonVoltageThresholdHigh")
    {
        ciscoenvmonvoltagethresholdhigh = value;
        ciscoenvmonvoltagethresholdhigh.value_namespace = name_space;
        ciscoenvmonvoltagethresholdhigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoEnvMonVoltageThresholdLow")
    {
        ciscoenvmonvoltagethresholdlow = value;
        ciscoenvmonvoltagethresholdlow.value_namespace = name_space;
        ciscoenvmonvoltagethresholdlow.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatusentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoEnvMonVoltageStatusIndex")
    {
        ciscoenvmonvoltagestatusindex.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonVoltageLastShutdown")
    {
        ciscoenvmonvoltagelastshutdown.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonVoltageState")
    {
        ciscoenvmonvoltagestate.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonVoltageStatusDescr")
    {
        ciscoenvmonvoltagestatusdescr.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonVoltageStatusValue")
    {
        ciscoenvmonvoltagestatusvalue.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonVoltageThresholdHigh")
    {
        ciscoenvmonvoltagethresholdhigh.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonVoltageThresholdLow")
    {
        ciscoenvmonvoltagethresholdlow.yfilter = yfilter;
    }
}

bool CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatusentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoEnvMonVoltageStatusIndex" || name == "ciscoEnvMonVoltageLastShutdown" || name == "ciscoEnvMonVoltageState" || name == "ciscoEnvMonVoltageStatusDescr" || name == "ciscoEnvMonVoltageStatusValue" || name == "ciscoEnvMonVoltageThresholdHigh" || name == "ciscoEnvMonVoltageThresholdLow")
        return true;
    return false;
}

CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatustable()
{
    yang_name = "ciscoEnvMonTemperatureStatusTable"; yang_parent_name = "CISCO-ENVMON-MIB";
}

CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::~Ciscoenvmontemperaturestatustable()
{
}

bool CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::has_data() const
{
    for (std::size_t index=0; index<ciscoenvmontemperaturestatusentry.size(); index++)
    {
        if(ciscoenvmontemperaturestatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::has_operation() const
{
    for (std::size_t index=0; index<ciscoenvmontemperaturestatusentry.size(); index++)
    {
        if(ciscoenvmontemperaturestatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoEnvMonTemperatureStatusTable";

    return path_buffer.str();

}

const EntityPath CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENVMON-MIB:CISCO-ENVMON-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoEnvMonTemperatureStatusEntry")
    {
        for(auto const & c : ciscoenvmontemperaturestatusentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatusentry>();
        c->parent = this;
        ciscoenvmontemperaturestatusentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciscoenvmontemperaturestatusentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoEnvMonTemperatureStatusEntry")
        return true;
    return false;
}

CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatusentry::Ciscoenvmontemperaturestatusentry()
    :
    ciscoenvmontemperaturestatusindex{YType::int32, "ciscoEnvMonTemperatureStatusIndex"},
    ciscoenvmontemperaturelastshutdown{YType::int32, "ciscoEnvMonTemperatureLastShutdown"},
    ciscoenvmontemperaturestate{YType::enumeration, "ciscoEnvMonTemperatureState"},
    ciscoenvmontemperaturestatusdescr{YType::str, "ciscoEnvMonTemperatureStatusDescr"},
    ciscoenvmontemperaturestatusvalue{YType::uint32, "ciscoEnvMonTemperatureStatusValue"},
    ciscoenvmontemperaturethreshold{YType::int32, "ciscoEnvMonTemperatureThreshold"}
{
    yang_name = "ciscoEnvMonTemperatureStatusEntry"; yang_parent_name = "ciscoEnvMonTemperatureStatusTable";
}

CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatusentry::~Ciscoenvmontemperaturestatusentry()
{
}

bool CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatusentry::has_data() const
{
    return ciscoenvmontemperaturestatusindex.is_set
	|| ciscoenvmontemperaturelastshutdown.is_set
	|| ciscoenvmontemperaturestate.is_set
	|| ciscoenvmontemperaturestatusdescr.is_set
	|| ciscoenvmontemperaturestatusvalue.is_set
	|| ciscoenvmontemperaturethreshold.is_set;
}

bool CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatusentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoenvmontemperaturestatusindex.yfilter)
	|| ydk::is_set(ciscoenvmontemperaturelastshutdown.yfilter)
	|| ydk::is_set(ciscoenvmontemperaturestate.yfilter)
	|| ydk::is_set(ciscoenvmontemperaturestatusdescr.yfilter)
	|| ydk::is_set(ciscoenvmontemperaturestatusvalue.yfilter)
	|| ydk::is_set(ciscoenvmontemperaturethreshold.yfilter);
}

std::string CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatusentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoEnvMonTemperatureStatusEntry" <<"[ciscoEnvMonTemperatureStatusIndex='" <<ciscoenvmontemperaturestatusindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatusentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENVMON-MIB:CISCO-ENVMON-MIB/ciscoEnvMonTemperatureStatusTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoenvmontemperaturestatusindex.is_set || is_set(ciscoenvmontemperaturestatusindex.yfilter)) leaf_name_data.push_back(ciscoenvmontemperaturestatusindex.get_name_leafdata());
    if (ciscoenvmontemperaturelastshutdown.is_set || is_set(ciscoenvmontemperaturelastshutdown.yfilter)) leaf_name_data.push_back(ciscoenvmontemperaturelastshutdown.get_name_leafdata());
    if (ciscoenvmontemperaturestate.is_set || is_set(ciscoenvmontemperaturestate.yfilter)) leaf_name_data.push_back(ciscoenvmontemperaturestate.get_name_leafdata());
    if (ciscoenvmontemperaturestatusdescr.is_set || is_set(ciscoenvmontemperaturestatusdescr.yfilter)) leaf_name_data.push_back(ciscoenvmontemperaturestatusdescr.get_name_leafdata());
    if (ciscoenvmontemperaturestatusvalue.is_set || is_set(ciscoenvmontemperaturestatusvalue.yfilter)) leaf_name_data.push_back(ciscoenvmontemperaturestatusvalue.get_name_leafdata());
    if (ciscoenvmontemperaturethreshold.is_set || is_set(ciscoenvmontemperaturethreshold.yfilter)) leaf_name_data.push_back(ciscoenvmontemperaturethreshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatusentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatusentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatusentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoEnvMonTemperatureStatusIndex")
    {
        ciscoenvmontemperaturestatusindex = value;
        ciscoenvmontemperaturestatusindex.value_namespace = name_space;
        ciscoenvmontemperaturestatusindex.value_namespace_prefix = name_space_prefix;
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
}

void CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatusentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoEnvMonTemperatureStatusIndex")
    {
        ciscoenvmontemperaturestatusindex.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonTemperatureLastShutdown")
    {
        ciscoenvmontemperaturelastshutdown.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonTemperatureState")
    {
        ciscoenvmontemperaturestate.yfilter = yfilter;
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
}

bool CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatusentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoEnvMonTemperatureStatusIndex" || name == "ciscoEnvMonTemperatureLastShutdown" || name == "ciscoEnvMonTemperatureState" || name == "ciscoEnvMonTemperatureStatusDescr" || name == "ciscoEnvMonTemperatureStatusValue" || name == "ciscoEnvMonTemperatureThreshold")
        return true;
    return false;
}

CiscoEnvmonMib::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatustable()
{
    yang_name = "ciscoEnvMonFanStatusTable"; yang_parent_name = "CISCO-ENVMON-MIB";
}

CiscoEnvmonMib::Ciscoenvmonfanstatustable::~Ciscoenvmonfanstatustable()
{
}

bool CiscoEnvmonMib::Ciscoenvmonfanstatustable::has_data() const
{
    for (std::size_t index=0; index<ciscoenvmonfanstatusentry.size(); index++)
    {
        if(ciscoenvmonfanstatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEnvmonMib::Ciscoenvmonfanstatustable::has_operation() const
{
    for (std::size_t index=0; index<ciscoenvmonfanstatusentry.size(); index++)
    {
        if(ciscoenvmonfanstatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEnvmonMib::Ciscoenvmonfanstatustable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoEnvMonFanStatusTable";

    return path_buffer.str();

}

const EntityPath CiscoEnvmonMib::Ciscoenvmonfanstatustable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENVMON-MIB:CISCO-ENVMON-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEnvmonMib::Ciscoenvmonfanstatustable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoEnvMonFanStatusEntry")
    {
        for(auto const & c : ciscoenvmonfanstatusentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEnvmonMib::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatusentry>();
        c->parent = this;
        ciscoenvmonfanstatusentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEnvmonMib::Ciscoenvmonfanstatustable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciscoenvmonfanstatusentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEnvmonMib::Ciscoenvmonfanstatustable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEnvmonMib::Ciscoenvmonfanstatustable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEnvmonMib::Ciscoenvmonfanstatustable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoEnvMonFanStatusEntry")
        return true;
    return false;
}

CiscoEnvmonMib::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatusentry::Ciscoenvmonfanstatusentry()
    :
    ciscoenvmonfanstatusindex{YType::int32, "ciscoEnvMonFanStatusIndex"},
    ciscoenvmonfanstate{YType::enumeration, "ciscoEnvMonFanState"},
    ciscoenvmonfanstatusdescr{YType::str, "ciscoEnvMonFanStatusDescr"}
{
    yang_name = "ciscoEnvMonFanStatusEntry"; yang_parent_name = "ciscoEnvMonFanStatusTable";
}

CiscoEnvmonMib::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatusentry::~Ciscoenvmonfanstatusentry()
{
}

bool CiscoEnvmonMib::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatusentry::has_data() const
{
    return ciscoenvmonfanstatusindex.is_set
	|| ciscoenvmonfanstate.is_set
	|| ciscoenvmonfanstatusdescr.is_set;
}

bool CiscoEnvmonMib::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatusentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoenvmonfanstatusindex.yfilter)
	|| ydk::is_set(ciscoenvmonfanstate.yfilter)
	|| ydk::is_set(ciscoenvmonfanstatusdescr.yfilter);
}

std::string CiscoEnvmonMib::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatusentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoEnvMonFanStatusEntry" <<"[ciscoEnvMonFanStatusIndex='" <<ciscoenvmonfanstatusindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEnvmonMib::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatusentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENVMON-MIB:CISCO-ENVMON-MIB/ciscoEnvMonFanStatusTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoenvmonfanstatusindex.is_set || is_set(ciscoenvmonfanstatusindex.yfilter)) leaf_name_data.push_back(ciscoenvmonfanstatusindex.get_name_leafdata());
    if (ciscoenvmonfanstate.is_set || is_set(ciscoenvmonfanstate.yfilter)) leaf_name_data.push_back(ciscoenvmonfanstate.get_name_leafdata());
    if (ciscoenvmonfanstatusdescr.is_set || is_set(ciscoenvmonfanstatusdescr.yfilter)) leaf_name_data.push_back(ciscoenvmonfanstatusdescr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEnvmonMib::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatusentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEnvmonMib::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatusentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEnvmonMib::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatusentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoEnvMonFanStatusIndex")
    {
        ciscoenvmonfanstatusindex = value;
        ciscoenvmonfanstatusindex.value_namespace = name_space;
        ciscoenvmonfanstatusindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoEnvMonFanState")
    {
        ciscoenvmonfanstate = value;
        ciscoenvmonfanstate.value_namespace = name_space;
        ciscoenvmonfanstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoEnvMonFanStatusDescr")
    {
        ciscoenvmonfanstatusdescr = value;
        ciscoenvmonfanstatusdescr.value_namespace = name_space;
        ciscoenvmonfanstatusdescr.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEnvmonMib::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatusentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoEnvMonFanStatusIndex")
    {
        ciscoenvmonfanstatusindex.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonFanState")
    {
        ciscoenvmonfanstate.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonFanStatusDescr")
    {
        ciscoenvmonfanstatusdescr.yfilter = yfilter;
    }
}

bool CiscoEnvmonMib::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatusentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoEnvMonFanStatusIndex" || name == "ciscoEnvMonFanState" || name == "ciscoEnvMonFanStatusDescr")
        return true;
    return false;
}

CiscoEnvmonMib::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatustable()
{
    yang_name = "ciscoEnvMonSupplyStatusTable"; yang_parent_name = "CISCO-ENVMON-MIB";
}

CiscoEnvmonMib::Ciscoenvmonsupplystatustable::~Ciscoenvmonsupplystatustable()
{
}

bool CiscoEnvmonMib::Ciscoenvmonsupplystatustable::has_data() const
{
    for (std::size_t index=0; index<ciscoenvmonsupplystatusentry.size(); index++)
    {
        if(ciscoenvmonsupplystatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEnvmonMib::Ciscoenvmonsupplystatustable::has_operation() const
{
    for (std::size_t index=0; index<ciscoenvmonsupplystatusentry.size(); index++)
    {
        if(ciscoenvmonsupplystatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEnvmonMib::Ciscoenvmonsupplystatustable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoEnvMonSupplyStatusTable";

    return path_buffer.str();

}

const EntityPath CiscoEnvmonMib::Ciscoenvmonsupplystatustable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENVMON-MIB:CISCO-ENVMON-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEnvmonMib::Ciscoenvmonsupplystatustable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoEnvMonSupplyStatusEntry")
    {
        for(auto const & c : ciscoenvmonsupplystatusentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEnvmonMib::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry>();
        c->parent = this;
        ciscoenvmonsupplystatusentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEnvmonMib::Ciscoenvmonsupplystatustable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciscoenvmonsupplystatusentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEnvmonMib::Ciscoenvmonsupplystatustable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEnvmonMib::Ciscoenvmonsupplystatustable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEnvmonMib::Ciscoenvmonsupplystatustable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoEnvMonSupplyStatusEntry")
        return true;
    return false;
}

CiscoEnvmonMib::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::Ciscoenvmonsupplystatusentry()
    :
    ciscoenvmonsupplystatusindex{YType::int32, "ciscoEnvMonSupplyStatusIndex"},
    ciscoenvmonsupplysource{YType::enumeration, "ciscoEnvMonSupplySource"},
    ciscoenvmonsupplystate{YType::enumeration, "ciscoEnvMonSupplyState"},
    ciscoenvmonsupplystatusdescr{YType::str, "ciscoEnvMonSupplyStatusDescr"}
{
    yang_name = "ciscoEnvMonSupplyStatusEntry"; yang_parent_name = "ciscoEnvMonSupplyStatusTable";
}

CiscoEnvmonMib::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::~Ciscoenvmonsupplystatusentry()
{
}

bool CiscoEnvmonMib::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::has_data() const
{
    return ciscoenvmonsupplystatusindex.is_set
	|| ciscoenvmonsupplysource.is_set
	|| ciscoenvmonsupplystate.is_set
	|| ciscoenvmonsupplystatusdescr.is_set;
}

bool CiscoEnvmonMib::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoenvmonsupplystatusindex.yfilter)
	|| ydk::is_set(ciscoenvmonsupplysource.yfilter)
	|| ydk::is_set(ciscoenvmonsupplystate.yfilter)
	|| ydk::is_set(ciscoenvmonsupplystatusdescr.yfilter);
}

std::string CiscoEnvmonMib::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoEnvMonSupplyStatusEntry" <<"[ciscoEnvMonSupplyStatusIndex='" <<ciscoenvmonsupplystatusindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEnvmonMib::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENVMON-MIB:CISCO-ENVMON-MIB/ciscoEnvMonSupplyStatusTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoenvmonsupplystatusindex.is_set || is_set(ciscoenvmonsupplystatusindex.yfilter)) leaf_name_data.push_back(ciscoenvmonsupplystatusindex.get_name_leafdata());
    if (ciscoenvmonsupplysource.is_set || is_set(ciscoenvmonsupplysource.yfilter)) leaf_name_data.push_back(ciscoenvmonsupplysource.get_name_leafdata());
    if (ciscoenvmonsupplystate.is_set || is_set(ciscoenvmonsupplystate.yfilter)) leaf_name_data.push_back(ciscoenvmonsupplystate.get_name_leafdata());
    if (ciscoenvmonsupplystatusdescr.is_set || is_set(ciscoenvmonsupplystatusdescr.yfilter)) leaf_name_data.push_back(ciscoenvmonsupplystatusdescr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEnvmonMib::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEnvmonMib::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEnvmonMib::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoEnvMonSupplyStatusIndex")
    {
        ciscoenvmonsupplystatusindex = value;
        ciscoenvmonsupplystatusindex.value_namespace = name_space;
        ciscoenvmonsupplystatusindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoEnvMonSupplySource")
    {
        ciscoenvmonsupplysource = value;
        ciscoenvmonsupplysource.value_namespace = name_space;
        ciscoenvmonsupplysource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoEnvMonSupplyState")
    {
        ciscoenvmonsupplystate = value;
        ciscoenvmonsupplystate.value_namespace = name_space;
        ciscoenvmonsupplystate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoEnvMonSupplyStatusDescr")
    {
        ciscoenvmonsupplystatusdescr = value;
        ciscoenvmonsupplystatusdescr.value_namespace = name_space;
        ciscoenvmonsupplystatusdescr.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEnvmonMib::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoEnvMonSupplyStatusIndex")
    {
        ciscoenvmonsupplystatusindex.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonSupplySource")
    {
        ciscoenvmonsupplysource.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonSupplyState")
    {
        ciscoenvmonsupplystate.yfilter = yfilter;
    }
    if(value_path == "ciscoEnvMonSupplyStatusDescr")
    {
        ciscoenvmonsupplystatusdescr.yfilter = yfilter;
    }
}

bool CiscoEnvmonMib::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoEnvMonSupplyStatusIndex" || name == "ciscoEnvMonSupplySource" || name == "ciscoEnvMonSupplyState" || name == "ciscoEnvMonSupplyStatusDescr")
        return true;
    return false;
}

const Enum::YLeaf Ciscoenvmonstate::normal {1, "normal"};
const Enum::YLeaf Ciscoenvmonstate::warning {2, "warning"};
const Enum::YLeaf Ciscoenvmonstate::critical {3, "critical"};
const Enum::YLeaf Ciscoenvmonstate::shutdown {4, "shutdown"};
const Enum::YLeaf Ciscoenvmonstate::notPresent {5, "notPresent"};
const Enum::YLeaf Ciscoenvmonstate::notFunctioning {6, "notFunctioning"};

const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonobjects::Ciscoenvmonpresent::oldAgs {1, "oldAgs"};
const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonobjects::Ciscoenvmonpresent::ags {2, "ags"};
const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonobjects::Ciscoenvmonpresent::c7000 {3, "c7000"};
const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonobjects::Ciscoenvmonpresent::ci {4, "ci"};
const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonobjects::Ciscoenvmonpresent::cAccessMon {6, "cAccessMon"};
const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonobjects::Ciscoenvmonpresent::cat6000 {7, "cat6000"};
const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonobjects::Ciscoenvmonpresent::ubr7200 {8, "ubr7200"};
const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonobjects::Ciscoenvmonpresent::cat4000 {9, "cat4000"};
const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonobjects::Ciscoenvmonpresent::c10000 {10, "c10000"};
const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonobjects::Ciscoenvmonpresent::osr7600 {11, "osr7600"};
const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonobjects::Ciscoenvmonpresent::c7600 {12, "c7600"};
const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonobjects::Ciscoenvmonpresent::c37xx {13, "c37xx"};
const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonobjects::Ciscoenvmonpresent::other {14, "other"};

const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::Ciscoenvmonsupplysource::unknown {1, "unknown"};
const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::Ciscoenvmonsupplysource::ac {2, "ac"};
const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::Ciscoenvmonsupplysource::dc {3, "dc"};
const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::Ciscoenvmonsupplysource::externalPowerSupply {4, "externalPowerSupply"};
const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::Ciscoenvmonsupplysource::internalRedundant {5, "internalRedundant"};


}
}

