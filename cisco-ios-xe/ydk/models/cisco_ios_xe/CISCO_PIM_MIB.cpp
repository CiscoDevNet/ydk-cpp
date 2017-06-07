
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_PIM_MIB.hpp"

namespace ydk {
namespace CISCO_PIM_MIB {

CiscoPimMib::CiscoPimMib()
    :
    ciscopimmibnotificationobjects(std::make_shared<CiscoPimMib::Ciscopimmibnotificationobjects>())
	,cpim(std::make_shared<CiscoPimMib::Cpim>())
{
    ciscopimmibnotificationobjects->parent = this;

    cpim->parent = this;

    yang_name = "CISCO-PIM-MIB"; yang_parent_name = "CISCO-PIM-MIB";
}

CiscoPimMib::~CiscoPimMib()
{
}

bool CiscoPimMib::has_data() const
{
    return (ciscopimmibnotificationobjects !=  nullptr && ciscopimmibnotificationobjects->has_data())
	|| (cpim !=  nullptr && cpim->has_data());
}

bool CiscoPimMib::has_operation() const
{
    return is_set(operation)
	|| (ciscopimmibnotificationobjects !=  nullptr && ciscopimmibnotificationobjects->has_operation())
	|| (cpim !=  nullptr && cpim->has_operation());
}

std::string CiscoPimMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PIM-MIB:CISCO-PIM-MIB";

    return path_buffer.str();

}

const EntityPath CiscoPimMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoPimMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoPimMIBNotificationObjects")
    {
        if(ciscopimmibnotificationobjects == nullptr)
        {
            ciscopimmibnotificationobjects = std::make_shared<CiscoPimMib::Ciscopimmibnotificationobjects>();
        }
        return ciscopimmibnotificationobjects;
    }

    if(child_yang_name == "cpim")
    {
        if(cpim == nullptr)
        {
            cpim = std::make_shared<CiscoPimMib::Cpim>();
        }
        return cpim;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPimMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ciscopimmibnotificationobjects != nullptr)
    {
        children["ciscoPimMIBNotificationObjects"] = ciscopimmibnotificationobjects;
    }

    if(cpim != nullptr)
    {
        children["cpim"] = cpim;
    }

    return children;
}

void CiscoPimMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoPimMib::clone_ptr() const
{
    return std::make_shared<CiscoPimMib>();
}

std::string CiscoPimMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoPimMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoPimMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoPimMib::Cpim::Cpim()
    :
    cpiminvalidjoinprunemsgsrcvd{YType::uint32, "cpimInvalidJoinPruneMsgsRcvd"},
    cpiminvalidregistermsgsrcvd{YType::uint32, "cpimInvalidRegisterMsgsRcvd"},
    cpimlasterrorgroup{YType::str, "cpimLastErrorGroup"},
    cpimlasterrorgrouptype{YType::enumeration, "cpimLastErrorGroupType"},
    cpimlasterrororigin{YType::str, "cpimLastErrorOrigin"},
    cpimlasterrororigintype{YType::enumeration, "cpimLastErrorOriginType"},
    cpimlasterrorrp{YType::str, "cpimLastErrorRP"},
    cpimlasterrorrptype{YType::enumeration, "cpimLastErrorRPType"},
    cpimlasterrortype{YType::enumeration, "cpimLastErrorType"}
{
    yang_name = "cpim"; yang_parent_name = "CISCO-PIM-MIB";
}

CiscoPimMib::Cpim::~Cpim()
{
}

bool CiscoPimMib::Cpim::has_data() const
{
    return cpiminvalidjoinprunemsgsrcvd.is_set
	|| cpiminvalidregistermsgsrcvd.is_set
	|| cpimlasterrorgroup.is_set
	|| cpimlasterrorgrouptype.is_set
	|| cpimlasterrororigin.is_set
	|| cpimlasterrororigintype.is_set
	|| cpimlasterrorrp.is_set
	|| cpimlasterrorrptype.is_set
	|| cpimlasterrortype.is_set;
}

bool CiscoPimMib::Cpim::has_operation() const
{
    return is_set(operation)
	|| is_set(cpiminvalidjoinprunemsgsrcvd.operation)
	|| is_set(cpiminvalidregistermsgsrcvd.operation)
	|| is_set(cpimlasterrorgroup.operation)
	|| is_set(cpimlasterrorgrouptype.operation)
	|| is_set(cpimlasterrororigin.operation)
	|| is_set(cpimlasterrororigintype.operation)
	|| is_set(cpimlasterrorrp.operation)
	|| is_set(cpimlasterrorrptype.operation)
	|| is_set(cpimlasterrortype.operation);
}

std::string CiscoPimMib::Cpim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpim";

    return path_buffer.str();

}

