
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_ENTITY_SENSOR_MIB.hpp"

namespace ydk {
namespace CISCO_ENTITY_SENSOR_MIB {

CiscoEntitySensorMib::CiscoEntitySensorMib()
    :
    entsensorglobalobjects(std::make_shared<CiscoEntitySensorMib::Entsensorglobalobjects>())
	,entsensorthresholdtable(std::make_shared<CiscoEntitySensorMib::Entsensorthresholdtable>())
	,entsensorvaluetable(std::make_shared<CiscoEntitySensorMib::Entsensorvaluetable>())
{
    entsensorglobalobjects->parent = this;

    entsensorthresholdtable->parent = this;

    entsensorvaluetable->parent = this;

    yang_name = "CISCO-ENTITY-SENSOR-MIB"; yang_parent_name = "CISCO-ENTITY-SENSOR-MIB";
}

CiscoEntitySensorMib::~CiscoEntitySensorMib()
{
}

bool CiscoEntitySensorMib::has_data() const
{
    return (entsensorglobalobjects !=  nullptr && entsensorglobalobjects->has_data())
	|| (entsensorthresholdtable !=  nullptr && entsensorthresholdtable->has_data())
	|| (entsensorvaluetable !=  nullptr && entsensorvaluetable->has_data());
}

bool CiscoEntitySensorMib::has_operation() const
{
    return is_set(operation)
	|| (entsensorglobalobjects !=  nullptr && entsensorglobalobjects->has_operation())
	|| (entsensorthresholdtable !=  nullptr && entsensorthresholdtable->has_operation())
	|| (entsensorvaluetable !=  nullptr && entsensorvaluetable->has_operation());
}

std::string CiscoEntitySensorMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-SENSOR-MIB:CISCO-ENTITY-SENSOR-MIB";

    return path_buffer.str();

}

const EntityPath CiscoEntitySensorMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoEntitySensorMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entSensorGlobalObjects")
    {
        if(entsensorglobalobjects == nullptr)
        {
            entsensorglobalobjects = std::make_shared<CiscoEntitySensorMib::Entsensorglobalobjects>();
        }
        return entsensorglobalobjects;
    }

    if(child_yang_name == "entSensorThresholdTable")
    {
        if(entsensorthresholdtable == nullptr)
        {
            entsensorthresholdtable = std::make_shared<CiscoEntitySensorMib::Entsensorthresholdtable>();
        }
        return entsensorthresholdtable;
    }

    if(child_yang_name == "entSensorValueTable")
    {
        if(entsensorvaluetable == nullptr)
        {
            entsensorvaluetable = std::make_shared<CiscoEntitySensorMib::Entsensorvaluetable>();
        }
        return entsensorvaluetable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntitySensorMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(entsensorglobalobjects != nullptr)
    {
        children["entSensorGlobalObjects"] = entsensorglobalobjects;
    }

    if(entsensorthresholdtable != nullptr)
    {
        children["entSensorThresholdTable"] = entsensorthresholdtable;
    }

    if(entsensorvaluetable != nullptr)
    {
        children["entSensorValueTable"] = entsensorvaluetable;
    }

    return children;
}

void CiscoEntitySensorMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoEntitySensorMib::clone_ptr() const
{
    return std::make_shared<CiscoEntitySensorMib>();
}

std::string CiscoEntitySensorMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoEntitySensorMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoEntitySensorMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoEntitySensorMib::Entsensorglobalobjects::Entsensorglobalobjects()
    :
    entsensorthreshnotifglobalenable{YType::boolean, "entSensorThreshNotifGlobalEnable"}
{
    yang_name = "entSensorGlobalObjects"; yang_parent_name = "CISCO-ENTITY-SENSOR-MIB";
}

CiscoEntitySensorMib::Entsensorglobalobjects::~Entsensorglobalobjects()
{
}

bool CiscoEntitySensorMib::Entsensorglobalobjects::has_data() const
{
    return entsensorthreshnotifglobalenable.is_set;
}

bool CiscoEntitySensorMib::Entsensorglobalobjects::has_operation() const
{
    return is_set(operation)
	|| is_set(entsensorthreshnotifglobalenable.operation);
}

std::string CiscoEntitySensorMib::Entsensorglobalobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entSensorGlobalObjects";

