
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_SONET_MIB.hpp"

namespace ydk {
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
    return is_set(operation)
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

void CiscoSonetMib::set_value(const std::string & value_path, std::string value)
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
    return is_set(operation)
	|| is_set(csapslinefailurecode.operation)
	|| is_set(csapslineswitchreason.operation);
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

    if (csapslinefailurecode.is_set || is_set(csapslinefailurecode.operation)) leaf_name_data.push_back(csapslinefailurecode.get_name_leafdata());
    if (csapslineswitchreason.is_set || is_set(csapslineswitchreason.operation)) leaf_name_data.push_back(csapslineswitchreason.get_name_leafdata());


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

void CiscoSonetMib::Csapsconfig::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "csApsLineFailureCode")
    {
        csapslinefailurecode = value;
    }
    if(value_path == "csApsLineSwitchReason")
    {
        csapslineswitchreason = value;
    }
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
    return is_set(operation)
	|| is_set(csnotificationsenabled.operation);
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

    if (csnotificationsenabled.is_set || is_set(csnotificationsenabled.operation)) leaf_name_data.push_back(csnotificationsenabled.get_name_leafdata());


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

void CiscoSonetMib::Csnotifications::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "csNotificationsEnabled")
    {
        csnotificationsenabled = value;
    }
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
    return is_set(operation);
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

void CiscoSonetMib::Csconfigtable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(csconfigframescramble.operation)
	|| is_set(csconfigloopbacktype.operation)
	|| is_set(csconfigrdiptype.operation)
	|| is_set(csconfigrdivtype.operation)
	|| is_set(csconfigtype.operation)
	|| is_set(csconfigxmtclocksource.operation)
	|| is_set(cssignallingtransportmode.operation)
	|| is_set(cstributaryframingtype.operation)
	|| is_set(cstributarygroupingtype.operation)
	|| is_set(cstributarymappingtype.operation)
	|| is_set(cstributarytype.operation);
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

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (csconfigframescramble.is_set || is_set(csconfigframescramble.operation)) leaf_name_data.push_back(csconfigframescramble.get_name_leafdata());
    if (csconfigloopbacktype.is_set || is_set(csconfigloopbacktype.operation)) leaf_name_data.push_back(csconfigloopbacktype.get_name_leafdata());
    if (csconfigrdiptype.is_set || is_set(csconfigrdiptype.operation)) leaf_name_data.push_back(csconfigrdiptype.get_name_leafdata());
    if (csconfigrdivtype.is_set || is_set(csconfigrdivtype.operation)) leaf_name_data.push_back(csconfigrdivtype.get_name_leafdata());
    if (csconfigtype.is_set || is_set(csconfigtype.operation)) leaf_name_data.push_back(csconfigtype.get_name_leafdata());
    if (csconfigxmtclocksource.is_set || is_set(csconfigxmtclocksource.operation)) leaf_name_data.push_back(csconfigxmtclocksource.get_name_leafdata());
    if (cssignallingtransportmode.is_set || is_set(cssignallingtransportmode.operation)) leaf_name_data.push_back(cssignallingtransportmode.get_name_leafdata());
    if (cstributaryframingtype.is_set || is_set(cstributaryframingtype.operation)) leaf_name_data.push_back(cstributaryframingtype.get_name_leafdata());
    if (cstributarygroupingtype.is_set || is_set(cstributarygroupingtype.operation)) leaf_name_data.push_back(cstributarygroupingtype.get_name_leafdata());
    if (cstributarymappingtype.is_set || is_set(cstributarymappingtype.operation)) leaf_name_data.push_back(cstributarymappingtype.get_name_leafdata());
    if (cstributarytype.is_set || is_set(cstributarytype.operation)) leaf_name_data.push_back(cstributarytype.get_name_leafdata());


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

