
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_ENTITY_SENSOR_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_ENTITY_SENSOR_MIB {

CISCOENTITYSENSORMIB::CISCOENTITYSENSORMIB()
    :
    entsensorglobalobjects(std::make_shared<CISCOENTITYSENSORMIB::Entsensorglobalobjects>())
	,entsensorvaluetable(std::make_shared<CISCOENTITYSENSORMIB::Entsensorvaluetable>())
	,entsensorthresholdtable(std::make_shared<CISCOENTITYSENSORMIB::Entsensorthresholdtable>())
{
    entsensorglobalobjects->parent = this;
    entsensorvaluetable->parent = this;
    entsensorthresholdtable->parent = this;

    yang_name = "CISCO-ENTITY-SENSOR-MIB"; yang_parent_name = "CISCO-ENTITY-SENSOR-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCOENTITYSENSORMIB::~CISCOENTITYSENSORMIB()
{
}

bool CISCOENTITYSENSORMIB::has_data() const
{
    return (entsensorglobalobjects !=  nullptr && entsensorglobalobjects->has_data())
	|| (entsensorvaluetable !=  nullptr && entsensorvaluetable->has_data())
	|| (entsensorthresholdtable !=  nullptr && entsensorthresholdtable->has_data());
}

bool CISCOENTITYSENSORMIB::has_operation() const
{
    return is_set(yfilter)
	|| (entsensorglobalobjects !=  nullptr && entsensorglobalobjects->has_operation())
	|| (entsensorvaluetable !=  nullptr && entsensorvaluetable->has_operation())
	|| (entsensorthresholdtable !=  nullptr && entsensorthresholdtable->has_operation());
}

std::string CISCOENTITYSENSORMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-SENSOR-MIB:CISCO-ENTITY-SENSOR-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYSENSORMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYSENSORMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entSensorGlobalObjects")
    {
        if(entsensorglobalobjects == nullptr)
        {
            entsensorglobalobjects = std::make_shared<CISCOENTITYSENSORMIB::Entsensorglobalobjects>();
        }
        return entsensorglobalobjects;
    }

    if(child_yang_name == "entSensorValueTable")
    {
        if(entsensorvaluetable == nullptr)
        {
            entsensorvaluetable = std::make_shared<CISCOENTITYSENSORMIB::Entsensorvaluetable>();
        }
        return entsensorvaluetable;
    }

    if(child_yang_name == "entSensorThresholdTable")
    {
        if(entsensorthresholdtable == nullptr)
        {
            entsensorthresholdtable = std::make_shared<CISCOENTITYSENSORMIB::Entsensorthresholdtable>();
        }
        return entsensorthresholdtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYSENSORMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(entsensorglobalobjects != nullptr)
    {
        children["entSensorGlobalObjects"] = entsensorglobalobjects;
    }

    if(entsensorvaluetable != nullptr)
    {
        children["entSensorValueTable"] = entsensorvaluetable;
    }

    if(entsensorthresholdtable != nullptr)
    {
        children["entSensorThresholdTable"] = entsensorthresholdtable;
    }

    return children;
}

void CISCOENTITYSENSORMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYSENSORMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOENTITYSENSORMIB::clone_ptr() const
{
    return std::make_shared<CISCOENTITYSENSORMIB>();
}

std::string CISCOENTITYSENSORMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOENTITYSENSORMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOENTITYSENSORMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOENTITYSENSORMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOENTITYSENSORMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entSensorGlobalObjects" || name == "entSensorValueTable" || name == "entSensorThresholdTable")
        return true;
    return false;
}

CISCOENTITYSENSORMIB::Entsensorglobalobjects::Entsensorglobalobjects()
    :
    entsensorthreshnotifglobalenable{YType::boolean, "entSensorThreshNotifGlobalEnable"}
{

    yang_name = "entSensorGlobalObjects"; yang_parent_name = "CISCO-ENTITY-SENSOR-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYSENSORMIB::Entsensorglobalobjects::~Entsensorglobalobjects()
{
}

bool CISCOENTITYSENSORMIB::Entsensorglobalobjects::has_data() const
{
    return entsensorthreshnotifglobalenable.is_set;
}

bool CISCOENTITYSENSORMIB::Entsensorglobalobjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entsensorthreshnotifglobalenable.yfilter);
}