    return path_buffer.str();

}

const EntityPath CiscoEntitySensorMib::Entsensorglobalobjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-SENSOR-MIB:CISCO-ENTITY-SENSOR-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entsensorthreshnotifglobalenable.is_set || is_set(entsensorthreshnotifglobalenable.operation)) leaf_name_data.push_back(entsensorthreshnotifglobalenable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntitySensorMib::Entsensorglobalobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntitySensorMib::Entsensorglobalobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntitySensorMib::Entsensorglobalobjects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entSensorThreshNotifGlobalEnable")
    {
        entsensorthreshnotifglobalenable = value;
    }
}

CiscoEntitySensorMib::Entsensorvaluetable::Entsensorvaluetable()
{
    yang_name = "entSensorValueTable"; yang_parent_name = "CISCO-ENTITY-SENSOR-MIB";
}

CiscoEntitySensorMib::Entsensorvaluetable::~Entsensorvaluetable()
{
}

bool CiscoEntitySensorMib::Entsensorvaluetable::has_data() const
{
    for (std::size_t index=0; index<entsensorvalueentry.size(); index++)
    {
        if(entsensorvalueentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntitySensorMib::Entsensorvaluetable::has_operation() const
{
    for (std::size_t index=0; index<entsensorvalueentry.size(); index++)
    {
        if(entsensorvalueentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoEntitySensorMib::Entsensorvaluetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entSensorValueTable";

    return path_buffer.str();

}

const EntityPath CiscoEntitySensorMib::Entsensorvaluetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-SENSOR-MIB:CISCO-ENTITY-SENSOR-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntitySensorMib::Entsensorvaluetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entSensorValueEntry")
    {
        for(auto const & c : entsensorvalueentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntitySensorMib::Entsensorvaluetable::Entsensorvalueentry>();
        c->parent = this;
        entsensorvalueentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntitySensorMib::Entsensorvaluetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : entsensorvalueentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntitySensorMib::Entsensorvaluetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoEntitySensorMib::Entsensorvaluetable::Entsensorvalueentry::Entsensorvalueentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    entsensormeasuredentity{YType::int32, "entSensorMeasuredEntity"},
    entsensorprecision{YType::int32, "entSensorPrecision"},
    entsensorscale{YType::enumeration, "entSensorScale"},
    entsensorstatus{YType::enumeration, "entSensorStatus"},
    entsensortype{YType::enumeration, "entSensorType"},
    entsensorvalue{YType::int32, "entSensorValue"},
    entsensorvaluetimestamp{YType::uint32, "entSensorValueTimeStamp"},
    entsensorvalueupdaterate{YType::int32, "entSensorValueUpdateRate"}
{
    yang_name = "entSensorValueEntry"; yang_parent_name = "entSensorValueTable";
}

CiscoEntitySensorMib::Entsensorvaluetable::Entsensorvalueentry::~Entsensorvalueentry()
{
}

bool CiscoEntitySensorMib::Entsensorvaluetable::Entsensorvalueentry::has_data() const
{
    return entphysicalindex.is_set
	|| entsensormeasuredentity.is_set
	|| entsensorprecision.is_set
	|| entsensorscale.is_set
	|| entsensorstatus.is_set
	|| entsensortype.is_set
	|| entsensorvalue.is_set
	|| entsensorvaluetimestamp.is_set
	|| entsensorvalueupdaterate.is_set;
}

bool CiscoEntitySensorMib::Entsensorvaluetable::Entsensorvalueentry::has_operation() const
{
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(entsensormeasuredentity.operation)
	|| is_set(entsensorprecision.operation)
	|| is_set(entsensorscale.operation)
	|| is_set(entsensorstatus.operation)
	|| is_set(entsensortype.operation)
	|| is_set(entsensorvalue.operation)
	|| is_set(entsensorvaluetimestamp.operation)
	|| is_set(entsensorvalueupdaterate.operation);
}

std::string CiscoEntitySensorMib::Entsensorvaluetable::Entsensorvalueentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entSensorValueEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEntitySensorMib::Entsensorvaluetable::Entsensorvalueentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-SENSOR-MIB:CISCO-ENTITY-SENSOR-MIB/entSensorValueTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (entsensormeasuredentity.is_set || is_set(entsensormeasuredentity.operation)) leaf_name_data.push_back(entsensormeasuredentity.get_name_leafdata());
    if (entsensorprecision.is_set || is_set(entsensorprecision.operation)) leaf_name_data.push_back(entsensorprecision.get_name_leafdata());
    if (entsensorscale.is_set || is_set(entsensorscale.operation)) leaf_name_data.push_back(entsensorscale.get_name_leafdata());
    if (entsensorstatus.is_set || is_set(entsensorstatus.operation)) leaf_name_data.push_back(entsensorstatus.get_name_leafdata());
    if (entsensortype.is_set || is_set(entsensortype.operation)) leaf_name_data.push_back(entsensortype.get_name_leafdata());
    if (entsensorvalue.is_set || is_set(entsensorvalue.operation)) leaf_name_data.push_back(entsensorvalue.get_name_leafdata());
    if (entsensorvaluetimestamp.is_set || is_set(entsensorvaluetimestamp.operation)) leaf_name_data.push_back(entsensorvaluetimestamp.get_name_leafdata());
    if (entsensorvalueupdaterate.is_set || is_set(entsensorvalueupdaterate.operation)) leaf_name_data.push_back(entsensorvalueupdaterate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntitySensorMib::Entsensorvaluetable::Entsensorvalueentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntitySensorMib::Entsensorvaluetable::Entsensorvalueentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntitySensorMib::Entsensorvaluetable::Entsensorvalueentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "entSensorMeasuredEntity")
    {
        entsensormeasuredentity = value;
    }
    if(value_path == "entSensorPrecision")
    {
        entsensorprecision = value;
    }
    if(value_path == "entSensorScale")
    {
        entsensorscale = value;
    }
    if(value_path == "entSensorStatus")
    {
        entsensorstatus = value;
    }
    if(value_path == "entSensorType")
    {
        entsensortype = value;
    }
    if(value_path == "entSensorValue")
    {
        entsensorvalue = value;
    }
    if(value_path == "entSensorValueTimeStamp")
    {
        entsensorvaluetimestamp = value;
    }
    if(value_path == "entSensorValueUpdateRate")
    {
        entsensorvalueupdaterate = value;
    }
}

CiscoEntitySensorMib::Entsensorthresholdtable::Entsensorthresholdtable()
{
    yang_name = "entSensorThresholdTable"; yang_parent_name = "CISCO-ENTITY-SENSOR-MIB";
}

CiscoEntitySensorMib::Entsensorthresholdtable::~Entsensorthresholdtable()
{
}

bool CiscoEntitySensorMib::Entsensorthresholdtable::has_data() const
{
    for (std::size_t index=0; index<entsensorthresholdentry.size(); index++)
    {
        if(entsensorthresholdentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntitySensorMib::Entsensorthresholdtable::has_operation() const
{
    for (std::size_t index=0; index<entsensorthresholdentry.size(); index++)
    {
        if(entsensorthresholdentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoEntitySensorMib::Entsensorthresholdtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entSensorThresholdTable";

    return path_buffer.str();

}

const EntityPath CiscoEntitySensorMib::Entsensorthresholdtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-SENSOR-MIB:CISCO-ENTITY-SENSOR-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntitySensorMib::Entsensorthresholdtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entSensorThresholdEntry")
    {
        for(auto const & c : entsensorthresholdentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntitySensorMib::Entsensorthresholdtable::Entsensorthresholdentry>();
        c->parent = this;
        entsensorthresholdentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntitySensorMib::Entsensorthresholdtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : entsensorthresholdentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntitySensorMib::Entsensorthresholdtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoEntitySensorMib::Entsensorthresholdtable::Entsensorthresholdentry::Entsensorthresholdentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    entsensorthresholdindex{YType::int32, "entSensorThresholdIndex"},
    entsensorthresholdevaluation{YType::boolean, "entSensorThresholdEvaluation"},
    entsensorthresholdnotificationenable{YType::boolean, "entSensorThresholdNotificationEnable"},
    entsensorthresholdrelation{YType::enumeration, "entSensorThresholdRelation"},
    entsensorthresholdseverity{YType::enumeration, "entSensorThresholdSeverity"},
    entsensorthresholdvalue{YType::int32, "entSensorThresholdValue"}
{
    yang_name = "entSensorThresholdEntry"; yang_parent_name = "entSensorThresholdTable";
}

CiscoEntitySensorMib::Entsensorthresholdtable::Entsensorthresholdentry::~Entsensorthresholdentry()
{
}

bool CiscoEntitySensorMib::Entsensorthresholdtable::Entsensorthresholdentry::has_data() const
{
    return entphysicalindex.is_set
	|| entsensorthresholdindex.is_set
	|| entsensorthresholdevaluation.is_set
	|| entsensorthresholdnotificationenable.is_set
	|| entsensorthresholdrelation.is_set
	|| entsensorthresholdseverity.is_set
	|| entsensorthresholdvalue.is_set;
}

bool CiscoEntitySensorMib::Entsensorthresholdtable::Entsensorthresholdentry::has_operation() const
{
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(entsensorthresholdindex.operation)
	|| is_set(entsensorthresholdevaluation.operation)
	|| is_set(entsensorthresholdnotificationenable.operation)
	|| is_set(entsensorthresholdrelation.operation)
	|| is_set(entsensorthresholdseverity.operation)
	|| is_set(entsensorthresholdvalue.operation);
}

std::string CiscoEntitySensorMib::Entsensorthresholdtable::Entsensorthresholdentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entSensorThresholdEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[entSensorThresholdIndex='" <<entsensorthresholdindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEntitySensorMib::Entsensorthresholdtable::Entsensorthresholdentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-SENSOR-MIB:CISCO-ENTITY-SENSOR-MIB/entSensorThresholdTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (entsensorthresholdindex.is_set || is_set(entsensorthresholdindex.operation)) leaf_name_data.push_back(entsensorthresholdindex.get_name_leafdata());
    if (entsensorthresholdevaluation.is_set || is_set(entsensorthresholdevaluation.operation)) leaf_name_data.push_back(entsensorthresholdevaluation.get_name_leafdata());
    if (entsensorthresholdnotificationenable.is_set || is_set(entsensorthresholdnotificationenable.operation)) leaf_name_data.push_back(entsensorthresholdnotificationenable.get_name_leafdata());
    if (entsensorthresholdrelation.is_set || is_set(entsensorthresholdrelation.operation)) leaf_name_data.push_back(entsensorthresholdrelation.get_name_leafdata());
    if (entsensorthresholdseverity.is_set || is_set(entsensorthresholdseverity.operation)) leaf_name_data.push_back(entsensorthresholdseverity.get_name_leafdata());
    if (entsensorthresholdvalue.is_set || is_set(entsensorthresholdvalue.operation)) leaf_name_data.push_back(entsensorthresholdvalue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntitySensorMib::Entsensorthresholdtable::Entsensorthresholdentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntitySensorMib::Entsensorthresholdtable::Entsensorthresholdentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntitySensorMib::Entsensorthresholdtable::Entsensorthresholdentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "entSensorThresholdIndex")
    {
        entsensorthresholdindex = value;
    }
    if(value_path == "entSensorThresholdEvaluation")
    {
        entsensorthresholdevaluation = value;
    }
    if(value_path == "entSensorThresholdNotificationEnable")
    {
        entsensorthresholdnotificationenable = value;
    }
    if(value_path == "entSensorThresholdRelation")
    {
        entsensorthresholdrelation = value;
    }
    if(value_path == "entSensorThresholdSeverity")
    {
        entsensorthresholdseverity = value;
    }
    if(value_path == "entSensorThresholdValue")
    {
        entsensorthresholdvalue = value;
    }
}

const Enum::YLeaf SensorthresholdseverityEnum::other {1, "other"};
const Enum::YLeaf SensorthresholdseverityEnum::minor {10, "minor"};
const Enum::YLeaf SensorthresholdseverityEnum::major {20, "major"};
const Enum::YLeaf SensorthresholdseverityEnum::critical {30, "critical"};

const Enum::YLeaf SensorstatusEnum::ok {1, "ok"};
const Enum::YLeaf SensorstatusEnum::unavailable {2, "unavailable"};
const Enum::YLeaf SensorstatusEnum::nonoperational {3, "nonoperational"};

const Enum::YLeaf SensordatatypeEnum::other {1, "other"};
const Enum::YLeaf SensordatatypeEnum::unknown {2, "unknown"};
const Enum::YLeaf SensordatatypeEnum::voltsAC {3, "voltsAC"};
const Enum::YLeaf SensordatatypeEnum::voltsDC {4, "voltsDC"};
const Enum::YLeaf SensordatatypeEnum::amperes {5, "amperes"};
const Enum::YLeaf SensordatatypeEnum::watts {6, "watts"};
const Enum::YLeaf SensordatatypeEnum::hertz {7, "hertz"};
const Enum::YLeaf SensordatatypeEnum::celsius {8, "celsius"};
const Enum::YLeaf SensordatatypeEnum::percentRH {9, "percentRH"};
const Enum::YLeaf SensordatatypeEnum::rpm {10, "rpm"};
const Enum::YLeaf SensordatatypeEnum::cmm {11, "cmm"};
const Enum::YLeaf SensordatatypeEnum::truthvalue {12, "truthvalue"};
const Enum::YLeaf SensordatatypeEnum::specialEnum {13, "specialEnum"};
const Enum::YLeaf SensordatatypeEnum::dBm {14, "dBm"};

const Enum::YLeaf SensorthresholdrelationEnum::lessThan {1, "lessThan"};
const Enum::YLeaf SensorthresholdrelationEnum::lessOrEqual {2, "lessOrEqual"};
const Enum::YLeaf SensorthresholdrelationEnum::greaterThan {3, "greaterThan"};
const Enum::YLeaf SensorthresholdrelationEnum::greaterOrEqual {4, "greaterOrEqual"};
const Enum::YLeaf SensorthresholdrelationEnum::equalTo {5, "equalTo"};
const Enum::YLeaf SensorthresholdrelationEnum::notEqualTo {6, "notEqualTo"};

const Enum::YLeaf SensordatascaleEnum::yocto {1, "yocto"};
const Enum::YLeaf SensordatascaleEnum::zepto {2, "zepto"};
const Enum::YLeaf SensordatascaleEnum::atto {3, "atto"};
const Enum::YLeaf SensordatascaleEnum::femto {4, "femto"};
const Enum::YLeaf SensordatascaleEnum::pico {5, "pico"};
const Enum::YLeaf SensordatascaleEnum::nano {6, "nano"};
const Enum::YLeaf SensordatascaleEnum::micro {7, "micro"};
const Enum::YLeaf SensordatascaleEnum::milli {8, "milli"};
const Enum::YLeaf SensordatascaleEnum::units {9, "units"};
const Enum::YLeaf SensordatascaleEnum::kilo {10, "kilo"};
const Enum::YLeaf SensordatascaleEnum::mega {11, "mega"};
const Enum::YLeaf SensordatascaleEnum::giga {12, "giga"};
const Enum::YLeaf SensordatascaleEnum::tera {13, "tera"};
const Enum::YLeaf SensordatascaleEnum::exa {14, "exa"};
const Enum::YLeaf SensordatascaleEnum::peta {15, "peta"};
const Enum::YLeaf SensordatascaleEnum::zetta {16, "zetta"};
const Enum::YLeaf SensordatascaleEnum::yotta {17, "yotta"};


}
}

