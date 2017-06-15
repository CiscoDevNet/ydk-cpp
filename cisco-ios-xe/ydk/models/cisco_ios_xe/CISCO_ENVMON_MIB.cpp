
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_ENVMON_MIB.hpp"

namespace ydk {
namespace CISCO_ENVMON_MIB {

CiscoEnvmonMib::CiscoEnvmonMib()
    :
    ciscoenvmonfanstatustable_(std::make_shared<CiscoEnvmonMib::Ciscoenvmonfanstatustable>())
	,ciscoenvmonmibnotificationenables_(std::make_shared<CiscoEnvmonMib::Ciscoenvmonmibnotificationenables>())
	,ciscoenvmonobjects_(std::make_shared<CiscoEnvmonMib::Ciscoenvmonobjects>())
	,ciscoenvmonsupplystatustable_(std::make_shared<CiscoEnvmonMib::Ciscoenvmonsupplystatustable>())
	,ciscoenvmontemperaturestatustable_(std::make_shared<CiscoEnvmonMib::Ciscoenvmontemperaturestatustable>())
	,ciscoenvmonvoltagestatustable_(std::make_shared<CiscoEnvmonMib::Ciscoenvmonvoltagestatustable>())
{
    ciscoenvmonfanstatustable_->parent = this;

    ciscoenvmonmibnotificationenables_->parent = this;

    ciscoenvmonobjects_->parent = this;

    ciscoenvmonsupplystatustable_->parent = this;

    ciscoenvmontemperaturestatustable_->parent = this;

    ciscoenvmonvoltagestatustable_->parent = this;

    yang_name = "CISCO-ENVMON-MIB"; yang_parent_name = "CISCO-ENVMON-MIB";
}

CiscoEnvmonMib::~CiscoEnvmonMib()
{
}

bool CiscoEnvmonMib::has_data() const
{
    return (ciscoenvmonfanstatustable_ !=  nullptr && ciscoenvmonfanstatustable_->has_data())
	|| (ciscoenvmonmibnotificationenables_ !=  nullptr && ciscoenvmonmibnotificationenables_->has_data())
	|| (ciscoenvmonobjects_ !=  nullptr && ciscoenvmonobjects_->has_data())
	|| (ciscoenvmonsupplystatustable_ !=  nullptr && ciscoenvmonsupplystatustable_->has_data())
	|| (ciscoenvmontemperaturestatustable_ !=  nullptr && ciscoenvmontemperaturestatustable_->has_data())
	|| (ciscoenvmonvoltagestatustable_ !=  nullptr && ciscoenvmonvoltagestatustable_->has_data());
}

bool CiscoEnvmonMib::has_operation() const
{
    return is_set(operation)
	|| (ciscoenvmonfanstatustable_ !=  nullptr && ciscoenvmonfanstatustable_->has_operation())
	|| (ciscoenvmonmibnotificationenables_ !=  nullptr && ciscoenvmonmibnotificationenables_->has_operation())
	|| (ciscoenvmonobjects_ !=  nullptr && ciscoenvmonobjects_->has_operation())
	|| (ciscoenvmonsupplystatustable_ !=  nullptr && ciscoenvmonsupplystatustable_->has_operation())
	|| (ciscoenvmontemperaturestatustable_ !=  nullptr && ciscoenvmontemperaturestatustable_->has_operation())
	|| (ciscoenvmonvoltagestatustable_ !=  nullptr && ciscoenvmonvoltagestatustable_->has_operation());
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
        if(ciscoenvmonfanstatustable_ == nullptr)
        {
            ciscoenvmonfanstatustable_ = std::make_shared<CiscoEnvmonMib::Ciscoenvmonfanstatustable>();
        }
        return ciscoenvmonfanstatustable_;
    }

    if(child_yang_name == "ciscoEnvMonMIBNotificationEnables")
    {
        if(ciscoenvmonmibnotificationenables_ == nullptr)
        {
            ciscoenvmonmibnotificationenables_ = std::make_shared<CiscoEnvmonMib::Ciscoenvmonmibnotificationenables>();
        }
        return ciscoenvmonmibnotificationenables_;
    }