const EntityPath CiscoPimMib::Cpim::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-PIM-MIB:CISCO-PIM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpiminvalidjoinprunemsgsrcvd.is_set || is_set(cpiminvalidjoinprunemsgsrcvd.operation)) leaf_name_data.push_back(cpiminvalidjoinprunemsgsrcvd.get_name_leafdata());
    if (cpiminvalidregistermsgsrcvd.is_set || is_set(cpiminvalidregistermsgsrcvd.operation)) leaf_name_data.push_back(cpiminvalidregistermsgsrcvd.get_name_leafdata());
    if (cpimlasterrorgroup.is_set || is_set(cpimlasterrorgroup.operation)) leaf_name_data.push_back(cpimlasterrorgroup.get_name_leafdata());
    if (cpimlasterrorgrouptype.is_set || is_set(cpimlasterrorgrouptype.operation)) leaf_name_data.push_back(cpimlasterrorgrouptype.get_name_leafdata());
    if (cpimlasterrororigin.is_set || is_set(cpimlasterrororigin.operation)) leaf_name_data.push_back(cpimlasterrororigin.get_name_leafdata());
    if (cpimlasterrororigintype.is_set || is_set(cpimlasterrororigintype.operation)) leaf_name_data.push_back(cpimlasterrororigintype.get_name_leafdata());
    if (cpimlasterrorrp.is_set || is_set(cpimlasterrorrp.operation)) leaf_name_data.push_back(cpimlasterrorrp.get_name_leafdata());
    if (cpimlasterrorrptype.is_set || is_set(cpimlasterrorrptype.operation)) leaf_name_data.push_back(cpimlasterrorrptype.get_name_leafdata());
    if (cpimlasterrortype.is_set || is_set(cpimlasterrortype.operation)) leaf_name_data.push_back(cpimlasterrortype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPimMib::Cpim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPimMib::Cpim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoPimMib::Cpim::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpimInvalidJoinPruneMsgsRcvd")
    {
        cpiminvalidjoinprunemsgsrcvd = value;
    }
    if(value_path == "cpimInvalidRegisterMsgsRcvd")
    {
        cpiminvalidregistermsgsrcvd = value;
    }
    if(value_path == "cpimLastErrorGroup")
    {
        cpimlasterrorgroup = value;
    }
    if(value_path == "cpimLastErrorGroupType")
    {
        cpimlasterrorgrouptype = value;
    }
    if(value_path == "cpimLastErrorOrigin")
    {
        cpimlasterrororigin = value;
    }
    if(value_path == "cpimLastErrorOriginType")
    {
        cpimlasterrororigintype = value;
    }
    if(value_path == "cpimLastErrorRP")
    {
        cpimlasterrorrp = value;
    }
    if(value_path == "cpimLastErrorRPType")
    {
        cpimlasterrorrptype = value;
    }
    if(value_path == "cpimLastErrorType")
    {
        cpimlasterrortype = value;
    }
}

CiscoPimMib::Ciscopimmibnotificationobjects::Ciscopimmibnotificationobjects()
    :
    cpimrpmappingchangetype{YType::enumeration, "cpimRPMappingChangeType"}
{
    yang_name = "ciscoPimMIBNotificationObjects"; yang_parent_name = "CISCO-PIM-MIB";
}

CiscoPimMib::Ciscopimmibnotificationobjects::~Ciscopimmibnotificationobjects()
{
}

bool CiscoPimMib::Ciscopimmibnotificationobjects::has_data() const
{
    return cpimrpmappingchangetype.is_set;
}

bool CiscoPimMib::Ciscopimmibnotificationobjects::has_operation() const
{
    return is_set(operation)
	|| is_set(cpimrpmappingchangetype.operation);
}

std::string CiscoPimMib::Ciscopimmibnotificationobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoPimMIBNotificationObjects";

    return path_buffer.str();

}

const EntityPath CiscoPimMib::Ciscopimmibnotificationobjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-PIM-MIB:CISCO-PIM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpimrpmappingchangetype.is_set || is_set(cpimrpmappingchangetype.operation)) leaf_name_data.push_back(cpimrpmappingchangetype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPimMib::Ciscopimmibnotificationobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPimMib::Ciscopimmibnotificationobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoPimMib::Ciscopimmibnotificationobjects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpimRPMappingChangeType")
    {
        cpimrpmappingchangetype = value;
    }
}

const Enum::YLeaf CiscoPimMib::Cpim::CpimlasterrortypeEnum::none {1, "none"};
const Enum::YLeaf CiscoPimMib::Cpim::CpimlasterrortypeEnum::invalidRegister {2, "invalidRegister"};
const Enum::YLeaf CiscoPimMib::Cpim::CpimlasterrortypeEnum::invalidJoinPrune {3, "invalidJoinPrune"};

const Enum::YLeaf CiscoPimMib::Ciscopimmibnotificationobjects::CpimrpmappingchangetypeEnum::newMapping {1, "newMapping"};
const Enum::YLeaf CiscoPimMib::Ciscopimmibnotificationobjects::CpimrpmappingchangetypeEnum::deletedMapping {2, "deletedMapping"};
const Enum::YLeaf CiscoPimMib::Ciscopimmibnotificationobjects::CpimrpmappingchangetypeEnum::modifiedOldMapping {3, "modifiedOldMapping"};
const Enum::YLeaf CiscoPimMib::Ciscopimmibnotificationobjects::CpimrpmappingchangetypeEnum::modifiedNewMapping {4, "modifiedNewMapping"};


}
}

