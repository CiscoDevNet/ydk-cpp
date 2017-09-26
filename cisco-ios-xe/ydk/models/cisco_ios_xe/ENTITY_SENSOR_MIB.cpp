
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ENTITY_SENSOR_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace ENTITY_SENSOR_MIB {

ENTITYSENSORMIB::ENTITYSENSORMIB()
    :
    entphysensortable(std::make_shared<ENTITYSENSORMIB::Entphysensortable>())
{
    entphysensortable->parent = this;

    yang_name = "ENTITY-SENSOR-MIB"; yang_parent_name = "ENTITY-SENSOR-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

ENTITYSENSORMIB::~ENTITYSENSORMIB()
{
}

bool ENTITYSENSORMIB::has_data() const
{
    return (entphysensortable !=  nullptr && entphysensortable->has_data());
}

bool ENTITYSENSORMIB::has_operation() const
{
    return is_set(yfilter)
	|| (entphysensortable !=  nullptr && entphysensortable->has_operation());
}

std::string ENTITYSENSORMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ENTITY-SENSOR-MIB:ENTITY-SENSOR-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ENTITYSENSORMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ENTITYSENSORMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entPhySensorTable")
    {
        if(entphysensortable == nullptr)
        {
            entphysensortable = std::make_shared<ENTITYSENSORMIB::Entphysensortable>();
        }
        return entphysensortable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ENTITYSENSORMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(entphysensortable != nullptr)
    {
        children["entPhySensorTable"] = entphysensortable;
    }

    return children;
}

void ENTITYSENSORMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ENTITYSENSORMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ENTITYSENSORMIB::clone_ptr() const
{
    return std::make_shared<ENTITYSENSORMIB>();
}

std::string ENTITYSENSORMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string ENTITYSENSORMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function ENTITYSENSORMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ENTITYSENSORMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool ENTITYSENSORMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhySensorTable")
        return true;
    return false;
}

ENTITYSENSORMIB::Entphysensortable::Entphysensortable()
{

    yang_name = "entPhySensorTable"; yang_parent_name = "ENTITY-SENSOR-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

ENTITYSENSORMIB::Entphysensortable::~Entphysensortable()
{
}

bool ENTITYSENSORMIB::Entphysensortable::has_data() const
{
    for (std::size_t index=0; index<entphysensorentry.size(); index++)
    {
        if(entphysensorentry[index]->has_data())
            return true;
    }
    return false;
}

bool ENTITYSENSORMIB::Entphysensortable::has_operation() const
{
    for (std::size_t index=0; index<entphysensorentry.size(); index++)
    {
        if(entphysensorentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ENTITYSENSORMIB::Entphysensortable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ENTITY-SENSOR-MIB:ENTITY-SENSOR-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string ENTITYSENSORMIB::Entphysensortable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entPhySensorTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ENTITYSENSORMIB::Entphysensortable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ENTITYSENSORMIB::Entphysensortable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entPhySensorEntry")
    {
        for(auto const & c : entphysensorentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ENTITYSENSORMIB::Entphysensortable::Entphysensorentry>();
        c->parent = this;
        entphysensorentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ENTITYSENSORMIB::Entphysensortable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : entphysensorentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ENTITYSENSORMIB::Entphysensortable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ENTITYSENSORMIB::Entphysensortable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ENTITYSENSORMIB::Entphysensortable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhySensorEntry")
        return true;
    return false;
}

ENTITYSENSORMIB::Entphysensortable::Entphysensorentry::Entphysensorentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    entphysensoroperstatus{YType::enumeration, "entPhySensorOperStatus"},
    entphysensorprecision{YType::int32, "entPhySensorPrecision"},
    entphysensorscale{YType::enumeration, "entPhySensorScale"},
    entphysensortype{YType::enumeration, "entPhySensorType"},
    entphysensorunitsdisplay{YType::str, "entPhySensorUnitsDisplay"},
    entphysensorvalue{YType::int32, "entPhySensorValue"},
    entphysensorvaluetimestamp{YType::uint32, "entPhySensorValueTimeStamp"},
    entphysensorvalueupdaterate{YType::uint32, "entPhySensorValueUpdateRate"}
{

    yang_name = "entPhySensorEntry"; yang_parent_name = "entPhySensorTable"; is_top_level_class = false; has_list_ancestor = false;
}

ENTITYSENSORMIB::Entphysensortable::Entphysensorentry::~Entphysensorentry()
{
}

bool ENTITYSENSORMIB::Entphysensortable::Entphysensorentry::has_data() const
{
    return entphysicalindex.is_set
	|| entphysensoroperstatus.is_set
	|| entphysensorprecision.is_set
	|| entphysensorscale.is_set
	|| entphysensortype.is_set
	|| entphysensorunitsdisplay.is_set
	|| entphysensorvalue.is_set
	|| entphysensorvaluetimestamp.is_set
	|| entphysensorvalueupdaterate.is_set;
}

bool ENTITYSENSORMIB::Entphysensortable::Entphysensorentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(entphysensoroperstatus.yfilter)
	|| ydk::is_set(entphysensorprecision.yfilter)
	|| ydk::is_set(entphysensorscale.yfilter)
	|| ydk::is_set(entphysensortype.yfilter)
	|| ydk::is_set(entphysensorunitsdisplay.yfilter)
	|| ydk::is_set(entphysensorvalue.yfilter)
	|| ydk::is_set(entphysensorvaluetimestamp.yfilter)
	|| ydk::is_set(entphysensorvalueupdaterate.yfilter);
}

std::string ENTITYSENSORMIB::Entphysensortable::Entphysensorentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ENTITY-SENSOR-MIB:ENTITY-SENSOR-MIB/entPhySensorTable/" << get_segment_path();
    return path_buffer.str();
}

std::string ENTITYSENSORMIB::Entphysensortable::Entphysensorentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entPhySensorEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ENTITYSENSORMIB::Entphysensortable::Entphysensorentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (entphysensoroperstatus.is_set || is_set(entphysensoroperstatus.yfilter)) leaf_name_data.push_back(entphysensoroperstatus.get_name_leafdata());
    if (entphysensorprecision.is_set || is_set(entphysensorprecision.yfilter)) leaf_name_data.push_back(entphysensorprecision.get_name_leafdata());
    if (entphysensorscale.is_set || is_set(entphysensorscale.yfilter)) leaf_name_data.push_back(entphysensorscale.get_name_leafdata());
    if (entphysensortype.is_set || is_set(entphysensortype.yfilter)) leaf_name_data.push_back(entphysensortype.get_name_leafdata());
    if (entphysensorunitsdisplay.is_set || is_set(entphysensorunitsdisplay.yfilter)) leaf_name_data.push_back(entphysensorunitsdisplay.get_name_leafdata());
    if (entphysensorvalue.is_set || is_set(entphysensorvalue.yfilter)) leaf_name_data.push_back(entphysensorvalue.get_name_leafdata());
    if (entphysensorvaluetimestamp.is_set || is_set(entphysensorvaluetimestamp.yfilter)) leaf_name_data.push_back(entphysensorvaluetimestamp.get_name_leafdata());
    if (entphysensorvalueupdaterate.is_set || is_set(entphysensorvalueupdaterate.yfilter)) leaf_name_data.push_back(entphysensorvalueupdaterate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ENTITYSENSORMIB::Entphysensortable::Entphysensorentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ENTITYSENSORMIB::Entphysensortable::Entphysensorentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ENTITYSENSORMIB::Entphysensortable::Entphysensorentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entPhySensorOperStatus")
    {
        entphysensoroperstatus = value;
        entphysensoroperstatus.value_namespace = name_space;
        entphysensoroperstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entPhySensorPrecision")
    {
        entphysensorprecision = value;
        entphysensorprecision.value_namespace = name_space;
        entphysensorprecision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entPhySensorScale")
    {
        entphysensorscale = value;
        entphysensorscale.value_namespace = name_space;
        entphysensorscale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entPhySensorType")
    {
        entphysensortype = value;
        entphysensortype.value_namespace = name_space;
        entphysensortype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entPhySensorUnitsDisplay")
    {
        entphysensorunitsdisplay = value;
        entphysensorunitsdisplay.value_namespace = name_space;
        entphysensorunitsdisplay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entPhySensorValue")
    {
        entphysensorvalue = value;
        entphysensorvalue.value_namespace = name_space;
        entphysensorvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entPhySensorValueTimeStamp")
    {
        entphysensorvaluetimestamp = value;
        entphysensorvaluetimestamp.value_namespace = name_space;
        entphysensorvaluetimestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entPhySensorValueUpdateRate")
    {
        entphysensorvalueupdaterate = value;
        entphysensorvalueupdaterate.value_namespace = name_space;
        entphysensorvalueupdaterate.value_namespace_prefix = name_space_prefix;
    }
}

void ENTITYSENSORMIB::Entphysensortable::Entphysensorentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "entPhySensorOperStatus")
    {
        entphysensoroperstatus.yfilter = yfilter;
    }
    if(value_path == "entPhySensorPrecision")
    {
        entphysensorprecision.yfilter = yfilter;
    }
    if(value_path == "entPhySensorScale")
    {
        entphysensorscale.yfilter = yfilter;
    }
    if(value_path == "entPhySensorType")
    {
        entphysensortype.yfilter = yfilter;
    }
    if(value_path == "entPhySensorUnitsDisplay")
    {
        entphysensorunitsdisplay.yfilter = yfilter;
    }
    if(value_path == "entPhySensorValue")
    {
        entphysensorvalue.yfilter = yfilter;
    }
    if(value_path == "entPhySensorValueTimeStamp")
    {
        entphysensorvaluetimestamp.yfilter = yfilter;
    }
    if(value_path == "entPhySensorValueUpdateRate")
    {
        entphysensorvalueupdaterate.yfilter = yfilter;
    }
}

bool ENTITYSENSORMIB::Entphysensortable::Entphysensorentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "entPhySensorOperStatus" || name == "entPhySensorPrecision" || name == "entPhySensorScale" || name == "entPhySensorType" || name == "entPhySensorUnitsDisplay" || name == "entPhySensorValue" || name == "entPhySensorValueTimeStamp" || name == "entPhySensorValueUpdateRate")
        return true;
    return false;
}

const Enum::YLeaf EntitySensorDataType::other {1, "other"};
const Enum::YLeaf EntitySensorDataType::unknown {2, "unknown"};
const Enum::YLeaf EntitySensorDataType::voltsAC {3, "voltsAC"};
const Enum::YLeaf EntitySensorDataType::voltsDC {4, "voltsDC"};
const Enum::YLeaf EntitySensorDataType::amperes {5, "amperes"};
const Enum::YLeaf EntitySensorDataType::watts {6, "watts"};
const Enum::YLeaf EntitySensorDataType::hertz {7, "hertz"};
const Enum::YLeaf EntitySensorDataType::celsius {8, "celsius"};
const Enum::YLeaf EntitySensorDataType::percentRH {9, "percentRH"};
const Enum::YLeaf EntitySensorDataType::rpm {10, "rpm"};
const Enum::YLeaf EntitySensorDataType::cmm {11, "cmm"};
const Enum::YLeaf EntitySensorDataType::truthvalue {12, "truthvalue"};

const Enum::YLeaf EntitySensorStatus::ok {1, "ok"};
const Enum::YLeaf EntitySensorStatus::unavailable {2, "unavailable"};
const Enum::YLeaf EntitySensorStatus::nonoperational {3, "nonoperational"};

const Enum::YLeaf EntitySensorDataScale::yocto {1, "yocto"};
const Enum::YLeaf EntitySensorDataScale::zepto {2, "zepto"};
const Enum::YLeaf EntitySensorDataScale::atto {3, "atto"};
const Enum::YLeaf EntitySensorDataScale::femto {4, "femto"};
const Enum::YLeaf EntitySensorDataScale::pico {5, "pico"};
const Enum::YLeaf EntitySensorDataScale::nano {6, "nano"};
const Enum::YLeaf EntitySensorDataScale::micro {7, "micro"};
const Enum::YLeaf EntitySensorDataScale::milli {8, "milli"};
const Enum::YLeaf EntitySensorDataScale::units {9, "units"};
const Enum::YLeaf EntitySensorDataScale::kilo {10, "kilo"};
const Enum::YLeaf EntitySensorDataScale::mega {11, "mega"};
const Enum::YLeaf EntitySensorDataScale::giga {12, "giga"};
const Enum::YLeaf EntitySensorDataScale::tera {13, "tera"};
const Enum::YLeaf EntitySensorDataScale::exa {14, "exa"};
const Enum::YLeaf EntitySensorDataScale::peta {15, "peta"};
const Enum::YLeaf EntitySensorDataScale::zetta {16, "zetta"};
const Enum::YLeaf EntitySensorDataScale::yotta {17, "yotta"};


}
}

