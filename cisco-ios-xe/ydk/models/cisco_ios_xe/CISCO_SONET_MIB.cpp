
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_SONET_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_SONET_MIB {

CISCOSONETMIB::CISCOSONETMIB()
    :
    csapsconfig(std::make_shared<CISCOSONETMIB::CsApsConfig>())
    , csnotifications(std::make_shared<CISCOSONETMIB::CsNotifications>())
    , csconfigtable(std::make_shared<CISCOSONETMIB::CsConfigTable>())
    , csapsconfigtable(std::make_shared<CISCOSONETMIB::CsApsConfigTable>())
    , csstotaltable(std::make_shared<CISCOSONETMIB::CssTotalTable>())
    , csstracetable(std::make_shared<CISCOSONETMIB::CssTraceTable>())
    , csltotaltable(std::make_shared<CISCOSONETMIB::CslTotalTable>())
    , cslfarendtotaltable(std::make_shared<CISCOSONETMIB::CslFarEndTotalTable>())
    , csptotaltable(std::make_shared<CISCOSONETMIB::CspTotalTable>())
    , cspfarendtotaltable(std::make_shared<CISCOSONETMIB::CspFarEndTotalTable>())
    , csptracetable(std::make_shared<CISCOSONETMIB::CspTraceTable>())
    , csstatstable(std::make_shared<CISCOSONETMIB::CsStatsTable>())
    , csau4tug3configtable(std::make_shared<CISCOSONETMIB::CsAu4Tug3ConfigTable>())
{
    csapsconfig->parent = this;
    csnotifications->parent = this;
    csconfigtable->parent = this;
    csapsconfigtable->parent = this;
    csstotaltable->parent = this;
    csstracetable->parent = this;
    csltotaltable->parent = this;
    cslfarendtotaltable->parent = this;
    csptotaltable->parent = this;
    cspfarendtotaltable->parent = this;
    csptracetable->parent = this;
    csstatstable->parent = this;
    csau4tug3configtable->parent = this;

    yang_name = "CISCO-SONET-MIB"; yang_parent_name = "CISCO-SONET-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOSONETMIB::~CISCOSONETMIB()
{
}

bool CISCOSONETMIB::has_data() const
{
    if (is_presence_container) return true;
    return (csapsconfig !=  nullptr && csapsconfig->has_data())
	|| (csnotifications !=  nullptr && csnotifications->has_data())
	|| (csconfigtable !=  nullptr && csconfigtable->has_data())
	|| (csapsconfigtable !=  nullptr && csapsconfigtable->has_data())
	|| (csstotaltable !=  nullptr && csstotaltable->has_data())
	|| (csstracetable !=  nullptr && csstracetable->has_data())
	|| (csltotaltable !=  nullptr && csltotaltable->has_data())
	|| (cslfarendtotaltable !=  nullptr && cslfarendtotaltable->has_data())
	|| (csptotaltable !=  nullptr && csptotaltable->has_data())
	|| (cspfarendtotaltable !=  nullptr && cspfarendtotaltable->has_data())
	|| (csptracetable !=  nullptr && csptracetable->has_data())
	|| (csstatstable !=  nullptr && csstatstable->has_data())
	|| (csau4tug3configtable !=  nullptr && csau4tug3configtable->has_data());
}

bool CISCOSONETMIB::has_operation() const
{
    return is_set(yfilter)
	|| (csapsconfig !=  nullptr && csapsconfig->has_operation())
	|| (csnotifications !=  nullptr && csnotifications->has_operation())
	|| (csconfigtable !=  nullptr && csconfigtable->has_operation())
	|| (csapsconfigtable !=  nullptr && csapsconfigtable->has_operation())
	|| (csstotaltable !=  nullptr && csstotaltable->has_operation())
	|| (csstracetable !=  nullptr && csstracetable->has_operation())
	|| (csltotaltable !=  nullptr && csltotaltable->has_operation())
	|| (cslfarendtotaltable !=  nullptr && cslfarendtotaltable->has_operation())
	|| (csptotaltable !=  nullptr && csptotaltable->has_operation())
	|| (cspfarendtotaltable !=  nullptr && cspfarendtotaltable->has_operation())
	|| (csptracetable !=  nullptr && csptracetable->has_operation())
	|| (csstatstable !=  nullptr && csstatstable->has_operation())
	|| (csau4tug3configtable !=  nullptr && csau4tug3configtable->has_operation());
}

std::string CISCOSONETMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSONETMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSONETMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csApsConfig")
    {
        if(csapsconfig == nullptr)
        {
            csapsconfig = std::make_shared<CISCOSONETMIB::CsApsConfig>();
        }
        return csapsconfig;
    }

    if(child_yang_name == "csNotifications")
    {
        if(csnotifications == nullptr)
        {
            csnotifications = std::make_shared<CISCOSONETMIB::CsNotifications>();
        }
        return csnotifications;
    }

    if(child_yang_name == "csConfigTable")
    {
        if(csconfigtable == nullptr)
        {
            csconfigtable = std::make_shared<CISCOSONETMIB::CsConfigTable>();
        }
        return csconfigtable;
    }

    if(child_yang_name == "csApsConfigTable")
    {
        if(csapsconfigtable == nullptr)
        {
            csapsconfigtable = std::make_shared<CISCOSONETMIB::CsApsConfigTable>();
        }
        return csapsconfigtable;
    }

    if(child_yang_name == "cssTotalTable")
    {
        if(csstotaltable == nullptr)
        {
            csstotaltable = std::make_shared<CISCOSONETMIB::CssTotalTable>();
        }
        return csstotaltable;
    }

    if(child_yang_name == "cssTraceTable")
    {
        if(csstracetable == nullptr)
        {
            csstracetable = std::make_shared<CISCOSONETMIB::CssTraceTable>();
        }
        return csstracetable;
    }

    if(child_yang_name == "cslTotalTable")
    {
        if(csltotaltable == nullptr)
        {
            csltotaltable = std::make_shared<CISCOSONETMIB::CslTotalTable>();
        }
        return csltotaltable;
    }

    if(child_yang_name == "cslFarEndTotalTable")
    {
        if(cslfarendtotaltable == nullptr)
        {
            cslfarendtotaltable = std::make_shared<CISCOSONETMIB::CslFarEndTotalTable>();
        }
        return cslfarendtotaltable;
    }

    if(child_yang_name == "cspTotalTable")
    {
        if(csptotaltable == nullptr)
        {
            csptotaltable = std::make_shared<CISCOSONETMIB::CspTotalTable>();
        }
        return csptotaltable;
    }

    if(child_yang_name == "cspFarEndTotalTable")
    {
        if(cspfarendtotaltable == nullptr)
        {
            cspfarendtotaltable = std::make_shared<CISCOSONETMIB::CspFarEndTotalTable>();
        }
        return cspfarendtotaltable;
    }

    if(child_yang_name == "cspTraceTable")
    {
        if(csptracetable == nullptr)
        {
            csptracetable = std::make_shared<CISCOSONETMIB::CspTraceTable>();
        }
        return csptracetable;
    }

    if(child_yang_name == "csStatsTable")
    {
        if(csstatstable == nullptr)
        {
            csstatstable = std::make_shared<CISCOSONETMIB::CsStatsTable>();
        }
        return csstatstable;
    }

    if(child_yang_name == "csAu4Tug3ConfigTable")
    {
        if(csau4tug3configtable == nullptr)
        {
            csau4tug3configtable = std::make_shared<CISCOSONETMIB::CsAu4Tug3ConfigTable>();
        }
        return csau4tug3configtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSONETMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(csapsconfig != nullptr)
    {
        _children["csApsConfig"] = csapsconfig;
    }

    if(csnotifications != nullptr)
    {
        _children["csNotifications"] = csnotifications;
    }

    if(csconfigtable != nullptr)
    {
        _children["csConfigTable"] = csconfigtable;
    }

    if(csapsconfigtable != nullptr)
    {
        _children["csApsConfigTable"] = csapsconfigtable;
    }

    if(csstotaltable != nullptr)
    {
        _children["cssTotalTable"] = csstotaltable;
    }

    if(csstracetable != nullptr)
    {
        _children["cssTraceTable"] = csstracetable;
    }

    if(csltotaltable != nullptr)
    {
        _children["cslTotalTable"] = csltotaltable;
    }

    if(cslfarendtotaltable != nullptr)
    {
        _children["cslFarEndTotalTable"] = cslfarendtotaltable;
    }

    if(csptotaltable != nullptr)
    {
        _children["cspTotalTable"] = csptotaltable;
    }

    if(cspfarendtotaltable != nullptr)
    {
        _children["cspFarEndTotalTable"] = cspfarendtotaltable;
    }

    if(csptracetable != nullptr)
    {
        _children["cspTraceTable"] = csptracetable;
    }

    if(csstatstable != nullptr)
    {
        _children["csStatsTable"] = csstatstable;
    }

    if(csau4tug3configtable != nullptr)
    {
        _children["csAu4Tug3ConfigTable"] = csau4tug3configtable;
    }

    return _children;
}

void CISCOSONETMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSONETMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CISCOSONETMIB::clone_ptr() const
{
    return std::make_shared<CISCOSONETMIB>();
}

std::string CISCOSONETMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOSONETMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOSONETMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOSONETMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOSONETMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csApsConfig" || name == "csNotifications" || name == "csConfigTable" || name == "csApsConfigTable" || name == "cssTotalTable" || name == "cssTraceTable" || name == "cslTotalTable" || name == "cslFarEndTotalTable" || name == "cspTotalTable" || name == "cspFarEndTotalTable" || name == "cspTraceTable" || name == "csStatsTable" || name == "csAu4Tug3ConfigTable")
        return true;
    return false;
}

CISCOSONETMIB::CsApsConfig::CsApsConfig()
    :
    csapslinefailurecode{YType::enumeration, "csApsLineFailureCode"},
    csapslineswitchreason{YType::enumeration, "csApsLineSwitchReason"}
{

    yang_name = "csApsConfig"; yang_parent_name = "CISCO-SONET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSONETMIB::CsApsConfig::~CsApsConfig()
{
}

bool CISCOSONETMIB::CsApsConfig::has_data() const
{
    if (is_presence_container) return true;
    return csapslinefailurecode.is_set
	|| csapslineswitchreason.is_set;
}

bool CISCOSONETMIB::CsApsConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csapslinefailurecode.yfilter)
	|| ydk::is_set(csapslineswitchreason.yfilter);
}

