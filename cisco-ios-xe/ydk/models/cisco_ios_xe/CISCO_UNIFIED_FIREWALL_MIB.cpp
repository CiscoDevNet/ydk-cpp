
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_UNIFIED_FIREWALL_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_UNIFIED_FIREWALL_MIB {

CISCOUNIFIEDFIREWALLMIB::CISCOUNIFIEDFIREWALLMIB()
    :
    cufwconnectionglobals(std::make_shared<CISCOUNIFIEDFIREWALLMIB::CuFwConnectionGlobals>())
    , cufwconnectionresources(std::make_shared<CISCOUNIFIEDFIREWALLMIB::CuFwConnectionResources>())
    , cufwconnectionreportsettings(std::make_shared<CISCOUNIFIEDFIREWALLMIB::CuFwConnectionReportSettings>())
    , cufwapplinspectiongrp(std::make_shared<CISCOUNIFIEDFIREWALLMIB::CuFwApplInspectionGrp>())
    , cufwurlfilterglobals(std::make_shared<CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterGlobals>())
    , cufwurlfilterresourceusage(std::make_shared<CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterResourceUsage>())
    , cufwaaicglobals(std::make_shared<CISCOUNIFIEDFIREWALLMIB::CufwAaicGlobals>())
    , cufwaaichttpprotocolstats(std::make_shared<CISCOUNIFIEDFIREWALLMIB::CufwAaicHttpProtocolStats>())
    , cufwl2fwglobals(std::make_shared<CISCOUNIFIEDFIREWALLMIB::CufwL2FwGlobals>())
    , cufwnotifcntlgrp(std::make_shared<CISCOUNIFIEDFIREWALLMIB::CuFwNotifCntlGrp>())
    , cufwconnsummarytable(std::make_shared<CISCOUNIFIEDFIREWALLMIB::CufwConnSummaryTable>())
    , cufwappconnsummarytable(std::make_shared<CISCOUNIFIEDFIREWALLMIB::CufwAppConnSummaryTable>())
    , cufwpolicyconnsummarytable(std::make_shared<CISCOUNIFIEDFIREWALLMIB::CufwPolicyConnSummaryTable>())
    , cufwpolicyappconnsummarytable(std::make_shared<CISCOUNIFIEDFIREWALLMIB::CufwPolicyAppConnSummaryTable>())
    , cufwinspectiontable(std::make_shared<CISCOUNIFIEDFIREWALLMIB::CufwInspectionTable>())
    , cufwurlfservertable(std::make_shared<CISCOUNIFIEDFIREWALLMIB::CufwUrlfServerTable>())
{
    cufwconnectionglobals->parent = this;
    cufwconnectionresources->parent = this;
    cufwconnectionreportsettings->parent = this;
    cufwapplinspectiongrp->parent = this;
    cufwurlfilterglobals->parent = this;
    cufwurlfilterresourceusage->parent = this;
    cufwaaicglobals->parent = this;
    cufwaaichttpprotocolstats->parent = this;
    cufwl2fwglobals->parent = this;
    cufwnotifcntlgrp->parent = this;
    cufwconnsummarytable->parent = this;
    cufwappconnsummarytable->parent = this;
    cufwpolicyconnsummarytable->parent = this;
    cufwpolicyappconnsummarytable->parent = this;
    cufwinspectiontable->parent = this;
    cufwurlfservertable->parent = this;

    yang_name = "CISCO-UNIFIED-FIREWALL-MIB"; yang_parent_name = "CISCO-UNIFIED-FIREWALL-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOUNIFIEDFIREWALLMIB::~CISCOUNIFIEDFIREWALLMIB()
{
}

bool CISCOUNIFIEDFIREWALLMIB::has_data() const
{
    if (is_presence_container) return true;
    return (cufwconnectionglobals !=  nullptr && cufwconnectionglobals->has_data())
	|| (cufwconnectionresources !=  nullptr && cufwconnectionresources->has_data())
	|| (cufwconnectionreportsettings !=  nullptr && cufwconnectionreportsettings->has_data())
	|| (cufwapplinspectiongrp !=  nullptr && cufwapplinspectiongrp->has_data())
	|| (cufwurlfilterglobals !=  nullptr && cufwurlfilterglobals->has_data())
	|| (cufwurlfilterresourceusage !=  nullptr && cufwurlfilterresourceusage->has_data())
	|| (cufwaaicglobals !=  nullptr && cufwaaicglobals->has_data())
	|| (cufwaaichttpprotocolstats !=  nullptr && cufwaaichttpprotocolstats->has_data())
	|| (cufwl2fwglobals !=  nullptr && cufwl2fwglobals->has_data())
	|| (cufwnotifcntlgrp !=  nullptr && cufwnotifcntlgrp->has_data())
	|| (cufwconnsummarytable !=  nullptr && cufwconnsummarytable->has_data())
	|| (cufwappconnsummarytable !=  nullptr && cufwappconnsummarytable->has_data())
	|| (cufwpolicyconnsummarytable !=  nullptr && cufwpolicyconnsummarytable->has_data())
	|| (cufwpolicyappconnsummarytable !=  nullptr && cufwpolicyappconnsummarytable->has_data())
	|| (cufwinspectiontable !=  nullptr && cufwinspectiontable->has_data())
	|| (cufwurlfservertable !=  nullptr && cufwurlfservertable->has_data());
}

bool CISCOUNIFIEDFIREWALLMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cufwconnectionglobals !=  nullptr && cufwconnectionglobals->has_operation())
	|| (cufwconnectionresources !=  nullptr && cufwconnectionresources->has_operation())
	|| (cufwconnectionreportsettings !=  nullptr && cufwconnectionreportsettings->has_operation())
	|| (cufwapplinspectiongrp !=  nullptr && cufwapplinspectiongrp->has_operation())
	|| (cufwurlfilterglobals !=  nullptr && cufwurlfilterglobals->has_operation())
	|| (cufwurlfilterresourceusage !=  nullptr && cufwurlfilterresourceusage->has_operation())
	|| (cufwaaicglobals !=  nullptr && cufwaaicglobals->has_operation())
	|| (cufwaaichttpprotocolstats !=  nullptr && cufwaaichttpprotocolstats->has_operation())
	|| (cufwl2fwglobals !=  nullptr && cufwl2fwglobals->has_operation())
	|| (cufwnotifcntlgrp !=  nullptr && cufwnotifcntlgrp->has_operation())
	|| (cufwconnsummarytable !=  nullptr && cufwconnsummarytable->has_operation())
	|| (cufwappconnsummarytable !=  nullptr && cufwappconnsummarytable->has_operation())
	|| (cufwpolicyconnsummarytable !=  nullptr && cufwpolicyconnsummarytable->has_operation())
	|| (cufwpolicyappconnsummarytable !=  nullptr && cufwpolicyappconnsummarytable->has_operation())
	|| (cufwinspectiontable !=  nullptr && cufwinspectiontable->has_operation())
	|| (cufwurlfservertable !=  nullptr && cufwurlfservertable->has_operation());
}

std::string CISCOUNIFIEDFIREWALLMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-UNIFIED-FIREWALL-MIB:CISCO-UNIFIED-FIREWALL-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOUNIFIEDFIREWALLMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOUNIFIEDFIREWALLMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cuFwConnectionGlobals")
    {
        if(cufwconnectionglobals == nullptr)
        {
            cufwconnectionglobals = std::make_shared<CISCOUNIFIEDFIREWALLMIB::CuFwConnectionGlobals>();
        }
        return cufwconnectionglobals;
    }

    if(child_yang_name == "cuFwConnectionResources")
    {
        if(cufwconnectionresources == nullptr)
        {
            cufwconnectionresources = std::make_shared<CISCOUNIFIEDFIREWALLMIB::CuFwConnectionResources>();
        }
        return cufwconnectionresources;
    }

    if(child_yang_name == "cuFwConnectionReportSettings")
    {
        if(cufwconnectionreportsettings == nullptr)
        {
            cufwconnectionreportsettings = std::make_shared<CISCOUNIFIEDFIREWALLMIB::CuFwConnectionReportSettings>();
        }
        return cufwconnectionreportsettings;
    }

    if(child_yang_name == "cuFwApplInspectionGrp")
    {
        if(cufwapplinspectiongrp == nullptr)
        {
            cufwapplinspectiongrp = std::make_shared<CISCOUNIFIEDFIREWALLMIB::CuFwApplInspectionGrp>();
        }
        return cufwapplinspectiongrp;
    }

    if(child_yang_name == "cufwUrlFilterGlobals")
    {
        if(cufwurlfilterglobals == nullptr)
        {
            cufwurlfilterglobals = std::make_shared<CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterGlobals>();
        }
        return cufwurlfilterglobals;
    }

    if(child_yang_name == "cufwUrlFilterResourceUsage")
    {
        if(cufwurlfilterresourceusage == nullptr)
        {
            cufwurlfilterresourceusage = std::make_shared<CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterResourceUsage>();
        }
        return cufwurlfilterresourceusage;
    }

    if(child_yang_name == "cufwAaicGlobals")
    {
        if(cufwaaicglobals == nullptr)
        {
            cufwaaicglobals = std::make_shared<CISCOUNIFIEDFIREWALLMIB::CufwAaicGlobals>();
        }
        return cufwaaicglobals;
    }

    if(child_yang_name == "cufwAaicHttpProtocolStats")
    {
        if(cufwaaichttpprotocolstats == nullptr)
        {
            cufwaaichttpprotocolstats = std::make_shared<CISCOUNIFIEDFIREWALLMIB::CufwAaicHttpProtocolStats>();
        }
        return cufwaaichttpprotocolstats;
    }

    if(child_yang_name == "cufwL2FwGlobals")
    {
        if(cufwl2fwglobals == nullptr)
        {
            cufwl2fwglobals = std::make_shared<CISCOUNIFIEDFIREWALLMIB::CufwL2FwGlobals>();
        }
        return cufwl2fwglobals;
    }

    if(child_yang_name == "cuFwNotifCntlGrp")
    {
        if(cufwnotifcntlgrp == nullptr)
        {
            cufwnotifcntlgrp = std::make_shared<CISCOUNIFIEDFIREWALLMIB::CuFwNotifCntlGrp>();
        }
        return cufwnotifcntlgrp;
    }

    if(child_yang_name == "cufwConnSummaryTable")
    {
        if(cufwconnsummarytable == nullptr)
        {
            cufwconnsummarytable = std::make_shared<CISCOUNIFIEDFIREWALLMIB::CufwConnSummaryTable>();
        }
        return cufwconnsummarytable;
    }

    if(child_yang_name == "cufwAppConnSummaryTable")
    {
        if(cufwappconnsummarytable == nullptr)
        {
            cufwappconnsummarytable = std::make_shared<CISCOUNIFIEDFIREWALLMIB::CufwAppConnSummaryTable>();
        }
        return cufwappconnsummarytable;
    }

    if(child_yang_name == "cufwPolicyConnSummaryTable")
    {
        if(cufwpolicyconnsummarytable == nullptr)
        {
            cufwpolicyconnsummarytable = std::make_shared<CISCOUNIFIEDFIREWALLMIB::CufwPolicyConnSummaryTable>();
        }
        return cufwpolicyconnsummarytable;
    }

    if(child_yang_name == "cufwPolicyAppConnSummaryTable")
    {
        if(cufwpolicyappconnsummarytable == nullptr)
        {
            cufwpolicyappconnsummarytable = std::make_shared<CISCOUNIFIEDFIREWALLMIB::CufwPolicyAppConnSummaryTable>();
        }
        return cufwpolicyappconnsummarytable;
    }

    if(child_yang_name == "cufwInspectionTable")
    {
        if(cufwinspectiontable == nullptr)
        {
            cufwinspectiontable = std::make_shared<CISCOUNIFIEDFIREWALLMIB::CufwInspectionTable>();
        }
        return cufwinspectiontable;
    }

    if(child_yang_name == "cufwUrlfServerTable")
    {
        if(cufwurlfservertable == nullptr)
        {
            cufwurlfservertable = std::make_shared<CISCOUNIFIEDFIREWALLMIB::CufwUrlfServerTable>();
        }
        return cufwurlfservertable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOUNIFIEDFIREWALLMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cufwconnectionglobals != nullptr)
    {
        children["cuFwConnectionGlobals"] = cufwconnectionglobals;
    }

    if(cufwconnectionresources != nullptr)
    {
        children["cuFwConnectionResources"] = cufwconnectionresources;
    }

    if(cufwconnectionreportsettings != nullptr)
    {
        children["cuFwConnectionReportSettings"] = cufwconnectionreportsettings;
    }

    if(cufwapplinspectiongrp != nullptr)
    {
        children["cuFwApplInspectionGrp"] = cufwapplinspectiongrp;
    }

    if(cufwurlfilterglobals != nullptr)
    {
        children["cufwUrlFilterGlobals"] = cufwurlfilterglobals;
    }

    if(cufwurlfilterresourceusage != nullptr)
    {
        children["cufwUrlFilterResourceUsage"] = cufwurlfilterresourceusage;
    }

    if(cufwaaicglobals != nullptr)
    {
        children["cufwAaicGlobals"] = cufwaaicglobals;
    }

    if(cufwaaichttpprotocolstats != nullptr)
    {
        children["cufwAaicHttpProtocolStats"] = cufwaaichttpprotocolstats;
    }

    if(cufwl2fwglobals != nullptr)
    {
        children["cufwL2FwGlobals"] = cufwl2fwglobals;
    }

    if(cufwnotifcntlgrp != nullptr)
    {
        children["cuFwNotifCntlGrp"] = cufwnotifcntlgrp;
    }

    if(cufwconnsummarytable != nullptr)
    {
        children["cufwConnSummaryTable"] = cufwconnsummarytable;
    }

    if(cufwappconnsummarytable != nullptr)
    {
        children["cufwAppConnSummaryTable"] = cufwappconnsummarytable;
    }

    if(cufwpolicyconnsummarytable != nullptr)
    {
        children["cufwPolicyConnSummaryTable"] = cufwpolicyconnsummarytable;
    }

    if(cufwpolicyappconnsummarytable != nullptr)
    {
        children["cufwPolicyAppConnSummaryTable"] = cufwpolicyappconnsummarytable;
    }

    if(cufwinspectiontable != nullptr)
    {
        children["cufwInspectionTable"] = cufwinspectiontable;
    }

    if(cufwurlfservertable != nullptr)
    {
        children["cufwUrlfServerTable"] = cufwurlfservertable;
    }

    return children;
}

void CISCOUNIFIEDFIREWALLMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOUNIFIEDFIREWALLMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOUNIFIEDFIREWALLMIB::clone_ptr() const
{
    return std::make_shared<CISCOUNIFIEDFIREWALLMIB>();
}

std::string CISCOUNIFIEDFIREWALLMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOUNIFIEDFIREWALLMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOUNIFIEDFIREWALLMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOUNIFIEDFIREWALLMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOUNIFIEDFIREWALLMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cuFwConnectionGlobals" || name == "cuFwConnectionResources" || name == "cuFwConnectionReportSettings" || name == "cuFwApplInspectionGrp" || name == "cufwUrlFilterGlobals" || name == "cufwUrlFilterResourceUsage" || name == "cufwAaicGlobals" || name == "cufwAaicHttpProtocolStats" || name == "cufwL2FwGlobals" || name == "cuFwNotifCntlGrp" || name == "cufwConnSummaryTable" || name == "cufwAppConnSummaryTable" || name == "cufwPolicyConnSummaryTable" || name == "cufwPolicyAppConnSummaryTable" || name == "cufwInspectionTable" || name == "cufwUrlfServerTable")
        return true;
    return false;
}

CISCOUNIFIEDFIREWALLMIB::CuFwConnectionGlobals::CuFwConnectionGlobals()
    :
    cufwconnglobalnumattempted{YType::uint64, "cufwConnGlobalNumAttempted"},
    cufwconnglobalnumsetupsaborted{YType::uint64, "cufwConnGlobalNumSetupsAborted"},
    cufwconnglobalnumpolicydeclined{YType::uint64, "cufwConnGlobalNumPolicyDeclined"},
    cufwconnglobalnumresdeclined{YType::uint64, "cufwConnGlobalNumResDeclined"},
    cufwconnglobalnumhalfopen{YType::uint32, "cufwConnGlobalNumHalfOpen"},
    cufwconnglobalnumactive{YType::uint32, "cufwConnGlobalNumActive"},
    cufwconnglobalnumexpired{YType::uint64, "cufwConnGlobalNumExpired"},
    cufwconnglobalnumaborted{YType::uint64, "cufwConnGlobalNumAborted"},
    cufwconnglobalnumembryonic{YType::uint32, "cufwConnGlobalNumEmbryonic"},
    cufwconnglobalconnsetuprate1{YType::uint32, "cufwConnGlobalConnSetupRate1"},
    cufwconnglobalconnsetuprate5{YType::uint32, "cufwConnGlobalConnSetupRate5"},
    cufwconnglobalnumremoteaccess{YType::uint32, "cufwConnGlobalNumRemoteAccess"}
{

    yang_name = "cuFwConnectionGlobals"; yang_parent_name = "CISCO-UNIFIED-FIREWALL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOUNIFIEDFIREWALLMIB::CuFwConnectionGlobals::~CuFwConnectionGlobals()
{
}

bool CISCOUNIFIEDFIREWALLMIB::CuFwConnectionGlobals::has_data() const
{
    if (is_presence_container) return true;
    return cufwconnglobalnumattempted.is_set
	|| cufwconnglobalnumsetupsaborted.is_set
	|| cufwconnglobalnumpolicydeclined.is_set
	|| cufwconnglobalnumresdeclined.is_set
	|| cufwconnglobalnumhalfopen.is_set
	|| cufwconnglobalnumactive.is_set
	|| cufwconnglobalnumexpired.is_set
	|| cufwconnglobalnumaborted.is_set
	|| cufwconnglobalnumembryonic.is_set
	|| cufwconnglobalconnsetuprate1.is_set
	|| cufwconnglobalconnsetuprate5.is_set
	|| cufwconnglobalnumremoteaccess.is_set;
}

bool CISCOUNIFIEDFIREWALLMIB::CuFwConnectionGlobals::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cufwconnglobalnumattempted.yfilter)
	|| ydk::is_set(cufwconnglobalnumsetupsaborted.yfilter)
	|| ydk::is_set(cufwconnglobalnumpolicydeclined.yfilter)
	|| ydk::is_set(cufwconnglobalnumresdeclined.yfilter)
	|| ydk::is_set(cufwconnglobalnumhalfopen.yfilter)
	|| ydk::is_set(cufwconnglobalnumactive.yfilter)
	|| ydk::is_set(cufwconnglobalnumexpired.yfilter)
	|| ydk::is_set(cufwconnglobalnumaborted.yfilter)
	|| ydk::is_set(cufwconnglobalnumembryonic.yfilter)
	|| ydk::is_set(cufwconnglobalconnsetuprate1.yfilter)
	|| ydk::is_set(cufwconnglobalconnsetuprate5.yfilter)
	|| ydk::is_set(cufwconnglobalnumremoteaccess.yfilter);
}