    if(child_yang_name == "ciscoEnvMonObjects")
    {
        if(ciscoenvmonobjects_ == nullptr)
        {
            ciscoenvmonobjects_ = std::make_shared<CiscoEnvmonMib::Ciscoenvmonobjects>();
        }
        return ciscoenvmonobjects_;
    }

    if(child_yang_name == "ciscoEnvMonSupplyStatusTable")
    {
        if(ciscoenvmonsupplystatustable_ == nullptr)
        {
            ciscoenvmonsupplystatustable_ = std::make_shared<CiscoEnvmonMib::Ciscoenvmonsupplystatustable>();
        }
        return ciscoenvmonsupplystatustable_;
    }

    if(child_yang_name == "ciscoEnvMonTemperatureStatusTable")
    {
        if(ciscoenvmontemperaturestatustable_ == nullptr)
        {
            ciscoenvmontemperaturestatustable_ = std::make_shared<CiscoEnvmonMib::Ciscoenvmontemperaturestatustable>();
        }
        return ciscoenvmontemperaturestatustable_;
    }

    if(child_yang_name == "ciscoEnvMonVoltageStatusTable")
    {
        if(ciscoenvmonvoltagestatustable_ == nullptr)
        {
            ciscoenvmonvoltagestatustable_ = std::make_shared<CiscoEnvmonMib::Ciscoenvmonvoltagestatustable>();
        }
        return ciscoenvmonvoltagestatustable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEnvmonMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ciscoenvmonfanstatustable_ != nullptr)
    {
        children["ciscoEnvMonFanStatusTable"] = ciscoenvmonfanstatustable_;
    }

    if(ciscoenvmonmibnotificationenables_ != nullptr)
    {
        children["ciscoEnvMonMIBNotificationEnables"] = ciscoenvmonmibnotificationenables_;
    }

    if(ciscoenvmonobjects_ != nullptr)
    {
        children["ciscoEnvMonObjects"] = ciscoenvmonobjects_;
    }

    if(ciscoenvmonsupplystatustable_ != nullptr)
    {
        children["ciscoEnvMonSupplyStatusTable"] = ciscoenvmonsupplystatustable_;
    }

    if(ciscoenvmontemperaturestatustable_ != nullptr)
    {
        children["ciscoEnvMonTemperatureStatusTable"] = ciscoenvmontemperaturestatustable_;
    }

    if(ciscoenvmonvoltagestatustable_ != nullptr)
    {
        children["ciscoEnvMonVoltageStatusTable"] = ciscoenvmonvoltagestatustable_;
    }

    return children;
}

void CiscoEnvmonMib::set_value(const std::string & value_path, std::string value)
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
    return is_set(operation)
	|| is_set(ciscoenvmonalarmcontacts.operation)
	|| is_set(ciscoenvmonpresent.operation);
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

    if (ciscoenvmonalarmcontacts.is_set || is_set(ciscoenvmonalarmcontacts.operation)) leaf_name_data.push_back(ciscoenvmonalarmcontacts.get_name_leafdata());
    if (ciscoenvmonpresent.is_set || is_set(ciscoenvmonpresent.operation)) leaf_name_data.push_back(ciscoenvmonpresent.get_name_leafdata());


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

void CiscoEnvmonMib::Ciscoenvmonobjects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciscoEnvMonAlarmContacts")
    {
        ciscoenvmonalarmcontacts[value] = true;
    }
    if(value_path == "ciscoEnvMonPresent")
    {
        ciscoenvmonpresent = value;
    }
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
    return is_set(operation)
	|| is_set(ciscoenvmonenablefannotification.operation)
	|| is_set(ciscoenvmonenableredundantsupplynotification.operation)
	|| is_set(ciscoenvmonenableshutdownnotification.operation)
	|| is_set(ciscoenvmonenablestatchangenotif.operation)
	|| is_set(ciscoenvmonenabletemperaturenotification.operation)
	|| is_set(ciscoenvmonenablevoltagenotification.operation);
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

