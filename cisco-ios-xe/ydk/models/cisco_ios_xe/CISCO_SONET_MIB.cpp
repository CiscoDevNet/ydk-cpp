
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_SONET_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_SONET_MIB {

CiscoSonetMib::CiscoSonetMib()
    :
    csapsconfig(std::make_shared<CiscoSonetMib::Csapsconfig>())
	,csapsconfigtable(std::make_shared<CiscoSonetMib::Csapsconfigtable>())
	,csau4tug3configtable(std::make_shared<CiscoSonetMib::Csau4Tug3Configtable>())
	,csconfigtable(std::make_shared<CiscoSonetMib::Csconfigtable>())
	,cslfarendtotaltable(std::make_shared<CiscoSonetMib::Cslfarendtotaltable>())
	,csltotaltable(std::make_shared<CiscoSonetMib::Csltotaltable>())
	,csnotifications(std::make_shared<CiscoSonetMib::Csnotifications>())
	,cspfarendtotaltable(std::make_shared<CiscoSonetMib::Cspfarendtotaltable>())
	,csptotaltable(std::make_shared<CiscoSonetMib::Csptotaltable>())
	,csptracetable(std::make_shared<CiscoSonetMib::Csptracetable>())
	,csstatstable(std::make_shared<CiscoSonetMib::Csstatstable>())
	,csstotaltable(std::make_shared<CiscoSonetMib::Csstotaltable>())
	,csstracetable(std::make_shared<CiscoSonetMib::Csstracetable>())
{
    csapsconfig->parent = this;

    csapsconfigtable->parent = this;

    csau4tug3configtable->parent = this;

    csconfigtable->parent = this;

    cslfarendtotaltable->parent = this;

    csltotaltable->parent = this;

    csnotifications->parent = this;

    cspfarendtotaltable->parent = this;

    csptotaltable->parent = this;

    csptracetable->parent = this;

    csstatstable->parent = this;

    csstotaltable->parent = this;

    csstracetable->parent = this;

    yang_name = "CISCO-SONET-MIB"; yang_parent_name = "CISCO-SONET-MIB";
}

CiscoSonetMib::~CiscoSonetMib()
{
}

bool CiscoSonetMib::has_data() const
{
    return (csapsconfig !=  nullptr && csapsconfig->has_data())
	|| (csapsconfigtable !=  nullptr && csapsconfigtable->has_data())
	|| (csau4tug3configtable !=  nullptr && csau4tug3configtable->has_data())
	|| (csconfigtable !=  nullptr && csconfigtable->has_data())
	|| (cslfarendtotaltable !=  nullptr && cslfarendtotaltable->has_data())
	|| (csltotaltable !=  nullptr && csltotaltable->has_data())
	|| (csnotifications !=  nullptr && csnotifications->has_data())
	|| (cspfarendtotaltable !=  nullptr && cspfarendtotaltable->has_data())
	|| (csptotaltable !=  nullptr && csptotaltable->has_data())
	|| (csptracetable !=  nullptr && csptracetable->has_data())
	|| (csstatstable !=  nullptr && csstatstable->has_data())
	|| (csstotaltable !=  nullptr && csstotaltable->has_data())
	|| (csstracetable !=  nullptr && csstracetable->has_data());
}

bool CiscoSonetMib::has_operation() const
{
    return is_set(yfilter)
	|| (csapsconfig !=  nullptr && csapsconfig->has_operation())
	|| (csapsconfigtable !=  nullptr && csapsconfigtable->has_operation())
	|| (csau4tug3configtable !=  nullptr && csau4tug3configtable->has_operation())
	|| (csconfigtable !=  nullptr && csconfigtable->has_operation())
	|| (cslfarendtotaltable !=  nullptr && cslfarendtotaltable->has_operation())
	|| (csltotaltable !=  nullptr && csltotaltable->has_operation())
	|| (csnotifications !=  nullptr && csnotifications->has_operation())
	|| (cspfarendtotaltable !=  nullptr && cspfarendtotaltable->has_operation())
	|| (csptotaltable !=  nullptr && csptotaltable->has_operation())
	|| (csptracetable !=  nullptr && csptracetable->has_operation())
	|| (csstatstable !=  nullptr && csstatstable->has_operation())
	|| (csstotaltable !=  nullptr && csstotaltable->has_operation())
	|| (csstracetable !=  nullptr && csstracetable->has_operation());
}

std::string CiscoSonetMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB";

    return path_buffer.str();

}

const EntityPath CiscoSonetMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoSonetMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csApsConfig")
    {
        if(csapsconfig == nullptr)
        {
            csapsconfig = std::make_shared<CiscoSonetMib::Csapsconfig>();
        }
        return csapsconfig;
    }

    if(child_yang_name == "csApsConfigTable")
    {
        if(csapsconfigtable == nullptr)
        {
            csapsconfigtable = std::make_shared<CiscoSonetMib::Csapsconfigtable>();
        }
        return csapsconfigtable;
    }

    if(child_yang_name == "csAu4Tug3ConfigTable")
    {
        if(csau4tug3configtable == nullptr)
        {
            csau4tug3configtable = std::make_shared<CiscoSonetMib::Csau4Tug3Configtable>();
        }
        return csau4tug3configtable;
    }

    if(child_yang_name == "csConfigTable")
    {
        if(csconfigtable == nullptr)
        {
            csconfigtable = std::make_shared<CiscoSonetMib::Csconfigtable>();
        }
        return csconfigtable;
    }

    if(child_yang_name == "cslFarEndTotalTable")
    {
        if(cslfarendtotaltable == nullptr)
        {
            cslfarendtotaltable = std::make_shared<CiscoSonetMib::Cslfarendtotaltable>();
        }
        return cslfarendtotaltable;
    }

    if(child_yang_name == "cslTotalTable")
    {
        if(csltotaltable == nullptr)
        {
            csltotaltable = std::make_shared<CiscoSonetMib::Csltotaltable>();
        }
        return csltotaltable;
    }

    if(child_yang_name == "csNotifications")
    {
        if(csnotifications == nullptr)
        {
            csnotifications = std::make_shared<CiscoSonetMib::Csnotifications>();
        }
        return csnotifications;
    }

    if(child_yang_name == "cspFarEndTotalTable")
    {
        if(cspfarendtotaltable == nullptr)
        {
            cspfarendtotaltable = std::make_shared<CiscoSonetMib::Cspfarendtotaltable>();
        }
        return cspfarendtotaltable;
    }

    if(child_yang_name == "cspTotalTable")
    {
        if(csptotaltable == nullptr)
        {
            csptotaltable = std::make_shared<CiscoSonetMib::Csptotaltable>();
        }
        return csptotaltable;
    }

    if(child_yang_name == "cspTraceTable")
    {
        if(csptracetable == nullptr)
        {
            csptracetable = std::make_shared<CiscoSonetMib::Csptracetable>();
        }
        return csptracetable;
    }

    if(child_yang_name == "csStatsTable")
    {
        if(csstatstable == nullptr)
        {
            csstatstable = std::make_shared<CiscoSonetMib::Csstatstable>();
        }
        return csstatstable;
    }

    if(child_yang_name == "cssTotalTable")
    {
        if(csstotaltable == nullptr)
        {
            csstotaltable = std::make_shared<CiscoSonetMib::Csstotaltable>();
        }
        return csstotaltable;
    }

    if(child_yang_name == "cssTraceTable")
    {
        if(csstracetable == nullptr)
        {
            csstracetable = std::make_shared<CiscoSonetMib::Csstracetable>();
        }
        return csstracetable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSonetMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(csapsconfig != nullptr)
    {
        children["csApsConfig"] = csapsconfig;
    }

    if(csapsconfigtable != nullptr)
    {
        children["csApsConfigTable"] = csapsconfigtable;
    }

    if(csau4tug3configtable != nullptr)
    {
        children["csAu4Tug3ConfigTable"] = csau4tug3configtable;
    }

    if(csconfigtable != nullptr)
    {
        children["csConfigTable"] = csconfigtable;
    }

    if(cslfarendtotaltable != nullptr)
    {
        children["cslFarEndTotalTable"] = cslfarendtotaltable;
    }

    if(csltotaltable != nullptr)
    {
        children["cslTotalTable"] = csltotaltable;
    }

    if(csnotifications != nullptr)
    {
        children["csNotifications"] = csnotifications;
    }

    if(cspfarendtotaltable != nullptr)
    {
        children["cspFarEndTotalTable"] = cspfarendtotaltable;
    }

    if(csptotaltable != nullptr)
    {
        children["cspTotalTable"] = csptotaltable;
    }

    if(csptracetable != nullptr)
    {
        children["cspTraceTable"] = csptracetable;
    }

    if(csstatstable != nullptr)
    {
        children["csStatsTable"] = csstatstable;
    }

    if(csstotaltable != nullptr)
    {
        children["cssTotalTable"] = csstotaltable;
    }

    if(csstracetable != nullptr)
    {
        children["cssTraceTable"] = csstracetable;
    }

    return children;
}

void CiscoSonetMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoSonetMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoSonetMib::clone_ptr() const
{
    return std::make_shared<CiscoSonetMib>();
}

std::string CiscoSonetMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoSonetMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoSonetMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoSonetMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoSonetMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csApsConfig" || name == "csApsConfigTable" || name == "csAu4Tug3ConfigTable" || name == "csConfigTable" || name == "cslFarEndTotalTable" || name == "cslTotalTable" || name == "csNotifications" || name == "cspFarEndTotalTable" || name == "cspTotalTable" || name == "cspTraceTable" || name == "csStatsTable" || name == "cssTotalTable" || name == "cssTraceTable")
        return true;
    return false;
}

CiscoSonetMib::Csapsconfig::Csapsconfig()
    :
    csapslinefailurecode{YType::enumeration, "csApsLineFailureCode"},
    csapslineswitchreason{YType::enumeration, "csApsLineSwitchReason"}
{
    yang_name = "csApsConfig"; yang_parent_name = "CISCO-SONET-MIB";
}

CiscoSonetMib::Csapsconfig::~Csapsconfig()
{
}

bool CiscoSonetMib::Csapsconfig::has_data() const
{
    return csapslinefailurecode.is_set
	|| csapslineswitchreason.is_set;
}