std::string CISCOUNIFIEDFIREWALLMIB::CuFwConnectionGlobals::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-UNIFIED-FIREWALL-MIB:CISCO-UNIFIED-FIREWALL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOUNIFIEDFIREWALLMIB::CuFwConnectionGlobals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cuFwConnectionGlobals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOUNIFIEDFIREWALLMIB::CuFwConnectionGlobals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cufwconnglobalnumattempted.is_set || is_set(cufwconnglobalnumattempted.yfilter)) leaf_name_data.push_back(cufwconnglobalnumattempted.get_name_leafdata());
    if (cufwconnglobalnumsetupsaborted.is_set || is_set(cufwconnglobalnumsetupsaborted.yfilter)) leaf_name_data.push_back(cufwconnglobalnumsetupsaborted.get_name_leafdata());
    if (cufwconnglobalnumpolicydeclined.is_set || is_set(cufwconnglobalnumpolicydeclined.yfilter)) leaf_name_data.push_back(cufwconnglobalnumpolicydeclined.get_name_leafdata());
    if (cufwconnglobalnumresdeclined.is_set || is_set(cufwconnglobalnumresdeclined.yfilter)) leaf_name_data.push_back(cufwconnglobalnumresdeclined.get_name_leafdata());
    if (cufwconnglobalnumhalfopen.is_set || is_set(cufwconnglobalnumhalfopen.yfilter)) leaf_name_data.push_back(cufwconnglobalnumhalfopen.get_name_leafdata());
    if (cufwconnglobalnumactive.is_set || is_set(cufwconnglobalnumactive.yfilter)) leaf_name_data.push_back(cufwconnglobalnumactive.get_name_leafdata());
    if (cufwconnglobalnumexpired.is_set || is_set(cufwconnglobalnumexpired.yfilter)) leaf_name_data.push_back(cufwconnglobalnumexpired.get_name_leafdata());
    if (cufwconnglobalnumaborted.is_set || is_set(cufwconnglobalnumaborted.yfilter)) leaf_name_data.push_back(cufwconnglobalnumaborted.get_name_leafdata());
    if (cufwconnglobalnumembryonic.is_set || is_set(cufwconnglobalnumembryonic.yfilter)) leaf_name_data.push_back(cufwconnglobalnumembryonic.get_name_leafdata());
    if (cufwconnglobalconnsetuprate1.is_set || is_set(cufwconnglobalconnsetuprate1.yfilter)) leaf_name_data.push_back(cufwconnglobalconnsetuprate1.get_name_leafdata());
    if (cufwconnglobalconnsetuprate5.is_set || is_set(cufwconnglobalconnsetuprate5.yfilter)) leaf_name_data.push_back(cufwconnglobalconnsetuprate5.get_name_leafdata());
    if (cufwconnglobalnumremoteaccess.is_set || is_set(cufwconnglobalnumremoteaccess.yfilter)) leaf_name_data.push_back(cufwconnglobalnumremoteaccess.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOUNIFIEDFIREWALLMIB::CuFwConnectionGlobals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOUNIFIEDFIREWALLMIB::CuFwConnectionGlobals::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOUNIFIEDFIREWALLMIB::CuFwConnectionGlobals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cufwConnGlobalNumAttempted")
    {
        cufwconnglobalnumattempted = value;
        cufwconnglobalnumattempted.value_namespace = name_space;
        cufwconnglobalnumattempted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwConnGlobalNumSetupsAborted")
    {
        cufwconnglobalnumsetupsaborted = value;
        cufwconnglobalnumsetupsaborted.value_namespace = name_space;
        cufwconnglobalnumsetupsaborted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwConnGlobalNumPolicyDeclined")
    {
        cufwconnglobalnumpolicydeclined = value;
        cufwconnglobalnumpolicydeclined.value_namespace = name_space;
        cufwconnglobalnumpolicydeclined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwConnGlobalNumResDeclined")
    {
        cufwconnglobalnumresdeclined = value;
        cufwconnglobalnumresdeclined.value_namespace = name_space;
        cufwconnglobalnumresdeclined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwConnGlobalNumHalfOpen")
    {
        cufwconnglobalnumhalfopen = value;
        cufwconnglobalnumhalfopen.value_namespace = name_space;
        cufwconnglobalnumhalfopen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwConnGlobalNumActive")
    {
        cufwconnglobalnumactive = value;
        cufwconnglobalnumactive.value_namespace = name_space;
        cufwconnglobalnumactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwConnGlobalNumExpired")
    {
        cufwconnglobalnumexpired = value;
        cufwconnglobalnumexpired.value_namespace = name_space;
        cufwconnglobalnumexpired.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwConnGlobalNumAborted")
    {
        cufwconnglobalnumaborted = value;
        cufwconnglobalnumaborted.value_namespace = name_space;
        cufwconnglobalnumaborted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwConnGlobalNumEmbryonic")
    {
        cufwconnglobalnumembryonic = value;
        cufwconnglobalnumembryonic.value_namespace = name_space;
        cufwconnglobalnumembryonic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwConnGlobalConnSetupRate1")
    {
        cufwconnglobalconnsetuprate1 = value;
        cufwconnglobalconnsetuprate1.value_namespace = name_space;
        cufwconnglobalconnsetuprate1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwConnGlobalConnSetupRate5")
    {
        cufwconnglobalconnsetuprate5 = value;
        cufwconnglobalconnsetuprate5.value_namespace = name_space;
        cufwconnglobalconnsetuprate5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwConnGlobalNumRemoteAccess")
    {
        cufwconnglobalnumremoteaccess = value;
        cufwconnglobalnumremoteaccess.value_namespace = name_space;
        cufwconnglobalnumremoteaccess.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOUNIFIEDFIREWALLMIB::CuFwConnectionGlobals::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cufwConnGlobalNumAttempted")
    {
        cufwconnglobalnumattempted.yfilter = yfilter;
    }
    if(value_path == "cufwConnGlobalNumSetupsAborted")
    {
        cufwconnglobalnumsetupsaborted.yfilter = yfilter;
    }
    if(value_path == "cufwConnGlobalNumPolicyDeclined")
    {
        cufwconnglobalnumpolicydeclined.yfilter = yfilter;
    }
    if(value_path == "cufwConnGlobalNumResDeclined")
    {
        cufwconnglobalnumresdeclined.yfilter = yfilter;
    }
    if(value_path == "cufwConnGlobalNumHalfOpen")
    {
        cufwconnglobalnumhalfopen.yfilter = yfilter;
    }
    if(value_path == "cufwConnGlobalNumActive")
    {
        cufwconnglobalnumactive.yfilter = yfilter;
    }
    if(value_path == "cufwConnGlobalNumExpired")
    {
        cufwconnglobalnumexpired.yfilter = yfilter;
    }
    if(value_path == "cufwConnGlobalNumAborted")
    {
        cufwconnglobalnumaborted.yfilter = yfilter;
    }
    if(value_path == "cufwConnGlobalNumEmbryonic")
    {
        cufwconnglobalnumembryonic.yfilter = yfilter;
    }
    if(value_path == "cufwConnGlobalConnSetupRate1")
    {
        cufwconnglobalconnsetuprate1.yfilter = yfilter;
    }
    if(value_path == "cufwConnGlobalConnSetupRate5")
    {
        cufwconnglobalconnsetuprate5.yfilter = yfilter;
    }
    if(value_path == "cufwConnGlobalNumRemoteAccess")
    {
        cufwconnglobalnumremoteaccess.yfilter = yfilter;
    }
}

bool CISCOUNIFIEDFIREWALLMIB::CuFwConnectionGlobals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cufwConnGlobalNumAttempted" || name == "cufwConnGlobalNumSetupsAborted" || name == "cufwConnGlobalNumPolicyDeclined" || name == "cufwConnGlobalNumResDeclined" || name == "cufwConnGlobalNumHalfOpen" || name == "cufwConnGlobalNumActive" || name == "cufwConnGlobalNumExpired" || name == "cufwConnGlobalNumAborted" || name == "cufwConnGlobalNumEmbryonic" || name == "cufwConnGlobalConnSetupRate1" || name == "cufwConnGlobalConnSetupRate5" || name == "cufwConnGlobalNumRemoteAccess")
        return true;
    return false;
}

CISCOUNIFIEDFIREWALLMIB::CuFwConnectionResources::CuFwConnectionResources()
    :
    cufwconnresmemoryusage{YType::uint32, "cufwConnResMemoryUsage"},
    cufwconnresactiveconnmemoryusage{YType::uint32, "cufwConnResActiveConnMemoryUsage"},
    cufwconnreshoconnmemoryusage{YType::uint32, "cufwConnResHOConnMemoryUsage"},
    cufwconnresembrconnmemoryusage{YType::uint32, "cufwConnResEmbrConnMemoryUsage"}
{

    yang_name = "cuFwConnectionResources"; yang_parent_name = "CISCO-UNIFIED-FIREWALL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOUNIFIEDFIREWALLMIB::CuFwConnectionResources::~CuFwConnectionResources()
{
}

bool CISCOUNIFIEDFIREWALLMIB::CuFwConnectionResources::has_data() const
{
    if (is_presence_container) return true;
    return cufwconnresmemoryusage.is_set
	|| cufwconnresactiveconnmemoryusage.is_set
	|| cufwconnreshoconnmemoryusage.is_set
	|| cufwconnresembrconnmemoryusage.is_set;
}

bool CISCOUNIFIEDFIREWALLMIB::CuFwConnectionResources::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cufwconnresmemoryusage.yfilter)
	|| ydk::is_set(cufwconnresactiveconnmemoryusage.yfilter)
	|| ydk::is_set(cufwconnreshoconnmemoryusage.yfilter)
	|| ydk::is_set(cufwconnresembrconnmemoryusage.yfilter);
}

std::string CISCOUNIFIEDFIREWALLMIB::CuFwConnectionResources::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-UNIFIED-FIREWALL-MIB:CISCO-UNIFIED-FIREWALL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOUNIFIEDFIREWALLMIB::CuFwConnectionResources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cuFwConnectionResources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOUNIFIEDFIREWALLMIB::CuFwConnectionResources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cufwconnresmemoryusage.is_set || is_set(cufwconnresmemoryusage.yfilter)) leaf_name_data.push_back(cufwconnresmemoryusage.get_name_leafdata());
    if (cufwconnresactiveconnmemoryusage.is_set || is_set(cufwconnresactiveconnmemoryusage.yfilter)) leaf_name_data.push_back(cufwconnresactiveconnmemoryusage.get_name_leafdata());
    if (cufwconnreshoconnmemoryusage.is_set || is_set(cufwconnreshoconnmemoryusage.yfilter)) leaf_name_data.push_back(cufwconnreshoconnmemoryusage.get_name_leafdata());
    if (cufwconnresembrconnmemoryusage.is_set || is_set(cufwconnresembrconnmemoryusage.yfilter)) leaf_name_data.push_back(cufwconnresembrconnmemoryusage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOUNIFIEDFIREWALLMIB::CuFwConnectionResources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOUNIFIEDFIREWALLMIB::CuFwConnectionResources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOUNIFIEDFIREWALLMIB::CuFwConnectionResources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cufwConnResMemoryUsage")
    {
        cufwconnresmemoryusage = value;
        cufwconnresmemoryusage.value_namespace = name_space;
        cufwconnresmemoryusage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwConnResActiveConnMemoryUsage")
    {
        cufwconnresactiveconnmemoryusage = value;
        cufwconnresactiveconnmemoryusage.value_namespace = name_space;
        cufwconnresactiveconnmemoryusage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwConnResHOConnMemoryUsage")
    {
        cufwconnreshoconnmemoryusage = value;
        cufwconnreshoconnmemoryusage.value_namespace = name_space;
        cufwconnreshoconnmemoryusage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwConnResEmbrConnMemoryUsage")
    {
        cufwconnresembrconnmemoryusage = value;
        cufwconnresembrconnmemoryusage.value_namespace = name_space;
        cufwconnresembrconnmemoryusage.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOUNIFIEDFIREWALLMIB::CuFwConnectionResources::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cufwConnResMemoryUsage")
    {
        cufwconnresmemoryusage.yfilter = yfilter;
    }
    if(value_path == "cufwConnResActiveConnMemoryUsage")
    {
        cufwconnresactiveconnmemoryusage.yfilter = yfilter;
    }
    if(value_path == "cufwConnResHOConnMemoryUsage")
    {
        cufwconnreshoconnmemoryusage.yfilter = yfilter;
    }
    if(value_path == "cufwConnResEmbrConnMemoryUsage")
    {
        cufwconnresembrconnmemoryusage.yfilter = yfilter;
    }
}

bool CISCOUNIFIEDFIREWALLMIB::CuFwConnectionResources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cufwConnResMemoryUsage" || name == "cufwConnResActiveConnMemoryUsage" || name == "cufwConnResHOConnMemoryUsage" || name == "cufwConnResEmbrConnMemoryUsage")
        return true;
    return false;
}

CISCOUNIFIEDFIREWALLMIB::CuFwConnectionReportSettings::CuFwConnectionReportSettings()
    :
    cufwconnreptappstats{YType::boolean, "cufwConnReptAppStats"},
    cufwconnreptappstatslastchanged{YType::uint32, "cufwConnReptAppStatsLastChanged"}
{

    yang_name = "cuFwConnectionReportSettings"; yang_parent_name = "CISCO-UNIFIED-FIREWALL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOUNIFIEDFIREWALLMIB::CuFwConnectionReportSettings::~CuFwConnectionReportSettings()
{
}

bool CISCOUNIFIEDFIREWALLMIB::CuFwConnectionReportSettings::has_data() const
{
    if (is_presence_container) return true;
    return cufwconnreptappstats.is_set
	|| cufwconnreptappstatslastchanged.is_set;
}

bool CISCOUNIFIEDFIREWALLMIB::CuFwConnectionReportSettings::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cufwconnreptappstats.yfilter)
	|| ydk::is_set(cufwconnreptappstatslastchanged.yfilter);
}

std::string CISCOUNIFIEDFIREWALLMIB::CuFwConnectionReportSettings::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-UNIFIED-FIREWALL-MIB:CISCO-UNIFIED-FIREWALL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOUNIFIEDFIREWALLMIB::CuFwConnectionReportSettings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cuFwConnectionReportSettings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOUNIFIEDFIREWALLMIB::CuFwConnectionReportSettings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cufwconnreptappstats.is_set || is_set(cufwconnreptappstats.yfilter)) leaf_name_data.push_back(cufwconnreptappstats.get_name_leafdata());
    if (cufwconnreptappstatslastchanged.is_set || is_set(cufwconnreptappstatslastchanged.yfilter)) leaf_name_data.push_back(cufwconnreptappstatslastchanged.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOUNIFIEDFIREWALLMIB::CuFwConnectionReportSettings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOUNIFIEDFIREWALLMIB::CuFwConnectionReportSettings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOUNIFIEDFIREWALLMIB::CuFwConnectionReportSettings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cufwConnReptAppStats")
    {
        cufwconnreptappstats = value;
        cufwconnreptappstats.value_namespace = name_space;
        cufwconnreptappstats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwConnReptAppStatsLastChanged")
    {
        cufwconnreptappstatslastchanged = value;
        cufwconnreptappstatslastchanged.value_namespace = name_space;
        cufwconnreptappstatslastchanged.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOUNIFIEDFIREWALLMIB::CuFwConnectionReportSettings::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cufwConnReptAppStats")
    {
        cufwconnreptappstats.yfilter = yfilter;
    }
    if(value_path == "cufwConnReptAppStatsLastChanged")
    {
        cufwconnreptappstatslastchanged.yfilter = yfilter;
    }
}

bool CISCOUNIFIEDFIREWALLMIB::CuFwConnectionReportSettings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cufwConnReptAppStats" || name == "cufwConnReptAppStatsLastChanged")
        return true;
    return false;
}

CISCOUNIFIEDFIREWALLMIB::CuFwApplInspectionGrp::CuFwApplInspectionGrp()
    :
    cufwaiaudittrailenabled{YType::boolean, "cufwAIAuditTrailEnabled"},
    cufwaialertenabled{YType::boolean, "cufwAIAlertEnabled"}
{

    yang_name = "cuFwApplInspectionGrp"; yang_parent_name = "CISCO-UNIFIED-FIREWALL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOUNIFIEDFIREWALLMIB::CuFwApplInspectionGrp::~CuFwApplInspectionGrp()
{
}

bool CISCOUNIFIEDFIREWALLMIB::CuFwApplInspectionGrp::has_data() const
{
    if (is_presence_container) return true;
    return cufwaiaudittrailenabled.is_set
	|| cufwaialertenabled.is_set;
}

bool CISCOUNIFIEDFIREWALLMIB::CuFwApplInspectionGrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cufwaiaudittrailenabled.yfilter)
	|| ydk::is_set(cufwaialertenabled.yfilter);
}

std::string CISCOUNIFIEDFIREWALLMIB::CuFwApplInspectionGrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-UNIFIED-FIREWALL-MIB:CISCO-UNIFIED-FIREWALL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOUNIFIEDFIREWALLMIB::CuFwApplInspectionGrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cuFwApplInspectionGrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOUNIFIEDFIREWALLMIB::CuFwApplInspectionGrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cufwaiaudittrailenabled.is_set || is_set(cufwaiaudittrailenabled.yfilter)) leaf_name_data.push_back(cufwaiaudittrailenabled.get_name_leafdata());
    if (cufwaialertenabled.is_set || is_set(cufwaialertenabled.yfilter)) leaf_name_data.push_back(cufwaialertenabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOUNIFIEDFIREWALLMIB::CuFwApplInspectionGrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOUNIFIEDFIREWALLMIB::CuFwApplInspectionGrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOUNIFIEDFIREWALLMIB::CuFwApplInspectionGrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cufwAIAuditTrailEnabled")
    {
        cufwaiaudittrailenabled = value;
        cufwaiaudittrailenabled.value_namespace = name_space;
        cufwaiaudittrailenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwAIAlertEnabled")
    {
        cufwaialertenabled = value;
        cufwaialertenabled.value_namespace = name_space;
        cufwaialertenabled.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOUNIFIEDFIREWALLMIB::CuFwApplInspectionGrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cufwAIAuditTrailEnabled")
    {
        cufwaiaudittrailenabled.yfilter = yfilter;
    }
    if(value_path == "cufwAIAlertEnabled")
    {
        cufwaialertenabled.yfilter = yfilter;
    }
}

bool CISCOUNIFIEDFIREWALLMIB::CuFwApplInspectionGrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cufwAIAuditTrailEnabled" || name == "cufwAIAlertEnabled")
        return true;
    return false;
}

CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterGlobals::CufwUrlFilterGlobals()
    :
    cufwurlffunctionenabled{YType::uint32, "cufwUrlfFunctionEnabled"},
    cufwurlfrequestsnumprocessed{YType::uint64, "cufwUrlfRequestsNumProcessed"},
    cufwurlfrequestsprocrate1{YType::uint32, "cufwUrlfRequestsProcRate1"},
    cufwurlfrequestsprocrate5{YType::uint32, "cufwUrlfRequestsProcRate5"},
    cufwurlfrequestsnumallowed{YType::uint64, "cufwUrlfRequestsNumAllowed"},
    cufwurlfrequestsnumdenied{YType::uint64, "cufwUrlfRequestsNumDenied"},
    cufwurlfrequestsdeniedrate1{YType::uint32, "cufwUrlfRequestsDeniedRate1"},
    cufwurlfrequestsdeniedrate5{YType::uint32, "cufwUrlfRequestsDeniedRate5"},
    cufwurlfrequestsnumcacheallowed{YType::uint64, "cufwUrlfRequestsNumCacheAllowed"},
    cufwurlfrequestsnumcachedenied{YType::uint64, "cufwUrlfRequestsNumCacheDenied"},
    cufwurlfallowmodereqnumallowed{YType::uint64, "cufwUrlfAllowModeReqNumAllowed"},
    cufwurlfallowmodereqnumdenied{YType::uint64, "cufwUrlfAllowModeReqNumDenied"},
    cufwurlfrequestsnumresdropped{YType::uint64, "cufwUrlfRequestsNumResDropped"},
    cufwurlfrequestsresdroprate1{YType::uint32, "cufwUrlfRequestsResDropRate1"},
    cufwurlfrequestsresdroprate5{YType::uint32, "cufwUrlfRequestsResDropRate5"},
    cufwurlfnumservertimeouts{YType::uint64, "cufwUrlfNumServerTimeouts"},
    cufwurlfnumserverretries{YType::uint64, "cufwUrlfNumServerRetries"},
    cufwurlfresponsesnumlate{YType::uint64, "cufwUrlfResponsesNumLate"},
    cufwurlfurlaccrespsnumresdropped{YType::uint64, "cufwUrlfUrlAccRespsNumResDropped"}
{

    yang_name = "cufwUrlFilterGlobals"; yang_parent_name = "CISCO-UNIFIED-FIREWALL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterGlobals::~CufwUrlFilterGlobals()
{
}

bool CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterGlobals::has_data() const
{
    if (is_presence_container) return true;
    return cufwurlffunctionenabled.is_set
	|| cufwurlfrequestsnumprocessed.is_set
	|| cufwurlfrequestsprocrate1.is_set
	|| cufwurlfrequestsprocrate5.is_set
	|| cufwurlfrequestsnumallowed.is_set
	|| cufwurlfrequestsnumdenied.is_set
	|| cufwurlfrequestsdeniedrate1.is_set
	|| cufwurlfrequestsdeniedrate5.is_set
	|| cufwurlfrequestsnumcacheallowed.is_set
	|| cufwurlfrequestsnumcachedenied.is_set
	|| cufwurlfallowmodereqnumallowed.is_set
	|| cufwurlfallowmodereqnumdenied.is_set
	|| cufwurlfrequestsnumresdropped.is_set
	|| cufwurlfrequestsresdroprate1.is_set
	|| cufwurlfrequestsresdroprate5.is_set
	|| cufwurlfnumservertimeouts.is_set
	|| cufwurlfnumserverretries.is_set
	|| cufwurlfresponsesnumlate.is_set
	|| cufwurlfurlaccrespsnumresdropped.is_set;
}

bool CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterGlobals::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cufwurlffunctionenabled.yfilter)
	|| ydk::is_set(cufwurlfrequestsnumprocessed.yfilter)
	|| ydk::is_set(cufwurlfrequestsprocrate1.yfilter)
	|| ydk::is_set(cufwurlfrequestsprocrate5.yfilter)
	|| ydk::is_set(cufwurlfrequestsnumallowed.yfilter)
	|| ydk::is_set(cufwurlfrequestsnumdenied.yfilter)
	|| ydk::is_set(cufwurlfrequestsdeniedrate1.yfilter)
	|| ydk::is_set(cufwurlfrequestsdeniedrate5.yfilter)
	|| ydk::is_set(cufwurlfrequestsnumcacheallowed.yfilter)
	|| ydk::is_set(cufwurlfrequestsnumcachedenied.yfilter)
	|| ydk::is_set(cufwurlfallowmodereqnumallowed.yfilter)
	|| ydk::is_set(cufwurlfallowmodereqnumdenied.yfilter)
	|| ydk::is_set(cufwurlfrequestsnumresdropped.yfilter)
	|| ydk::is_set(cufwurlfrequestsresdroprate1.yfilter)
	|| ydk::is_set(cufwurlfrequestsresdroprate5.yfilter)
	|| ydk::is_set(cufwurlfnumservertimeouts.yfilter)
	|| ydk::is_set(cufwurlfnumserverretries.yfilter)
	|| ydk::is_set(cufwurlfresponsesnumlate.yfilter)
	|| ydk::is_set(cufwurlfurlaccrespsnumresdropped.yfilter);
}

std::string CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterGlobals::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-UNIFIED-FIREWALL-MIB:CISCO-UNIFIED-FIREWALL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterGlobals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cufwUrlFilterGlobals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterGlobals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cufwurlffunctionenabled.is_set || is_set(cufwurlffunctionenabled.yfilter)) leaf_name_data.push_back(cufwurlffunctionenabled.get_name_leafdata());
    if (cufwurlfrequestsnumprocessed.is_set || is_set(cufwurlfrequestsnumprocessed.yfilter)) leaf_name_data.push_back(cufwurlfrequestsnumprocessed.get_name_leafdata());
    if (cufwurlfrequestsprocrate1.is_set || is_set(cufwurlfrequestsprocrate1.yfilter)) leaf_name_data.push_back(cufwurlfrequestsprocrate1.get_name_leafdata());
    if (cufwurlfrequestsprocrate5.is_set || is_set(cufwurlfrequestsprocrate5.yfilter)) leaf_name_data.push_back(cufwurlfrequestsprocrate5.get_name_leafdata());
    if (cufwurlfrequestsnumallowed.is_set || is_set(cufwurlfrequestsnumallowed.yfilter)) leaf_name_data.push_back(cufwurlfrequestsnumallowed.get_name_leafdata());
    if (cufwurlfrequestsnumdenied.is_set || is_set(cufwurlfrequestsnumdenied.yfilter)) leaf_name_data.push_back(cufwurlfrequestsnumdenied.get_name_leafdata());
    if (cufwurlfrequestsdeniedrate1.is_set || is_set(cufwurlfrequestsdeniedrate1.yfilter)) leaf_name_data.push_back(cufwurlfrequestsdeniedrate1.get_name_leafdata());
    if (cufwurlfrequestsdeniedrate5.is_set || is_set(cufwurlfrequestsdeniedrate5.yfilter)) leaf_name_data.push_back(cufwurlfrequestsdeniedrate5.get_name_leafdata());
    if (cufwurlfrequestsnumcacheallowed.is_set || is_set(cufwurlfrequestsnumcacheallowed.yfilter)) leaf_name_data.push_back(cufwurlfrequestsnumcacheallowed.get_name_leafdata());
    if (cufwurlfrequestsnumcachedenied.is_set || is_set(cufwurlfrequestsnumcachedenied.yfilter)) leaf_name_data.push_back(cufwurlfrequestsnumcachedenied.get_name_leafdata());
    if (cufwurlfallowmodereqnumallowed.is_set || is_set(cufwurlfallowmodereqnumallowed.yfilter)) leaf_name_data.push_back(cufwurlfallowmodereqnumallowed.get_name_leafdata());
    if (cufwurlfallowmodereqnumdenied.is_set || is_set(cufwurlfallowmodereqnumdenied.yfilter)) leaf_name_data.push_back(cufwurlfallowmodereqnumdenied.get_name_leafdata());
    if (cufwurlfrequestsnumresdropped.is_set || is_set(cufwurlfrequestsnumresdropped.yfilter)) leaf_name_data.push_back(cufwurlfrequestsnumresdropped.get_name_leafdata());
    if (cufwurlfrequestsresdroprate1.is_set || is_set(cufwurlfrequestsresdroprate1.yfilter)) leaf_name_data.push_back(cufwurlfrequestsresdroprate1.get_name_leafdata());
    if (cufwurlfrequestsresdroprate5.is_set || is_set(cufwurlfrequestsresdroprate5.yfilter)) leaf_name_data.push_back(cufwurlfrequestsresdroprate5.get_name_leafdata());
    if (cufwurlfnumservertimeouts.is_set || is_set(cufwurlfnumservertimeouts.yfilter)) leaf_name_data.push_back(cufwurlfnumservertimeouts.get_name_leafdata());
    if (cufwurlfnumserverretries.is_set || is_set(cufwurlfnumserverretries.yfilter)) leaf_name_data.push_back(cufwurlfnumserverretries.get_name_leafdata());
    if (cufwurlfresponsesnumlate.is_set || is_set(cufwurlfresponsesnumlate.yfilter)) leaf_name_data.push_back(cufwurlfresponsesnumlate.get_name_leafdata());
    if (cufwurlfurlaccrespsnumresdropped.is_set || is_set(cufwurlfurlaccrespsnumresdropped.yfilter)) leaf_name_data.push_back(cufwurlfurlaccrespsnumresdropped.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterGlobals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterGlobals::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterGlobals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cufwUrlfFunctionEnabled")
    {
        cufwurlffunctionenabled = value;
        cufwurlffunctionenabled.value_namespace = name_space;
        cufwurlffunctionenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwUrlfRequestsNumProcessed")
    {
        cufwurlfrequestsnumprocessed = value;
        cufwurlfrequestsnumprocessed.value_namespace = name_space;
        cufwurlfrequestsnumprocessed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwUrlfRequestsProcRate1")
    {
        cufwurlfrequestsprocrate1 = value;
        cufwurlfrequestsprocrate1.value_namespace = name_space;
        cufwurlfrequestsprocrate1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwUrlfRequestsProcRate5")
    {
        cufwurlfrequestsprocrate5 = value;
        cufwurlfrequestsprocrate5.value_namespace = name_space;
        cufwurlfrequestsprocrate5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwUrlfRequestsNumAllowed")
    {
        cufwurlfrequestsnumallowed = value;
        cufwurlfrequestsnumallowed.value_namespace = name_space;
        cufwurlfrequestsnumallowed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwUrlfRequestsNumDenied")
    {
        cufwurlfrequestsnumdenied = value;
        cufwurlfrequestsnumdenied.value_namespace = name_space;
        cufwurlfrequestsnumdenied.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwUrlfRequestsDeniedRate1")
    {
        cufwurlfrequestsdeniedrate1 = value;
        cufwurlfrequestsdeniedrate1.value_namespace = name_space;
        cufwurlfrequestsdeniedrate1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwUrlfRequestsDeniedRate5")
    {
        cufwurlfrequestsdeniedrate5 = value;
        cufwurlfrequestsdeniedrate5.value_namespace = name_space;
        cufwurlfrequestsdeniedrate5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwUrlfRequestsNumCacheAllowed")
    {
        cufwurlfrequestsnumcacheallowed = value;
        cufwurlfrequestsnumcacheallowed.value_namespace = name_space;
        cufwurlfrequestsnumcacheallowed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwUrlfRequestsNumCacheDenied")
    {
        cufwurlfrequestsnumcachedenied = value;
        cufwurlfrequestsnumcachedenied.value_namespace = name_space;
        cufwurlfrequestsnumcachedenied.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwUrlfAllowModeReqNumAllowed")
    {
        cufwurlfallowmodereqnumallowed = value;
        cufwurlfallowmodereqnumallowed.value_namespace = name_space;
        cufwurlfallowmodereqnumallowed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwUrlfAllowModeReqNumDenied")
    {
        cufwurlfallowmodereqnumdenied = value;
        cufwurlfallowmodereqnumdenied.value_namespace = name_space;
        cufwurlfallowmodereqnumdenied.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwUrlfRequestsNumResDropped")
    {
        cufwurlfrequestsnumresdropped = value;
        cufwurlfrequestsnumresdropped.value_namespace = name_space;
        cufwurlfrequestsnumresdropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwUrlfRequestsResDropRate1")
    {
        cufwurlfrequestsresdroprate1 = value;
        cufwurlfrequestsresdroprate1.value_namespace = name_space;
        cufwurlfrequestsresdroprate1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwUrlfRequestsResDropRate5")
    {
        cufwurlfrequestsresdroprate5 = value;
        cufwurlfrequestsresdroprate5.value_namespace = name_space;
        cufwurlfrequestsresdroprate5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwUrlfNumServerTimeouts")
    {
        cufwurlfnumservertimeouts = value;
        cufwurlfnumservertimeouts.value_namespace = name_space;
        cufwurlfnumservertimeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwUrlfNumServerRetries")
    {
        cufwurlfnumserverretries = value;
        cufwurlfnumserverretries.value_namespace = name_space;
        cufwurlfnumserverretries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwUrlfResponsesNumLate")
    {
        cufwurlfresponsesnumlate = value;
        cufwurlfresponsesnumlate.value_namespace = name_space;
        cufwurlfresponsesnumlate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwUrlfUrlAccRespsNumResDropped")
    {
        cufwurlfurlaccrespsnumresdropped = value;
        cufwurlfurlaccrespsnumresdropped.value_namespace = name_space;
        cufwurlfurlaccrespsnumresdropped.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterGlobals::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cufwUrlfFunctionEnabled")
    {
        cufwurlffunctionenabled.yfilter = yfilter;
    }
    if(value_path == "cufwUrlfRequestsNumProcessed")
    {
        cufwurlfrequestsnumprocessed.yfilter = yfilter;
    }
    if(value_path == "cufwUrlfRequestsProcRate1")
    {
        cufwurlfrequestsprocrate1.yfilter = yfilter;
    }
    if(value_path == "cufwUrlfRequestsProcRate5")
    {
        cufwurlfrequestsprocrate5.yfilter = yfilter;
    }
    if(value_path == "cufwUrlfRequestsNumAllowed")
    {
        cufwurlfrequestsnumallowed.yfilter = yfilter;
    }
    if(value_path == "cufwUrlfRequestsNumDenied")
    {
        cufwurlfrequestsnumdenied.yfilter = yfilter;
    }
    if(value_path == "cufwUrlfRequestsDeniedRate1")
    {
        cufwurlfrequestsdeniedrate1.yfilter = yfilter;
    }
    if(value_path == "cufwUrlfRequestsDeniedRate5")
    {
        cufwurlfrequestsdeniedrate5.yfilter = yfilter;
    }
    if(value_path == "cufwUrlfRequestsNumCacheAllowed")
    {
        cufwurlfrequestsnumcacheallowed.yfilter = yfilter;
    }
    if(value_path == "cufwUrlfRequestsNumCacheDenied")
    {
        cufwurlfrequestsnumcachedenied.yfilter = yfilter;
    }
    if(value_path == "cufwUrlfAllowModeReqNumAllowed")
    {
        cufwurlfallowmodereqnumallowed.yfilter = yfilter;
    }
    if(value_path == "cufwUrlfAllowModeReqNumDenied")
    {
        cufwurlfallowmodereqnumdenied.yfilter = yfilter;
    }
    if(value_path == "cufwUrlfRequestsNumResDropped")
    {
        cufwurlfrequestsnumresdropped.yfilter = yfilter;
    }
    if(value_path == "cufwUrlfRequestsResDropRate1")
    {
        cufwurlfrequestsresdroprate1.yfilter = yfilter;
    }
    if(value_path == "cufwUrlfRequestsResDropRate5")
    {
        cufwurlfrequestsresdroprate5.yfilter = yfilter;
    }
    if(value_path == "cufwUrlfNumServerTimeouts")
    {
        cufwurlfnumservertimeouts.yfilter = yfilter;
    }
    if(value_path == "cufwUrlfNumServerRetries")
    {
        cufwurlfnumserverretries.yfilter = yfilter;
    }
    if(value_path == "cufwUrlfResponsesNumLate")
    {
        cufwurlfresponsesnumlate.yfilter = yfilter;
    }
    if(value_path == "cufwUrlfUrlAccRespsNumResDropped")
    {
        cufwurlfurlaccrespsnumresdropped.yfilter = yfilter;
    }
}

bool CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterGlobals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cufwUrlfFunctionEnabled" || name == "cufwUrlfRequestsNumProcessed" || name == "cufwUrlfRequestsProcRate1" || name == "cufwUrlfRequestsProcRate5" || name == "cufwUrlfRequestsNumAllowed" || name == "cufwUrlfRequestsNumDenied" || name == "cufwUrlfRequestsDeniedRate1" || name == "cufwUrlfRequestsDeniedRate5" || name == "cufwUrlfRequestsNumCacheAllowed" || name == "cufwUrlfRequestsNumCacheDenied" || name == "cufwUrlfAllowModeReqNumAllowed" || name == "cufwUrlfAllowModeReqNumDenied" || name == "cufwUrlfRequestsNumResDropped" || name == "cufwUrlfRequestsResDropRate1" || name == "cufwUrlfRequestsResDropRate5" || name == "cufwUrlfNumServerTimeouts" || name == "cufwUrlfNumServerRetries" || name == "cufwUrlfResponsesNumLate" || name == "cufwUrlfUrlAccRespsNumResDropped")
        return true;
    return false;
}

CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterResourceUsage::CufwUrlFilterResourceUsage()
    :
    cufwurlfrestotalrequestcachesize{YType::uint32, "cufwUrlfResTotalRequestCacheSize"},
    cufwurlfrestotalrespcachesize{YType::uint32, "cufwUrlfResTotalRespCacheSize"}
{

    yang_name = "cufwUrlFilterResourceUsage"; yang_parent_name = "CISCO-UNIFIED-FIREWALL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterResourceUsage::~CufwUrlFilterResourceUsage()
{
}

bool CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterResourceUsage::has_data() const
{
    if (is_presence_container) return true;
    return cufwurlfrestotalrequestcachesize.is_set
	|| cufwurlfrestotalrespcachesize.is_set;
}

bool CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterResourceUsage::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cufwurlfrestotalrequestcachesize.yfilter)
	|| ydk::is_set(cufwurlfrestotalrespcachesize.yfilter);
}

std::string CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterResourceUsage::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-UNIFIED-FIREWALL-MIB:CISCO-UNIFIED-FIREWALL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterResourceUsage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cufwUrlFilterResourceUsage";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterResourceUsage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cufwurlfrestotalrequestcachesize.is_set || is_set(cufwurlfrestotalrequestcachesize.yfilter)) leaf_name_data.push_back(cufwurlfrestotalrequestcachesize.get_name_leafdata());
    if (cufwurlfrestotalrespcachesize.is_set || is_set(cufwurlfrestotalrespcachesize.yfilter)) leaf_name_data.push_back(cufwurlfrestotalrespcachesize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterResourceUsage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterResourceUsage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterResourceUsage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cufwUrlfResTotalRequestCacheSize")
    {
        cufwurlfrestotalrequestcachesize = value;
        cufwurlfrestotalrequestcachesize.value_namespace = name_space;
        cufwurlfrestotalrequestcachesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwUrlfResTotalRespCacheSize")
    {
        cufwurlfrestotalrespcachesize = value;
        cufwurlfrestotalrespcachesize.value_namespace = name_space;
        cufwurlfrestotalrespcachesize.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterResourceUsage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cufwUrlfResTotalRequestCacheSize")
    {
        cufwurlfrestotalrequestcachesize.yfilter = yfilter;
    }
    if(value_path == "cufwUrlfResTotalRespCacheSize")
    {
        cufwurlfrestotalrespcachesize.yfilter = yfilter;
    }
}

bool CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterResourceUsage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cufwUrlfResTotalRequestCacheSize" || name == "cufwUrlfResTotalRespCacheSize")
        return true;
    return false;
}

CISCOUNIFIEDFIREWALLMIB::CufwAaicGlobals::CufwAaicGlobals()
    :
    cufwaaicglobalnumbadprotocolops{YType::uint64, "cufwAaicGlobalNumBadProtocolOps"},
    cufwaaicglobalnumbadpdusize{YType::uint64, "cufwAaicGlobalNumBadPDUSize"},
    cufwaaicglobalnumbadportrange{YType::uint64, "cufwAaicGlobalNumBadPortRange"}
{

    yang_name = "cufwAaicGlobals"; yang_parent_name = "CISCO-UNIFIED-FIREWALL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOUNIFIEDFIREWALLMIB::CufwAaicGlobals::~CufwAaicGlobals()
{
}

bool CISCOUNIFIEDFIREWALLMIB::CufwAaicGlobals::has_data() const
{
    if (is_presence_container) return true;
    return cufwaaicglobalnumbadprotocolops.is_set
	|| cufwaaicglobalnumbadpdusize.is_set
	|| cufwaaicglobalnumbadportrange.is_set;
}

bool CISCOUNIFIEDFIREWALLMIB::CufwAaicGlobals::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cufwaaicglobalnumbadprotocolops.yfilter)
	|| ydk::is_set(cufwaaicglobalnumbadpdusize.yfilter)
	|| ydk::is_set(cufwaaicglobalnumbadportrange.yfilter);
}

std::string CISCOUNIFIEDFIREWALLMIB::CufwAaicGlobals::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-UNIFIED-FIREWALL-MIB:CISCO-UNIFIED-FIREWALL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOUNIFIEDFIREWALLMIB::CufwAaicGlobals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cufwAaicGlobals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOUNIFIEDFIREWALLMIB::CufwAaicGlobals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cufwaaicglobalnumbadprotocolops.is_set || is_set(cufwaaicglobalnumbadprotocolops.yfilter)) leaf_name_data.push_back(cufwaaicglobalnumbadprotocolops.get_name_leafdata());
    if (cufwaaicglobalnumbadpdusize.is_set || is_set(cufwaaicglobalnumbadpdusize.yfilter)) leaf_name_data.push_back(cufwaaicglobalnumbadpdusize.get_name_leafdata());
    if (cufwaaicglobalnumbadportrange.is_set || is_set(cufwaaicglobalnumbadportrange.yfilter)) leaf_name_data.push_back(cufwaaicglobalnumbadportrange.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOUNIFIEDFIREWALLMIB::CufwAaicGlobals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOUNIFIEDFIREWALLMIB::CufwAaicGlobals::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOUNIFIEDFIREWALLMIB::CufwAaicGlobals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cufwAaicGlobalNumBadProtocolOps")
    {
        cufwaaicglobalnumbadprotocolops = value;
        cufwaaicglobalnumbadprotocolops.value_namespace = name_space;
        cufwaaicglobalnumbadprotocolops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwAaicGlobalNumBadPDUSize")
    {
        cufwaaicglobalnumbadpdusize = value;
        cufwaaicglobalnumbadpdusize.value_namespace = name_space;
        cufwaaicglobalnumbadpdusize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwAaicGlobalNumBadPortRange")
    {
        cufwaaicglobalnumbadportrange = value;
        cufwaaicglobalnumbadportrange.value_namespace = name_space;
        cufwaaicglobalnumbadportrange.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOUNIFIEDFIREWALLMIB::CufwAaicGlobals::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cufwAaicGlobalNumBadProtocolOps")
    {
        cufwaaicglobalnumbadprotocolops.yfilter = yfilter;
    }
    if(value_path == "cufwAaicGlobalNumBadPDUSize")
    {
        cufwaaicglobalnumbadpdusize.yfilter = yfilter;
    }
    if(value_path == "cufwAaicGlobalNumBadPortRange")
    {
        cufwaaicglobalnumbadportrange.yfilter = yfilter;
    }
}

bool CISCOUNIFIEDFIREWALLMIB::CufwAaicGlobals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cufwAaicGlobalNumBadProtocolOps" || name == "cufwAaicGlobalNumBadPDUSize" || name == "cufwAaicGlobalNumBadPortRange")
        return true;
    return false;
}

CISCOUNIFIEDFIREWALLMIB::CufwAaicHttpProtocolStats::CufwAaicHttpProtocolStats()
    :
    cufwaaichttpnumbadprotocolops{YType::uint64, "cufwAaicHttpNumBadProtocolOps"},
    cufwaaichttpnumbadpdusize{YType::uint64, "cufwAaicHttpNumBadPDUSize"},
    cufwaaichttpnumtunneledconns{YType::uint64, "cufwAaicHttpNumTunneledConns"},
    cufwaaichttpnumlargeuris{YType::uint64, "cufwAaicHttpNumLargeURIs"},
    cufwaaichttpnumbadcontent{YType::uint64, "cufwAaicHttpNumBadContent"},
    cufwaaichttpnummismatchcontent{YType::uint64, "cufwAaicHttpNumMismatchContent"},
    cufwaaichttpnumdoubleencodedpkts{YType::uint64, "cufwAaicHttpNumDoubleEncodedPkts"}
{

    yang_name = "cufwAaicHttpProtocolStats"; yang_parent_name = "CISCO-UNIFIED-FIREWALL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOUNIFIEDFIREWALLMIB::CufwAaicHttpProtocolStats::~CufwAaicHttpProtocolStats()
{
}

bool CISCOUNIFIEDFIREWALLMIB::CufwAaicHttpProtocolStats::has_data() const
{
    if (is_presence_container) return true;
    return cufwaaichttpnumbadprotocolops.is_set
	|| cufwaaichttpnumbadpdusize.is_set
	|| cufwaaichttpnumtunneledconns.is_set
	|| cufwaaichttpnumlargeuris.is_set
	|| cufwaaichttpnumbadcontent.is_set
	|| cufwaaichttpnummismatchcontent.is_set
	|| cufwaaichttpnumdoubleencodedpkts.is_set;
}

bool CISCOUNIFIEDFIREWALLMIB::CufwAaicHttpProtocolStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cufwaaichttpnumbadprotocolops.yfilter)
	|| ydk::is_set(cufwaaichttpnumbadpdusize.yfilter)
	|| ydk::is_set(cufwaaichttpnumtunneledconns.yfilter)
	|| ydk::is_set(cufwaaichttpnumlargeuris.yfilter)
	|| ydk::is_set(cufwaaichttpnumbadcontent.yfilter)
	|| ydk::is_set(cufwaaichttpnummismatchcontent.yfilter)
	|| ydk::is_set(cufwaaichttpnumdoubleencodedpkts.yfilter);
}

std::string CISCOUNIFIEDFIREWALLMIB::CufwAaicHttpProtocolStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-UNIFIED-FIREWALL-MIB:CISCO-UNIFIED-FIREWALL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOUNIFIEDFIREWALLMIB::CufwAaicHttpProtocolStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cufwAaicHttpProtocolStats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOUNIFIEDFIREWALLMIB::CufwAaicHttpProtocolStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cufwaaichttpnumbadprotocolops.is_set || is_set(cufwaaichttpnumbadprotocolops.yfilter)) leaf_name_data.push_back(cufwaaichttpnumbadprotocolops.get_name_leafdata());
    if (cufwaaichttpnumbadpdusize.is_set || is_set(cufwaaichttpnumbadpdusize.yfilter)) leaf_name_data.push_back(cufwaaichttpnumbadpdusize.get_name_leafdata());
    if (cufwaaichttpnumtunneledconns.is_set || is_set(cufwaaichttpnumtunneledconns.yfilter)) leaf_name_data.push_back(cufwaaichttpnumtunneledconns.get_name_leafdata());
    if (cufwaaichttpnumlargeuris.is_set || is_set(cufwaaichttpnumlargeuris.yfilter)) leaf_name_data.push_back(cufwaaichttpnumlargeuris.get_name_leafdata());
    if (cufwaaichttpnumbadcontent.is_set || is_set(cufwaaichttpnumbadcontent.yfilter)) leaf_name_data.push_back(cufwaaichttpnumbadcontent.get_name_leafdata());
    if (cufwaaichttpnummismatchcontent.is_set || is_set(cufwaaichttpnummismatchcontent.yfilter)) leaf_name_data.push_back(cufwaaichttpnummismatchcontent.get_name_leafdata());
    if (cufwaaichttpnumdoubleencodedpkts.is_set || is_set(cufwaaichttpnumdoubleencodedpkts.yfilter)) leaf_name_data.push_back(cufwaaichttpnumdoubleencodedpkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOUNIFIEDFIREWALLMIB::CufwAaicHttpProtocolStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOUNIFIEDFIREWALLMIB::CufwAaicHttpProtocolStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOUNIFIEDFIREWALLMIB::CufwAaicHttpProtocolStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cufwAaicHttpNumBadProtocolOps")
    {
        cufwaaichttpnumbadprotocolops = value;
        cufwaaichttpnumbadprotocolops.value_namespace = name_space;
        cufwaaichttpnumbadprotocolops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwAaicHttpNumBadPDUSize")
    {
        cufwaaichttpnumbadpdusize = value;
        cufwaaichttpnumbadpdusize.value_namespace = name_space;
        cufwaaichttpnumbadpdusize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwAaicHttpNumTunneledConns")
    {
        cufwaaichttpnumtunneledconns = value;
        cufwaaichttpnumtunneledconns.value_namespace = name_space;
        cufwaaichttpnumtunneledconns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwAaicHttpNumLargeURIs")
    {
        cufwaaichttpnumlargeuris = value;
        cufwaaichttpnumlargeuris.value_namespace = name_space;
        cufwaaichttpnumlargeuris.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwAaicHttpNumBadContent")
    {
        cufwaaichttpnumbadcontent = value;
        cufwaaichttpnumbadcontent.value_namespace = name_space;
        cufwaaichttpnumbadcontent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwAaicHttpNumMismatchContent")
    {
        cufwaaichttpnummismatchcontent = value;
        cufwaaichttpnummismatchcontent.value_namespace = name_space;
        cufwaaichttpnummismatchcontent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwAaicHttpNumDoubleEncodedPkts")
    {
        cufwaaichttpnumdoubleencodedpkts = value;
        cufwaaichttpnumdoubleencodedpkts.value_namespace = name_space;
        cufwaaichttpnumdoubleencodedpkts.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOUNIFIEDFIREWALLMIB::CufwAaicHttpProtocolStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cufwAaicHttpNumBadProtocolOps")
    {
        cufwaaichttpnumbadprotocolops.yfilter = yfilter;
    }
    if(value_path == "cufwAaicHttpNumBadPDUSize")
    {
        cufwaaichttpnumbadpdusize.yfilter = yfilter;
    }
    if(value_path == "cufwAaicHttpNumTunneledConns")
    {
        cufwaaichttpnumtunneledconns.yfilter = yfilter;
    }
    if(value_path == "cufwAaicHttpNumLargeURIs")
    {
        cufwaaichttpnumlargeuris.yfilter = yfilter;
    }
    if(value_path == "cufwAaicHttpNumBadContent")
    {
        cufwaaichttpnumbadcontent.yfilter = yfilter;
    }
    if(value_path == "cufwAaicHttpNumMismatchContent")
    {
        cufwaaichttpnummismatchcontent.yfilter = yfilter;
    }
    if(value_path == "cufwAaicHttpNumDoubleEncodedPkts")
    {
        cufwaaichttpnumdoubleencodedpkts.yfilter = yfilter;
    }
}

bool CISCOUNIFIEDFIREWALLMIB::CufwAaicHttpProtocolStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cufwAaicHttpNumBadProtocolOps" || name == "cufwAaicHttpNumBadPDUSize" || name == "cufwAaicHttpNumTunneledConns" || name == "cufwAaicHttpNumLargeURIs" || name == "cufwAaicHttpNumBadContent" || name == "cufwAaicHttpNumMismatchContent" || name == "cufwAaicHttpNumDoubleEncodedPkts")
        return true;
    return false;
}

CISCOUNIFIEDFIREWALLMIB::CufwL2FwGlobals::CufwL2FwGlobals()
    :
    cufwl2globalenablestealthmode{YType::boolean, "cufwL2GlobalEnableStealthMode"},
    cufwl2globalarpcachesize{YType::int32, "cufwL2GlobalArpCacheSize"},
    cufwl2globalenablearpinspection{YType::boolean, "cufwL2GlobalEnableArpInspection"},
    cufwl2globalnumarprequests{YType::uint64, "cufwL2GlobalNumArpRequests"},
    cufwl2globalnumicmprequests{YType::uint64, "cufwL2GlobalNumIcmpRequests"},
    cufwl2globalnumfloods{YType::uint64, "cufwL2GlobalNumFloods"},
    cufwl2globalnumdrops{YType::uint64, "cufwL2GlobalNumDrops"},
    cufwl2globalarpoverflowrate5{YType::uint32, "cufwL2GlobalArpOverflowRate5"},
    cufwl2globalnumbadarpresponses{YType::uint64, "cufwL2GlobalNumBadArpResponses"},
    cufwl2globalnumspoofedarpresps{YType::uint64, "cufwL2GlobalNumSpoofedArpResps"}
{

    yang_name = "cufwL2FwGlobals"; yang_parent_name = "CISCO-UNIFIED-FIREWALL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOUNIFIEDFIREWALLMIB::CufwL2FwGlobals::~CufwL2FwGlobals()
{
}

bool CISCOUNIFIEDFIREWALLMIB::CufwL2FwGlobals::has_data() const
{
    if (is_presence_container) return true;
    return cufwl2globalenablestealthmode.is_set
	|| cufwl2globalarpcachesize.is_set
	|| cufwl2globalenablearpinspection.is_set
	|| cufwl2globalnumarprequests.is_set
	|| cufwl2globalnumicmprequests.is_set
	|| cufwl2globalnumfloods.is_set
	|| cufwl2globalnumdrops.is_set
	|| cufwl2globalarpoverflowrate5.is_set
	|| cufwl2globalnumbadarpresponses.is_set
	|| cufwl2globalnumspoofedarpresps.is_set;
}

bool CISCOUNIFIEDFIREWALLMIB::CufwL2FwGlobals::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cufwl2globalenablestealthmode.yfilter)
	|| ydk::is_set(cufwl2globalarpcachesize.yfilter)
	|| ydk::is_set(cufwl2globalenablearpinspection.yfilter)
	|| ydk::is_set(cufwl2globalnumarprequests.yfilter)
	|| ydk::is_set(cufwl2globalnumicmprequests.yfilter)
	|| ydk::is_set(cufwl2globalnumfloods.yfilter)
	|| ydk::is_set(cufwl2globalnumdrops.yfilter)
	|| ydk::is_set(cufwl2globalarpoverflowrate5.yfilter)
	|| ydk::is_set(cufwl2globalnumbadarpresponses.yfilter)
	|| ydk::is_set(cufwl2globalnumspoofedarpresps.yfilter);
}

std::string CISCOUNIFIEDFIREWALLMIB::CufwL2FwGlobals::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-UNIFIED-FIREWALL-MIB:CISCO-UNIFIED-FIREWALL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOUNIFIEDFIREWALLMIB::CufwL2FwGlobals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cufwL2FwGlobals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOUNIFIEDFIREWALLMIB::CufwL2FwGlobals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cufwl2globalenablestealthmode.is_set || is_set(cufwl2globalenablestealthmode.yfilter)) leaf_name_data.push_back(cufwl2globalenablestealthmode.get_name_leafdata());
    if (cufwl2globalarpcachesize.is_set || is_set(cufwl2globalarpcachesize.yfilter)) leaf_name_data.push_back(cufwl2globalarpcachesize.get_name_leafdata());
    if (cufwl2globalenablearpinspection.is_set || is_set(cufwl2globalenablearpinspection.yfilter)) leaf_name_data.push_back(cufwl2globalenablearpinspection.get_name_leafdata());
    if (cufwl2globalnumarprequests.is_set || is_set(cufwl2globalnumarprequests.yfilter)) leaf_name_data.push_back(cufwl2globalnumarprequests.get_name_leafdata());
    if (cufwl2globalnumicmprequests.is_set || is_set(cufwl2globalnumicmprequests.yfilter)) leaf_name_data.push_back(cufwl2globalnumicmprequests.get_name_leafdata());
    if (cufwl2globalnumfloods.is_set || is_set(cufwl2globalnumfloods.yfilter)) leaf_name_data.push_back(cufwl2globalnumfloods.get_name_leafdata());
    if (cufwl2globalnumdrops.is_set || is_set(cufwl2globalnumdrops.yfilter)) leaf_name_data.push_back(cufwl2globalnumdrops.get_name_leafdata());
    if (cufwl2globalarpoverflowrate5.is_set || is_set(cufwl2globalarpoverflowrate5.yfilter)) leaf_name_data.push_back(cufwl2globalarpoverflowrate5.get_name_leafdata());
    if (cufwl2globalnumbadarpresponses.is_set || is_set(cufwl2globalnumbadarpresponses.yfilter)) leaf_name_data.push_back(cufwl2globalnumbadarpresponses.get_name_leafdata());
    if (cufwl2globalnumspoofedarpresps.is_set || is_set(cufwl2globalnumspoofedarpresps.yfilter)) leaf_name_data.push_back(cufwl2globalnumspoofedarpresps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOUNIFIEDFIREWALLMIB::CufwL2FwGlobals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOUNIFIEDFIREWALLMIB::CufwL2FwGlobals::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOUNIFIEDFIREWALLMIB::CufwL2FwGlobals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cufwL2GlobalEnableStealthMode")
    {
        cufwl2globalenablestealthmode = value;
        cufwl2globalenablestealthmode.value_namespace = name_space;
        cufwl2globalenablestealthmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwL2GlobalArpCacheSize")
    {
        cufwl2globalarpcachesize = value;
        cufwl2globalarpcachesize.value_namespace = name_space;
        cufwl2globalarpcachesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwL2GlobalEnableArpInspection")
    {
        cufwl2globalenablearpinspection = value;
        cufwl2globalenablearpinspection.value_namespace = name_space;
        cufwl2globalenablearpinspection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwL2GlobalNumArpRequests")
    {
        cufwl2globalnumarprequests = value;
        cufwl2globalnumarprequests.value_namespace = name_space;
        cufwl2globalnumarprequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwL2GlobalNumIcmpRequests")
    {
        cufwl2globalnumicmprequests = value;
        cufwl2globalnumicmprequests.value_namespace = name_space;
        cufwl2globalnumicmprequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwL2GlobalNumFloods")
    {
        cufwl2globalnumfloods = value;
        cufwl2globalnumfloods.value_namespace = name_space;
        cufwl2globalnumfloods.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwL2GlobalNumDrops")
    {
        cufwl2globalnumdrops = value;
        cufwl2globalnumdrops.value_namespace = name_space;
        cufwl2globalnumdrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwL2GlobalArpOverflowRate5")
    {
        cufwl2globalarpoverflowrate5 = value;
        cufwl2globalarpoverflowrate5.value_namespace = name_space;
        cufwl2globalarpoverflowrate5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwL2GlobalNumBadArpResponses")
    {
        cufwl2globalnumbadarpresponses = value;
        cufwl2globalnumbadarpresponses.value_namespace = name_space;
        cufwl2globalnumbadarpresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwL2GlobalNumSpoofedArpResps")
    {
        cufwl2globalnumspoofedarpresps = value;
        cufwl2globalnumspoofedarpresps.value_namespace = name_space;
        cufwl2globalnumspoofedarpresps.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOUNIFIEDFIREWALLMIB::CufwL2FwGlobals::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cufwL2GlobalEnableStealthMode")
    {
        cufwl2globalenablestealthmode.yfilter = yfilter;
    }
    if(value_path == "cufwL2GlobalArpCacheSize")
    {
        cufwl2globalarpcachesize.yfilter = yfilter;
    }
    if(value_path == "cufwL2GlobalEnableArpInspection")
    {
        cufwl2globalenablearpinspection.yfilter = yfilter;
    }
    if(value_path == "cufwL2GlobalNumArpRequests")
    {
        cufwl2globalnumarprequests.yfilter = yfilter;
    }
    if(value_path == "cufwL2GlobalNumIcmpRequests")
    {
        cufwl2globalnumicmprequests.yfilter = yfilter;
    }
    if(value_path == "cufwL2GlobalNumFloods")
    {
        cufwl2globalnumfloods.yfilter = yfilter;
    }
    if(value_path == "cufwL2GlobalNumDrops")
    {
        cufwl2globalnumdrops.yfilter = yfilter;
    }
    if(value_path == "cufwL2GlobalArpOverflowRate5")
    {
        cufwl2globalarpoverflowrate5.yfilter = yfilter;
    }
    if(value_path == "cufwL2GlobalNumBadArpResponses")
    {
        cufwl2globalnumbadarpresponses.yfilter = yfilter;
    }
    if(value_path == "cufwL2GlobalNumSpoofedArpResps")
    {
        cufwl2globalnumspoofedarpresps.yfilter = yfilter;
    }
}

bool CISCOUNIFIEDFIREWALLMIB::CufwL2FwGlobals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cufwL2GlobalEnableStealthMode" || name == "cufwL2GlobalArpCacheSize" || name == "cufwL2GlobalEnableArpInspection" || name == "cufwL2GlobalNumArpRequests" || name == "cufwL2GlobalNumIcmpRequests" || name == "cufwL2GlobalNumFloods" || name == "cufwL2GlobalNumDrops" || name == "cufwL2GlobalArpOverflowRate5" || name == "cufwL2GlobalNumBadArpResponses" || name == "cufwL2GlobalNumSpoofedArpResps")
        return true;
    return false;
}

CISCOUNIFIEDFIREWALLMIB::CuFwNotifCntlGrp::CuFwNotifCntlGrp()
    :
    cufwcntlurlfserverstatuschange{YType::boolean, "cufwCntlUrlfServerStatusChange"},
    cufwcntll2staticmacaddressmoved{YType::boolean, "cufwCntlL2StaticMacAddressMoved"}
{

    yang_name = "cuFwNotifCntlGrp"; yang_parent_name = "CISCO-UNIFIED-FIREWALL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOUNIFIEDFIREWALLMIB::CuFwNotifCntlGrp::~CuFwNotifCntlGrp()
{
}

bool CISCOUNIFIEDFIREWALLMIB::CuFwNotifCntlGrp::has_data() const
{
    if (is_presence_container) return true;
    return cufwcntlurlfserverstatuschange.is_set
	|| cufwcntll2staticmacaddressmoved.is_set;
}

bool CISCOUNIFIEDFIREWALLMIB::CuFwNotifCntlGrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cufwcntlurlfserverstatuschange.yfilter)
	|| ydk::is_set(cufwcntll2staticmacaddressmoved.yfilter);
}

std::string CISCOUNIFIEDFIREWALLMIB::CuFwNotifCntlGrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-UNIFIED-FIREWALL-MIB:CISCO-UNIFIED-FIREWALL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOUNIFIEDFIREWALLMIB::CuFwNotifCntlGrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cuFwNotifCntlGrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOUNIFIEDFIREWALLMIB::CuFwNotifCntlGrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cufwcntlurlfserverstatuschange.is_set || is_set(cufwcntlurlfserverstatuschange.yfilter)) leaf_name_data.push_back(cufwcntlurlfserverstatuschange.get_name_leafdata());
    if (cufwcntll2staticmacaddressmoved.is_set || is_set(cufwcntll2staticmacaddressmoved.yfilter)) leaf_name_data.push_back(cufwcntll2staticmacaddressmoved.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOUNIFIEDFIREWALLMIB::CuFwNotifCntlGrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOUNIFIEDFIREWALLMIB::CuFwNotifCntlGrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOUNIFIEDFIREWALLMIB::CuFwNotifCntlGrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cufwCntlUrlfServerStatusChange")
    {
        cufwcntlurlfserverstatuschange = value;
        cufwcntlurlfserverstatuschange.value_namespace = name_space;
        cufwcntlurlfserverstatuschange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwCntlL2StaticMacAddressMoved")
    {
        cufwcntll2staticmacaddressmoved = value;
        cufwcntll2staticmacaddressmoved.value_namespace = name_space;
        cufwcntll2staticmacaddressmoved.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOUNIFIEDFIREWALLMIB::CuFwNotifCntlGrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cufwCntlUrlfServerStatusChange")
    {
        cufwcntlurlfserverstatuschange.yfilter = yfilter;
    }
    if(value_path == "cufwCntlL2StaticMacAddressMoved")
    {
        cufwcntll2staticmacaddressmoved.yfilter = yfilter;
    }
}

bool CISCOUNIFIEDFIREWALLMIB::CuFwNotifCntlGrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cufwCntlUrlfServerStatusChange" || name == "cufwCntlL2StaticMacAddressMoved")
        return true;
    return false;
}

CISCOUNIFIEDFIREWALLMIB::CufwConnSummaryTable::CufwConnSummaryTable()
    :
    cufwconnsummaryentry(this, {"cufwconnprotocol"})
{

    yang_name = "cufwConnSummaryTable"; yang_parent_name = "CISCO-UNIFIED-FIREWALL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOUNIFIEDFIREWALLMIB::CufwConnSummaryTable::~CufwConnSummaryTable()
{
}

bool CISCOUNIFIEDFIREWALLMIB::CufwConnSummaryTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cufwconnsummaryentry.len(); index++)
    {
        if(cufwconnsummaryentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOUNIFIEDFIREWALLMIB::CufwConnSummaryTable::has_operation() const
{
    for (std::size_t index=0; index<cufwconnsummaryentry.len(); index++)
    {
        if(cufwconnsummaryentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOUNIFIEDFIREWALLMIB::CufwConnSummaryTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-UNIFIED-FIREWALL-MIB:CISCO-UNIFIED-FIREWALL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOUNIFIEDFIREWALLMIB::CufwConnSummaryTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cufwConnSummaryTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOUNIFIEDFIREWALLMIB::CufwConnSummaryTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOUNIFIEDFIREWALLMIB::CufwConnSummaryTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cufwConnSummaryEntry")
    {
        auto c = std::make_shared<CISCOUNIFIEDFIREWALLMIB::CufwConnSummaryTable::CufwConnSummaryEntry>();
        c->parent = this;
        cufwconnsummaryentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOUNIFIEDFIREWALLMIB::CufwConnSummaryTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cufwconnsummaryentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOUNIFIEDFIREWALLMIB::CufwConnSummaryTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOUNIFIEDFIREWALLMIB::CufwConnSummaryTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOUNIFIEDFIREWALLMIB::CufwConnSummaryTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cufwConnSummaryEntry")
        return true;
    return false;
}

CISCOUNIFIEDFIREWALLMIB::CufwConnSummaryTable::CufwConnSummaryEntry::CufwConnSummaryEntry()
    :
    cufwconnprotocol{YType::enumeration, "cufwConnProtocol"},
    cufwconnnumattempted{YType::uint64, "cufwConnNumAttempted"},
    cufwconnnumsetupsaborted{YType::uint64, "cufwConnNumSetupsAborted"},
    cufwconnnumpolicydeclined{YType::uint64, "cufwConnNumPolicyDeclined"},
    cufwconnnumresdeclined{YType::uint64, "cufwConnNumResDeclined"},
    cufwconnnumhalfopen{YType::uint32, "cufwConnNumHalfOpen"},
    cufwconnnumactive{YType::uint32, "cufwConnNumActive"},
    cufwconnnumaborted{YType::uint64, "cufwConnNumAborted"},
    cufwconnsetuprate1{YType::uint32, "cufwConnSetupRate1"},
    cufwconnsetuprate5{YType::uint32, "cufwConnSetupRate5"}
{

    yang_name = "cufwConnSummaryEntry"; yang_parent_name = "cufwConnSummaryTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOUNIFIEDFIREWALLMIB::CufwConnSummaryTable::CufwConnSummaryEntry::~CufwConnSummaryEntry()
{
}

bool CISCOUNIFIEDFIREWALLMIB::CufwConnSummaryTable::CufwConnSummaryEntry::has_data() const
{
    if (is_presence_container) return true;
    return cufwconnprotocol.is_set
	|| cufwconnnumattempted.is_set
	|| cufwconnnumsetupsaborted.is_set
	|| cufwconnnumpolicydeclined.is_set
	|| cufwconnnumresdeclined.is_set
	|| cufwconnnumhalfopen.is_set
	|| cufwconnnumactive.is_set
	|| cufwconnnumaborted.is_set
	|| cufwconnsetuprate1.is_set
	|| cufwconnsetuprate5.is_set;
}

bool CISCOUNIFIEDFIREWALLMIB::CufwConnSummaryTable::CufwConnSummaryEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cufwconnprotocol.yfilter)
	|| ydk::is_set(cufwconnnumattempted.yfilter)
	|| ydk::is_set(cufwconnnumsetupsaborted.yfilter)
	|| ydk::is_set(cufwconnnumpolicydeclined.yfilter)
	|| ydk::is_set(cufwconnnumresdeclined.yfilter)
	|| ydk::is_set(cufwconnnumhalfopen.yfilter)
	|| ydk::is_set(cufwconnnumactive.yfilter)
	|| ydk::is_set(cufwconnnumaborted.yfilter)
	|| ydk::is_set(cufwconnsetuprate1.yfilter)
	|| ydk::is_set(cufwconnsetuprate5.yfilter);
}

std::string CISCOUNIFIEDFIREWALLMIB::CufwConnSummaryTable::CufwConnSummaryEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-UNIFIED-FIREWALL-MIB:CISCO-UNIFIED-FIREWALL-MIB/cufwConnSummaryTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOUNIFIEDFIREWALLMIB::CufwConnSummaryTable::CufwConnSummaryEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cufwConnSummaryEntry";
    ADD_KEY_TOKEN(cufwconnprotocol, "cufwConnProtocol");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOUNIFIEDFIREWALLMIB::CufwConnSummaryTable::CufwConnSummaryEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cufwconnprotocol.is_set || is_set(cufwconnprotocol.yfilter)) leaf_name_data.push_back(cufwconnprotocol.get_name_leafdata());
    if (cufwconnnumattempted.is_set || is_set(cufwconnnumattempted.yfilter)) leaf_name_data.push_back(cufwconnnumattempted.get_name_leafdata());
    if (cufwconnnumsetupsaborted.is_set || is_set(cufwconnnumsetupsaborted.yfilter)) leaf_name_data.push_back(cufwconnnumsetupsaborted.get_name_leafdata());
    if (cufwconnnumpolicydeclined.is_set || is_set(cufwconnnumpolicydeclined.yfilter)) leaf_name_data.push_back(cufwconnnumpolicydeclined.get_name_leafdata());
    if (cufwconnnumresdeclined.is_set || is_set(cufwconnnumresdeclined.yfilter)) leaf_name_data.push_back(cufwconnnumresdeclined.get_name_leafdata());
    if (cufwconnnumhalfopen.is_set || is_set(cufwconnnumhalfopen.yfilter)) leaf_name_data.push_back(cufwconnnumhalfopen.get_name_leafdata());
    if (cufwconnnumactive.is_set || is_set(cufwconnnumactive.yfilter)) leaf_name_data.push_back(cufwconnnumactive.get_name_leafdata());
    if (cufwconnnumaborted.is_set || is_set(cufwconnnumaborted.yfilter)) leaf_name_data.push_back(cufwconnnumaborted.get_name_leafdata());
    if (cufwconnsetuprate1.is_set || is_set(cufwconnsetuprate1.yfilter)) leaf_name_data.push_back(cufwconnsetuprate1.get_name_leafdata());
    if (cufwconnsetuprate5.is_set || is_set(cufwconnsetuprate5.yfilter)) leaf_name_data.push_back(cufwconnsetuprate5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOUNIFIEDFIREWALLMIB::CufwConnSummaryTable::CufwConnSummaryEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOUNIFIEDFIREWALLMIB::CufwConnSummaryTable::CufwConnSummaryEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOUNIFIEDFIREWALLMIB::CufwConnSummaryTable::CufwConnSummaryEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cufwConnProtocol")
    {
        cufwconnprotocol = value;
        cufwconnprotocol.value_namespace = name_space;
        cufwconnprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwConnNumAttempted")
    {
        cufwconnnumattempted = value;
        cufwconnnumattempted.value_namespace = name_space;
        cufwconnnumattempted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwConnNumSetupsAborted")
    {
        cufwconnnumsetupsaborted = value;
        cufwconnnumsetupsaborted.value_namespace = name_space;
        cufwconnnumsetupsaborted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwConnNumPolicyDeclined")
    {
        cufwconnnumpolicydeclined = value;
        cufwconnnumpolicydeclined.value_namespace = name_space;
        cufwconnnumpolicydeclined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwConnNumResDeclined")
    {
        cufwconnnumresdeclined = value;
        cufwconnnumresdeclined.value_namespace = name_space;
        cufwconnnumresdeclined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwConnNumHalfOpen")
    {
        cufwconnnumhalfopen = value;
        cufwconnnumhalfopen.value_namespace = name_space;
        cufwconnnumhalfopen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwConnNumActive")
    {
        cufwconnnumactive = value;
        cufwconnnumactive.value_namespace = name_space;
        cufwconnnumactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwConnNumAborted")
    {
        cufwconnnumaborted = value;
        cufwconnnumaborted.value_namespace = name_space;
        cufwconnnumaborted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwConnSetupRate1")
    {
        cufwconnsetuprate1 = value;
        cufwconnsetuprate1.value_namespace = name_space;
        cufwconnsetuprate1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwConnSetupRate5")
    {
        cufwconnsetuprate5 = value;
        cufwconnsetuprate5.value_namespace = name_space;
        cufwconnsetuprate5.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOUNIFIEDFIREWALLMIB::CufwConnSummaryTable::CufwConnSummaryEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cufwConnProtocol")
    {
        cufwconnprotocol.yfilter = yfilter;
    }
    if(value_path == "cufwConnNumAttempted")
    {
        cufwconnnumattempted.yfilter = yfilter;
    }
    if(value_path == "cufwConnNumSetupsAborted")
    {
        cufwconnnumsetupsaborted.yfilter = yfilter;
    }
    if(value_path == "cufwConnNumPolicyDeclined")
    {
        cufwconnnumpolicydeclined.yfilter = yfilter;
    }
    if(value_path == "cufwConnNumResDeclined")
    {
        cufwconnnumresdeclined.yfilter = yfilter;
    }
    if(value_path == "cufwConnNumHalfOpen")
    {
        cufwconnnumhalfopen.yfilter = yfilter;
    }
    if(value_path == "cufwConnNumActive")
    {
        cufwconnnumactive.yfilter = yfilter;
    }
    if(value_path == "cufwConnNumAborted")
    {
        cufwconnnumaborted.yfilter = yfilter;
    }
    if(value_path == "cufwConnSetupRate1")
    {
        cufwconnsetuprate1.yfilter = yfilter;
    }
    if(value_path == "cufwConnSetupRate5")
    {
        cufwconnsetuprate5.yfilter = yfilter;
    }
}

bool CISCOUNIFIEDFIREWALLMIB::CufwConnSummaryTable::CufwConnSummaryEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cufwConnProtocol" || name == "cufwConnNumAttempted" || name == "cufwConnNumSetupsAborted" || name == "cufwConnNumPolicyDeclined" || name == "cufwConnNumResDeclined" || name == "cufwConnNumHalfOpen" || name == "cufwConnNumActive" || name == "cufwConnNumAborted" || name == "cufwConnSetupRate1" || name == "cufwConnSetupRate5")
        return true;
    return false;
}

CISCOUNIFIEDFIREWALLMIB::CufwAppConnSummaryTable::CufwAppConnSummaryTable()
    :
    cufwappconnsummaryentry(this, {"cufwappconnprotocol"})
{

    yang_name = "cufwAppConnSummaryTable"; yang_parent_name = "CISCO-UNIFIED-FIREWALL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOUNIFIEDFIREWALLMIB::CufwAppConnSummaryTable::~CufwAppConnSummaryTable()
{
}

bool CISCOUNIFIEDFIREWALLMIB::CufwAppConnSummaryTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cufwappconnsummaryentry.len(); index++)
    {
        if(cufwappconnsummaryentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOUNIFIEDFIREWALLMIB::CufwAppConnSummaryTable::has_operation() const
{
    for (std::size_t index=0; index<cufwappconnsummaryentry.len(); index++)
    {
        if(cufwappconnsummaryentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOUNIFIEDFIREWALLMIB::CufwAppConnSummaryTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-UNIFIED-FIREWALL-MIB:CISCO-UNIFIED-FIREWALL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOUNIFIEDFIREWALLMIB::CufwAppConnSummaryTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cufwAppConnSummaryTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOUNIFIEDFIREWALLMIB::CufwAppConnSummaryTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOUNIFIEDFIREWALLMIB::CufwAppConnSummaryTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cufwAppConnSummaryEntry")
    {
        auto c = std::make_shared<CISCOUNIFIEDFIREWALLMIB::CufwAppConnSummaryTable::CufwAppConnSummaryEntry>();
        c->parent = this;
        cufwappconnsummaryentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOUNIFIEDFIREWALLMIB::CufwAppConnSummaryTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cufwappconnsummaryentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOUNIFIEDFIREWALLMIB::CufwAppConnSummaryTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOUNIFIEDFIREWALLMIB::CufwAppConnSummaryTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOUNIFIEDFIREWALLMIB::CufwAppConnSummaryTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cufwAppConnSummaryEntry")
        return true;
    return false;
}

CISCOUNIFIEDFIREWALLMIB::CufwAppConnSummaryTable::CufwAppConnSummaryEntry::CufwAppConnSummaryEntry()
    :
    cufwappconnprotocol{YType::enumeration, "cufwAppConnProtocol"},
    cufwappconnnumattempted{YType::uint64, "cufwAppConnNumAttempted"},
    cufwappconnnumsetupsaborted{YType::uint64, "cufwAppConnNumSetupsAborted"},
    cufwappconnnumpolicydeclined{YType::uint64, "cufwAppConnNumPolicyDeclined"},
    cufwappconnnumresdeclined{YType::uint64, "cufwAppConnNumResDeclined"},
    cufwappconnnumhalfopen{YType::uint32, "cufwAppConnNumHalfOpen"},
    cufwappconnnumactive{YType::uint32, "cufwAppConnNumActive"},
    cufwappconnnumaborted{YType::uint64, "cufwAppConnNumAborted"},
    cufwappconnsetuprate1{YType::uint32, "cufwAppConnSetupRate1"},
    cufwappconnsetuprate5{YType::uint32, "cufwAppConnSetupRate5"}
{

    yang_name = "cufwAppConnSummaryEntry"; yang_parent_name = "cufwAppConnSummaryTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOUNIFIEDFIREWALLMIB::CufwAppConnSummaryTable::CufwAppConnSummaryEntry::~CufwAppConnSummaryEntry()
{
}

bool CISCOUNIFIEDFIREWALLMIB::CufwAppConnSummaryTable::CufwAppConnSummaryEntry::has_data() const
{
    if (is_presence_container) return true;
    return cufwappconnprotocol.is_set
	|| cufwappconnnumattempted.is_set
	|| cufwappconnnumsetupsaborted.is_set
	|| cufwappconnnumpolicydeclined.is_set
	|| cufwappconnnumresdeclined.is_set
	|| cufwappconnnumhalfopen.is_set
	|| cufwappconnnumactive.is_set
	|| cufwappconnnumaborted.is_set
	|| cufwappconnsetuprate1.is_set
	|| cufwappconnsetuprate5.is_set;
}

bool CISCOUNIFIEDFIREWALLMIB::CufwAppConnSummaryTable::CufwAppConnSummaryEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cufwappconnprotocol.yfilter)
	|| ydk::is_set(cufwappconnnumattempted.yfilter)
	|| ydk::is_set(cufwappconnnumsetupsaborted.yfilter)
	|| ydk::is_set(cufwappconnnumpolicydeclined.yfilter)
	|| ydk::is_set(cufwappconnnumresdeclined.yfilter)
	|| ydk::is_set(cufwappconnnumhalfopen.yfilter)
	|| ydk::is_set(cufwappconnnumactive.yfilter)
	|| ydk::is_set(cufwappconnnumaborted.yfilter)
	|| ydk::is_set(cufwappconnsetuprate1.yfilter)
	|| ydk::is_set(cufwappconnsetuprate5.yfilter);
}

std::string CISCOUNIFIEDFIREWALLMIB::CufwAppConnSummaryTable::CufwAppConnSummaryEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-UNIFIED-FIREWALL-MIB:CISCO-UNIFIED-FIREWALL-MIB/cufwAppConnSummaryTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOUNIFIEDFIREWALLMIB::CufwAppConnSummaryTable::CufwAppConnSummaryEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cufwAppConnSummaryEntry";
    ADD_KEY_TOKEN(cufwappconnprotocol, "cufwAppConnProtocol");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOUNIFIEDFIREWALLMIB::CufwAppConnSummaryTable::CufwAppConnSummaryEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cufwappconnprotocol.is_set || is_set(cufwappconnprotocol.yfilter)) leaf_name_data.push_back(cufwappconnprotocol.get_name_leafdata());
    if (cufwappconnnumattempted.is_set || is_set(cufwappconnnumattempted.yfilter)) leaf_name_data.push_back(cufwappconnnumattempted.get_name_leafdata());
    if (cufwappconnnumsetupsaborted.is_set || is_set(cufwappconnnumsetupsaborted.yfilter)) leaf_name_data.push_back(cufwappconnnumsetupsaborted.get_name_leafdata());
    if (cufwappconnnumpolicydeclined.is_set || is_set(cufwappconnnumpolicydeclined.yfilter)) leaf_name_data.push_back(cufwappconnnumpolicydeclined.get_name_leafdata());
    if (cufwappconnnumresdeclined.is_set || is_set(cufwappconnnumresdeclined.yfilter)) leaf_name_data.push_back(cufwappconnnumresdeclined.get_name_leafdata());
    if (cufwappconnnumhalfopen.is_set || is_set(cufwappconnnumhalfopen.yfilter)) leaf_name_data.push_back(cufwappconnnumhalfopen.get_name_leafdata());
    if (cufwappconnnumactive.is_set || is_set(cufwappconnnumactive.yfilter)) leaf_name_data.push_back(cufwappconnnumactive.get_name_leafdata());
    if (cufwappconnnumaborted.is_set || is_set(cufwappconnnumaborted.yfilter)) leaf_name_data.push_back(cufwappconnnumaborted.get_name_leafdata());
    if (cufwappconnsetuprate1.is_set || is_set(cufwappconnsetuprate1.yfilter)) leaf_name_data.push_back(cufwappconnsetuprate1.get_name_leafdata());
    if (cufwappconnsetuprate5.is_set || is_set(cufwappconnsetuprate5.yfilter)) leaf_name_data.push_back(cufwappconnsetuprate5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOUNIFIEDFIREWALLMIB::CufwAppConnSummaryTable::CufwAppConnSummaryEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOUNIFIEDFIREWALLMIB::CufwAppConnSummaryTable::CufwAppConnSummaryEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOUNIFIEDFIREWALLMIB::CufwAppConnSummaryTable::CufwAppConnSummaryEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cufwAppConnProtocol")
    {
        cufwappconnprotocol = value;
        cufwappconnprotocol.value_namespace = name_space;
        cufwappconnprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwAppConnNumAttempted")
    {
        cufwappconnnumattempted = value;
        cufwappconnnumattempted.value_namespace = name_space;
        cufwappconnnumattempted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwAppConnNumSetupsAborted")
    {
        cufwappconnnumsetupsaborted = value;
        cufwappconnnumsetupsaborted.value_namespace = name_space;
        cufwappconnnumsetupsaborted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwAppConnNumPolicyDeclined")
    {
        cufwappconnnumpolicydeclined = value;
        cufwappconnnumpolicydeclined.value_namespace = name_space;
        cufwappconnnumpolicydeclined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwAppConnNumResDeclined")
    {
        cufwappconnnumresdeclined = value;
        cufwappconnnumresdeclined.value_namespace = name_space;
        cufwappconnnumresdeclined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwAppConnNumHalfOpen")
    {
        cufwappconnnumhalfopen = value;
        cufwappconnnumhalfopen.value_namespace = name_space;
        cufwappconnnumhalfopen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwAppConnNumActive")
    {
        cufwappconnnumactive = value;
        cufwappconnnumactive.value_namespace = name_space;
        cufwappconnnumactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwAppConnNumAborted")
    {
        cufwappconnnumaborted = value;
        cufwappconnnumaborted.value_namespace = name_space;
        cufwappconnnumaborted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwAppConnSetupRate1")
    {
        cufwappconnsetuprate1 = value;
        cufwappconnsetuprate1.value_namespace = name_space;
        cufwappconnsetuprate1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwAppConnSetupRate5")
    {
        cufwappconnsetuprate5 = value;
        cufwappconnsetuprate5.value_namespace = name_space;
        cufwappconnsetuprate5.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOUNIFIEDFIREWALLMIB::CufwAppConnSummaryTable::CufwAppConnSummaryEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cufwAppConnProtocol")
    {
        cufwappconnprotocol.yfilter = yfilter;
    }
    if(value_path == "cufwAppConnNumAttempted")
    {
        cufwappconnnumattempted.yfilter = yfilter;
    }
    if(value_path == "cufwAppConnNumSetupsAborted")
    {
        cufwappconnnumsetupsaborted.yfilter = yfilter;
    }
    if(value_path == "cufwAppConnNumPolicyDeclined")
    {
        cufwappconnnumpolicydeclined.yfilter = yfilter;
    }
    if(value_path == "cufwAppConnNumResDeclined")
    {
        cufwappconnnumresdeclined.yfilter = yfilter;
    }
    if(value_path == "cufwAppConnNumHalfOpen")
    {
        cufwappconnnumhalfopen.yfilter = yfilter;
    }
    if(value_path == "cufwAppConnNumActive")
    {
        cufwappconnnumactive.yfilter = yfilter;
    }
    if(value_path == "cufwAppConnNumAborted")
    {
        cufwappconnnumaborted.yfilter = yfilter;
    }
    if(value_path == "cufwAppConnSetupRate1")
    {
        cufwappconnsetuprate1.yfilter = yfilter;
    }
    if(value_path == "cufwAppConnSetupRate5")
    {
        cufwappconnsetuprate5.yfilter = yfilter;
    }
}

bool CISCOUNIFIEDFIREWALLMIB::CufwAppConnSummaryTable::CufwAppConnSummaryEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cufwAppConnProtocol" || name == "cufwAppConnNumAttempted" || name == "cufwAppConnNumSetupsAborted" || name == "cufwAppConnNumPolicyDeclined" || name == "cufwAppConnNumResDeclined" || name == "cufwAppConnNumHalfOpen" || name == "cufwAppConnNumActive" || name == "cufwAppConnNumAborted" || name == "cufwAppConnSetupRate1" || name == "cufwAppConnSetupRate5")
        return true;
    return false;
}

CISCOUNIFIEDFIREWALLMIB::CufwPolicyConnSummaryTable::CufwPolicyConnSummaryTable()
    :
    cufwpolicyconnsummaryentry(this, {"cufwpolconnpolicy", "cufwpolconnpolicytargettype", "cufwpolconnpolicytarget", "cufwpolconnprotocol"})
{

    yang_name = "cufwPolicyConnSummaryTable"; yang_parent_name = "CISCO-UNIFIED-FIREWALL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOUNIFIEDFIREWALLMIB::CufwPolicyConnSummaryTable::~CufwPolicyConnSummaryTable()
{
}

bool CISCOUNIFIEDFIREWALLMIB::CufwPolicyConnSummaryTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cufwpolicyconnsummaryentry.len(); index++)
    {
        if(cufwpolicyconnsummaryentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOUNIFIEDFIREWALLMIB::CufwPolicyConnSummaryTable::has_operation() const
{
    for (std::size_t index=0; index<cufwpolicyconnsummaryentry.len(); index++)
    {
        if(cufwpolicyconnsummaryentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOUNIFIEDFIREWALLMIB::CufwPolicyConnSummaryTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-UNIFIED-FIREWALL-MIB:CISCO-UNIFIED-FIREWALL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOUNIFIEDFIREWALLMIB::CufwPolicyConnSummaryTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cufwPolicyConnSummaryTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOUNIFIEDFIREWALLMIB::CufwPolicyConnSummaryTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOUNIFIEDFIREWALLMIB::CufwPolicyConnSummaryTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cufwPolicyConnSummaryEntry")
    {
        auto c = std::make_shared<CISCOUNIFIEDFIREWALLMIB::CufwPolicyConnSummaryTable::CufwPolicyConnSummaryEntry>();
        c->parent = this;
        cufwpolicyconnsummaryentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOUNIFIEDFIREWALLMIB::CufwPolicyConnSummaryTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cufwpolicyconnsummaryentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOUNIFIEDFIREWALLMIB::CufwPolicyConnSummaryTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOUNIFIEDFIREWALLMIB::CufwPolicyConnSummaryTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOUNIFIEDFIREWALLMIB::CufwPolicyConnSummaryTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cufwPolicyConnSummaryEntry")
        return true;
    return false;
}

CISCOUNIFIEDFIREWALLMIB::CufwPolicyConnSummaryTable::CufwPolicyConnSummaryEntry::CufwPolicyConnSummaryEntry()
    :
    cufwpolconnpolicy{YType::str, "cufwPolConnPolicy"},
    cufwpolconnpolicytargettype{YType::enumeration, "cufwPolConnPolicyTargetType"},
    cufwpolconnpolicytarget{YType::str, "cufwPolConnPolicyTarget"},
    cufwpolconnprotocol{YType::enumeration, "cufwPolConnProtocol"},
    cufwpolconnnumattempted{YType::uint64, "cufwPolConnNumAttempted"},
    cufwpolconnnumsetupsaborted{YType::uint64, "cufwPolConnNumSetupsAborted"},
    cufwpolconnnumpolicydeclined{YType::uint64, "cufwPolConnNumPolicyDeclined"},
    cufwpolconnnumresdeclined{YType::uint64, "cufwPolConnNumResDeclined"},
    cufwpolconnnumhalfopen{YType::uint32, "cufwPolConnNumHalfOpen"},
    cufwpolconnnumactive{YType::uint32, "cufwPolConnNumActive"},
    cufwpolconnnumaborted{YType::uint64, "cufwPolConnNumAborted"}
{

    yang_name = "cufwPolicyConnSummaryEntry"; yang_parent_name = "cufwPolicyConnSummaryTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOUNIFIEDFIREWALLMIB::CufwPolicyConnSummaryTable::CufwPolicyConnSummaryEntry::~CufwPolicyConnSummaryEntry()
{
}

bool CISCOUNIFIEDFIREWALLMIB::CufwPolicyConnSummaryTable::CufwPolicyConnSummaryEntry::has_data() const
{
    if (is_presence_container) return true;
    return cufwpolconnpolicy.is_set
	|| cufwpolconnpolicytargettype.is_set
	|| cufwpolconnpolicytarget.is_set
	|| cufwpolconnprotocol.is_set
	|| cufwpolconnnumattempted.is_set
	|| cufwpolconnnumsetupsaborted.is_set
	|| cufwpolconnnumpolicydeclined.is_set
	|| cufwpolconnnumresdeclined.is_set
	|| cufwpolconnnumhalfopen.is_set
	|| cufwpolconnnumactive.is_set
	|| cufwpolconnnumaborted.is_set;
}

bool CISCOUNIFIEDFIREWALLMIB::CufwPolicyConnSummaryTable::CufwPolicyConnSummaryEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cufwpolconnpolicy.yfilter)
	|| ydk::is_set(cufwpolconnpolicytargettype.yfilter)
	|| ydk::is_set(cufwpolconnpolicytarget.yfilter)
	|| ydk::is_set(cufwpolconnprotocol.yfilter)
	|| ydk::is_set(cufwpolconnnumattempted.yfilter)
	|| ydk::is_set(cufwpolconnnumsetupsaborted.yfilter)
	|| ydk::is_set(cufwpolconnnumpolicydeclined.yfilter)
	|| ydk::is_set(cufwpolconnnumresdeclined.yfilter)
	|| ydk::is_set(cufwpolconnnumhalfopen.yfilter)
	|| ydk::is_set(cufwpolconnnumactive.yfilter)
	|| ydk::is_set(cufwpolconnnumaborted.yfilter);
}

std::string CISCOUNIFIEDFIREWALLMIB::CufwPolicyConnSummaryTable::CufwPolicyConnSummaryEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-UNIFIED-FIREWALL-MIB:CISCO-UNIFIED-FIREWALL-MIB/cufwPolicyConnSummaryTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOUNIFIEDFIREWALLMIB::CufwPolicyConnSummaryTable::CufwPolicyConnSummaryEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cufwPolicyConnSummaryEntry";
    ADD_KEY_TOKEN(cufwpolconnpolicy, "cufwPolConnPolicy");
    ADD_KEY_TOKEN(cufwpolconnpolicytargettype, "cufwPolConnPolicyTargetType");
    ADD_KEY_TOKEN(cufwpolconnpolicytarget, "cufwPolConnPolicyTarget");
    ADD_KEY_TOKEN(cufwpolconnprotocol, "cufwPolConnProtocol");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOUNIFIEDFIREWALLMIB::CufwPolicyConnSummaryTable::CufwPolicyConnSummaryEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cufwpolconnpolicy.is_set || is_set(cufwpolconnpolicy.yfilter)) leaf_name_data.push_back(cufwpolconnpolicy.get_name_leafdata());
    if (cufwpolconnpolicytargettype.is_set || is_set(cufwpolconnpolicytargettype.yfilter)) leaf_name_data.push_back(cufwpolconnpolicytargettype.get_name_leafdata());
    if (cufwpolconnpolicytarget.is_set || is_set(cufwpolconnpolicytarget.yfilter)) leaf_name_data.push_back(cufwpolconnpolicytarget.get_name_leafdata());
    if (cufwpolconnprotocol.is_set || is_set(cufwpolconnprotocol.yfilter)) leaf_name_data.push_back(cufwpolconnprotocol.get_name_leafdata());
    if (cufwpolconnnumattempted.is_set || is_set(cufwpolconnnumattempted.yfilter)) leaf_name_data.push_back(cufwpolconnnumattempted.get_name_leafdata());
    if (cufwpolconnnumsetupsaborted.is_set || is_set(cufwpolconnnumsetupsaborted.yfilter)) leaf_name_data.push_back(cufwpolconnnumsetupsaborted.get_name_leafdata());
    if (cufwpolconnnumpolicydeclined.is_set || is_set(cufwpolconnnumpolicydeclined.yfilter)) leaf_name_data.push_back(cufwpolconnnumpolicydeclined.get_name_leafdata());
    if (cufwpolconnnumresdeclined.is_set || is_set(cufwpolconnnumresdeclined.yfilter)) leaf_name_data.push_back(cufwpolconnnumresdeclined.get_name_leafdata());
    if (cufwpolconnnumhalfopen.is_set || is_set(cufwpolconnnumhalfopen.yfilter)) leaf_name_data.push_back(cufwpolconnnumhalfopen.get_name_leafdata());
    if (cufwpolconnnumactive.is_set || is_set(cufwpolconnnumactive.yfilter)) leaf_name_data.push_back(cufwpolconnnumactive.get_name_leafdata());
    if (cufwpolconnnumaborted.is_set || is_set(cufwpolconnnumaborted.yfilter)) leaf_name_data.push_back(cufwpolconnnumaborted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOUNIFIEDFIREWALLMIB::CufwPolicyConnSummaryTable::CufwPolicyConnSummaryEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOUNIFIEDFIREWALLMIB::CufwPolicyConnSummaryTable::CufwPolicyConnSummaryEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOUNIFIEDFIREWALLMIB::CufwPolicyConnSummaryTable::CufwPolicyConnSummaryEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cufwPolConnPolicy")
    {
        cufwpolconnpolicy = value;
        cufwpolconnpolicy.value_namespace = name_space;
        cufwpolconnpolicy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwPolConnPolicyTargetType")
    {
        cufwpolconnpolicytargettype = value;
        cufwpolconnpolicytargettype.value_namespace = name_space;
        cufwpolconnpolicytargettype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwPolConnPolicyTarget")
    {
        cufwpolconnpolicytarget = value;
        cufwpolconnpolicytarget.value_namespace = name_space;
        cufwpolconnpolicytarget.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwPolConnProtocol")
    {
        cufwpolconnprotocol = value;
        cufwpolconnprotocol.value_namespace = name_space;
        cufwpolconnprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwPolConnNumAttempted")
    {
        cufwpolconnnumattempted = value;
        cufwpolconnnumattempted.value_namespace = name_space;
        cufwpolconnnumattempted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwPolConnNumSetupsAborted")
    {
        cufwpolconnnumsetupsaborted = value;
        cufwpolconnnumsetupsaborted.value_namespace = name_space;
        cufwpolconnnumsetupsaborted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwPolConnNumPolicyDeclined")
    {
        cufwpolconnnumpolicydeclined = value;
        cufwpolconnnumpolicydeclined.value_namespace = name_space;
        cufwpolconnnumpolicydeclined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwPolConnNumResDeclined")
    {
        cufwpolconnnumresdeclined = value;
        cufwpolconnnumresdeclined.value_namespace = name_space;
        cufwpolconnnumresdeclined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwPolConnNumHalfOpen")
    {
        cufwpolconnnumhalfopen = value;
        cufwpolconnnumhalfopen.value_namespace = name_space;
        cufwpolconnnumhalfopen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwPolConnNumActive")
    {
        cufwpolconnnumactive = value;
        cufwpolconnnumactive.value_namespace = name_space;
        cufwpolconnnumactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwPolConnNumAborted")
    {
        cufwpolconnnumaborted = value;
        cufwpolconnnumaborted.value_namespace = name_space;
        cufwpolconnnumaborted.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOUNIFIEDFIREWALLMIB::CufwPolicyConnSummaryTable::CufwPolicyConnSummaryEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cufwPolConnPolicy")
    {
        cufwpolconnpolicy.yfilter = yfilter;
    }
    if(value_path == "cufwPolConnPolicyTargetType")
    {
        cufwpolconnpolicytargettype.yfilter = yfilter;
    }
    if(value_path == "cufwPolConnPolicyTarget")
    {
        cufwpolconnpolicytarget.yfilter = yfilter;
    }
    if(value_path == "cufwPolConnProtocol")
    {
        cufwpolconnprotocol.yfilter = yfilter;
    }
    if(value_path == "cufwPolConnNumAttempted")
    {
        cufwpolconnnumattempted.yfilter = yfilter;
    }
    if(value_path == "cufwPolConnNumSetupsAborted")
    {
        cufwpolconnnumsetupsaborted.yfilter = yfilter;
    }
    if(value_path == "cufwPolConnNumPolicyDeclined")
    {
        cufwpolconnnumpolicydeclined.yfilter = yfilter;
    }
    if(value_path == "cufwPolConnNumResDeclined")
    {
        cufwpolconnnumresdeclined.yfilter = yfilter;
    }
    if(value_path == "cufwPolConnNumHalfOpen")
    {
        cufwpolconnnumhalfopen.yfilter = yfilter;
    }
    if(value_path == "cufwPolConnNumActive")
    {
        cufwpolconnnumactive.yfilter = yfilter;
    }
    if(value_path == "cufwPolConnNumAborted")
    {
        cufwpolconnnumaborted.yfilter = yfilter;
    }
}

bool CISCOUNIFIEDFIREWALLMIB::CufwPolicyConnSummaryTable::CufwPolicyConnSummaryEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cufwPolConnPolicy" || name == "cufwPolConnPolicyTargetType" || name == "cufwPolConnPolicyTarget" || name == "cufwPolConnProtocol" || name == "cufwPolConnNumAttempted" || name == "cufwPolConnNumSetupsAborted" || name == "cufwPolConnNumPolicyDeclined" || name == "cufwPolConnNumResDeclined" || name == "cufwPolConnNumHalfOpen" || name == "cufwPolConnNumActive" || name == "cufwPolConnNumAborted")
        return true;
    return false;
}

CISCOUNIFIEDFIREWALLMIB::CufwPolicyAppConnSummaryTable::CufwPolicyAppConnSummaryTable()
    :
    cufwpolicyappconnsummaryentry(this, {"cufwpolappconnpolicy", "cufwpolappconnpolicytargettype", "cufwpolappconnpolicytarget", "cufwpolappconnprotocol"})
{

    yang_name = "cufwPolicyAppConnSummaryTable"; yang_parent_name = "CISCO-UNIFIED-FIREWALL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOUNIFIEDFIREWALLMIB::CufwPolicyAppConnSummaryTable::~CufwPolicyAppConnSummaryTable()
{
}

bool CISCOUNIFIEDFIREWALLMIB::CufwPolicyAppConnSummaryTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cufwpolicyappconnsummaryentry.len(); index++)
    {
        if(cufwpolicyappconnsummaryentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOUNIFIEDFIREWALLMIB::CufwPolicyAppConnSummaryTable::has_operation() const
{
    for (std::size_t index=0; index<cufwpolicyappconnsummaryentry.len(); index++)
    {
        if(cufwpolicyappconnsummaryentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOUNIFIEDFIREWALLMIB::CufwPolicyAppConnSummaryTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-UNIFIED-FIREWALL-MIB:CISCO-UNIFIED-FIREWALL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOUNIFIEDFIREWALLMIB::CufwPolicyAppConnSummaryTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cufwPolicyAppConnSummaryTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOUNIFIEDFIREWALLMIB::CufwPolicyAppConnSummaryTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOUNIFIEDFIREWALLMIB::CufwPolicyAppConnSummaryTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cufwPolicyAppConnSummaryEntry")
    {
        auto c = std::make_shared<CISCOUNIFIEDFIREWALLMIB::CufwPolicyAppConnSummaryTable::CufwPolicyAppConnSummaryEntry>();
        c->parent = this;
        cufwpolicyappconnsummaryentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOUNIFIEDFIREWALLMIB::CufwPolicyAppConnSummaryTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cufwpolicyappconnsummaryentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOUNIFIEDFIREWALLMIB::CufwPolicyAppConnSummaryTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOUNIFIEDFIREWALLMIB::CufwPolicyAppConnSummaryTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOUNIFIEDFIREWALLMIB::CufwPolicyAppConnSummaryTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cufwPolicyAppConnSummaryEntry")
        return true;
    return false;
}

CISCOUNIFIEDFIREWALLMIB::CufwPolicyAppConnSummaryTable::CufwPolicyAppConnSummaryEntry::CufwPolicyAppConnSummaryEntry()
    :
    cufwpolappconnpolicy{YType::str, "cufwPolAppConnPolicy"},
    cufwpolappconnpolicytargettype{YType::enumeration, "cufwPolAppConnPolicyTargetType"},
    cufwpolappconnpolicytarget{YType::str, "cufwPolAppConnPolicyTarget"},
    cufwpolappconnprotocol{YType::enumeration, "cufwPolAppConnProtocol"},
    cufwpolappconnnumattempted{YType::uint64, "cufwPolAppConnNumAttempted"},
    cufwpolappconnnumsetupsaborted{YType::uint64, "cufwPolAppConnNumSetupsAborted"},
    cufwpolappconnnumpolicydeclined{YType::uint64, "cufwPolAppConnNumPolicyDeclined"},
    cufwpolappconnnumresdeclined{YType::uint64, "cufwPolAppConnNumResDeclined"},
    cufwpolappconnnumhalfopen{YType::uint32, "cufwPolAppConnNumHalfOpen"},
    cufwpolappconnnumactive{YType::uint32, "cufwPolAppConnNumActive"},
    cufwpolappconnnumaborted{YType::uint64, "cufwPolAppConnNumAborted"}
{

    yang_name = "cufwPolicyAppConnSummaryEntry"; yang_parent_name = "cufwPolicyAppConnSummaryTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOUNIFIEDFIREWALLMIB::CufwPolicyAppConnSummaryTable::CufwPolicyAppConnSummaryEntry::~CufwPolicyAppConnSummaryEntry()
{
}

bool CISCOUNIFIEDFIREWALLMIB::CufwPolicyAppConnSummaryTable::CufwPolicyAppConnSummaryEntry::has_data() const
{
    if (is_presence_container) return true;
    return cufwpolappconnpolicy.is_set
	|| cufwpolappconnpolicytargettype.is_set
	|| cufwpolappconnpolicytarget.is_set
	|| cufwpolappconnprotocol.is_set
	|| cufwpolappconnnumattempted.is_set
	|| cufwpolappconnnumsetupsaborted.is_set
	|| cufwpolappconnnumpolicydeclined.is_set
	|| cufwpolappconnnumresdeclined.is_set
	|| cufwpolappconnnumhalfopen.is_set
	|| cufwpolappconnnumactive.is_set
	|| cufwpolappconnnumaborted.is_set;
}

bool CISCOUNIFIEDFIREWALLMIB::CufwPolicyAppConnSummaryTable::CufwPolicyAppConnSummaryEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cufwpolappconnpolicy.yfilter)
	|| ydk::is_set(cufwpolappconnpolicytargettype.yfilter)
	|| ydk::is_set(cufwpolappconnpolicytarget.yfilter)
	|| ydk::is_set(cufwpolappconnprotocol.yfilter)
	|| ydk::is_set(cufwpolappconnnumattempted.yfilter)
	|| ydk::is_set(cufwpolappconnnumsetupsaborted.yfilter)
	|| ydk::is_set(cufwpolappconnnumpolicydeclined.yfilter)
	|| ydk::is_set(cufwpolappconnnumresdeclined.yfilter)
	|| ydk::is_set(cufwpolappconnnumhalfopen.yfilter)
	|| ydk::is_set(cufwpolappconnnumactive.yfilter)
	|| ydk::is_set(cufwpolappconnnumaborted.yfilter);
}

std::string CISCOUNIFIEDFIREWALLMIB::CufwPolicyAppConnSummaryTable::CufwPolicyAppConnSummaryEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-UNIFIED-FIREWALL-MIB:CISCO-UNIFIED-FIREWALL-MIB/cufwPolicyAppConnSummaryTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOUNIFIEDFIREWALLMIB::CufwPolicyAppConnSummaryTable::CufwPolicyAppConnSummaryEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cufwPolicyAppConnSummaryEntry";
    ADD_KEY_TOKEN(cufwpolappconnpolicy, "cufwPolAppConnPolicy");
    ADD_KEY_TOKEN(cufwpolappconnpolicytargettype, "cufwPolAppConnPolicyTargetType");
    ADD_KEY_TOKEN(cufwpolappconnpolicytarget, "cufwPolAppConnPolicyTarget");
    ADD_KEY_TOKEN(cufwpolappconnprotocol, "cufwPolAppConnProtocol");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOUNIFIEDFIREWALLMIB::CufwPolicyAppConnSummaryTable::CufwPolicyAppConnSummaryEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cufwpolappconnpolicy.is_set || is_set(cufwpolappconnpolicy.yfilter)) leaf_name_data.push_back(cufwpolappconnpolicy.get_name_leafdata());
    if (cufwpolappconnpolicytargettype.is_set || is_set(cufwpolappconnpolicytargettype.yfilter)) leaf_name_data.push_back(cufwpolappconnpolicytargettype.get_name_leafdata());
    if (cufwpolappconnpolicytarget.is_set || is_set(cufwpolappconnpolicytarget.yfilter)) leaf_name_data.push_back(cufwpolappconnpolicytarget.get_name_leafdata());
    if (cufwpolappconnprotocol.is_set || is_set(cufwpolappconnprotocol.yfilter)) leaf_name_data.push_back(cufwpolappconnprotocol.get_name_leafdata());
    if (cufwpolappconnnumattempted.is_set || is_set(cufwpolappconnnumattempted.yfilter)) leaf_name_data.push_back(cufwpolappconnnumattempted.get_name_leafdata());
    if (cufwpolappconnnumsetupsaborted.is_set || is_set(cufwpolappconnnumsetupsaborted.yfilter)) leaf_name_data.push_back(cufwpolappconnnumsetupsaborted.get_name_leafdata());
    if (cufwpolappconnnumpolicydeclined.is_set || is_set(cufwpolappconnnumpolicydeclined.yfilter)) leaf_name_data.push_back(cufwpolappconnnumpolicydeclined.get_name_leafdata());
    if (cufwpolappconnnumresdeclined.is_set || is_set(cufwpolappconnnumresdeclined.yfilter)) leaf_name_data.push_back(cufwpolappconnnumresdeclined.get_name_leafdata());
    if (cufwpolappconnnumhalfopen.is_set || is_set(cufwpolappconnnumhalfopen.yfilter)) leaf_name_data.push_back(cufwpolappconnnumhalfopen.get_name_leafdata());
    if (cufwpolappconnnumactive.is_set || is_set(cufwpolappconnnumactive.yfilter)) leaf_name_data.push_back(cufwpolappconnnumactive.get_name_leafdata());
    if (cufwpolappconnnumaborted.is_set || is_set(cufwpolappconnnumaborted.yfilter)) leaf_name_data.push_back(cufwpolappconnnumaborted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOUNIFIEDFIREWALLMIB::CufwPolicyAppConnSummaryTable::CufwPolicyAppConnSummaryEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOUNIFIEDFIREWALLMIB::CufwPolicyAppConnSummaryTable::CufwPolicyAppConnSummaryEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOUNIFIEDFIREWALLMIB::CufwPolicyAppConnSummaryTable::CufwPolicyAppConnSummaryEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cufwPolAppConnPolicy")
    {
        cufwpolappconnpolicy = value;
        cufwpolappconnpolicy.value_namespace = name_space;
        cufwpolappconnpolicy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwPolAppConnPolicyTargetType")
    {
        cufwpolappconnpolicytargettype = value;
        cufwpolappconnpolicytargettype.value_namespace = name_space;
        cufwpolappconnpolicytargettype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwPolAppConnPolicyTarget")
    {
        cufwpolappconnpolicytarget = value;
        cufwpolappconnpolicytarget.value_namespace = name_space;
        cufwpolappconnpolicytarget.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwPolAppConnProtocol")
    {
        cufwpolappconnprotocol = value;
        cufwpolappconnprotocol.value_namespace = name_space;
        cufwpolappconnprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwPolAppConnNumAttempted")
    {
        cufwpolappconnnumattempted = value;
        cufwpolappconnnumattempted.value_namespace = name_space;
        cufwpolappconnnumattempted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwPolAppConnNumSetupsAborted")
    {
        cufwpolappconnnumsetupsaborted = value;
        cufwpolappconnnumsetupsaborted.value_namespace = name_space;
        cufwpolappconnnumsetupsaborted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwPolAppConnNumPolicyDeclined")
    {
        cufwpolappconnnumpolicydeclined = value;
        cufwpolappconnnumpolicydeclined.value_namespace = name_space;
        cufwpolappconnnumpolicydeclined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwPolAppConnNumResDeclined")
    {
        cufwpolappconnnumresdeclined = value;
        cufwpolappconnnumresdeclined.value_namespace = name_space;
        cufwpolappconnnumresdeclined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwPolAppConnNumHalfOpen")
    {
        cufwpolappconnnumhalfopen = value;
        cufwpolappconnnumhalfopen.value_namespace = name_space;
        cufwpolappconnnumhalfopen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwPolAppConnNumActive")
    {
        cufwpolappconnnumactive = value;
        cufwpolappconnnumactive.value_namespace = name_space;
        cufwpolappconnnumactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwPolAppConnNumAborted")
    {
        cufwpolappconnnumaborted = value;
        cufwpolappconnnumaborted.value_namespace = name_space;
        cufwpolappconnnumaborted.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOUNIFIEDFIREWALLMIB::CufwPolicyAppConnSummaryTable::CufwPolicyAppConnSummaryEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cufwPolAppConnPolicy")
    {
        cufwpolappconnpolicy.yfilter = yfilter;
    }
    if(value_path == "cufwPolAppConnPolicyTargetType")
    {
        cufwpolappconnpolicytargettype.yfilter = yfilter;
    }
    if(value_path == "cufwPolAppConnPolicyTarget")
    {
        cufwpolappconnpolicytarget.yfilter = yfilter;
    }
    if(value_path == "cufwPolAppConnProtocol")
    {
        cufwpolappconnprotocol.yfilter = yfilter;
    }
    if(value_path == "cufwPolAppConnNumAttempted")
    {
        cufwpolappconnnumattempted.yfilter = yfilter;
    }
    if(value_path == "cufwPolAppConnNumSetupsAborted")
    {
        cufwpolappconnnumsetupsaborted.yfilter = yfilter;
    }
    if(value_path == "cufwPolAppConnNumPolicyDeclined")
    {
        cufwpolappconnnumpolicydeclined.yfilter = yfilter;
    }
    if(value_path == "cufwPolAppConnNumResDeclined")
    {
        cufwpolappconnnumresdeclined.yfilter = yfilter;
    }
    if(value_path == "cufwPolAppConnNumHalfOpen")
    {
        cufwpolappconnnumhalfopen.yfilter = yfilter;
    }
    if(value_path == "cufwPolAppConnNumActive")
    {
        cufwpolappconnnumactive.yfilter = yfilter;
    }
    if(value_path == "cufwPolAppConnNumAborted")
    {
        cufwpolappconnnumaborted.yfilter = yfilter;
    }
}

bool CISCOUNIFIEDFIREWALLMIB::CufwPolicyAppConnSummaryTable::CufwPolicyAppConnSummaryEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cufwPolAppConnPolicy" || name == "cufwPolAppConnPolicyTargetType" || name == "cufwPolAppConnPolicyTarget" || name == "cufwPolAppConnProtocol" || name == "cufwPolAppConnNumAttempted" || name == "cufwPolAppConnNumSetupsAborted" || name == "cufwPolAppConnNumPolicyDeclined" || name == "cufwPolAppConnNumResDeclined" || name == "cufwPolAppConnNumHalfOpen" || name == "cufwPolAppConnNumActive" || name == "cufwPolAppConnNumAborted")
        return true;
    return false;
}

CISCOUNIFIEDFIREWALLMIB::CufwInspectionTable::CufwInspectionTable()
    :
    cufwinspectionentry(this, {"cufwinspectionpolicyname", "cufwinspectionprotocol"})
{

    yang_name = "cufwInspectionTable"; yang_parent_name = "CISCO-UNIFIED-FIREWALL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOUNIFIEDFIREWALLMIB::CufwInspectionTable::~CufwInspectionTable()
{
}

bool CISCOUNIFIEDFIREWALLMIB::CufwInspectionTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cufwinspectionentry.len(); index++)
    {
        if(cufwinspectionentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOUNIFIEDFIREWALLMIB::CufwInspectionTable::has_operation() const
{
    for (std::size_t index=0; index<cufwinspectionentry.len(); index++)
    {
        if(cufwinspectionentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOUNIFIEDFIREWALLMIB::CufwInspectionTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-UNIFIED-FIREWALL-MIB:CISCO-UNIFIED-FIREWALL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOUNIFIEDFIREWALLMIB::CufwInspectionTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cufwInspectionTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOUNIFIEDFIREWALLMIB::CufwInspectionTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOUNIFIEDFIREWALLMIB::CufwInspectionTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cufwInspectionEntry")
    {
        auto c = std::make_shared<CISCOUNIFIEDFIREWALLMIB::CufwInspectionTable::CufwInspectionEntry>();
        c->parent = this;
        cufwinspectionentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOUNIFIEDFIREWALLMIB::CufwInspectionTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cufwinspectionentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOUNIFIEDFIREWALLMIB::CufwInspectionTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOUNIFIEDFIREWALLMIB::CufwInspectionTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOUNIFIEDFIREWALLMIB::CufwInspectionTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cufwInspectionEntry")
        return true;
    return false;
}

CISCOUNIFIEDFIREWALLMIB::CufwInspectionTable::CufwInspectionEntry::CufwInspectionEntry()
    :
    cufwinspectionpolicyname{YType::str, "cufwInspectionPolicyName"},
    cufwinspectionprotocol{YType::enumeration, "cufwInspectionProtocol"},
    cufwinspectionstatus{YType::boolean, "cufwInspectionStatus"}
{

    yang_name = "cufwInspectionEntry"; yang_parent_name = "cufwInspectionTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOUNIFIEDFIREWALLMIB::CufwInspectionTable::CufwInspectionEntry::~CufwInspectionEntry()
{
}

bool CISCOUNIFIEDFIREWALLMIB::CufwInspectionTable::CufwInspectionEntry::has_data() const
{
    if (is_presence_container) return true;
    return cufwinspectionpolicyname.is_set
	|| cufwinspectionprotocol.is_set
	|| cufwinspectionstatus.is_set;
}

bool CISCOUNIFIEDFIREWALLMIB::CufwInspectionTable::CufwInspectionEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cufwinspectionpolicyname.yfilter)
	|| ydk::is_set(cufwinspectionprotocol.yfilter)
	|| ydk::is_set(cufwinspectionstatus.yfilter);
}

std::string CISCOUNIFIEDFIREWALLMIB::CufwInspectionTable::CufwInspectionEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-UNIFIED-FIREWALL-MIB:CISCO-UNIFIED-FIREWALL-MIB/cufwInspectionTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOUNIFIEDFIREWALLMIB::CufwInspectionTable::CufwInspectionEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cufwInspectionEntry";
    ADD_KEY_TOKEN(cufwinspectionpolicyname, "cufwInspectionPolicyName");
    ADD_KEY_TOKEN(cufwinspectionprotocol, "cufwInspectionProtocol");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOUNIFIEDFIREWALLMIB::CufwInspectionTable::CufwInspectionEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cufwinspectionpolicyname.is_set || is_set(cufwinspectionpolicyname.yfilter)) leaf_name_data.push_back(cufwinspectionpolicyname.get_name_leafdata());
    if (cufwinspectionprotocol.is_set || is_set(cufwinspectionprotocol.yfilter)) leaf_name_data.push_back(cufwinspectionprotocol.get_name_leafdata());
    if (cufwinspectionstatus.is_set || is_set(cufwinspectionstatus.yfilter)) leaf_name_data.push_back(cufwinspectionstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOUNIFIEDFIREWALLMIB::CufwInspectionTable::CufwInspectionEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOUNIFIEDFIREWALLMIB::CufwInspectionTable::CufwInspectionEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOUNIFIEDFIREWALLMIB::CufwInspectionTable::CufwInspectionEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cufwInspectionPolicyName")
    {
        cufwinspectionpolicyname = value;
        cufwinspectionpolicyname.value_namespace = name_space;
        cufwinspectionpolicyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwInspectionProtocol")
    {
        cufwinspectionprotocol = value;
        cufwinspectionprotocol.value_namespace = name_space;
        cufwinspectionprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwInspectionStatus")
    {
        cufwinspectionstatus = value;
        cufwinspectionstatus.value_namespace = name_space;
        cufwinspectionstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOUNIFIEDFIREWALLMIB::CufwInspectionTable::CufwInspectionEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cufwInspectionPolicyName")
    {
        cufwinspectionpolicyname.yfilter = yfilter;
    }
    if(value_path == "cufwInspectionProtocol")
    {
        cufwinspectionprotocol.yfilter = yfilter;
    }
    if(value_path == "cufwInspectionStatus")
    {
        cufwinspectionstatus.yfilter = yfilter;
    }
}

bool CISCOUNIFIEDFIREWALLMIB::CufwInspectionTable::CufwInspectionEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cufwInspectionPolicyName" || name == "cufwInspectionProtocol" || name == "cufwInspectionStatus")
        return true;
    return false;
}

CISCOUNIFIEDFIREWALLMIB::CufwUrlfServerTable::CufwUrlfServerTable()
    :
    cufwurlfserverentry(this, {"cufwurlfserveraddrtype", "cufwurlfserveraddress", "cufwurlfserverport"})
{

    yang_name = "cufwUrlfServerTable"; yang_parent_name = "CISCO-UNIFIED-FIREWALL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOUNIFIEDFIREWALLMIB::CufwUrlfServerTable::~CufwUrlfServerTable()
{
}

bool CISCOUNIFIEDFIREWALLMIB::CufwUrlfServerTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cufwurlfserverentry.len(); index++)
    {
        if(cufwurlfserverentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOUNIFIEDFIREWALLMIB::CufwUrlfServerTable::has_operation() const
{
    for (std::size_t index=0; index<cufwurlfserverentry.len(); index++)
    {
        if(cufwurlfserverentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOUNIFIEDFIREWALLMIB::CufwUrlfServerTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-UNIFIED-FIREWALL-MIB:CISCO-UNIFIED-FIREWALL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOUNIFIEDFIREWALLMIB::CufwUrlfServerTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cufwUrlfServerTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOUNIFIEDFIREWALLMIB::CufwUrlfServerTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOUNIFIEDFIREWALLMIB::CufwUrlfServerTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cufwUrlfServerEntry")
    {
        auto c = std::make_shared<CISCOUNIFIEDFIREWALLMIB::CufwUrlfServerTable::CufwUrlfServerEntry>();
        c->parent = this;
        cufwurlfserverentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOUNIFIEDFIREWALLMIB::CufwUrlfServerTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cufwurlfserverentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOUNIFIEDFIREWALLMIB::CufwUrlfServerTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOUNIFIEDFIREWALLMIB::CufwUrlfServerTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOUNIFIEDFIREWALLMIB::CufwUrlfServerTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cufwUrlfServerEntry")
        return true;
    return false;
}

CISCOUNIFIEDFIREWALLMIB::CufwUrlfServerTable::CufwUrlfServerEntry::CufwUrlfServerEntry()
    :
    cufwurlfserveraddrtype{YType::enumeration, "cufwUrlfServerAddrType"},
    cufwurlfserveraddress{YType::str, "cufwUrlfServerAddress"},
    cufwurlfserverport{YType::uint16, "cufwUrlfServerPort"},
    cufwurlfservervendor{YType::enumeration, "cufwUrlfServerVendor"},
    cufwurlfserverstatus{YType::enumeration, "cufwUrlfServerStatus"},
    cufwurlfserverreqsnumprocessed{YType::uint64, "cufwUrlfServerReqsNumProcessed"},
    cufwurlfserverreqsnumallowed{YType::uint64, "cufwUrlfServerReqsNumAllowed"},
    cufwurlfserverreqsnumdenied{YType::uint64, "cufwUrlfServerReqsNumDenied"},
    cufwurlfservernumtimeouts{YType::uint64, "cufwUrlfServerNumTimeouts"},
    cufwurlfservernumretries{YType::uint64, "cufwUrlfServerNumRetries"},
    cufwurlfserverrespsnumreceived{YType::uint64, "cufwUrlfServerRespsNumReceived"},
    cufwurlfserverrespsnumlate{YType::uint64, "cufwUrlfServerRespsNumLate"},
    cufwurlfserveravgresptime1{YType::uint32, "cufwUrlfServerAvgRespTime1"},
    cufwurlfserveravgresptime5{YType::uint32, "cufwUrlfServerAvgRespTime5"}
{

    yang_name = "cufwUrlfServerEntry"; yang_parent_name = "cufwUrlfServerTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOUNIFIEDFIREWALLMIB::CufwUrlfServerTable::CufwUrlfServerEntry::~CufwUrlfServerEntry()
{
}

bool CISCOUNIFIEDFIREWALLMIB::CufwUrlfServerTable::CufwUrlfServerEntry::has_data() const
{
    if (is_presence_container) return true;
    return cufwurlfserveraddrtype.is_set
	|| cufwurlfserveraddress.is_set
	|| cufwurlfserverport.is_set
	|| cufwurlfservervendor.is_set
	|| cufwurlfserverstatus.is_set
	|| cufwurlfserverreqsnumprocessed.is_set
	|| cufwurlfserverreqsnumallowed.is_set
	|| cufwurlfserverreqsnumdenied.is_set
	|| cufwurlfservernumtimeouts.is_set
	|| cufwurlfservernumretries.is_set
	|| cufwurlfserverrespsnumreceived.is_set
	|| cufwurlfserverrespsnumlate.is_set
	|| cufwurlfserveravgresptime1.is_set
	|| cufwurlfserveravgresptime5.is_set;
}

bool CISCOUNIFIEDFIREWALLMIB::CufwUrlfServerTable::CufwUrlfServerEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cufwurlfserveraddrtype.yfilter)
	|| ydk::is_set(cufwurlfserveraddress.yfilter)
	|| ydk::is_set(cufwurlfserverport.yfilter)
	|| ydk::is_set(cufwurlfservervendor.yfilter)
	|| ydk::is_set(cufwurlfserverstatus.yfilter)
	|| ydk::is_set(cufwurlfserverreqsnumprocessed.yfilter)
	|| ydk::is_set(cufwurlfserverreqsnumallowed.yfilter)
	|| ydk::is_set(cufwurlfserverreqsnumdenied.yfilter)
	|| ydk::is_set(cufwurlfservernumtimeouts.yfilter)
	|| ydk::is_set(cufwurlfservernumretries.yfilter)
	|| ydk::is_set(cufwurlfserverrespsnumreceived.yfilter)
	|| ydk::is_set(cufwurlfserverrespsnumlate.yfilter)
	|| ydk::is_set(cufwurlfserveravgresptime1.yfilter)
	|| ydk::is_set(cufwurlfserveravgresptime5.yfilter);
}

std::string CISCOUNIFIEDFIREWALLMIB::CufwUrlfServerTable::CufwUrlfServerEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-UNIFIED-FIREWALL-MIB:CISCO-UNIFIED-FIREWALL-MIB/cufwUrlfServerTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOUNIFIEDFIREWALLMIB::CufwUrlfServerTable::CufwUrlfServerEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cufwUrlfServerEntry";
    ADD_KEY_TOKEN(cufwurlfserveraddrtype, "cufwUrlfServerAddrType");
    ADD_KEY_TOKEN(cufwurlfserveraddress, "cufwUrlfServerAddress");
    ADD_KEY_TOKEN(cufwurlfserverport, "cufwUrlfServerPort");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOUNIFIEDFIREWALLMIB::CufwUrlfServerTable::CufwUrlfServerEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cufwurlfserveraddrtype.is_set || is_set(cufwurlfserveraddrtype.yfilter)) leaf_name_data.push_back(cufwurlfserveraddrtype.get_name_leafdata());
    if (cufwurlfserveraddress.is_set || is_set(cufwurlfserveraddress.yfilter)) leaf_name_data.push_back(cufwurlfserveraddress.get_name_leafdata());
    if (cufwurlfserverport.is_set || is_set(cufwurlfserverport.yfilter)) leaf_name_data.push_back(cufwurlfserverport.get_name_leafdata());
    if (cufwurlfservervendor.is_set || is_set(cufwurlfservervendor.yfilter)) leaf_name_data.push_back(cufwurlfservervendor.get_name_leafdata());
    if (cufwurlfserverstatus.is_set || is_set(cufwurlfserverstatus.yfilter)) leaf_name_data.push_back(cufwurlfserverstatus.get_name_leafdata());
    if (cufwurlfserverreqsnumprocessed.is_set || is_set(cufwurlfserverreqsnumprocessed.yfilter)) leaf_name_data.push_back(cufwurlfserverreqsnumprocessed.get_name_leafdata());
    if (cufwurlfserverreqsnumallowed.is_set || is_set(cufwurlfserverreqsnumallowed.yfilter)) leaf_name_data.push_back(cufwurlfserverreqsnumallowed.get_name_leafdata());
    if (cufwurlfserverreqsnumdenied.is_set || is_set(cufwurlfserverreqsnumdenied.yfilter)) leaf_name_data.push_back(cufwurlfserverreqsnumdenied.get_name_leafdata());
    if (cufwurlfservernumtimeouts.is_set || is_set(cufwurlfservernumtimeouts.yfilter)) leaf_name_data.push_back(cufwurlfservernumtimeouts.get_name_leafdata());
    if (cufwurlfservernumretries.is_set || is_set(cufwurlfservernumretries.yfilter)) leaf_name_data.push_back(cufwurlfservernumretries.get_name_leafdata());
    if (cufwurlfserverrespsnumreceived.is_set || is_set(cufwurlfserverrespsnumreceived.yfilter)) leaf_name_data.push_back(cufwurlfserverrespsnumreceived.get_name_leafdata());
    if (cufwurlfserverrespsnumlate.is_set || is_set(cufwurlfserverrespsnumlate.yfilter)) leaf_name_data.push_back(cufwurlfserverrespsnumlate.get_name_leafdata());
    if (cufwurlfserveravgresptime1.is_set || is_set(cufwurlfserveravgresptime1.yfilter)) leaf_name_data.push_back(cufwurlfserveravgresptime1.get_name_leafdata());
    if (cufwurlfserveravgresptime5.is_set || is_set(cufwurlfserveravgresptime5.yfilter)) leaf_name_data.push_back(cufwurlfserveravgresptime5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOUNIFIEDFIREWALLMIB::CufwUrlfServerTable::CufwUrlfServerEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOUNIFIEDFIREWALLMIB::CufwUrlfServerTable::CufwUrlfServerEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOUNIFIEDFIREWALLMIB::CufwUrlfServerTable::CufwUrlfServerEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cufwUrlfServerAddrType")
    {
        cufwurlfserveraddrtype = value;
        cufwurlfserveraddrtype.value_namespace = name_space;
        cufwurlfserveraddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwUrlfServerAddress")
    {
        cufwurlfserveraddress = value;
        cufwurlfserveraddress.value_namespace = name_space;
        cufwurlfserveraddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwUrlfServerPort")
    {
        cufwurlfserverport = value;
        cufwurlfserverport.value_namespace = name_space;
        cufwurlfserverport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwUrlfServerVendor")
    {
        cufwurlfservervendor = value;
        cufwurlfservervendor.value_namespace = name_space;
        cufwurlfservervendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwUrlfServerStatus")
    {
        cufwurlfserverstatus = value;
        cufwurlfserverstatus.value_namespace = name_space;
        cufwurlfserverstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwUrlfServerReqsNumProcessed")
    {
        cufwurlfserverreqsnumprocessed = value;
        cufwurlfserverreqsnumprocessed.value_namespace = name_space;
        cufwurlfserverreqsnumprocessed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwUrlfServerReqsNumAllowed")
    {
        cufwurlfserverreqsnumallowed = value;
        cufwurlfserverreqsnumallowed.value_namespace = name_space;
        cufwurlfserverreqsnumallowed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwUrlfServerReqsNumDenied")
    {
        cufwurlfserverreqsnumdenied = value;
        cufwurlfserverreqsnumdenied.value_namespace = name_space;
        cufwurlfserverreqsnumdenied.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwUrlfServerNumTimeouts")
    {
        cufwurlfservernumtimeouts = value;
        cufwurlfservernumtimeouts.value_namespace = name_space;
        cufwurlfservernumtimeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwUrlfServerNumRetries")
    {
        cufwurlfservernumretries = value;
        cufwurlfservernumretries.value_namespace = name_space;
        cufwurlfservernumretries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwUrlfServerRespsNumReceived")
    {
        cufwurlfserverrespsnumreceived = value;
        cufwurlfserverrespsnumreceived.value_namespace = name_space;
        cufwurlfserverrespsnumreceived.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwUrlfServerRespsNumLate")
    {
        cufwurlfserverrespsnumlate = value;
        cufwurlfserverrespsnumlate.value_namespace = name_space;
        cufwurlfserverrespsnumlate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwUrlfServerAvgRespTime1")
    {
        cufwurlfserveravgresptime1 = value;
        cufwurlfserveravgresptime1.value_namespace = name_space;
        cufwurlfserveravgresptime1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cufwUrlfServerAvgRespTime5")
    {
        cufwurlfserveravgresptime5 = value;
        cufwurlfserveravgresptime5.value_namespace = name_space;
        cufwurlfserveravgresptime5.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOUNIFIEDFIREWALLMIB::CufwUrlfServerTable::CufwUrlfServerEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cufwUrlfServerAddrType")
    {
        cufwurlfserveraddrtype.yfilter = yfilter;
    }
    if(value_path == "cufwUrlfServerAddress")
    {
        cufwurlfserveraddress.yfilter = yfilter;
    }
    if(value_path == "cufwUrlfServerPort")
    {
        cufwurlfserverport.yfilter = yfilter;
    }
    if(value_path == "cufwUrlfServerVendor")
    {
        cufwurlfservervendor.yfilter = yfilter;
    }
    if(value_path == "cufwUrlfServerStatus")
    {
        cufwurlfserverstatus.yfilter = yfilter;
    }
    if(value_path == "cufwUrlfServerReqsNumProcessed")
    {
        cufwurlfserverreqsnumprocessed.yfilter = yfilter;
    }
    if(value_path == "cufwUrlfServerReqsNumAllowed")
    {
        cufwurlfserverreqsnumallowed.yfilter = yfilter;
    }
    if(value_path == "cufwUrlfServerReqsNumDenied")
    {
        cufwurlfserverreqsnumdenied.yfilter = yfilter;
    }
    if(value_path == "cufwUrlfServerNumTimeouts")
    {
        cufwurlfservernumtimeouts.yfilter = yfilter;
    }
    if(value_path == "cufwUrlfServerNumRetries")
    {
        cufwurlfservernumretries.yfilter = yfilter;
    }
    if(value_path == "cufwUrlfServerRespsNumReceived")
    {
        cufwurlfserverrespsnumreceived.yfilter = yfilter;
    }
    if(value_path == "cufwUrlfServerRespsNumLate")
    {
        cufwurlfserverrespsnumlate.yfilter = yfilter;
    }
    if(value_path == "cufwUrlfServerAvgRespTime1")
    {
        cufwurlfserveravgresptime1.yfilter = yfilter;
    }
    if(value_path == "cufwUrlfServerAvgRespTime5")
    {
        cufwurlfserveravgresptime5.yfilter = yfilter;
    }
}

bool CISCOUNIFIEDFIREWALLMIB::CufwUrlfServerTable::CufwUrlfServerEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cufwUrlfServerAddrType" || name == "cufwUrlfServerAddress" || name == "cufwUrlfServerPort" || name == "cufwUrlfServerVendor" || name == "cufwUrlfServerStatus" || name == "cufwUrlfServerReqsNumProcessed" || name == "cufwUrlfServerReqsNumAllowed" || name == "cufwUrlfServerReqsNumDenied" || name == "cufwUrlfServerNumTimeouts" || name == "cufwUrlfServerNumRetries" || name == "cufwUrlfServerRespsNumReceived" || name == "cufwUrlfServerRespsNumLate" || name == "cufwUrlfServerAvgRespTime1" || name == "cufwUrlfServerAvgRespTime5")
        return true;
    return false;
}


}
}

