
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ENTITY_SENSOR_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace ENTITY_SENSOR_MIB {

EntitySensorMib::EntitySensorMib()
    :
    entphysensortable(std::make_shared<EntitySensorMib::Entphysensortable>())
{
    entphysensortable->parent = this;

    yang_name = "ENTITY-SENSOR-MIB"; yang_parent_name = "ENTITY-SENSOR-MIB";
}

EntitySensorMib::~EntitySensorMib()
{
}

bool EntitySensorMib::has_data() const
{
    return (entphysensortable !=  nullptr && entphysensortable->has_data());
}

bool EntitySensorMib::has_operation() const
{
    return is_set(yfilter)
	|| (entphysensortable !=  nullptr && entphysensortable->has_operation());
}

std::string EntitySensorMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ENTITY-SENSOR-MIB:ENTITY-SENSOR-MIB";

    return path_buffer.str();

}

const EntityPath EntitySensorMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> EntitySensorMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entPhySensorTable")
    {
        if(entphysensortable == nullptr)
        {
            entphysensortable = std::make_shared<EntitySensorMib::Entphysensortable>();
        }
        return entphysensortable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntitySensorMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(entphysensortable != nullptr)
    {
        children["entPhySensorTable"] = entphysensortable;
    }

    return children;
}

void EntitySensorMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EntitySensorMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> EntitySensorMib::clone_ptr() const
{
    return std::make_shared<EntitySensorMib>();
}

std::string EntitySensorMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string EntitySensorMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function EntitySensorMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> EntitySensorMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool EntitySensorMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhySensorTable")
        return true;
    return false;
}

EntitySensorMib::Entphysensortable::Entphysensortable()
{
    yang_name = "entPhySensorTable"; yang_parent_name = "ENTITY-SENSOR-MIB";
}

EntitySensorMib::Entphysensortable::~Entphysensortable()
{
}

bool EntitySensorMib::Entphysensortable::has_data() const
{
    for (std::size_t index=0; index<entphysensorentry.size(); index++)
    {
        if(entphysensorentry[index]->has_data())
            return true;
    }
    return false;
}

bool EntitySensorMib::Entphysensortable::has_operation() const
{
    for (std::size_t index=0; index<entphysensorentry.size(); index++)
    {
        if(entphysensorentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EntitySensorMib::Entphysensortable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entPhySensorTable";

    return path_buffer.str();

}

const EntityPath EntitySensorMib::Entphysensortable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ENTITY-SENSOR-MIB:ENTITY-SENSOR-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EntitySensorMib::Entphysensortable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<EntitySensorMib::Entphysensortable::Entphysensorentry>();
        c->parent = this;
        entphysensorentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntitySensorMib::Entphysensortable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : entphysensorentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EntitySensorMib::Entphysensortable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EntitySensorMib::Entphysensortable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EntitySensorMib::Entphysensortable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhySensorEntry")
        return true;
    return false;
}

EntitySensorMib::Entphysensortable::Entphysensorentry::Entphysensorentry()
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
    yang_name = "entPhySensorEntry"; yang_parent_name = "entPhySensorTable";
}

EntitySensorMib::Entphysensortable::Entphysensorentry::~Entphysensorentry()
{
}

bool EntitySensorMib::Entphysensortable::Entphysensorentry::has_data() const
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

bool EntitySensorMib::Entphysensortable::Entphysensorentry::has_operation() const
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

std::string EntitySensorMib::Entphysensortable::Entphysensorentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entPhySensorEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";

    return path_buffer.str();

}

const EntityPath EntitySensorMib::Entphysensortable::Entphysensorentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ENTITY-SENSOR-MIB:ENTITY-SENSOR-MIB/entPhySensorTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EntitySensorMib::Entphysensortable::Entphysensorentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntitySensorMib::Entphysensortable::Entphysensorentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EntitySensorMib::Entphysensortable::Entphysensorentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void EntitySensorMib::Entphysensortable::Entphysensorentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool EntitySensorMib::Entphysensortable::Entphysensorentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "entPhySensorOperStatus" || name == "entPhySensorPrecision" || name == "entPhySensorScale" || name == "entPhySensorType" || name == "entPhySensorUnitsDisplay" || name == "entPhySensorValue" || name == "entPhySensorValueTimeStamp" || name == "entPhySensorValueUpdateRate")
        return true;
    return false;
}

const Enum::YLeaf Entitysensordatatype::other {1, "other"};
const Enum::YLeaf Entitysensordatatype::unknown {2, "unknown"};
const Enum::YLeaf Entitysensordatatype::voltsAC {3, "voltsAC"};
const Enum::YLeaf Entitysensordatatype::voltsDC {4, "voltsDC"};
const Enum::YLeaf Entitysensordatatype::amperes {5, "amperes"};
const Enum::YLeaf Entitysensordatatype::watts {6, "watts"};
const Enum::YLeaf Entitysensordatatype::hertz {7, "hertz"};
const Enum::YLeaf Entitysensordatatype::celsius {8, "celsius"};
const Enum::YLeaf Entitysensordatatype::percentRH {9, "percentRH"};
const Enum::YLeaf Entitysensordatatype::rpm {10, "rpm"};
const Enum::YLeaf Entitysensordatatype::cmm {11, "cmm"};
const Enum::YLeaf Entitysensordatatype::truthvalue {12, "truthvalue"};

const Enum::YLeaf Entitysensorstatus::ok {1, "ok"};
const Enum::YLeaf Entitysensorstatus::unavailable {2, "unavailable"};
const Enum::YLeaf Entitysensorstatus::nonoperational {3, "nonoperational"};

const Enum::YLeaf Entitysensordatascale::yocto {1, "yocto"};
const Enum::YLeaf Entitysensordatascale::zepto {2, "zepto"};
const Enum::YLeaf Entitysensordatascale::atto {3, "atto"};
const Enum::YLeaf Entitysensordatascale::femto {4, "femto"};
const Enum::YLeaf Entitysensordatascale::pico {5, "pico"};
const Enum::YLeaf Entitysensordatascale::nano {6, "nano"};
const Enum::YLeaf Entitysensordatascale::micro {7, "micro"};
const Enum::YLeaf Entitysensordatascale::milli {8, "milli"};
const Enum::YLeaf Entitysensordatascale::units {9, "units"};
const Enum::YLeaf Entitysensordatascale::kilo {10, "kilo"};
const Enum::YLeaf Entitysensordatascale::mega {11, "mega"};
const Enum::YLeaf Entitysensordatascale::giga {12, "giga"};
const Enum::YLeaf Entitysensordatascale::tera {13, "tera"};
const Enum::YLeaf Entitysensordatascale::exa {14, "exa"};
const Enum::YLeaf Entitysensordatascale::peta {15, "peta"};
const Enum::YLeaf Entitysensordatascale::zetta {16, "zetta"};
const Enum::YLeaf Entitysensordatascale::yotta {17, "yotta"};


}
}