bool CiscoSonetMib::Csapsconfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csapslinefailurecode.yfilter)
	|| ydk::is_set(csapslineswitchreason.yfilter);
}

std::string CiscoSonetMib::Csapsconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csApsConfig";

    return path_buffer.str();

}

const EntityPath CiscoSonetMib::Csapsconfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csapslinefailurecode.is_set || is_set(csapslinefailurecode.yfilter)) leaf_name_data.push_back(csapslinefailurecode.get_name_leafdata());
    if (csapslineswitchreason.is_set || is_set(csapslineswitchreason.yfilter)) leaf_name_data.push_back(csapslineswitchreason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSonetMib::Csapsconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSonetMib::Csapsconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSonetMib::Csapsconfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csApsLineFailureCode")
    {
        csapslinefailurecode = value;
        csapslinefailurecode.value_namespace = name_space;
        csapslinefailurecode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csApsLineSwitchReason")
    {
        csapslineswitchreason = value;
        csapslineswitchreason.value_namespace = name_space;
        csapslineswitchreason.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSonetMib::Csapsconfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csApsLineFailureCode")
    {
        csapslinefailurecode.yfilter = yfilter;
    }
    if(value_path == "csApsLineSwitchReason")
    {
        csapslineswitchreason.yfilter = yfilter;
    }
}

bool CiscoSonetMib::Csapsconfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csApsLineFailureCode" || name == "csApsLineSwitchReason")
        return true;
    return false;
}

CiscoSonetMib::Csnotifications::Csnotifications()
    :
    csnotificationsenabled{YType::boolean, "csNotificationsEnabled"}
{
    yang_name = "csNotifications"; yang_parent_name = "CISCO-SONET-MIB";
}

CiscoSonetMib::Csnotifications::~Csnotifications()
{
}

bool CiscoSonetMib::Csnotifications::has_data() const
{
    return csnotificationsenabled.is_set;
}

bool CiscoSonetMib::Csnotifications::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csnotificationsenabled.yfilter);
}

std::string CiscoSonetMib::Csnotifications::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csNotifications";

    return path_buffer.str();

}

const EntityPath CiscoSonetMib::Csnotifications::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csnotificationsenabled.is_set || is_set(csnotificationsenabled.yfilter)) leaf_name_data.push_back(csnotificationsenabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSonetMib::Csnotifications::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSonetMib::Csnotifications::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSonetMib::Csnotifications::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csNotificationsEnabled")
    {
        csnotificationsenabled = value;
        csnotificationsenabled.value_namespace = name_space;
        csnotificationsenabled.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSonetMib::Csnotifications::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csNotificationsEnabled")
    {
        csnotificationsenabled.yfilter = yfilter;
    }
}

bool CiscoSonetMib::Csnotifications::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csNotificationsEnabled")
        return true;
    return false;
}

CiscoSonetMib::Csconfigtable::Csconfigtable()
{
    yang_name = "csConfigTable"; yang_parent_name = "CISCO-SONET-MIB";
}

CiscoSonetMib::Csconfigtable::~Csconfigtable()
{
}