void CiscoSonetMib::Csconfigtable::Csconfigentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "csConfigFrameScramble")
    {
        csconfigframescramble = value;
    }
    if(value_path == "csConfigLoopbackType")
    {
        csconfigloopbacktype = value;
    }
    if(value_path == "csConfigRDIPType")
    {
        csconfigrdiptype = value;
    }
    if(value_path == "csConfigRDIVType")
    {
        csconfigrdivtype = value;
    }
    if(value_path == "csConfigType")
    {
        csconfigtype = value;
    }
    if(value_path == "csConfigXmtClockSource")
    {
        csconfigxmtclocksource = value;
    }
    if(value_path == "csSignallingTransportMode")
    {
        cssignallingtransportmode = value;
    }
    if(value_path == "csTributaryFramingType")
    {
        cstributaryframingtype = value;
    }
    if(value_path == "csTributaryGroupingType")
    {
        cstributarygroupingtype = value;
    }
    if(value_path == "csTributaryMappingType")
    {
        cstributarymappingtype = value;
    }
    if(value_path == "csTributaryType")
    {
        cstributarytype = value;
    }
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
    return is_set(operation);
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

void CiscoSonetMib::Csapsconfigtable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(csapsworkingindex.operation)
	|| is_set(csapsactiveline.operation)
	|| is_set(csapsarchmode.operation)
	|| is_set(csapsarchmodeoperational.operation)
	|| is_set(csapschannelprotocol.operation)
	|| is_set(csapsdirection.operation)
	|| is_set(csapsdirectionoperational.operation)
	|| is_set(csapsenable.operation)
	|| is_set(csapsfailurestatus.operation)
	|| is_set(csapsprimarysection.operation)
	|| is_set(csapsprotectionindex.operation)
	|| is_set(csapsrevertive.operation)
	|| is_set(csapssigdegradeber.operation)
	|| is_set(csapssigfaultber.operation)
	|| is_set(csapsswitchreason.operation)
	|| is_set(csapswaittorestore.operation);
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

    if (csapsworkingindex.is_set || is_set(csapsworkingindex.operation)) leaf_name_data.push_back(csapsworkingindex.get_name_leafdata());
    if (csapsactiveline.is_set || is_set(csapsactiveline.operation)) leaf_name_data.push_back(csapsactiveline.get_name_leafdata());
    if (csapsarchmode.is_set || is_set(csapsarchmode.operation)) leaf_name_data.push_back(csapsarchmode.get_name_leafdata());
    if (csapsarchmodeoperational.is_set || is_set(csapsarchmodeoperational.operation)) leaf_name_data.push_back(csapsarchmodeoperational.get_name_leafdata());
    if (csapschannelprotocol.is_set || is_set(csapschannelprotocol.operation)) leaf_name_data.push_back(csapschannelprotocol.get_name_leafdata());
    if (csapsdirection.is_set || is_set(csapsdirection.operation)) leaf_name_data.push_back(csapsdirection.get_name_leafdata());
    if (csapsdirectionoperational.is_set || is_set(csapsdirectionoperational.operation)) leaf_name_data.push_back(csapsdirectionoperational.get_name_leafdata());
    if (csapsenable.is_set || is_set(csapsenable.operation)) leaf_name_data.push_back(csapsenable.get_name_leafdata());
    if (csapsfailurestatus.is_set || is_set(csapsfailurestatus.operation)) leaf_name_data.push_back(csapsfailurestatus.get_name_leafdata());
    if (csapsprimarysection.is_set || is_set(csapsprimarysection.operation)) leaf_name_data.push_back(csapsprimarysection.get_name_leafdata());
    if (csapsprotectionindex.is_set || is_set(csapsprotectionindex.operation)) leaf_name_data.push_back(csapsprotectionindex.get_name_leafdata());
    if (csapsrevertive.is_set || is_set(csapsrevertive.operation)) leaf_name_data.push_back(csapsrevertive.get_name_leafdata());
    if (csapssigdegradeber.is_set || is_set(csapssigdegradeber.operation)) leaf_name_data.push_back(csapssigdegradeber.get_name_leafdata());
    if (csapssigfaultber.is_set || is_set(csapssigfaultber.operation)) leaf_name_data.push_back(csapssigfaultber.get_name_leafdata());
    if (csapsswitchreason.is_set || is_set(csapsswitchreason.operation)) leaf_name_data.push_back(csapsswitchreason.get_name_leafdata());
    if (csapswaittorestore.is_set || is_set(csapswaittorestore.operation)) leaf_name_data.push_back(csapswaittorestore.get_name_leafdata());


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

void CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "csApsWorkingIndex")
    {
        csapsworkingindex = value;
    }
    if(value_path == "csApsActiveLine")
    {
        csapsactiveline = value;
    }
    if(value_path == "csApsArchMode")
    {
        csapsarchmode = value;
    }
    if(value_path == "csApsArchModeOperational")
    {
        csapsarchmodeoperational = value;
    }
    if(value_path == "csApsChannelProtocol")
    {
        csapschannelprotocol = value;
    }
    if(value_path == "csApsDirection")
    {
        csapsdirection = value;
    }
    if(value_path == "csApsDirectionOperational")
    {
        csapsdirectionoperational = value;
    }
    if(value_path == "csApsEnable")
    {
        csapsenable = value;
    }
    if(value_path == "csApsFailureStatus")
    {
        csapsfailurestatus[value] = true;
    }
    if(value_path == "csApsPrimarySection")
    {
        csapsprimarysection = value;
    }
    if(value_path == "csApsProtectionIndex")
    {
        csapsprotectionindex = value;
    }
    if(value_path == "csApsRevertive")
    {
        csapsrevertive = value;
    }
    if(value_path == "csApsSigDegradeBER")
    {
        csapssigdegradeber = value;
    }
    if(value_path == "csApsSigFaultBER")
    {
        csapssigfaultber = value;
    }
    if(value_path == "csApsSwitchReason")
    {
        csapsswitchreason = value;
    }
    if(value_path == "csApsWaitToRestore")
    {
        csapswaittorestore = value;
    }
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
    return is_set(operation);
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

void CiscoSonetMib::Csstotaltable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(csstotalcvs.operation)
	|| is_set(csstotaless.operation)
	|| is_set(csstotalsefss.operation)
	|| is_set(csstotalsess.operation);
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

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (csstotalcvs.is_set || is_set(csstotalcvs.operation)) leaf_name_data.push_back(csstotalcvs.get_name_leafdata());
    if (csstotaless.is_set || is_set(csstotaless.operation)) leaf_name_data.push_back(csstotaless.get_name_leafdata());
    if (csstotalsefss.is_set || is_set(csstotalsefss.operation)) leaf_name_data.push_back(csstotalsefss.get_name_leafdata());
    if (csstotalsess.is_set || is_set(csstotalsess.operation)) leaf_name_data.push_back(csstotalsess.get_name_leafdata());


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

void CiscoSonetMib::Csstotaltable::Csstotalentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cssTotalCVs")
    {
        csstotalcvs = value;
    }
    if(value_path == "cssTotalESs")
    {
        csstotaless = value;
    }
    if(value_path == "cssTotalSEFSs")
    {
        csstotalsefss = value;
    }
    if(value_path == "cssTotalSESs")
    {
        csstotalsess = value;
    }
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
    return is_set(operation);
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

void CiscoSonetMib::Csstracetable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(csstracefailure.operation)
	|| is_set(csstracereceived.operation)
	|| is_set(csstracetoexpect.operation)
	|| is_set(csstracetotransmit.operation);
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

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (csstracefailure.is_set || is_set(csstracefailure.operation)) leaf_name_data.push_back(csstracefailure.get_name_leafdata());
    if (csstracereceived.is_set || is_set(csstracereceived.operation)) leaf_name_data.push_back(csstracereceived.get_name_leafdata());
    if (csstracetoexpect.is_set || is_set(csstracetoexpect.operation)) leaf_name_data.push_back(csstracetoexpect.get_name_leafdata());
    if (csstracetotransmit.is_set || is_set(csstracetotransmit.operation)) leaf_name_data.push_back(csstracetotransmit.get_name_leafdata());


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

void CiscoSonetMib::Csstracetable::Csstraceentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cssTraceFailure")
    {
        csstracefailure = value;
    }
    if(value_path == "cssTraceReceived")
    {
        csstracereceived = value;
    }
    if(value_path == "cssTraceToExpect")
    {
        csstracetoexpect = value;
    }
    if(value_path == "cssTraceToTransmit")
    {
        csstracetotransmit = value;
    }
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
    return is_set(operation);
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