std::string CISCOSONETMIB::CsApsConfig::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSONETMIB::CsApsConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csApsConfig";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSONETMIB::CsApsConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csapslinefailurecode.is_set || is_set(csapslinefailurecode.yfilter)) leaf_name_data.push_back(csapslinefailurecode.get_name_leafdata());
    if (csapslineswitchreason.is_set || is_set(csapslineswitchreason.yfilter)) leaf_name_data.push_back(csapslineswitchreason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSONETMIB::CsApsConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSONETMIB::CsApsConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSONETMIB::CsApsConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOSONETMIB::CsApsConfig::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOSONETMIB::CsApsConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csApsLineFailureCode" || name == "csApsLineSwitchReason")
        return true;
    return false;
}

CISCOSONETMIB::CsNotifications::CsNotifications()
    :
    csnotificationsenabled{YType::boolean, "csNotificationsEnabled"}
{

    yang_name = "csNotifications"; yang_parent_name = "CISCO-SONET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSONETMIB::CsNotifications::~CsNotifications()
{
}

bool CISCOSONETMIB::CsNotifications::has_data() const
{
    if (is_presence_container) return true;
    return csnotificationsenabled.is_set;
}

bool CISCOSONETMIB::CsNotifications::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csnotificationsenabled.yfilter);
}

std::string CISCOSONETMIB::CsNotifications::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSONETMIB::CsNotifications::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csNotifications";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSONETMIB::CsNotifications::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csnotificationsenabled.is_set || is_set(csnotificationsenabled.yfilter)) leaf_name_data.push_back(csnotificationsenabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSONETMIB::CsNotifications::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSONETMIB::CsNotifications::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSONETMIB::CsNotifications::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csNotificationsEnabled")
    {
        csnotificationsenabled = value;
        csnotificationsenabled.value_namespace = name_space;
        csnotificationsenabled.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSONETMIB::CsNotifications::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csNotificationsEnabled")
    {
        csnotificationsenabled.yfilter = yfilter;
    }
}

bool CISCOSONETMIB::CsNotifications::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csNotificationsEnabled")
        return true;
    return false;
}