    if (ciscoenvmonenablefannotification.is_set || is_set(ciscoenvmonenablefannotification.operation)) leaf_name_data.push_back(ciscoenvmonenablefannotification.get_name_leafdata());
    if (ciscoenvmonenableredundantsupplynotification.is_set || is_set(ciscoenvmonenableredundantsupplynotification.operation)) leaf_name_data.push_back(ciscoenvmonenableredundantsupplynotification.get_name_leafdata());
    if (ciscoenvmonenableshutdownnotification.is_set || is_set(ciscoenvmonenableshutdownnotification.operation)) leaf_name_data.push_back(ciscoenvmonenableshutdownnotification.get_name_leafdata());
    if (ciscoenvmonenablestatchangenotif.is_set || is_set(ciscoenvmonenablestatchangenotif.operation)) leaf_name_data.push_back(ciscoenvmonenablestatchangenotif.get_name_leafdata());
    if (ciscoenvmonenabletemperaturenotification.is_set || is_set(ciscoenvmonenabletemperaturenotification.operation)) leaf_name_data.push_back(ciscoenvmonenabletemperaturenotification.get_name_leafdata());
    if (ciscoenvmonenablevoltagenotification.is_set || is_set(ciscoenvmonenablevoltagenotification.operation)) leaf_name_data.push_back(ciscoenvmonenablevoltagenotification.get_name_leafdata());


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

void CiscoEnvmonMib::Ciscoenvmonmibnotificationenables::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciscoEnvMonEnableFanNotification")
    {
        ciscoenvmonenablefannotification = value;
    }
    if(value_path == "ciscoEnvMonEnableRedundantSupplyNotification")
    {
        ciscoenvmonenableredundantsupplynotification = value;
    }
    if(value_path == "ciscoEnvMonEnableShutdownNotification")
    {
        ciscoenvmonenableshutdownnotification = value;
    }
    if(value_path == "ciscoEnvMonEnableStatChangeNotif")
    {
        ciscoenvmonenablestatchangenotif = value;
    }
    if(value_path == "ciscoEnvMonEnableTemperatureNotification")
    {
        ciscoenvmonenabletemperaturenotification = value;
    }
    if(value_path == "ciscoEnvMonEnableVoltageNotification")
    {
        ciscoenvmonenablevoltagenotification = value;
    }
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
    for (std::size_t index=0; index<ciscoenvmonvoltagestatusentry_.size(); index++)
    {
        if(ciscoenvmonvoltagestatusentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::has_operation() const
{
    for (std::size_t index=0; index<ciscoenvmonvoltagestatusentry_.size(); index++)
    {
        if(ciscoenvmonvoltagestatusentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : ciscoenvmonvoltagestatusentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatusentry>();
        c->parent = this;
        ciscoenvmonvoltagestatusentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciscoenvmonvoltagestatusentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ciscoenvmonvoltagestatusindex.operation)
	|| is_set(ciscoenvmonvoltagelastshutdown.operation)
	|| is_set(ciscoenvmonvoltagestate.operation)
	|| is_set(ciscoenvmonvoltagestatusdescr.operation)
	|| is_set(ciscoenvmonvoltagestatusvalue.operation)
	|| is_set(ciscoenvmonvoltagethresholdhigh.operation)
	|| is_set(ciscoenvmonvoltagethresholdlow.operation);
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

    if (ciscoenvmonvoltagestatusindex.is_set || is_set(ciscoenvmonvoltagestatusindex.operation)) leaf_name_data.push_back(ciscoenvmonvoltagestatusindex.get_name_leafdata());
    if (ciscoenvmonvoltagelastshutdown.is_set || is_set(ciscoenvmonvoltagelastshutdown.operation)) leaf_name_data.push_back(ciscoenvmonvoltagelastshutdown.get_name_leafdata());
    if (ciscoenvmonvoltagestate.is_set || is_set(ciscoenvmonvoltagestate.operation)) leaf_name_data.push_back(ciscoenvmonvoltagestate.get_name_leafdata());
    if (ciscoenvmonvoltagestatusdescr.is_set || is_set(ciscoenvmonvoltagestatusdescr.operation)) leaf_name_data.push_back(ciscoenvmonvoltagestatusdescr.get_name_leafdata());
    if (ciscoenvmonvoltagestatusvalue.is_set || is_set(ciscoenvmonvoltagestatusvalue.operation)) leaf_name_data.push_back(ciscoenvmonvoltagestatusvalue.get_name_leafdata());
    if (ciscoenvmonvoltagethresholdhigh.is_set || is_set(ciscoenvmonvoltagethresholdhigh.operation)) leaf_name_data.push_back(ciscoenvmonvoltagethresholdhigh.get_name_leafdata());
    if (ciscoenvmonvoltagethresholdlow.is_set || is_set(ciscoenvmonvoltagethresholdlow.operation)) leaf_name_data.push_back(ciscoenvmonvoltagethresholdlow.get_name_leafdata());


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

void CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatusentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciscoEnvMonVoltageStatusIndex")
    {
        ciscoenvmonvoltagestatusindex = value;
    }
    if(value_path == "ciscoEnvMonVoltageLastShutdown")
    {
        ciscoenvmonvoltagelastshutdown = value;
    }
    if(value_path == "ciscoEnvMonVoltageState")
    {
        ciscoenvmonvoltagestate = value;
    }
    if(value_path == "ciscoEnvMonVoltageStatusDescr")
    {
        ciscoenvmonvoltagestatusdescr = value;
    }
    if(value_path == "ciscoEnvMonVoltageStatusValue")
    {
        ciscoenvmonvoltagestatusvalue = value;
    }
    if(value_path == "ciscoEnvMonVoltageThresholdHigh")
    {
        ciscoenvmonvoltagethresholdhigh = value;
    }
    if(value_path == "ciscoEnvMonVoltageThresholdLow")
    {
        ciscoenvmonvoltagethresholdlow = value;
    }
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
    for (std::size_t index=0; index<ciscoenvmontemperaturestatusentry_.size(); index++)
    {
        if(ciscoenvmontemperaturestatusentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::has_operation() const
{
    for (std::size_t index=0; index<ciscoenvmontemperaturestatusentry_.size(); index++)
    {
        if(ciscoenvmontemperaturestatusentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : ciscoenvmontemperaturestatusentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatusentry>();
        c->parent = this;
        ciscoenvmontemperaturestatusentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciscoenvmontemperaturestatusentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ciscoenvmontemperaturestatusindex.operation)
	|| is_set(ciscoenvmontemperaturelastshutdown.operation)
	|| is_set(ciscoenvmontemperaturestate.operation)
	|| is_set(ciscoenvmontemperaturestatusdescr.operation)
	|| is_set(ciscoenvmontemperaturestatusvalue.operation)
	|| is_set(ciscoenvmontemperaturethreshold.operation);
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

    if (ciscoenvmontemperaturestatusindex.is_set || is_set(ciscoenvmontemperaturestatusindex.operation)) leaf_name_data.push_back(ciscoenvmontemperaturestatusindex.get_name_leafdata());
    if (ciscoenvmontemperaturelastshutdown.is_set || is_set(ciscoenvmontemperaturelastshutdown.operation)) leaf_name_data.push_back(ciscoenvmontemperaturelastshutdown.get_name_leafdata());
    if (ciscoenvmontemperaturestate.is_set || is_set(ciscoenvmontemperaturestate.operation)) leaf_name_data.push_back(ciscoenvmontemperaturestate.get_name_leafdata());
    if (ciscoenvmontemperaturestatusdescr.is_set || is_set(ciscoenvmontemperaturestatusdescr.operation)) leaf_name_data.push_back(ciscoenvmontemperaturestatusdescr.get_name_leafdata());
    if (ciscoenvmontemperaturestatusvalue.is_set || is_set(ciscoenvmontemperaturestatusvalue.operation)) leaf_name_data.push_back(ciscoenvmontemperaturestatusvalue.get_name_leafdata());
    if (ciscoenvmontemperaturethreshold.is_set || is_set(ciscoenvmontemperaturethreshold.operation)) leaf_name_data.push_back(ciscoenvmontemperaturethreshold.get_name_leafdata());


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

void CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatusentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciscoEnvMonTemperatureStatusIndex")
    {
        ciscoenvmontemperaturestatusindex = value;
    }
    if(value_path == "ciscoEnvMonTemperatureLastShutdown")
    {
        ciscoenvmontemperaturelastshutdown = value;
    }
    if(value_path == "ciscoEnvMonTemperatureState")
    {
        ciscoenvmontemperaturestate = value;
    }
    if(value_path == "ciscoEnvMonTemperatureStatusDescr")
    {
        ciscoenvmontemperaturestatusdescr = value;
    }
    if(value_path == "ciscoEnvMonTemperatureStatusValue")
    {
        ciscoenvmontemperaturestatusvalue = value;
    }
    if(value_path == "ciscoEnvMonTemperatureThreshold")
    {
        ciscoenvmontemperaturethreshold = value;
    }
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
    for (std::size_t index=0; index<ciscoenvmonfanstatusentry_.size(); index++)
    {
        if(ciscoenvmonfanstatusentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEnvmonMib::Ciscoenvmonfanstatustable::has_operation() const
{
    for (std::size_t index=0; index<ciscoenvmonfanstatusentry_.size(); index++)
    {
        if(ciscoenvmonfanstatusentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : ciscoenvmonfanstatusentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEnvmonMib::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatusentry>();
        c->parent = this;
        ciscoenvmonfanstatusentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEnvmonMib::Ciscoenvmonfanstatustable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciscoenvmonfanstatusentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEnvmonMib::Ciscoenvmonfanstatustable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ciscoenvmonfanstatusindex.operation)
	|| is_set(ciscoenvmonfanstate.operation)
	|| is_set(ciscoenvmonfanstatusdescr.operation);
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

    if (ciscoenvmonfanstatusindex.is_set || is_set(ciscoenvmonfanstatusindex.operation)) leaf_name_data.push_back(ciscoenvmonfanstatusindex.get_name_leafdata());
    if (ciscoenvmonfanstate.is_set || is_set(ciscoenvmonfanstate.operation)) leaf_name_data.push_back(ciscoenvmonfanstate.get_name_leafdata());
    if (ciscoenvmonfanstatusdescr.is_set || is_set(ciscoenvmonfanstatusdescr.operation)) leaf_name_data.push_back(ciscoenvmonfanstatusdescr.get_name_leafdata());


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

void CiscoEnvmonMib::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatusentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciscoEnvMonFanStatusIndex")
    {
        ciscoenvmonfanstatusindex = value;
    }
    if(value_path == "ciscoEnvMonFanState")
    {
        ciscoenvmonfanstate = value;
    }
    if(value_path == "ciscoEnvMonFanStatusDescr")
    {
        ciscoenvmonfanstatusdescr = value;
    }
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
    for (std::size_t index=0; index<ciscoenvmonsupplystatusentry_.size(); index++)
    {
        if(ciscoenvmonsupplystatusentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEnvmonMib::Ciscoenvmonsupplystatustable::has_operation() const
{
    for (std::size_t index=0; index<ciscoenvmonsupplystatusentry_.size(); index++)
    {
        if(ciscoenvmonsupplystatusentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : ciscoenvmonsupplystatusentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEnvmonMib::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry>();
        c->parent = this;
        ciscoenvmonsupplystatusentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEnvmonMib::Ciscoenvmonsupplystatustable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciscoenvmonsupplystatusentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEnvmonMib::Ciscoenvmonsupplystatustable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ciscoenvmonsupplystatusindex.operation)
	|| is_set(ciscoenvmonsupplysource.operation)
	|| is_set(ciscoenvmonsupplystate.operation)
	|| is_set(ciscoenvmonsupplystatusdescr.operation);
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

    if (ciscoenvmonsupplystatusindex.is_set || is_set(ciscoenvmonsupplystatusindex.operation)) leaf_name_data.push_back(ciscoenvmonsupplystatusindex.get_name_leafdata());
    if (ciscoenvmonsupplysource.is_set || is_set(ciscoenvmonsupplysource.operation)) leaf_name_data.push_back(ciscoenvmonsupplysource.get_name_leafdata());
    if (ciscoenvmonsupplystate.is_set || is_set(ciscoenvmonsupplystate.operation)) leaf_name_data.push_back(ciscoenvmonsupplystate.get_name_leafdata());
    if (ciscoenvmonsupplystatusdescr.is_set || is_set(ciscoenvmonsupplystatusdescr.operation)) leaf_name_data.push_back(ciscoenvmonsupplystatusdescr.get_name_leafdata());


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

void CiscoEnvmonMib::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciscoEnvMonSupplyStatusIndex")
    {
        ciscoenvmonsupplystatusindex = value;
    }
    if(value_path == "ciscoEnvMonSupplySource")
    {
        ciscoenvmonsupplysource = value;
    }
    if(value_path == "ciscoEnvMonSupplyState")
    {
        ciscoenvmonsupplystate = value;
    }
    if(value_path == "ciscoEnvMonSupplyStatusDescr")
    {
        ciscoenvmonsupplystatusdescr = value;
    }
}

const Enum::YLeaf CiscoenvmonstateEnum::normal {1, "normal"};
const Enum::YLeaf CiscoenvmonstateEnum::warning {2, "warning"};
const Enum::YLeaf CiscoenvmonstateEnum::critical {3, "critical"};
const Enum::YLeaf CiscoenvmonstateEnum::shutdown {4, "shutdown"};
const Enum::YLeaf CiscoenvmonstateEnum::notPresent {5, "notPresent"};
const Enum::YLeaf CiscoenvmonstateEnum::notFunctioning {6, "notFunctioning"};

const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonobjects::CiscoenvmonpresentEnum::oldAgs {1, "oldAgs"};
const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonobjects::CiscoenvmonpresentEnum::ags {2, "ags"};
const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonobjects::CiscoenvmonpresentEnum::c7000 {3, "c7000"};
const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonobjects::CiscoenvmonpresentEnum::ci {4, "ci"};
const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonobjects::CiscoenvmonpresentEnum::cAccessMon {6, "cAccessMon"};
const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonobjects::CiscoenvmonpresentEnum::cat6000 {7, "cat6000"};
const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonobjects::CiscoenvmonpresentEnum::ubr7200 {8, "ubr7200"};
const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonobjects::CiscoenvmonpresentEnum::cat4000 {9, "cat4000"};
const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonobjects::CiscoenvmonpresentEnum::c10000 {10, "c10000"};
const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonobjects::CiscoenvmonpresentEnum::osr7600 {11, "osr7600"};
const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonobjects::CiscoenvmonpresentEnum::c7600 {12, "c7600"};
const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonobjects::CiscoenvmonpresentEnum::c37xx {13, "c37xx"};
const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonobjects::CiscoenvmonpresentEnum::other {14, "other"};

const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::CiscoenvmonsupplysourceEnum::unknown {1, "unknown"};
const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::CiscoenvmonsupplysourceEnum::ac {2, "ac"};
const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::CiscoenvmonsupplysourceEnum::dc {3, "dc"};
const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::CiscoenvmonsupplysourceEnum::externalPowerSupply {4, "externalPowerSupply"};
const Enum::YLeaf CiscoEnvmonMib::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::CiscoenvmonsupplysourceEnum::internalRedundant {5, "internalRedundant"};


}
}