void CiscoSonetMib::Csltotaltable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(csltotalcvs.operation)
	|| is_set(csltotaless.operation)
	|| is_set(csltotalsess.operation)
	|| is_set(csltotaluass.operation);
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

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (csltotalcvs.is_set || is_set(csltotalcvs.operation)) leaf_name_data.push_back(csltotalcvs.get_name_leafdata());
    if (csltotaless.is_set || is_set(csltotaless.operation)) leaf_name_data.push_back(csltotaless.get_name_leafdata());
    if (csltotalsess.is_set || is_set(csltotalsess.operation)) leaf_name_data.push_back(csltotalsess.get_name_leafdata());
    if (csltotaluass.is_set || is_set(csltotaluass.operation)) leaf_name_data.push_back(csltotaluass.get_name_leafdata());


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

void CiscoSonetMib::Csltotaltable::Csltotalentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cslTotalCVs")
    {
        csltotalcvs = value;
    }
    if(value_path == "cslTotalESs")
    {
        csltotaless = value;
    }
    if(value_path == "cslTotalSESs")
    {
        csltotalsess = value;
    }
    if(value_path == "cslTotalUASs")
    {
        csltotaluass = value;
    }
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
    return is_set(operation);
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

void CiscoSonetMib::Cslfarendtotaltable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(cslfarendtotalcvs.operation)
	|| is_set(cslfarendtotaless.operation)
	|| is_set(cslfarendtotalsess.operation)
	|| is_set(cslfarendtotaluass.operation);
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

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cslfarendtotalcvs.is_set || is_set(cslfarendtotalcvs.operation)) leaf_name_data.push_back(cslfarendtotalcvs.get_name_leafdata());
    if (cslfarendtotaless.is_set || is_set(cslfarendtotaless.operation)) leaf_name_data.push_back(cslfarendtotaless.get_name_leafdata());
    if (cslfarendtotalsess.is_set || is_set(cslfarendtotalsess.operation)) leaf_name_data.push_back(cslfarendtotalsess.get_name_leafdata());
    if (cslfarendtotaluass.is_set || is_set(cslfarendtotaluass.operation)) leaf_name_data.push_back(cslfarendtotaluass.get_name_leafdata());


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

void CiscoSonetMib::Cslfarendtotaltable::Cslfarendtotalentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cslFarEndTotalCVs")
    {
        cslfarendtotalcvs = value;
    }
    if(value_path == "cslFarEndTotalESs")
    {
        cslfarendtotaless = value;
    }
    if(value_path == "cslFarEndTotalSESs")
    {
        cslfarendtotalsess = value;
    }
    if(value_path == "cslFarEndTotalUASs")
    {
        cslfarendtotaluass = value;
    }
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
    return is_set(operation);
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

void CiscoSonetMib::Csptotaltable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(csptotalcvs.operation)
	|| is_set(csptotaless.operation)
	|| is_set(csptotalsess.operation)
	|| is_set(csptotaluass.operation);
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

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (csptotalcvs.is_set || is_set(csptotalcvs.operation)) leaf_name_data.push_back(csptotalcvs.get_name_leafdata());
    if (csptotaless.is_set || is_set(csptotaless.operation)) leaf_name_data.push_back(csptotaless.get_name_leafdata());
    if (csptotalsess.is_set || is_set(csptotalsess.operation)) leaf_name_data.push_back(csptotalsess.get_name_leafdata());
    if (csptotaluass.is_set || is_set(csptotaluass.operation)) leaf_name_data.push_back(csptotaluass.get_name_leafdata());


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

void CiscoSonetMib::Csptotaltable::Csptotalentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cspTotalCVs")
    {
        csptotalcvs = value;
    }
    if(value_path == "cspTotalESs")
    {
        csptotaless = value;
    }
    if(value_path == "cspTotalSESs")
    {
        csptotalsess = value;
    }
    if(value_path == "cspTotalUASs")
    {
        csptotaluass = value;
    }
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
    return is_set(operation);
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

void CiscoSonetMib::Cspfarendtotaltable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(cspfarendtotalcvs.operation)
	|| is_set(cspfarendtotaless.operation)
	|| is_set(cspfarendtotalsess.operation)
	|| is_set(cspfarendtotaluass.operation);
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

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cspfarendtotalcvs.is_set || is_set(cspfarendtotalcvs.operation)) leaf_name_data.push_back(cspfarendtotalcvs.get_name_leafdata());
    if (cspfarendtotaless.is_set || is_set(cspfarendtotaless.operation)) leaf_name_data.push_back(cspfarendtotaless.get_name_leafdata());
    if (cspfarendtotalsess.is_set || is_set(cspfarendtotalsess.operation)) leaf_name_data.push_back(cspfarendtotalsess.get_name_leafdata());
    if (cspfarendtotaluass.is_set || is_set(cspfarendtotaluass.operation)) leaf_name_data.push_back(cspfarendtotaluass.get_name_leafdata());


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