CISCOSONETMIB::CsConfigTable::CsConfigTable()
    :
    csconfigentry(this, {"ifindex"})
{

    yang_name = "csConfigTable"; yang_parent_name = "CISCO-SONET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSONETMIB::CsConfigTable::~CsConfigTable()
{
}

bool CISCOSONETMIB::CsConfigTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<csconfigentry.len(); index++)
    {
        if(csconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSONETMIB::CsConfigTable::has_operation() const
{
    for (std::size_t index=0; index<csconfigentry.len(); index++)
    {
        if(csconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSONETMIB::CsConfigTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSONETMIB::CsConfigTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csConfigTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSONETMIB::CsConfigTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSONETMIB::CsConfigTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csConfigEntry")
    {
        auto ent_ = std::make_shared<CISCOSONETMIB::CsConfigTable::CsConfigEntry>();
        ent_->parent = this;
        csconfigentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSONETMIB::CsConfigTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : csconfigentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSONETMIB::CsConfigTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSONETMIB::CsConfigTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSONETMIB::CsConfigTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csConfigEntry")
        return true;
    return false;
}

CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsConfigEntry()
    :
    ifindex{YType::str, "ifIndex"},
    csconfigloopbacktype{YType::enumeration, "csConfigLoopbackType"},
    csconfigxmtclocksource{YType::enumeration, "csConfigXmtClockSource"},
    csconfigframescramble{YType::enumeration, "csConfigFrameScramble"},
    csconfigtype{YType::enumeration, "csConfigType"},
    csconfigrdivtype{YType::enumeration, "csConfigRDIVType"},
    csconfigrdiptype{YType::enumeration, "csConfigRDIPType"},
    cstributarytype{YType::enumeration, "csTributaryType"},
    cstributarymappingtype{YType::enumeration, "csTributaryMappingType"},
    cstributaryframingtype{YType::enumeration, "csTributaryFramingType"},
    cssignallingtransportmode{YType::enumeration, "csSignallingTransportMode"},
    cstributarygroupingtype{YType::enumeration, "csTributaryGroupingType"}
{

    yang_name = "csConfigEntry"; yang_parent_name = "csConfigTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSONETMIB::CsConfigTable::CsConfigEntry::~CsConfigEntry()
{
}

bool CISCOSONETMIB::CsConfigTable::CsConfigEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| csconfigloopbacktype.is_set
	|| csconfigxmtclocksource.is_set
	|| csconfigframescramble.is_set
	|| csconfigtype.is_set
	|| csconfigrdivtype.is_set
	|| csconfigrdiptype.is_set
	|| cstributarytype.is_set
	|| cstributarymappingtype.is_set
	|| cstributaryframingtype.is_set
	|| cssignallingtransportmode.is_set
	|| cstributarygroupingtype.is_set;
}

bool CISCOSONETMIB::CsConfigTable::CsConfigEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(csconfigloopbacktype.yfilter)
	|| ydk::is_set(csconfigxmtclocksource.yfilter)
	|| ydk::is_set(csconfigframescramble.yfilter)
	|| ydk::is_set(csconfigtype.yfilter)
	|| ydk::is_set(csconfigrdivtype.yfilter)
	|| ydk::is_set(csconfigrdiptype.yfilter)
	|| ydk::is_set(cstributarytype.yfilter)
	|| ydk::is_set(cstributarymappingtype.yfilter)
	|| ydk::is_set(cstributaryframingtype.yfilter)
	|| ydk::is_set(cssignallingtransportmode.yfilter)
	|| ydk::is_set(cstributarygroupingtype.yfilter);
}

std::string CISCOSONETMIB::CsConfigTable::CsConfigEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/csConfigTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSONETMIB::CsConfigTable::CsConfigEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csConfigEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSONETMIB::CsConfigTable::CsConfigEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (csconfigloopbacktype.is_set || is_set(csconfigloopbacktype.yfilter)) leaf_name_data.push_back(csconfigloopbacktype.get_name_leafdata());
    if (csconfigxmtclocksource.is_set || is_set(csconfigxmtclocksource.yfilter)) leaf_name_data.push_back(csconfigxmtclocksource.get_name_leafdata());
    if (csconfigframescramble.is_set || is_set(csconfigframescramble.yfilter)) leaf_name_data.push_back(csconfigframescramble.get_name_leafdata());
    if (csconfigtype.is_set || is_set(csconfigtype.yfilter)) leaf_name_data.push_back(csconfigtype.get_name_leafdata());
    if (csconfigrdivtype.is_set || is_set(csconfigrdivtype.yfilter)) leaf_name_data.push_back(csconfigrdivtype.get_name_leafdata());
    if (csconfigrdiptype.is_set || is_set(csconfigrdiptype.yfilter)) leaf_name_data.push_back(csconfigrdiptype.get_name_leafdata());
    if (cstributarytype.is_set || is_set(cstributarytype.yfilter)) leaf_name_data.push_back(cstributarytype.get_name_leafdata());
    if (cstributarymappingtype.is_set || is_set(cstributarymappingtype.yfilter)) leaf_name_data.push_back(cstributarymappingtype.get_name_leafdata());
    if (cstributaryframingtype.is_set || is_set(cstributaryframingtype.yfilter)) leaf_name_data.push_back(cstributaryframingtype.get_name_leafdata());
    if (cssignallingtransportmode.is_set || is_set(cssignallingtransportmode.yfilter)) leaf_name_data.push_back(cssignallingtransportmode.get_name_leafdata());
    if (cstributarygroupingtype.is_set || is_set(cstributarygroupingtype.yfilter)) leaf_name_data.push_back(cstributarygroupingtype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSONETMIB::CsConfigTable::CsConfigEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSONETMIB::CsConfigTable::CsConfigEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSONETMIB::CsConfigTable::CsConfigEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csConfigLoopbackType")
    {
        csconfigloopbacktype = value;
        csconfigloopbacktype.value_namespace = name_space;
        csconfigloopbacktype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csConfigXmtClockSource")
    {
        csconfigxmtclocksource = value;
        csconfigxmtclocksource.value_namespace = name_space;
        csconfigxmtclocksource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csConfigFrameScramble")
    {
        csconfigframescramble = value;
        csconfigframescramble.value_namespace = name_space;
        csconfigframescramble.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csConfigType")
    {
        csconfigtype = value;
        csconfigtype.value_namespace = name_space;
        csconfigtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csConfigRDIVType")
    {
        csconfigrdivtype = value;
        csconfigrdivtype.value_namespace = name_space;
        csconfigrdivtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csConfigRDIPType")
    {
        csconfigrdiptype = value;
        csconfigrdiptype.value_namespace = name_space;
        csconfigrdiptype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csTributaryType")
    {
        cstributarytype = value;
        cstributarytype.value_namespace = name_space;
        cstributarytype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csTributaryMappingType")
    {
        cstributarymappingtype = value;
        cstributarymappingtype.value_namespace = name_space;
        cstributarymappingtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csTributaryFramingType")
    {
        cstributaryframingtype = value;
        cstributaryframingtype.value_namespace = name_space;
        cstributaryframingtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csSignallingTransportMode")
    {
        cssignallingtransportmode = value;
        cssignallingtransportmode.value_namespace = name_space;
        cssignallingtransportmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csTributaryGroupingType")
    {
        cstributarygroupingtype = value;
        cstributarygroupingtype.value_namespace = name_space;
        cstributarygroupingtype.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSONETMIB::CsConfigTable::CsConfigEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "csConfigLoopbackType")
    {
        csconfigloopbacktype.yfilter = yfilter;
    }
    if(value_path == "csConfigXmtClockSource")
    {
        csconfigxmtclocksource.yfilter = yfilter;
    }
    if(value_path == "csConfigFrameScramble")
    {
        csconfigframescramble.yfilter = yfilter;
    }
    if(value_path == "csConfigType")
    {
        csconfigtype.yfilter = yfilter;
    }
    if(value_path == "csConfigRDIVType")
    {
        csconfigrdivtype.yfilter = yfilter;
    }
    if(value_path == "csConfigRDIPType")
    {
        csconfigrdiptype.yfilter = yfilter;
    }
    if(value_path == "csTributaryType")
    {
        cstributarytype.yfilter = yfilter;
    }
    if(value_path == "csTributaryMappingType")
    {
        cstributarymappingtype.yfilter = yfilter;
    }
    if(value_path == "csTributaryFramingType")
    {
        cstributaryframingtype.yfilter = yfilter;
    }
    if(value_path == "csSignallingTransportMode")
    {
        cssignallingtransportmode.yfilter = yfilter;
    }
    if(value_path == "csTributaryGroupingType")
    {
        cstributarygroupingtype.yfilter = yfilter;
    }
}

bool CISCOSONETMIB::CsConfigTable::CsConfigEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "csConfigLoopbackType" || name == "csConfigXmtClockSource" || name == "csConfigFrameScramble" || name == "csConfigType" || name == "csConfigRDIVType" || name == "csConfigRDIPType" || name == "csTributaryType" || name == "csTributaryMappingType" || name == "csTributaryFramingType" || name == "csSignallingTransportMode" || name == "csTributaryGroupingType")
        return true;
    return false;
}

CISCOSONETMIB::CsApsConfigTable::CsApsConfigTable()
    :
    csapsconfigentry(this, {"csapsworkingindex"})
{

    yang_name = "csApsConfigTable"; yang_parent_name = "CISCO-SONET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSONETMIB::CsApsConfigTable::~CsApsConfigTable()
{
}

bool CISCOSONETMIB::CsApsConfigTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<csapsconfigentry.len(); index++)
    {
        if(csapsconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSONETMIB::CsApsConfigTable::has_operation() const
{
    for (std::size_t index=0; index<csapsconfigentry.len(); index++)
    {
        if(csapsconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSONETMIB::CsApsConfigTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSONETMIB::CsApsConfigTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csApsConfigTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSONETMIB::CsApsConfigTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSONETMIB::CsApsConfigTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csApsConfigEntry")
    {
        auto ent_ = std::make_shared<CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry>();
        ent_->parent = this;
        csapsconfigentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSONETMIB::CsApsConfigTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : csapsconfigentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSONETMIB::CsApsConfigTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSONETMIB::CsApsConfigTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSONETMIB::CsApsConfigTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csApsConfigEntry")
        return true;
    return false;
}

CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsConfigEntry()
    :
    csapsworkingindex{YType::int32, "csApsWorkingIndex"},
    csapsprotectionindex{YType::int32, "csApsProtectionIndex"},
    csapsenable{YType::enumeration, "csApsEnable"},
    csapsarchmode{YType::enumeration, "csApsArchMode"},
    csapsactiveline{YType::enumeration, "csApsActiveLine"},
    csapssigfaultber{YType::uint32, "csApsSigFaultBER"},
    csapssigdegradeber{YType::uint32, "csApsSigDegradeBER"},
    csapswaittorestore{YType::uint32, "csApsWaitToRestore"},
    csapsdirection{YType::enumeration, "csApsDirection"},
    csapsrevertive{YType::enumeration, "csApsRevertive"},
    csapsdirectionoperational{YType::enumeration, "csApsDirectionOperational"},
    csapsarchmodeoperational{YType::enumeration, "csApsArchModeOperational"},
    csapschannelprotocol{YType::enumeration, "csApsChannelProtocol"},
    csapsfailurestatus{YType::bits, "csApsFailureStatus"},
    csapsswitchreason{YType::enumeration, "csApsSwitchReason"},
    csapsprimarysection{YType::enumeration, "csApsPrimarySection"}
{

    yang_name = "csApsConfigEntry"; yang_parent_name = "csApsConfigTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::~CsApsConfigEntry()
{
}

bool CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::has_data() const
{
    if (is_presence_container) return true;
    return csapsworkingindex.is_set
	|| csapsprotectionindex.is_set
	|| csapsenable.is_set
	|| csapsarchmode.is_set
	|| csapsactiveline.is_set
	|| csapssigfaultber.is_set
	|| csapssigdegradeber.is_set
	|| csapswaittorestore.is_set
	|| csapsdirection.is_set
	|| csapsrevertive.is_set
	|| csapsdirectionoperational.is_set
	|| csapsarchmodeoperational.is_set
	|| csapschannelprotocol.is_set
	|| csapsfailurestatus.is_set
	|| csapsswitchreason.is_set
	|| csapsprimarysection.is_set;
}

bool CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csapsworkingindex.yfilter)
	|| ydk::is_set(csapsprotectionindex.yfilter)
	|| ydk::is_set(csapsenable.yfilter)
	|| ydk::is_set(csapsarchmode.yfilter)
	|| ydk::is_set(csapsactiveline.yfilter)
	|| ydk::is_set(csapssigfaultber.yfilter)
	|| ydk::is_set(csapssigdegradeber.yfilter)
	|| ydk::is_set(csapswaittorestore.yfilter)
	|| ydk::is_set(csapsdirection.yfilter)
	|| ydk::is_set(csapsrevertive.yfilter)
	|| ydk::is_set(csapsdirectionoperational.yfilter)
	|| ydk::is_set(csapsarchmodeoperational.yfilter)
	|| ydk::is_set(csapschannelprotocol.yfilter)
	|| ydk::is_set(csapsfailurestatus.yfilter)
	|| ydk::is_set(csapsswitchreason.yfilter)
	|| ydk::is_set(csapsprimarysection.yfilter);
}

std::string CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/csApsConfigTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csApsConfigEntry";
    ADD_KEY_TOKEN(csapsworkingindex, "csApsWorkingIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csapsworkingindex.is_set || is_set(csapsworkingindex.yfilter)) leaf_name_data.push_back(csapsworkingindex.get_name_leafdata());
    if (csapsprotectionindex.is_set || is_set(csapsprotectionindex.yfilter)) leaf_name_data.push_back(csapsprotectionindex.get_name_leafdata());
    if (csapsenable.is_set || is_set(csapsenable.yfilter)) leaf_name_data.push_back(csapsenable.get_name_leafdata());
    if (csapsarchmode.is_set || is_set(csapsarchmode.yfilter)) leaf_name_data.push_back(csapsarchmode.get_name_leafdata());
    if (csapsactiveline.is_set || is_set(csapsactiveline.yfilter)) leaf_name_data.push_back(csapsactiveline.get_name_leafdata());
    if (csapssigfaultber.is_set || is_set(csapssigfaultber.yfilter)) leaf_name_data.push_back(csapssigfaultber.get_name_leafdata());
    if (csapssigdegradeber.is_set || is_set(csapssigdegradeber.yfilter)) leaf_name_data.push_back(csapssigdegradeber.get_name_leafdata());
    if (csapswaittorestore.is_set || is_set(csapswaittorestore.yfilter)) leaf_name_data.push_back(csapswaittorestore.get_name_leafdata());
    if (csapsdirection.is_set || is_set(csapsdirection.yfilter)) leaf_name_data.push_back(csapsdirection.get_name_leafdata());
    if (csapsrevertive.is_set || is_set(csapsrevertive.yfilter)) leaf_name_data.push_back(csapsrevertive.get_name_leafdata());
    if (csapsdirectionoperational.is_set || is_set(csapsdirectionoperational.yfilter)) leaf_name_data.push_back(csapsdirectionoperational.get_name_leafdata());
    if (csapsarchmodeoperational.is_set || is_set(csapsarchmodeoperational.yfilter)) leaf_name_data.push_back(csapsarchmodeoperational.get_name_leafdata());
    if (csapschannelprotocol.is_set || is_set(csapschannelprotocol.yfilter)) leaf_name_data.push_back(csapschannelprotocol.get_name_leafdata());
    if (csapsfailurestatus.is_set || is_set(csapsfailurestatus.yfilter)) leaf_name_data.push_back(csapsfailurestatus.get_name_leafdata());
    if (csapsswitchreason.is_set || is_set(csapsswitchreason.yfilter)) leaf_name_data.push_back(csapsswitchreason.get_name_leafdata());
    if (csapsprimarysection.is_set || is_set(csapsprimarysection.yfilter)) leaf_name_data.push_back(csapsprimarysection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csApsWorkingIndex")
    {
        csapsworkingindex = value;
        csapsworkingindex.value_namespace = name_space;
        csapsworkingindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csApsProtectionIndex")
    {
        csapsprotectionindex = value;
        csapsprotectionindex.value_namespace = name_space;
        csapsprotectionindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csApsEnable")
    {
        csapsenable = value;
        csapsenable.value_namespace = name_space;
        csapsenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csApsArchMode")
    {
        csapsarchmode = value;
        csapsarchmode.value_namespace = name_space;
        csapsarchmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csApsActiveLine")
    {
        csapsactiveline = value;
        csapsactiveline.value_namespace = name_space;
        csapsactiveline.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csApsSigFaultBER")
    {
        csapssigfaultber = value;
        csapssigfaultber.value_namespace = name_space;
        csapssigfaultber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csApsSigDegradeBER")
    {
        csapssigdegradeber = value;
        csapssigdegradeber.value_namespace = name_space;
        csapssigdegradeber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csApsWaitToRestore")
    {
        csapswaittorestore = value;
        csapswaittorestore.value_namespace = name_space;
        csapswaittorestore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csApsDirection")
    {
        csapsdirection = value;
        csapsdirection.value_namespace = name_space;
        csapsdirection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csApsRevertive")
    {
        csapsrevertive = value;
        csapsrevertive.value_namespace = name_space;
        csapsrevertive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csApsDirectionOperational")
    {
        csapsdirectionoperational = value;
        csapsdirectionoperational.value_namespace = name_space;
        csapsdirectionoperational.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "csApsFailureStatus")
    {
        csapsfailurestatus[value] = true;
    }
    if(value_path == "csApsSwitchReason")
    {
        csapsswitchreason = value;
        csapsswitchreason.value_namespace = name_space;
        csapsswitchreason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csApsPrimarySection")
    {
        csapsprimarysection = value;
        csapsprimarysection.value_namespace = name_space;
        csapsprimarysection.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csApsWorkingIndex")
    {
        csapsworkingindex.yfilter = yfilter;
    }
    if(value_path == "csApsProtectionIndex")
    {
        csapsprotectionindex.yfilter = yfilter;
    }
    if(value_path == "csApsEnable")
    {
        csapsenable.yfilter = yfilter;
    }
    if(value_path == "csApsArchMode")
    {
        csapsarchmode.yfilter = yfilter;
    }
    if(value_path == "csApsActiveLine")
    {
        csapsactiveline.yfilter = yfilter;
    }
    if(value_path == "csApsSigFaultBER")
    {
        csapssigfaultber.yfilter = yfilter;
    }
    if(value_path == "csApsSigDegradeBER")
    {
        csapssigdegradeber.yfilter = yfilter;
    }
    if(value_path == "csApsWaitToRestore")
    {
        csapswaittorestore.yfilter = yfilter;
    }
    if(value_path == "csApsDirection")
    {
        csapsdirection.yfilter = yfilter;
    }
    if(value_path == "csApsRevertive")
    {
        csapsrevertive.yfilter = yfilter;
    }
    if(value_path == "csApsDirectionOperational")
    {
        csapsdirectionoperational.yfilter = yfilter;
    }
    if(value_path == "csApsArchModeOperational")
    {
        csapsarchmodeoperational.yfilter = yfilter;
    }
    if(value_path == "csApsChannelProtocol")
    {
        csapschannelprotocol.yfilter = yfilter;
    }
    if(value_path == "csApsFailureStatus")
    {
        csapsfailurestatus.yfilter = yfilter;
    }
    if(value_path == "csApsSwitchReason")
    {
        csapsswitchreason.yfilter = yfilter;
    }
    if(value_path == "csApsPrimarySection")
    {
        csapsprimarysection.yfilter = yfilter;
    }
}

bool CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csApsWorkingIndex" || name == "csApsProtectionIndex" || name == "csApsEnable" || name == "csApsArchMode" || name == "csApsActiveLine" || name == "csApsSigFaultBER" || name == "csApsSigDegradeBER" || name == "csApsWaitToRestore" || name == "csApsDirection" || name == "csApsRevertive" || name == "csApsDirectionOperational" || name == "csApsArchModeOperational" || name == "csApsChannelProtocol" || name == "csApsFailureStatus" || name == "csApsSwitchReason" || name == "csApsPrimarySection")
        return true;
    return false;
}

CISCOSONETMIB::CssTotalTable::CssTotalTable()
    :
    csstotalentry(this, {"ifindex"})
{

    yang_name = "cssTotalTable"; yang_parent_name = "CISCO-SONET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSONETMIB::CssTotalTable::~CssTotalTable()
{
}

bool CISCOSONETMIB::CssTotalTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<csstotalentry.len(); index++)
    {
        if(csstotalentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSONETMIB::CssTotalTable::has_operation() const
{
    for (std::size_t index=0; index<csstotalentry.len(); index++)
    {
        if(csstotalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSONETMIB::CssTotalTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSONETMIB::CssTotalTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cssTotalTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSONETMIB::CssTotalTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSONETMIB::CssTotalTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cssTotalEntry")
    {
        auto ent_ = std::make_shared<CISCOSONETMIB::CssTotalTable::CssTotalEntry>();
        ent_->parent = this;
        csstotalentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSONETMIB::CssTotalTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : csstotalentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSONETMIB::CssTotalTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSONETMIB::CssTotalTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSONETMIB::CssTotalTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cssTotalEntry")
        return true;
    return false;
}

CISCOSONETMIB::CssTotalTable::CssTotalEntry::CssTotalEntry()
    :
    ifindex{YType::str, "ifIndex"},
    csstotaless{YType::uint32, "cssTotalESs"},
    csstotalsess{YType::uint32, "cssTotalSESs"},
    csstotalsefss{YType::uint32, "cssTotalSEFSs"},
    csstotalcvs{YType::uint32, "cssTotalCVs"}
{

    yang_name = "cssTotalEntry"; yang_parent_name = "cssTotalTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSONETMIB::CssTotalTable::CssTotalEntry::~CssTotalEntry()
{
}

bool CISCOSONETMIB::CssTotalTable::CssTotalEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| csstotaless.is_set
	|| csstotalsess.is_set
	|| csstotalsefss.is_set
	|| csstotalcvs.is_set;
}

bool CISCOSONETMIB::CssTotalTable::CssTotalEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(csstotaless.yfilter)
	|| ydk::is_set(csstotalsess.yfilter)
	|| ydk::is_set(csstotalsefss.yfilter)
	|| ydk::is_set(csstotalcvs.yfilter);
}

std::string CISCOSONETMIB::CssTotalTable::CssTotalEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/cssTotalTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSONETMIB::CssTotalTable::CssTotalEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cssTotalEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSONETMIB::CssTotalTable::CssTotalEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (csstotaless.is_set || is_set(csstotaless.yfilter)) leaf_name_data.push_back(csstotaless.get_name_leafdata());
    if (csstotalsess.is_set || is_set(csstotalsess.yfilter)) leaf_name_data.push_back(csstotalsess.get_name_leafdata());
    if (csstotalsefss.is_set || is_set(csstotalsefss.yfilter)) leaf_name_data.push_back(csstotalsefss.get_name_leafdata());
    if (csstotalcvs.is_set || is_set(csstotalcvs.yfilter)) leaf_name_data.push_back(csstotalcvs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSONETMIB::CssTotalTable::CssTotalEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSONETMIB::CssTotalTable::CssTotalEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSONETMIB::CssTotalTable::CssTotalEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cssTotalESs")
    {
        csstotaless = value;
        csstotaless.value_namespace = name_space;
        csstotaless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cssTotalSESs")
    {
        csstotalsess = value;
        csstotalsess.value_namespace = name_space;
        csstotalsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cssTotalSEFSs")
    {
        csstotalsefss = value;
        csstotalsefss.value_namespace = name_space;
        csstotalsefss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cssTotalCVs")
    {
        csstotalcvs = value;
        csstotalcvs.value_namespace = name_space;
        csstotalcvs.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSONETMIB::CssTotalTable::CssTotalEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cssTotalESs")
    {
        csstotaless.yfilter = yfilter;
    }
    if(value_path == "cssTotalSESs")
    {
        csstotalsess.yfilter = yfilter;
    }
    if(value_path == "cssTotalSEFSs")
    {
        csstotalsefss.yfilter = yfilter;
    }
    if(value_path == "cssTotalCVs")
    {
        csstotalcvs.yfilter = yfilter;
    }
}

bool CISCOSONETMIB::CssTotalTable::CssTotalEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cssTotalESs" || name == "cssTotalSESs" || name == "cssTotalSEFSs" || name == "cssTotalCVs")
        return true;
    return false;
}

CISCOSONETMIB::CssTraceTable::CssTraceTable()
    :
    csstraceentry(this, {"ifindex"})
{

    yang_name = "cssTraceTable"; yang_parent_name = "CISCO-SONET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSONETMIB::CssTraceTable::~CssTraceTable()
{
}

bool CISCOSONETMIB::CssTraceTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<csstraceentry.len(); index++)
    {
        if(csstraceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSONETMIB::CssTraceTable::has_operation() const
{
    for (std::size_t index=0; index<csstraceentry.len(); index++)
    {
        if(csstraceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSONETMIB::CssTraceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSONETMIB::CssTraceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cssTraceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSONETMIB::CssTraceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSONETMIB::CssTraceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cssTraceEntry")
    {
        auto ent_ = std::make_shared<CISCOSONETMIB::CssTraceTable::CssTraceEntry>();
        ent_->parent = this;
        csstraceentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSONETMIB::CssTraceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : csstraceentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSONETMIB::CssTraceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSONETMIB::CssTraceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSONETMIB::CssTraceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cssTraceEntry")
        return true;
    return false;
}

CISCOSONETMIB::CssTraceTable::CssTraceEntry::CssTraceEntry()
    :
    ifindex{YType::str, "ifIndex"},
    csstracetotransmit{YType::str, "cssTraceToTransmit"},
    csstracetoexpect{YType::str, "cssTraceToExpect"},
    csstracefailure{YType::boolean, "cssTraceFailure"},
    csstracereceived{YType::str, "cssTraceReceived"}
{

    yang_name = "cssTraceEntry"; yang_parent_name = "cssTraceTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSONETMIB::CssTraceTable::CssTraceEntry::~CssTraceEntry()
{
}

bool CISCOSONETMIB::CssTraceTable::CssTraceEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| csstracetotransmit.is_set
	|| csstracetoexpect.is_set
	|| csstracefailure.is_set
	|| csstracereceived.is_set;
}

bool CISCOSONETMIB::CssTraceTable::CssTraceEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(csstracetotransmit.yfilter)
	|| ydk::is_set(csstracetoexpect.yfilter)
	|| ydk::is_set(csstracefailure.yfilter)
	|| ydk::is_set(csstracereceived.yfilter);
}

std::string CISCOSONETMIB::CssTraceTable::CssTraceEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/cssTraceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSONETMIB::CssTraceTable::CssTraceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cssTraceEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSONETMIB::CssTraceTable::CssTraceEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (csstracetotransmit.is_set || is_set(csstracetotransmit.yfilter)) leaf_name_data.push_back(csstracetotransmit.get_name_leafdata());
    if (csstracetoexpect.is_set || is_set(csstracetoexpect.yfilter)) leaf_name_data.push_back(csstracetoexpect.get_name_leafdata());
    if (csstracefailure.is_set || is_set(csstracefailure.yfilter)) leaf_name_data.push_back(csstracefailure.get_name_leafdata());
    if (csstracereceived.is_set || is_set(csstracereceived.yfilter)) leaf_name_data.push_back(csstracereceived.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSONETMIB::CssTraceTable::CssTraceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSONETMIB::CssTraceTable::CssTraceEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSONETMIB::CssTraceTable::CssTraceEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cssTraceToTransmit")
    {
        csstracetotransmit = value;
        csstracetotransmit.value_namespace = name_space;
        csstracetotransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cssTraceToExpect")
    {
        csstracetoexpect = value;
        csstracetoexpect.value_namespace = name_space;
        csstracetoexpect.value_namespace_prefix = name_space_prefix;
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
}

void CISCOSONETMIB::CssTraceTable::CssTraceEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cssTraceToTransmit")
    {
        csstracetotransmit.yfilter = yfilter;
    }
    if(value_path == "cssTraceToExpect")
    {
        csstracetoexpect.yfilter = yfilter;
    }
    if(value_path == "cssTraceFailure")
    {
        csstracefailure.yfilter = yfilter;
    }
    if(value_path == "cssTraceReceived")
    {
        csstracereceived.yfilter = yfilter;
    }
}

bool CISCOSONETMIB::CssTraceTable::CssTraceEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cssTraceToTransmit" || name == "cssTraceToExpect" || name == "cssTraceFailure" || name == "cssTraceReceived")
        return true;
    return false;
}

CISCOSONETMIB::CslTotalTable::CslTotalTable()
    :
    csltotalentry(this, {"ifindex"})
{

    yang_name = "cslTotalTable"; yang_parent_name = "CISCO-SONET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSONETMIB::CslTotalTable::~CslTotalTable()
{
}

bool CISCOSONETMIB::CslTotalTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<csltotalentry.len(); index++)
    {
        if(csltotalentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSONETMIB::CslTotalTable::has_operation() const
{
    for (std::size_t index=0; index<csltotalentry.len(); index++)
    {
        if(csltotalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSONETMIB::CslTotalTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSONETMIB::CslTotalTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cslTotalTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSONETMIB::CslTotalTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSONETMIB::CslTotalTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cslTotalEntry")
    {
        auto ent_ = std::make_shared<CISCOSONETMIB::CslTotalTable::CslTotalEntry>();
        ent_->parent = this;
        csltotalentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSONETMIB::CslTotalTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : csltotalentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSONETMIB::CslTotalTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSONETMIB::CslTotalTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSONETMIB::CslTotalTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cslTotalEntry")
        return true;
    return false;
}

CISCOSONETMIB::CslTotalTable::CslTotalEntry::CslTotalEntry()
    :
    ifindex{YType::str, "ifIndex"},
    csltotaless{YType::uint32, "cslTotalESs"},
    csltotalsess{YType::uint32, "cslTotalSESs"},
    csltotalcvs{YType::uint32, "cslTotalCVs"},
    csltotaluass{YType::uint32, "cslTotalUASs"}
{

    yang_name = "cslTotalEntry"; yang_parent_name = "cslTotalTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSONETMIB::CslTotalTable::CslTotalEntry::~CslTotalEntry()
{
}

bool CISCOSONETMIB::CslTotalTable::CslTotalEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| csltotaless.is_set
	|| csltotalsess.is_set
	|| csltotalcvs.is_set
	|| csltotaluass.is_set;
}

bool CISCOSONETMIB::CslTotalTable::CslTotalEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(csltotaless.yfilter)
	|| ydk::is_set(csltotalsess.yfilter)
	|| ydk::is_set(csltotalcvs.yfilter)
	|| ydk::is_set(csltotaluass.yfilter);
}

std::string CISCOSONETMIB::CslTotalTable::CslTotalEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/cslTotalTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSONETMIB::CslTotalTable::CslTotalEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cslTotalEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSONETMIB::CslTotalTable::CslTotalEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (csltotaless.is_set || is_set(csltotaless.yfilter)) leaf_name_data.push_back(csltotaless.get_name_leafdata());
    if (csltotalsess.is_set || is_set(csltotalsess.yfilter)) leaf_name_data.push_back(csltotalsess.get_name_leafdata());
    if (csltotalcvs.is_set || is_set(csltotalcvs.yfilter)) leaf_name_data.push_back(csltotalcvs.get_name_leafdata());
    if (csltotaluass.is_set || is_set(csltotaluass.yfilter)) leaf_name_data.push_back(csltotaluass.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSONETMIB::CslTotalTable::CslTotalEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSONETMIB::CslTotalTable::CslTotalEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSONETMIB::CslTotalTable::CslTotalEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cslTotalCVs")
    {
        csltotalcvs = value;
        csltotalcvs.value_namespace = name_space;
        csltotalcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cslTotalUASs")
    {
        csltotaluass = value;
        csltotaluass.value_namespace = name_space;
        csltotaluass.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSONETMIB::CslTotalTable::CslTotalEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cslTotalESs")
    {
        csltotaless.yfilter = yfilter;
    }
    if(value_path == "cslTotalSESs")
    {
        csltotalsess.yfilter = yfilter;
    }
    if(value_path == "cslTotalCVs")
    {
        csltotalcvs.yfilter = yfilter;
    }
    if(value_path == "cslTotalUASs")
    {
        csltotaluass.yfilter = yfilter;
    }
}

bool CISCOSONETMIB::CslTotalTable::CslTotalEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cslTotalESs" || name == "cslTotalSESs" || name == "cslTotalCVs" || name == "cslTotalUASs")
        return true;
    return false;
}

CISCOSONETMIB::CslFarEndTotalTable::CslFarEndTotalTable()
    :
    cslfarendtotalentry(this, {"ifindex"})
{

    yang_name = "cslFarEndTotalTable"; yang_parent_name = "CISCO-SONET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSONETMIB::CslFarEndTotalTable::~CslFarEndTotalTable()
{
}

bool CISCOSONETMIB::CslFarEndTotalTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cslfarendtotalentry.len(); index++)
    {
        if(cslfarendtotalentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSONETMIB::CslFarEndTotalTable::has_operation() const
{
    for (std::size_t index=0; index<cslfarendtotalentry.len(); index++)
    {
        if(cslfarendtotalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSONETMIB::CslFarEndTotalTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSONETMIB::CslFarEndTotalTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cslFarEndTotalTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSONETMIB::CslFarEndTotalTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSONETMIB::CslFarEndTotalTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cslFarEndTotalEntry")
    {
        auto ent_ = std::make_shared<CISCOSONETMIB::CslFarEndTotalTable::CslFarEndTotalEntry>();
        ent_->parent = this;
        cslfarendtotalentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSONETMIB::CslFarEndTotalTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cslfarendtotalentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSONETMIB::CslFarEndTotalTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSONETMIB::CslFarEndTotalTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSONETMIB::CslFarEndTotalTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cslFarEndTotalEntry")
        return true;
    return false;
}

CISCOSONETMIB::CslFarEndTotalTable::CslFarEndTotalEntry::CslFarEndTotalEntry()
    :
    ifindex{YType::str, "ifIndex"},
    cslfarendtotaless{YType::uint32, "cslFarEndTotalESs"},
    cslfarendtotalsess{YType::uint32, "cslFarEndTotalSESs"},
    cslfarendtotalcvs{YType::uint32, "cslFarEndTotalCVs"},
    cslfarendtotaluass{YType::uint32, "cslFarEndTotalUASs"}
{

    yang_name = "cslFarEndTotalEntry"; yang_parent_name = "cslFarEndTotalTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSONETMIB::CslFarEndTotalTable::CslFarEndTotalEntry::~CslFarEndTotalEntry()
{
}

bool CISCOSONETMIB::CslFarEndTotalTable::CslFarEndTotalEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| cslfarendtotaless.is_set
	|| cslfarendtotalsess.is_set
	|| cslfarendtotalcvs.is_set
	|| cslfarendtotaluass.is_set;
}

bool CISCOSONETMIB::CslFarEndTotalTable::CslFarEndTotalEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cslfarendtotaless.yfilter)
	|| ydk::is_set(cslfarendtotalsess.yfilter)
	|| ydk::is_set(cslfarendtotalcvs.yfilter)
	|| ydk::is_set(cslfarendtotaluass.yfilter);
}

std::string CISCOSONETMIB::CslFarEndTotalTable::CslFarEndTotalEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/cslFarEndTotalTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSONETMIB::CslFarEndTotalTable::CslFarEndTotalEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cslFarEndTotalEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSONETMIB::CslFarEndTotalTable::CslFarEndTotalEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cslfarendtotaless.is_set || is_set(cslfarendtotaless.yfilter)) leaf_name_data.push_back(cslfarendtotaless.get_name_leafdata());
    if (cslfarendtotalsess.is_set || is_set(cslfarendtotalsess.yfilter)) leaf_name_data.push_back(cslfarendtotalsess.get_name_leafdata());
    if (cslfarendtotalcvs.is_set || is_set(cslfarendtotalcvs.yfilter)) leaf_name_data.push_back(cslfarendtotalcvs.get_name_leafdata());
    if (cslfarendtotaluass.is_set || is_set(cslfarendtotaluass.yfilter)) leaf_name_data.push_back(cslfarendtotaluass.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSONETMIB::CslFarEndTotalTable::CslFarEndTotalEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSONETMIB::CslFarEndTotalTable::CslFarEndTotalEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSONETMIB::CslFarEndTotalTable::CslFarEndTotalEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cslFarEndTotalCVs")
    {
        cslfarendtotalcvs = value;
        cslfarendtotalcvs.value_namespace = name_space;
        cslfarendtotalcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cslFarEndTotalUASs")
    {
        cslfarendtotaluass = value;
        cslfarendtotaluass.value_namespace = name_space;
        cslfarendtotaluass.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSONETMIB::CslFarEndTotalTable::CslFarEndTotalEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cslFarEndTotalESs")
    {
        cslfarendtotaless.yfilter = yfilter;
    }
    if(value_path == "cslFarEndTotalSESs")
    {
        cslfarendtotalsess.yfilter = yfilter;
    }
    if(value_path == "cslFarEndTotalCVs")
    {
        cslfarendtotalcvs.yfilter = yfilter;
    }
    if(value_path == "cslFarEndTotalUASs")
    {
        cslfarendtotaluass.yfilter = yfilter;
    }
}

bool CISCOSONETMIB::CslFarEndTotalTable::CslFarEndTotalEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cslFarEndTotalESs" || name == "cslFarEndTotalSESs" || name == "cslFarEndTotalCVs" || name == "cslFarEndTotalUASs")
        return true;
    return false;
}

CISCOSONETMIB::CspTotalTable::CspTotalTable()
    :
    csptotalentry(this, {"ifindex"})
{

    yang_name = "cspTotalTable"; yang_parent_name = "CISCO-SONET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSONETMIB::CspTotalTable::~CspTotalTable()
{
}

bool CISCOSONETMIB::CspTotalTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<csptotalentry.len(); index++)
    {
        if(csptotalentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSONETMIB::CspTotalTable::has_operation() const
{
    for (std::size_t index=0; index<csptotalentry.len(); index++)
    {
        if(csptotalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSONETMIB::CspTotalTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSONETMIB::CspTotalTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cspTotalTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSONETMIB::CspTotalTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSONETMIB::CspTotalTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cspTotalEntry")
    {
        auto ent_ = std::make_shared<CISCOSONETMIB::CspTotalTable::CspTotalEntry>();
        ent_->parent = this;
        csptotalentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSONETMIB::CspTotalTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : csptotalentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSONETMIB::CspTotalTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSONETMIB::CspTotalTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSONETMIB::CspTotalTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cspTotalEntry")
        return true;
    return false;
}

CISCOSONETMIB::CspTotalTable::CspTotalEntry::CspTotalEntry()
    :
    ifindex{YType::str, "ifIndex"},
    csptotaless{YType::uint32, "cspTotalESs"},
    csptotalsess{YType::uint32, "cspTotalSESs"},
    csptotalcvs{YType::uint32, "cspTotalCVs"},
    csptotaluass{YType::uint32, "cspTotalUASs"}
{

    yang_name = "cspTotalEntry"; yang_parent_name = "cspTotalTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSONETMIB::CspTotalTable::CspTotalEntry::~CspTotalEntry()
{
}

bool CISCOSONETMIB::CspTotalTable::CspTotalEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| csptotaless.is_set
	|| csptotalsess.is_set
	|| csptotalcvs.is_set
	|| csptotaluass.is_set;
}

bool CISCOSONETMIB::CspTotalTable::CspTotalEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(csptotaless.yfilter)
	|| ydk::is_set(csptotalsess.yfilter)
	|| ydk::is_set(csptotalcvs.yfilter)
	|| ydk::is_set(csptotaluass.yfilter);
}

std::string CISCOSONETMIB::CspTotalTable::CspTotalEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/cspTotalTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSONETMIB::CspTotalTable::CspTotalEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cspTotalEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSONETMIB::CspTotalTable::CspTotalEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (csptotaless.is_set || is_set(csptotaless.yfilter)) leaf_name_data.push_back(csptotaless.get_name_leafdata());
    if (csptotalsess.is_set || is_set(csptotalsess.yfilter)) leaf_name_data.push_back(csptotalsess.get_name_leafdata());
    if (csptotalcvs.is_set || is_set(csptotalcvs.yfilter)) leaf_name_data.push_back(csptotalcvs.get_name_leafdata());
    if (csptotaluass.is_set || is_set(csptotaluass.yfilter)) leaf_name_data.push_back(csptotaluass.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSONETMIB::CspTotalTable::CspTotalEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSONETMIB::CspTotalTable::CspTotalEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSONETMIB::CspTotalTable::CspTotalEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cspTotalCVs")
    {
        csptotalcvs = value;
        csptotalcvs.value_namespace = name_space;
        csptotalcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cspTotalUASs")
    {
        csptotaluass = value;
        csptotaluass.value_namespace = name_space;
        csptotaluass.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSONETMIB::CspTotalTable::CspTotalEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cspTotalESs")
    {
        csptotaless.yfilter = yfilter;
    }
    if(value_path == "cspTotalSESs")
    {
        csptotalsess.yfilter = yfilter;
    }
    if(value_path == "cspTotalCVs")
    {
        csptotalcvs.yfilter = yfilter;
    }
    if(value_path == "cspTotalUASs")
    {
        csptotaluass.yfilter = yfilter;
    }
}

bool CISCOSONETMIB::CspTotalTable::CspTotalEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cspTotalESs" || name == "cspTotalSESs" || name == "cspTotalCVs" || name == "cspTotalUASs")
        return true;
    return false;
}

CISCOSONETMIB::CspFarEndTotalTable::CspFarEndTotalTable()
    :
    cspfarendtotalentry(this, {"ifindex"})
{

    yang_name = "cspFarEndTotalTable"; yang_parent_name = "CISCO-SONET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSONETMIB::CspFarEndTotalTable::~CspFarEndTotalTable()
{
}

bool CISCOSONETMIB::CspFarEndTotalTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cspfarendtotalentry.len(); index++)
    {
        if(cspfarendtotalentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSONETMIB::CspFarEndTotalTable::has_operation() const
{
    for (std::size_t index=0; index<cspfarendtotalentry.len(); index++)
    {
        if(cspfarendtotalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSONETMIB::CspFarEndTotalTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSONETMIB::CspFarEndTotalTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cspFarEndTotalTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSONETMIB::CspFarEndTotalTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSONETMIB::CspFarEndTotalTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cspFarEndTotalEntry")
    {
        auto ent_ = std::make_shared<CISCOSONETMIB::CspFarEndTotalTable::CspFarEndTotalEntry>();
        ent_->parent = this;
        cspfarendtotalentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSONETMIB::CspFarEndTotalTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cspfarendtotalentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSONETMIB::CspFarEndTotalTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSONETMIB::CspFarEndTotalTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSONETMIB::CspFarEndTotalTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cspFarEndTotalEntry")
        return true;
    return false;
}

CISCOSONETMIB::CspFarEndTotalTable::CspFarEndTotalEntry::CspFarEndTotalEntry()
    :
    ifindex{YType::str, "ifIndex"},
    cspfarendtotaless{YType::uint32, "cspFarEndTotalESs"},
    cspfarendtotalsess{YType::uint32, "cspFarEndTotalSESs"},
    cspfarendtotalcvs{YType::uint32, "cspFarEndTotalCVs"},
    cspfarendtotaluass{YType::uint32, "cspFarEndTotalUASs"}
{

    yang_name = "cspFarEndTotalEntry"; yang_parent_name = "cspFarEndTotalTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSONETMIB::CspFarEndTotalTable::CspFarEndTotalEntry::~CspFarEndTotalEntry()
{
}

bool CISCOSONETMIB::CspFarEndTotalTable::CspFarEndTotalEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| cspfarendtotaless.is_set
	|| cspfarendtotalsess.is_set
	|| cspfarendtotalcvs.is_set
	|| cspfarendtotaluass.is_set;
}

bool CISCOSONETMIB::CspFarEndTotalTable::CspFarEndTotalEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cspfarendtotaless.yfilter)
	|| ydk::is_set(cspfarendtotalsess.yfilter)
	|| ydk::is_set(cspfarendtotalcvs.yfilter)
	|| ydk::is_set(cspfarendtotaluass.yfilter);
}

std::string CISCOSONETMIB::CspFarEndTotalTable::CspFarEndTotalEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/cspFarEndTotalTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSONETMIB::CspFarEndTotalTable::CspFarEndTotalEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cspFarEndTotalEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSONETMIB::CspFarEndTotalTable::CspFarEndTotalEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cspfarendtotaless.is_set || is_set(cspfarendtotaless.yfilter)) leaf_name_data.push_back(cspfarendtotaless.get_name_leafdata());
    if (cspfarendtotalsess.is_set || is_set(cspfarendtotalsess.yfilter)) leaf_name_data.push_back(cspfarendtotalsess.get_name_leafdata());
    if (cspfarendtotalcvs.is_set || is_set(cspfarendtotalcvs.yfilter)) leaf_name_data.push_back(cspfarendtotalcvs.get_name_leafdata());
    if (cspfarendtotaluass.is_set || is_set(cspfarendtotaluass.yfilter)) leaf_name_data.push_back(cspfarendtotaluass.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSONETMIB::CspFarEndTotalTable::CspFarEndTotalEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSONETMIB::CspFarEndTotalTable::CspFarEndTotalEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSONETMIB::CspFarEndTotalTable::CspFarEndTotalEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cspFarEndTotalCVs")
    {
        cspfarendtotalcvs = value;
        cspfarendtotalcvs.value_namespace = name_space;
        cspfarendtotalcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cspFarEndTotalUASs")
    {
        cspfarendtotaluass = value;
        cspfarendtotaluass.value_namespace = name_space;
        cspfarendtotaluass.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSONETMIB::CspFarEndTotalTable::CspFarEndTotalEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cspFarEndTotalESs")
    {
        cspfarendtotaless.yfilter = yfilter;
    }
    if(value_path == "cspFarEndTotalSESs")
    {
        cspfarendtotalsess.yfilter = yfilter;
    }
    if(value_path == "cspFarEndTotalCVs")
    {
        cspfarendtotalcvs.yfilter = yfilter;
    }
    if(value_path == "cspFarEndTotalUASs")
    {
        cspfarendtotaluass.yfilter = yfilter;
    }
}

bool CISCOSONETMIB::CspFarEndTotalTable::CspFarEndTotalEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cspFarEndTotalESs" || name == "cspFarEndTotalSESs" || name == "cspFarEndTotalCVs" || name == "cspFarEndTotalUASs")
        return true;
    return false;
}

CISCOSONETMIB::CspTraceTable::CspTraceTable()
    :
    csptraceentry(this, {"ifindex"})
{

    yang_name = "cspTraceTable"; yang_parent_name = "CISCO-SONET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSONETMIB::CspTraceTable::~CspTraceTable()
{
}

bool CISCOSONETMIB::CspTraceTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<csptraceentry.len(); index++)
    {
        if(csptraceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSONETMIB::CspTraceTable::has_operation() const
{
    for (std::size_t index=0; index<csptraceentry.len(); index++)
    {
        if(csptraceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSONETMIB::CspTraceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSONETMIB::CspTraceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cspTraceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSONETMIB::CspTraceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSONETMIB::CspTraceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cspTraceEntry")
    {
        auto ent_ = std::make_shared<CISCOSONETMIB::CspTraceTable::CspTraceEntry>();
        ent_->parent = this;
        csptraceentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSONETMIB::CspTraceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : csptraceentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSONETMIB::CspTraceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSONETMIB::CspTraceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSONETMIB::CspTraceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cspTraceEntry")
        return true;
    return false;
}

CISCOSONETMIB::CspTraceTable::CspTraceEntry::CspTraceEntry()
    :
    ifindex{YType::str, "ifIndex"},
    csptracetotransmit{YType::str, "cspTraceToTransmit"},
    csptracetoexpect{YType::str, "cspTraceToExpect"},
    csptracefailure{YType::boolean, "cspTraceFailure"},
    csptracereceived{YType::str, "cspTraceReceived"}
{

    yang_name = "cspTraceEntry"; yang_parent_name = "cspTraceTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSONETMIB::CspTraceTable::CspTraceEntry::~CspTraceEntry()
{
}

bool CISCOSONETMIB::CspTraceTable::CspTraceEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| csptracetotransmit.is_set
	|| csptracetoexpect.is_set
	|| csptracefailure.is_set
	|| csptracereceived.is_set;
}

bool CISCOSONETMIB::CspTraceTable::CspTraceEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(csptracetotransmit.yfilter)
	|| ydk::is_set(csptracetoexpect.yfilter)
	|| ydk::is_set(csptracefailure.yfilter)
	|| ydk::is_set(csptracereceived.yfilter);
}

std::string CISCOSONETMIB::CspTraceTable::CspTraceEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/cspTraceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSONETMIB::CspTraceTable::CspTraceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cspTraceEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSONETMIB::CspTraceTable::CspTraceEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (csptracetotransmit.is_set || is_set(csptracetotransmit.yfilter)) leaf_name_data.push_back(csptracetotransmit.get_name_leafdata());
    if (csptracetoexpect.is_set || is_set(csptracetoexpect.yfilter)) leaf_name_data.push_back(csptracetoexpect.get_name_leafdata());
    if (csptracefailure.is_set || is_set(csptracefailure.yfilter)) leaf_name_data.push_back(csptracefailure.get_name_leafdata());
    if (csptracereceived.is_set || is_set(csptracereceived.yfilter)) leaf_name_data.push_back(csptracereceived.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSONETMIB::CspTraceTable::CspTraceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSONETMIB::CspTraceTable::CspTraceEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSONETMIB::CspTraceTable::CspTraceEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cspTraceToTransmit")
    {
        csptracetotransmit = value;
        csptracetotransmit.value_namespace = name_space;
        csptracetotransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cspTraceToExpect")
    {
        csptracetoexpect = value;
        csptracetoexpect.value_namespace = name_space;
        csptracetoexpect.value_namespace_prefix = name_space_prefix;
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
}

void CISCOSONETMIB::CspTraceTable::CspTraceEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cspTraceToTransmit")
    {
        csptracetotransmit.yfilter = yfilter;
    }
    if(value_path == "cspTraceToExpect")
    {
        csptracetoexpect.yfilter = yfilter;
    }
    if(value_path == "cspTraceFailure")
    {
        csptracefailure.yfilter = yfilter;
    }
    if(value_path == "cspTraceReceived")
    {
        csptracereceived.yfilter = yfilter;
    }
}

bool CISCOSONETMIB::CspTraceTable::CspTraceEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cspTraceToTransmit" || name == "cspTraceToExpect" || name == "cspTraceFailure" || name == "cspTraceReceived")
        return true;
    return false;
}

CISCOSONETMIB::CsStatsTable::CsStatsTable()
    :
    csstatsentry(this, {"ifindex"})
{

    yang_name = "csStatsTable"; yang_parent_name = "CISCO-SONET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSONETMIB::CsStatsTable::~CsStatsTable()
{
}

bool CISCOSONETMIB::CsStatsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<csstatsentry.len(); index++)
    {
        if(csstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSONETMIB::CsStatsTable::has_operation() const
{
    for (std::size_t index=0; index<csstatsentry.len(); index++)
    {
        if(csstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSONETMIB::CsStatsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSONETMIB::CsStatsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSONETMIB::CsStatsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSONETMIB::CsStatsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csStatsEntry")
    {
        auto ent_ = std::make_shared<CISCOSONETMIB::CsStatsTable::CsStatsEntry>();
        ent_->parent = this;
        csstatsentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSONETMIB::CsStatsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : csstatsentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSONETMIB::CsStatsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSONETMIB::CsStatsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSONETMIB::CsStatsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csStatsEntry")
        return true;
    return false;
}

CISCOSONETMIB::CsStatsTable::CsStatsEntry::CsStatsEntry()
    :
    ifindex{YType::str, "ifIndex"},
    cssloss{YType::uint32, "cssLOSs"},
    csslofs{YType::uint32, "cssLOFs"},
    cslaiss{YType::uint32, "cslAISs"},
    cslrfis{YType::uint32, "cslRFIs"},
    cspaiss{YType::uint32, "cspAISs"},
    csprfis{YType::uint32, "cspRFIs"}
{

    yang_name = "csStatsEntry"; yang_parent_name = "csStatsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSONETMIB::CsStatsTable::CsStatsEntry::~CsStatsEntry()
{
}

bool CISCOSONETMIB::CsStatsTable::CsStatsEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| cssloss.is_set
	|| csslofs.is_set
	|| cslaiss.is_set
	|| cslrfis.is_set
	|| cspaiss.is_set
	|| csprfis.is_set;
}

bool CISCOSONETMIB::CsStatsTable::CsStatsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cssloss.yfilter)
	|| ydk::is_set(csslofs.yfilter)
	|| ydk::is_set(cslaiss.yfilter)
	|| ydk::is_set(cslrfis.yfilter)
	|| ydk::is_set(cspaiss.yfilter)
	|| ydk::is_set(csprfis.yfilter);
}

std::string CISCOSONETMIB::CsStatsTable::CsStatsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/csStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSONETMIB::CsStatsTable::CsStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csStatsEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSONETMIB::CsStatsTable::CsStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cssloss.is_set || is_set(cssloss.yfilter)) leaf_name_data.push_back(cssloss.get_name_leafdata());
    if (csslofs.is_set || is_set(csslofs.yfilter)) leaf_name_data.push_back(csslofs.get_name_leafdata());
    if (cslaiss.is_set || is_set(cslaiss.yfilter)) leaf_name_data.push_back(cslaiss.get_name_leafdata());
    if (cslrfis.is_set || is_set(cslrfis.yfilter)) leaf_name_data.push_back(cslrfis.get_name_leafdata());
    if (cspaiss.is_set || is_set(cspaiss.yfilter)) leaf_name_data.push_back(cspaiss.get_name_leafdata());
    if (csprfis.is_set || is_set(csprfis.yfilter)) leaf_name_data.push_back(csprfis.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSONETMIB::CsStatsTable::CsStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSONETMIB::CsStatsTable::CsStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSONETMIB::CsStatsTable::CsStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cssLOSs")
    {
        cssloss = value;
        cssloss.value_namespace = name_space;
        cssloss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cssLOFs")
    {
        csslofs = value;
        csslofs.value_namespace = name_space;
        csslofs.value_namespace_prefix = name_space_prefix;
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
}

void CISCOSONETMIB::CsStatsTable::CsStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cssLOSs")
    {
        cssloss.yfilter = yfilter;
    }
    if(value_path == "cssLOFs")
    {
        csslofs.yfilter = yfilter;
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
}

bool CISCOSONETMIB::CsStatsTable::CsStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cssLOSs" || name == "cssLOFs" || name == "cslAISs" || name == "cslRFIs" || name == "cspAISs" || name == "cspRFIs")
        return true;
    return false;
}

CISCOSONETMIB::CsAu4Tug3ConfigTable::CsAu4Tug3ConfigTable()
    :
    csau4tug3configentry(this, {"ifindex", "csau4tug3"})
{

    yang_name = "csAu4Tug3ConfigTable"; yang_parent_name = "CISCO-SONET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSONETMIB::CsAu4Tug3ConfigTable::~CsAu4Tug3ConfigTable()
{
}

bool CISCOSONETMIB::CsAu4Tug3ConfigTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<csau4tug3configentry.len(); index++)
    {
        if(csau4tug3configentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSONETMIB::CsAu4Tug3ConfigTable::has_operation() const
{
    for (std::size_t index=0; index<csau4tug3configentry.len(); index++)
    {
        if(csau4tug3configentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSONETMIB::CsAu4Tug3ConfigTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSONETMIB::CsAu4Tug3ConfigTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csAu4Tug3ConfigTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSONETMIB::CsAu4Tug3ConfigTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSONETMIB::CsAu4Tug3ConfigTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csAu4Tug3ConfigEntry")
    {
        auto ent_ = std::make_shared<CISCOSONETMIB::CsAu4Tug3ConfigTable::CsAu4Tug3ConfigEntry>();
        ent_->parent = this;
        csau4tug3configentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSONETMIB::CsAu4Tug3ConfigTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : csau4tug3configentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSONETMIB::CsAu4Tug3ConfigTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSONETMIB::CsAu4Tug3ConfigTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSONETMIB::CsAu4Tug3ConfigTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csAu4Tug3ConfigEntry")
        return true;
    return false;
}

CISCOSONETMIB::CsAu4Tug3ConfigTable::CsAu4Tug3ConfigEntry::CsAu4Tug3ConfigEntry()
    :
    ifindex{YType::str, "ifIndex"},
    csau4tug3{YType::int32, "csAu4Tug3"},
    csau4tug3payload{YType::enumeration, "csAu4Tug3Payload"}
{

    yang_name = "csAu4Tug3ConfigEntry"; yang_parent_name = "csAu4Tug3ConfigTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSONETMIB::CsAu4Tug3ConfigTable::CsAu4Tug3ConfigEntry::~CsAu4Tug3ConfigEntry()
{
}

bool CISCOSONETMIB::CsAu4Tug3ConfigTable::CsAu4Tug3ConfigEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| csau4tug3.is_set
	|| csau4tug3payload.is_set;
}

bool CISCOSONETMIB::CsAu4Tug3ConfigTable::CsAu4Tug3ConfigEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(csau4tug3.yfilter)
	|| ydk::is_set(csau4tug3payload.yfilter);
}

std::string CISCOSONETMIB::CsAu4Tug3ConfigTable::CsAu4Tug3ConfigEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SONET-MIB:CISCO-SONET-MIB/csAu4Tug3ConfigTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSONETMIB::CsAu4Tug3ConfigTable::CsAu4Tug3ConfigEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csAu4Tug3ConfigEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(csau4tug3, "csAu4Tug3");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSONETMIB::CsAu4Tug3ConfigTable::CsAu4Tug3ConfigEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (csau4tug3.is_set || is_set(csau4tug3.yfilter)) leaf_name_data.push_back(csau4tug3.get_name_leafdata());
    if (csau4tug3payload.is_set || is_set(csau4tug3payload.yfilter)) leaf_name_data.push_back(csau4tug3payload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSONETMIB::CsAu4Tug3ConfigTable::CsAu4Tug3ConfigEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSONETMIB::CsAu4Tug3ConfigTable::CsAu4Tug3ConfigEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSONETMIB::CsAu4Tug3ConfigTable::CsAu4Tug3ConfigEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOSONETMIB::CsAu4Tug3ConfigTable::CsAu4Tug3ConfigEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOSONETMIB::CsAu4Tug3ConfigTable::CsAu4Tug3ConfigEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "csAu4Tug3" || name == "csAu4Tug3Payload")
        return true;
    return false;
}

const Enum::YLeaf CsApsLineSwitchReason::csApsOther {1, "csApsOther"};
const Enum::YLeaf CsApsLineSwitchReason::csApsRevertive {2, "csApsRevertive"};
const Enum::YLeaf CsApsLineSwitchReason::csApsManual {3, "csApsManual"};
const Enum::YLeaf CsApsLineSwitchReason::csApsSignalDefectLow {4, "csApsSignalDefectLow"};
const Enum::YLeaf CsApsLineSwitchReason::csApsSignalDefectHigh {5, "csApsSignalDefectHigh"};
const Enum::YLeaf CsApsLineSwitchReason::csApsSignalFailureLow {6, "csApsSignalFailureLow"};
const Enum::YLeaf CsApsLineSwitchReason::csApsSignalFailureHigh {7, "csApsSignalFailureHigh"};
const Enum::YLeaf CsApsLineSwitchReason::csApsForceSwitch {8, "csApsForceSwitch"};
const Enum::YLeaf CsApsLineSwitchReason::csApsLockOut {9, "csApsLockOut"};
const Enum::YLeaf CsApsLineSwitchReason::csApsNoSwitch {10, "csApsNoSwitch"};

const Enum::YLeaf CsApsLineFailureCode::csApsChannelMismatch {1, "csApsChannelMismatch"};
const Enum::YLeaf CsApsLineFailureCode::csApsProtectionByteFail {2, "csApsProtectionByteFail"};
const Enum::YLeaf CsApsLineFailureCode::csApsFEProtectionFailure {3, "csApsFEProtectionFailure"};
const Enum::YLeaf CsApsLineFailureCode::csApsModeMismatch {4, "csApsModeMismatch"};

const Enum::YLeaf CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsConfigLoopbackType::noLoopback {1, "noLoopback"};
const Enum::YLeaf CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsConfigLoopbackType::lineLocal {2, "lineLocal"};
const Enum::YLeaf CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsConfigLoopbackType::lineRemote {3, "lineRemote"};

const Enum::YLeaf CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsConfigXmtClockSource::loopTiming {1, "loopTiming"};
const Enum::YLeaf CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsConfigXmtClockSource::localTiming {2, "localTiming"};

const Enum::YLeaf CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsConfigFrameScramble::disabled {1, "disabled"};
const Enum::YLeaf CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsConfigFrameScramble::enabled {2, "enabled"};

const Enum::YLeaf CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsConfigType::sonetSts3c {1, "sonetSts3c"};
const Enum::YLeaf CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsConfigType::sonetStm1 {2, "sonetStm1"};
const Enum::YLeaf CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsConfigType::sonetSts12c {3, "sonetSts12c"};
const Enum::YLeaf CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsConfigType::sonetStm4 {4, "sonetStm4"};
const Enum::YLeaf CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsConfigType::sonetSts48c {5, "sonetSts48c"};
const Enum::YLeaf CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsConfigType::sonetStm16 {6, "sonetStm16"};
const Enum::YLeaf CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsConfigType::sonetSts192c {7, "sonetSts192c"};
const Enum::YLeaf CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsConfigType::sonetStm64 {8, "sonetStm64"};
const Enum::YLeaf CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsConfigType::sonetSts3 {9, "sonetSts3"};

const Enum::YLeaf CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsConfigRDIVType::onebit {1, "onebit"};
const Enum::YLeaf CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsConfigRDIVType::threebit {3, "threebit"};

const Enum::YLeaf CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsConfigRDIPType::onebit {1, "onebit"};
const Enum::YLeaf CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsConfigRDIPType::threebit {3, "threebit"};

const Enum::YLeaf CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsTributaryType::vt15vc11 {1, "vt15vc11"};
const Enum::YLeaf CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsTributaryType::vt2vc12 {2, "vt2vc12"};

const Enum::YLeaf CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsTributaryMappingType::asynchronous {1, "asynchronous"};
const Enum::YLeaf CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsTributaryMappingType::byteSynchronous {2, "byteSynchronous"};

const Enum::YLeaf CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsTributaryFramingType::notApplicable {1, "notApplicable"};
const Enum::YLeaf CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsTributaryFramingType::dsx1D4 {2, "dsx1D4"};
const Enum::YLeaf CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsTributaryFramingType::dsx1ESF {3, "dsx1ESF"};

const Enum::YLeaf CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsSignallingTransportMode::notApplicable {1, "notApplicable"};
const Enum::YLeaf CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsSignallingTransportMode::signallingTransferMode {2, "signallingTransferMode"};
const Enum::YLeaf CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsSignallingTransportMode::clearMode {3, "clearMode"};

const Enum::YLeaf CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsTributaryGroupingType::notApplicable {1, "notApplicable"};
const Enum::YLeaf CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsTributaryGroupingType::au3Grouping {2, "au3Grouping"};
const Enum::YLeaf CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsTributaryGroupingType::au4Grouping {3, "au4Grouping"};

const Enum::YLeaf CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsEnable::csApsDisabled {1, "csApsDisabled"};
const Enum::YLeaf CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsEnable::csApsEnabled {2, "csApsEnabled"};

const Enum::YLeaf CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsArchMode::onePlusOne {1, "onePlusOne"};
const Enum::YLeaf CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsArchMode::oneToOne {2, "oneToOne"};
const Enum::YLeaf CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsArchMode::anexBOnePlusOne {3, "anexBOnePlusOne"};
const Enum::YLeaf CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsArchMode::ycableOnePlusOneNok1k2 {4, "ycableOnePlusOneNok1k2"};
const Enum::YLeaf CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsArchMode::straightOnePlusOneNok1k2 {5, "straightOnePlusOneNok1k2"};

const Enum::YLeaf CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsActiveLine::csApsWorkingLine {1, "csApsWorkingLine"};
const Enum::YLeaf CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsActiveLine::csApsProtectionLine {2, "csApsProtectionLine"};
const Enum::YLeaf CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsActiveLine::csApsNone {3, "csApsNone"};

const Enum::YLeaf CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsDirection::uniDirectional {1, "uniDirectional"};
const Enum::YLeaf CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsDirection::biDirectional {2, "biDirectional"};

const Enum::YLeaf CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsRevertive::nonrevertive {1, "nonrevertive"};
const Enum::YLeaf CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsRevertive::revertive {2, "revertive"};

const Enum::YLeaf CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsDirectionOperational::uniDirectional {1, "uniDirectional"};
const Enum::YLeaf CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsDirectionOperational::biDirectional {2, "biDirectional"};

const Enum::YLeaf CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsArchModeOperational::onePlusOne {1, "onePlusOne"};
const Enum::YLeaf CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsArchModeOperational::oneToOne {2, "oneToOne"};
const Enum::YLeaf CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsArchModeOperational::anexBOnePlusOne {3, "anexBOnePlusOne"};
const Enum::YLeaf CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsArchModeOperational::ycableOnePlusOneNok1k2 {4, "ycableOnePlusOneNok1k2"};
const Enum::YLeaf CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsArchModeOperational::straightOnePlusOneNok1k2 {5, "straightOnePlusOneNok1k2"};

const Enum::YLeaf CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsChannelProtocol::bellcore {1, "bellcore"};
const Enum::YLeaf CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsChannelProtocol::itu {2, "itu"};

const Enum::YLeaf CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsPrimarySection::workingSection1 {1, "workingSection1"};
const Enum::YLeaf CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsPrimarySection::workingSection2 {2, "workingSection2"};
const Enum::YLeaf CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsPrimarySection::none {3, "none"};

const Enum::YLeaf CISCOSONETMIB::CsAu4Tug3ConfigTable::CsAu4Tug3ConfigEntry::CsAu4Tug3Payload::other {1, "other"};
const Enum::YLeaf CISCOSONETMIB::CsAu4Tug3ConfigTable::CsAu4Tug3ConfigEntry::CsAu4Tug3Payload::vc11 {2, "vc11"};
const Enum::YLeaf CISCOSONETMIB::CsAu4Tug3ConfigTable::CsAu4Tug3ConfigEntry::CsAu4Tug3Payload::vc12 {3, "vc12"};
const Enum::YLeaf CISCOSONETMIB::CsAu4Tug3ConfigTable::CsAu4Tug3ConfigEntry::CsAu4Tug3Payload::tu3ds3 {4, "tu3ds3"};
const Enum::YLeaf CISCOSONETMIB::CsAu4Tug3ConfigTable::CsAu4Tug3ConfigEntry::CsAu4Tug3Payload::tu3e3 {5, "tu3e3"};


}
}

