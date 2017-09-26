
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IETF_FRR_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IETF_FRR_MIB {

CISCOIETFFRRMIB::CISCOIETFFRRMIB()
    :
    cmplsfrrconsttable(std::make_shared<CISCOIETFFRRMIB::Cmplsfrrconsttable>())
	,cmplsfrrfacroutedbtable(std::make_shared<CISCOIETFFRRMIB::Cmplsfrrfacroutedbtable>())
	,cmplsfrrlogtable(std::make_shared<CISCOIETFFRRMIB::Cmplsfrrlogtable>())
	,cmplsfrrscalars(std::make_shared<CISCOIETFFRRMIB::Cmplsfrrscalars>())
{
    cmplsfrrconsttable->parent = this;
    cmplsfrrfacroutedbtable->parent = this;
    cmplsfrrlogtable->parent = this;
    cmplsfrrscalars->parent = this;

    yang_name = "CISCO-IETF-FRR-MIB"; yang_parent_name = "CISCO-IETF-FRR-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCOIETFFRRMIB::~CISCOIETFFRRMIB()
{
}

bool CISCOIETFFRRMIB::has_data() const
{
    return (cmplsfrrconsttable !=  nullptr && cmplsfrrconsttable->has_data())
	|| (cmplsfrrfacroutedbtable !=  nullptr && cmplsfrrfacroutedbtable->has_data())
	|| (cmplsfrrlogtable !=  nullptr && cmplsfrrlogtable->has_data())
	|| (cmplsfrrscalars !=  nullptr && cmplsfrrscalars->has_data());
}

bool CISCOIETFFRRMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cmplsfrrconsttable !=  nullptr && cmplsfrrconsttable->has_operation())
	|| (cmplsfrrfacroutedbtable !=  nullptr && cmplsfrrfacroutedbtable->has_operation())
	|| (cmplsfrrlogtable !=  nullptr && cmplsfrrlogtable->has_operation())
	|| (cmplsfrrscalars !=  nullptr && cmplsfrrscalars->has_operation());
}

std::string CISCOIETFFRRMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-FRR-MIB:CISCO-IETF-FRR-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFFRRMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFFRRMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsFrrConstTable")
    {
        if(cmplsfrrconsttable == nullptr)
        {
            cmplsfrrconsttable = std::make_shared<CISCOIETFFRRMIB::Cmplsfrrconsttable>();
        }
        return cmplsfrrconsttable;
    }

    if(child_yang_name == "cmplsFrrFacRouteDBTable")
    {
        if(cmplsfrrfacroutedbtable == nullptr)
        {
            cmplsfrrfacroutedbtable = std::make_shared<CISCOIETFFRRMIB::Cmplsfrrfacroutedbtable>();
        }
        return cmplsfrrfacroutedbtable;
    }

    if(child_yang_name == "cmplsFrrLogTable")
    {
        if(cmplsfrrlogtable == nullptr)
        {
            cmplsfrrlogtable = std::make_shared<CISCOIETFFRRMIB::Cmplsfrrlogtable>();
        }
        return cmplsfrrlogtable;
    }

    if(child_yang_name == "cmplsFrrScalars")
    {
        if(cmplsfrrscalars == nullptr)
        {
            cmplsfrrscalars = std::make_shared<CISCOIETFFRRMIB::Cmplsfrrscalars>();
        }
        return cmplsfrrscalars;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFFRRMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cmplsfrrconsttable != nullptr)
    {
        children["cmplsFrrConstTable"] = cmplsfrrconsttable;
    }

    if(cmplsfrrfacroutedbtable != nullptr)
    {
        children["cmplsFrrFacRouteDBTable"] = cmplsfrrfacroutedbtable;
    }

    if(cmplsfrrlogtable != nullptr)
    {
        children["cmplsFrrLogTable"] = cmplsfrrlogtable;
    }

    if(cmplsfrrscalars != nullptr)
    {
        children["cmplsFrrScalars"] = cmplsfrrscalars;
    }

    return children;
}

void CISCOIETFFRRMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFFRRMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOIETFFRRMIB::clone_ptr() const
{
    return std::make_shared<CISCOIETFFRRMIB>();
}

std::string CISCOIETFFRRMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOIETFFRRMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOIETFFRRMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOIETFFRRMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOIETFFRRMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsFrrConstTable" || name == "cmplsFrrFacRouteDBTable" || name == "cmplsFrrLogTable" || name == "cmplsFrrScalars")
        return true;
    return false;
}