std::string CISCOENTITYSENSORMIB::Entsensorglobalobjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-SENSOR-MIB:CISCO-ENTITY-SENSOR-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYSENSORMIB::Entsensorglobalobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entSensorGlobalObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYSENSORMIB::Entsensorglobalobjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entsensorthreshnotifglobalenable.is_set || is_set(entsensorthreshnotifglobalenable.yfilter)) leaf_name_data.push_back(entsensorthreshnotifglobalenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYSENSORMIB::Entsensorglobalobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYSENSORMIB::Entsensorglobalobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOENTITYSENSORMIB::Entsensorglobalobjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entSensorThreshNotifGlobalEnable")
    {
        entsensorthreshnotifglobalenable = value;
        entsensorthreshnotifglobalenable.value_namespace = name_space;
        entsensorthreshnotifglobalenable.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENTITYSENSORMIB::Entsensorglobalobjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entSensorThreshNotifGlobalEnable")
    {
        entsensorthreshnotifglobalenable.yfilter = yfilter;
    }
}

bool CISCOENTITYSENSORMIB::Entsensorglobalobjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entSensorThreshNotifGlobalEnable")
        return true;
    return false;
}

CISCOENTITYSENSORMIB::Entsensorvaluetable::Entsensorvaluetable()
{

    yang_name = "entSensorValueTable"; yang_parent_name = "CISCO-ENTITY-SENSOR-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYSENSORMIB::Entsensorvaluetable::~Entsensorvaluetable()
{
}

bool CISCOENTITYSENSORMIB::Entsensorvaluetable::has_data() const
{
    for (std::size_t index=0; index<entsensorvalueentry.size(); index++)
    {
        if(entsensorvalueentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYSENSORMIB::Entsensorvaluetable::has_operation() const
{
    for (std::size_t index=0; index<entsensorvalueentry.size(); index++)
    {
        if(entsensorvalueentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYSENSORMIB::Entsensorvaluetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-SENSOR-MIB:CISCO-ENTITY-SENSOR-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYSENSORMIB::Entsensorvaluetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entSensorValueTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYSENSORMIB::Entsensorvaluetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYSENSORMIB::Entsensorvaluetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOENTITYSENSORMIB::Entsensorvaluetable::Entsensorvalueentry>();
        c->parent = this;
        entsensorvalueentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYSENSORMIB::Entsensorvaluetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : entsensorvalueentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOENTITYSENSORMIB::Entsensorvaluetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYSENSORMIB::Entsensorvaluetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYSENSORMIB::Entsensorvaluetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entSensorValueEntry")
        return true;
    return false;
}

CISCOENTITYSENSORMIB::Entsensorvaluetable::Entsensorvalueentry::Entsensorvalueentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    entsensortype{YType::enumeration, "entSensorType"},
    entsensorscale{YType::enumeration, "entSensorScale"},
    entsensorprecision{YType::int32, "entSensorPrecision"},
    entsensorvalue{YType::int32, "entSensorValue"},
    entsensorstatus{YType::enumeration, "entSensorStatus"},
    entsensorvaluetimestamp{YType::uint32, "entSensorValueTimeStamp"},
    entsensorvalueupdaterate{YType::int32, "entSensorValueUpdateRate"},
    entsensormeasuredentity{YType::int32, "entSensorMeasuredEntity"}
{

    yang_name = "entSensorValueEntry"; yang_parent_name = "entSensorValueTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYSENSORMIB::Entsensorvaluetable::Entsensorvalueentry::~Entsensorvalueentry()
{
}

bool CISCOENTITYSENSORMIB::Entsensorvaluetable::Entsensorvalueentry::has_data() const
{
    return entphysicalindex.is_set
	|| entsensortype.is_set
	|| entsensorscale.is_set
	|| entsensorprecision.is_set
	|| entsensorvalue.is_set
	|| entsensorstatus.is_set
	|| entsensorvaluetimestamp.is_set
	|| entsensorvalueupdaterate.is_set
	|| entsensormeasuredentity.is_set;
}

bool CISCOENTITYSENSORMIB::Entsensorvaluetable::Entsensorvalueentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(entsensortype.yfilter)
	|| ydk::is_set(entsensorscale.yfilter)
	|| ydk::is_set(entsensorprecision.yfilter)
	|| ydk::is_set(entsensorvalue.yfilter)
	|| ydk::is_set(entsensorstatus.yfilter)
	|| ydk::is_set(entsensorvaluetimestamp.yfilter)
	|| ydk::is_set(entsensorvalueupdaterate.yfilter)
	|| ydk::is_set(entsensormeasuredentity.yfilter);
}

std::string CISCOENTITYSENSORMIB::Entsensorvaluetable::Entsensorvalueentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-SENSOR-MIB:CISCO-ENTITY-SENSOR-MIB/entSensorValueTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYSENSORMIB::Entsensorvaluetable::Entsensorvalueentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entSensorValueEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYSENSORMIB::Entsensorvaluetable::Entsensorvalueentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (entsensortype.is_set || is_set(entsensortype.yfilter)) leaf_name_data.push_back(entsensortype.get_name_leafdata());
    if (entsensorscale.is_set || is_set(entsensorscale.yfilter)) leaf_name_data.push_back(entsensorscale.get_name_leafdata());
    if (entsensorprecision.is_set || is_set(entsensorprecision.yfilter)) leaf_name_data.push_back(entsensorprecision.get_name_leafdata());
    if (entsensorvalue.is_set || is_set(entsensorvalue.yfilter)) leaf_name_data.push_back(entsensorvalue.get_name_leafdata());
    if (entsensorstatus.is_set || is_set(entsensorstatus.yfilter)) leaf_name_data.push_back(entsensorstatus.get_name_leafdata());
    if (entsensorvaluetimestamp.is_set || is_set(entsensorvaluetimestamp.yfilter)) leaf_name_data.push_back(entsensorvaluetimestamp.get_name_leafdata());
    if (entsensorvalueupdaterate.is_set || is_set(entsensorvalueupdaterate.yfilter)) leaf_name_data.push_back(entsensorvalueupdaterate.get_name_leafdata());
    if (entsensormeasuredentity.is_set || is_set(entsensormeasuredentity.yfilter)) leaf_name_data.push_back(entsensormeasuredentity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYSENSORMIB::Entsensorvaluetable::Entsensorvalueentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYSENSORMIB::Entsensorvaluetable::Entsensorvalueentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOENTITYSENSORMIB::Entsensorvaluetable::Entsensorvalueentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entSensorType")
    {
        entsensortype = value;
        entsensortype.value_namespace = name_space;
        entsensortype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entSensorScale")
    {
        entsensorscale = value;
        entsensorscale.value_namespace = name_space;
        entsensorscale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entSensorPrecision")
    {
        entsensorprecision = value;
        entsensorprecision.value_namespace = name_space;
        entsensorprecision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entSensorValue")
    {
        entsensorvalue = value;
        entsensorvalue.value_namespace = name_space;
        entsensorvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entSensorStatus")
    {
        entsensorstatus = value;
        entsensorstatus.value_namespace = name_space;
        entsensorstatus.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "entSensorMeasuredEntity")
    {
        entsensormeasuredentity = value;
        entsensormeasuredentity.value_namespace = name_space;
        entsensormeasuredentity.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENTITYSENSORMIB::Entsensorvaluetable::Entsensorvalueentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "entSensorType")
    {
        entsensortype.yfilter = yfilter;
    }
    if(value_path == "entSensorScale")
    {
        entsensorscale.yfilter = yfilter;
    }
    if(value_path == "entSensorPrecision")
    {
        entsensorprecision.yfilter = yfilter;
    }
    if(value_path == "entSensorValue")
    {
        entsensorvalue.yfilter = yfilter;
    }
    if(value_path == "entSensorStatus")
    {
        entsensorstatus.yfilter = yfilter;
    }
    if(value_path == "entSensorValueTimeStamp")
    {
        entsensorvaluetimestamp.yfilter = yfilter;
    }
    if(value_path == "entSensorValueUpdateRate")
    {
        entsensorvalueupdaterate.yfilter = yfilter;
    }
    if(value_path == "entSensorMeasuredEntity")
    {
        entsensormeasuredentity.yfilter = yfilter;
    }
}

bool CISCOENTITYSENSORMIB::Entsensorvaluetable::Entsensorvalueentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "entSensorType" || name == "entSensorScale" || name == "entSensorPrecision" || name == "entSensorValue" || name == "entSensorStatus" || name == "entSensorValueTimeStamp" || name == "entSensorValueUpdateRate" || name == "entSensorMeasuredEntity")
        return true;
    return false;
}

CISCOENTITYSENSORMIB::Entsensorthresholdtable::Entsensorthresholdtable()
{

    yang_name = "entSensorThresholdTable"; yang_parent_name = "CISCO-ENTITY-SENSOR-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYSENSORMIB::Entsensorthresholdtable::~Entsensorthresholdtable()
{
}

bool CISCOENTITYSENSORMIB::Entsensorthresholdtable::has_data() const
{
    for (std::size_t index=0; index<entsensorthresholdentry.size(); index++)
    {
        if(entsensorthresholdentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYSENSORMIB::Entsensorthresholdtable::has_operation() const
{
    for (std::size_t index=0; index<entsensorthresholdentry.size(); index++)
    {
        if(entsensorthresholdentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYSENSORMIB::Entsensorthresholdtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-SENSOR-MIB:CISCO-ENTITY-SENSOR-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYSENSORMIB::Entsensorthresholdtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entSensorThresholdTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYSENSORMIB::Entsensorthresholdtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYSENSORMIB::Entsensorthresholdtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOENTITYSENSORMIB::Entsensorthresholdtable::Entsensorthresholdentry>();
        c->parent = this;
        entsensorthresholdentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYSENSORMIB::Entsensorthresholdtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : entsensorthresholdentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOENTITYSENSORMIB::Entsensorthresholdtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYSENSORMIB::Entsensorthresholdtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYSENSORMIB::Entsensorthresholdtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entSensorThresholdEntry")
        return true;
    return false;
}

CISCOENTITYSENSORMIB::Entsensorthresholdtable::Entsensorthresholdentry::Entsensorthresholdentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    entsensorthresholdindex{YType::int32, "entSensorThresholdIndex"},
    entsensorthresholdseverity{YType::enumeration, "entSensorThresholdSeverity"},
    entsensorthresholdrelation{YType::enumeration, "entSensorThresholdRelation"},
    entsensorthresholdvalue{YType::int32, "entSensorThresholdValue"},
    entsensorthresholdevaluation{YType::boolean, "entSensorThresholdEvaluation"},
    entsensorthresholdnotificationenable{YType::boolean, "entSensorThresholdNotificationEnable"}
{

    yang_name = "entSensorThresholdEntry"; yang_parent_name = "entSensorThresholdTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYSENSORMIB::Entsensorthresholdtable::Entsensorthresholdentry::~Entsensorthresholdentry()
{
}

bool CISCOENTITYSENSORMIB::Entsensorthresholdtable::Entsensorthresholdentry::has_data() const
{
    return entphysicalindex.is_set
	|| entsensorthresholdindex.is_set
	|| entsensorthresholdseverity.is_set
	|| entsensorthresholdrelation.is_set
	|| entsensorthresholdvalue.is_set
	|| entsensorthresholdevaluation.is_set
	|| entsensorthresholdnotificationenable.is_set;
}

bool CISCOENTITYSENSORMIB::Entsensorthresholdtable::Entsensorthresholdentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(entsensorthresholdindex.yfilter)
	|| ydk::is_set(entsensorthresholdseverity.yfilter)
	|| ydk::is_set(entsensorthresholdrelation.yfilter)
	|| ydk::is_set(entsensorthresholdvalue.yfilter)
	|| ydk::is_set(entsensorthresholdevaluation.yfilter)
	|| ydk::is_set(entsensorthresholdnotificationenable.yfilter);
}

std::string CISCOENTITYSENSORMIB::Entsensorthresholdtable::Entsensorthresholdentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-SENSOR-MIB:CISCO-ENTITY-SENSOR-MIB/entSensorThresholdTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYSENSORMIB::Entsensorthresholdtable::Entsensorthresholdentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entSensorThresholdEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[entSensorThresholdIndex='" <<entsensorthresholdindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYSENSORMIB::Entsensorthresholdtable::Entsensorthresholdentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (entsensorthresholdindex.is_set || is_set(entsensorthresholdindex.yfilter)) leaf_name_data.push_back(entsensorthresholdindex.get_name_leafdata());
    if (entsensorthresholdseverity.is_set || is_set(entsensorthresholdseverity.yfilter)) leaf_name_data.push_back(entsensorthresholdseverity.get_name_leafdata());
    if (entsensorthresholdrelation.is_set || is_set(entsensorthresholdrelation.yfilter)) leaf_name_data.push_back(entsensorthresholdrelation.get_name_leafdata());
    if (entsensorthresholdvalue.is_set || is_set(entsensorthresholdvalue.yfilter)) leaf_name_data.push_back(entsensorthresholdvalue.get_name_leafdata());
    if (entsensorthresholdevaluation.is_set || is_set(entsensorthresholdevaluation.yfilter)) leaf_name_data.push_back(entsensorthresholdevaluation.get_name_leafdata());
    if (entsensorthresholdnotificationenable.is_set || is_set(entsensorthresholdnotificationenable.yfilter)) leaf_name_data.push_back(entsensorthresholdnotificationenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYSENSORMIB::Entsensorthresholdtable::Entsensorthresholdentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYSENSORMIB::Entsensorthresholdtable::Entsensorthresholdentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOENTITYSENSORMIB::Entsensorthresholdtable::Entsensorthresholdentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "entSensorThresholdSeverity")
    {
        entsensorthresholdseverity = value;
        entsensorthresholdseverity.value_namespace = name_space;
        entsensorthresholdseverity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entSensorThresholdRelation")
    {
        entsensorthresholdrelation = value;
        entsensorthresholdrelation.value_namespace = name_space;
        entsensorthresholdrelation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entSensorThresholdValue")
    {
        entsensorthresholdvalue = value;
        entsensorthresholdvalue.value_namespace = name_space;
        entsensorthresholdvalue.value_namespace_prefix = name_space_prefix;
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
}

void CISCOENTITYSENSORMIB::Entsensorthresholdtable::Entsensorthresholdentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "entSensorThresholdIndex")
    {
        entsensorthresholdindex.yfilter = yfilter;
    }
    if(value_path == "entSensorThresholdSeverity")
    {
        entsensorthresholdseverity.yfilter = yfilter;
    }
    if(value_path == "entSensorThresholdRelation")
    {
        entsensorthresholdrelation.yfilter = yfilter;
    }
    if(value_path == "entSensorThresholdValue")
    {
        entsensorthresholdvalue.yfilter = yfilter;
    }
    if(value_path == "entSensorThresholdEvaluation")
    {
        entsensorthresholdevaluation.yfilter = yfilter;
    }
    if(value_path == "entSensorThresholdNotificationEnable")
    {
        entsensorthresholdnotificationenable.yfilter = yfilter;
    }
}

bool CISCOENTITYSENSORMIB::Entsensorthresholdtable::Entsensorthresholdentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "entSensorThresholdIndex" || name == "entSensorThresholdSeverity" || name == "entSensorThresholdRelation" || name == "entSensorThresholdValue" || name == "entSensorThresholdEvaluation" || name == "entSensorThresholdNotificationEnable")
        return true;
    return false;
}

const Enum::YLeaf SensorDataType::other {1, "other"};
const Enum::YLeaf SensorDataType::unknown {2, "unknown"};
const Enum::YLeaf SensorDataType::voltsAC {3, "voltsAC"};
const Enum::YLeaf SensorDataType::voltsDC {4, "voltsDC"};
const Enum::YLeaf SensorDataType::amperes {5, "amperes"};
const Enum::YLeaf SensorDataType::watts {6, "watts"};
const Enum::YLeaf SensorDataType::hertz {7, "hertz"};
const Enum::YLeaf SensorDataType::celsius {8, "celsius"};
const Enum::YLeaf SensorDataType::percentRH {9, "percentRH"};
const Enum::YLeaf SensorDataType::rpm {10, "rpm"};
const Enum::YLeaf SensorDataType::cmm {11, "cmm"};
const Enum::YLeaf SensorDataType::truthvalue {12, "truthvalue"};
const Enum::YLeaf SensorDataType::specialEnum {13, "specialEnum"};
const Enum::YLeaf SensorDataType::dBm {14, "dBm"};

const Enum::YLeaf SensorDataScale::yocto {1, "yocto"};
const Enum::YLeaf SensorDataScale::zepto {2, "zepto"};
const Enum::YLeaf SensorDataScale::atto {3, "atto"};
const Enum::YLeaf SensorDataScale::femto {4, "femto"};
const Enum::YLeaf SensorDataScale::pico {5, "pico"};
const Enum::YLeaf SensorDataScale::nano {6, "nano"};
const Enum::YLeaf SensorDataScale::micro {7, "micro"};
const Enum::YLeaf SensorDataScale::milli {8, "milli"};
const Enum::YLeaf SensorDataScale::units {9, "units"};
const Enum::YLeaf SensorDataScale::kilo {10, "kilo"};
const Enum::YLeaf SensorDataScale::mega {11, "mega"};
const Enum::YLeaf SensorDataScale::giga {12, "giga"};
const Enum::YLeaf SensorDataScale::tera {13, "tera"};
const Enum::YLeaf SensorDataScale::exa {14, "exa"};
const Enum::YLeaf SensorDataScale::peta {15, "peta"};
const Enum::YLeaf SensorDataScale::zetta {16, "zetta"};
const Enum::YLeaf SensorDataScale::yotta {17, "yotta"};

const Enum::YLeaf SensorStatus::ok {1, "ok"};
const Enum::YLeaf SensorStatus::unavailable {2, "unavailable"};
const Enum::YLeaf SensorStatus::nonoperational {3, "nonoperational"};

const Enum::YLeaf SensorThresholdSeverity::other {1, "other"};
const Enum::YLeaf SensorThresholdSeverity::minor {10, "minor"};
const Enum::YLeaf SensorThresholdSeverity::major {20, "major"};
const Enum::YLeaf SensorThresholdSeverity::critical {30, "critical"};

const Enum::YLeaf SensorThresholdRelation::lessThan {1, "lessThan"};
const Enum::YLeaf SensorThresholdRelation::lessOrEqual {2, "lessOrEqual"};
const Enum::YLeaf SensorThresholdRelation::greaterThan {3, "greaterThan"};
const Enum::YLeaf SensorThresholdRelation::greaterOrEqual {4, "greaterOrEqual"};
const Enum::YLeaf SensorThresholdRelation::equalTo {5, "equalTo"};
const Enum::YLeaf SensorThresholdRelation::notEqualTo {6, "notEqualTo"};


}
}

