
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ENTITY_SENSOR_MIB.hpp"

namespace ydk {
namespace ENTITY_SENSOR_MIB {

EntitySensorMib::EntitySensorMib()
    :
    entphysensortable_(std::make_shared<EntitySensorMib::Entphysensortable>())
{
    entphysensortable_->parent = this;

    yang_name = "ENTITY-SENSOR-MIB"; yang_parent_name = "ENTITY-SENSOR-MIB";
}

EntitySensorMib::~EntitySensorMib()
{
}

bool EntitySensorMib::has_data() const
{
    return (entphysensortable_ !=  nullptr && entphysensortable_->has_data());
}

bool EntitySensorMib::has_operation() const
{
    return is_set(operation)
	|| (entphysensortable_ !=  nullptr && entphysensortable_->has_operation());
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
        if(entphysensortable_ == nullptr)
        {
            entphysensortable_ = std::make_shared<EntitySensorMib::Entphysensortable>();
        }
        return entphysensortable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntitySensorMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(entphysensortable_ != nullptr)
    {
        children["entPhySensorTable"] = entphysensortable_;
    }

    return children;
}

void EntitySensorMib::set_value(const std::string & value_path, std::string value)
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

EntitySensorMib::Entphysensortable::Entphysensortable()
{
    yang_name = "entPhySensorTable"; yang_parent_name = "ENTITY-SENSOR-MIB";
}

EntitySensorMib::Entphysensortable::~Entphysensortable()
{
}

bool EntitySensorMib::Entphysensortable::has_data() const
{
    for (std::size_t index=0; index<entphysensorentry_.size(); index++)
    {
        if(entphysensorentry_[index]->has_data())
            return true;
    }
    return false;
}

bool EntitySensorMib::Entphysensortable::has_operation() const
{
    for (std::size_t index=0; index<entphysensorentry_.size(); index++)
    {
        if(entphysensorentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : entphysensorentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EntitySensorMib::Entphysensortable::Entphysensorentry>();
        c->parent = this;
        entphysensorentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntitySensorMib::Entphysensortable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : entphysensorentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EntitySensorMib::Entphysensortable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(entphysensoroperstatus.operation)
	|| is_set(entphysensorprecision.operation)
	|| is_set(entphysensorscale.operation)
	|| is_set(entphysensortype.operation)
	|| is_set(entphysensorunitsdisplay.operation)
	|| is_set(entphysensorvalue.operation)
	|| is_set(entphysensorvaluetimestamp.operation)
	|| is_set(entphysensorvalueupdaterate.operation);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (entphysensoroperstatus.is_set || is_set(entphysensoroperstatus.operation)) leaf_name_data.push_back(entphysensoroperstatus.get_name_leafdata());
    if (entphysensorprecision.is_set || is_set(entphysensorprecision.operation)) leaf_name_data.push_back(entphysensorprecision.get_name_leafdata());
    if (entphysensorscale.is_set || is_set(entphysensorscale.operation)) leaf_name_data.push_back(entphysensorscale.get_name_leafdata());
    if (entphysensortype.is_set || is_set(entphysensortype.operation)) leaf_name_data.push_back(entphysensortype.get_name_leafdata());
    if (entphysensorunitsdisplay.is_set || is_set(entphysensorunitsdisplay.operation)) leaf_name_data.push_back(entphysensorunitsdisplay.get_name_leafdata());
    if (entphysensorvalue.is_set || is_set(entphysensorvalue.operation)) leaf_name_data.push_back(entphysensorvalue.get_name_leafdata());
    if (entphysensorvaluetimestamp.is_set || is_set(entphysensorvaluetimestamp.operation)) leaf_name_data.push_back(entphysensorvaluetimestamp.get_name_leafdata());
    if (entphysensorvalueupdaterate.is_set || is_set(entphysensorvalueupdaterate.operation)) leaf_name_data.push_back(entphysensorvalueupdaterate.get_name_leafdata());


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

void EntitySensorMib::Entphysensortable::Entphysensorentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "entPhySensorOperStatus")
    {
        entphysensoroperstatus = value;
    }
    if(value_path == "entPhySensorPrecision")
    {
        entphysensorprecision = value;
    }
    if(value_path == "entPhySensorScale")
    {
        entphysensorscale = value;
    }
    if(value_path == "entPhySensorType")
    {
        entphysensortype = value;
    }
    if(value_path == "entPhySensorUnitsDisplay")
    {
        entphysensorunitsdisplay = value;
    }
    if(value_path == "entPhySensorValue")
    {
        entphysensorvalue = value;
    }
    if(value_path == "entPhySensorValueTimeStamp")
    {
        entphysensorvaluetimestamp = value;
    }
    if(value_path == "entPhySensorValueUpdateRate")
    {
        entphysensorvalueupdaterate = value;
    }
}

const Enum::YLeaf EntitysensordatatypeEnum::other {1, "other"};
const Enum::YLeaf EntitysensordatatypeEnum::unknown {2, "unknown"};
const Enum::YLeaf EntitysensordatatypeEnum::voltsAC {3, "voltsAC"};
const Enum::YLeaf EntitysensordatatypeEnum::voltsDC {4, "voltsDC"};
const Enum::YLeaf EntitysensordatatypeEnum::amperes {5, "amperes"};
const Enum::YLeaf EntitysensordatatypeEnum::watts {6, "watts"};
const Enum::YLeaf EntitysensordatatypeEnum::hertz {7, "hertz"};
const Enum::YLeaf EntitysensordatatypeEnum::celsius {8, "celsius"};
const Enum::YLeaf EntitysensordatatypeEnum::percentRH {9, "percentRH"};
const Enum::YLeaf EntitysensordatatypeEnum::rpm {10, "rpm"};
const Enum::YLeaf EntitysensordatatypeEnum::cmm {11, "cmm"};
const Enum::YLeaf EntitysensordatatypeEnum::truthvalue {12, "truthvalue"};

const Enum::YLeaf EntitysensorstatusEnum::ok {1, "ok"};
const Enum::YLeaf EntitysensorstatusEnum::unavailable {2, "unavailable"};
const Enum::YLeaf EntitysensorstatusEnum::nonoperational {3, "nonoperational"};

const Enum::YLeaf EntitysensordatascaleEnum::yocto {1, "yocto"};
const Enum::YLeaf EntitysensordatascaleEnum::zepto {2, "zepto"};
const Enum::YLeaf EntitysensordatascaleEnum::atto {3, "atto"};
const Enum::YLeaf EntitysensordatascaleEnum::femto {4, "femto"};
const Enum::YLeaf EntitysensordatascaleEnum::pico {5, "pico"};
const Enum::YLeaf EntitysensordatascaleEnum::nano {6, "nano"};
const Enum::YLeaf EntitysensordatascaleEnum::micro {7, "micro"};
const Enum::YLeaf EntitysensordatascaleEnum::milli {8, "milli"};
const Enum::YLeaf EntitysensordatascaleEnum::units {9, "units"};
const Enum::YLeaf EntitysensordatascaleEnum::kilo {10, "kilo"};
const Enum::YLeaf EntitysensordatascaleEnum::mega {11, "mega"};
const Enum::YLeaf EntitysensordatascaleEnum::giga {12, "giga"};
const Enum::YLeaf EntitysensordatascaleEnum::tera {13, "tera"};
const Enum::YLeaf EntitysensordatascaleEnum::exa {14, "exa"};
const Enum::YLeaf EntitysensordatascaleEnum::peta {15, "peta"};
const Enum::YLeaf EntitysensordatascaleEnum::zetta {16, "zetta"};
const Enum::YLeaf EntitysensordatascaleEnum::yotta {17, "yotta"};


}
}