void CiscoSonetMib::Cspfarendtotaltable::Cspfarendtotalentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cspFarEndTotalCVs")
    {
        cspfarendtotalcvs = value;
    }
    if(value_path == "cspFarEndTotalESs")
    {
        cspfarendtotaless = value;
    }
    if(value_path == "cspFarEndTotalSESs")
    {
        cspfarendtotalsess = value;
    }
    if(value_path == "cspFarEndTotalUASs")
    {
        cspfarendtotaluass = value;
    }
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
    return is_set(operation);
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

void CiscoSonetMib::Csptracetable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(csptracefailure.operation)
	|| is_set(csptracereceived.operation)
	|| is_set(csptracetoexpect.operation)
	|| is_set(csptracetotransmit.operation);
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

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (csptracefailure.is_set || is_set(csptracefailure.operation)) leaf_name_data.push_back(csptracefailure.get_name_leafdata());
    if (csptracereceived.is_set || is_set(csptracereceived.operation)) leaf_name_data.push_back(csptracereceived.get_name_leafdata());
    if (csptracetoexpect.is_set || is_set(csptracetoexpect.operation)) leaf_name_data.push_back(csptracetoexpect.get_name_leafdata());
    if (csptracetotransmit.is_set || is_set(csptracetotransmit.operation)) leaf_name_data.push_back(csptracetotransmit.get_name_leafdata());


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

void CiscoSonetMib::Csptracetable::Csptraceentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cspTraceFailure")
    {
        csptracefailure = value;
    }
    if(value_path == "cspTraceReceived")
    {
        csptracereceived = value;
    }
    if(value_path == "cspTraceToExpect")
    {
        csptracetoexpect = value;
    }
    if(value_path == "cspTraceToTransmit")
    {
        csptracetotransmit = value;
    }
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
    return is_set(operation);
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

void CiscoSonetMib::Csstatstable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(cslaiss.operation)
	|| is_set(cslrfis.operation)
	|| is_set(cspaiss.operation)
	|| is_set(csprfis.operation)
	|| is_set(csslofs.operation)
	|| is_set(cssloss.operation);
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

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cslaiss.is_set || is_set(cslaiss.operation)) leaf_name_data.push_back(cslaiss.get_name_leafdata());
    if (cslrfis.is_set || is_set(cslrfis.operation)) leaf_name_data.push_back(cslrfis.get_name_leafdata());
    if (cspaiss.is_set || is_set(cspaiss.operation)) leaf_name_data.push_back(cspaiss.get_name_leafdata());
    if (csprfis.is_set || is_set(csprfis.operation)) leaf_name_data.push_back(csprfis.get_name_leafdata());
    if (csslofs.is_set || is_set(csslofs.operation)) leaf_name_data.push_back(csslofs.get_name_leafdata());
    if (cssloss.is_set || is_set(cssloss.operation)) leaf_name_data.push_back(cssloss.get_name_leafdata());


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

void CiscoSonetMib::Csstatstable::Csstatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cslAISs")
    {
        cslaiss = value;
    }
    if(value_path == "cslRFIs")
    {
        cslrfis = value;
    }
    if(value_path == "cspAISs")
    {
        cspaiss = value;
    }
    if(value_path == "cspRFIs")
    {
        csprfis = value;
    }
    if(value_path == "cssLOFs")
    {
        csslofs = value;
    }
    if(value_path == "cssLOSs")
    {
        cssloss = value;
    }
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
    return is_set(operation);
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

void CiscoSonetMib::Csau4Tug3Configtable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(csau4tug3.operation)
	|| is_set(csau4tug3payload.operation);
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

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (csau4tug3.is_set || is_set(csau4tug3.operation)) leaf_name_data.push_back(csau4tug3.get_name_leafdata());
    if (csau4tug3payload.is_set || is_set(csau4tug3payload.operation)) leaf_name_data.push_back(csau4tug3payload.get_name_leafdata());


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