CISCOIETFFRRMIB::Cmplsfrrconsttable::Cmplsfrrconsttable()
{

    yang_name = "cmplsFrrConstTable"; yang_parent_name = "CISCO-IETF-FRR-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFFRRMIB::Cmplsfrrconsttable::~Cmplsfrrconsttable()
{
}

bool CISCOIETFFRRMIB::Cmplsfrrconsttable::has_data() const
{
    for (std::size_t index=0; index<cmplsfrrconstentry.size(); index++)
    {
        if(cmplsfrrconstentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFFRRMIB::Cmplsfrrconsttable::has_operation() const
{
    for (std::size_t index=0; index<cmplsfrrconstentry.size(); index++)
    {
        if(cmplsfrrconstentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFFRRMIB::Cmplsfrrconsttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-FRR-MIB:CISCO-IETF-FRR-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFFRRMIB::Cmplsfrrconsttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsFrrConstTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFFRRMIB::Cmplsfrrconsttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFFRRMIB::Cmplsfrrconsttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsFrrConstEntry")
    {
        for(auto const & c : cmplsfrrconstentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOIETFFRRMIB::Cmplsfrrconsttable::Cmplsfrrconstentry>();
        c->parent = this;
        cmplsfrrconstentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFFRRMIB::Cmplsfrrconsttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cmplsfrrconstentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOIETFFRRMIB::Cmplsfrrconsttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFFRRMIB::Cmplsfrrconsttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFFRRMIB::Cmplsfrrconsttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsFrrConstEntry")
        return true;
    return false;
}

CISCOIETFFRRMIB::Cmplsfrrconsttable::Cmplsfrrconstentry::Cmplsfrrconstentry()
    :
    cmplsfrrconstifindex{YType::int32, "cmplsFrrConstIfIndex"},
    cmplsfrrconsttunnelindex{YType::uint32, "cmplsFrrConstTunnelIndex"},
    cmplsfrrconsttunnelinstance{YType::uint32, "cmplsFrrConstTunnelInstance"},
    cmplsfrrconstbandwidth{YType::uint32, "cmplsFrrConstBandwidth"},
    cmplsfrrconstexclallaffinity{YType::uint32, "cmplsFrrConstExclAllAffinity"},
    cmplsfrrconstholdingprio{YType::uint32, "cmplsFrrConstHoldingPrio"},
    cmplsfrrconsthoplimit{YType::uint32, "cmplsFrrConstHopLimit"},
    cmplsfrrconstinclallaffinity{YType::uint32, "cmplsFrrConstInclAllAffinity"},
    cmplsfrrconstinclanyaffinity{YType::uint32, "cmplsFrrConstInclAnyAffinity"},
    cmplsfrrconstnumprotectedtunonif{YType::uint32, "cmplsFrrConstNumProtectedTunOnIf"},
    cmplsfrrconstnumprotectingtunonif{YType::uint32, "cmplsFrrConstNumProtectingTunOnIf"},
    cmplsfrrconstrowstatus{YType::enumeration, "cmplsFrrConstRowStatus"},
    cmplsfrrconstsetupprio{YType::uint32, "cmplsFrrConstSetupPrio"}
{

    yang_name = "cmplsFrrConstEntry"; yang_parent_name = "cmplsFrrConstTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFFRRMIB::Cmplsfrrconsttable::Cmplsfrrconstentry::~Cmplsfrrconstentry()
{
}

bool CISCOIETFFRRMIB::Cmplsfrrconsttable::Cmplsfrrconstentry::has_data() const
{
    return cmplsfrrconstifindex.is_set
	|| cmplsfrrconsttunnelindex.is_set
	|| cmplsfrrconsttunnelinstance.is_set
	|| cmplsfrrconstbandwidth.is_set
	|| cmplsfrrconstexclallaffinity.is_set
	|| cmplsfrrconstholdingprio.is_set
	|| cmplsfrrconsthoplimit.is_set
	|| cmplsfrrconstinclallaffinity.is_set
	|| cmplsfrrconstinclanyaffinity.is_set
	|| cmplsfrrconstnumprotectedtunonif.is_set
	|| cmplsfrrconstnumprotectingtunonif.is_set
	|| cmplsfrrconstrowstatus.is_set
	|| cmplsfrrconstsetupprio.is_set;
}

bool CISCOIETFFRRMIB::Cmplsfrrconsttable::Cmplsfrrconstentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmplsfrrconstifindex.yfilter)
	|| ydk::is_set(cmplsfrrconsttunnelindex.yfilter)
	|| ydk::is_set(cmplsfrrconsttunnelinstance.yfilter)
	|| ydk::is_set(cmplsfrrconstbandwidth.yfilter)
	|| ydk::is_set(cmplsfrrconstexclallaffinity.yfilter)
	|| ydk::is_set(cmplsfrrconstholdingprio.yfilter)
	|| ydk::is_set(cmplsfrrconsthoplimit.yfilter)
	|| ydk::is_set(cmplsfrrconstinclallaffinity.yfilter)
	|| ydk::is_set(cmplsfrrconstinclanyaffinity.yfilter)
	|| ydk::is_set(cmplsfrrconstnumprotectedtunonif.yfilter)
	|| ydk::is_set(cmplsfrrconstnumprotectingtunonif.yfilter)
	|| ydk::is_set(cmplsfrrconstrowstatus.yfilter)
	|| ydk::is_set(cmplsfrrconstsetupprio.yfilter);
}

std::string CISCOIETFFRRMIB::Cmplsfrrconsttable::Cmplsfrrconstentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-FRR-MIB:CISCO-IETF-FRR-MIB/cmplsFrrConstTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFFRRMIB::Cmplsfrrconsttable::Cmplsfrrconstentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsFrrConstEntry" <<"[cmplsFrrConstIfIndex='" <<cmplsfrrconstifindex <<"']" <<"[cmplsFrrConstTunnelIndex='" <<cmplsfrrconsttunnelindex <<"']" <<"[cmplsFrrConstTunnelInstance='" <<cmplsfrrconsttunnelinstance <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFFRRMIB::Cmplsfrrconsttable::Cmplsfrrconstentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmplsfrrconstifindex.is_set || is_set(cmplsfrrconstifindex.yfilter)) leaf_name_data.push_back(cmplsfrrconstifindex.get_name_leafdata());
    if (cmplsfrrconsttunnelindex.is_set || is_set(cmplsfrrconsttunnelindex.yfilter)) leaf_name_data.push_back(cmplsfrrconsttunnelindex.get_name_leafdata());
    if (cmplsfrrconsttunnelinstance.is_set || is_set(cmplsfrrconsttunnelinstance.yfilter)) leaf_name_data.push_back(cmplsfrrconsttunnelinstance.get_name_leafdata());
    if (cmplsfrrconstbandwidth.is_set || is_set(cmplsfrrconstbandwidth.yfilter)) leaf_name_data.push_back(cmplsfrrconstbandwidth.get_name_leafdata());
    if (cmplsfrrconstexclallaffinity.is_set || is_set(cmplsfrrconstexclallaffinity.yfilter)) leaf_name_data.push_back(cmplsfrrconstexclallaffinity.get_name_leafdata());
    if (cmplsfrrconstholdingprio.is_set || is_set(cmplsfrrconstholdingprio.yfilter)) leaf_name_data.push_back(cmplsfrrconstholdingprio.get_name_leafdata());
    if (cmplsfrrconsthoplimit.is_set || is_set(cmplsfrrconsthoplimit.yfilter)) leaf_name_data.push_back(cmplsfrrconsthoplimit.get_name_leafdata());
    if (cmplsfrrconstinclallaffinity.is_set || is_set(cmplsfrrconstinclallaffinity.yfilter)) leaf_name_data.push_back(cmplsfrrconstinclallaffinity.get_name_leafdata());
    if (cmplsfrrconstinclanyaffinity.is_set || is_set(cmplsfrrconstinclanyaffinity.yfilter)) leaf_name_data.push_back(cmplsfrrconstinclanyaffinity.get_name_leafdata());
    if (cmplsfrrconstnumprotectedtunonif.is_set || is_set(cmplsfrrconstnumprotectedtunonif.yfilter)) leaf_name_data.push_back(cmplsfrrconstnumprotectedtunonif.get_name_leafdata());
    if (cmplsfrrconstnumprotectingtunonif.is_set || is_set(cmplsfrrconstnumprotectingtunonif.yfilter)) leaf_name_data.push_back(cmplsfrrconstnumprotectingtunonif.get_name_leafdata());
    if (cmplsfrrconstrowstatus.is_set || is_set(cmplsfrrconstrowstatus.yfilter)) leaf_name_data.push_back(cmplsfrrconstrowstatus.get_name_leafdata());
    if (cmplsfrrconstsetupprio.is_set || is_set(cmplsfrrconstsetupprio.yfilter)) leaf_name_data.push_back(cmplsfrrconstsetupprio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFFRRMIB::Cmplsfrrconsttable::Cmplsfrrconstentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFFRRMIB::Cmplsfrrconsttable::Cmplsfrrconstentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOIETFFRRMIB::Cmplsfrrconsttable::Cmplsfrrconstentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmplsFrrConstIfIndex")
    {
        cmplsfrrconstifindex = value;
        cmplsfrrconstifindex.value_namespace = name_space;
        cmplsfrrconstifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrConstTunnelIndex")
    {
        cmplsfrrconsttunnelindex = value;
        cmplsfrrconsttunnelindex.value_namespace = name_space;
        cmplsfrrconsttunnelindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrConstTunnelInstance")
    {
        cmplsfrrconsttunnelinstance = value;
        cmplsfrrconsttunnelinstance.value_namespace = name_space;
        cmplsfrrconsttunnelinstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrConstBandwidth")
    {
        cmplsfrrconstbandwidth = value;
        cmplsfrrconstbandwidth.value_namespace = name_space;
        cmplsfrrconstbandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrConstExclAllAffinity")
    {
        cmplsfrrconstexclallaffinity = value;
        cmplsfrrconstexclallaffinity.value_namespace = name_space;
        cmplsfrrconstexclallaffinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrConstHoldingPrio")
    {
        cmplsfrrconstholdingprio = value;
        cmplsfrrconstholdingprio.value_namespace = name_space;
        cmplsfrrconstholdingprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrConstHopLimit")
    {
        cmplsfrrconsthoplimit = value;
        cmplsfrrconsthoplimit.value_namespace = name_space;
        cmplsfrrconsthoplimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrConstInclAllAffinity")
    {
        cmplsfrrconstinclallaffinity = value;
        cmplsfrrconstinclallaffinity.value_namespace = name_space;
        cmplsfrrconstinclallaffinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrConstInclAnyAffinity")
    {
        cmplsfrrconstinclanyaffinity = value;
        cmplsfrrconstinclanyaffinity.value_namespace = name_space;
        cmplsfrrconstinclanyaffinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrConstNumProtectedTunOnIf")
    {
        cmplsfrrconstnumprotectedtunonif = value;
        cmplsfrrconstnumprotectedtunonif.value_namespace = name_space;
        cmplsfrrconstnumprotectedtunonif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrConstNumProtectingTunOnIf")
    {
        cmplsfrrconstnumprotectingtunonif = value;
        cmplsfrrconstnumprotectingtunonif.value_namespace = name_space;
        cmplsfrrconstnumprotectingtunonif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrConstRowStatus")
    {
        cmplsfrrconstrowstatus = value;
        cmplsfrrconstrowstatus.value_namespace = name_space;
        cmplsfrrconstrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrConstSetupPrio")
    {
        cmplsfrrconstsetupprio = value;
        cmplsfrrconstsetupprio.value_namespace = name_space;
        cmplsfrrconstsetupprio.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFFRRMIB::Cmplsfrrconsttable::Cmplsfrrconstentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmplsFrrConstIfIndex")
    {
        cmplsfrrconstifindex.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrConstTunnelIndex")
    {
        cmplsfrrconsttunnelindex.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrConstTunnelInstance")
    {
        cmplsfrrconsttunnelinstance.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrConstBandwidth")
    {
        cmplsfrrconstbandwidth.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrConstExclAllAffinity")
    {
        cmplsfrrconstexclallaffinity.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrConstHoldingPrio")
    {
        cmplsfrrconstholdingprio.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrConstHopLimit")
    {
        cmplsfrrconsthoplimit.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrConstInclAllAffinity")
    {
        cmplsfrrconstinclallaffinity.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrConstInclAnyAffinity")
    {
        cmplsfrrconstinclanyaffinity.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrConstNumProtectedTunOnIf")
    {
        cmplsfrrconstnumprotectedtunonif.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrConstNumProtectingTunOnIf")
    {
        cmplsfrrconstnumprotectingtunonif.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrConstRowStatus")
    {
        cmplsfrrconstrowstatus.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrConstSetupPrio")
    {
        cmplsfrrconstsetupprio.yfilter = yfilter;
    }
}

bool CISCOIETFFRRMIB::Cmplsfrrconsttable::Cmplsfrrconstentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsFrrConstIfIndex" || name == "cmplsFrrConstTunnelIndex" || name == "cmplsFrrConstTunnelInstance" || name == "cmplsFrrConstBandwidth" || name == "cmplsFrrConstExclAllAffinity" || name == "cmplsFrrConstHoldingPrio" || name == "cmplsFrrConstHopLimit" || name == "cmplsFrrConstInclAllAffinity" || name == "cmplsFrrConstInclAnyAffinity" || name == "cmplsFrrConstNumProtectedTunOnIf" || name == "cmplsFrrConstNumProtectingTunOnIf" || name == "cmplsFrrConstRowStatus" || name == "cmplsFrrConstSetupPrio")
        return true;
    return false;
}

CISCOIETFFRRMIB::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbtable()
{

    yang_name = "cmplsFrrFacRouteDBTable"; yang_parent_name = "CISCO-IETF-FRR-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFFRRMIB::Cmplsfrrfacroutedbtable::~Cmplsfrrfacroutedbtable()
{
}

bool CISCOIETFFRRMIB::Cmplsfrrfacroutedbtable::has_data() const
{
    for (std::size_t index=0; index<cmplsfrrfacroutedbentry.size(); index++)
    {
        if(cmplsfrrfacroutedbentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFFRRMIB::Cmplsfrrfacroutedbtable::has_operation() const
{
    for (std::size_t index=0; index<cmplsfrrfacroutedbentry.size(); index++)
    {
        if(cmplsfrrfacroutedbentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFFRRMIB::Cmplsfrrfacroutedbtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-FRR-MIB:CISCO-IETF-FRR-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFFRRMIB::Cmplsfrrfacroutedbtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsFrrFacRouteDBTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFFRRMIB::Cmplsfrrfacroutedbtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFFRRMIB::Cmplsfrrfacroutedbtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsFrrFacRouteDBEntry")
    {
        for(auto const & c : cmplsfrrfacroutedbentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOIETFFRRMIB::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry>();
        c->parent = this;
        cmplsfrrfacroutedbentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFFRRMIB::Cmplsfrrfacroutedbtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cmplsfrrfacroutedbentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOIETFFRRMIB::Cmplsfrrfacroutedbtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFFRRMIB::Cmplsfrrfacroutedbtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFFRRMIB::Cmplsfrrfacroutedbtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsFrrFacRouteDBEntry")
        return true;
    return false;
}

CISCOIETFFRRMIB::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry::Cmplsfrrfacroutedbentry()
    :
    cmplsfrrfacrouteprotectedifindex{YType::int32, "cmplsFrrFacRouteProtectedIfIndex"},
    cmplsfrrfacrouteprotectingtunindex{YType::uint32, "cmplsFrrFacRouteProtectingTunIndex"},
    cmplsfrrfacrouteprotectedtunindex{YType::uint32, "cmplsFrrFacRouteProtectedTunIndex"},
    cmplsfrrfacrouteprotectedtuninstance{YType::uint32, "cmplsFrrFacRouteProtectedTunInstance"},
    cmplsfrrfacrouteprotectedtuningresslsrid{YType::str, "cmplsFrrFacRouteProtectedTunIngressLSRId"},
    cmplsfrrfacrouteprotectedtunegresslsrid{YType::str, "cmplsFrrFacRouteProtectedTunEgressLSRId"},
    cmplsfrrfacrouteprotectedtunstatus{YType::enumeration, "cmplsFrrFacRouteProtectedTunStatus"},
    cmplsfrrfacrouteprotectingtunprotectiontype{YType::enumeration, "cmplsFrrFacRouteProtectingTunProtectionType"},
    cmplsfrrfacrouteprotectingtunresvbw{YType::uint32, "cmplsFrrFacRouteProtectingTunResvBw"}
{

    yang_name = "cmplsFrrFacRouteDBEntry"; yang_parent_name = "cmplsFrrFacRouteDBTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFFRRMIB::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry::~Cmplsfrrfacroutedbentry()
{
}

bool CISCOIETFFRRMIB::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry::has_data() const
{
    return cmplsfrrfacrouteprotectedifindex.is_set
	|| cmplsfrrfacrouteprotectingtunindex.is_set
	|| cmplsfrrfacrouteprotectedtunindex.is_set
	|| cmplsfrrfacrouteprotectedtuninstance.is_set
	|| cmplsfrrfacrouteprotectedtuningresslsrid.is_set
	|| cmplsfrrfacrouteprotectedtunegresslsrid.is_set
	|| cmplsfrrfacrouteprotectedtunstatus.is_set
	|| cmplsfrrfacrouteprotectingtunprotectiontype.is_set
	|| cmplsfrrfacrouteprotectingtunresvbw.is_set;
}

bool CISCOIETFFRRMIB::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmplsfrrfacrouteprotectedifindex.yfilter)
	|| ydk::is_set(cmplsfrrfacrouteprotectingtunindex.yfilter)
	|| ydk::is_set(cmplsfrrfacrouteprotectedtunindex.yfilter)
	|| ydk::is_set(cmplsfrrfacrouteprotectedtuninstance.yfilter)
	|| ydk::is_set(cmplsfrrfacrouteprotectedtuningresslsrid.yfilter)
	|| ydk::is_set(cmplsfrrfacrouteprotectedtunegresslsrid.yfilter)
	|| ydk::is_set(cmplsfrrfacrouteprotectedtunstatus.yfilter)
	|| ydk::is_set(cmplsfrrfacrouteprotectingtunprotectiontype.yfilter)
	|| ydk::is_set(cmplsfrrfacrouteprotectingtunresvbw.yfilter);
}

std::string CISCOIETFFRRMIB::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-FRR-MIB:CISCO-IETF-FRR-MIB/cmplsFrrFacRouteDBTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFFRRMIB::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsFrrFacRouteDBEntry" <<"[cmplsFrrFacRouteProtectedIfIndex='" <<cmplsfrrfacrouteprotectedifindex <<"']" <<"[cmplsFrrFacRouteProtectingTunIndex='" <<cmplsfrrfacrouteprotectingtunindex <<"']" <<"[cmplsFrrFacRouteProtectedTunIndex='" <<cmplsfrrfacrouteprotectedtunindex <<"']" <<"[cmplsFrrFacRouteProtectedTunInstance='" <<cmplsfrrfacrouteprotectedtuninstance <<"']" <<"[cmplsFrrFacRouteProtectedTunIngressLSRId='" <<cmplsfrrfacrouteprotectedtuningresslsrid <<"']" <<"[cmplsFrrFacRouteProtectedTunEgressLSRId='" <<cmplsfrrfacrouteprotectedtunegresslsrid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFFRRMIB::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmplsfrrfacrouteprotectedifindex.is_set || is_set(cmplsfrrfacrouteprotectedifindex.yfilter)) leaf_name_data.push_back(cmplsfrrfacrouteprotectedifindex.get_name_leafdata());
    if (cmplsfrrfacrouteprotectingtunindex.is_set || is_set(cmplsfrrfacrouteprotectingtunindex.yfilter)) leaf_name_data.push_back(cmplsfrrfacrouteprotectingtunindex.get_name_leafdata());
    if (cmplsfrrfacrouteprotectedtunindex.is_set || is_set(cmplsfrrfacrouteprotectedtunindex.yfilter)) leaf_name_data.push_back(cmplsfrrfacrouteprotectedtunindex.get_name_leafdata());
    if (cmplsfrrfacrouteprotectedtuninstance.is_set || is_set(cmplsfrrfacrouteprotectedtuninstance.yfilter)) leaf_name_data.push_back(cmplsfrrfacrouteprotectedtuninstance.get_name_leafdata());
    if (cmplsfrrfacrouteprotectedtuningresslsrid.is_set || is_set(cmplsfrrfacrouteprotectedtuningresslsrid.yfilter)) leaf_name_data.push_back(cmplsfrrfacrouteprotectedtuningresslsrid.get_name_leafdata());
    if (cmplsfrrfacrouteprotectedtunegresslsrid.is_set || is_set(cmplsfrrfacrouteprotectedtunegresslsrid.yfilter)) leaf_name_data.push_back(cmplsfrrfacrouteprotectedtunegresslsrid.get_name_leafdata());
    if (cmplsfrrfacrouteprotectedtunstatus.is_set || is_set(cmplsfrrfacrouteprotectedtunstatus.yfilter)) leaf_name_data.push_back(cmplsfrrfacrouteprotectedtunstatus.get_name_leafdata());
    if (cmplsfrrfacrouteprotectingtunprotectiontype.is_set || is_set(cmplsfrrfacrouteprotectingtunprotectiontype.yfilter)) leaf_name_data.push_back(cmplsfrrfacrouteprotectingtunprotectiontype.get_name_leafdata());
    if (cmplsfrrfacrouteprotectingtunresvbw.is_set || is_set(cmplsfrrfacrouteprotectingtunresvbw.yfilter)) leaf_name_data.push_back(cmplsfrrfacrouteprotectingtunresvbw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFFRRMIB::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFFRRMIB::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOIETFFRRMIB::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmplsFrrFacRouteProtectedIfIndex")
    {
        cmplsfrrfacrouteprotectedifindex = value;
        cmplsfrrfacrouteprotectedifindex.value_namespace = name_space;
        cmplsfrrfacrouteprotectedifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrFacRouteProtectingTunIndex")
    {
        cmplsfrrfacrouteprotectingtunindex = value;
        cmplsfrrfacrouteprotectingtunindex.value_namespace = name_space;
        cmplsfrrfacrouteprotectingtunindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrFacRouteProtectedTunIndex")
    {
        cmplsfrrfacrouteprotectedtunindex = value;
        cmplsfrrfacrouteprotectedtunindex.value_namespace = name_space;
        cmplsfrrfacrouteprotectedtunindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrFacRouteProtectedTunInstance")
    {
        cmplsfrrfacrouteprotectedtuninstance = value;
        cmplsfrrfacrouteprotectedtuninstance.value_namespace = name_space;
        cmplsfrrfacrouteprotectedtuninstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrFacRouteProtectedTunIngressLSRId")
    {
        cmplsfrrfacrouteprotectedtuningresslsrid = value;
        cmplsfrrfacrouteprotectedtuningresslsrid.value_namespace = name_space;
        cmplsfrrfacrouteprotectedtuningresslsrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrFacRouteProtectedTunEgressLSRId")
    {
        cmplsfrrfacrouteprotectedtunegresslsrid = value;
        cmplsfrrfacrouteprotectedtunegresslsrid.value_namespace = name_space;
        cmplsfrrfacrouteprotectedtunegresslsrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrFacRouteProtectedTunStatus")
    {
        cmplsfrrfacrouteprotectedtunstatus = value;
        cmplsfrrfacrouteprotectedtunstatus.value_namespace = name_space;
        cmplsfrrfacrouteprotectedtunstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrFacRouteProtectingTunProtectionType")
    {
        cmplsfrrfacrouteprotectingtunprotectiontype = value;
        cmplsfrrfacrouteprotectingtunprotectiontype.value_namespace = name_space;
        cmplsfrrfacrouteprotectingtunprotectiontype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrFacRouteProtectingTunResvBw")
    {
        cmplsfrrfacrouteprotectingtunresvbw = value;
        cmplsfrrfacrouteprotectingtunresvbw.value_namespace = name_space;
        cmplsfrrfacrouteprotectingtunresvbw.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFFRRMIB::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmplsFrrFacRouteProtectedIfIndex")
    {
        cmplsfrrfacrouteprotectedifindex.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrFacRouteProtectingTunIndex")
    {
        cmplsfrrfacrouteprotectingtunindex.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrFacRouteProtectedTunIndex")
    {
        cmplsfrrfacrouteprotectedtunindex.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrFacRouteProtectedTunInstance")
    {
        cmplsfrrfacrouteprotectedtuninstance.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrFacRouteProtectedTunIngressLSRId")
    {
        cmplsfrrfacrouteprotectedtuningresslsrid.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrFacRouteProtectedTunEgressLSRId")
    {
        cmplsfrrfacrouteprotectedtunegresslsrid.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrFacRouteProtectedTunStatus")
    {
        cmplsfrrfacrouteprotectedtunstatus.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrFacRouteProtectingTunProtectionType")
    {
        cmplsfrrfacrouteprotectingtunprotectiontype.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrFacRouteProtectingTunResvBw")
    {
        cmplsfrrfacrouteprotectingtunresvbw.yfilter = yfilter;
    }
}

bool CISCOIETFFRRMIB::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsFrrFacRouteProtectedIfIndex" || name == "cmplsFrrFacRouteProtectingTunIndex" || name == "cmplsFrrFacRouteProtectedTunIndex" || name == "cmplsFrrFacRouteProtectedTunInstance" || name == "cmplsFrrFacRouteProtectedTunIngressLSRId" || name == "cmplsFrrFacRouteProtectedTunEgressLSRId" || name == "cmplsFrrFacRouteProtectedTunStatus" || name == "cmplsFrrFacRouteProtectingTunProtectionType" || name == "cmplsFrrFacRouteProtectingTunResvBw")
        return true;
    return false;
}

CISCOIETFFRRMIB::Cmplsfrrlogtable::Cmplsfrrlogtable()
{

    yang_name = "cmplsFrrLogTable"; yang_parent_name = "CISCO-IETF-FRR-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFFRRMIB::Cmplsfrrlogtable::~Cmplsfrrlogtable()
{
}

bool CISCOIETFFRRMIB::Cmplsfrrlogtable::has_data() const
{
    for (std::size_t index=0; index<cmplsfrrlogentry.size(); index++)
    {
        if(cmplsfrrlogentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFFRRMIB::Cmplsfrrlogtable::has_operation() const
{
    for (std::size_t index=0; index<cmplsfrrlogentry.size(); index++)
    {
        if(cmplsfrrlogentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFFRRMIB::Cmplsfrrlogtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-FRR-MIB:CISCO-IETF-FRR-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFFRRMIB::Cmplsfrrlogtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsFrrLogTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFFRRMIB::Cmplsfrrlogtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFFRRMIB::Cmplsfrrlogtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsFrrLogEntry")
    {
        for(auto const & c : cmplsfrrlogentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOIETFFRRMIB::Cmplsfrrlogtable::Cmplsfrrlogentry>();
        c->parent = this;
        cmplsfrrlogentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFFRRMIB::Cmplsfrrlogtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cmplsfrrlogentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOIETFFRRMIB::Cmplsfrrlogtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFFRRMIB::Cmplsfrrlogtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFFRRMIB::Cmplsfrrlogtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsFrrLogEntry")
        return true;
    return false;
}

CISCOIETFFRRMIB::Cmplsfrrlogtable::Cmplsfrrlogentry::Cmplsfrrlogentry()
    :
    cmplsfrrlogindex{YType::uint32, "cmplsFrrLogIndex"},
    cmplsfrrlogeventduration{YType::uint32, "cmplsFrrLogEventDuration"},
    cmplsfrrlogeventreasonstring{YType::str, "cmplsFrrLogEventReasonString"},
    cmplsfrrlogeventtime{YType::uint32, "cmplsFrrLogEventTime"},
    cmplsfrrlogeventtype{YType::enumeration, "cmplsFrrLogEventType"},
    cmplsfrrloginterface{YType::int32, "cmplsFrrLogInterface"}
{

    yang_name = "cmplsFrrLogEntry"; yang_parent_name = "cmplsFrrLogTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFFRRMIB::Cmplsfrrlogtable::Cmplsfrrlogentry::~Cmplsfrrlogentry()
{
}

bool CISCOIETFFRRMIB::Cmplsfrrlogtable::Cmplsfrrlogentry::has_data() const
{
    return cmplsfrrlogindex.is_set
	|| cmplsfrrlogeventduration.is_set
	|| cmplsfrrlogeventreasonstring.is_set
	|| cmplsfrrlogeventtime.is_set
	|| cmplsfrrlogeventtype.is_set
	|| cmplsfrrloginterface.is_set;
}

bool CISCOIETFFRRMIB::Cmplsfrrlogtable::Cmplsfrrlogentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmplsfrrlogindex.yfilter)
	|| ydk::is_set(cmplsfrrlogeventduration.yfilter)
	|| ydk::is_set(cmplsfrrlogeventreasonstring.yfilter)
	|| ydk::is_set(cmplsfrrlogeventtime.yfilter)
	|| ydk::is_set(cmplsfrrlogeventtype.yfilter)
	|| ydk::is_set(cmplsfrrloginterface.yfilter);
}

std::string CISCOIETFFRRMIB::Cmplsfrrlogtable::Cmplsfrrlogentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-FRR-MIB:CISCO-IETF-FRR-MIB/cmplsFrrLogTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFFRRMIB::Cmplsfrrlogtable::Cmplsfrrlogentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsFrrLogEntry" <<"[cmplsFrrLogIndex='" <<cmplsfrrlogindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFFRRMIB::Cmplsfrrlogtable::Cmplsfrrlogentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmplsfrrlogindex.is_set || is_set(cmplsfrrlogindex.yfilter)) leaf_name_data.push_back(cmplsfrrlogindex.get_name_leafdata());
    if (cmplsfrrlogeventduration.is_set || is_set(cmplsfrrlogeventduration.yfilter)) leaf_name_data.push_back(cmplsfrrlogeventduration.get_name_leafdata());
    if (cmplsfrrlogeventreasonstring.is_set || is_set(cmplsfrrlogeventreasonstring.yfilter)) leaf_name_data.push_back(cmplsfrrlogeventreasonstring.get_name_leafdata());
    if (cmplsfrrlogeventtime.is_set || is_set(cmplsfrrlogeventtime.yfilter)) leaf_name_data.push_back(cmplsfrrlogeventtime.get_name_leafdata());
    if (cmplsfrrlogeventtype.is_set || is_set(cmplsfrrlogeventtype.yfilter)) leaf_name_data.push_back(cmplsfrrlogeventtype.get_name_leafdata());
    if (cmplsfrrloginterface.is_set || is_set(cmplsfrrloginterface.yfilter)) leaf_name_data.push_back(cmplsfrrloginterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFFRRMIB::Cmplsfrrlogtable::Cmplsfrrlogentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFFRRMIB::Cmplsfrrlogtable::Cmplsfrrlogentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOIETFFRRMIB::Cmplsfrrlogtable::Cmplsfrrlogentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmplsFrrLogIndex")
    {
        cmplsfrrlogindex = value;
        cmplsfrrlogindex.value_namespace = name_space;
        cmplsfrrlogindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrLogEventDuration")
    {
        cmplsfrrlogeventduration = value;
        cmplsfrrlogeventduration.value_namespace = name_space;
        cmplsfrrlogeventduration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrLogEventReasonString")
    {
        cmplsfrrlogeventreasonstring = value;
        cmplsfrrlogeventreasonstring.value_namespace = name_space;
        cmplsfrrlogeventreasonstring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrLogEventTime")
    {
        cmplsfrrlogeventtime = value;
        cmplsfrrlogeventtime.value_namespace = name_space;
        cmplsfrrlogeventtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrLogEventType")
    {
        cmplsfrrlogeventtype = value;
        cmplsfrrlogeventtype.value_namespace = name_space;
        cmplsfrrlogeventtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrLogInterface")
    {
        cmplsfrrloginterface = value;
        cmplsfrrloginterface.value_namespace = name_space;
        cmplsfrrloginterface.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFFRRMIB::Cmplsfrrlogtable::Cmplsfrrlogentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmplsFrrLogIndex")
    {
        cmplsfrrlogindex.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrLogEventDuration")
    {
        cmplsfrrlogeventduration.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrLogEventReasonString")
    {
        cmplsfrrlogeventreasonstring.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrLogEventTime")
    {
        cmplsfrrlogeventtime.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrLogEventType")
    {
        cmplsfrrlogeventtype.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrLogInterface")
    {
        cmplsfrrloginterface.yfilter = yfilter;
    }
}

bool CISCOIETFFRRMIB::Cmplsfrrlogtable::Cmplsfrrlogentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsFrrLogIndex" || name == "cmplsFrrLogEventDuration" || name == "cmplsFrrLogEventReasonString" || name == "cmplsFrrLogEventTime" || name == "cmplsFrrLogEventType" || name == "cmplsFrrLogInterface")
        return true;
    return false;
}

CISCOIETFFRRMIB::Cmplsfrrscalars::Cmplsfrrscalars()
    :
    cmplsfrractprotectedifs{YType::uint32, "cmplsFrrActProtectedIfs"},
    cmplsfrractprotectedlsps{YType::uint32, "cmplsFrrActProtectedLSPs"},
    cmplsfrractprotectedtuns{YType::uint32, "cmplsFrrActProtectedTuns"},
    cmplsfrrconfprotectingtuns{YType::uint32, "cmplsFrrConfProtectingTuns"},
    cmplsfrrconstprotectionmethod{YType::enumeration, "cmplsFrrConstProtectionMethod"},
    cmplsfrrdetourincoming{YType::uint32, "cmplsFrrDetourIncoming"},
    cmplsfrrdetouroriginating{YType::uint32, "cmplsFrrDetourOriginating"},
    cmplsfrrdetouroutgoing{YType::uint32, "cmplsFrrDetourOutgoing"},
    cmplsfrrlogtablecurrentries{YType::uint32, "cmplsFrrLogTableCurrEntries"},
    cmplsfrrlogtablemaxentries{YType::uint32, "cmplsFrrLogTableMaxEntries"},
    cmplsfrrnotifmaxrate{YType::uint32, "cmplsFrrNotifMaxRate"},
    cmplsfrrnotifsenabled{YType::boolean, "cmplsFrrNotifsEnabled"},
    cmplsfrrnumofconfifs{YType::uint32, "cmplsFrrNumOfConfIfs"},
    cmplsfrrswitchover{YType::uint32, "cmplsFrrSwitchover"}
{

    yang_name = "cmplsFrrScalars"; yang_parent_name = "CISCO-IETF-FRR-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFFRRMIB::Cmplsfrrscalars::~Cmplsfrrscalars()
{
}

bool CISCOIETFFRRMIB::Cmplsfrrscalars::has_data() const
{
    return cmplsfrractprotectedifs.is_set
	|| cmplsfrractprotectedlsps.is_set
	|| cmplsfrractprotectedtuns.is_set
	|| cmplsfrrconfprotectingtuns.is_set
	|| cmplsfrrconstprotectionmethod.is_set
	|| cmplsfrrdetourincoming.is_set
	|| cmplsfrrdetouroriginating.is_set
	|| cmplsfrrdetouroutgoing.is_set
	|| cmplsfrrlogtablecurrentries.is_set
	|| cmplsfrrlogtablemaxentries.is_set
	|| cmplsfrrnotifmaxrate.is_set
	|| cmplsfrrnotifsenabled.is_set
	|| cmplsfrrnumofconfifs.is_set
	|| cmplsfrrswitchover.is_set;
}

bool CISCOIETFFRRMIB::Cmplsfrrscalars::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmplsfrractprotectedifs.yfilter)
	|| ydk::is_set(cmplsfrractprotectedlsps.yfilter)
	|| ydk::is_set(cmplsfrractprotectedtuns.yfilter)
	|| ydk::is_set(cmplsfrrconfprotectingtuns.yfilter)
	|| ydk::is_set(cmplsfrrconstprotectionmethod.yfilter)
	|| ydk::is_set(cmplsfrrdetourincoming.yfilter)
	|| ydk::is_set(cmplsfrrdetouroriginating.yfilter)
	|| ydk::is_set(cmplsfrrdetouroutgoing.yfilter)
	|| ydk::is_set(cmplsfrrlogtablecurrentries.yfilter)
	|| ydk::is_set(cmplsfrrlogtablemaxentries.yfilter)
	|| ydk::is_set(cmplsfrrnotifmaxrate.yfilter)
	|| ydk::is_set(cmplsfrrnotifsenabled.yfilter)
	|| ydk::is_set(cmplsfrrnumofconfifs.yfilter)
	|| ydk::is_set(cmplsfrrswitchover.yfilter);
}

std::string CISCOIETFFRRMIB::Cmplsfrrscalars::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-FRR-MIB:CISCO-IETF-FRR-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFFRRMIB::Cmplsfrrscalars::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsFrrScalars";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFFRRMIB::Cmplsfrrscalars::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmplsfrractprotectedifs.is_set || is_set(cmplsfrractprotectedifs.yfilter)) leaf_name_data.push_back(cmplsfrractprotectedifs.get_name_leafdata());
    if (cmplsfrractprotectedlsps.is_set || is_set(cmplsfrractprotectedlsps.yfilter)) leaf_name_data.push_back(cmplsfrractprotectedlsps.get_name_leafdata());
    if (cmplsfrractprotectedtuns.is_set || is_set(cmplsfrractprotectedtuns.yfilter)) leaf_name_data.push_back(cmplsfrractprotectedtuns.get_name_leafdata());
    if (cmplsfrrconfprotectingtuns.is_set || is_set(cmplsfrrconfprotectingtuns.yfilter)) leaf_name_data.push_back(cmplsfrrconfprotectingtuns.get_name_leafdata());
    if (cmplsfrrconstprotectionmethod.is_set || is_set(cmplsfrrconstprotectionmethod.yfilter)) leaf_name_data.push_back(cmplsfrrconstprotectionmethod.get_name_leafdata());
    if (cmplsfrrdetourincoming.is_set || is_set(cmplsfrrdetourincoming.yfilter)) leaf_name_data.push_back(cmplsfrrdetourincoming.get_name_leafdata());
    if (cmplsfrrdetouroriginating.is_set || is_set(cmplsfrrdetouroriginating.yfilter)) leaf_name_data.push_back(cmplsfrrdetouroriginating.get_name_leafdata());
    if (cmplsfrrdetouroutgoing.is_set || is_set(cmplsfrrdetouroutgoing.yfilter)) leaf_name_data.push_back(cmplsfrrdetouroutgoing.get_name_leafdata());
    if (cmplsfrrlogtablecurrentries.is_set || is_set(cmplsfrrlogtablecurrentries.yfilter)) leaf_name_data.push_back(cmplsfrrlogtablecurrentries.get_name_leafdata());
    if (cmplsfrrlogtablemaxentries.is_set || is_set(cmplsfrrlogtablemaxentries.yfilter)) leaf_name_data.push_back(cmplsfrrlogtablemaxentries.get_name_leafdata());
    if (cmplsfrrnotifmaxrate.is_set || is_set(cmplsfrrnotifmaxrate.yfilter)) leaf_name_data.push_back(cmplsfrrnotifmaxrate.get_name_leafdata());
    if (cmplsfrrnotifsenabled.is_set || is_set(cmplsfrrnotifsenabled.yfilter)) leaf_name_data.push_back(cmplsfrrnotifsenabled.get_name_leafdata());
    if (cmplsfrrnumofconfifs.is_set || is_set(cmplsfrrnumofconfifs.yfilter)) leaf_name_data.push_back(cmplsfrrnumofconfifs.get_name_leafdata());
    if (cmplsfrrswitchover.is_set || is_set(cmplsfrrswitchover.yfilter)) leaf_name_data.push_back(cmplsfrrswitchover.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFFRRMIB::Cmplsfrrscalars::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFFRRMIB::Cmplsfrrscalars::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOIETFFRRMIB::Cmplsfrrscalars::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmplsFrrActProtectedIfs")
    {
        cmplsfrractprotectedifs = value;
        cmplsfrractprotectedifs.value_namespace = name_space;
        cmplsfrractprotectedifs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrActProtectedLSPs")
    {
        cmplsfrractprotectedlsps = value;
        cmplsfrractprotectedlsps.value_namespace = name_space;
        cmplsfrractprotectedlsps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrActProtectedTuns")
    {
        cmplsfrractprotectedtuns = value;
        cmplsfrractprotectedtuns.value_namespace = name_space;
        cmplsfrractprotectedtuns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrConfProtectingTuns")
    {
        cmplsfrrconfprotectingtuns = value;
        cmplsfrrconfprotectingtuns.value_namespace = name_space;
        cmplsfrrconfprotectingtuns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrConstProtectionMethod")
    {
        cmplsfrrconstprotectionmethod = value;
        cmplsfrrconstprotectionmethod.value_namespace = name_space;
        cmplsfrrconstprotectionmethod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrDetourIncoming")
    {
        cmplsfrrdetourincoming = value;
        cmplsfrrdetourincoming.value_namespace = name_space;
        cmplsfrrdetourincoming.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrDetourOriginating")
    {
        cmplsfrrdetouroriginating = value;
        cmplsfrrdetouroriginating.value_namespace = name_space;
        cmplsfrrdetouroriginating.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrDetourOutgoing")
    {
        cmplsfrrdetouroutgoing = value;
        cmplsfrrdetouroutgoing.value_namespace = name_space;
        cmplsfrrdetouroutgoing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrLogTableCurrEntries")
    {
        cmplsfrrlogtablecurrentries = value;
        cmplsfrrlogtablecurrentries.value_namespace = name_space;
        cmplsfrrlogtablecurrentries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrLogTableMaxEntries")
    {
        cmplsfrrlogtablemaxentries = value;
        cmplsfrrlogtablemaxentries.value_namespace = name_space;
        cmplsfrrlogtablemaxentries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrNotifMaxRate")
    {
        cmplsfrrnotifmaxrate = value;
        cmplsfrrnotifmaxrate.value_namespace = name_space;
        cmplsfrrnotifmaxrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrNotifsEnabled")
    {
        cmplsfrrnotifsenabled = value;
        cmplsfrrnotifsenabled.value_namespace = name_space;
        cmplsfrrnotifsenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrNumOfConfIfs")
    {
        cmplsfrrnumofconfifs = value;
        cmplsfrrnumofconfifs.value_namespace = name_space;
        cmplsfrrnumofconfifs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrSwitchover")
    {
        cmplsfrrswitchover = value;
        cmplsfrrswitchover.value_namespace = name_space;
        cmplsfrrswitchover.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFFRRMIB::Cmplsfrrscalars::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmplsFrrActProtectedIfs")
    {
        cmplsfrractprotectedifs.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrActProtectedLSPs")
    {
        cmplsfrractprotectedlsps.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrActProtectedTuns")
    {
        cmplsfrractprotectedtuns.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrConfProtectingTuns")
    {
        cmplsfrrconfprotectingtuns.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrConstProtectionMethod")
    {
        cmplsfrrconstprotectionmethod.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrDetourIncoming")
    {
        cmplsfrrdetourincoming.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrDetourOriginating")
    {
        cmplsfrrdetouroriginating.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrDetourOutgoing")
    {
        cmplsfrrdetouroutgoing.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrLogTableCurrEntries")
    {
        cmplsfrrlogtablecurrentries.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrLogTableMaxEntries")
    {
        cmplsfrrlogtablemaxentries.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrNotifMaxRate")
    {
        cmplsfrrnotifmaxrate.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrNotifsEnabled")
    {
        cmplsfrrnotifsenabled.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrNumOfConfIfs")
    {
        cmplsfrrnumofconfifs.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrSwitchover")
    {
        cmplsfrrswitchover.yfilter = yfilter;
    }
}

bool CISCOIETFFRRMIB::Cmplsfrrscalars::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsFrrActProtectedIfs" || name == "cmplsFrrActProtectedLSPs" || name == "cmplsFrrActProtectedTuns" || name == "cmplsFrrConfProtectingTuns" || name == "cmplsFrrConstProtectionMethod" || name == "cmplsFrrDetourIncoming" || name == "cmplsFrrDetourOriginating" || name == "cmplsFrrDetourOutgoing" || name == "cmplsFrrLogTableCurrEntries" || name == "cmplsFrrLogTableMaxEntries" || name == "cmplsFrrNotifMaxRate" || name == "cmplsFrrNotifsEnabled" || name == "cmplsFrrNumOfConfIfs" || name == "cmplsFrrSwitchover")
        return true;
    return false;
}

const Enum::YLeaf CISCOIETFFRRMIB::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry::Cmplsfrrfacrouteprotectedtunstatus::active {1, "active"};
const Enum::YLeaf CISCOIETFFRRMIB::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry::Cmplsfrrfacrouteprotectedtunstatus::ready {2, "ready"};
const Enum::YLeaf CISCOIETFFRRMIB::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry::Cmplsfrrfacrouteprotectedtunstatus::partial {3, "partial"};

const Enum::YLeaf CISCOIETFFRRMIB::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry::Cmplsfrrfacrouteprotectingtunprotectiontype::linkProtection {0, "linkProtection"};
const Enum::YLeaf CISCOIETFFRRMIB::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry::Cmplsfrrfacrouteprotectingtunprotectiontype::nodeProtection {1, "nodeProtection"};

const Enum::YLeaf CISCOIETFFRRMIB::Cmplsfrrlogtable::Cmplsfrrlogentry::Cmplsfrrlogeventtype::other {1, "other"};
const Enum::YLeaf CISCOIETFFRRMIB::Cmplsfrrlogtable::Cmplsfrrlogentry::Cmplsfrrlogeventtype::protected_ {2, "protected"};

const Enum::YLeaf CISCOIETFFRRMIB::Cmplsfrrscalars::Cmplsfrrconstprotectionmethod::oneToOneBackup {0, "oneToOneBackup"};
const Enum::YLeaf CISCOIETFFRRMIB::Cmplsfrrscalars::Cmplsfrrconstprotectionmethod::facilityBackup {1, "facilityBackup"};


}
}