bool CiscoSonetMib::Csconfigtable::has_data() const
{
    for (std::size_t index=0; index<csconfigentry.size(); index++)
    {
        if(csconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSonetMib::Csconfigtable::has_operation() const
{
    for (std::size_t index=0; index<csconfigentry.size(); index++)
    {
        if(csconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoSonetMib::Csconfigtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csConfigTable";

    return path_buffer.str();

}

const EntityPath CiscoSonetMib::Csconfigtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSonetMib::Csconfigtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csConfigEntry")
    {
        for(auto const & c : csconfigentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSonetMib::Csconfigtable::Csconfigentry>();
        c->parent = this;
        csconfigentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSonetMib::Csconfigtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csconfigentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSonetMib::Csconfigtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoSonetMib::Csconfigtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoSonetMib::Csconfigtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csConfigEntry")
        return true;
    return false;
}

CiscoSonetMib::Csconfigtable::Csconfigentry::Csconfigentry()
    :
    ifindex{YType::str, "ifIndex"},
    csconfigframescramble{YType::enumeration, "csConfigFrameScramble"},
    csconfigloopbacktype{YType::enumeration, "csConfigLoopbackType"},
    csconfigrdiptype{YType::enumeration, "csConfigRDIPType"},
    csconfigrdivtype{YType::enumeration, "csConfigRDIVType"},
    csconfigtype{YType::enumeration, "csConfigType"},
    csconfigxmtclocksource{YType::enumeration, "csConfigXmtClockSource"},
    cssignallingtransportmode{YType::enumeration, "csSignallingTransportMode"},
    cstributaryframingtype{YType::enumeration, "csTributaryFramingType"},
    cstributarygroupingtype{YType::enumeration, "csTributaryGroupingType"},
    cstributarymappingtype{YType::enumeration, "csTributaryMappingType"},
    cstributarytype{YType::enumeration, "csTributaryType"}
{
    yang_name = "csConfigEntry"; yang_parent_name = "csConfigTable";
}

CiscoSonetMib::Csconfigtable::Csconfigentry::~Csconfigentry()
{
}

bool CiscoSonetMib::Csconfigtable::Csconfigentry::has_data() const
{
    return ifindex.is_set
	|| csconfigframescramble.is_set
	|| csconfigloopbacktype.is_set
	|| csconfigrdiptype.is_set
	|| csconfigrdivtype.is_set
	|| csconfigtype.is_set
	|| csconfigxmtclocksource.is_set
	|| cssignallingtransportmode.is_set
	|| cstributaryframingtype.is_set
	|| cstributarygroupingtype.is_set
	|| cstributarymappingtype.is_set
	|| cstributarytype.is_set;
}

bool CiscoSonetMib::Csconfigtable::Csconfigentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(csconfigframescramble.yfilter)
	|| ydk::is_set(csconfigloopbacktype.yfilter)
	|| ydk::is_set(csconfigrdiptype.yfilter)
	|| ydk::is_set(csconfigrdivtype.yfilter)
	|| ydk::is_set(csconfigtype.yfilter)
	|| ydk::is_set(csconfigxmtclocksource.yfilter)
	|| ydk::is_set(cssignallingtransportmode.yfilter)
	|| ydk::is_set(cstributaryframingtype.yfilter)
	|| ydk::is_set(cstributarygroupingtype.yfilter)
	|| ydk::is_set(cstributarymappingtype.yfilter)
	|| ydk::is_set(cstributarytype.yfilter);
}

std::string CiscoSonetMib::Csconfigtable::Csconfigentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csConfigEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSonetMib::Csconfigtable::Csconfigentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/csConfigTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (csconfigframescramble.is_set || is_set(csconfigframescramble.yfilter)) leaf_name_data.push_back(csconfigframescramble.get_name_leafdata());
    if (csconfigloopbacktype.is_set || is_set(csconfigloopbacktype.yfilter)) leaf_name_data.push_back(csconfigloopbacktype.get_name_leafdata());
    if (csconfigrdiptype.is_set || is_set(csconfigrdiptype.yfilter)) leaf_name_data.push_back(csconfigrdiptype.get_name_leafdata());
    if (csconfigrdivtype.is_set || is_set(csconfigrdivtype.yfilter)) leaf_name_data.push_back(csconfigrdivtype.get_name_leafdata());
    if (csconfigtype.is_set || is_set(csconfigtype.yfilter)) leaf_name_data.push_back(csconfigtype.get_name_leafdata());
    if (csconfigxmtclocksource.is_set || is_set(csconfigxmtclocksource.yfilter)) leaf_name_data.push_back(csconfigxmtclocksource.get_name_leafdata());
    if (cssignallingtransportmode.is_set || is_set(cssignallingtransportmode.yfilter)) leaf_name_data.push_back(cssignallingtransportmode.get_name_leafdata());
    if (cstributaryframingtype.is_set || is_set(cstributaryframingtype.yfilter)) leaf_name_data.push_back(cstributaryframingtype.get_name_leafdata());
    if (cstributarygroupingtype.is_set || is_set(cstributarygroupingtype.yfilter)) leaf_name_data.push_back(cstributarygroupingtype.get_name_leafdata());
    if (cstributarymappingtype.is_set || is_set(cstributarymappingtype.yfilter)) leaf_name_data.push_back(cstributarymappingtype.get_name_leafdata());
    if (cstributarytype.is_set || is_set(cstributarytype.yfilter)) leaf_name_data.push_back(cstributarytype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSonetMib::Csconfigtable::Csconfigentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSonetMib::Csconfigtable::Csconfigentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSonetMib::Csconfigtable::Csconfigentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csConfigFrameScramble")
    {
        csconfigframescramble = value;
        csconfigframescramble.value_namespace = name_space;
        csconfigframescramble.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csConfigLoopbackType")
    {
        csconfigloopbacktype = value;
        csconfigloopbacktype.value_namespace = name_space;
        csconfigloopbacktype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csConfigRDIPType")
    {
        csconfigrdiptype = value;
        csconfigrdiptype.value_namespace = name_space;
        csconfigrdiptype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csConfigRDIVType")
    {
        csconfigrdivtype = value;
        csconfigrdivtype.value_namespace = name_space;
        csconfigrdivtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csConfigType")
    {
        csconfigtype = value;
        csconfigtype.value_namespace = name_space;
        csconfigtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csConfigXmtClockSource")
    {
        csconfigxmtclocksource = value;
        csconfigxmtclocksource.value_namespace = name_space;
        csconfigxmtclocksource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csSignallingTransportMode")
    {
        cssignallingtransportmode = value;
        cssignallingtransportmode.value_namespace = name_space;
        cssignallingtransportmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csTributaryFramingType")
    {
        cstributaryframingtype = value;
        cstributaryframingtype.value_namespace = name_space;
        cstributaryframingtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csTributaryGroupingType")
    {
        cstributarygroupingtype = value;
        cstributarygroupingtype.value_namespace = name_space;
        cstributarygroupingtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csTributaryMappingType")
    {
        cstributarymappingtype = value;
        cstributarymappingtype.value_namespace = name_space;
        cstributarymappingtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csTributaryType")
    {
        cstributarytype = value;
        cstributarytype.value_namespace = name_space;
        cstributarytype.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSonetMib::Csconfigtable::Csconfigentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "csConfigFrameScramble")
    {
        csconfigframescramble.yfilter = yfilter;
    }
    if(value_path == "csConfigLoopbackType")
    {
        csconfigloopbacktype.yfilter = yfilter;
    }
    if(value_path == "csConfigRDIPType")
    {
        csconfigrdiptype.yfilter = yfilter;
    }
    if(value_path == "csConfigRDIVType")
    {
        csconfigrdivtype.yfilter = yfilter;
    }
    if(value_path == "csConfigType")
    {
        csconfigtype.yfilter = yfilter;
    }
    if(value_path == "csConfigXmtClockSource")
    {
        csconfigxmtclocksource.yfilter = yfilter;
    }
    if(value_path == "csSignallingTransportMode")
    {
        cssignallingtransportmode.yfilter = yfilter;
    }
    if(value_path == "csTributaryFramingType")
    {
        cstributaryframingtype.yfilter = yfilter;
    }
    if(value_path == "csTributaryGroupingType")
    {
        cstributarygroupingtype.yfilter = yfilter;
    }
    if(value_path == "csTributaryMappingType")
    {
        cstributarymappingtype.yfilter = yfilter;
    }
    if(value_path == "csTributaryType")
    {
        cstributarytype.yfilter = yfilter;
    }
}

bool CiscoSonetMib::Csconfigtable::Csconfigentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "csConfigFrameScramble" || name == "csConfigLoopbackType" || name == "csConfigRDIPType" || name == "csConfigRDIVType" || name == "csConfigType" || name == "csConfigXmtClockSource" || name == "csSignallingTransportMode" || name == "csTributaryFramingType" || name == "csTributaryGroupingType" || name == "csTributaryMappingType" || name == "csTributaryType")
        return true;
    return false;
}

CiscoSonetMib::Csapsconfigtable::Csapsconfigtable()
{
    yang_name = "csApsConfigTable"; yang_parent_name = "CISCO-SONET-MIB";
}

CiscoSonetMib::Csapsconfigtable::~Csapsconfigtable()
{
}

bool CiscoSonetMib::Csapsconfigtable::has_data() const
{
    for (std::size_t index=0; index<csapsconfigentry.size(); index++)
    {
        if(csapsconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSonetMib::Csapsconfigtable::has_operation() const
{
    for (std::size_t index=0; index<csapsconfigentry.size(); index++)
    {
        if(csapsconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoSonetMib::Csapsconfigtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csApsConfigTable";

    return path_buffer.str();

}

const EntityPath CiscoSonetMib::Csapsconfigtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSonetMib::Csapsconfigtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csApsConfigEntry")
    {
        for(auto const & c : csapsconfigentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSonetMib::Csapsconfigtable::Csapsconfigentry>();
        c->parent = this;
        csapsconfigentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSonetMib::Csapsconfigtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csapsconfigentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSonetMib::Csapsconfigtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoSonetMib::Csapsconfigtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoSonetMib::Csapsconfigtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csApsConfigEntry")
        return true;
    return false;
}

CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapsconfigentry()
    :
    csapsworkingindex{YType::int32, "csApsWorkingIndex"},
    csapsactiveline{YType::enumeration, "csApsActiveLine"},
    csapsarchmode{YType::enumeration, "csApsArchMode"},
    csapsarchmodeoperational{YType::enumeration, "csApsArchModeOperational"},
    csapschannelprotocol{YType::enumeration, "csApsChannelProtocol"},
    csapsdirection{YType::enumeration, "csApsDirection"},
    csapsdirectionoperational{YType::enumeration, "csApsDirectionOperational"},
    csapsenable{YType::enumeration, "csApsEnable"},
    csapsfailurestatus{YType::bits, "csApsFailureStatus"},
    csapsprimarysection{YType::enumeration, "csApsPrimarySection"},
    csapsprotectionindex{YType::int32, "csApsProtectionIndex"},
    csapsrevertive{YType::enumeration, "csApsRevertive"},
    csapssigdegradeber{YType::uint32, "csApsSigDegradeBER"},
    csapssigfaultber{YType::uint32, "csApsSigFaultBER"},
    csapsswitchreason{YType::enumeration, "csApsSwitchReason"},
    csapswaittorestore{YType::uint32, "csApsWaitToRestore"}
{
    yang_name = "csApsConfigEntry"; yang_parent_name = "csApsConfigTable";
}

CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::~Csapsconfigentry()
{
}

bool CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::has_data() const
{
    return csapsworkingindex.is_set
	|| csapsactiveline.is_set
	|| csapsarchmode.is_set
	|| csapsarchmodeoperational.is_set
	|| csapschannelprotocol.is_set
	|| csapsdirection.is_set
	|| csapsdirectionoperational.is_set
	|| csapsenable.is_set
	|| csapsfailurestatus.is_set
	|| csapsprimarysection.is_set
	|| csapsprotectionindex.is_set
	|| csapsrevertive.is_set
	|| csapssigdegradeber.is_set
	|| csapssigfaultber.is_set
	|| csapsswitchreason.is_set
	|| csapswaittorestore.is_set;
}

bool CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csapsworkingindex.yfilter)
	|| ydk::is_set(csapsactiveline.yfilter)
	|| ydk::is_set(csapsarchmode.yfilter)
	|| ydk::is_set(csapsarchmodeoperational.yfilter)
	|| ydk::is_set(csapschannelprotocol.yfilter)
	|| ydk::is_set(csapsdirection.yfilter)
	|| ydk::is_set(csapsdirectionoperational.yfilter)
	|| ydk::is_set(csapsenable.yfilter)
	|| ydk::is_set(csapsfailurestatus.yfilter)
	|| ydk::is_set(csapsprimarysection.yfilter)
	|| ydk::is_set(csapsprotectionindex.yfilter)
	|| ydk::is_set(csapsrevertive.yfilter)
	|| ydk::is_set(csapssigdegradeber.yfilter)
	|| ydk::is_set(csapssigfaultber.yfilter)
	|| ydk::is_set(csapsswitchreason.yfilter)
	|| ydk::is_set(csapswaittorestore.yfilter);
}

std::string CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csApsConfigEntry" <<"[csApsWorkingIndex='" <<csapsworkingindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/csApsConfigTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csapsworkingindex.is_set || is_set(csapsworkingindex.yfilter)) leaf_name_data.push_back(csapsworkingindex.get_name_leafdata());
    if (csapsactiveline.is_set || is_set(csapsactiveline.yfilter)) leaf_name_data.push_back(csapsactiveline.get_name_leafdata());
    if (csapsarchmode.is_set || is_set(csapsarchmode.yfilter)) leaf_name_data.push_back(csapsarchmode.get_name_leafdata());
    if (csapsarchmodeoperational.is_set || is_set(csapsarchmodeoperational.yfilter)) leaf_name_data.push_back(csapsarchmodeoperational.get_name_leafdata());
    if (csapschannelprotocol.is_set || is_set(csapschannelprotocol.yfilter)) leaf_name_data.push_back(csapschannelprotocol.get_name_leafdata());
    if (csapsdirection.is_set || is_set(csapsdirection.yfilter)) leaf_name_data.push_back(csapsdirection.get_name_leafdata());
    if (csapsdirectionoperational.is_set || is_set(csapsdirectionoperational.yfilter)) leaf_name_data.push_back(csapsdirectionoperational.get_name_leafdata());
    if (csapsenable.is_set || is_set(csapsenable.yfilter)) leaf_name_data.push_back(csapsenable.get_name_leafdata());
    if (csapsfailurestatus.is_set || is_set(csapsfailurestatus.yfilter)) leaf_name_data.push_back(csapsfailurestatus.get_name_leafdata());
    if (csapsprimarysection.is_set || is_set(csapsprimarysection.yfilter)) leaf_name_data.push_back(csapsprimarysection.get_name_leafdata());
    if (csapsprotectionindex.is_set || is_set(csapsprotectionindex.yfilter)) leaf_name_data.push_back(csapsprotectionindex.get_name_leafdata());
    if (csapsrevertive.is_set || is_set(csapsrevertive.yfilter)) leaf_name_data.push_back(csapsrevertive.get_name_leafdata());
    if (csapssigdegradeber.is_set || is_set(csapssigdegradeber.yfilter)) leaf_name_data.push_back(csapssigdegradeber.get_name_leafdata());
    if (csapssigfaultber.is_set || is_set(csapssigfaultber.yfilter)) leaf_name_data.push_back(csapssigfaultber.get_name_leafdata());
    if (csapsswitchreason.is_set || is_set(csapsswitchreason.yfilter)) leaf_name_data.push_back(csapsswitchreason.get_name_leafdata());
    if (csapswaittorestore.is_set || is_set(csapswaittorestore.yfilter)) leaf_name_data.push_back(csapswaittorestore.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csApsWorkingIndex")
    {
        csapsworkingindex = value;
        csapsworkingindex.value_namespace = name_space;
        csapsworkingindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csApsActiveLine")
    {
        csapsactiveline = value;
        csapsactiveline.value_namespace = name_space;
        csapsactiveline.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csApsArchMode")
    {
        csapsarchmode = value;
        csapsarchmode.value_namespace = name_space;
        csapsarchmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csApsArchModeOperational")
    {
        csapsarchmodeoperational = value;
        csapsarchmodeoperational.value_namespace = name_space;
        csapsarchmodeoperational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csApsChannelProtocol")
    {
        csapschannelprotocol = value;
        csapschannelprotocol.value_namespace = name_space;
        csapschannelprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csApsDirection")
    {
        csapsdirection = value;
        csapsdirection.value_namespace = name_space;
        csapsdirection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csApsDirectionOperational")
    {
        csapsdirectionoperational = value;
        csapsdirectionoperational.value_namespace = name_space;
        csapsdirectionoperational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csApsEnable")
    {
        csapsenable = value;
        csapsenable.value_namespace = name_space;
        csapsenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csApsFailureStatus")
    {
        csapsfailurestatus[value] = true;
    }
    if(value_path == "csApsPrimarySection")
    {
        csapsprimarysection = value;
        csapsprimarysection.value_namespace = name_space;
        csapsprimarysection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csApsProtectionIndex")
    {
        csapsprotectionindex = value;
        csapsprotectionindex.value_namespace = name_space;
        csapsprotectionindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csApsRevertive")
    {
        csapsrevertive = value;
        csapsrevertive.value_namespace = name_space;
        csapsrevertive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csApsSigDegradeBER")
    {
        csapssigdegradeber = value;
        csapssigdegradeber.value_namespace = name_space;
        csapssigdegradeber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csApsSigFaultBER")
    {
        csapssigfaultber = value;
        csapssigfaultber.value_namespace = name_space;
        csapssigfaultber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csApsSwitchReason")
    {
        csapsswitchreason = value;
        csapsswitchreason.value_namespace = name_space;
        csapsswitchreason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csApsWaitToRestore")
    {
        csapswaittorestore = value;
        csapswaittorestore.value_namespace = name_space;
        csapswaittorestore.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csApsWorkingIndex")
    {
        csapsworkingindex.yfilter = yfilter;
    }
    if(value_path == "csApsActiveLine")
    {
        csapsactiveline.yfilter = yfilter;
    }
    if(value_path == "csApsArchMode")
    {
        csapsarchmode.yfilter = yfilter;
    }
    if(value_path == "csApsArchModeOperational")
    {
        csapsarchmodeoperational.yfilter = yfilter;
    }
    if(value_path == "csApsChannelProtocol")
    {
        csapschannelprotocol.yfilter = yfilter;
    }
    if(value_path == "csApsDirection")
    {
        csapsdirection.yfilter = yfilter;
    }
    if(value_path == "csApsDirectionOperational")
    {
        csapsdirectionoperational.yfilter = yfilter;
    }
    if(value_path == "csApsEnable")
    {
        csapsenable.yfilter = yfilter;
    }
    if(value_path == "csApsFailureStatus")
    {
        csapsfailurestatus.yfilter = yfilter;
    }
    if(value_path == "csApsPrimarySection")
    {
        csapsprimarysection.yfilter = yfilter;
    }
    if(value_path == "csApsProtectionIndex")
    {
        csapsprotectionindex.yfilter = yfilter;
    }
    if(value_path == "csApsRevertive")
    {
        csapsrevertive.yfilter = yfilter;
    }
    if(value_path == "csApsSigDegradeBER")
    {
        csapssigdegradeber.yfilter = yfilter;
    }
    if(value_path == "csApsSigFaultBER")
    {
        csapssigfaultber.yfilter = yfilter;
    }
    if(value_path == "csApsSwitchReason")
    {
        csapsswitchreason.yfilter = yfilter;
    }
    if(value_path == "csApsWaitToRestore")
    {
        csapswaittorestore.yfilter = yfilter;
    }
}

bool CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csApsWorkingIndex" || name == "csApsActiveLine" || name == "csApsArchMode" || name == "csApsArchModeOperational" || name == "csApsChannelProtocol" || name == "csApsDirection" || name == "csApsDirectionOperational" || name == "csApsEnable" || name == "csApsFailureStatus" || name == "csApsPrimarySection" || name == "csApsProtectionIndex" || name == "csApsRevertive" || name == "csApsSigDegradeBER" || name == "csApsSigFaultBER" || name == "csApsSwitchReason" || name == "csApsWaitToRestore")
        return true;
    return false;
}

CiscoSonetMib::Csstotaltable::Csstotaltable()
{
    yang_name = "cssTotalTable"; yang_parent_name = "CISCO-SONET-MIB";
}

CiscoSonetMib::Csstotaltable::~Csstotaltable()
{
}

bool CiscoSonetMib::Csstotaltable::has_data() const
{
    for (std::size_t index=0; index<csstotalentry.size(); index++)
    {
        if(csstotalentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSonetMib::Csstotaltable::has_operation() const
{
    for (std::size_t index=0; index<csstotalentry.size(); index++)
    {
        if(csstotalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoSonetMib::Csstotaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cssTotalTable";

    return path_buffer.str();

}

const EntityPath CiscoSonetMib::Csstotaltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSonetMib::Csstotaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cssTotalEntry")
    {
        for(auto const & c : csstotalentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSonetMib::Csstotaltable::Csstotalentry>();
        c->parent = this;
        csstotalentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSonetMib::Csstotaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csstotalentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSonetMib::Csstotaltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoSonetMib::Csstotaltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoSonetMib::Csstotaltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cssTotalEntry")
        return true;
    return false;
}

CiscoSonetMib::Csstotaltable::Csstotalentry::Csstotalentry()
    :
    ifindex{YType::str, "ifIndex"},
    csstotalcvs{YType::uint32, "cssTotalCVs"},
    csstotaless{YType::uint32, "cssTotalESs"},
    csstotalsefss{YType::uint32, "cssTotalSEFSs"},
    csstotalsess{YType::uint32, "cssTotalSESs"}
{
    yang_name = "cssTotalEntry"; yang_parent_name = "cssTotalTable";
}

CiscoSonetMib::Csstotaltable::Csstotalentry::~Csstotalentry()
{
}

bool CiscoSonetMib::Csstotaltable::Csstotalentry::has_data() const
{
    return ifindex.is_set
	|| csstotalcvs.is_set
	|| csstotaless.is_set
	|| csstotalsefss.is_set
	|| csstotalsess.is_set;
}

bool CiscoSonetMib::Csstotaltable::Csstotalentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(csstotalcvs.yfilter)
	|| ydk::is_set(csstotaless.yfilter)
	|| ydk::is_set(csstotalsefss.yfilter)
	|| ydk::is_set(csstotalsess.yfilter);
}

std::string CiscoSonetMib::Csstotaltable::Csstotalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cssTotalEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSonetMib::Csstotaltable::Csstotalentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/cssTotalTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (csstotalcvs.is_set || is_set(csstotalcvs.yfilter)) leaf_name_data.push_back(csstotalcvs.get_name_leafdata());
    if (csstotaless.is_set || is_set(csstotaless.yfilter)) leaf_name_data.push_back(csstotaless.get_name_leafdata());
    if (csstotalsefss.is_set || is_set(csstotalsefss.yfilter)) leaf_name_data.push_back(csstotalsefss.get_name_leafdata());
    if (csstotalsess.is_set || is_set(csstotalsess.yfilter)) leaf_name_data.push_back(csstotalsess.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSonetMib::Csstotaltable::Csstotalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSonetMib::Csstotaltable::Csstotalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSonetMib::Csstotaltable::Csstotalentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cssTotalCVs")
    {
        csstotalcvs = value;
        csstotalcvs.value_namespace = name_space;
        csstotalcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cssTotalESs")
    {
        csstotaless = value;
        csstotaless.value_namespace = name_space;
        csstotaless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cssTotalSEFSs")
    {
        csstotalsefss = value;
        csstotalsefss.value_namespace = name_space;
        csstotalsefss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cssTotalSESs")
    {
        csstotalsess = value;
        csstotalsess.value_namespace = name_space;
        csstotalsess.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSonetMib::Csstotaltable::Csstotalentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cssTotalCVs")
    {
        csstotalcvs.yfilter = yfilter;
    }
    if(value_path == "cssTotalESs")
    {
        csstotaless.yfilter = yfilter;
    }
    if(value_path == "cssTotalSEFSs")
    {
        csstotalsefss.yfilter = yfilter;
    }
    if(value_path == "cssTotalSESs")
    {
        csstotalsess.yfilter = yfilter;
    }
}

bool CiscoSonetMib::Csstotaltable::Csstotalentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cssTotalCVs" || name == "cssTotalESs" || name == "cssTotalSEFSs" || name == "cssTotalSESs")
        return true;
    return false;
}

CiscoSonetMib::Csstracetable::Csstracetable()
{
    yang_name = "cssTraceTable"; yang_parent_name = "CISCO-SONET-MIB";
}

CiscoSonetMib::Csstracetable::~Csstracetable()
{
}

bool CiscoSonetMib::Csstracetable::has_data() const
{
    for (std::size_t index=0; index<csstraceentry.size(); index++)
    {
        if(csstraceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSonetMib::Csstracetable::has_operation() const
{
    for (std::size_t index=0; index<csstraceentry.size(); index++)
    {
        if(csstraceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoSonetMib::Csstracetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cssTraceTable";

    return path_buffer.str();

}

const EntityPath CiscoSonetMib::Csstracetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSonetMib::Csstracetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cssTraceEntry")
    {
        for(auto const & c : csstraceentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSonetMib::Csstracetable::Csstraceentry>();
        c->parent = this;
        csstraceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSonetMib::Csstracetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csstraceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSonetMib::Csstracetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoSonetMib::Csstracetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoSonetMib::Csstracetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cssTraceEntry")
        return true;
    return false;
}

CiscoSonetMib::Csstracetable::Csstraceentry::Csstraceentry()
    :
    ifindex{YType::str, "ifIndex"},
    csstracefailure{YType::boolean, "cssTraceFailure"},
    csstracereceived{YType::str, "cssTraceReceived"},
    csstracetoexpect{YType::str, "cssTraceToExpect"},
    csstracetotransmit{YType::str, "cssTraceToTransmit"}
{
    yang_name = "cssTraceEntry"; yang_parent_name = "cssTraceTable";
}

CiscoSonetMib::Csstracetable::Csstraceentry::~Csstraceentry()
{
}

bool CiscoSonetMib::Csstracetable::Csstraceentry::has_data() const
{
    return ifindex.is_set
	|| csstracefailure.is_set
	|| csstracereceived.is_set
	|| csstracetoexpect.is_set
	|| csstracetotransmit.is_set;
}

bool CiscoSonetMib::Csstracetable::Csstraceentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(csstracefailure.yfilter)
	|| ydk::is_set(csstracereceived.yfilter)
	|| ydk::is_set(csstracetoexpect.yfilter)
	|| ydk::is_set(csstracetotransmit.yfilter);
}

std::string CiscoSonetMib::Csstracetable::Csstraceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cssTraceEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSonetMib::Csstracetable::Csstraceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/cssTraceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (csstracefailure.is_set || is_set(csstracefailure.yfilter)) leaf_name_data.push_back(csstracefailure.get_name_leafdata());
    if (csstracereceived.is_set || is_set(csstracereceived.yfilter)) leaf_name_data.push_back(csstracereceived.get_name_leafdata());
    if (csstracetoexpect.is_set || is_set(csstracetoexpect.yfilter)) leaf_name_data.push_back(csstracetoexpect.get_name_leafdata());
    if (csstracetotransmit.is_set || is_set(csstracetotransmit.yfilter)) leaf_name_data.push_back(csstracetotransmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSonetMib::Csstracetable::Csstraceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSonetMib::Csstracetable::Csstraceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSonetMib::Csstracetable::Csstraceentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cssTraceFailure")
    {
        csstracefailure = value;
        csstracefailure.value_namespace = name_space;
        csstracefailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cssTraceReceived")
    {
        csstracereceived = value;
        csstracereceived.value_namespace = name_space;
        csstracereceived.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cssTraceToExpect")
    {
        csstracetoexpect = value;
        csstracetoexpect.value_namespace = name_space;
        csstracetoexpect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cssTraceToTransmit")
    {
        csstracetotransmit = value;
        csstracetotransmit.value_namespace = name_space;
        csstracetotransmit.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSonetMib::Csstracetable::Csstraceentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cssTraceFailure")
    {
        csstracefailure.yfilter = yfilter;
    }
    if(value_path == "cssTraceReceived")
    {
        csstracereceived.yfilter = yfilter;
    }
    if(value_path == "cssTraceToExpect")
    {
        csstracetoexpect.yfilter = yfilter;
    }
    if(value_path == "cssTraceToTransmit")
    {
        csstracetotransmit.yfilter = yfilter;
    }
}

bool CiscoSonetMib::Csstracetable::Csstraceentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cssTraceFailure" || name == "cssTraceReceived" || name == "cssTraceToExpect" || name == "cssTraceToTransmit")
        return true;
    return false;
}

CiscoSonetMib::Csltotaltable::Csltotaltable()
{
    yang_name = "cslTotalTable"; yang_parent_name = "CISCO-SONET-MIB";
}

CiscoSonetMib::Csltotaltable::~Csltotaltable()
{
}

bool CiscoSonetMib::Csltotaltable::has_data() const
{
    for (std::size_t index=0; index<csltotalentry.size(); index++)
    {
        if(csltotalentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSonetMib::Csltotaltable::has_operation() const
{
    for (std::size_t index=0; index<csltotalentry.size(); index++)
    {
        if(csltotalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoSonetMib::Csltotaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cslTotalTable";

    return path_buffer.str();

}

const EntityPath CiscoSonetMib::Csltotaltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSonetMib::Csltotaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cslTotalEntry")
    {
        for(auto const & c : csltotalentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSonetMib::Csltotaltable::Csltotalentry>();
        c->parent = this;
        csltotalentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSonetMib::Csltotaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csltotalentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSonetMib::Csltotaltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoSonetMib::Csltotaltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoSonetMib::Csltotaltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cslTotalEntry")
        return true;
    return false;
}

CiscoSonetMib::Csltotaltable::Csltotalentry::Csltotalentry()
    :
    ifindex{YType::str, "ifIndex"},
    csltotalcvs{YType::uint32, "cslTotalCVs"},
    csltotaless{YType::uint32, "cslTotalESs"},
    csltotalsess{YType::uint32, "cslTotalSESs"},
    csltotaluass{YType::uint32, "cslTotalUASs"}
{
    yang_name = "cslTotalEntry"; yang_parent_name = "cslTotalTable";
}

CiscoSonetMib::Csltotaltable::Csltotalentry::~Csltotalentry()
{
}

bool CiscoSonetMib::Csltotaltable::Csltotalentry::has_data() const
{
    return ifindex.is_set
	|| csltotalcvs.is_set
	|| csltotaless.is_set
	|| csltotalsess.is_set
	|| csltotaluass.is_set;
}

bool CiscoSonetMib::Csltotaltable::Csltotalentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(csltotalcvs.yfilter)
	|| ydk::is_set(csltotaless.yfilter)
	|| ydk::is_set(csltotalsess.yfilter)
	|| ydk::is_set(csltotaluass.yfilter);
}

std::string CiscoSonetMib::Csltotaltable::Csltotalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cslTotalEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSonetMib::Csltotaltable::Csltotalentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/cslTotalTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (csltotalcvs.is_set || is_set(csltotalcvs.yfilter)) leaf_name_data.push_back(csltotalcvs.get_name_leafdata());
    if (csltotaless.is_set || is_set(csltotaless.yfilter)) leaf_name_data.push_back(csltotaless.get_name_leafdata());
    if (csltotalsess.is_set || is_set(csltotalsess.yfilter)) leaf_name_data.push_back(csltotalsess.get_name_leafdata());
    if (csltotaluass.is_set || is_set(csltotaluass.yfilter)) leaf_name_data.push_back(csltotaluass.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSonetMib::Csltotaltable::Csltotalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSonetMib::Csltotaltable::Csltotalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSonetMib::Csltotaltable::Csltotalentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cslTotalCVs")
    {
        csltotalcvs = value;
        csltotalcvs.value_namespace = name_space;
        csltotalcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cslTotalESs")
    {
        csltotaless = value;
        csltotaless.value_namespace = name_space;
        csltotaless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cslTotalSESs")
    {
        csltotalsess = value;
        csltotalsess.value_namespace = name_space;
        csltotalsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cslTotalUASs")
    {
        csltotaluass = value;
        csltotaluass.value_namespace = name_space;
        csltotaluass.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSonetMib::Csltotaltable::Csltotalentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cslTotalCVs")
    {
        csltotalcvs.yfilter = yfilter;
    }
    if(value_path == "cslTotalESs")
    {
        csltotaless.yfilter = yfilter;
    }
    if(value_path == "cslTotalSESs")
    {
        csltotalsess.yfilter = yfilter;
    }
    if(value_path == "cslTotalUASs")
    {
        csltotaluass.yfilter = yfilter;
    }
}

bool CiscoSonetMib::Csltotaltable::Csltotalentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cslTotalCVs" || name == "cslTotalESs" || name == "cslTotalSESs" || name == "cslTotalUASs")
        return true;
    return false;
}

CiscoSonetMib::Cslfarendtotaltable::Cslfarendtotaltable()
{
    yang_name = "cslFarEndTotalTable"; yang_parent_name = "CISCO-SONET-MIB";
}

CiscoSonetMib::Cslfarendtotaltable::~Cslfarendtotaltable()
{
}

bool CiscoSonetMib::Cslfarendtotaltable::has_data() const
{
    for (std::size_t index=0; index<cslfarendtotalentry.size(); index++)
    {
        if(cslfarendtotalentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSonetMib::Cslfarendtotaltable::has_operation() const
{
    for (std::size_t index=0; index<cslfarendtotalentry.size(); index++)
    {
        if(cslfarendtotalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoSonetMib::Cslfarendtotaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cslFarEndTotalTable";

    return path_buffer.str();

}

const EntityPath CiscoSonetMib::Cslfarendtotaltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSonetMib::Cslfarendtotaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cslFarEndTotalEntry")
    {
        for(auto const & c : cslfarendtotalentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSonetMib::Cslfarendtotaltable::Cslfarendtotalentry>();
        c->parent = this;
        cslfarendtotalentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSonetMib::Cslfarendtotaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cslfarendtotalentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSonetMib::Cslfarendtotaltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoSonetMib::Cslfarendtotaltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoSonetMib::Cslfarendtotaltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cslFarEndTotalEntry")
        return true;
    return false;
}

CiscoSonetMib::Cslfarendtotaltable::Cslfarendtotalentry::Cslfarendtotalentry()
    :
    ifindex{YType::str, "ifIndex"},
    cslfarendtotalcvs{YType::uint32, "cslFarEndTotalCVs"},
    cslfarendtotaless{YType::uint32, "cslFarEndTotalESs"},
    cslfarendtotalsess{YType::uint32, "cslFarEndTotalSESs"},
    cslfarendtotaluass{YType::uint32, "cslFarEndTotalUASs"}
{
    yang_name = "cslFarEndTotalEntry"; yang_parent_name = "cslFarEndTotalTable";
}

CiscoSonetMib::Cslfarendtotaltable::Cslfarendtotalentry::~Cslfarendtotalentry()
{
}

bool CiscoSonetMib::Cslfarendtotaltable::Cslfarendtotalentry::has_data() const
{
    return ifindex.is_set
	|| cslfarendtotalcvs.is_set
	|| cslfarendtotaless.is_set
	|| cslfarendtotalsess.is_set
	|| cslfarendtotaluass.is_set;
}

bool CiscoSonetMib::Cslfarendtotaltable::Cslfarendtotalentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cslfarendtotalcvs.yfilter)
	|| ydk::is_set(cslfarendtotaless.yfilter)
	|| ydk::is_set(cslfarendtotalsess.yfilter)
	|| ydk::is_set(cslfarendtotaluass.yfilter);
}

std::string CiscoSonetMib::Cslfarendtotaltable::Cslfarendtotalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cslFarEndTotalEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSonetMib::Cslfarendtotaltable::Cslfarendtotalentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/cslFarEndTotalTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cslfarendtotalcvs.is_set || is_set(cslfarendtotalcvs.yfilter)) leaf_name_data.push_back(cslfarendtotalcvs.get_name_leafdata());
    if (cslfarendtotaless.is_set || is_set(cslfarendtotaless.yfilter)) leaf_name_data.push_back(cslfarendtotaless.get_name_leafdata());
    if (cslfarendtotalsess.is_set || is_set(cslfarendtotalsess.yfilter)) leaf_name_data.push_back(cslfarendtotalsess.get_name_leafdata());
    if (cslfarendtotaluass.is_set || is_set(cslfarendtotaluass.yfilter)) leaf_name_data.push_back(cslfarendtotaluass.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSonetMib::Cslfarendtotaltable::Cslfarendtotalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSonetMib::Cslfarendtotaltable::Cslfarendtotalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSonetMib::Cslfarendtotaltable::Cslfarendtotalentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cslFarEndTotalCVs")
    {
        cslfarendtotalcvs = value;
        cslfarendtotalcvs.value_namespace = name_space;
        cslfarendtotalcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cslFarEndTotalESs")
    {
        cslfarendtotaless = value;
        cslfarendtotaless.value_namespace = name_space;
        cslfarendtotaless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cslFarEndTotalSESs")
    {
        cslfarendtotalsess = value;
        cslfarendtotalsess.value_namespace = name_space;
        cslfarendtotalsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cslFarEndTotalUASs")
    {
        cslfarendtotaluass = value;
        cslfarendtotaluass.value_namespace = name_space;
        cslfarendtotaluass.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSonetMib::Cslfarendtotaltable::Cslfarendtotalentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cslFarEndTotalCVs")
    {
        cslfarendtotalcvs.yfilter = yfilter;
    }
    if(value_path == "cslFarEndTotalESs")
    {
        cslfarendtotaless.yfilter = yfilter;
    }
    if(value_path == "cslFarEndTotalSESs")
    {
        cslfarendtotalsess.yfilter = yfilter;
    }
    if(value_path == "cslFarEndTotalUASs")
    {
        cslfarendtotaluass.yfilter = yfilter;
    }
}

bool CiscoSonetMib::Cslfarendtotaltable::Cslfarendtotalentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cslFarEndTotalCVs" || name == "cslFarEndTotalESs" || name == "cslFarEndTotalSESs" || name == "cslFarEndTotalUASs")
        return true;
    return false;
}

CiscoSonetMib::Csptotaltable::Csptotaltable()
{
    yang_name = "cspTotalTable"; yang_parent_name = "CISCO-SONET-MIB";
}

CiscoSonetMib::Csptotaltable::~Csptotaltable()
{
}

bool CiscoSonetMib::Csptotaltable::has_data() const
{
    for (std::size_t index=0; index<csptotalentry.size(); index++)
    {
        if(csptotalentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSonetMib::Csptotaltable::has_operation() const
{
    for (std::size_t index=0; index<csptotalentry.size(); index++)
    {
        if(csptotalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoSonetMib::Csptotaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cspTotalTable";

    return path_buffer.str();

}

const EntityPath CiscoSonetMib::Csptotaltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSonetMib::Csptotaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cspTotalEntry")
    {
        for(auto const & c : csptotalentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSonetMib::Csptotaltable::Csptotalentry>();
        c->parent = this;
        csptotalentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSonetMib::Csptotaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csptotalentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSonetMib::Csptotaltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoSonetMib::Csptotaltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoSonetMib::Csptotaltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cspTotalEntry")
        return true;
    return false;
}

CiscoSonetMib::Csptotaltable::Csptotalentry::Csptotalentry()
    :
    ifindex{YType::str, "ifIndex"},
    csptotalcvs{YType::uint32, "cspTotalCVs"},
    csptotaless{YType::uint32, "cspTotalESs"},
    csptotalsess{YType::uint32, "cspTotalSESs"},
    csptotaluass{YType::uint32, "cspTotalUASs"}
{
    yang_name = "cspTotalEntry"; yang_parent_name = "cspTotalTable";
}

CiscoSonetMib::Csptotaltable::Csptotalentry::~Csptotalentry()
{
}

bool CiscoSonetMib::Csptotaltable::Csptotalentry::has_data() const
{
    return ifindex.is_set
	|| csptotalcvs.is_set
	|| csptotaless.is_set
	|| csptotalsess.is_set
	|| csptotaluass.is_set;
}

bool CiscoSonetMib::Csptotaltable::Csptotalentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(csptotalcvs.yfilter)
	|| ydk::is_set(csptotaless.yfilter)
	|| ydk::is_set(csptotalsess.yfilter)
	|| ydk::is_set(csptotaluass.yfilter);
}

std::string CiscoSonetMib::Csptotaltable::Csptotalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cspTotalEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSonetMib::Csptotaltable::Csptotalentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/cspTotalTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (csptotalcvs.is_set || is_set(csptotalcvs.yfilter)) leaf_name_data.push_back(csptotalcvs.get_name_leafdata());
    if (csptotaless.is_set || is_set(csptotaless.yfilter)) leaf_name_data.push_back(csptotaless.get_name_leafdata());
    if (csptotalsess.is_set || is_set(csptotalsess.yfilter)) leaf_name_data.push_back(csptotalsess.get_name_leafdata());
    if (csptotaluass.is_set || is_set(csptotaluass.yfilter)) leaf_name_data.push_back(csptotaluass.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSonetMib::Csptotaltable::Csptotalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSonetMib::Csptotaltable::Csptotalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSonetMib::Csptotaltable::Csptotalentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cspTotalCVs")
    {
        csptotalcvs = value;
        csptotalcvs.value_namespace = name_space;
        csptotalcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cspTotalESs")
    {
        csptotaless = value;
        csptotaless.value_namespace = name_space;
        csptotaless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cspTotalSESs")
    {
        csptotalsess = value;
        csptotalsess.value_namespace = name_space;
        csptotalsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cspTotalUASs")
    {
        csptotaluass = value;
        csptotaluass.value_namespace = name_space;
        csptotaluass.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSonetMib::Csptotaltable::Csptotalentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cspTotalCVs")
    {
        csptotalcvs.yfilter = yfilter;
    }
    if(value_path == "cspTotalESs")
    {
        csptotaless.yfilter = yfilter;
    }
    if(value_path == "cspTotalSESs")
    {
        csptotalsess.yfilter = yfilter;
    }
    if(value_path == "cspTotalUASs")
    {
        csptotaluass.yfilter = yfilter;
    }
}

bool CiscoSonetMib::Csptotaltable::Csptotalentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cspTotalCVs" || name == "cspTotalESs" || name == "cspTotalSESs" || name == "cspTotalUASs")
        return true;
    return false;
}

CiscoSonetMib::Cspfarendtotaltable::Cspfarendtotaltable()
{
    yang_name = "cspFarEndTotalTable"; yang_parent_name = "CISCO-SONET-MIB";
}

CiscoSonetMib::Cspfarendtotaltable::~Cspfarendtotaltable()
{
}

bool CiscoSonetMib::Cspfarendtotaltable::has_data() const
{
    for (std::size_t index=0; index<cspfarendtotalentry.size(); index++)
    {
        if(cspfarendtotalentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSonetMib::Cspfarendtotaltable::has_operation() const
{
    for (std::size_t index=0; index<cspfarendtotalentry.size(); index++)
    {
        if(cspfarendtotalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoSonetMib::Cspfarendtotaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cspFarEndTotalTable";

    return path_buffer.str();

}

const EntityPath CiscoSonetMib::Cspfarendtotaltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSonetMib::Cspfarendtotaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cspFarEndTotalEntry")
    {
        for(auto const & c : cspfarendtotalentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSonetMib::Cspfarendtotaltable::Cspfarendtotalentry>();
        c->parent = this;
        cspfarendtotalentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSonetMib::Cspfarendtotaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cspfarendtotalentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSonetMib::Cspfarendtotaltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoSonetMib::Cspfarendtotaltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoSonetMib::Cspfarendtotaltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cspFarEndTotalEntry")
        return true;
    return false;
}

CiscoSonetMib::Cspfarendtotaltable::Cspfarendtotalentry::Cspfarendtotalentry()
    :
    ifindex{YType::str, "ifIndex"},
    cspfarendtotalcvs{YType::uint32, "cspFarEndTotalCVs"},
    cspfarendtotaless{YType::uint32, "cspFarEndTotalESs"},
    cspfarendtotalsess{YType::uint32, "cspFarEndTotalSESs"},
    cspfarendtotaluass{YType::uint32, "cspFarEndTotalUASs"}
{
    yang_name = "cspFarEndTotalEntry"; yang_parent_name = "cspFarEndTotalTable";
}

CiscoSonetMib::Cspfarendtotaltable::Cspfarendtotalentry::~Cspfarendtotalentry()
{
}

bool CiscoSonetMib::Cspfarendtotaltable::Cspfarendtotalentry::has_data() const
{
    return ifindex.is_set
	|| cspfarendtotalcvs.is_set
	|| cspfarendtotaless.is_set
	|| cspfarendtotalsess.is_set
	|| cspfarendtotaluass.is_set;
}

bool CiscoSonetMib::Cspfarendtotaltable::Cspfarendtotalentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cspfarendtotalcvs.yfilter)
	|| ydk::is_set(cspfarendtotaless.yfilter)
	|| ydk::is_set(cspfarendtotalsess.yfilter)
	|| ydk::is_set(cspfarendtotaluass.yfilter);
}

std::string CiscoSonetMib::Cspfarendtotaltable::Cspfarendtotalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cspFarEndTotalEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSonetMib::Cspfarendtotaltable::Cspfarendtotalentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/cspFarEndTotalTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cspfarendtotalcvs.is_set || is_set(cspfarendtotalcvs.yfilter)) leaf_name_data.push_back(cspfarendtotalcvs.get_name_leafdata());
    if (cspfarendtotaless.is_set || is_set(cspfarendtotaless.yfilter)) leaf_name_data.push_back(cspfarendtotaless.get_name_leafdata());
    if (cspfarendtotalsess.is_set || is_set(cspfarendtotalsess.yfilter)) leaf_name_data.push_back(cspfarendtotalsess.get_name_leafdata());
    if (cspfarendtotaluass.is_set || is_set(cspfarendtotaluass.yfilter)) leaf_name_data.push_back(cspfarendtotaluass.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSonetMib::Cspfarendtotaltable::Cspfarendtotalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSonetMib::Cspfarendtotaltable::Cspfarendtotalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSonetMib::Cspfarendtotaltable::Cspfarendtotalentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cspFarEndTotalCVs")
    {
        cspfarendtotalcvs = value;
        cspfarendtotalcvs.value_namespace = name_space;
        cspfarendtotalcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cspFarEndTotalESs")
    {
        cspfarendtotaless = value;
        cspfarendtotaless.value_namespace = name_space;
        cspfarendtotaless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cspFarEndTotalSESs")
    {
        cspfarendtotalsess = value;
        cspfarendtotalsess.value_namespace = name_space;
        cspfarendtotalsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cspFarEndTotalUASs")
    {
        cspfarendtotaluass = value;
        cspfarendtotaluass.value_namespace = name_space;
        cspfarendtotaluass.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSonetMib::Cspfarendtotaltable::Cspfarendtotalentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cspFarEndTotalCVs")
    {
        cspfarendtotalcvs.yfilter = yfilter;
    }
    if(value_path == "cspFarEndTotalESs")
    {
        cspfarendtotaless.yfilter = yfilter;
    }
    if(value_path == "cspFarEndTotalSESs")
    {
        cspfarendtotalsess.yfilter = yfilter;
    }
    if(value_path == "cspFarEndTotalUASs")
    {
        cspfarendtotaluass.yfilter = yfilter;
    }
}

bool CiscoSonetMib::Cspfarendtotaltable::Cspfarendtotalentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cspFarEndTotalCVs" || name == "cspFarEndTotalESs" || name == "cspFarEndTotalSESs" || name == "cspFarEndTotalUASs")
        return true;
    return false;
}

CiscoSonetMib::Csptracetable::Csptracetable()
{
    yang_name = "cspTraceTable"; yang_parent_name = "CISCO-SONET-MIB";
}

CiscoSonetMib::Csptracetable::~Csptracetable()
{
}

bool CiscoSonetMib::Csptracetable::has_data() const
{
    for (std::size_t index=0; index<csptraceentry.size(); index++)
    {
        if(csptraceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSonetMib::Csptracetable::has_operation() const
{
    for (std::size_t index=0; index<csptraceentry.size(); index++)
    {
        if(csptraceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoSonetMib::Csptracetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cspTraceTable";

    return path_buffer.str();

}

const EntityPath CiscoSonetMib::Csptracetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSonetMib::Csptracetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cspTraceEntry")
    {
        for(auto const & c : csptraceentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSonetMib::Csptracetable::Csptraceentry>();
        c->parent = this;
        csptraceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSonetMib::Csptracetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csptraceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSonetMib::Csptracetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoSonetMib::Csptracetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoSonetMib::Csptracetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cspTraceEntry")
        return true;
    return false;
}

CiscoSonetMib::Csptracetable::Csptraceentry::Csptraceentry()
    :
    ifindex{YType::str, "ifIndex"},
    csptracefailure{YType::boolean, "cspTraceFailure"},
    csptracereceived{YType::str, "cspTraceReceived"},
    csptracetoexpect{YType::str, "cspTraceToExpect"},
    csptracetotransmit{YType::str, "cspTraceToTransmit"}
{
    yang_name = "cspTraceEntry"; yang_parent_name = "cspTraceTable";
}

CiscoSonetMib::Csptracetable::Csptraceentry::~Csptraceentry()
{
}

bool CiscoSonetMib::Csptracetable::Csptraceentry::has_data() const
{
    return ifindex.is_set
	|| csptracefailure.is_set
	|| csptracereceived.is_set
	|| csptracetoexpect.is_set
	|| csptracetotransmit.is_set;
}

bool CiscoSonetMib::Csptracetable::Csptraceentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(csptracefailure.yfilter)
	|| ydk::is_set(csptracereceived.yfilter)
	|| ydk::is_set(csptracetoexpect.yfilter)
	|| ydk::is_set(csptracetotransmit.yfilter);
}

std::string CiscoSonetMib::Csptracetable::Csptraceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cspTraceEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSonetMib::Csptracetable::Csptraceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/cspTraceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (csptracefailure.is_set || is_set(csptracefailure.yfilter)) leaf_name_data.push_back(csptracefailure.get_name_leafdata());
    if (csptracereceived.is_set || is_set(csptracereceived.yfilter)) leaf_name_data.push_back(csptracereceived.get_name_leafdata());
    if (csptracetoexpect.is_set || is_set(csptracetoexpect.yfilter)) leaf_name_data.push_back(csptracetoexpect.get_name_leafdata());
    if (csptracetotransmit.is_set || is_set(csptracetotransmit.yfilter)) leaf_name_data.push_back(csptracetotransmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSonetMib::Csptracetable::Csptraceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSonetMib::Csptracetable::Csptraceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSonetMib::Csptracetable::Csptraceentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cspTraceFailure")
    {
        csptracefailure = value;
        csptracefailure.value_namespace = name_space;
        csptracefailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cspTraceReceived")
    {
        csptracereceived = value;
        csptracereceived.value_namespace = name_space;
        csptracereceived.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cspTraceToExpect")
    {
        csptracetoexpect = value;
        csptracetoexpect.value_namespace = name_space;
        csptracetoexpect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cspTraceToTransmit")
    {
        csptracetotransmit = value;
        csptracetotransmit.value_namespace = name_space;
        csptracetotransmit.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSonetMib::Csptracetable::Csptraceentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cspTraceFailure")
    {
        csptracefailure.yfilter = yfilter;
    }
    if(value_path == "cspTraceReceived")
    {
        csptracereceived.yfilter = yfilter;
    }
    if(value_path == "cspTraceToExpect")
    {
        csptracetoexpect.yfilter = yfilter;
    }
    if(value_path == "cspTraceToTransmit")
    {
        csptracetotransmit.yfilter = yfilter;
    }
}

bool CiscoSonetMib::Csptracetable::Csptraceentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cspTraceFailure" || name == "cspTraceReceived" || name == "cspTraceToExpect" || name == "cspTraceToTransmit")
        return true;
    return false;
}

CiscoSonetMib::Csstatstable::Csstatstable()
{
    yang_name = "csStatsTable"; yang_parent_name = "CISCO-SONET-MIB";
}

CiscoSonetMib::Csstatstable::~Csstatstable()
{
}

bool CiscoSonetMib::Csstatstable::has_data() const
{
    for (std::size_t index=0; index<csstatsentry.size(); index++)
    {
        if(csstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSonetMib::Csstatstable::has_operation() const
{
    for (std::size_t index=0; index<csstatsentry.size(); index++)
    {
        if(csstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoSonetMib::Csstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csStatsTable";

    return path_buffer.str();

}

const EntityPath CiscoSonetMib::Csstatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSonetMib::Csstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csStatsEntry")
    {
        for(auto const & c : csstatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSonetMib::Csstatstable::Csstatsentry>();
        c->parent = this;
        csstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSonetMib::Csstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSonetMib::Csstatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoSonetMib::Csstatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoSonetMib::Csstatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csStatsEntry")
        return true;
    return false;
}

CiscoSonetMib::Csstatstable::Csstatsentry::Csstatsentry()
    :
    ifindex{YType::str, "ifIndex"},
    cslaiss{YType::uint32, "cslAISs"},
    cslrfis{YType::uint32, "cslRFIs"},
    cspaiss{YType::uint32, "cspAISs"},
    csprfis{YType::uint32, "cspRFIs"},
    csslofs{YType::uint32, "cssLOFs"},
    cssloss{YType::uint32, "cssLOSs"}
{
    yang_name = "csStatsEntry"; yang_parent_name = "csStatsTable";
}

CiscoSonetMib::Csstatstable::Csstatsentry::~Csstatsentry()
{
}

bool CiscoSonetMib::Csstatstable::Csstatsentry::has_data() const
{
    return ifindex.is_set
	|| cslaiss.is_set
	|| cslrfis.is_set
	|| cspaiss.is_set
	|| csprfis.is_set
	|| csslofs.is_set
	|| cssloss.is_set;
}

bool CiscoSonetMib::Csstatstable::Csstatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cslaiss.yfilter)
	|| ydk::is_set(cslrfis.yfilter)
	|| ydk::is_set(cspaiss.yfilter)
	|| ydk::is_set(csprfis.yfilter)
	|| ydk::is_set(csslofs.yfilter)
	|| ydk::is_set(cssloss.yfilter);
}

std::string CiscoSonetMib::Csstatstable::Csstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csStatsEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSonetMib::Csstatstable::Csstatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/csStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cslaiss.is_set || is_set(cslaiss.yfilter)) leaf_name_data.push_back(cslaiss.get_name_leafdata());
    if (cslrfis.is_set || is_set(cslrfis.yfilter)) leaf_name_data.push_back(cslrfis.get_name_leafdata());
    if (cspaiss.is_set || is_set(cspaiss.yfilter)) leaf_name_data.push_back(cspaiss.get_name_leafdata());
    if (csprfis.is_set || is_set(csprfis.yfilter)) leaf_name_data.push_back(csprfis.get_name_leafdata());
    if (csslofs.is_set || is_set(csslofs.yfilter)) leaf_name_data.push_back(csslofs.get_name_leafdata());
    if (cssloss.is_set || is_set(cssloss.yfilter)) leaf_name_data.push_back(cssloss.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSonetMib::Csstatstable::Csstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSonetMib::Csstatstable::Csstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSonetMib::Csstatstable::Csstatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cslAISs")
    {
        cslaiss = value;
        cslaiss.value_namespace = name_space;
        cslaiss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cslRFIs")
    {
        cslrfis = value;
        cslrfis.value_namespace = name_space;
        cslrfis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cspAISs")
    {
        cspaiss = value;
        cspaiss.value_namespace = name_space;
        cspaiss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cspRFIs")
    {
        csprfis = value;
        csprfis.value_namespace = name_space;
        csprfis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cssLOFs")
    {
        csslofs = value;
        csslofs.value_namespace = name_space;
        csslofs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cssLOSs")
    {
        cssloss = value;
        cssloss.value_namespace = name_space;
        cssloss.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSonetMib::Csstatstable::Csstatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cslAISs")
    {
        cslaiss.yfilter = yfilter;
    }
    if(value_path == "cslRFIs")
    {
        cslrfis.yfilter = yfilter;
    }
    if(value_path == "cspAISs")
    {
        cspaiss.yfilter = yfilter;
    }
    if(value_path == "cspRFIs")
    {
        csprfis.yfilter = yfilter;
    }
    if(value_path == "cssLOFs")
    {
        csslofs.yfilter = yfilter;
    }
    if(value_path == "cssLOSs")
    {
        cssloss.yfilter = yfilter;
    }
}

bool CiscoSonetMib::Csstatstable::Csstatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cslAISs" || name == "cslRFIs" || name == "cspAISs" || name == "cspRFIs" || name == "cssLOFs" || name == "cssLOSs")
        return true;
    return false;
}

CiscoSonetMib::Csau4Tug3Configtable::Csau4Tug3Configtable()
{
    yang_name = "csAu4Tug3ConfigTable"; yang_parent_name = "CISCO-SONET-MIB";
}

CiscoSonetMib::Csau4Tug3Configtable::~Csau4Tug3Configtable()
{
}

bool CiscoSonetMib::Csau4Tug3Configtable::has_data() const
{
    for (std::size_t index=0; index<csau4tug3configentry.size(); index++)
    {
        if(csau4tug3configentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSonetMib::Csau4Tug3Configtable::has_operation() const
{
    for (std::size_t index=0; index<csau4tug3configentry.size(); index++)
    {
        if(csau4tug3configentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoSonetMib::Csau4Tug3Configtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csAu4Tug3ConfigTable";

    return path_buffer.str();

}

const EntityPath CiscoSonetMib::Csau4Tug3Configtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSonetMib::Csau4Tug3Configtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csAu4Tug3ConfigEntry")
    {
        for(auto const & c : csau4tug3configentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSonetMib::Csau4Tug3Configtable::Csau4Tug3Configentry>();
        c->parent = this;
        csau4tug3configentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSonetMib::Csau4Tug3Configtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csau4tug3configentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSonetMib::Csau4Tug3Configtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoSonetMib::Csau4Tug3Configtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoSonetMib::Csau4Tug3Configtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csAu4Tug3ConfigEntry")
        return true;
    return false;
}

CiscoSonetMib::Csau4Tug3Configtable::Csau4Tug3Configentry::Csau4Tug3Configentry()
    :
    ifindex{YType::str, "ifIndex"},
    csau4tug3{YType::int32, "csAu4Tug3"},
    csau4tug3payload{YType::enumeration, "csAu4Tug3Payload"}
{
    yang_name = "csAu4Tug3ConfigEntry"; yang_parent_name = "csAu4Tug3ConfigTable";
}

CiscoSonetMib::Csau4Tug3Configtable::Csau4Tug3Configentry::~Csau4Tug3Configentry()
{
}

bool CiscoSonetMib::Csau4Tug3Configtable::Csau4Tug3Configentry::has_data() const
{
    return ifindex.is_set
	|| csau4tug3.is_set
	|| csau4tug3payload.is_set;
}

bool CiscoSonetMib::Csau4Tug3Configtable::Csau4Tug3Configentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(csau4tug3.yfilter)
	|| ydk::is_set(csau4tug3payload.yfilter);
}

std::string CiscoSonetMib::Csau4Tug3Configtable::Csau4Tug3Configentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csAu4Tug3ConfigEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[csAu4Tug3='" <<csau4tug3 <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSonetMib::Csau4Tug3Configtable::Csau4Tug3Configentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/csAu4Tug3ConfigTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (csau4tug3.is_set || is_set(csau4tug3.yfilter)) leaf_name_data.push_back(csau4tug3.get_name_leafdata());
    if (csau4tug3payload.is_set || is_set(csau4tug3payload.yfilter)) leaf_name_data.push_back(csau4tug3payload.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSonetMib::Csau4Tug3Configtable::Csau4Tug3Configentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSonetMib::Csau4Tug3Configtable::Csau4Tug3Configentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSonetMib::Csau4Tug3Configtable::Csau4Tug3Configentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csAu4Tug3")
    {
        csau4tug3 = value;
        csau4tug3.value_namespace = name_space;
        csau4tug3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csAu4Tug3Payload")
    {
        csau4tug3payload = value;
        csau4tug3payload.value_namespace = name_space;
        csau4tug3payload.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSonetMib::Csau4Tug3Configtable::Csau4Tug3Configentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "csAu4Tug3")
    {
        csau4tug3.yfilter = yfilter;
    }
    if(value_path == "csAu4Tug3Payload")
    {
        csau4tug3payload.yfilter = yfilter;
    }
}

bool CiscoSonetMib::Csau4Tug3Configtable::Csau4Tug3Configentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "csAu4Tug3" || name == "csAu4Tug3Payload")
        return true;
    return false;
}

const Enum::YLeaf Csapslineswitchreason::csApsOther {1, "csApsOther"};
const Enum::YLeaf Csapslineswitchreason::csApsRevertive {2, "csApsRevertive"};
const Enum::YLeaf Csapslineswitchreason::csApsManual {3, "csApsManual"};
const Enum::YLeaf Csapslineswitchreason::csApsSignalDefectLow {4, "csApsSignalDefectLow"};
const Enum::YLeaf Csapslineswitchreason::csApsSignalDefectHigh {5, "csApsSignalDefectHigh"};
const Enum::YLeaf Csapslineswitchreason::csApsSignalFailureLow {6, "csApsSignalFailureLow"};
const Enum::YLeaf Csapslineswitchreason::csApsSignalFailureHigh {7, "csApsSignalFailureHigh"};
const Enum::YLeaf Csapslineswitchreason::csApsForceSwitch {8, "csApsForceSwitch"};
const Enum::YLeaf Csapslineswitchreason::csApsLockOut {9, "csApsLockOut"};
const Enum::YLeaf Csapslineswitchreason::csApsNoSwitch {10, "csApsNoSwitch"};

const Enum::YLeaf Csapslinefailurecode::csApsChannelMismatch {1, "csApsChannelMismatch"};
const Enum::YLeaf Csapslinefailurecode::csApsProtectionByteFail {2, "csApsProtectionByteFail"};
const Enum::YLeaf Csapslinefailurecode::csApsFEProtectionFailure {3, "csApsFEProtectionFailure"};
const Enum::YLeaf Csapslinefailurecode::csApsModeMismatch {4, "csApsModeMismatch"};

const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::Csconfigloopbacktype::noLoopback {1, "noLoopback"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::Csconfigloopbacktype::lineLocal {2, "lineLocal"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::Csconfigloopbacktype::lineRemote {3, "lineRemote"};

const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::Csconfigxmtclocksource::loopTiming {1, "loopTiming"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::Csconfigxmtclocksource::localTiming {2, "localTiming"};

const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::Csconfigframescramble::disabled {1, "disabled"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::Csconfigframescramble::enabled {2, "enabled"};

const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::Csconfigtype::sonetSts3c {1, "sonetSts3c"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::Csconfigtype::sonetStm1 {2, "sonetStm1"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::Csconfigtype::sonetSts12c {3, "sonetSts12c"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::Csconfigtype::sonetStm4 {4, "sonetStm4"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::Csconfigtype::sonetSts48c {5, "sonetSts48c"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::Csconfigtype::sonetStm16 {6, "sonetStm16"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::Csconfigtype::sonetSts192c {7, "sonetSts192c"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::Csconfigtype::sonetStm64 {8, "sonetStm64"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::Csconfigtype::sonetSts3 {9, "sonetSts3"};

const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::Csconfigrdivtype::onebit {1, "onebit"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::Csconfigrdivtype::threebit {3, "threebit"};

const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::Csconfigrdiptype::onebit {1, "onebit"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::Csconfigrdiptype::threebit {3, "threebit"};

const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::Cstributarytype::vt15vc11 {1, "vt15vc11"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::Cstributarytype::vt2vc12 {2, "vt2vc12"};

const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::Cstributarymappingtype::asynchronous {1, "asynchronous"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::Cstributarymappingtype::byteSynchronous {2, "byteSynchronous"};

const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::Cstributaryframingtype::notApplicable {1, "notApplicable"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::Cstributaryframingtype::dsx1D4 {2, "dsx1D4"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::Cstributaryframingtype::dsx1ESF {3, "dsx1ESF"};

const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::Cssignallingtransportmode::notApplicable {1, "notApplicable"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::Cssignallingtransportmode::signallingTransferMode {2, "signallingTransferMode"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::Cssignallingtransportmode::clearMode {3, "clearMode"};

const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::Cstributarygroupingtype::notApplicable {1, "notApplicable"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::Cstributarygroupingtype::au3Grouping {2, "au3Grouping"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::Cstributarygroupingtype::au4Grouping {3, "au4Grouping"};

const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapsenable::csApsDisabled {1, "csApsDisabled"};
const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapsenable::csApsEnabled {2, "csApsEnabled"};

const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapsarchmode::onePlusOne {1, "onePlusOne"};
const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapsarchmode::oneToOne {2, "oneToOne"};
const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapsarchmode::anexBOnePlusOne {3, "anexBOnePlusOne"};
const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapsarchmode::ycableOnePlusOneNok1k2 {4, "ycableOnePlusOneNok1k2"};
const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapsarchmode::straightOnePlusOneNok1k2 {5, "straightOnePlusOneNok1k2"};

const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapsactiveline::csApsWorkingLine {1, "csApsWorkingLine"};
const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapsactiveline::csApsProtectionLine {2, "csApsProtectionLine"};
const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapsactiveline::csApsNone {3, "csApsNone"};

const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapsdirection::uniDirectional {1, "uniDirectional"};
const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapsdirection::biDirectional {2, "biDirectional"};

const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapsrevertive::nonrevertive {1, "nonrevertive"};
const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapsrevertive::revertive {2, "revertive"};

const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapsdirectionoperational::uniDirectional {1, "uniDirectional"};
const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapsdirectionoperational::biDirectional {2, "biDirectional"};

const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapsarchmodeoperational::onePlusOne {1, "onePlusOne"};
const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapsarchmodeoperational::oneToOne {2, "oneToOne"};
const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapsarchmodeoperational::anexBOnePlusOne {3, "anexBOnePlusOne"};
const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapsarchmodeoperational::ycableOnePlusOneNok1k2 {4, "ycableOnePlusOneNok1k2"};
const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapsarchmodeoperational::straightOnePlusOneNok1k2 {5, "straightOnePlusOneNok1k2"};

const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapschannelprotocol::bellcore {1, "bellcore"};
const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapschannelprotocol::itu {2, "itu"};

const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapsprimarysection::workingSection1 {1, "workingSection1"};
const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapsprimarysection::workingSection2 {2, "workingSection2"};
const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::Csapsprimarysection::none {3, "none"};

const Enum::YLeaf CiscoSonetMib::Csau4Tug3Configtable::Csau4Tug3Configentry::Csau4Tug3Payload::other {1, "other"};
const Enum::YLeaf CiscoSonetMib::Csau4Tug3Configtable::Csau4Tug3Configentry::Csau4Tug3Payload::vc11 {2, "vc11"};
const Enum::YLeaf CiscoSonetMib::Csau4Tug3Configtable::Csau4Tug3Configentry::Csau4Tug3Payload::vc12 {3, "vc12"};
const Enum::YLeaf CiscoSonetMib::Csau4Tug3Configtable::Csau4Tug3Configentry::Csau4Tug3Payload::tu3ds3 {4, "tu3ds3"};
const Enum::YLeaf CiscoSonetMib::Csau4Tug3Configtable::Csau4Tug3Configentry::Csau4Tug3Payload::tu3e3 {5, "tu3e3"};


}
}