void CiscoSonetMib::Csau4Tug3Configtable::Csau4Tug3Configentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "csAu4Tug3")
    {
        csau4tug3 = value;
    }
    if(value_path == "csAu4Tug3Payload")
    {
        csau4tug3payload = value;
    }
}

const Enum::YLeaf CsapslineswitchreasonEnum::csApsOther {1, "csApsOther"};
const Enum::YLeaf CsapslineswitchreasonEnum::csApsRevertive {2, "csApsRevertive"};
const Enum::YLeaf CsapslineswitchreasonEnum::csApsManual {3, "csApsManual"};
const Enum::YLeaf CsapslineswitchreasonEnum::csApsSignalDefectLow {4, "csApsSignalDefectLow"};
const Enum::YLeaf CsapslineswitchreasonEnum::csApsSignalDefectHigh {5, "csApsSignalDefectHigh"};
const Enum::YLeaf CsapslineswitchreasonEnum::csApsSignalFailureLow {6, "csApsSignalFailureLow"};
const Enum::YLeaf CsapslineswitchreasonEnum::csApsSignalFailureHigh {7, "csApsSignalFailureHigh"};
const Enum::YLeaf CsapslineswitchreasonEnum::csApsForceSwitch {8, "csApsForceSwitch"};
const Enum::YLeaf CsapslineswitchreasonEnum::csApsLockOut {9, "csApsLockOut"};
const Enum::YLeaf CsapslineswitchreasonEnum::csApsNoSwitch {10, "csApsNoSwitch"};

const Enum::YLeaf CsapslinefailurecodeEnum::csApsChannelMismatch {1, "csApsChannelMismatch"};
const Enum::YLeaf CsapslinefailurecodeEnum::csApsProtectionByteFail {2, "csApsProtectionByteFail"};
const Enum::YLeaf CsapslinefailurecodeEnum::csApsFEProtectionFailure {3, "csApsFEProtectionFailure"};
const Enum::YLeaf CsapslinefailurecodeEnum::csApsModeMismatch {4, "csApsModeMismatch"};

