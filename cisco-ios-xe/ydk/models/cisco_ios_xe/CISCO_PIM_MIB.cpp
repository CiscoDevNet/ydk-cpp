
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_PIM_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_PIM_MIB {

CISCOPIMMIB::CISCOPIMMIB()
    :
    cpim(std::make_shared<CISCOPIMMIB::Cpim>())
	,ciscopimmibnotificationobjects(std::make_shared<CISCOPIMMIB::Ciscopimmibnotificationobjects>())
{
    cpim->parent = this;
    ciscopimmibnotificationobjects->parent = this;

    yang_name = "CISCO-PIM-MIB"; yang_parent_name = "CISCO-PIM-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCOPIMMIB::~CISCOPIMMIB()
{
}

bool CISCOPIMMIB::has_data() const
{
    return (cpim !=  nullptr && cpim->has_data())
	|| (ciscopimmibnotificationobjects !=  nullptr && ciscopimmibnotificationobjects->has_data());
}

bool CISCOPIMMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cpim !=  nullptr && cpim->has_operation())
	|| (ciscopimmibnotificationobjects !=  nullptr && ciscopimmibnotificationobjects->has_operation());
}

std::string CISCOPIMMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PIM-MIB:CISCO-PIM-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPIMMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPIMMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpim")
    {
        if(cpim == nullptr)
        {
            cpim = std::make_shared<CISCOPIMMIB::Cpim>();
        }
        return cpim;
    }

    if(child_yang_name == "ciscoPimMIBNotificationObjects")
    {
        if(ciscopimmibnotificationobjects == nullptr)
        {
            ciscopimmibnotificationobjects = std::make_shared<CISCOPIMMIB::Ciscopimmibnotificationobjects>();
        }
        return ciscopimmibnotificationobjects;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPIMMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cpim != nullptr)
    {
        children["cpim"] = cpim;
    }

    if(ciscopimmibnotificationobjects != nullptr)
    {
        children["ciscoPimMIBNotificationObjects"] = ciscopimmibnotificationobjects;
    }

    return children;
}

void CISCOPIMMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOPIMMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOPIMMIB::clone_ptr() const
{
    return std::make_shared<CISCOPIMMIB>();
}

std::string CISCOPIMMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOPIMMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOPIMMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOPIMMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOPIMMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpim" || name == "ciscoPimMIBNotificationObjects")
        return true;
    return false;
}

CISCOPIMMIB::Cpim::Cpim()
    :
    cpiminvalidregistermsgsrcvd{YType::uint32, "cpimInvalidRegisterMsgsRcvd"},
    cpiminvalidjoinprunemsgsrcvd{YType::uint32, "cpimInvalidJoinPruneMsgsRcvd"},
    cpimlasterrortype{YType::enumeration, "cpimLastErrorType"},
    cpimlasterrororigintype{YType::enumeration, "cpimLastErrorOriginType"},
    cpimlasterrororigin{YType::str, "cpimLastErrorOrigin"},
    cpimlasterrorgrouptype{YType::enumeration, "cpimLastErrorGroupType"},
    cpimlasterrorgroup{YType::str, "cpimLastErrorGroup"},
    cpimlasterrorrptype{YType::enumeration, "cpimLastErrorRPType"},
    cpimlasterrorrp{YType::str, "cpimLastErrorRP"}
{

    yang_name = "cpim"; yang_parent_name = "CISCO-PIM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOPIMMIB::Cpim::~Cpim()
{
}

bool CISCOPIMMIB::Cpim::has_data() const
{
    return cpiminvalidregistermsgsrcvd.is_set
	|| cpiminvalidjoinprunemsgsrcvd.is_set
	|| cpimlasterrortype.is_set
	|| cpimlasterrororigintype.is_set
	|| cpimlasterrororigin.is_set
	|| cpimlasterrorgrouptype.is_set
	|| cpimlasterrorgroup.is_set
	|| cpimlasterrorrptype.is_set
	|| cpimlasterrorrp.is_set;
}

bool CISCOPIMMIB::Cpim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpiminvalidregistermsgsrcvd.yfilter)
	|| ydk::is_set(cpiminvalidjoinprunemsgsrcvd.yfilter)
	|| ydk::is_set(cpimlasterrortype.yfilter)
	|| ydk::is_set(cpimlasterrororigintype.yfilter)
	|| ydk::is_set(cpimlasterrororigin.yfilter)
	|| ydk::is_set(cpimlasterrorgrouptype.yfilter)
	|| ydk::is_set(cpimlasterrorgroup.yfilter)
	|| ydk::is_set(cpimlasterrorrptype.yfilter)
	|| ydk::is_set(cpimlasterrorrp.yfilter);
}

