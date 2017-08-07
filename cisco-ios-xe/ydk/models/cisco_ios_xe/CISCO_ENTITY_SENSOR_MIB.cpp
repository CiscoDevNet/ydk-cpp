
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_ENTITY_SENSOR_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
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
    return is_set(yfilter)
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

void CiscoEntitySensorMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEntitySensorMib::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> CiscoEntitySensorMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoEntitySensorMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entSensorGlobalObjects" || name == "entSensorThresholdTable" || name == "entSensorValueTable")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(entsensorthreshnotifglobalenable.yfilter);
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

    if (entsensorthreshnotifglobalenable.is_set || is_set(entsensorthreshnotifglobalenable.yfilter)) leaf_name_data.push_back(entsensorthreshnotifglobalenable.get_name_leafdata());


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

void CiscoEntitySensorMib::Entsensorglobalobjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entSensorThreshNotifGlobalEnable")
    {
        entsensorthreshnotifglobalenable = value;
        entsensorthreshnotifglobalenable.value_namespace = name_space;
        entsensorthreshnotifglobalenable.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEntitySensorMib::Entsensorglobalobjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entSensorThreshNotifGlobalEnable")
    {
        entsensorthreshnotifglobalenable.yfilter = yfilter;
    }
}

bool CiscoEntitySensorMib::Entsensorglobalobjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entSensorThreshNotifGlobalEnable")
        return true;
    return false;
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
    return is_set(yfilter);
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

void CiscoEntitySensorMib::Entsensorvaluetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEntitySensorMib::Entsensorvaluetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEntitySensorMib::Entsensorvaluetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entSensorValueEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(entsensormeasuredentity.yfilter)
	|| ydk::is_set(entsensorprecision.yfilter)
	|| ydk::is_set(entsensorscale.yfilter)
	|| ydk::is_set(entsensorstatus.yfilter)
	|| ydk::is_set(entsensortype.yfilter)
	|| ydk::is_set(entsensorvalue.yfilter)
	|| ydk::is_set(entsensorvaluetimestamp.yfilter)
	|| ydk::is_set(entsensorvalueupdaterate.yfilter);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (entsensormeasuredentity.is_set || is_set(entsensormeasuredentity.yfilter)) leaf_name_data.push_back(entsensormeasuredentity.get_name_leafdata());
    if (entsensorprecision.is_set || is_set(entsensorprecision.yfilter)) leaf_name_data.push_back(entsensorprecision.get_name_leafdata());
    if (entsensorscale.is_set || is_set(entsensorscale.yfilter)) leaf_name_data.push_back(entsensorscale.get_name_leafdata());
    if (entsensorstatus.is_set || is_set(entsensorstatus.yfilter)) leaf_name_data.push_back(entsensorstatus.get_name_leafdata());
    if (entsensortype.is_set || is_set(entsensortype.yfilter)) leaf_name_data.push_back(entsensortype.get_name_leafdata());
    if (entsensorvalue.is_set || is_set(entsensorvalue.yfilter)) leaf_name_data.push_back(entsensorvalue.get_name_leafdata());
    if (entsensorvaluetimestamp.is_set || is_set(entsensorvaluetimestamp.yfilter)) leaf_name_data.push_back(entsensorvaluetimestamp.get_name_leafdata());
    if (entsensorvalueupdaterate.is_set || is_set(entsensorvalueupdaterate.yfilter)) leaf_name_data.push_back(entsensorvalueupdaterate.get_name_leafdata());


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