const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::CsconfigloopbacktypeEnum::noLoopback {1, "noLoopback"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::CsconfigloopbacktypeEnum::lineLocal {2, "lineLocal"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::CsconfigloopbacktypeEnum::lineRemote {3, "lineRemote"};

const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::CsconfigxmtclocksourceEnum::loopTiming {1, "loopTiming"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::CsconfigxmtclocksourceEnum::localTiming {2, "localTiming"};

const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::CsconfigframescrambleEnum::disabled {1, "disabled"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::CsconfigframescrambleEnum::enabled {2, "enabled"};

const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::CsconfigtypeEnum::sonetSts3c {1, "sonetSts3c"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::CsconfigtypeEnum::sonetStm1 {2, "sonetStm1"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::CsconfigtypeEnum::sonetSts12c {3, "sonetSts12c"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::CsconfigtypeEnum::sonetStm4 {4, "sonetStm4"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::CsconfigtypeEnum::sonetSts48c {5, "sonetSts48c"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::CsconfigtypeEnum::sonetStm16 {6, "sonetStm16"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::CsconfigtypeEnum::sonetSts192c {7, "sonetSts192c"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::CsconfigtypeEnum::sonetStm64 {8, "sonetStm64"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::CsconfigtypeEnum::sonetSts3 {9, "sonetSts3"};

const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::CsconfigrdivtypeEnum::onebit {1, "onebit"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::CsconfigrdivtypeEnum::threebit {3, "threebit"};

const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::CsconfigrdiptypeEnum::onebit {1, "onebit"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::CsconfigrdiptypeEnum::threebit {3, "threebit"};

const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::CstributarytypeEnum::vt15vc11 {1, "vt15vc11"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::CstributarytypeEnum::vt2vc12 {2, "vt2vc12"};

const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::CstributarymappingtypeEnum::asynchronous {1, "asynchronous"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::CstributarymappingtypeEnum::byteSynchronous {2, "byteSynchronous"};

const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::CstributaryframingtypeEnum::notApplicable {1, "notApplicable"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::CstributaryframingtypeEnum::dsx1D4 {2, "dsx1D4"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::CstributaryframingtypeEnum::dsx1ESF {3, "dsx1ESF"};

const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::CssignallingtransportmodeEnum::notApplicable {1, "notApplicable"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::CssignallingtransportmodeEnum::signallingTransferMode {2, "signallingTransferMode"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::CssignallingtransportmodeEnum::clearMode {3, "clearMode"};

const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::CstributarygroupingtypeEnum::notApplicable {1, "notApplicable"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::CstributarygroupingtypeEnum::au3Grouping {2, "au3Grouping"};
const Enum::YLeaf CiscoSonetMib::Csconfigtable::Csconfigentry::CstributarygroupingtypeEnum::au4Grouping {3, "au4Grouping"};

const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::CsapsenableEnum::csApsDisabled {1, "csApsDisabled"};
const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::CsapsenableEnum::csApsEnabled {2, "csApsEnabled"};

const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::CsapsarchmodeEnum::onePlusOne {1, "onePlusOne"};
const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::CsapsarchmodeEnum::oneToOne {2, "oneToOne"};
const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::CsapsarchmodeEnum::anexBOnePlusOne {3, "anexBOnePlusOne"};
const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::CsapsarchmodeEnum::ycableOnePlusOneNok1k2 {4, "ycableOnePlusOneNok1k2"};
const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::CsapsarchmodeEnum::straightOnePlusOneNok1k2 {5, "straightOnePlusOneNok1k2"};

const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::CsapsactivelineEnum::csApsWorkingLine {1, "csApsWorkingLine"};
const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::CsapsactivelineEnum::csApsProtectionLine {2, "csApsProtectionLine"};
const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::CsapsactivelineEnum::csApsNone {3, "csApsNone"};

const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::CsapsdirectionEnum::uniDirectional {1, "uniDirectional"};
const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::CsapsdirectionEnum::biDirectional {2, "biDirectional"};

const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::CsapsrevertiveEnum::nonrevertive {1, "nonrevertive"};
const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::CsapsrevertiveEnum::revertive {2, "revertive"};

const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::CsapsdirectionoperationalEnum::uniDirectional {1, "uniDirectional"};
const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::CsapsdirectionoperationalEnum::biDirectional {2, "biDirectional"};

const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::CsapsarchmodeoperationalEnum::onePlusOne {1, "onePlusOne"};
const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::CsapsarchmodeoperationalEnum::oneToOne {2, "oneToOne"};
const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::CsapsarchmodeoperationalEnum::anexBOnePlusOne {3, "anexBOnePlusOne"};
const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::CsapsarchmodeoperationalEnum::ycableOnePlusOneNok1k2 {4, "ycableOnePlusOneNok1k2"};
const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::CsapsarchmodeoperationalEnum::straightOnePlusOneNok1k2 {5, "straightOnePlusOneNok1k2"};

const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::CsapschannelprotocolEnum::bellcore {1, "bellcore"};
const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::CsapschannelprotocolEnum::itu {2, "itu"};

const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::CsapsprimarysectionEnum::workingSection1 {1, "workingSection1"};
const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::CsapsprimarysectionEnum::workingSection2 {2, "workingSection2"};
const Enum::YLeaf CiscoSonetMib::Csapsconfigtable::Csapsconfigentry::CsapsprimarysectionEnum::none {3, "none"};

const Enum::YLeaf CiscoSonetMib::Csau4Tug3Configtable::Csau4Tug3Configentry::Csau4Tug3PayloadEnum::other {1, "other"};
const Enum::YLeaf CiscoSonetMib::Csau4Tug3Configtable::Csau4Tug3Configentry::Csau4Tug3PayloadEnum::vc11 {2, "vc11"};
const Enum::YLeaf CiscoSonetMib::Csau4Tug3Configtable::Csau4Tug3Configentry::Csau4Tug3PayloadEnum::vc12 {3, "vc12"};
const Enum::YLeaf CiscoSonetMib::Csau4Tug3Configtable::Csau4Tug3Configentry::Csau4Tug3PayloadEnum::tu3ds3 {4, "tu3ds3"};
const Enum::YLeaf CiscoSonetMib::Csau4Tug3Configtable::Csau4Tug3Configentry::Csau4Tug3PayloadEnum::tu3e3 {5, "tu3e3"};


}
}