std::string CISCOPIMMIB::Cpim::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PIM-MIB:CISCO-PIM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPIMMIB::Cpim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPIMMIB::Cpim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpiminvalidregistermsgsrcvd.is_set || is_set(cpiminvalidregistermsgsrcvd.yfilter)) leaf_name_data.push_back(cpiminvalidregistermsgsrcvd.get_name_leafdata());
    if (cpiminvalidjoinprunemsgsrcvd.is_set || is_set(cpiminvalidjoinprunemsgsrcvd.yfilter)) leaf_name_data.push_back(cpiminvalidjoinprunemsgsrcvd.get_name_leafdata());
    if (cpimlasterrortype.is_set || is_set(cpimlasterrortype.yfilter)) leaf_name_data.push_back(cpimlasterrortype.get_name_leafdata());
    if (cpimlasterrororigintype.is_set || is_set(cpimlasterrororigintype.yfilter)) leaf_name_data.push_back(cpimlasterrororigintype.get_name_leafdata());
    if (cpimlasterrororigin.is_set || is_set(cpimlasterrororigin.yfilter)) leaf_name_data.push_back(cpimlasterrororigin.get_name_leafdata());
    if (cpimlasterrorgrouptype.is_set || is_set(cpimlasterrorgrouptype.yfilter)) leaf_name_data.push_back(cpimlasterrorgrouptype.get_name_leafdata());
    if (cpimlasterrorgroup.is_set || is_set(cpimlasterrorgroup.yfilter)) leaf_name_data.push_back(cpimlasterrorgroup.get_name_leafdata());
    if (cpimlasterrorrptype.is_set || is_set(cpimlasterrorrptype.yfilter)) leaf_name_data.push_back(cpimlasterrorrptype.get_name_leafdata());
    if (cpimlasterrorrp.is_set || is_set(cpimlasterrorrp.yfilter)) leaf_name_data.push_back(cpimlasterrorrp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPIMMIB::Cpim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPIMMIB::Cpim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOPIMMIB::Cpim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpimInvalidRegisterMsgsRcvd")
    {
        cpiminvalidregistermsgsrcvd = value;
        cpiminvalidregistermsgsrcvd.value_namespace = name_space;
        cpiminvalidregistermsgsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpimInvalidJoinPruneMsgsRcvd")
    {
        cpiminvalidjoinprunemsgsrcvd = value;
        cpiminvalidjoinprunemsgsrcvd.value_namespace = name_space;
        cpiminvalidjoinprunemsgsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpimLastErrorType")
    {
        cpimlasterrortype = value;
        cpimlasterrortype.value_namespace = name_space;
        cpimlasterrortype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpimLastErrorOriginType")
    {
        cpimlasterrororigintype = value;
        cpimlasterrororigintype.value_namespace = name_space;
        cpimlasterrororigintype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpimLastErrorOrigin")
    {
        cpimlasterrororigin = value;
        cpimlasterrororigin.value_namespace = name_space;
        cpimlasterrororigin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpimLastErrorGroupType")
    {
        cpimlasterrorgrouptype = value;
        cpimlasterrorgrouptype.value_namespace = name_space;
        cpimlasterrorgrouptype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpimLastErrorGroup")
    {
        cpimlasterrorgroup = value;
        cpimlasterrorgroup.value_namespace = name_space;
        cpimlasterrorgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpimLastErrorRPType")
    {
        cpimlasterrorrptype = value;
        cpimlasterrorrptype.value_namespace = name_space;
        cpimlasterrorrptype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpimLastErrorRP")
    {
        cpimlasterrorrp = value;
        cpimlasterrorrp.value_namespace = name_space;
        cpimlasterrorrp.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOPIMMIB::Cpim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpimInvalidRegisterMsgsRcvd")
    {
        cpiminvalidregistermsgsrcvd.yfilter = yfilter;
    }
    if(value_path == "cpimInvalidJoinPruneMsgsRcvd")
    {
        cpiminvalidjoinprunemsgsrcvd.yfilter = yfilter;
    }
    if(value_path == "cpimLastErrorType")
    {
        cpimlasterrortype.yfilter = yfilter;
    }
    if(value_path == "cpimLastErrorOriginType")
    {
        cpimlasterrororigintype.yfilter = yfilter;
    }
    if(value_path == "cpimLastErrorOrigin")
    {
        cpimlasterrororigin.yfilter = yfilter;
    }
    if(value_path == "cpimLastErrorGroupType")
    {
        cpimlasterrorgrouptype.yfilter = yfilter;
    }
    if(value_path == "cpimLastErrorGroup")
    {
        cpimlasterrorgroup.yfilter = yfilter;
    }
    if(value_path == "cpimLastErrorRPType")
    {
        cpimlasterrorrptype.yfilter = yfilter;
    }
    if(value_path == "cpimLastErrorRP")
    {
        cpimlasterrorrp.yfilter = yfilter;
    }
}

bool CISCOPIMMIB::Cpim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpimInvalidRegisterMsgsRcvd" || name == "cpimInvalidJoinPruneMsgsRcvd" || name == "cpimLastErrorType" || name == "cpimLastErrorOriginType" || name == "cpimLastErrorOrigin" || name == "cpimLastErrorGroupType" || name == "cpimLastErrorGroup" || name == "cpimLastErrorRPType" || name == "cpimLastErrorRP")
        return true;
    return false;
}

CISCOPIMMIB::Ciscopimmibnotificationobjects::Ciscopimmibnotificationobjects()
    :
    cpimrpmappingchangetype{YType::enumeration, "cpimRPMappingChangeType"}
{

    yang_name = "ciscoPimMIBNotificationObjects"; yang_parent_name = "CISCO-PIM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOPIMMIB::Ciscopimmibnotificationobjects::~Ciscopimmibnotificationobjects()
{
}

bool CISCOPIMMIB::Ciscopimmibnotificationobjects::has_data() const
{
    return cpimrpmappingchangetype.is_set;
}

bool CISCOPIMMIB::Ciscopimmibnotificationobjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpimrpmappingchangetype.yfilter);
}

std::string CISCOPIMMIB::Ciscopimmibnotificationobjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PIM-MIB:CISCO-PIM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPIMMIB::Ciscopimmibnotificationobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoPimMIBNotificationObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPIMMIB::Ciscopimmibnotificationobjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpimrpmappingchangetype.is_set || is_set(cpimrpmappingchangetype.yfilter)) leaf_name_data.push_back(cpimrpmappingchangetype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPIMMIB::Ciscopimmibnotificationobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPIMMIB::Ciscopimmibnotificationobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOPIMMIB::Ciscopimmibnotificationobjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpimRPMappingChangeType")
    {
        cpimrpmappingchangetype = value;
        cpimrpmappingchangetype.value_namespace = name_space;
        cpimrpmappingchangetype.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOPIMMIB::Ciscopimmibnotificationobjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpimRPMappingChangeType")
    {
        cpimrpmappingchangetype.yfilter = yfilter;
    }
}

bool CISCOPIMMIB::Ciscopimmibnotificationobjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpimRPMappingChangeType")
        return true;
    return false;
}

const Enum::YLeaf CISCOPIMMIB::Cpim::Cpimlasterrortype::none {1, "none"};
const Enum::YLeaf CISCOPIMMIB::Cpim::Cpimlasterrortype::invalidRegister {2, "invalidRegister"};
const Enum::YLeaf CISCOPIMMIB::Cpim::Cpimlasterrortype::invalidJoinPrune {3, "invalidJoinPrune"};

const Enum::YLeaf CISCOPIMMIB::Ciscopimmibnotificationobjects::Cpimrpmappingchangetype::newMapping {1, "newMapping"};
const Enum::YLeaf CISCOPIMMIB::Ciscopimmibnotificationobjects::Cpimrpmappingchangetype::deletedMapping {2, "deletedMapping"};
const Enum::YLeaf CISCOPIMMIB::Ciscopimmibnotificationobjects::Cpimrpmappingchangetype::modifiedOldMapping {3, "modifiedOldMapping"};
const Enum::YLeaf CISCOPIMMIB::Ciscopimmibnotificationobjects::Cpimrpmappingchangetype::modifiedNewMapping {4, "modifiedNewMapping"};


}
}