void CiscoEntitySensorMib::Entsensorvaluetable::Entsensorvalueentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entSensorMeasuredEntity")
    {
        entsensormeasuredentity = value;
        entsensormeasuredentity.value_namespace = name_space;
        entsensormeasuredentity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entSensorPrecision")
    {
        entsensorprecision = value;
        entsensorprecision.value_namespace = name_space;
        entsensorprecision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entSensorScale")
    {
        entsensorscale = value;
        entsensorscale.value_namespace = name_space;
        entsensorscale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entSensorStatus")
    {
        entsensorstatus = value;
        entsensorstatus.value_namespace = name_space;
        entsensorstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entSensorType")
    {
        entsensortype = value;
        entsensortype.value_namespace = name_space;
        entsensortype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entSensorValue")
    {
        entsensorvalue = value;
        entsensorvalue.value_namespace = name_space;
        entsensorvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entSensorValueTimeStamp")
    {
        entsensorvaluetimestamp = value;
        entsensorvaluetimestamp.value_namespace = name_space;
        entsensorvaluetimestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entSensorValueUpdateRate")
    {
        entsensorvalueupdaterate = value;
        entsensorvalueupdaterate.value_namespace = name_space;
        entsensorvalueupdaterate.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEntitySensorMib::Entsensorvaluetable::Entsensorvalueentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "entSensorMeasuredEntity")
    {
        entsensormeasuredentity.yfilter = yfilter;
    }
    if(value_path == "entSensorPrecision")
    {
        entsensorprecision.yfilter = yfilter;
    }
    if(value_path == "entSensorScale")
    {
        entsensorscale.yfilter = yfilter;
    }
    if(value_path == "entSensorStatus")
    {
        entsensorstatus.yfilter = yfilter;
    }
    if(value_path == "entSensorType")
    {
        entsensortype.yfilter = yfilter;
    }
    if(value_path == "entSensorValue")
    {
        entsensorvalue.yfilter = yfilter;
    }
    if(value_path == "entSensorValueTimeStamp")
    {
        entsensorvaluetimestamp.yfilter = yfilter;
    }
    if(value_path == "entSensorValueUpdateRate")
    {
        entsensorvalueupdaterate.yfilter = yfilter;
    }
}

bool CiscoEntitySensorMib::Entsensorvaluetable::Entsensorvalueentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "entSensorMeasuredEntity" || name == "entSensorPrecision" || name == "entSensorScale" || name == "entSensorStatus" || name == "entSensorType" || name == "entSensorValue" || name == "entSensorValueTimeStamp" || name == "entSensorValueUpdateRate")
        return true;
    return false;
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
    return is_set(yfilter);
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

void CiscoEntitySensorMib::Entsensorthresholdtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEntitySensorMib::Entsensorthresholdtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEntitySensorMib::Entsensorthresholdtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entSensorThresholdEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(entsensorthresholdindex.yfilter)
	|| ydk::is_set(entsensorthresholdevaluation.yfilter)
	|| ydk::is_set(entsensorthresholdnotificationenable.yfilter)
	|| ydk::is_set(entsensorthresholdrelation.yfilter)
	|| ydk::is_set(entsensorthresholdseverity.yfilter)
	|| ydk::is_set(entsensorthresholdvalue.yfilter);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (entsensorthresholdindex.is_set || is_set(entsensorthresholdindex.yfilter)) leaf_name_data.push_back(entsensorthresholdindex.get_name_leafdata());
    if (entsensorthresholdevaluation.is_set || is_set(entsensorthresholdevaluation.yfilter)) leaf_name_data.push_back(entsensorthresholdevaluation.get_name_leafdata());
    if (entsensorthresholdnotificationenable.is_set || is_set(entsensorthresholdnotificationenable.yfilter)) leaf_name_data.push_back(entsensorthresholdnotificationenable.get_name_leafdata());
    if (entsensorthresholdrelation.is_set || is_set(entsensorthresholdrelation.yfilter)) leaf_name_data.push_back(entsensorthresholdrelation.get_name_leafdata());
    if (entsensorthresholdseverity.is_set || is_set(entsensorthresholdseverity.yfilter)) leaf_name_data.push_back(entsensorthresholdseverity.get_name_leafdata());
    if (entsensorthresholdvalue.is_set || is_set(entsensorthresholdvalue.yfilter)) leaf_name_data.push_back(entsensorthresholdvalue.get_name_leafdata());


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

void CiscoEntitySensorMib::Entsensorthresholdtable::Entsensorthresholdentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entSensorThresholdIndex")
    {
        entsensorthresholdindex = value;
        entsensorthresholdindex.value_namespace = name_space;
        entsensorthresholdindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entSensorThresholdEvaluation")
    {
        entsensorthresholdevaluation = value;
        entsensorthresholdevaluation.value_namespace = name_space;
        entsensorthresholdevaluation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entSensorThresholdNotificationEnable")
    {
        entsensorthresholdnotificationenable = value;
        entsensorthresholdnotificationenable.value_namespace = name_space;
        entsensorthresholdnotificationenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entSensorThresholdRelation")
    {
        entsensorthresholdrelation = value;
        entsensorthresholdrelation.value_namespace = name_space;
        entsensorthresholdrelation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entSensorThresholdSeverity")
    {
        entsensorthresholdseverity = value;
        entsensorthresholdseverity.value_namespace = name_space;
        entsensorthresholdseverity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entSensorThresholdValue")
    {
        entsensorthresholdvalue = value;
        entsensorthresholdvalue.value_namespace = name_space;
        entsensorthresholdvalue.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEntitySensorMib::Entsensorthresholdtable::Entsensorthresholdentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "entSensorThresholdIndex")
    {
        entsensorthresholdindex.yfilter = yfilter;
    }
    if(value_path == "entSensorThresholdEvaluation")
    {
        entsensorthresholdevaluation.yfilter = yfilter;
    }
    if(value_path == "entSensorThresholdNotificationEnable")
    {
        entsensorthresholdnotificationenable.yfilter = yfilter;
    }
    if(value_path == "entSensorThresholdRelation")
    {
        entsensorthresholdrelation.yfilter = yfilter;
    }
    if(value_path == "entSensorThresholdSeverity")
    {
        entsensorthresholdseverity.yfilter = yfilter;
    }
    if(value_path == "entSensorThresholdValue")
    {
        entsensorthresholdvalue.yfilter = yfilter;
    }
}

bool CiscoEntitySensorMib::Entsensorthresholdtable::Entsensorthresholdentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "entSensorThresholdIndex" || name == "entSensorThresholdEvaluation" || name == "entSensorThresholdNotificationEnable" || name == "entSensorThresholdRelation" || name == "entSensorThresholdSeverity" || name == "entSensorThresholdValue")
        return true;
    return false;
}

const Enum::YLeaf Sensordatascale::yocto {1, "yocto"};
const Enum::YLeaf Sensordatascale::zepto {2, "zepto"};
const Enum::YLeaf Sensordatascale::atto {3, "atto"};
const Enum::YLeaf Sensordatascale::femto {4, "femto"};
const Enum::YLeaf Sensordatascale::pico {5, "pico"};
const Enum::YLeaf Sensordatascale::nano {6, "nano"};
const Enum::YLeaf Sensordatascale::micro {7, "micro"};
const Enum::YLeaf Sensordatascale::milli {8, "milli"};
const Enum::YLeaf Sensordatascale::units {9, "units"};
const Enum::YLeaf Sensordatascale::kilo {10, "kilo"};
const Enum::YLeaf Sensordatascale::mega {11, "mega"};
const Enum::YLeaf Sensordatascale::giga {12, "giga"};
const Enum::YLeaf Sensordatascale::tera {13, "tera"};
const Enum::YLeaf Sensordatascale::exa {14, "exa"};
const Enum::YLeaf Sensordatascale::peta {15, "peta"};
const Enum::YLeaf Sensordatascale::zetta {16, "zetta"};
const Enum::YLeaf Sensordatascale::yotta {17, "yotta"};

const Enum::YLeaf Sensorthresholdrelation::lessThan {1, "lessThan"};
const Enum::YLeaf Sensorthresholdrelation::lessOrEqual {2, "lessOrEqual"};
const Enum::YLeaf Sensorthresholdrelation::greaterThan {3, "greaterThan"};
const Enum::YLeaf Sensorthresholdrelation::greaterOrEqual {4, "greaterOrEqual"};
const Enum::YLeaf Sensorthresholdrelation::equalTo {5, "equalTo"};
const Enum::YLeaf Sensorthresholdrelation::notEqualTo {6, "notEqualTo"};

const Enum::YLeaf Sensordatatype::other {1, "other"};
const Enum::YLeaf Sensordatatype::unknown {2, "unknown"};
const Enum::YLeaf Sensordatatype::voltsAC {3, "voltsAC"};
const Enum::YLeaf Sensordatatype::voltsDC {4, "voltsDC"};
const Enum::YLeaf Sensordatatype::amperes {5, "amperes"};
const Enum::YLeaf Sensordatatype::watts {6, "watts"};
const Enum::YLeaf Sensordatatype::hertz {7, "hertz"};
const Enum::YLeaf Sensordatatype::celsius {8, "celsius"};
const Enum::YLeaf Sensordatatype::percentRH {9, "percentRH"};
const Enum::YLeaf Sensordatatype::rpm {10, "rpm"};
const Enum::YLeaf Sensordatatype::cmm {11, "cmm"};
const Enum::YLeaf Sensordatatype::truthvalue {12, "truthvalue"};
const Enum::YLeaf Sensordatatype::specialEnum {13, "specialEnum"};
const Enum::YLeaf Sensordatatype::dBm {14, "dBm"};

const Enum::YLeaf Sensorstatus::ok {1, "ok"};
const Enum::YLeaf Sensorstatus::unavailable {2, "unavailable"};
const Enum::YLeaf Sensorstatus::nonoperational {3, "nonoperational"};

const Enum::YLeaf Sensorthresholdseverity::other {1, "other"};
const Enum::YLeaf Sensorthresholdseverity::minor {10, "minor"};
const Enum::YLeaf Sensorthresholdseverity::major {20, "major"};
const Enum::YLeaf Sensorthresholdseverity::critical {30, "critical"};


}
}

