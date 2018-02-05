
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_SIP_UA_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_SIP_UA_MIB {

Ciscosipuamibnotificationprefix::Ciscosipuamibnotificationprefix()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SIP-UA-MIB", "CISCO-SIP-UA-MIB", "CISCO-SIP-UA-MIB:ciscoSipUaMIBNotificationPrefix")
{

}

Ciscosipuamibnotificationprefix::~Ciscosipuamibnotificationprefix()
{
}

Ciscosipuamibnotifications::Ciscosipuamibnotifications()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SIP-UA-MIB", "CISCO-SIP-UA-MIB", "CISCO-SIP-UA-MIB:ciscoSipUaMIBNotifications")
{

}

Ciscosipuamibnotifications::~Ciscosipuamibnotifications()
{
}

CISCOSIPUAMIB::CISCOSIPUAMIB()
    :
    csipcfgbase(std::make_shared<CISCOSIPUAMIB::Csipcfgbase>())
	,csipcfgtimer(std::make_shared<CISCOSIPUAMIB::Csipcfgtimer>())
	,csipcfgretry(std::make_shared<CISCOSIPUAMIB::Csipcfgretry>())
	,csipcfgpeer(std::make_shared<CISCOSIPUAMIB::Csipcfgpeer>())
	,csipcfgaaa(std::make_shared<CISCOSIPUAMIB::Csipcfgaaa>())
	,csipcfgvoiceservicevoip(std::make_shared<CISCOSIPUAMIB::Csipcfgvoiceservicevoip>())
	,csipstatsinfo(std::make_shared<CISCOSIPUAMIB::Csipstatsinfo>())
	,csipstatssuccess(std::make_shared<CISCOSIPUAMIB::Csipstatssuccess>())
	,csipstatsredirect(std::make_shared<CISCOSIPUAMIB::Csipstatsredirect>())
	,csipstatserrclient(std::make_shared<CISCOSIPUAMIB::Csipstatserrclient>())
	,csipstatserrserver(std::make_shared<CISCOSIPUAMIB::Csipstatserrserver>())
	,csipstatsglobalfail(std::make_shared<CISCOSIPUAMIB::Csipstatsglobalfail>())
	,csipstatstraffic(std::make_shared<CISCOSIPUAMIB::Csipstatstraffic>())
	,csipstatsretry(std::make_shared<CISCOSIPUAMIB::Csipstatsretry>())
	,csipstatsmisc(std::make_shared<CISCOSIPUAMIB::Csipstatsmisc>())
	,csipstatsconnection(std::make_shared<CISCOSIPUAMIB::Csipstatsconnection>())
	,csipcfgearlymediatable(std::make_shared<CISCOSIPUAMIB::Csipcfgearlymediatable>())
	,csipcfgbindsourceaddrtable(std::make_shared<CISCOSIPUAMIB::Csipcfgbindsourceaddrtable>())
	,csipcfgpeertable(std::make_shared<CISCOSIPUAMIB::Csipcfgpeertable>())
	,csipcfgstatuscausetable(std::make_shared<CISCOSIPUAMIB::Csipcfgstatuscausetable>())
	,csipcfgcausestatustable(std::make_shared<CISCOSIPUAMIB::Csipcfgcausestatustable>())
	,csipstatssuccessoktable(std::make_shared<CISCOSIPUAMIB::Csipstatssuccessoktable>())
{
    csipcfgbase->parent = this;
    csipcfgtimer->parent = this;
    csipcfgretry->parent = this;
    csipcfgpeer->parent = this;
    csipcfgaaa->parent = this;
    csipcfgvoiceservicevoip->parent = this;
    csipstatsinfo->parent = this;
    csipstatssuccess->parent = this;
    csipstatsredirect->parent = this;
    csipstatserrclient->parent = this;
    csipstatserrserver->parent = this;
    csipstatsglobalfail->parent = this;
    csipstatstraffic->parent = this;
    csipstatsretry->parent = this;
    csipstatsmisc->parent = this;
    csipstatsconnection->parent = this;
    csipcfgearlymediatable->parent = this;
    csipcfgbindsourceaddrtable->parent = this;
    csipcfgpeertable->parent = this;
    csipcfgstatuscausetable->parent = this;
    csipcfgcausestatustable->parent = this;
    csipstatssuccessoktable->parent = this;

    yang_name = "CISCO-SIP-UA-MIB"; yang_parent_name = "CISCO-SIP-UA-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCOSIPUAMIB::~CISCOSIPUAMIB()
{
}

bool CISCOSIPUAMIB::has_data() const
{
    return (csipcfgbase !=  nullptr && csipcfgbase->has_data())
	|| (csipcfgtimer !=  nullptr && csipcfgtimer->has_data())
	|| (csipcfgretry !=  nullptr && csipcfgretry->has_data())
	|| (csipcfgpeer !=  nullptr && csipcfgpeer->has_data())
	|| (csipcfgaaa !=  nullptr && csipcfgaaa->has_data())
	|| (csipcfgvoiceservicevoip !=  nullptr && csipcfgvoiceservicevoip->has_data())
	|| (csipstatsinfo !=  nullptr && csipstatsinfo->has_data())
	|| (csipstatssuccess !=  nullptr && csipstatssuccess->has_data())
	|| (csipstatsredirect !=  nullptr && csipstatsredirect->has_data())
	|| (csipstatserrclient !=  nullptr && csipstatserrclient->has_data())
	|| (csipstatserrserver !=  nullptr && csipstatserrserver->has_data())
	|| (csipstatsglobalfail !=  nullptr && csipstatsglobalfail->has_data())
	|| (csipstatstraffic !=  nullptr && csipstatstraffic->has_data())
	|| (csipstatsretry !=  nullptr && csipstatsretry->has_data())
	|| (csipstatsmisc !=  nullptr && csipstatsmisc->has_data())
	|| (csipstatsconnection !=  nullptr && csipstatsconnection->has_data())
	|| (csipcfgearlymediatable !=  nullptr && csipcfgearlymediatable->has_data())
	|| (csipcfgbindsourceaddrtable !=  nullptr && csipcfgbindsourceaddrtable->has_data())
	|| (csipcfgpeertable !=  nullptr && csipcfgpeertable->has_data())
	|| (csipcfgstatuscausetable !=  nullptr && csipcfgstatuscausetable->has_data())
	|| (csipcfgcausestatustable !=  nullptr && csipcfgcausestatustable->has_data())
	|| (csipstatssuccessoktable !=  nullptr && csipstatssuccessoktable->has_data());
}

bool CISCOSIPUAMIB::has_operation() const
{
    return is_set(yfilter)
	|| (csipcfgbase !=  nullptr && csipcfgbase->has_operation())
	|| (csipcfgtimer !=  nullptr && csipcfgtimer->has_operation())
	|| (csipcfgretry !=  nullptr && csipcfgretry->has_operation())
	|| (csipcfgpeer !=  nullptr && csipcfgpeer->has_operation())
	|| (csipcfgaaa !=  nullptr && csipcfgaaa->has_operation())
	|| (csipcfgvoiceservicevoip !=  nullptr && csipcfgvoiceservicevoip->has_operation())
	|| (csipstatsinfo !=  nullptr && csipstatsinfo->has_operation())
	|| (csipstatssuccess !=  nullptr && csipstatssuccess->has_operation())
	|| (csipstatsredirect !=  nullptr && csipstatsredirect->has_operation())
	|| (csipstatserrclient !=  nullptr && csipstatserrclient->has_operation())
	|| (csipstatserrserver !=  nullptr && csipstatserrserver->has_operation())
	|| (csipstatsglobalfail !=  nullptr && csipstatsglobalfail->has_operation())
	|| (csipstatstraffic !=  nullptr && csipstatstraffic->has_operation())
	|| (csipstatsretry !=  nullptr && csipstatsretry->has_operation())
	|| (csipstatsmisc !=  nullptr && csipstatsmisc->has_operation())
	|| (csipstatsconnection !=  nullptr && csipstatsconnection->has_operation())
	|| (csipcfgearlymediatable !=  nullptr && csipcfgearlymediatable->has_operation())
	|| (csipcfgbindsourceaddrtable !=  nullptr && csipcfgbindsourceaddrtable->has_operation())
	|| (csipcfgpeertable !=  nullptr && csipcfgpeertable->has_operation())
	|| (csipcfgstatuscausetable !=  nullptr && csipcfgstatuscausetable->has_operation())
	|| (csipcfgcausestatustable !=  nullptr && csipcfgcausestatustable->has_operation())
	|| (csipstatssuccessoktable !=  nullptr && csipstatssuccessoktable->has_operation());
}

std::string CISCOSIPUAMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSIPUAMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSIPUAMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cSipCfgBase")
    {
        if(csipcfgbase == nullptr)
        {
            csipcfgbase = std::make_shared<CISCOSIPUAMIB::Csipcfgbase>();
        }
        return csipcfgbase;
    }

    if(child_yang_name == "cSipCfgTimer")
    {
        if(csipcfgtimer == nullptr)
        {
            csipcfgtimer = std::make_shared<CISCOSIPUAMIB::Csipcfgtimer>();
        }
        return csipcfgtimer;
    }

    if(child_yang_name == "cSipCfgRetry")
    {
        if(csipcfgretry == nullptr)
        {
            csipcfgretry = std::make_shared<CISCOSIPUAMIB::Csipcfgretry>();
        }
        return csipcfgretry;
    }

    if(child_yang_name == "cSipCfgPeer")
    {
        if(csipcfgpeer == nullptr)
        {
            csipcfgpeer = std::make_shared<CISCOSIPUAMIB::Csipcfgpeer>();
        }
        return csipcfgpeer;
    }

    if(child_yang_name == "cSipCfgAaa")
    {
        if(csipcfgaaa == nullptr)
        {
            csipcfgaaa = std::make_shared<CISCOSIPUAMIB::Csipcfgaaa>();
        }
        return csipcfgaaa;
    }

    if(child_yang_name == "cSipCfgVoiceServiceVoip")
    {
        if(csipcfgvoiceservicevoip == nullptr)
        {
            csipcfgvoiceservicevoip = std::make_shared<CISCOSIPUAMIB::Csipcfgvoiceservicevoip>();
        }
        return csipcfgvoiceservicevoip;
    }

    if(child_yang_name == "cSipStatsInfo")
    {
        if(csipstatsinfo == nullptr)
        {
            csipstatsinfo = std::make_shared<CISCOSIPUAMIB::Csipstatsinfo>();
        }
        return csipstatsinfo;
    }

    if(child_yang_name == "cSipStatsSuccess")
    {
        if(csipstatssuccess == nullptr)
        {
            csipstatssuccess = std::make_shared<CISCOSIPUAMIB::Csipstatssuccess>();
        }
        return csipstatssuccess;
    }

    if(child_yang_name == "cSipStatsRedirect")
    {
        if(csipstatsredirect == nullptr)
        {
            csipstatsredirect = std::make_shared<CISCOSIPUAMIB::Csipstatsredirect>();
        }
        return csipstatsredirect;
    }

    if(child_yang_name == "cSipStatsErrClient")
    {
        if(csipstatserrclient == nullptr)
        {
            csipstatserrclient = std::make_shared<CISCOSIPUAMIB::Csipstatserrclient>();
        }
        return csipstatserrclient;
    }

    if(child_yang_name == "cSipStatsErrServer")
    {
        if(csipstatserrserver == nullptr)
        {
            csipstatserrserver = std::make_shared<CISCOSIPUAMIB::Csipstatserrserver>();
        }
        return csipstatserrserver;
    }

    if(child_yang_name == "cSipStatsGlobalFail")
    {
        if(csipstatsglobalfail == nullptr)
        {
            csipstatsglobalfail = std::make_shared<CISCOSIPUAMIB::Csipstatsglobalfail>();
        }
        return csipstatsglobalfail;
    }

    if(child_yang_name == "cSipStatsTraffic")
    {
        if(csipstatstraffic == nullptr)
        {
            csipstatstraffic = std::make_shared<CISCOSIPUAMIB::Csipstatstraffic>();
        }
        return csipstatstraffic;
    }

    if(child_yang_name == "cSipStatsRetry")
    {
        if(csipstatsretry == nullptr)
        {
            csipstatsretry = std::make_shared<CISCOSIPUAMIB::Csipstatsretry>();
        }
        return csipstatsretry;
    }

    if(child_yang_name == "cSipStatsMisc")
    {
        if(csipstatsmisc == nullptr)
        {
            csipstatsmisc = std::make_shared<CISCOSIPUAMIB::Csipstatsmisc>();
        }
        return csipstatsmisc;
    }

    if(child_yang_name == "cSipStatsConnection")
    {
        if(csipstatsconnection == nullptr)
        {
            csipstatsconnection = std::make_shared<CISCOSIPUAMIB::Csipstatsconnection>();
        }
        return csipstatsconnection;
    }

    if(child_yang_name == "cSipCfgEarlyMediaTable")
    {
        if(csipcfgearlymediatable == nullptr)
        {
            csipcfgearlymediatable = std::make_shared<CISCOSIPUAMIB::Csipcfgearlymediatable>();
        }
        return csipcfgearlymediatable;
    }

    if(child_yang_name == "cSipCfgBindSourceAddrTable")
    {
        if(csipcfgbindsourceaddrtable == nullptr)
        {
            csipcfgbindsourceaddrtable = std::make_shared<CISCOSIPUAMIB::Csipcfgbindsourceaddrtable>();
        }
        return csipcfgbindsourceaddrtable;
    }

    if(child_yang_name == "cSipCfgPeerTable")
    {
        if(csipcfgpeertable == nullptr)
        {
            csipcfgpeertable = std::make_shared<CISCOSIPUAMIB::Csipcfgpeertable>();
        }
        return csipcfgpeertable;
    }

    if(child_yang_name == "cSipCfgStatusCauseTable")
    {
        if(csipcfgstatuscausetable == nullptr)
        {
            csipcfgstatuscausetable = std::make_shared<CISCOSIPUAMIB::Csipcfgstatuscausetable>();
        }
        return csipcfgstatuscausetable;
    }

    if(child_yang_name == "cSipCfgCauseStatusTable")
    {
        if(csipcfgcausestatustable == nullptr)
        {
            csipcfgcausestatustable = std::make_shared<CISCOSIPUAMIB::Csipcfgcausestatustable>();
        }
        return csipcfgcausestatustable;
    }

    if(child_yang_name == "cSipStatsSuccessOkTable")
    {
        if(csipstatssuccessoktable == nullptr)
        {
            csipstatssuccessoktable = std::make_shared<CISCOSIPUAMIB::Csipstatssuccessoktable>();
        }
        return csipstatssuccessoktable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSIPUAMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(csipcfgbase != nullptr)
    {
        children["cSipCfgBase"] = csipcfgbase;
    }

    if(csipcfgtimer != nullptr)
    {
        children["cSipCfgTimer"] = csipcfgtimer;
    }

    if(csipcfgretry != nullptr)
    {
        children["cSipCfgRetry"] = csipcfgretry;
    }

    if(csipcfgpeer != nullptr)
    {
        children["cSipCfgPeer"] = csipcfgpeer;
    }

    if(csipcfgaaa != nullptr)
    {
        children["cSipCfgAaa"] = csipcfgaaa;
    }

    if(csipcfgvoiceservicevoip != nullptr)
    {
        children["cSipCfgVoiceServiceVoip"] = csipcfgvoiceservicevoip;
    }

    if(csipstatsinfo != nullptr)
    {
        children["cSipStatsInfo"] = csipstatsinfo;
    }

    if(csipstatssuccess != nullptr)
    {
        children["cSipStatsSuccess"] = csipstatssuccess;
    }

    if(csipstatsredirect != nullptr)
    {
        children["cSipStatsRedirect"] = csipstatsredirect;
    }

    if(csipstatserrclient != nullptr)
    {
        children["cSipStatsErrClient"] = csipstatserrclient;
    }

    if(csipstatserrserver != nullptr)
    {
        children["cSipStatsErrServer"] = csipstatserrserver;
    }

    if(csipstatsglobalfail != nullptr)
    {
        children["cSipStatsGlobalFail"] = csipstatsglobalfail;
    }

    if(csipstatstraffic != nullptr)
    {
        children["cSipStatsTraffic"] = csipstatstraffic;
    }

    if(csipstatsretry != nullptr)
    {
        children["cSipStatsRetry"] = csipstatsretry;
    }

    if(csipstatsmisc != nullptr)
    {
        children["cSipStatsMisc"] = csipstatsmisc;
    }

    if(csipstatsconnection != nullptr)
    {
        children["cSipStatsConnection"] = csipstatsconnection;
    }

    if(csipcfgearlymediatable != nullptr)
    {
        children["cSipCfgEarlyMediaTable"] = csipcfgearlymediatable;
    }

    if(csipcfgbindsourceaddrtable != nullptr)
    {
        children["cSipCfgBindSourceAddrTable"] = csipcfgbindsourceaddrtable;
    }

    if(csipcfgpeertable != nullptr)
    {
        children["cSipCfgPeerTable"] = csipcfgpeertable;
    }

    if(csipcfgstatuscausetable != nullptr)
    {
        children["cSipCfgStatusCauseTable"] = csipcfgstatuscausetable;
    }

    if(csipcfgcausestatustable != nullptr)
    {
        children["cSipCfgCauseStatusTable"] = csipcfgcausestatustable;
    }

    if(csipstatssuccessoktable != nullptr)
    {
        children["cSipStatsSuccessOkTable"] = csipstatssuccessoktable;
    }

    return children;
}

void CISCOSIPUAMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSIPUAMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOSIPUAMIB::clone_ptr() const
{
    return std::make_shared<CISCOSIPUAMIB>();
}

std::string CISCOSIPUAMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOSIPUAMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOSIPUAMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOSIPUAMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOSIPUAMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipCfgBase" || name == "cSipCfgTimer" || name == "cSipCfgRetry" || name == "cSipCfgPeer" || name == "cSipCfgAaa" || name == "cSipCfgVoiceServiceVoip" || name == "cSipStatsInfo" || name == "cSipStatsSuccess" || name == "cSipStatsRedirect" || name == "cSipStatsErrClient" || name == "cSipStatsErrServer" || name == "cSipStatsGlobalFail" || name == "cSipStatsTraffic" || name == "cSipStatsRetry" || name == "cSipStatsMisc" || name == "cSipStatsConnection" || name == "cSipCfgEarlyMediaTable" || name == "cSipCfgBindSourceAddrTable" || name == "cSipCfgPeerTable" || name == "cSipCfgStatusCauseTable" || name == "cSipCfgCauseStatusTable" || name == "cSipStatsSuccessOkTable")
        return true;
    return false;
}

CISCOSIPUAMIB::Csipcfgbase::Csipcfgbase()
    :
    csipcfgversion{YType::str, "cSipCfgVersion"},
    csipcfgtransport{YType::enumeration, "cSipCfgTransport"},
    csipcfguserlocationserveraddr{YType::str, "cSipCfgUserLocationServerAddr"},
    csipcfgmaxforwards{YType::int32, "cSipCfgMaxForwards"},
    csipcfgbindsrcaddrinterface{YType::int32, "cSipCfgBindSrcAddrInterface"},
    csipcfgbindsrcaddrscope{YType::enumeration, "cSipCfgBindSrcAddrScope"},
    csipcfgdnssrvquerystringformat{YType::enumeration, "cSipCfgDnsSrvQueryStringFormat"},
    csipcfgredirectiondisabled{YType::boolean, "cSipCfgRedirectionDisabled"},
    csipcfgsymnatenabled{YType::boolean, "cSipCfgSymNatEnabled"},
    csipcfgsymnatdirectionrole{YType::enumeration, "cSipCfgSymNatDirectionRole"},
    csipcfgsuspendresumeenabled{YType::boolean, "cSipCfgSuspendResumeEnabled"},
    csipcfgoffercallhold{YType::enumeration, "cSipCfgOfferCallHold"},
    csipcfgreasonheaderoveride{YType::boolean, "cSipCfgReasonHeaderOveride"},
    csipcfgmaximumforwards{YType::int32, "cSipCfgMaximumForwards"}
{

    yang_name = "cSipCfgBase"; yang_parent_name = "CISCO-SIP-UA-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSIPUAMIB::Csipcfgbase::~Csipcfgbase()
{
}

bool CISCOSIPUAMIB::Csipcfgbase::has_data() const
{
    return csipcfgversion.is_set
	|| csipcfgtransport.is_set
	|| csipcfguserlocationserveraddr.is_set
	|| csipcfgmaxforwards.is_set
	|| csipcfgbindsrcaddrinterface.is_set
	|| csipcfgbindsrcaddrscope.is_set
	|| csipcfgdnssrvquerystringformat.is_set
	|| csipcfgredirectiondisabled.is_set
	|| csipcfgsymnatenabled.is_set
	|| csipcfgsymnatdirectionrole.is_set
	|| csipcfgsuspendresumeenabled.is_set
	|| csipcfgoffercallhold.is_set
	|| csipcfgreasonheaderoveride.is_set
	|| csipcfgmaximumforwards.is_set;
}

bool CISCOSIPUAMIB::Csipcfgbase::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipcfgversion.yfilter)
	|| ydk::is_set(csipcfgtransport.yfilter)
	|| ydk::is_set(csipcfguserlocationserveraddr.yfilter)
	|| ydk::is_set(csipcfgmaxforwards.yfilter)
	|| ydk::is_set(csipcfgbindsrcaddrinterface.yfilter)
	|| ydk::is_set(csipcfgbindsrcaddrscope.yfilter)
	|| ydk::is_set(csipcfgdnssrvquerystringformat.yfilter)
	|| ydk::is_set(csipcfgredirectiondisabled.yfilter)
	|| ydk::is_set(csipcfgsymnatenabled.yfilter)
	|| ydk::is_set(csipcfgsymnatdirectionrole.yfilter)
	|| ydk::is_set(csipcfgsuspendresumeenabled.yfilter)
	|| ydk::is_set(csipcfgoffercallhold.yfilter)
	|| ydk::is_set(csipcfgreasonheaderoveride.yfilter)
	|| ydk::is_set(csipcfgmaximumforwards.yfilter);
}

std::string CISCOSIPUAMIB::Csipcfgbase::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSIPUAMIB::Csipcfgbase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipCfgBase";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSIPUAMIB::Csipcfgbase::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipcfgversion.is_set || is_set(csipcfgversion.yfilter)) leaf_name_data.push_back(csipcfgversion.get_name_leafdata());
    if (csipcfgtransport.is_set || is_set(csipcfgtransport.yfilter)) leaf_name_data.push_back(csipcfgtransport.get_name_leafdata());
    if (csipcfguserlocationserveraddr.is_set || is_set(csipcfguserlocationserveraddr.yfilter)) leaf_name_data.push_back(csipcfguserlocationserveraddr.get_name_leafdata());
    if (csipcfgmaxforwards.is_set || is_set(csipcfgmaxforwards.yfilter)) leaf_name_data.push_back(csipcfgmaxforwards.get_name_leafdata());
    if (csipcfgbindsrcaddrinterface.is_set || is_set(csipcfgbindsrcaddrinterface.yfilter)) leaf_name_data.push_back(csipcfgbindsrcaddrinterface.get_name_leafdata());
    if (csipcfgbindsrcaddrscope.is_set || is_set(csipcfgbindsrcaddrscope.yfilter)) leaf_name_data.push_back(csipcfgbindsrcaddrscope.get_name_leafdata());
    if (csipcfgdnssrvquerystringformat.is_set || is_set(csipcfgdnssrvquerystringformat.yfilter)) leaf_name_data.push_back(csipcfgdnssrvquerystringformat.get_name_leafdata());
    if (csipcfgredirectiondisabled.is_set || is_set(csipcfgredirectiondisabled.yfilter)) leaf_name_data.push_back(csipcfgredirectiondisabled.get_name_leafdata());
    if (csipcfgsymnatenabled.is_set || is_set(csipcfgsymnatenabled.yfilter)) leaf_name_data.push_back(csipcfgsymnatenabled.get_name_leafdata());
    if (csipcfgsymnatdirectionrole.is_set || is_set(csipcfgsymnatdirectionrole.yfilter)) leaf_name_data.push_back(csipcfgsymnatdirectionrole.get_name_leafdata());
    if (csipcfgsuspendresumeenabled.is_set || is_set(csipcfgsuspendresumeenabled.yfilter)) leaf_name_data.push_back(csipcfgsuspendresumeenabled.get_name_leafdata());
    if (csipcfgoffercallhold.is_set || is_set(csipcfgoffercallhold.yfilter)) leaf_name_data.push_back(csipcfgoffercallhold.get_name_leafdata());
    if (csipcfgreasonheaderoveride.is_set || is_set(csipcfgreasonheaderoveride.yfilter)) leaf_name_data.push_back(csipcfgreasonheaderoveride.get_name_leafdata());
    if (csipcfgmaximumforwards.is_set || is_set(csipcfgmaximumforwards.yfilter)) leaf_name_data.push_back(csipcfgmaximumforwards.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSIPUAMIB::Csipcfgbase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSIPUAMIB::Csipcfgbase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOSIPUAMIB::Csipcfgbase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cSipCfgVersion")
    {
        csipcfgversion = value;
        csipcfgversion.value_namespace = name_space;
        csipcfgversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgTransport")
    {
        csipcfgtransport = value;
        csipcfgtransport.value_namespace = name_space;
        csipcfgtransport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgUserLocationServerAddr")
    {
        csipcfguserlocationserveraddr = value;
        csipcfguserlocationserveraddr.value_namespace = name_space;
        csipcfguserlocationserveraddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgMaxForwards")
    {
        csipcfgmaxforwards = value;
        csipcfgmaxforwards.value_namespace = name_space;
        csipcfgmaxforwards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgBindSrcAddrInterface")
    {
        csipcfgbindsrcaddrinterface = value;
        csipcfgbindsrcaddrinterface.value_namespace = name_space;
        csipcfgbindsrcaddrinterface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgBindSrcAddrScope")
    {
        csipcfgbindsrcaddrscope = value;
        csipcfgbindsrcaddrscope.value_namespace = name_space;
        csipcfgbindsrcaddrscope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgDnsSrvQueryStringFormat")
    {
        csipcfgdnssrvquerystringformat = value;
        csipcfgdnssrvquerystringformat.value_namespace = name_space;
        csipcfgdnssrvquerystringformat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgRedirectionDisabled")
    {
        csipcfgredirectiondisabled = value;
        csipcfgredirectiondisabled.value_namespace = name_space;
        csipcfgredirectiondisabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgSymNatEnabled")
    {
        csipcfgsymnatenabled = value;
        csipcfgsymnatenabled.value_namespace = name_space;
        csipcfgsymnatenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgSymNatDirectionRole")
    {
        csipcfgsymnatdirectionrole = value;
        csipcfgsymnatdirectionrole.value_namespace = name_space;
        csipcfgsymnatdirectionrole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgSuspendResumeEnabled")
    {
        csipcfgsuspendresumeenabled = value;
        csipcfgsuspendresumeenabled.value_namespace = name_space;
        csipcfgsuspendresumeenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgOfferCallHold")
    {
        csipcfgoffercallhold = value;
        csipcfgoffercallhold.value_namespace = name_space;
        csipcfgoffercallhold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgReasonHeaderOveride")
    {
        csipcfgreasonheaderoveride = value;
        csipcfgreasonheaderoveride.value_namespace = name_space;
        csipcfgreasonheaderoveride.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgMaximumForwards")
    {
        csipcfgmaximumforwards = value;
        csipcfgmaximumforwards.value_namespace = name_space;
        csipcfgmaximumforwards.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSIPUAMIB::Csipcfgbase::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cSipCfgVersion")
    {
        csipcfgversion.yfilter = yfilter;
    }
    if(value_path == "cSipCfgTransport")
    {
        csipcfgtransport.yfilter = yfilter;
    }
    if(value_path == "cSipCfgUserLocationServerAddr")
    {
        csipcfguserlocationserveraddr.yfilter = yfilter;
    }
    if(value_path == "cSipCfgMaxForwards")
    {
        csipcfgmaxforwards.yfilter = yfilter;
    }
    if(value_path == "cSipCfgBindSrcAddrInterface")
    {
        csipcfgbindsrcaddrinterface.yfilter = yfilter;
    }
    if(value_path == "cSipCfgBindSrcAddrScope")
    {
        csipcfgbindsrcaddrscope.yfilter = yfilter;
    }
    if(value_path == "cSipCfgDnsSrvQueryStringFormat")
    {
        csipcfgdnssrvquerystringformat.yfilter = yfilter;
    }
    if(value_path == "cSipCfgRedirectionDisabled")
    {
        csipcfgredirectiondisabled.yfilter = yfilter;
    }
    if(value_path == "cSipCfgSymNatEnabled")
    {
        csipcfgsymnatenabled.yfilter = yfilter;
    }
    if(value_path == "cSipCfgSymNatDirectionRole")
    {
        csipcfgsymnatdirectionrole.yfilter = yfilter;
    }
    if(value_path == "cSipCfgSuspendResumeEnabled")
    {
        csipcfgsuspendresumeenabled.yfilter = yfilter;
    }
    if(value_path == "cSipCfgOfferCallHold")
    {
        csipcfgoffercallhold.yfilter = yfilter;
    }
    if(value_path == "cSipCfgReasonHeaderOveride")
    {
        csipcfgreasonheaderoveride.yfilter = yfilter;
    }
    if(value_path == "cSipCfgMaximumForwards")
    {
        csipcfgmaximumforwards.yfilter = yfilter;
    }
}

bool CISCOSIPUAMIB::Csipcfgbase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipCfgVersion" || name == "cSipCfgTransport" || name == "cSipCfgUserLocationServerAddr" || name == "cSipCfgMaxForwards" || name == "cSipCfgBindSrcAddrInterface" || name == "cSipCfgBindSrcAddrScope" || name == "cSipCfgDnsSrvQueryStringFormat" || name == "cSipCfgRedirectionDisabled" || name == "cSipCfgSymNatEnabled" || name == "cSipCfgSymNatDirectionRole" || name == "cSipCfgSuspendResumeEnabled" || name == "cSipCfgOfferCallHold" || name == "cSipCfgReasonHeaderOveride" || name == "cSipCfgMaximumForwards")
        return true;
    return false;
}

CISCOSIPUAMIB::Csipcfgtimer::Csipcfgtimer()
    :
    csipcfgtimertrying{YType::int32, "cSipCfgTimerTrying"},
    csipcfgtimerexpires{YType::int32, "cSipCfgTimerExpires"},
    csipcfgtimerconnect{YType::int32, "cSipCfgTimerConnect"},
    csipcfgtimerdisconnect{YType::int32, "cSipCfgTimerDisconnect"},
    csipcfgtimerprack{YType::int32, "cSipCfgTimerPrack"},
    csipcfgtimercomet{YType::int32, "cSipCfgTimerComet"},
    csipcfgtimerreliablersp{YType::int32, "cSipCfgTimerReliableRsp"},
    csipcfgtimernotify{YType::int32, "cSipCfgTimerNotify"},
    csipcfgtimerrefer{YType::int32, "cSipCfgTimerRefer"},
    csipcfgtimersessiontimer{YType::int32, "cSipCfgTimerSessionTimer"},
    csipcfgtimerhold{YType::int32, "cSipCfgTimerHold"},
    csipcfgtimerinfo{YType::int32, "cSipCfgTimerInfo"},
    csipcfgtimerconnectionaging{YType::int32, "cSipCfgTimerConnectionAging"},
    csipcfgtimerbufferinvite{YType::int32, "cSipCfgTimerBufferInvite"}
{

    yang_name = "cSipCfgTimer"; yang_parent_name = "CISCO-SIP-UA-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSIPUAMIB::Csipcfgtimer::~Csipcfgtimer()
{
}

bool CISCOSIPUAMIB::Csipcfgtimer::has_data() const
{
    return csipcfgtimertrying.is_set
	|| csipcfgtimerexpires.is_set
	|| csipcfgtimerconnect.is_set
	|| csipcfgtimerdisconnect.is_set
	|| csipcfgtimerprack.is_set
	|| csipcfgtimercomet.is_set
	|| csipcfgtimerreliablersp.is_set
	|| csipcfgtimernotify.is_set
	|| csipcfgtimerrefer.is_set
	|| csipcfgtimersessiontimer.is_set
	|| csipcfgtimerhold.is_set
	|| csipcfgtimerinfo.is_set
	|| csipcfgtimerconnectionaging.is_set
	|| csipcfgtimerbufferinvite.is_set;
}

bool CISCOSIPUAMIB::Csipcfgtimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipcfgtimertrying.yfilter)
	|| ydk::is_set(csipcfgtimerexpires.yfilter)
	|| ydk::is_set(csipcfgtimerconnect.yfilter)
	|| ydk::is_set(csipcfgtimerdisconnect.yfilter)
	|| ydk::is_set(csipcfgtimerprack.yfilter)
	|| ydk::is_set(csipcfgtimercomet.yfilter)
	|| ydk::is_set(csipcfgtimerreliablersp.yfilter)
	|| ydk::is_set(csipcfgtimernotify.yfilter)
	|| ydk::is_set(csipcfgtimerrefer.yfilter)
	|| ydk::is_set(csipcfgtimersessiontimer.yfilter)
	|| ydk::is_set(csipcfgtimerhold.yfilter)
	|| ydk::is_set(csipcfgtimerinfo.yfilter)
	|| ydk::is_set(csipcfgtimerconnectionaging.yfilter)
	|| ydk::is_set(csipcfgtimerbufferinvite.yfilter);
}

std::string CISCOSIPUAMIB::Csipcfgtimer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSIPUAMIB::Csipcfgtimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipCfgTimer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSIPUAMIB::Csipcfgtimer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipcfgtimertrying.is_set || is_set(csipcfgtimertrying.yfilter)) leaf_name_data.push_back(csipcfgtimertrying.get_name_leafdata());
    if (csipcfgtimerexpires.is_set || is_set(csipcfgtimerexpires.yfilter)) leaf_name_data.push_back(csipcfgtimerexpires.get_name_leafdata());
    if (csipcfgtimerconnect.is_set || is_set(csipcfgtimerconnect.yfilter)) leaf_name_data.push_back(csipcfgtimerconnect.get_name_leafdata());
    if (csipcfgtimerdisconnect.is_set || is_set(csipcfgtimerdisconnect.yfilter)) leaf_name_data.push_back(csipcfgtimerdisconnect.get_name_leafdata());
    if (csipcfgtimerprack.is_set || is_set(csipcfgtimerprack.yfilter)) leaf_name_data.push_back(csipcfgtimerprack.get_name_leafdata());
    if (csipcfgtimercomet.is_set || is_set(csipcfgtimercomet.yfilter)) leaf_name_data.push_back(csipcfgtimercomet.get_name_leafdata());
    if (csipcfgtimerreliablersp.is_set || is_set(csipcfgtimerreliablersp.yfilter)) leaf_name_data.push_back(csipcfgtimerreliablersp.get_name_leafdata());
    if (csipcfgtimernotify.is_set || is_set(csipcfgtimernotify.yfilter)) leaf_name_data.push_back(csipcfgtimernotify.get_name_leafdata());
    if (csipcfgtimerrefer.is_set || is_set(csipcfgtimerrefer.yfilter)) leaf_name_data.push_back(csipcfgtimerrefer.get_name_leafdata());
    if (csipcfgtimersessiontimer.is_set || is_set(csipcfgtimersessiontimer.yfilter)) leaf_name_data.push_back(csipcfgtimersessiontimer.get_name_leafdata());
    if (csipcfgtimerhold.is_set || is_set(csipcfgtimerhold.yfilter)) leaf_name_data.push_back(csipcfgtimerhold.get_name_leafdata());
    if (csipcfgtimerinfo.is_set || is_set(csipcfgtimerinfo.yfilter)) leaf_name_data.push_back(csipcfgtimerinfo.get_name_leafdata());
    if (csipcfgtimerconnectionaging.is_set || is_set(csipcfgtimerconnectionaging.yfilter)) leaf_name_data.push_back(csipcfgtimerconnectionaging.get_name_leafdata());
    if (csipcfgtimerbufferinvite.is_set || is_set(csipcfgtimerbufferinvite.yfilter)) leaf_name_data.push_back(csipcfgtimerbufferinvite.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSIPUAMIB::Csipcfgtimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSIPUAMIB::Csipcfgtimer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOSIPUAMIB::Csipcfgtimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cSipCfgTimerTrying")
    {
        csipcfgtimertrying = value;
        csipcfgtimertrying.value_namespace = name_space;
        csipcfgtimertrying.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgTimerExpires")
    {
        csipcfgtimerexpires = value;
        csipcfgtimerexpires.value_namespace = name_space;
        csipcfgtimerexpires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgTimerConnect")
    {
        csipcfgtimerconnect = value;
        csipcfgtimerconnect.value_namespace = name_space;
        csipcfgtimerconnect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgTimerDisconnect")
    {
        csipcfgtimerdisconnect = value;
        csipcfgtimerdisconnect.value_namespace = name_space;
        csipcfgtimerdisconnect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgTimerPrack")
    {
        csipcfgtimerprack = value;
        csipcfgtimerprack.value_namespace = name_space;
        csipcfgtimerprack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgTimerComet")
    {
        csipcfgtimercomet = value;
        csipcfgtimercomet.value_namespace = name_space;
        csipcfgtimercomet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgTimerReliableRsp")
    {
        csipcfgtimerreliablersp = value;
        csipcfgtimerreliablersp.value_namespace = name_space;
        csipcfgtimerreliablersp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgTimerNotify")
    {
        csipcfgtimernotify = value;
        csipcfgtimernotify.value_namespace = name_space;
        csipcfgtimernotify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgTimerRefer")
    {
        csipcfgtimerrefer = value;
        csipcfgtimerrefer.value_namespace = name_space;
        csipcfgtimerrefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgTimerSessionTimer")
    {
        csipcfgtimersessiontimer = value;
        csipcfgtimersessiontimer.value_namespace = name_space;
        csipcfgtimersessiontimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgTimerHold")
    {
        csipcfgtimerhold = value;
        csipcfgtimerhold.value_namespace = name_space;
        csipcfgtimerhold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgTimerInfo")
    {
        csipcfgtimerinfo = value;
        csipcfgtimerinfo.value_namespace = name_space;
        csipcfgtimerinfo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgTimerConnectionAging")
    {
        csipcfgtimerconnectionaging = value;
        csipcfgtimerconnectionaging.value_namespace = name_space;
        csipcfgtimerconnectionaging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgTimerBufferInvite")
    {
        csipcfgtimerbufferinvite = value;
        csipcfgtimerbufferinvite.value_namespace = name_space;
        csipcfgtimerbufferinvite.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSIPUAMIB::Csipcfgtimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cSipCfgTimerTrying")
    {
        csipcfgtimertrying.yfilter = yfilter;
    }
    if(value_path == "cSipCfgTimerExpires")
    {
        csipcfgtimerexpires.yfilter = yfilter;
    }
    if(value_path == "cSipCfgTimerConnect")
    {
        csipcfgtimerconnect.yfilter = yfilter;
    }
    if(value_path == "cSipCfgTimerDisconnect")
    {
        csipcfgtimerdisconnect.yfilter = yfilter;
    }
    if(value_path == "cSipCfgTimerPrack")
    {
        csipcfgtimerprack.yfilter = yfilter;
    }
    if(value_path == "cSipCfgTimerComet")
    {
        csipcfgtimercomet.yfilter = yfilter;
    }
    if(value_path == "cSipCfgTimerReliableRsp")
    {
        csipcfgtimerreliablersp.yfilter = yfilter;
    }
    if(value_path == "cSipCfgTimerNotify")
    {
        csipcfgtimernotify.yfilter = yfilter;
    }
    if(value_path == "cSipCfgTimerRefer")
    {
        csipcfgtimerrefer.yfilter = yfilter;
    }
    if(value_path == "cSipCfgTimerSessionTimer")
    {
        csipcfgtimersessiontimer.yfilter = yfilter;
    }
    if(value_path == "cSipCfgTimerHold")
    {
        csipcfgtimerhold.yfilter = yfilter;
    }
    if(value_path == "cSipCfgTimerInfo")
    {
        csipcfgtimerinfo.yfilter = yfilter;
    }
    if(value_path == "cSipCfgTimerConnectionAging")
    {
        csipcfgtimerconnectionaging.yfilter = yfilter;
    }
    if(value_path == "cSipCfgTimerBufferInvite")
    {
        csipcfgtimerbufferinvite.yfilter = yfilter;
    }
}

bool CISCOSIPUAMIB::Csipcfgtimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipCfgTimerTrying" || name == "cSipCfgTimerExpires" || name == "cSipCfgTimerConnect" || name == "cSipCfgTimerDisconnect" || name == "cSipCfgTimerPrack" || name == "cSipCfgTimerComet" || name == "cSipCfgTimerReliableRsp" || name == "cSipCfgTimerNotify" || name == "cSipCfgTimerRefer" || name == "cSipCfgTimerSessionTimer" || name == "cSipCfgTimerHold" || name == "cSipCfgTimerInfo" || name == "cSipCfgTimerConnectionAging" || name == "cSipCfgTimerBufferInvite")
        return true;
    return false;
}

CISCOSIPUAMIB::Csipcfgretry::Csipcfgretry()
    :
    csipcfgretryinvite{YType::int32, "cSipCfgRetryInvite"},
    csipcfgretrybye{YType::int32, "cSipCfgRetryBye"},
    csipcfgretrycancel{YType::int32, "cSipCfgRetryCancel"},
    csipcfgretryregister{YType::int32, "cSipCfgRetryRegister"},
    csipcfgretryresponse{YType::int32, "cSipCfgRetryResponse"},
    csipcfgretryprack{YType::int32, "cSipCfgRetryPrack"},
    csipcfgretrycomet{YType::int32, "cSipCfgRetryComet"},
    csipcfgretryreliablersp{YType::int32, "cSipCfgRetryReliableRsp"},
    csipcfgretrynotify{YType::int32, "cSipCfgRetryNotify"},
    csipcfgretryrefer{YType::int32, "cSipCfgRetryRefer"},
    csipcfgretryinfo{YType::int32, "cSipCfgRetryInfo"},
    csipcfgretrysubscribe{YType::int32, "cSipCfgRetrySubscribe"}
{

    yang_name = "cSipCfgRetry"; yang_parent_name = "CISCO-SIP-UA-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSIPUAMIB::Csipcfgretry::~Csipcfgretry()
{
}

bool CISCOSIPUAMIB::Csipcfgretry::has_data() const
{
    return csipcfgretryinvite.is_set
	|| csipcfgretrybye.is_set
	|| csipcfgretrycancel.is_set
	|| csipcfgretryregister.is_set
	|| csipcfgretryresponse.is_set
	|| csipcfgretryprack.is_set
	|| csipcfgretrycomet.is_set
	|| csipcfgretryreliablersp.is_set
	|| csipcfgretrynotify.is_set
	|| csipcfgretryrefer.is_set
	|| csipcfgretryinfo.is_set
	|| csipcfgretrysubscribe.is_set;
}

bool CISCOSIPUAMIB::Csipcfgretry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipcfgretryinvite.yfilter)
	|| ydk::is_set(csipcfgretrybye.yfilter)
	|| ydk::is_set(csipcfgretrycancel.yfilter)
	|| ydk::is_set(csipcfgretryregister.yfilter)
	|| ydk::is_set(csipcfgretryresponse.yfilter)
	|| ydk::is_set(csipcfgretryprack.yfilter)
	|| ydk::is_set(csipcfgretrycomet.yfilter)
	|| ydk::is_set(csipcfgretryreliablersp.yfilter)
	|| ydk::is_set(csipcfgretrynotify.yfilter)
	|| ydk::is_set(csipcfgretryrefer.yfilter)
	|| ydk::is_set(csipcfgretryinfo.yfilter)
	|| ydk::is_set(csipcfgretrysubscribe.yfilter);
}

std::string CISCOSIPUAMIB::Csipcfgretry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSIPUAMIB::Csipcfgretry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipCfgRetry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSIPUAMIB::Csipcfgretry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipcfgretryinvite.is_set || is_set(csipcfgretryinvite.yfilter)) leaf_name_data.push_back(csipcfgretryinvite.get_name_leafdata());
    if (csipcfgretrybye.is_set || is_set(csipcfgretrybye.yfilter)) leaf_name_data.push_back(csipcfgretrybye.get_name_leafdata());
    if (csipcfgretrycancel.is_set || is_set(csipcfgretrycancel.yfilter)) leaf_name_data.push_back(csipcfgretrycancel.get_name_leafdata());
    if (csipcfgretryregister.is_set || is_set(csipcfgretryregister.yfilter)) leaf_name_data.push_back(csipcfgretryregister.get_name_leafdata());
    if (csipcfgretryresponse.is_set || is_set(csipcfgretryresponse.yfilter)) leaf_name_data.push_back(csipcfgretryresponse.get_name_leafdata());
    if (csipcfgretryprack.is_set || is_set(csipcfgretryprack.yfilter)) leaf_name_data.push_back(csipcfgretryprack.get_name_leafdata());
    if (csipcfgretrycomet.is_set || is_set(csipcfgretrycomet.yfilter)) leaf_name_data.push_back(csipcfgretrycomet.get_name_leafdata());
    if (csipcfgretryreliablersp.is_set || is_set(csipcfgretryreliablersp.yfilter)) leaf_name_data.push_back(csipcfgretryreliablersp.get_name_leafdata());
    if (csipcfgretrynotify.is_set || is_set(csipcfgretrynotify.yfilter)) leaf_name_data.push_back(csipcfgretrynotify.get_name_leafdata());
    if (csipcfgretryrefer.is_set || is_set(csipcfgretryrefer.yfilter)) leaf_name_data.push_back(csipcfgretryrefer.get_name_leafdata());
    if (csipcfgretryinfo.is_set || is_set(csipcfgretryinfo.yfilter)) leaf_name_data.push_back(csipcfgretryinfo.get_name_leafdata());
    if (csipcfgretrysubscribe.is_set || is_set(csipcfgretrysubscribe.yfilter)) leaf_name_data.push_back(csipcfgretrysubscribe.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSIPUAMIB::Csipcfgretry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSIPUAMIB::Csipcfgretry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOSIPUAMIB::Csipcfgretry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cSipCfgRetryInvite")
    {
        csipcfgretryinvite = value;
        csipcfgretryinvite.value_namespace = name_space;
        csipcfgretryinvite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgRetryBye")
    {
        csipcfgretrybye = value;
        csipcfgretrybye.value_namespace = name_space;
        csipcfgretrybye.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgRetryCancel")
    {
        csipcfgretrycancel = value;
        csipcfgretrycancel.value_namespace = name_space;
        csipcfgretrycancel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgRetryRegister")
    {
        csipcfgretryregister = value;
        csipcfgretryregister.value_namespace = name_space;
        csipcfgretryregister.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgRetryResponse")
    {
        csipcfgretryresponse = value;
        csipcfgretryresponse.value_namespace = name_space;
        csipcfgretryresponse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgRetryPrack")
    {
        csipcfgretryprack = value;
        csipcfgretryprack.value_namespace = name_space;
        csipcfgretryprack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgRetryComet")
    {
        csipcfgretrycomet = value;
        csipcfgretrycomet.value_namespace = name_space;
        csipcfgretrycomet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgRetryReliableRsp")
    {
        csipcfgretryreliablersp = value;
        csipcfgretryreliablersp.value_namespace = name_space;
        csipcfgretryreliablersp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgRetryNotify")
    {
        csipcfgretrynotify = value;
        csipcfgretrynotify.value_namespace = name_space;
        csipcfgretrynotify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgRetryRefer")
    {
        csipcfgretryrefer = value;
        csipcfgretryrefer.value_namespace = name_space;
        csipcfgretryrefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgRetryInfo")
    {
        csipcfgretryinfo = value;
        csipcfgretryinfo.value_namespace = name_space;
        csipcfgretryinfo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgRetrySubscribe")
    {
        csipcfgretrysubscribe = value;
        csipcfgretrysubscribe.value_namespace = name_space;
        csipcfgretrysubscribe.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSIPUAMIB::Csipcfgretry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cSipCfgRetryInvite")
    {
        csipcfgretryinvite.yfilter = yfilter;
    }
    if(value_path == "cSipCfgRetryBye")
    {
        csipcfgretrybye.yfilter = yfilter;
    }
    if(value_path == "cSipCfgRetryCancel")
    {
        csipcfgretrycancel.yfilter = yfilter;
    }
    if(value_path == "cSipCfgRetryRegister")
    {
        csipcfgretryregister.yfilter = yfilter;
    }
    if(value_path == "cSipCfgRetryResponse")
    {
        csipcfgretryresponse.yfilter = yfilter;
    }
    if(value_path == "cSipCfgRetryPrack")
    {
        csipcfgretryprack.yfilter = yfilter;
    }
    if(value_path == "cSipCfgRetryComet")
    {
        csipcfgretrycomet.yfilter = yfilter;
    }
    if(value_path == "cSipCfgRetryReliableRsp")
    {
        csipcfgretryreliablersp.yfilter = yfilter;
    }
    if(value_path == "cSipCfgRetryNotify")
    {
        csipcfgretrynotify.yfilter = yfilter;
    }
    if(value_path == "cSipCfgRetryRefer")
    {
        csipcfgretryrefer.yfilter = yfilter;
    }
    if(value_path == "cSipCfgRetryInfo")
    {
        csipcfgretryinfo.yfilter = yfilter;
    }
    if(value_path == "cSipCfgRetrySubscribe")
    {
        csipcfgretrysubscribe.yfilter = yfilter;
    }
}

bool CISCOSIPUAMIB::Csipcfgretry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipCfgRetryInvite" || name == "cSipCfgRetryBye" || name == "cSipCfgRetryCancel" || name == "cSipCfgRetryRegister" || name == "cSipCfgRetryResponse" || name == "cSipCfgRetryPrack" || name == "cSipCfgRetryComet" || name == "cSipCfgRetryReliableRsp" || name == "cSipCfgRetryNotify" || name == "cSipCfgRetryRefer" || name == "cSipCfgRetryInfo" || name == "cSipCfgRetrySubscribe")
        return true;
    return false;
}

CISCOSIPUAMIB::Csipcfgpeer::Csipcfgpeer()
    :
    csipcfgoutsessiontransport{YType::enumeration, "cSipCfgOutSessionTransport"},
    csipcfgreliable1xxrspstr{YType::str, "cSipCfgReliable1xxRspStr"},
    csipcfgreliable1xxrsphdr{YType::enumeration, "cSipCfgReliable1xxRspHdr"},
    csipcfgurltype{YType::enumeration, "cSipCfgUrlType"}
{

    yang_name = "cSipCfgPeer"; yang_parent_name = "CISCO-SIP-UA-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSIPUAMIB::Csipcfgpeer::~Csipcfgpeer()
{
}

bool CISCOSIPUAMIB::Csipcfgpeer::has_data() const
{
    return csipcfgoutsessiontransport.is_set
	|| csipcfgreliable1xxrspstr.is_set
	|| csipcfgreliable1xxrsphdr.is_set
	|| csipcfgurltype.is_set;
}

bool CISCOSIPUAMIB::Csipcfgpeer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipcfgoutsessiontransport.yfilter)
	|| ydk::is_set(csipcfgreliable1xxrspstr.yfilter)
	|| ydk::is_set(csipcfgreliable1xxrsphdr.yfilter)
	|| ydk::is_set(csipcfgurltype.yfilter);
}

std::string CISCOSIPUAMIB::Csipcfgpeer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSIPUAMIB::Csipcfgpeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipCfgPeer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSIPUAMIB::Csipcfgpeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipcfgoutsessiontransport.is_set || is_set(csipcfgoutsessiontransport.yfilter)) leaf_name_data.push_back(csipcfgoutsessiontransport.get_name_leafdata());
    if (csipcfgreliable1xxrspstr.is_set || is_set(csipcfgreliable1xxrspstr.yfilter)) leaf_name_data.push_back(csipcfgreliable1xxrspstr.get_name_leafdata());
    if (csipcfgreliable1xxrsphdr.is_set || is_set(csipcfgreliable1xxrsphdr.yfilter)) leaf_name_data.push_back(csipcfgreliable1xxrsphdr.get_name_leafdata());
    if (csipcfgurltype.is_set || is_set(csipcfgurltype.yfilter)) leaf_name_data.push_back(csipcfgurltype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSIPUAMIB::Csipcfgpeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSIPUAMIB::Csipcfgpeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOSIPUAMIB::Csipcfgpeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cSipCfgOutSessionTransport")
    {
        csipcfgoutsessiontransport = value;
        csipcfgoutsessiontransport.value_namespace = name_space;
        csipcfgoutsessiontransport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgReliable1xxRspStr")
    {
        csipcfgreliable1xxrspstr = value;
        csipcfgreliable1xxrspstr.value_namespace = name_space;
        csipcfgreliable1xxrspstr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgReliable1xxRspHdr")
    {
        csipcfgreliable1xxrsphdr = value;
        csipcfgreliable1xxrsphdr.value_namespace = name_space;
        csipcfgreliable1xxrsphdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgUrlType")
    {
        csipcfgurltype = value;
        csipcfgurltype.value_namespace = name_space;
        csipcfgurltype.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSIPUAMIB::Csipcfgpeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cSipCfgOutSessionTransport")
    {
        csipcfgoutsessiontransport.yfilter = yfilter;
    }
    if(value_path == "cSipCfgReliable1xxRspStr")
    {
        csipcfgreliable1xxrspstr.yfilter = yfilter;
    }
    if(value_path == "cSipCfgReliable1xxRspHdr")
    {
        csipcfgreliable1xxrsphdr.yfilter = yfilter;
    }
    if(value_path == "cSipCfgUrlType")
    {
        csipcfgurltype.yfilter = yfilter;
    }
}

bool CISCOSIPUAMIB::Csipcfgpeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipCfgOutSessionTransport" || name == "cSipCfgReliable1xxRspStr" || name == "cSipCfgReliable1xxRspHdr" || name == "cSipCfgUrlType")
        return true;
    return false;
}

CISCOSIPUAMIB::Csipcfgaaa::Csipcfgaaa()
    :
    csipcfgaaausername{YType::enumeration, "cSipCfgAaaUsername"}
{

    yang_name = "cSipCfgAaa"; yang_parent_name = "CISCO-SIP-UA-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSIPUAMIB::Csipcfgaaa::~Csipcfgaaa()
{
}

bool CISCOSIPUAMIB::Csipcfgaaa::has_data() const
{
    return csipcfgaaausername.is_set;
}

bool CISCOSIPUAMIB::Csipcfgaaa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipcfgaaausername.yfilter);
}

std::string CISCOSIPUAMIB::Csipcfgaaa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSIPUAMIB::Csipcfgaaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipCfgAaa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSIPUAMIB::Csipcfgaaa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipcfgaaausername.is_set || is_set(csipcfgaaausername.yfilter)) leaf_name_data.push_back(csipcfgaaausername.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSIPUAMIB::Csipcfgaaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSIPUAMIB::Csipcfgaaa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOSIPUAMIB::Csipcfgaaa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cSipCfgAaaUsername")
    {
        csipcfgaaausername = value;
        csipcfgaaausername.value_namespace = name_space;
        csipcfgaaausername.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSIPUAMIB::Csipcfgaaa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cSipCfgAaaUsername")
    {
        csipcfgaaausername.yfilter = yfilter;
    }
}

bool CISCOSIPUAMIB::Csipcfgaaa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipCfgAaaUsername")
        return true;
    return false;
}

CISCOSIPUAMIB::Csipcfgvoiceservicevoip::Csipcfgvoiceservicevoip()
    :
    csipcfgheaderpassingenabled{YType::boolean, "cSipCfgHeaderPassingEnabled"},
    csipcfgmaxsubscriptionaccept{YType::uint32, "cSipCfgMaxSubscriptionAccept"},
    csipcfgmaxsubscriptionoriginate{YType::uint32, "cSipCfgMaxSubscriptionOriginate"},
    csipcfgswitchtransportenabled{YType::boolean, "cSipCfgSwitchTransportEnabled"}
{

    yang_name = "cSipCfgVoiceServiceVoip"; yang_parent_name = "CISCO-SIP-UA-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSIPUAMIB::Csipcfgvoiceservicevoip::~Csipcfgvoiceservicevoip()
{
}

bool CISCOSIPUAMIB::Csipcfgvoiceservicevoip::has_data() const
{
    return csipcfgheaderpassingenabled.is_set
	|| csipcfgmaxsubscriptionaccept.is_set
	|| csipcfgmaxsubscriptionoriginate.is_set
	|| csipcfgswitchtransportenabled.is_set;
}

bool CISCOSIPUAMIB::Csipcfgvoiceservicevoip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipcfgheaderpassingenabled.yfilter)
	|| ydk::is_set(csipcfgmaxsubscriptionaccept.yfilter)
	|| ydk::is_set(csipcfgmaxsubscriptionoriginate.yfilter)
	|| ydk::is_set(csipcfgswitchtransportenabled.yfilter);
}

std::string CISCOSIPUAMIB::Csipcfgvoiceservicevoip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSIPUAMIB::Csipcfgvoiceservicevoip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipCfgVoiceServiceVoip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSIPUAMIB::Csipcfgvoiceservicevoip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipcfgheaderpassingenabled.is_set || is_set(csipcfgheaderpassingenabled.yfilter)) leaf_name_data.push_back(csipcfgheaderpassingenabled.get_name_leafdata());
    if (csipcfgmaxsubscriptionaccept.is_set || is_set(csipcfgmaxsubscriptionaccept.yfilter)) leaf_name_data.push_back(csipcfgmaxsubscriptionaccept.get_name_leafdata());
    if (csipcfgmaxsubscriptionoriginate.is_set || is_set(csipcfgmaxsubscriptionoriginate.yfilter)) leaf_name_data.push_back(csipcfgmaxsubscriptionoriginate.get_name_leafdata());
    if (csipcfgswitchtransportenabled.is_set || is_set(csipcfgswitchtransportenabled.yfilter)) leaf_name_data.push_back(csipcfgswitchtransportenabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSIPUAMIB::Csipcfgvoiceservicevoip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSIPUAMIB::Csipcfgvoiceservicevoip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOSIPUAMIB::Csipcfgvoiceservicevoip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cSipCfgHeaderPassingEnabled")
    {
        csipcfgheaderpassingenabled = value;
        csipcfgheaderpassingenabled.value_namespace = name_space;
        csipcfgheaderpassingenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgMaxSubscriptionAccept")
    {
        csipcfgmaxsubscriptionaccept = value;
        csipcfgmaxsubscriptionaccept.value_namespace = name_space;
        csipcfgmaxsubscriptionaccept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgMaxSubscriptionOriginate")
    {
        csipcfgmaxsubscriptionoriginate = value;
        csipcfgmaxsubscriptionoriginate.value_namespace = name_space;
        csipcfgmaxsubscriptionoriginate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgSwitchTransportEnabled")
    {
        csipcfgswitchtransportenabled = value;
        csipcfgswitchtransportenabled.value_namespace = name_space;
        csipcfgswitchtransportenabled.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSIPUAMIB::Csipcfgvoiceservicevoip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cSipCfgHeaderPassingEnabled")
    {
        csipcfgheaderpassingenabled.yfilter = yfilter;
    }
    if(value_path == "cSipCfgMaxSubscriptionAccept")
    {
        csipcfgmaxsubscriptionaccept.yfilter = yfilter;
    }
    if(value_path == "cSipCfgMaxSubscriptionOriginate")
    {
        csipcfgmaxsubscriptionoriginate.yfilter = yfilter;
    }
    if(value_path == "cSipCfgSwitchTransportEnabled")
    {
        csipcfgswitchtransportenabled.yfilter = yfilter;
    }
}

bool CISCOSIPUAMIB::Csipcfgvoiceservicevoip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipCfgHeaderPassingEnabled" || name == "cSipCfgMaxSubscriptionAccept" || name == "cSipCfgMaxSubscriptionOriginate" || name == "cSipCfgSwitchTransportEnabled")
        return true;
    return false;
}

CISCOSIPUAMIB::Csipstatsinfo::Csipstatsinfo()
    :
    csipstatsinfotryingins{YType::uint32, "cSipStatsInfoTryingIns"},
    csipstatsinfotryingouts{YType::uint32, "cSipStatsInfoTryingOuts"},
    csipstatsinforingingins{YType::uint32, "cSipStatsInfoRingingIns"},
    csipstatsinforingingouts{YType::uint32, "cSipStatsInfoRingingOuts"},
    csipstatsinfoforwardedins{YType::uint32, "cSipStatsInfoForwardedIns"},
    csipstatsinfoforwardedouts{YType::uint32, "cSipStatsInfoForwardedOuts"},
    csipstatsinfoqueuedins{YType::uint32, "cSipStatsInfoQueuedIns"},
    csipstatsinfoqueuedouts{YType::uint32, "cSipStatsInfoQueuedOuts"},
    csipstatsinfosessionprogins{YType::uint32, "cSipStatsInfoSessionProgIns"},
    csipstatsinfosessionprogouts{YType::uint32, "cSipStatsInfoSessionProgOuts"}
{

    yang_name = "cSipStatsInfo"; yang_parent_name = "CISCO-SIP-UA-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSIPUAMIB::Csipstatsinfo::~Csipstatsinfo()
{
}

bool CISCOSIPUAMIB::Csipstatsinfo::has_data() const
{
    return csipstatsinfotryingins.is_set
	|| csipstatsinfotryingouts.is_set
	|| csipstatsinforingingins.is_set
	|| csipstatsinforingingouts.is_set
	|| csipstatsinfoforwardedins.is_set
	|| csipstatsinfoforwardedouts.is_set
	|| csipstatsinfoqueuedins.is_set
	|| csipstatsinfoqueuedouts.is_set
	|| csipstatsinfosessionprogins.is_set
	|| csipstatsinfosessionprogouts.is_set;
}

bool CISCOSIPUAMIB::Csipstatsinfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipstatsinfotryingins.yfilter)
	|| ydk::is_set(csipstatsinfotryingouts.yfilter)
	|| ydk::is_set(csipstatsinforingingins.yfilter)
	|| ydk::is_set(csipstatsinforingingouts.yfilter)
	|| ydk::is_set(csipstatsinfoforwardedins.yfilter)
	|| ydk::is_set(csipstatsinfoforwardedouts.yfilter)
	|| ydk::is_set(csipstatsinfoqueuedins.yfilter)
	|| ydk::is_set(csipstatsinfoqueuedouts.yfilter)
	|| ydk::is_set(csipstatsinfosessionprogins.yfilter)
	|| ydk::is_set(csipstatsinfosessionprogouts.yfilter);
}

std::string CISCOSIPUAMIB::Csipstatsinfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSIPUAMIB::Csipstatsinfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipStatsInfo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSIPUAMIB::Csipstatsinfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipstatsinfotryingins.is_set || is_set(csipstatsinfotryingins.yfilter)) leaf_name_data.push_back(csipstatsinfotryingins.get_name_leafdata());
    if (csipstatsinfotryingouts.is_set || is_set(csipstatsinfotryingouts.yfilter)) leaf_name_data.push_back(csipstatsinfotryingouts.get_name_leafdata());
    if (csipstatsinforingingins.is_set || is_set(csipstatsinforingingins.yfilter)) leaf_name_data.push_back(csipstatsinforingingins.get_name_leafdata());
    if (csipstatsinforingingouts.is_set || is_set(csipstatsinforingingouts.yfilter)) leaf_name_data.push_back(csipstatsinforingingouts.get_name_leafdata());
    if (csipstatsinfoforwardedins.is_set || is_set(csipstatsinfoforwardedins.yfilter)) leaf_name_data.push_back(csipstatsinfoforwardedins.get_name_leafdata());
    if (csipstatsinfoforwardedouts.is_set || is_set(csipstatsinfoforwardedouts.yfilter)) leaf_name_data.push_back(csipstatsinfoforwardedouts.get_name_leafdata());
    if (csipstatsinfoqueuedins.is_set || is_set(csipstatsinfoqueuedins.yfilter)) leaf_name_data.push_back(csipstatsinfoqueuedins.get_name_leafdata());
    if (csipstatsinfoqueuedouts.is_set || is_set(csipstatsinfoqueuedouts.yfilter)) leaf_name_data.push_back(csipstatsinfoqueuedouts.get_name_leafdata());
    if (csipstatsinfosessionprogins.is_set || is_set(csipstatsinfosessionprogins.yfilter)) leaf_name_data.push_back(csipstatsinfosessionprogins.get_name_leafdata());
    if (csipstatsinfosessionprogouts.is_set || is_set(csipstatsinfosessionprogouts.yfilter)) leaf_name_data.push_back(csipstatsinfosessionprogouts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSIPUAMIB::Csipstatsinfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSIPUAMIB::Csipstatsinfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOSIPUAMIB::Csipstatsinfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cSipStatsInfoTryingIns")
    {
        csipstatsinfotryingins = value;
        csipstatsinfotryingins.value_namespace = name_space;
        csipstatsinfotryingins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsInfoTryingOuts")
    {
        csipstatsinfotryingouts = value;
        csipstatsinfotryingouts.value_namespace = name_space;
        csipstatsinfotryingouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsInfoRingingIns")
    {
        csipstatsinforingingins = value;
        csipstatsinforingingins.value_namespace = name_space;
        csipstatsinforingingins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsInfoRingingOuts")
    {
        csipstatsinforingingouts = value;
        csipstatsinforingingouts.value_namespace = name_space;
        csipstatsinforingingouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsInfoForwardedIns")
    {
        csipstatsinfoforwardedins = value;
        csipstatsinfoforwardedins.value_namespace = name_space;
        csipstatsinfoforwardedins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsInfoForwardedOuts")
    {
        csipstatsinfoforwardedouts = value;
        csipstatsinfoforwardedouts.value_namespace = name_space;
        csipstatsinfoforwardedouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsInfoQueuedIns")
    {
        csipstatsinfoqueuedins = value;
        csipstatsinfoqueuedins.value_namespace = name_space;
        csipstatsinfoqueuedins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsInfoQueuedOuts")
    {
        csipstatsinfoqueuedouts = value;
        csipstatsinfoqueuedouts.value_namespace = name_space;
        csipstatsinfoqueuedouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsInfoSessionProgIns")
    {
        csipstatsinfosessionprogins = value;
        csipstatsinfosessionprogins.value_namespace = name_space;
        csipstatsinfosessionprogins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsInfoSessionProgOuts")
    {
        csipstatsinfosessionprogouts = value;
        csipstatsinfosessionprogouts.value_namespace = name_space;
        csipstatsinfosessionprogouts.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSIPUAMIB::Csipstatsinfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cSipStatsInfoTryingIns")
    {
        csipstatsinfotryingins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsInfoTryingOuts")
    {
        csipstatsinfotryingouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsInfoRingingIns")
    {
        csipstatsinforingingins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsInfoRingingOuts")
    {
        csipstatsinforingingouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsInfoForwardedIns")
    {
        csipstatsinfoforwardedins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsInfoForwardedOuts")
    {
        csipstatsinfoforwardedouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsInfoQueuedIns")
    {
        csipstatsinfoqueuedins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsInfoQueuedOuts")
    {
        csipstatsinfoqueuedouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsInfoSessionProgIns")
    {
        csipstatsinfosessionprogins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsInfoSessionProgOuts")
    {
        csipstatsinfosessionprogouts.yfilter = yfilter;
    }
}

bool CISCOSIPUAMIB::Csipstatsinfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipStatsInfoTryingIns" || name == "cSipStatsInfoTryingOuts" || name == "cSipStatsInfoRingingIns" || name == "cSipStatsInfoRingingOuts" || name == "cSipStatsInfoForwardedIns" || name == "cSipStatsInfoForwardedOuts" || name == "cSipStatsInfoQueuedIns" || name == "cSipStatsInfoQueuedOuts" || name == "cSipStatsInfoSessionProgIns" || name == "cSipStatsInfoSessionProgOuts")
        return true;
    return false;
}

CISCOSIPUAMIB::Csipstatssuccess::Csipstatssuccess()
    :
    csipstatssuccessokins{YType::uint32, "cSipStatsSuccessOkIns"},
    csipstatssuccessokouts{YType::uint32, "cSipStatsSuccessOkOuts"},
    csipstatssuccessacceptedins{YType::uint32, "cSipStatsSuccessAcceptedIns"},
    csipstatssuccessacceptedouts{YType::uint32, "cSipStatsSuccessAcceptedOuts"}
{

    yang_name = "cSipStatsSuccess"; yang_parent_name = "CISCO-SIP-UA-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSIPUAMIB::Csipstatssuccess::~Csipstatssuccess()
{
}

bool CISCOSIPUAMIB::Csipstatssuccess::has_data() const
{
    return csipstatssuccessokins.is_set
	|| csipstatssuccessokouts.is_set
	|| csipstatssuccessacceptedins.is_set
	|| csipstatssuccessacceptedouts.is_set;
}

bool CISCOSIPUAMIB::Csipstatssuccess::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipstatssuccessokins.yfilter)
	|| ydk::is_set(csipstatssuccessokouts.yfilter)
	|| ydk::is_set(csipstatssuccessacceptedins.yfilter)
	|| ydk::is_set(csipstatssuccessacceptedouts.yfilter);
}

std::string CISCOSIPUAMIB::Csipstatssuccess::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSIPUAMIB::Csipstatssuccess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipStatsSuccess";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSIPUAMIB::Csipstatssuccess::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipstatssuccessokins.is_set || is_set(csipstatssuccessokins.yfilter)) leaf_name_data.push_back(csipstatssuccessokins.get_name_leafdata());
    if (csipstatssuccessokouts.is_set || is_set(csipstatssuccessokouts.yfilter)) leaf_name_data.push_back(csipstatssuccessokouts.get_name_leafdata());
    if (csipstatssuccessacceptedins.is_set || is_set(csipstatssuccessacceptedins.yfilter)) leaf_name_data.push_back(csipstatssuccessacceptedins.get_name_leafdata());
    if (csipstatssuccessacceptedouts.is_set || is_set(csipstatssuccessacceptedouts.yfilter)) leaf_name_data.push_back(csipstatssuccessacceptedouts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSIPUAMIB::Csipstatssuccess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSIPUAMIB::Csipstatssuccess::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOSIPUAMIB::Csipstatssuccess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cSipStatsSuccessOkIns")
    {
        csipstatssuccessokins = value;
        csipstatssuccessokins.value_namespace = name_space;
        csipstatssuccessokins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsSuccessOkOuts")
    {
        csipstatssuccessokouts = value;
        csipstatssuccessokouts.value_namespace = name_space;
        csipstatssuccessokouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsSuccessAcceptedIns")
    {
        csipstatssuccessacceptedins = value;
        csipstatssuccessacceptedins.value_namespace = name_space;
        csipstatssuccessacceptedins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsSuccessAcceptedOuts")
    {
        csipstatssuccessacceptedouts = value;
        csipstatssuccessacceptedouts.value_namespace = name_space;
        csipstatssuccessacceptedouts.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSIPUAMIB::Csipstatssuccess::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cSipStatsSuccessOkIns")
    {
        csipstatssuccessokins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsSuccessOkOuts")
    {
        csipstatssuccessokouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsSuccessAcceptedIns")
    {
        csipstatssuccessacceptedins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsSuccessAcceptedOuts")
    {
        csipstatssuccessacceptedouts.yfilter = yfilter;
    }
}

bool CISCOSIPUAMIB::Csipstatssuccess::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipStatsSuccessOkIns" || name == "cSipStatsSuccessOkOuts" || name == "cSipStatsSuccessAcceptedIns" || name == "cSipStatsSuccessAcceptedOuts")
        return true;
    return false;
}

CISCOSIPUAMIB::Csipstatsredirect::Csipstatsredirect()
    :
    csipstatsredirmultiplechoices{YType::uint32, "cSipStatsRedirMultipleChoices"},
    csipstatsredirmovedperms{YType::uint32, "cSipStatsRedirMovedPerms"},
    csipstatsredirmovedtemps{YType::uint32, "cSipStatsRedirMovedTemps"},
    csipstatsredirseeothers{YType::uint32, "cSipStatsRedirSeeOthers"},
    csipstatsrediruseproxys{YType::uint32, "cSipStatsRedirUseProxys"},
    csipstatsrediraltservices{YType::uint32, "cSipStatsRedirAltServices"},
    csipstatsredirmovedtempsins{YType::uint32, "cSipStatsRedirMovedTempsIns"},
    csipstatsredirmovedtempsouts{YType::uint32, "cSipStatsRedirMovedTempsOuts"}
{

    yang_name = "cSipStatsRedirect"; yang_parent_name = "CISCO-SIP-UA-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSIPUAMIB::Csipstatsredirect::~Csipstatsredirect()
{
}

bool CISCOSIPUAMIB::Csipstatsredirect::has_data() const
{
    return csipstatsredirmultiplechoices.is_set
	|| csipstatsredirmovedperms.is_set
	|| csipstatsredirmovedtemps.is_set
	|| csipstatsredirseeothers.is_set
	|| csipstatsrediruseproxys.is_set
	|| csipstatsrediraltservices.is_set
	|| csipstatsredirmovedtempsins.is_set
	|| csipstatsredirmovedtempsouts.is_set;
}

bool CISCOSIPUAMIB::Csipstatsredirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipstatsredirmultiplechoices.yfilter)
	|| ydk::is_set(csipstatsredirmovedperms.yfilter)
	|| ydk::is_set(csipstatsredirmovedtemps.yfilter)
	|| ydk::is_set(csipstatsredirseeothers.yfilter)
	|| ydk::is_set(csipstatsrediruseproxys.yfilter)
	|| ydk::is_set(csipstatsrediraltservices.yfilter)
	|| ydk::is_set(csipstatsredirmovedtempsins.yfilter)
	|| ydk::is_set(csipstatsredirmovedtempsouts.yfilter);
}

std::string CISCOSIPUAMIB::Csipstatsredirect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSIPUAMIB::Csipstatsredirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipStatsRedirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSIPUAMIB::Csipstatsredirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipstatsredirmultiplechoices.is_set || is_set(csipstatsredirmultiplechoices.yfilter)) leaf_name_data.push_back(csipstatsredirmultiplechoices.get_name_leafdata());
    if (csipstatsredirmovedperms.is_set || is_set(csipstatsredirmovedperms.yfilter)) leaf_name_data.push_back(csipstatsredirmovedperms.get_name_leafdata());
    if (csipstatsredirmovedtemps.is_set || is_set(csipstatsredirmovedtemps.yfilter)) leaf_name_data.push_back(csipstatsredirmovedtemps.get_name_leafdata());
    if (csipstatsredirseeothers.is_set || is_set(csipstatsredirseeothers.yfilter)) leaf_name_data.push_back(csipstatsredirseeothers.get_name_leafdata());
    if (csipstatsrediruseproxys.is_set || is_set(csipstatsrediruseproxys.yfilter)) leaf_name_data.push_back(csipstatsrediruseproxys.get_name_leafdata());
    if (csipstatsrediraltservices.is_set || is_set(csipstatsrediraltservices.yfilter)) leaf_name_data.push_back(csipstatsrediraltservices.get_name_leafdata());
    if (csipstatsredirmovedtempsins.is_set || is_set(csipstatsredirmovedtempsins.yfilter)) leaf_name_data.push_back(csipstatsredirmovedtempsins.get_name_leafdata());
    if (csipstatsredirmovedtempsouts.is_set || is_set(csipstatsredirmovedtempsouts.yfilter)) leaf_name_data.push_back(csipstatsredirmovedtempsouts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSIPUAMIB::Csipstatsredirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSIPUAMIB::Csipstatsredirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOSIPUAMIB::Csipstatsredirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cSipStatsRedirMultipleChoices")
    {
        csipstatsredirmultiplechoices = value;
        csipstatsredirmultiplechoices.value_namespace = name_space;
        csipstatsredirmultiplechoices.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsRedirMovedPerms")
    {
        csipstatsredirmovedperms = value;
        csipstatsredirmovedperms.value_namespace = name_space;
        csipstatsredirmovedperms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsRedirMovedTemps")
    {
        csipstatsredirmovedtemps = value;
        csipstatsredirmovedtemps.value_namespace = name_space;
        csipstatsredirmovedtemps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsRedirSeeOthers")
    {
        csipstatsredirseeothers = value;
        csipstatsredirseeothers.value_namespace = name_space;
        csipstatsredirseeothers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsRedirUseProxys")
    {
        csipstatsrediruseproxys = value;
        csipstatsrediruseproxys.value_namespace = name_space;
        csipstatsrediruseproxys.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsRedirAltServices")
    {
        csipstatsrediraltservices = value;
        csipstatsrediraltservices.value_namespace = name_space;
        csipstatsrediraltservices.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsRedirMovedTempsIns")
    {
        csipstatsredirmovedtempsins = value;
        csipstatsredirmovedtempsins.value_namespace = name_space;
        csipstatsredirmovedtempsins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsRedirMovedTempsOuts")
    {
        csipstatsredirmovedtempsouts = value;
        csipstatsredirmovedtempsouts.value_namespace = name_space;
        csipstatsredirmovedtempsouts.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSIPUAMIB::Csipstatsredirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cSipStatsRedirMultipleChoices")
    {
        csipstatsredirmultiplechoices.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRedirMovedPerms")
    {
        csipstatsredirmovedperms.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRedirMovedTemps")
    {
        csipstatsredirmovedtemps.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRedirSeeOthers")
    {
        csipstatsredirseeothers.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRedirUseProxys")
    {
        csipstatsrediruseproxys.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRedirAltServices")
    {
        csipstatsrediraltservices.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRedirMovedTempsIns")
    {
        csipstatsredirmovedtempsins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRedirMovedTempsOuts")
    {
        csipstatsredirmovedtempsouts.yfilter = yfilter;
    }
}

bool CISCOSIPUAMIB::Csipstatsredirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipStatsRedirMultipleChoices" || name == "cSipStatsRedirMovedPerms" || name == "cSipStatsRedirMovedTemps" || name == "cSipStatsRedirSeeOthers" || name == "cSipStatsRedirUseProxys" || name == "cSipStatsRedirAltServices" || name == "cSipStatsRedirMovedTempsIns" || name == "cSipStatsRedirMovedTempsOuts")
        return true;
    return false;
}

CISCOSIPUAMIB::Csipstatserrclient::Csipstatserrclient()
    :
    csipstatsclientbadrequestins{YType::uint32, "cSipStatsClientBadRequestIns"},
    csipstatsclientbadrequestouts{YType::uint32, "cSipStatsClientBadRequestOuts"},
    csipstatsclientunauthorizedins{YType::uint32, "cSipStatsClientUnauthorizedIns"},
    csipstatsclientunauthorizedouts{YType::uint32, "cSipStatsClientUnauthorizedOuts"},
    csipstatsclientpaymentreqdins{YType::uint32, "cSipStatsClientPaymentReqdIns"},
    csipstatsclientpaymentreqdouts{YType::uint32, "cSipStatsClientPaymentReqdOuts"},
    csipstatsclientforbiddenins{YType::uint32, "cSipStatsClientForbiddenIns"},
    csipstatsclientforbiddenouts{YType::uint32, "cSipStatsClientForbiddenOuts"},
    csipstatsclientnotfoundins{YType::uint32, "cSipStatsClientNotFoundIns"},
    csipstatsclientnotfoundouts{YType::uint32, "cSipStatsClientNotFoundOuts"},
    csipstatsclientmethnotallowedins{YType::uint32, "cSipStatsClientMethNotAllowedIns"},
    csipstatsclientmethnotallowedouts{YType::uint32, "cSipStatsClientMethNotAllowedOuts"},
    csipstatsclientnotacceptableins{YType::uint32, "cSipStatsClientNotAcceptableIns"},
    csipstatsclientnotacceptableouts{YType::uint32, "cSipStatsClientNotAcceptableOuts"},
    csipstatsclientproxyauthreqdins{YType::uint32, "cSipStatsClientProxyAuthReqdIns"},
    csipstatsclientproxyauthreqdouts{YType::uint32, "cSipStatsClientProxyAuthReqdOuts"},
    csipstatsclientreqtimeoutins{YType::uint32, "cSipStatsClientReqTimeoutIns"},
    csipstatsclientreqtimeoutouts{YType::uint32, "cSipStatsClientReqTimeoutOuts"},
    csipstatsclientconflictins{YType::uint32, "cSipStatsClientConflictIns"},
    csipstatsclientconflictouts{YType::uint32, "cSipStatsClientConflictOuts"},
    csipstatsclientgoneins{YType::uint32, "cSipStatsClientGoneIns"},
    csipstatsclientgoneouts{YType::uint32, "cSipStatsClientGoneOuts"},
    csipstatsclientlengthrequiredins{YType::uint32, "cSipStatsClientLengthRequiredIns"},
    csipstatsclientlengthrequiredouts{YType::uint32, "cSipStatsClientLengthRequiredOuts"},
    csipstatsclientreqenttoolargeins{YType::uint32, "cSipStatsClientReqEntTooLargeIns"},
    csipstatsclientreqenttoolargeouts{YType::uint32, "cSipStatsClientReqEntTooLargeOuts"},
    csipstatsclientrequritoolargeins{YType::uint32, "cSipStatsClientReqURITooLargeIns"},
    csipstatsclientrequritoolargeouts{YType::uint32, "cSipStatsClientReqURITooLargeOuts"},
    csipstatsclientnosupmediatypeins{YType::uint32, "cSipStatsClientNoSupMediaTypeIns"},
    csipstatsclientnosupmediatypeouts{YType::uint32, "cSipStatsClientNoSupMediaTypeOuts"},
    csipstatsclientbadextensionins{YType::uint32, "cSipStatsClientBadExtensionIns"},
    csipstatsclientbadextensionouts{YType::uint32, "cSipStatsClientBadExtensionOuts"},
    csipstatsclienttempnotavailins{YType::uint32, "cSipStatsClientTempNotAvailIns"},
    csipstatsclienttempnotavailouts{YType::uint32, "cSipStatsClientTempNotAvailOuts"},
    csipstatsclientcalllegnoexistins{YType::uint32, "cSipStatsClientCallLegNoExistIns"},
    csipstatsclientcalllegnoexistouts{YType::uint32, "cSipStatsClientCallLegNoExistOuts"},
    csipstatsclientloopdetectedins{YType::uint32, "cSipStatsClientLoopDetectedIns"},
    csipstatsclientloopdetectedouts{YType::uint32, "cSipStatsClientLoopDetectedOuts"},
    csipstatsclienttoomanyhopsins{YType::uint32, "cSipStatsClientTooManyHopsIns"},
    csipstatsclienttoomanyhopsouts{YType::uint32, "cSipStatsClientTooManyHopsOuts"},
    csipstatsclientaddrincompleteins{YType::uint32, "cSipStatsClientAddrIncompleteIns"},
    csipstatsclientaddrincompleteouts{YType::uint32, "cSipStatsClientAddrIncompleteOuts"},
    csipstatsclientambiguousins{YType::uint32, "cSipStatsClientAmbiguousIns"},
    csipstatsclientambiguousouts{YType::uint32, "cSipStatsClientAmbiguousOuts"},
    csipstatsclientbusyhereins{YType::uint32, "cSipStatsClientBusyHereIns"},
    csipstatsclientbusyhereouts{YType::uint32, "cSipStatsClientBusyHereOuts"},
    csipstatsclientreqtermins{YType::uint32, "cSipStatsClientReqTermIns"},
    csipstatsclientreqtermouts{YType::uint32, "cSipStatsClientReqTermOuts"},
    csipstatsclientnoaccepthereins{YType::uint32, "cSipStatsClientNoAcceptHereIns"},
    csipstatsclientnoaccepthereouts{YType::uint32, "cSipStatsClientNoAcceptHereOuts"},
    csipstatsclientbadeventins{YType::uint32, "cSipStatsClientBadEventIns"},
    csipstatsclientbadeventouts{YType::uint32, "cSipStatsClientBadEventOuts"},
    csipstatsclientsttoosmallins{YType::uint32, "cSipStatsClientSTTooSmallIns"},
    csipstatsclientsttoosmallouts{YType::uint32, "cSipStatsClientSTTooSmallOuts"},
    csipstatsclientreqpendingins{YType::uint32, "cSipStatsClientReqPendingIns"},
    csipstatsclientreqpendingouts{YType::uint32, "cSipStatsClientReqPendingOuts"}
{

    yang_name = "cSipStatsErrClient"; yang_parent_name = "CISCO-SIP-UA-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSIPUAMIB::Csipstatserrclient::~Csipstatserrclient()
{
}

bool CISCOSIPUAMIB::Csipstatserrclient::has_data() const
{
    return csipstatsclientbadrequestins.is_set
	|| csipstatsclientbadrequestouts.is_set
	|| csipstatsclientunauthorizedins.is_set
	|| csipstatsclientunauthorizedouts.is_set
	|| csipstatsclientpaymentreqdins.is_set
	|| csipstatsclientpaymentreqdouts.is_set
	|| csipstatsclientforbiddenins.is_set
	|| csipstatsclientforbiddenouts.is_set
	|| csipstatsclientnotfoundins.is_set
	|| csipstatsclientnotfoundouts.is_set
	|| csipstatsclientmethnotallowedins.is_set
	|| csipstatsclientmethnotallowedouts.is_set
	|| csipstatsclientnotacceptableins.is_set
	|| csipstatsclientnotacceptableouts.is_set
	|| csipstatsclientproxyauthreqdins.is_set
	|| csipstatsclientproxyauthreqdouts.is_set
	|| csipstatsclientreqtimeoutins.is_set
	|| csipstatsclientreqtimeoutouts.is_set
	|| csipstatsclientconflictins.is_set
	|| csipstatsclientconflictouts.is_set
	|| csipstatsclientgoneins.is_set
	|| csipstatsclientgoneouts.is_set
	|| csipstatsclientlengthrequiredins.is_set
	|| csipstatsclientlengthrequiredouts.is_set
	|| csipstatsclientreqenttoolargeins.is_set
	|| csipstatsclientreqenttoolargeouts.is_set
	|| csipstatsclientrequritoolargeins.is_set
	|| csipstatsclientrequritoolargeouts.is_set
	|| csipstatsclientnosupmediatypeins.is_set
	|| csipstatsclientnosupmediatypeouts.is_set
	|| csipstatsclientbadextensionins.is_set
	|| csipstatsclientbadextensionouts.is_set
	|| csipstatsclienttempnotavailins.is_set
	|| csipstatsclienttempnotavailouts.is_set
	|| csipstatsclientcalllegnoexistins.is_set
	|| csipstatsclientcalllegnoexistouts.is_set
	|| csipstatsclientloopdetectedins.is_set
	|| csipstatsclientloopdetectedouts.is_set
	|| csipstatsclienttoomanyhopsins.is_set
	|| csipstatsclienttoomanyhopsouts.is_set
	|| csipstatsclientaddrincompleteins.is_set
	|| csipstatsclientaddrincompleteouts.is_set
	|| csipstatsclientambiguousins.is_set
	|| csipstatsclientambiguousouts.is_set
	|| csipstatsclientbusyhereins.is_set
	|| csipstatsclientbusyhereouts.is_set
	|| csipstatsclientreqtermins.is_set
	|| csipstatsclientreqtermouts.is_set
	|| csipstatsclientnoaccepthereins.is_set
	|| csipstatsclientnoaccepthereouts.is_set
	|| csipstatsclientbadeventins.is_set
	|| csipstatsclientbadeventouts.is_set
	|| csipstatsclientsttoosmallins.is_set
	|| csipstatsclientsttoosmallouts.is_set
	|| csipstatsclientreqpendingins.is_set
	|| csipstatsclientreqpendingouts.is_set;
}

bool CISCOSIPUAMIB::Csipstatserrclient::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipstatsclientbadrequestins.yfilter)
	|| ydk::is_set(csipstatsclientbadrequestouts.yfilter)
	|| ydk::is_set(csipstatsclientunauthorizedins.yfilter)
	|| ydk::is_set(csipstatsclientunauthorizedouts.yfilter)
	|| ydk::is_set(csipstatsclientpaymentreqdins.yfilter)
	|| ydk::is_set(csipstatsclientpaymentreqdouts.yfilter)
	|| ydk::is_set(csipstatsclientforbiddenins.yfilter)
	|| ydk::is_set(csipstatsclientforbiddenouts.yfilter)
	|| ydk::is_set(csipstatsclientnotfoundins.yfilter)
	|| ydk::is_set(csipstatsclientnotfoundouts.yfilter)
	|| ydk::is_set(csipstatsclientmethnotallowedins.yfilter)
	|| ydk::is_set(csipstatsclientmethnotallowedouts.yfilter)
	|| ydk::is_set(csipstatsclientnotacceptableins.yfilter)
	|| ydk::is_set(csipstatsclientnotacceptableouts.yfilter)
	|| ydk::is_set(csipstatsclientproxyauthreqdins.yfilter)
	|| ydk::is_set(csipstatsclientproxyauthreqdouts.yfilter)
	|| ydk::is_set(csipstatsclientreqtimeoutins.yfilter)
	|| ydk::is_set(csipstatsclientreqtimeoutouts.yfilter)
	|| ydk::is_set(csipstatsclientconflictins.yfilter)
	|| ydk::is_set(csipstatsclientconflictouts.yfilter)
	|| ydk::is_set(csipstatsclientgoneins.yfilter)
	|| ydk::is_set(csipstatsclientgoneouts.yfilter)
	|| ydk::is_set(csipstatsclientlengthrequiredins.yfilter)
	|| ydk::is_set(csipstatsclientlengthrequiredouts.yfilter)
	|| ydk::is_set(csipstatsclientreqenttoolargeins.yfilter)
	|| ydk::is_set(csipstatsclientreqenttoolargeouts.yfilter)
	|| ydk::is_set(csipstatsclientrequritoolargeins.yfilter)
	|| ydk::is_set(csipstatsclientrequritoolargeouts.yfilter)
	|| ydk::is_set(csipstatsclientnosupmediatypeins.yfilter)
	|| ydk::is_set(csipstatsclientnosupmediatypeouts.yfilter)
	|| ydk::is_set(csipstatsclientbadextensionins.yfilter)
	|| ydk::is_set(csipstatsclientbadextensionouts.yfilter)
	|| ydk::is_set(csipstatsclienttempnotavailins.yfilter)
	|| ydk::is_set(csipstatsclienttempnotavailouts.yfilter)
	|| ydk::is_set(csipstatsclientcalllegnoexistins.yfilter)
	|| ydk::is_set(csipstatsclientcalllegnoexistouts.yfilter)
	|| ydk::is_set(csipstatsclientloopdetectedins.yfilter)
	|| ydk::is_set(csipstatsclientloopdetectedouts.yfilter)
	|| ydk::is_set(csipstatsclienttoomanyhopsins.yfilter)
	|| ydk::is_set(csipstatsclienttoomanyhopsouts.yfilter)
	|| ydk::is_set(csipstatsclientaddrincompleteins.yfilter)
	|| ydk::is_set(csipstatsclientaddrincompleteouts.yfilter)
	|| ydk::is_set(csipstatsclientambiguousins.yfilter)
	|| ydk::is_set(csipstatsclientambiguousouts.yfilter)
	|| ydk::is_set(csipstatsclientbusyhereins.yfilter)
	|| ydk::is_set(csipstatsclientbusyhereouts.yfilter)
	|| ydk::is_set(csipstatsclientreqtermins.yfilter)
	|| ydk::is_set(csipstatsclientreqtermouts.yfilter)
	|| ydk::is_set(csipstatsclientnoaccepthereins.yfilter)
	|| ydk::is_set(csipstatsclientnoaccepthereouts.yfilter)
	|| ydk::is_set(csipstatsclientbadeventins.yfilter)
	|| ydk::is_set(csipstatsclientbadeventouts.yfilter)
	|| ydk::is_set(csipstatsclientsttoosmallins.yfilter)
	|| ydk::is_set(csipstatsclientsttoosmallouts.yfilter)
	|| ydk::is_set(csipstatsclientreqpendingins.yfilter)
	|| ydk::is_set(csipstatsclientreqpendingouts.yfilter);
}

std::string CISCOSIPUAMIB::Csipstatserrclient::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSIPUAMIB::Csipstatserrclient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipStatsErrClient";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSIPUAMIB::Csipstatserrclient::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipstatsclientbadrequestins.is_set || is_set(csipstatsclientbadrequestins.yfilter)) leaf_name_data.push_back(csipstatsclientbadrequestins.get_name_leafdata());
    if (csipstatsclientbadrequestouts.is_set || is_set(csipstatsclientbadrequestouts.yfilter)) leaf_name_data.push_back(csipstatsclientbadrequestouts.get_name_leafdata());
    if (csipstatsclientunauthorizedins.is_set || is_set(csipstatsclientunauthorizedins.yfilter)) leaf_name_data.push_back(csipstatsclientunauthorizedins.get_name_leafdata());
    if (csipstatsclientunauthorizedouts.is_set || is_set(csipstatsclientunauthorizedouts.yfilter)) leaf_name_data.push_back(csipstatsclientunauthorizedouts.get_name_leafdata());
    if (csipstatsclientpaymentreqdins.is_set || is_set(csipstatsclientpaymentreqdins.yfilter)) leaf_name_data.push_back(csipstatsclientpaymentreqdins.get_name_leafdata());
    if (csipstatsclientpaymentreqdouts.is_set || is_set(csipstatsclientpaymentreqdouts.yfilter)) leaf_name_data.push_back(csipstatsclientpaymentreqdouts.get_name_leafdata());
    if (csipstatsclientforbiddenins.is_set || is_set(csipstatsclientforbiddenins.yfilter)) leaf_name_data.push_back(csipstatsclientforbiddenins.get_name_leafdata());
    if (csipstatsclientforbiddenouts.is_set || is_set(csipstatsclientforbiddenouts.yfilter)) leaf_name_data.push_back(csipstatsclientforbiddenouts.get_name_leafdata());
    if (csipstatsclientnotfoundins.is_set || is_set(csipstatsclientnotfoundins.yfilter)) leaf_name_data.push_back(csipstatsclientnotfoundins.get_name_leafdata());
    if (csipstatsclientnotfoundouts.is_set || is_set(csipstatsclientnotfoundouts.yfilter)) leaf_name_data.push_back(csipstatsclientnotfoundouts.get_name_leafdata());
    if (csipstatsclientmethnotallowedins.is_set || is_set(csipstatsclientmethnotallowedins.yfilter)) leaf_name_data.push_back(csipstatsclientmethnotallowedins.get_name_leafdata());
    if (csipstatsclientmethnotallowedouts.is_set || is_set(csipstatsclientmethnotallowedouts.yfilter)) leaf_name_data.push_back(csipstatsclientmethnotallowedouts.get_name_leafdata());
    if (csipstatsclientnotacceptableins.is_set || is_set(csipstatsclientnotacceptableins.yfilter)) leaf_name_data.push_back(csipstatsclientnotacceptableins.get_name_leafdata());
    if (csipstatsclientnotacceptableouts.is_set || is_set(csipstatsclientnotacceptableouts.yfilter)) leaf_name_data.push_back(csipstatsclientnotacceptableouts.get_name_leafdata());
    if (csipstatsclientproxyauthreqdins.is_set || is_set(csipstatsclientproxyauthreqdins.yfilter)) leaf_name_data.push_back(csipstatsclientproxyauthreqdins.get_name_leafdata());
    if (csipstatsclientproxyauthreqdouts.is_set || is_set(csipstatsclientproxyauthreqdouts.yfilter)) leaf_name_data.push_back(csipstatsclientproxyauthreqdouts.get_name_leafdata());
    if (csipstatsclientreqtimeoutins.is_set || is_set(csipstatsclientreqtimeoutins.yfilter)) leaf_name_data.push_back(csipstatsclientreqtimeoutins.get_name_leafdata());
    if (csipstatsclientreqtimeoutouts.is_set || is_set(csipstatsclientreqtimeoutouts.yfilter)) leaf_name_data.push_back(csipstatsclientreqtimeoutouts.get_name_leafdata());
    if (csipstatsclientconflictins.is_set || is_set(csipstatsclientconflictins.yfilter)) leaf_name_data.push_back(csipstatsclientconflictins.get_name_leafdata());
    if (csipstatsclientconflictouts.is_set || is_set(csipstatsclientconflictouts.yfilter)) leaf_name_data.push_back(csipstatsclientconflictouts.get_name_leafdata());
    if (csipstatsclientgoneins.is_set || is_set(csipstatsclientgoneins.yfilter)) leaf_name_data.push_back(csipstatsclientgoneins.get_name_leafdata());
    if (csipstatsclientgoneouts.is_set || is_set(csipstatsclientgoneouts.yfilter)) leaf_name_data.push_back(csipstatsclientgoneouts.get_name_leafdata());
    if (csipstatsclientlengthrequiredins.is_set || is_set(csipstatsclientlengthrequiredins.yfilter)) leaf_name_data.push_back(csipstatsclientlengthrequiredins.get_name_leafdata());
    if (csipstatsclientlengthrequiredouts.is_set || is_set(csipstatsclientlengthrequiredouts.yfilter)) leaf_name_data.push_back(csipstatsclientlengthrequiredouts.get_name_leafdata());
    if (csipstatsclientreqenttoolargeins.is_set || is_set(csipstatsclientreqenttoolargeins.yfilter)) leaf_name_data.push_back(csipstatsclientreqenttoolargeins.get_name_leafdata());
    if (csipstatsclientreqenttoolargeouts.is_set || is_set(csipstatsclientreqenttoolargeouts.yfilter)) leaf_name_data.push_back(csipstatsclientreqenttoolargeouts.get_name_leafdata());
    if (csipstatsclientrequritoolargeins.is_set || is_set(csipstatsclientrequritoolargeins.yfilter)) leaf_name_data.push_back(csipstatsclientrequritoolargeins.get_name_leafdata());
    if (csipstatsclientrequritoolargeouts.is_set || is_set(csipstatsclientrequritoolargeouts.yfilter)) leaf_name_data.push_back(csipstatsclientrequritoolargeouts.get_name_leafdata());
    if (csipstatsclientnosupmediatypeins.is_set || is_set(csipstatsclientnosupmediatypeins.yfilter)) leaf_name_data.push_back(csipstatsclientnosupmediatypeins.get_name_leafdata());
    if (csipstatsclientnosupmediatypeouts.is_set || is_set(csipstatsclientnosupmediatypeouts.yfilter)) leaf_name_data.push_back(csipstatsclientnosupmediatypeouts.get_name_leafdata());
    if (csipstatsclientbadextensionins.is_set || is_set(csipstatsclientbadextensionins.yfilter)) leaf_name_data.push_back(csipstatsclientbadextensionins.get_name_leafdata());
    if (csipstatsclientbadextensionouts.is_set || is_set(csipstatsclientbadextensionouts.yfilter)) leaf_name_data.push_back(csipstatsclientbadextensionouts.get_name_leafdata());
    if (csipstatsclienttempnotavailins.is_set || is_set(csipstatsclienttempnotavailins.yfilter)) leaf_name_data.push_back(csipstatsclienttempnotavailins.get_name_leafdata());
    if (csipstatsclienttempnotavailouts.is_set || is_set(csipstatsclienttempnotavailouts.yfilter)) leaf_name_data.push_back(csipstatsclienttempnotavailouts.get_name_leafdata());
    if (csipstatsclientcalllegnoexistins.is_set || is_set(csipstatsclientcalllegnoexistins.yfilter)) leaf_name_data.push_back(csipstatsclientcalllegnoexistins.get_name_leafdata());
    if (csipstatsclientcalllegnoexistouts.is_set || is_set(csipstatsclientcalllegnoexistouts.yfilter)) leaf_name_data.push_back(csipstatsclientcalllegnoexistouts.get_name_leafdata());
    if (csipstatsclientloopdetectedins.is_set || is_set(csipstatsclientloopdetectedins.yfilter)) leaf_name_data.push_back(csipstatsclientloopdetectedins.get_name_leafdata());
    if (csipstatsclientloopdetectedouts.is_set || is_set(csipstatsclientloopdetectedouts.yfilter)) leaf_name_data.push_back(csipstatsclientloopdetectedouts.get_name_leafdata());
    if (csipstatsclienttoomanyhopsins.is_set || is_set(csipstatsclienttoomanyhopsins.yfilter)) leaf_name_data.push_back(csipstatsclienttoomanyhopsins.get_name_leafdata());
    if (csipstatsclienttoomanyhopsouts.is_set || is_set(csipstatsclienttoomanyhopsouts.yfilter)) leaf_name_data.push_back(csipstatsclienttoomanyhopsouts.get_name_leafdata());
    if (csipstatsclientaddrincompleteins.is_set || is_set(csipstatsclientaddrincompleteins.yfilter)) leaf_name_data.push_back(csipstatsclientaddrincompleteins.get_name_leafdata());
    if (csipstatsclientaddrincompleteouts.is_set || is_set(csipstatsclientaddrincompleteouts.yfilter)) leaf_name_data.push_back(csipstatsclientaddrincompleteouts.get_name_leafdata());
    if (csipstatsclientambiguousins.is_set || is_set(csipstatsclientambiguousins.yfilter)) leaf_name_data.push_back(csipstatsclientambiguousins.get_name_leafdata());
    if (csipstatsclientambiguousouts.is_set || is_set(csipstatsclientambiguousouts.yfilter)) leaf_name_data.push_back(csipstatsclientambiguousouts.get_name_leafdata());
    if (csipstatsclientbusyhereins.is_set || is_set(csipstatsclientbusyhereins.yfilter)) leaf_name_data.push_back(csipstatsclientbusyhereins.get_name_leafdata());
    if (csipstatsclientbusyhereouts.is_set || is_set(csipstatsclientbusyhereouts.yfilter)) leaf_name_data.push_back(csipstatsclientbusyhereouts.get_name_leafdata());
    if (csipstatsclientreqtermins.is_set || is_set(csipstatsclientreqtermins.yfilter)) leaf_name_data.push_back(csipstatsclientreqtermins.get_name_leafdata());
    if (csipstatsclientreqtermouts.is_set || is_set(csipstatsclientreqtermouts.yfilter)) leaf_name_data.push_back(csipstatsclientreqtermouts.get_name_leafdata());
    if (csipstatsclientnoaccepthereins.is_set || is_set(csipstatsclientnoaccepthereins.yfilter)) leaf_name_data.push_back(csipstatsclientnoaccepthereins.get_name_leafdata());
    if (csipstatsclientnoaccepthereouts.is_set || is_set(csipstatsclientnoaccepthereouts.yfilter)) leaf_name_data.push_back(csipstatsclientnoaccepthereouts.get_name_leafdata());
    if (csipstatsclientbadeventins.is_set || is_set(csipstatsclientbadeventins.yfilter)) leaf_name_data.push_back(csipstatsclientbadeventins.get_name_leafdata());
    if (csipstatsclientbadeventouts.is_set || is_set(csipstatsclientbadeventouts.yfilter)) leaf_name_data.push_back(csipstatsclientbadeventouts.get_name_leafdata());
    if (csipstatsclientsttoosmallins.is_set || is_set(csipstatsclientsttoosmallins.yfilter)) leaf_name_data.push_back(csipstatsclientsttoosmallins.get_name_leafdata());
    if (csipstatsclientsttoosmallouts.is_set || is_set(csipstatsclientsttoosmallouts.yfilter)) leaf_name_data.push_back(csipstatsclientsttoosmallouts.get_name_leafdata());
    if (csipstatsclientreqpendingins.is_set || is_set(csipstatsclientreqpendingins.yfilter)) leaf_name_data.push_back(csipstatsclientreqpendingins.get_name_leafdata());
    if (csipstatsclientreqpendingouts.is_set || is_set(csipstatsclientreqpendingouts.yfilter)) leaf_name_data.push_back(csipstatsclientreqpendingouts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSIPUAMIB::Csipstatserrclient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSIPUAMIB::Csipstatserrclient::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOSIPUAMIB::Csipstatserrclient::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cSipStatsClientBadRequestIns")
    {
        csipstatsclientbadrequestins = value;
        csipstatsclientbadrequestins.value_namespace = name_space;
        csipstatsclientbadrequestins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientBadRequestOuts")
    {
        csipstatsclientbadrequestouts = value;
        csipstatsclientbadrequestouts.value_namespace = name_space;
        csipstatsclientbadrequestouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientUnauthorizedIns")
    {
        csipstatsclientunauthorizedins = value;
        csipstatsclientunauthorizedins.value_namespace = name_space;
        csipstatsclientunauthorizedins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientUnauthorizedOuts")
    {
        csipstatsclientunauthorizedouts = value;
        csipstatsclientunauthorizedouts.value_namespace = name_space;
        csipstatsclientunauthorizedouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientPaymentReqdIns")
    {
        csipstatsclientpaymentreqdins = value;
        csipstatsclientpaymentreqdins.value_namespace = name_space;
        csipstatsclientpaymentreqdins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientPaymentReqdOuts")
    {
        csipstatsclientpaymentreqdouts = value;
        csipstatsclientpaymentreqdouts.value_namespace = name_space;
        csipstatsclientpaymentreqdouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientForbiddenIns")
    {
        csipstatsclientforbiddenins = value;
        csipstatsclientforbiddenins.value_namespace = name_space;
        csipstatsclientforbiddenins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientForbiddenOuts")
    {
        csipstatsclientforbiddenouts = value;
        csipstatsclientforbiddenouts.value_namespace = name_space;
        csipstatsclientforbiddenouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientNotFoundIns")
    {
        csipstatsclientnotfoundins = value;
        csipstatsclientnotfoundins.value_namespace = name_space;
        csipstatsclientnotfoundins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientNotFoundOuts")
    {
        csipstatsclientnotfoundouts = value;
        csipstatsclientnotfoundouts.value_namespace = name_space;
        csipstatsclientnotfoundouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientMethNotAllowedIns")
    {
        csipstatsclientmethnotallowedins = value;
        csipstatsclientmethnotallowedins.value_namespace = name_space;
        csipstatsclientmethnotallowedins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientMethNotAllowedOuts")
    {
        csipstatsclientmethnotallowedouts = value;
        csipstatsclientmethnotallowedouts.value_namespace = name_space;
        csipstatsclientmethnotallowedouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientNotAcceptableIns")
    {
        csipstatsclientnotacceptableins = value;
        csipstatsclientnotacceptableins.value_namespace = name_space;
        csipstatsclientnotacceptableins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientNotAcceptableOuts")
    {
        csipstatsclientnotacceptableouts = value;
        csipstatsclientnotacceptableouts.value_namespace = name_space;
        csipstatsclientnotacceptableouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientProxyAuthReqdIns")
    {
        csipstatsclientproxyauthreqdins = value;
        csipstatsclientproxyauthreqdins.value_namespace = name_space;
        csipstatsclientproxyauthreqdins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientProxyAuthReqdOuts")
    {
        csipstatsclientproxyauthreqdouts = value;
        csipstatsclientproxyauthreqdouts.value_namespace = name_space;
        csipstatsclientproxyauthreqdouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientReqTimeoutIns")
    {
        csipstatsclientreqtimeoutins = value;
        csipstatsclientreqtimeoutins.value_namespace = name_space;
        csipstatsclientreqtimeoutins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientReqTimeoutOuts")
    {
        csipstatsclientreqtimeoutouts = value;
        csipstatsclientreqtimeoutouts.value_namespace = name_space;
        csipstatsclientreqtimeoutouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientConflictIns")
    {
        csipstatsclientconflictins = value;
        csipstatsclientconflictins.value_namespace = name_space;
        csipstatsclientconflictins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientConflictOuts")
    {
        csipstatsclientconflictouts = value;
        csipstatsclientconflictouts.value_namespace = name_space;
        csipstatsclientconflictouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientGoneIns")
    {
        csipstatsclientgoneins = value;
        csipstatsclientgoneins.value_namespace = name_space;
        csipstatsclientgoneins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientGoneOuts")
    {
        csipstatsclientgoneouts = value;
        csipstatsclientgoneouts.value_namespace = name_space;
        csipstatsclientgoneouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientLengthRequiredIns")
    {
        csipstatsclientlengthrequiredins = value;
        csipstatsclientlengthrequiredins.value_namespace = name_space;
        csipstatsclientlengthrequiredins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientLengthRequiredOuts")
    {
        csipstatsclientlengthrequiredouts = value;
        csipstatsclientlengthrequiredouts.value_namespace = name_space;
        csipstatsclientlengthrequiredouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientReqEntTooLargeIns")
    {
        csipstatsclientreqenttoolargeins = value;
        csipstatsclientreqenttoolargeins.value_namespace = name_space;
        csipstatsclientreqenttoolargeins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientReqEntTooLargeOuts")
    {
        csipstatsclientreqenttoolargeouts = value;
        csipstatsclientreqenttoolargeouts.value_namespace = name_space;
        csipstatsclientreqenttoolargeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientReqURITooLargeIns")
    {
        csipstatsclientrequritoolargeins = value;
        csipstatsclientrequritoolargeins.value_namespace = name_space;
        csipstatsclientrequritoolargeins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientReqURITooLargeOuts")
    {
        csipstatsclientrequritoolargeouts = value;
        csipstatsclientrequritoolargeouts.value_namespace = name_space;
        csipstatsclientrequritoolargeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientNoSupMediaTypeIns")
    {
        csipstatsclientnosupmediatypeins = value;
        csipstatsclientnosupmediatypeins.value_namespace = name_space;
        csipstatsclientnosupmediatypeins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientNoSupMediaTypeOuts")
    {
        csipstatsclientnosupmediatypeouts = value;
        csipstatsclientnosupmediatypeouts.value_namespace = name_space;
        csipstatsclientnosupmediatypeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientBadExtensionIns")
    {
        csipstatsclientbadextensionins = value;
        csipstatsclientbadextensionins.value_namespace = name_space;
        csipstatsclientbadextensionins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientBadExtensionOuts")
    {
        csipstatsclientbadextensionouts = value;
        csipstatsclientbadextensionouts.value_namespace = name_space;
        csipstatsclientbadextensionouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientTempNotAvailIns")
    {
        csipstatsclienttempnotavailins = value;
        csipstatsclienttempnotavailins.value_namespace = name_space;
        csipstatsclienttempnotavailins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientTempNotAvailOuts")
    {
        csipstatsclienttempnotavailouts = value;
        csipstatsclienttempnotavailouts.value_namespace = name_space;
        csipstatsclienttempnotavailouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientCallLegNoExistIns")
    {
        csipstatsclientcalllegnoexistins = value;
        csipstatsclientcalllegnoexistins.value_namespace = name_space;
        csipstatsclientcalllegnoexistins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientCallLegNoExistOuts")
    {
        csipstatsclientcalllegnoexistouts = value;
        csipstatsclientcalllegnoexistouts.value_namespace = name_space;
        csipstatsclientcalllegnoexistouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientLoopDetectedIns")
    {
        csipstatsclientloopdetectedins = value;
        csipstatsclientloopdetectedins.value_namespace = name_space;
        csipstatsclientloopdetectedins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientLoopDetectedOuts")
    {
        csipstatsclientloopdetectedouts = value;
        csipstatsclientloopdetectedouts.value_namespace = name_space;
        csipstatsclientloopdetectedouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientTooManyHopsIns")
    {
        csipstatsclienttoomanyhopsins = value;
        csipstatsclienttoomanyhopsins.value_namespace = name_space;
        csipstatsclienttoomanyhopsins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientTooManyHopsOuts")
    {
        csipstatsclienttoomanyhopsouts = value;
        csipstatsclienttoomanyhopsouts.value_namespace = name_space;
        csipstatsclienttoomanyhopsouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientAddrIncompleteIns")
    {
        csipstatsclientaddrincompleteins = value;
        csipstatsclientaddrincompleteins.value_namespace = name_space;
        csipstatsclientaddrincompleteins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientAddrIncompleteOuts")
    {
        csipstatsclientaddrincompleteouts = value;
        csipstatsclientaddrincompleteouts.value_namespace = name_space;
        csipstatsclientaddrincompleteouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientAmbiguousIns")
    {
        csipstatsclientambiguousins = value;
        csipstatsclientambiguousins.value_namespace = name_space;
        csipstatsclientambiguousins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientAmbiguousOuts")
    {
        csipstatsclientambiguousouts = value;
        csipstatsclientambiguousouts.value_namespace = name_space;
        csipstatsclientambiguousouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientBusyHereIns")
    {
        csipstatsclientbusyhereins = value;
        csipstatsclientbusyhereins.value_namespace = name_space;
        csipstatsclientbusyhereins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientBusyHereOuts")
    {
        csipstatsclientbusyhereouts = value;
        csipstatsclientbusyhereouts.value_namespace = name_space;
        csipstatsclientbusyhereouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientReqTermIns")
    {
        csipstatsclientreqtermins = value;
        csipstatsclientreqtermins.value_namespace = name_space;
        csipstatsclientreqtermins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientReqTermOuts")
    {
        csipstatsclientreqtermouts = value;
        csipstatsclientreqtermouts.value_namespace = name_space;
        csipstatsclientreqtermouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientNoAcceptHereIns")
    {
        csipstatsclientnoaccepthereins = value;
        csipstatsclientnoaccepthereins.value_namespace = name_space;
        csipstatsclientnoaccepthereins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientNoAcceptHereOuts")
    {
        csipstatsclientnoaccepthereouts = value;
        csipstatsclientnoaccepthereouts.value_namespace = name_space;
        csipstatsclientnoaccepthereouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientBadEventIns")
    {
        csipstatsclientbadeventins = value;
        csipstatsclientbadeventins.value_namespace = name_space;
        csipstatsclientbadeventins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientBadEventOuts")
    {
        csipstatsclientbadeventouts = value;
        csipstatsclientbadeventouts.value_namespace = name_space;
        csipstatsclientbadeventouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientSTTooSmallIns")
    {
        csipstatsclientsttoosmallins = value;
        csipstatsclientsttoosmallins.value_namespace = name_space;
        csipstatsclientsttoosmallins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientSTTooSmallOuts")
    {
        csipstatsclientsttoosmallouts = value;
        csipstatsclientsttoosmallouts.value_namespace = name_space;
        csipstatsclientsttoosmallouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientReqPendingIns")
    {
        csipstatsclientreqpendingins = value;
        csipstatsclientreqpendingins.value_namespace = name_space;
        csipstatsclientreqpendingins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsClientReqPendingOuts")
    {
        csipstatsclientreqpendingouts = value;
        csipstatsclientreqpendingouts.value_namespace = name_space;
        csipstatsclientreqpendingouts.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSIPUAMIB::Csipstatserrclient::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cSipStatsClientBadRequestIns")
    {
        csipstatsclientbadrequestins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientBadRequestOuts")
    {
        csipstatsclientbadrequestouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientUnauthorizedIns")
    {
        csipstatsclientunauthorizedins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientUnauthorizedOuts")
    {
        csipstatsclientunauthorizedouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientPaymentReqdIns")
    {
        csipstatsclientpaymentreqdins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientPaymentReqdOuts")
    {
        csipstatsclientpaymentreqdouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientForbiddenIns")
    {
        csipstatsclientforbiddenins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientForbiddenOuts")
    {
        csipstatsclientforbiddenouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientNotFoundIns")
    {
        csipstatsclientnotfoundins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientNotFoundOuts")
    {
        csipstatsclientnotfoundouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientMethNotAllowedIns")
    {
        csipstatsclientmethnotallowedins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientMethNotAllowedOuts")
    {
        csipstatsclientmethnotallowedouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientNotAcceptableIns")
    {
        csipstatsclientnotacceptableins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientNotAcceptableOuts")
    {
        csipstatsclientnotacceptableouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientProxyAuthReqdIns")
    {
        csipstatsclientproxyauthreqdins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientProxyAuthReqdOuts")
    {
        csipstatsclientproxyauthreqdouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientReqTimeoutIns")
    {
        csipstatsclientreqtimeoutins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientReqTimeoutOuts")
    {
        csipstatsclientreqtimeoutouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientConflictIns")
    {
        csipstatsclientconflictins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientConflictOuts")
    {
        csipstatsclientconflictouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientGoneIns")
    {
        csipstatsclientgoneins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientGoneOuts")
    {
        csipstatsclientgoneouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientLengthRequiredIns")
    {
        csipstatsclientlengthrequiredins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientLengthRequiredOuts")
    {
        csipstatsclientlengthrequiredouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientReqEntTooLargeIns")
    {
        csipstatsclientreqenttoolargeins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientReqEntTooLargeOuts")
    {
        csipstatsclientreqenttoolargeouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientReqURITooLargeIns")
    {
        csipstatsclientrequritoolargeins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientReqURITooLargeOuts")
    {
        csipstatsclientrequritoolargeouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientNoSupMediaTypeIns")
    {
        csipstatsclientnosupmediatypeins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientNoSupMediaTypeOuts")
    {
        csipstatsclientnosupmediatypeouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientBadExtensionIns")
    {
        csipstatsclientbadextensionins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientBadExtensionOuts")
    {
        csipstatsclientbadextensionouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientTempNotAvailIns")
    {
        csipstatsclienttempnotavailins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientTempNotAvailOuts")
    {
        csipstatsclienttempnotavailouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientCallLegNoExistIns")
    {
        csipstatsclientcalllegnoexistins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientCallLegNoExistOuts")
    {
        csipstatsclientcalllegnoexistouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientLoopDetectedIns")
    {
        csipstatsclientloopdetectedins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientLoopDetectedOuts")
    {
        csipstatsclientloopdetectedouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientTooManyHopsIns")
    {
        csipstatsclienttoomanyhopsins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientTooManyHopsOuts")
    {
        csipstatsclienttoomanyhopsouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientAddrIncompleteIns")
    {
        csipstatsclientaddrincompleteins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientAddrIncompleteOuts")
    {
        csipstatsclientaddrincompleteouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientAmbiguousIns")
    {
        csipstatsclientambiguousins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientAmbiguousOuts")
    {
        csipstatsclientambiguousouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientBusyHereIns")
    {
        csipstatsclientbusyhereins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientBusyHereOuts")
    {
        csipstatsclientbusyhereouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientReqTermIns")
    {
        csipstatsclientreqtermins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientReqTermOuts")
    {
        csipstatsclientreqtermouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientNoAcceptHereIns")
    {
        csipstatsclientnoaccepthereins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientNoAcceptHereOuts")
    {
        csipstatsclientnoaccepthereouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientBadEventIns")
    {
        csipstatsclientbadeventins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientBadEventOuts")
    {
        csipstatsclientbadeventouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientSTTooSmallIns")
    {
        csipstatsclientsttoosmallins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientSTTooSmallOuts")
    {
        csipstatsclientsttoosmallouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientReqPendingIns")
    {
        csipstatsclientreqpendingins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientReqPendingOuts")
    {
        csipstatsclientreqpendingouts.yfilter = yfilter;
    }
}

bool CISCOSIPUAMIB::Csipstatserrclient::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipStatsClientBadRequestIns" || name == "cSipStatsClientBadRequestOuts" || name == "cSipStatsClientUnauthorizedIns" || name == "cSipStatsClientUnauthorizedOuts" || name == "cSipStatsClientPaymentReqdIns" || name == "cSipStatsClientPaymentReqdOuts" || name == "cSipStatsClientForbiddenIns" || name == "cSipStatsClientForbiddenOuts" || name == "cSipStatsClientNotFoundIns" || name == "cSipStatsClientNotFoundOuts" || name == "cSipStatsClientMethNotAllowedIns" || name == "cSipStatsClientMethNotAllowedOuts" || name == "cSipStatsClientNotAcceptableIns" || name == "cSipStatsClientNotAcceptableOuts" || name == "cSipStatsClientProxyAuthReqdIns" || name == "cSipStatsClientProxyAuthReqdOuts" || name == "cSipStatsClientReqTimeoutIns" || name == "cSipStatsClientReqTimeoutOuts" || name == "cSipStatsClientConflictIns" || name == "cSipStatsClientConflictOuts" || name == "cSipStatsClientGoneIns" || name == "cSipStatsClientGoneOuts" || name == "cSipStatsClientLengthRequiredIns" || name == "cSipStatsClientLengthRequiredOuts" || name == "cSipStatsClientReqEntTooLargeIns" || name == "cSipStatsClientReqEntTooLargeOuts" || name == "cSipStatsClientReqURITooLargeIns" || name == "cSipStatsClientReqURITooLargeOuts" || name == "cSipStatsClientNoSupMediaTypeIns" || name == "cSipStatsClientNoSupMediaTypeOuts" || name == "cSipStatsClientBadExtensionIns" || name == "cSipStatsClientBadExtensionOuts" || name == "cSipStatsClientTempNotAvailIns" || name == "cSipStatsClientTempNotAvailOuts" || name == "cSipStatsClientCallLegNoExistIns" || name == "cSipStatsClientCallLegNoExistOuts" || name == "cSipStatsClientLoopDetectedIns" || name == "cSipStatsClientLoopDetectedOuts" || name == "cSipStatsClientTooManyHopsIns" || name == "cSipStatsClientTooManyHopsOuts" || name == "cSipStatsClientAddrIncompleteIns" || name == "cSipStatsClientAddrIncompleteOuts" || name == "cSipStatsClientAmbiguousIns" || name == "cSipStatsClientAmbiguousOuts" || name == "cSipStatsClientBusyHereIns" || name == "cSipStatsClientBusyHereOuts" || name == "cSipStatsClientReqTermIns" || name == "cSipStatsClientReqTermOuts" || name == "cSipStatsClientNoAcceptHereIns" || name == "cSipStatsClientNoAcceptHereOuts" || name == "cSipStatsClientBadEventIns" || name == "cSipStatsClientBadEventOuts" || name == "cSipStatsClientSTTooSmallIns" || name == "cSipStatsClientSTTooSmallOuts" || name == "cSipStatsClientReqPendingIns" || name == "cSipStatsClientReqPendingOuts")
        return true;
    return false;
}

CISCOSIPUAMIB::Csipstatserrserver::Csipstatserrserver()
    :
    csipstatsserverinterrorins{YType::uint32, "cSipStatsServerIntErrorIns"},
    csipstatsserverinterrorouts{YType::uint32, "cSipStatsServerIntErrorOuts"},
    csipstatsservernotimplementedins{YType::uint32, "cSipStatsServerNotImplementedIns"},
    csipstatsservernotimplementedouts{YType::uint32, "cSipStatsServerNotImplementedOuts"},
    csipstatsserverbadgatewayins{YType::uint32, "cSipStatsServerBadGatewayIns"},
    csipstatsserverbadgatewayouts{YType::uint32, "cSipStatsServerBadGatewayOuts"},
    csipstatsserverserviceunavailins{YType::uint32, "cSipStatsServerServiceUnavailIns"},
    csipstatsserverserviceunavailouts{YType::uint32, "cSipStatsServerServiceUnavailOuts"},
    csipstatsservergatewaytimeoutins{YType::uint32, "cSipStatsServerGatewayTimeoutIns"},
    csipstatsservergatewaytimeoutouts{YType::uint32, "cSipStatsServerGatewayTimeoutOuts"},
    csipstatsserverbadsipversionins{YType::uint32, "cSipStatsServerBadSipVersionIns"},
    csipstatsserverbadsipversionouts{YType::uint32, "cSipStatsServerBadSipVersionOuts"},
    csipstatsserverprecondfailureins{YType::uint32, "cSipStatsServerPrecondFailureIns"},
    csipstatsserverprecondfailureouts{YType::uint32, "cSipStatsServerPrecondFailureOuts"}
{

    yang_name = "cSipStatsErrServer"; yang_parent_name = "CISCO-SIP-UA-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSIPUAMIB::Csipstatserrserver::~Csipstatserrserver()
{
}

bool CISCOSIPUAMIB::Csipstatserrserver::has_data() const
{
    return csipstatsserverinterrorins.is_set
	|| csipstatsserverinterrorouts.is_set
	|| csipstatsservernotimplementedins.is_set
	|| csipstatsservernotimplementedouts.is_set
	|| csipstatsserverbadgatewayins.is_set
	|| csipstatsserverbadgatewayouts.is_set
	|| csipstatsserverserviceunavailins.is_set
	|| csipstatsserverserviceunavailouts.is_set
	|| csipstatsservergatewaytimeoutins.is_set
	|| csipstatsservergatewaytimeoutouts.is_set
	|| csipstatsserverbadsipversionins.is_set
	|| csipstatsserverbadsipversionouts.is_set
	|| csipstatsserverprecondfailureins.is_set
	|| csipstatsserverprecondfailureouts.is_set;
}

bool CISCOSIPUAMIB::Csipstatserrserver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipstatsserverinterrorins.yfilter)
	|| ydk::is_set(csipstatsserverinterrorouts.yfilter)
	|| ydk::is_set(csipstatsservernotimplementedins.yfilter)
	|| ydk::is_set(csipstatsservernotimplementedouts.yfilter)
	|| ydk::is_set(csipstatsserverbadgatewayins.yfilter)
	|| ydk::is_set(csipstatsserverbadgatewayouts.yfilter)
	|| ydk::is_set(csipstatsserverserviceunavailins.yfilter)
	|| ydk::is_set(csipstatsserverserviceunavailouts.yfilter)
	|| ydk::is_set(csipstatsservergatewaytimeoutins.yfilter)
	|| ydk::is_set(csipstatsservergatewaytimeoutouts.yfilter)
	|| ydk::is_set(csipstatsserverbadsipversionins.yfilter)
	|| ydk::is_set(csipstatsserverbadsipversionouts.yfilter)
	|| ydk::is_set(csipstatsserverprecondfailureins.yfilter)
	|| ydk::is_set(csipstatsserverprecondfailureouts.yfilter);
}

std::string CISCOSIPUAMIB::Csipstatserrserver::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSIPUAMIB::Csipstatserrserver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipStatsErrServer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSIPUAMIB::Csipstatserrserver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipstatsserverinterrorins.is_set || is_set(csipstatsserverinterrorins.yfilter)) leaf_name_data.push_back(csipstatsserverinterrorins.get_name_leafdata());
    if (csipstatsserverinterrorouts.is_set || is_set(csipstatsserverinterrorouts.yfilter)) leaf_name_data.push_back(csipstatsserverinterrorouts.get_name_leafdata());
    if (csipstatsservernotimplementedins.is_set || is_set(csipstatsservernotimplementedins.yfilter)) leaf_name_data.push_back(csipstatsservernotimplementedins.get_name_leafdata());
    if (csipstatsservernotimplementedouts.is_set || is_set(csipstatsservernotimplementedouts.yfilter)) leaf_name_data.push_back(csipstatsservernotimplementedouts.get_name_leafdata());
    if (csipstatsserverbadgatewayins.is_set || is_set(csipstatsserverbadgatewayins.yfilter)) leaf_name_data.push_back(csipstatsserverbadgatewayins.get_name_leafdata());
    if (csipstatsserverbadgatewayouts.is_set || is_set(csipstatsserverbadgatewayouts.yfilter)) leaf_name_data.push_back(csipstatsserverbadgatewayouts.get_name_leafdata());
    if (csipstatsserverserviceunavailins.is_set || is_set(csipstatsserverserviceunavailins.yfilter)) leaf_name_data.push_back(csipstatsserverserviceunavailins.get_name_leafdata());
    if (csipstatsserverserviceunavailouts.is_set || is_set(csipstatsserverserviceunavailouts.yfilter)) leaf_name_data.push_back(csipstatsserverserviceunavailouts.get_name_leafdata());
    if (csipstatsservergatewaytimeoutins.is_set || is_set(csipstatsservergatewaytimeoutins.yfilter)) leaf_name_data.push_back(csipstatsservergatewaytimeoutins.get_name_leafdata());
    if (csipstatsservergatewaytimeoutouts.is_set || is_set(csipstatsservergatewaytimeoutouts.yfilter)) leaf_name_data.push_back(csipstatsservergatewaytimeoutouts.get_name_leafdata());
    if (csipstatsserverbadsipversionins.is_set || is_set(csipstatsserverbadsipversionins.yfilter)) leaf_name_data.push_back(csipstatsserverbadsipversionins.get_name_leafdata());
    if (csipstatsserverbadsipversionouts.is_set || is_set(csipstatsserverbadsipversionouts.yfilter)) leaf_name_data.push_back(csipstatsserverbadsipversionouts.get_name_leafdata());
    if (csipstatsserverprecondfailureins.is_set || is_set(csipstatsserverprecondfailureins.yfilter)) leaf_name_data.push_back(csipstatsserverprecondfailureins.get_name_leafdata());
    if (csipstatsserverprecondfailureouts.is_set || is_set(csipstatsserverprecondfailureouts.yfilter)) leaf_name_data.push_back(csipstatsserverprecondfailureouts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSIPUAMIB::Csipstatserrserver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSIPUAMIB::Csipstatserrserver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOSIPUAMIB::Csipstatserrserver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cSipStatsServerIntErrorIns")
    {
        csipstatsserverinterrorins = value;
        csipstatsserverinterrorins.value_namespace = name_space;
        csipstatsserverinterrorins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsServerIntErrorOuts")
    {
        csipstatsserverinterrorouts = value;
        csipstatsserverinterrorouts.value_namespace = name_space;
        csipstatsserverinterrorouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsServerNotImplementedIns")
    {
        csipstatsservernotimplementedins = value;
        csipstatsservernotimplementedins.value_namespace = name_space;
        csipstatsservernotimplementedins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsServerNotImplementedOuts")
    {
        csipstatsservernotimplementedouts = value;
        csipstatsservernotimplementedouts.value_namespace = name_space;
        csipstatsservernotimplementedouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsServerBadGatewayIns")
    {
        csipstatsserverbadgatewayins = value;
        csipstatsserverbadgatewayins.value_namespace = name_space;
        csipstatsserverbadgatewayins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsServerBadGatewayOuts")
    {
        csipstatsserverbadgatewayouts = value;
        csipstatsserverbadgatewayouts.value_namespace = name_space;
        csipstatsserverbadgatewayouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsServerServiceUnavailIns")
    {
        csipstatsserverserviceunavailins = value;
        csipstatsserverserviceunavailins.value_namespace = name_space;
        csipstatsserverserviceunavailins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsServerServiceUnavailOuts")
    {
        csipstatsserverserviceunavailouts = value;
        csipstatsserverserviceunavailouts.value_namespace = name_space;
        csipstatsserverserviceunavailouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsServerGatewayTimeoutIns")
    {
        csipstatsservergatewaytimeoutins = value;
        csipstatsservergatewaytimeoutins.value_namespace = name_space;
        csipstatsservergatewaytimeoutins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsServerGatewayTimeoutOuts")
    {
        csipstatsservergatewaytimeoutouts = value;
        csipstatsservergatewaytimeoutouts.value_namespace = name_space;
        csipstatsservergatewaytimeoutouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsServerBadSipVersionIns")
    {
        csipstatsserverbadsipversionins = value;
        csipstatsserverbadsipversionins.value_namespace = name_space;
        csipstatsserverbadsipversionins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsServerBadSipVersionOuts")
    {
        csipstatsserverbadsipversionouts = value;
        csipstatsserverbadsipversionouts.value_namespace = name_space;
        csipstatsserverbadsipversionouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsServerPrecondFailureIns")
    {
        csipstatsserverprecondfailureins = value;
        csipstatsserverprecondfailureins.value_namespace = name_space;
        csipstatsserverprecondfailureins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsServerPrecondFailureOuts")
    {
        csipstatsserverprecondfailureouts = value;
        csipstatsserverprecondfailureouts.value_namespace = name_space;
        csipstatsserverprecondfailureouts.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSIPUAMIB::Csipstatserrserver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cSipStatsServerIntErrorIns")
    {
        csipstatsserverinterrorins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsServerIntErrorOuts")
    {
        csipstatsserverinterrorouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsServerNotImplementedIns")
    {
        csipstatsservernotimplementedins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsServerNotImplementedOuts")
    {
        csipstatsservernotimplementedouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsServerBadGatewayIns")
    {
        csipstatsserverbadgatewayins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsServerBadGatewayOuts")
    {
        csipstatsserverbadgatewayouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsServerServiceUnavailIns")
    {
        csipstatsserverserviceunavailins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsServerServiceUnavailOuts")
    {
        csipstatsserverserviceunavailouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsServerGatewayTimeoutIns")
    {
        csipstatsservergatewaytimeoutins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsServerGatewayTimeoutOuts")
    {
        csipstatsservergatewaytimeoutouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsServerBadSipVersionIns")
    {
        csipstatsserverbadsipversionins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsServerBadSipVersionOuts")
    {
        csipstatsserverbadsipversionouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsServerPrecondFailureIns")
    {
        csipstatsserverprecondfailureins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsServerPrecondFailureOuts")
    {
        csipstatsserverprecondfailureouts.yfilter = yfilter;
    }
}

bool CISCOSIPUAMIB::Csipstatserrserver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipStatsServerIntErrorIns" || name == "cSipStatsServerIntErrorOuts" || name == "cSipStatsServerNotImplementedIns" || name == "cSipStatsServerNotImplementedOuts" || name == "cSipStatsServerBadGatewayIns" || name == "cSipStatsServerBadGatewayOuts" || name == "cSipStatsServerServiceUnavailIns" || name == "cSipStatsServerServiceUnavailOuts" || name == "cSipStatsServerGatewayTimeoutIns" || name == "cSipStatsServerGatewayTimeoutOuts" || name == "cSipStatsServerBadSipVersionIns" || name == "cSipStatsServerBadSipVersionOuts" || name == "cSipStatsServerPrecondFailureIns" || name == "cSipStatsServerPrecondFailureOuts")
        return true;
    return false;
}

CISCOSIPUAMIB::Csipstatsglobalfail::Csipstatsglobalfail()
    :
    csipstatsglobalbusyeverywhereins{YType::uint32, "cSipStatsGlobalBusyEverywhereIns"},
    csipstatsglobalbusyeverywhereouts{YType::uint32, "cSipStatsGlobalBusyEverywhereOuts"},
    csipstatsglobaldeclineins{YType::uint32, "cSipStatsGlobalDeclineIns"},
    csipstatsglobaldeclineouts{YType::uint32, "cSipStatsGlobalDeclineOuts"},
    csipstatsglobalnotanywhereins{YType::uint32, "cSipStatsGlobalNotAnywhereIns"},
    csipstatsglobalnotanywhereouts{YType::uint32, "cSipStatsGlobalNotAnywhereOuts"},
    csipstatsglobalnotacceptableins{YType::uint32, "cSipStatsGlobalNotAcceptableIns"},
    csipstatsglobalnotacceptableouts{YType::uint32, "cSipStatsGlobalNotAcceptableOuts"}
{

    yang_name = "cSipStatsGlobalFail"; yang_parent_name = "CISCO-SIP-UA-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSIPUAMIB::Csipstatsglobalfail::~Csipstatsglobalfail()
{
}

bool CISCOSIPUAMIB::Csipstatsglobalfail::has_data() const
{
    return csipstatsglobalbusyeverywhereins.is_set
	|| csipstatsglobalbusyeverywhereouts.is_set
	|| csipstatsglobaldeclineins.is_set
	|| csipstatsglobaldeclineouts.is_set
	|| csipstatsglobalnotanywhereins.is_set
	|| csipstatsglobalnotanywhereouts.is_set
	|| csipstatsglobalnotacceptableins.is_set
	|| csipstatsglobalnotacceptableouts.is_set;
}

bool CISCOSIPUAMIB::Csipstatsglobalfail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipstatsglobalbusyeverywhereins.yfilter)
	|| ydk::is_set(csipstatsglobalbusyeverywhereouts.yfilter)
	|| ydk::is_set(csipstatsglobaldeclineins.yfilter)
	|| ydk::is_set(csipstatsglobaldeclineouts.yfilter)
	|| ydk::is_set(csipstatsglobalnotanywhereins.yfilter)
	|| ydk::is_set(csipstatsglobalnotanywhereouts.yfilter)
	|| ydk::is_set(csipstatsglobalnotacceptableins.yfilter)
	|| ydk::is_set(csipstatsglobalnotacceptableouts.yfilter);
}

std::string CISCOSIPUAMIB::Csipstatsglobalfail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSIPUAMIB::Csipstatsglobalfail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipStatsGlobalFail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSIPUAMIB::Csipstatsglobalfail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipstatsglobalbusyeverywhereins.is_set || is_set(csipstatsglobalbusyeverywhereins.yfilter)) leaf_name_data.push_back(csipstatsglobalbusyeverywhereins.get_name_leafdata());
    if (csipstatsglobalbusyeverywhereouts.is_set || is_set(csipstatsglobalbusyeverywhereouts.yfilter)) leaf_name_data.push_back(csipstatsglobalbusyeverywhereouts.get_name_leafdata());
    if (csipstatsglobaldeclineins.is_set || is_set(csipstatsglobaldeclineins.yfilter)) leaf_name_data.push_back(csipstatsglobaldeclineins.get_name_leafdata());
    if (csipstatsglobaldeclineouts.is_set || is_set(csipstatsglobaldeclineouts.yfilter)) leaf_name_data.push_back(csipstatsglobaldeclineouts.get_name_leafdata());
    if (csipstatsglobalnotanywhereins.is_set || is_set(csipstatsglobalnotanywhereins.yfilter)) leaf_name_data.push_back(csipstatsglobalnotanywhereins.get_name_leafdata());
    if (csipstatsglobalnotanywhereouts.is_set || is_set(csipstatsglobalnotanywhereouts.yfilter)) leaf_name_data.push_back(csipstatsglobalnotanywhereouts.get_name_leafdata());
    if (csipstatsglobalnotacceptableins.is_set || is_set(csipstatsglobalnotacceptableins.yfilter)) leaf_name_data.push_back(csipstatsglobalnotacceptableins.get_name_leafdata());
    if (csipstatsglobalnotacceptableouts.is_set || is_set(csipstatsglobalnotacceptableouts.yfilter)) leaf_name_data.push_back(csipstatsglobalnotacceptableouts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSIPUAMIB::Csipstatsglobalfail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSIPUAMIB::Csipstatsglobalfail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOSIPUAMIB::Csipstatsglobalfail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cSipStatsGlobalBusyEverywhereIns")
    {
        csipstatsglobalbusyeverywhereins = value;
        csipstatsglobalbusyeverywhereins.value_namespace = name_space;
        csipstatsglobalbusyeverywhereins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsGlobalBusyEverywhereOuts")
    {
        csipstatsglobalbusyeverywhereouts = value;
        csipstatsglobalbusyeverywhereouts.value_namespace = name_space;
        csipstatsglobalbusyeverywhereouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsGlobalDeclineIns")
    {
        csipstatsglobaldeclineins = value;
        csipstatsglobaldeclineins.value_namespace = name_space;
        csipstatsglobaldeclineins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsGlobalDeclineOuts")
    {
        csipstatsglobaldeclineouts = value;
        csipstatsglobaldeclineouts.value_namespace = name_space;
        csipstatsglobaldeclineouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsGlobalNotAnywhereIns")
    {
        csipstatsglobalnotanywhereins = value;
        csipstatsglobalnotanywhereins.value_namespace = name_space;
        csipstatsglobalnotanywhereins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsGlobalNotAnywhereOuts")
    {
        csipstatsglobalnotanywhereouts = value;
        csipstatsglobalnotanywhereouts.value_namespace = name_space;
        csipstatsglobalnotanywhereouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsGlobalNotAcceptableIns")
    {
        csipstatsglobalnotacceptableins = value;
        csipstatsglobalnotacceptableins.value_namespace = name_space;
        csipstatsglobalnotacceptableins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsGlobalNotAcceptableOuts")
    {
        csipstatsglobalnotacceptableouts = value;
        csipstatsglobalnotacceptableouts.value_namespace = name_space;
        csipstatsglobalnotacceptableouts.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSIPUAMIB::Csipstatsglobalfail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cSipStatsGlobalBusyEverywhereIns")
    {
        csipstatsglobalbusyeverywhereins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsGlobalBusyEverywhereOuts")
    {
        csipstatsglobalbusyeverywhereouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsGlobalDeclineIns")
    {
        csipstatsglobaldeclineins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsGlobalDeclineOuts")
    {
        csipstatsglobaldeclineouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsGlobalNotAnywhereIns")
    {
        csipstatsglobalnotanywhereins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsGlobalNotAnywhereOuts")
    {
        csipstatsglobalnotanywhereouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsGlobalNotAcceptableIns")
    {
        csipstatsglobalnotacceptableins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsGlobalNotAcceptableOuts")
    {
        csipstatsglobalnotacceptableouts.yfilter = yfilter;
    }
}

bool CISCOSIPUAMIB::Csipstatsglobalfail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipStatsGlobalBusyEverywhereIns" || name == "cSipStatsGlobalBusyEverywhereOuts" || name == "cSipStatsGlobalDeclineIns" || name == "cSipStatsGlobalDeclineOuts" || name == "cSipStatsGlobalNotAnywhereIns" || name == "cSipStatsGlobalNotAnywhereOuts" || name == "cSipStatsGlobalNotAcceptableIns" || name == "cSipStatsGlobalNotAcceptableOuts")
        return true;
    return false;
}

CISCOSIPUAMIB::Csipstatstraffic::Csipstatstraffic()
    :
    csipstatstrafficinviteins{YType::uint32, "cSipStatsTrafficInviteIns"},
    csipstatstrafficinviteouts{YType::uint32, "cSipStatsTrafficInviteOuts"},
    csipstatstrafficackins{YType::uint32, "cSipStatsTrafficAckIns"},
    csipstatstrafficackouts{YType::uint32, "cSipStatsTrafficAckOuts"},
    csipstatstrafficbyeins{YType::uint32, "cSipStatsTrafficByeIns"},
    csipstatstrafficbyeouts{YType::uint32, "cSipStatsTrafficByeOuts"},
    csipstatstrafficcancelins{YType::uint32, "cSipStatsTrafficCancelIns"},
    csipstatstrafficcancelouts{YType::uint32, "cSipStatsTrafficCancelOuts"},
    csipstatstrafficoptionsins{YType::uint32, "cSipStatsTrafficOptionsIns"},
    csipstatstrafficoptionsouts{YType::uint32, "cSipStatsTrafficOptionsOuts"},
    csipstatstrafficregisterins{YType::uint32, "cSipStatsTrafficRegisterIns"},
    csipstatstrafficregisterouts{YType::uint32, "cSipStatsTrafficRegisterOuts"},
    csipstatstrafficcometins{YType::uint32, "cSipStatsTrafficCometIns"},
    csipstatstrafficcometouts{YType::uint32, "cSipStatsTrafficCometOuts"},
    csipstatstrafficprackins{YType::uint32, "cSipStatsTrafficPrackIns"},
    csipstatstrafficprackouts{YType::uint32, "cSipStatsTrafficPrackOuts"},
    csipstatstrafficreferins{YType::uint32, "cSipStatsTrafficReferIns"},
    csipstatstrafficreferouts{YType::uint32, "cSipStatsTrafficReferOuts"},
    csipstatstrafficnotifyins{YType::uint32, "cSipStatsTrafficNotifyIns"},
    csipstatstrafficnotifyouts{YType::uint32, "cSipStatsTrafficNotifyOuts"},
    csipstatstrafficinfoins{YType::uint32, "cSipStatsTrafficInfoIns"},
    csipstatstrafficinfoouts{YType::uint32, "cSipStatsTrafficInfoOuts"},
    csipstatstrafficsubscribeins{YType::uint32, "cSipStatsTrafficSubscribeIns"},
    csipstatstrafficsubscribeouts{YType::uint32, "cSipStatsTrafficSubscribeOuts"},
    csipstatstrafficupdateins{YType::uint32, "cSipStatsTrafficUpdateIns"},
    csipstatstrafficupdateouts{YType::uint32, "cSipStatsTrafficUpdateOuts"}
{

    yang_name = "cSipStatsTraffic"; yang_parent_name = "CISCO-SIP-UA-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSIPUAMIB::Csipstatstraffic::~Csipstatstraffic()
{
}

bool CISCOSIPUAMIB::Csipstatstraffic::has_data() const
{
    return csipstatstrafficinviteins.is_set
	|| csipstatstrafficinviteouts.is_set
	|| csipstatstrafficackins.is_set
	|| csipstatstrafficackouts.is_set
	|| csipstatstrafficbyeins.is_set
	|| csipstatstrafficbyeouts.is_set
	|| csipstatstrafficcancelins.is_set
	|| csipstatstrafficcancelouts.is_set
	|| csipstatstrafficoptionsins.is_set
	|| csipstatstrafficoptionsouts.is_set
	|| csipstatstrafficregisterins.is_set
	|| csipstatstrafficregisterouts.is_set
	|| csipstatstrafficcometins.is_set
	|| csipstatstrafficcometouts.is_set
	|| csipstatstrafficprackins.is_set
	|| csipstatstrafficprackouts.is_set
	|| csipstatstrafficreferins.is_set
	|| csipstatstrafficreferouts.is_set
	|| csipstatstrafficnotifyins.is_set
	|| csipstatstrafficnotifyouts.is_set
	|| csipstatstrafficinfoins.is_set
	|| csipstatstrafficinfoouts.is_set
	|| csipstatstrafficsubscribeins.is_set
	|| csipstatstrafficsubscribeouts.is_set
	|| csipstatstrafficupdateins.is_set
	|| csipstatstrafficupdateouts.is_set;
}

bool CISCOSIPUAMIB::Csipstatstraffic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipstatstrafficinviteins.yfilter)
	|| ydk::is_set(csipstatstrafficinviteouts.yfilter)
	|| ydk::is_set(csipstatstrafficackins.yfilter)
	|| ydk::is_set(csipstatstrafficackouts.yfilter)
	|| ydk::is_set(csipstatstrafficbyeins.yfilter)
	|| ydk::is_set(csipstatstrafficbyeouts.yfilter)
	|| ydk::is_set(csipstatstrafficcancelins.yfilter)
	|| ydk::is_set(csipstatstrafficcancelouts.yfilter)
	|| ydk::is_set(csipstatstrafficoptionsins.yfilter)
	|| ydk::is_set(csipstatstrafficoptionsouts.yfilter)
	|| ydk::is_set(csipstatstrafficregisterins.yfilter)
	|| ydk::is_set(csipstatstrafficregisterouts.yfilter)
	|| ydk::is_set(csipstatstrafficcometins.yfilter)
	|| ydk::is_set(csipstatstrafficcometouts.yfilter)
	|| ydk::is_set(csipstatstrafficprackins.yfilter)
	|| ydk::is_set(csipstatstrafficprackouts.yfilter)
	|| ydk::is_set(csipstatstrafficreferins.yfilter)
	|| ydk::is_set(csipstatstrafficreferouts.yfilter)
	|| ydk::is_set(csipstatstrafficnotifyins.yfilter)
	|| ydk::is_set(csipstatstrafficnotifyouts.yfilter)
	|| ydk::is_set(csipstatstrafficinfoins.yfilter)
	|| ydk::is_set(csipstatstrafficinfoouts.yfilter)
	|| ydk::is_set(csipstatstrafficsubscribeins.yfilter)
	|| ydk::is_set(csipstatstrafficsubscribeouts.yfilter)
	|| ydk::is_set(csipstatstrafficupdateins.yfilter)
	|| ydk::is_set(csipstatstrafficupdateouts.yfilter);
}

std::string CISCOSIPUAMIB::Csipstatstraffic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSIPUAMIB::Csipstatstraffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipStatsTraffic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSIPUAMIB::Csipstatstraffic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipstatstrafficinviteins.is_set || is_set(csipstatstrafficinviteins.yfilter)) leaf_name_data.push_back(csipstatstrafficinviteins.get_name_leafdata());
    if (csipstatstrafficinviteouts.is_set || is_set(csipstatstrafficinviteouts.yfilter)) leaf_name_data.push_back(csipstatstrafficinviteouts.get_name_leafdata());
    if (csipstatstrafficackins.is_set || is_set(csipstatstrafficackins.yfilter)) leaf_name_data.push_back(csipstatstrafficackins.get_name_leafdata());
    if (csipstatstrafficackouts.is_set || is_set(csipstatstrafficackouts.yfilter)) leaf_name_data.push_back(csipstatstrafficackouts.get_name_leafdata());
    if (csipstatstrafficbyeins.is_set || is_set(csipstatstrafficbyeins.yfilter)) leaf_name_data.push_back(csipstatstrafficbyeins.get_name_leafdata());
    if (csipstatstrafficbyeouts.is_set || is_set(csipstatstrafficbyeouts.yfilter)) leaf_name_data.push_back(csipstatstrafficbyeouts.get_name_leafdata());
    if (csipstatstrafficcancelins.is_set || is_set(csipstatstrafficcancelins.yfilter)) leaf_name_data.push_back(csipstatstrafficcancelins.get_name_leafdata());
    if (csipstatstrafficcancelouts.is_set || is_set(csipstatstrafficcancelouts.yfilter)) leaf_name_data.push_back(csipstatstrafficcancelouts.get_name_leafdata());
    if (csipstatstrafficoptionsins.is_set || is_set(csipstatstrafficoptionsins.yfilter)) leaf_name_data.push_back(csipstatstrafficoptionsins.get_name_leafdata());
    if (csipstatstrafficoptionsouts.is_set || is_set(csipstatstrafficoptionsouts.yfilter)) leaf_name_data.push_back(csipstatstrafficoptionsouts.get_name_leafdata());
    if (csipstatstrafficregisterins.is_set || is_set(csipstatstrafficregisterins.yfilter)) leaf_name_data.push_back(csipstatstrafficregisterins.get_name_leafdata());
    if (csipstatstrafficregisterouts.is_set || is_set(csipstatstrafficregisterouts.yfilter)) leaf_name_data.push_back(csipstatstrafficregisterouts.get_name_leafdata());
    if (csipstatstrafficcometins.is_set || is_set(csipstatstrafficcometins.yfilter)) leaf_name_data.push_back(csipstatstrafficcometins.get_name_leafdata());
    if (csipstatstrafficcometouts.is_set || is_set(csipstatstrafficcometouts.yfilter)) leaf_name_data.push_back(csipstatstrafficcometouts.get_name_leafdata());
    if (csipstatstrafficprackins.is_set || is_set(csipstatstrafficprackins.yfilter)) leaf_name_data.push_back(csipstatstrafficprackins.get_name_leafdata());
    if (csipstatstrafficprackouts.is_set || is_set(csipstatstrafficprackouts.yfilter)) leaf_name_data.push_back(csipstatstrafficprackouts.get_name_leafdata());
    if (csipstatstrafficreferins.is_set || is_set(csipstatstrafficreferins.yfilter)) leaf_name_data.push_back(csipstatstrafficreferins.get_name_leafdata());
    if (csipstatstrafficreferouts.is_set || is_set(csipstatstrafficreferouts.yfilter)) leaf_name_data.push_back(csipstatstrafficreferouts.get_name_leafdata());
    if (csipstatstrafficnotifyins.is_set || is_set(csipstatstrafficnotifyins.yfilter)) leaf_name_data.push_back(csipstatstrafficnotifyins.get_name_leafdata());
    if (csipstatstrafficnotifyouts.is_set || is_set(csipstatstrafficnotifyouts.yfilter)) leaf_name_data.push_back(csipstatstrafficnotifyouts.get_name_leafdata());
    if (csipstatstrafficinfoins.is_set || is_set(csipstatstrafficinfoins.yfilter)) leaf_name_data.push_back(csipstatstrafficinfoins.get_name_leafdata());
    if (csipstatstrafficinfoouts.is_set || is_set(csipstatstrafficinfoouts.yfilter)) leaf_name_data.push_back(csipstatstrafficinfoouts.get_name_leafdata());
    if (csipstatstrafficsubscribeins.is_set || is_set(csipstatstrafficsubscribeins.yfilter)) leaf_name_data.push_back(csipstatstrafficsubscribeins.get_name_leafdata());
    if (csipstatstrafficsubscribeouts.is_set || is_set(csipstatstrafficsubscribeouts.yfilter)) leaf_name_data.push_back(csipstatstrafficsubscribeouts.get_name_leafdata());
    if (csipstatstrafficupdateins.is_set || is_set(csipstatstrafficupdateins.yfilter)) leaf_name_data.push_back(csipstatstrafficupdateins.get_name_leafdata());
    if (csipstatstrafficupdateouts.is_set || is_set(csipstatstrafficupdateouts.yfilter)) leaf_name_data.push_back(csipstatstrafficupdateouts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSIPUAMIB::Csipstatstraffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSIPUAMIB::Csipstatstraffic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOSIPUAMIB::Csipstatstraffic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cSipStatsTrafficInviteIns")
    {
        csipstatstrafficinviteins = value;
        csipstatstrafficinviteins.value_namespace = name_space;
        csipstatstrafficinviteins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsTrafficInviteOuts")
    {
        csipstatstrafficinviteouts = value;
        csipstatstrafficinviteouts.value_namespace = name_space;
        csipstatstrafficinviteouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsTrafficAckIns")
    {
        csipstatstrafficackins = value;
        csipstatstrafficackins.value_namespace = name_space;
        csipstatstrafficackins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsTrafficAckOuts")
    {
        csipstatstrafficackouts = value;
        csipstatstrafficackouts.value_namespace = name_space;
        csipstatstrafficackouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsTrafficByeIns")
    {
        csipstatstrafficbyeins = value;
        csipstatstrafficbyeins.value_namespace = name_space;
        csipstatstrafficbyeins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsTrafficByeOuts")
    {
        csipstatstrafficbyeouts = value;
        csipstatstrafficbyeouts.value_namespace = name_space;
        csipstatstrafficbyeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsTrafficCancelIns")
    {
        csipstatstrafficcancelins = value;
        csipstatstrafficcancelins.value_namespace = name_space;
        csipstatstrafficcancelins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsTrafficCancelOuts")
    {
        csipstatstrafficcancelouts = value;
        csipstatstrafficcancelouts.value_namespace = name_space;
        csipstatstrafficcancelouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsTrafficOptionsIns")
    {
        csipstatstrafficoptionsins = value;
        csipstatstrafficoptionsins.value_namespace = name_space;
        csipstatstrafficoptionsins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsTrafficOptionsOuts")
    {
        csipstatstrafficoptionsouts = value;
        csipstatstrafficoptionsouts.value_namespace = name_space;
        csipstatstrafficoptionsouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsTrafficRegisterIns")
    {
        csipstatstrafficregisterins = value;
        csipstatstrafficregisterins.value_namespace = name_space;
        csipstatstrafficregisterins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsTrafficRegisterOuts")
    {
        csipstatstrafficregisterouts = value;
        csipstatstrafficregisterouts.value_namespace = name_space;
        csipstatstrafficregisterouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsTrafficCometIns")
    {
        csipstatstrafficcometins = value;
        csipstatstrafficcometins.value_namespace = name_space;
        csipstatstrafficcometins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsTrafficCometOuts")
    {
        csipstatstrafficcometouts = value;
        csipstatstrafficcometouts.value_namespace = name_space;
        csipstatstrafficcometouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsTrafficPrackIns")
    {
        csipstatstrafficprackins = value;
        csipstatstrafficprackins.value_namespace = name_space;
        csipstatstrafficprackins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsTrafficPrackOuts")
    {
        csipstatstrafficprackouts = value;
        csipstatstrafficprackouts.value_namespace = name_space;
        csipstatstrafficprackouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsTrafficReferIns")
    {
        csipstatstrafficreferins = value;
        csipstatstrafficreferins.value_namespace = name_space;
        csipstatstrafficreferins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsTrafficReferOuts")
    {
        csipstatstrafficreferouts = value;
        csipstatstrafficreferouts.value_namespace = name_space;
        csipstatstrafficreferouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsTrafficNotifyIns")
    {
        csipstatstrafficnotifyins = value;
        csipstatstrafficnotifyins.value_namespace = name_space;
        csipstatstrafficnotifyins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsTrafficNotifyOuts")
    {
        csipstatstrafficnotifyouts = value;
        csipstatstrafficnotifyouts.value_namespace = name_space;
        csipstatstrafficnotifyouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsTrafficInfoIns")
    {
        csipstatstrafficinfoins = value;
        csipstatstrafficinfoins.value_namespace = name_space;
        csipstatstrafficinfoins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsTrafficInfoOuts")
    {
        csipstatstrafficinfoouts = value;
        csipstatstrafficinfoouts.value_namespace = name_space;
        csipstatstrafficinfoouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsTrafficSubscribeIns")
    {
        csipstatstrafficsubscribeins = value;
        csipstatstrafficsubscribeins.value_namespace = name_space;
        csipstatstrafficsubscribeins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsTrafficSubscribeOuts")
    {
        csipstatstrafficsubscribeouts = value;
        csipstatstrafficsubscribeouts.value_namespace = name_space;
        csipstatstrafficsubscribeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsTrafficUpdateIns")
    {
        csipstatstrafficupdateins = value;
        csipstatstrafficupdateins.value_namespace = name_space;
        csipstatstrafficupdateins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsTrafficUpdateOuts")
    {
        csipstatstrafficupdateouts = value;
        csipstatstrafficupdateouts.value_namespace = name_space;
        csipstatstrafficupdateouts.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSIPUAMIB::Csipstatstraffic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cSipStatsTrafficInviteIns")
    {
        csipstatstrafficinviteins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsTrafficInviteOuts")
    {
        csipstatstrafficinviteouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsTrafficAckIns")
    {
        csipstatstrafficackins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsTrafficAckOuts")
    {
        csipstatstrafficackouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsTrafficByeIns")
    {
        csipstatstrafficbyeins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsTrafficByeOuts")
    {
        csipstatstrafficbyeouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsTrafficCancelIns")
    {
        csipstatstrafficcancelins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsTrafficCancelOuts")
    {
        csipstatstrafficcancelouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsTrafficOptionsIns")
    {
        csipstatstrafficoptionsins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsTrafficOptionsOuts")
    {
        csipstatstrafficoptionsouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsTrafficRegisterIns")
    {
        csipstatstrafficregisterins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsTrafficRegisterOuts")
    {
        csipstatstrafficregisterouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsTrafficCometIns")
    {
        csipstatstrafficcometins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsTrafficCometOuts")
    {
        csipstatstrafficcometouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsTrafficPrackIns")
    {
        csipstatstrafficprackins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsTrafficPrackOuts")
    {
        csipstatstrafficprackouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsTrafficReferIns")
    {
        csipstatstrafficreferins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsTrafficReferOuts")
    {
        csipstatstrafficreferouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsTrafficNotifyIns")
    {
        csipstatstrafficnotifyins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsTrafficNotifyOuts")
    {
        csipstatstrafficnotifyouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsTrafficInfoIns")
    {
        csipstatstrafficinfoins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsTrafficInfoOuts")
    {
        csipstatstrafficinfoouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsTrafficSubscribeIns")
    {
        csipstatstrafficsubscribeins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsTrafficSubscribeOuts")
    {
        csipstatstrafficsubscribeouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsTrafficUpdateIns")
    {
        csipstatstrafficupdateins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsTrafficUpdateOuts")
    {
        csipstatstrafficupdateouts.yfilter = yfilter;
    }
}

bool CISCOSIPUAMIB::Csipstatstraffic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipStatsTrafficInviteIns" || name == "cSipStatsTrafficInviteOuts" || name == "cSipStatsTrafficAckIns" || name == "cSipStatsTrafficAckOuts" || name == "cSipStatsTrafficByeIns" || name == "cSipStatsTrafficByeOuts" || name == "cSipStatsTrafficCancelIns" || name == "cSipStatsTrafficCancelOuts" || name == "cSipStatsTrafficOptionsIns" || name == "cSipStatsTrafficOptionsOuts" || name == "cSipStatsTrafficRegisterIns" || name == "cSipStatsTrafficRegisterOuts" || name == "cSipStatsTrafficCometIns" || name == "cSipStatsTrafficCometOuts" || name == "cSipStatsTrafficPrackIns" || name == "cSipStatsTrafficPrackOuts" || name == "cSipStatsTrafficReferIns" || name == "cSipStatsTrafficReferOuts" || name == "cSipStatsTrafficNotifyIns" || name == "cSipStatsTrafficNotifyOuts" || name == "cSipStatsTrafficInfoIns" || name == "cSipStatsTrafficInfoOuts" || name == "cSipStatsTrafficSubscribeIns" || name == "cSipStatsTrafficSubscribeOuts" || name == "cSipStatsTrafficUpdateIns" || name == "cSipStatsTrafficUpdateOuts")
        return true;
    return false;
}

CISCOSIPUAMIB::Csipstatsretry::Csipstatsretry()
    :
    csipstatsretryinvites{YType::uint32, "cSipStatsRetryInvites"},
    csipstatsretrybyes{YType::uint32, "cSipStatsRetryByes"},
    csipstatsretrycancels{YType::uint32, "cSipStatsRetryCancels"},
    csipstatsretryregisters{YType::uint32, "cSipStatsRetryRegisters"},
    csipstatsretryresponses{YType::uint32, "cSipStatsRetryResponses"},
    csipstatsretrypracks{YType::uint32, "cSipStatsRetryPracks"},
    csipstatsretrycomets{YType::uint32, "cSipStatsRetryComets"},
    csipstatsretryreliable1xxrsps{YType::uint32, "cSipStatsRetryReliable1xxRsps"},
    csipstatsretrynotifys{YType::uint32, "cSipStatsRetryNotifys"},
    csipstatsretryrefers{YType::uint32, "cSipStatsRetryRefers"},
    csipstatsretryinfo{YType::uint32, "cSipStatsRetryInfo"},
    csipstatsretrysubscribe{YType::uint32, "cSipStatsRetrySubscribe"}
{

    yang_name = "cSipStatsRetry"; yang_parent_name = "CISCO-SIP-UA-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSIPUAMIB::Csipstatsretry::~Csipstatsretry()
{
}

bool CISCOSIPUAMIB::Csipstatsretry::has_data() const
{
    return csipstatsretryinvites.is_set
	|| csipstatsretrybyes.is_set
	|| csipstatsretrycancels.is_set
	|| csipstatsretryregisters.is_set
	|| csipstatsretryresponses.is_set
	|| csipstatsretrypracks.is_set
	|| csipstatsretrycomets.is_set
	|| csipstatsretryreliable1xxrsps.is_set
	|| csipstatsretrynotifys.is_set
	|| csipstatsretryrefers.is_set
	|| csipstatsretryinfo.is_set
	|| csipstatsretrysubscribe.is_set;
}

bool CISCOSIPUAMIB::Csipstatsretry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipstatsretryinvites.yfilter)
	|| ydk::is_set(csipstatsretrybyes.yfilter)
	|| ydk::is_set(csipstatsretrycancels.yfilter)
	|| ydk::is_set(csipstatsretryregisters.yfilter)
	|| ydk::is_set(csipstatsretryresponses.yfilter)
	|| ydk::is_set(csipstatsretrypracks.yfilter)
	|| ydk::is_set(csipstatsretrycomets.yfilter)
	|| ydk::is_set(csipstatsretryreliable1xxrsps.yfilter)
	|| ydk::is_set(csipstatsretrynotifys.yfilter)
	|| ydk::is_set(csipstatsretryrefers.yfilter)
	|| ydk::is_set(csipstatsretryinfo.yfilter)
	|| ydk::is_set(csipstatsretrysubscribe.yfilter);
}

std::string CISCOSIPUAMIB::Csipstatsretry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSIPUAMIB::Csipstatsretry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipStatsRetry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSIPUAMIB::Csipstatsretry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipstatsretryinvites.is_set || is_set(csipstatsretryinvites.yfilter)) leaf_name_data.push_back(csipstatsretryinvites.get_name_leafdata());
    if (csipstatsretrybyes.is_set || is_set(csipstatsretrybyes.yfilter)) leaf_name_data.push_back(csipstatsretrybyes.get_name_leafdata());
    if (csipstatsretrycancels.is_set || is_set(csipstatsretrycancels.yfilter)) leaf_name_data.push_back(csipstatsretrycancels.get_name_leafdata());
    if (csipstatsretryregisters.is_set || is_set(csipstatsretryregisters.yfilter)) leaf_name_data.push_back(csipstatsretryregisters.get_name_leafdata());
    if (csipstatsretryresponses.is_set || is_set(csipstatsretryresponses.yfilter)) leaf_name_data.push_back(csipstatsretryresponses.get_name_leafdata());
    if (csipstatsretrypracks.is_set || is_set(csipstatsretrypracks.yfilter)) leaf_name_data.push_back(csipstatsretrypracks.get_name_leafdata());
    if (csipstatsretrycomets.is_set || is_set(csipstatsretrycomets.yfilter)) leaf_name_data.push_back(csipstatsretrycomets.get_name_leafdata());
    if (csipstatsretryreliable1xxrsps.is_set || is_set(csipstatsretryreliable1xxrsps.yfilter)) leaf_name_data.push_back(csipstatsretryreliable1xxrsps.get_name_leafdata());
    if (csipstatsretrynotifys.is_set || is_set(csipstatsretrynotifys.yfilter)) leaf_name_data.push_back(csipstatsretrynotifys.get_name_leafdata());
    if (csipstatsretryrefers.is_set || is_set(csipstatsretryrefers.yfilter)) leaf_name_data.push_back(csipstatsretryrefers.get_name_leafdata());
    if (csipstatsretryinfo.is_set || is_set(csipstatsretryinfo.yfilter)) leaf_name_data.push_back(csipstatsretryinfo.get_name_leafdata());
    if (csipstatsretrysubscribe.is_set || is_set(csipstatsretrysubscribe.yfilter)) leaf_name_data.push_back(csipstatsretrysubscribe.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSIPUAMIB::Csipstatsretry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSIPUAMIB::Csipstatsretry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOSIPUAMIB::Csipstatsretry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cSipStatsRetryInvites")
    {
        csipstatsretryinvites = value;
        csipstatsretryinvites.value_namespace = name_space;
        csipstatsretryinvites.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsRetryByes")
    {
        csipstatsretrybyes = value;
        csipstatsretrybyes.value_namespace = name_space;
        csipstatsretrybyes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsRetryCancels")
    {
        csipstatsretrycancels = value;
        csipstatsretrycancels.value_namespace = name_space;
        csipstatsretrycancels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsRetryRegisters")
    {
        csipstatsretryregisters = value;
        csipstatsretryregisters.value_namespace = name_space;
        csipstatsretryregisters.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsRetryResponses")
    {
        csipstatsretryresponses = value;
        csipstatsretryresponses.value_namespace = name_space;
        csipstatsretryresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsRetryPracks")
    {
        csipstatsretrypracks = value;
        csipstatsretrypracks.value_namespace = name_space;
        csipstatsretrypracks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsRetryComets")
    {
        csipstatsretrycomets = value;
        csipstatsretrycomets.value_namespace = name_space;
        csipstatsretrycomets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsRetryReliable1xxRsps")
    {
        csipstatsretryreliable1xxrsps = value;
        csipstatsretryreliable1xxrsps.value_namespace = name_space;
        csipstatsretryreliable1xxrsps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsRetryNotifys")
    {
        csipstatsretrynotifys = value;
        csipstatsretrynotifys.value_namespace = name_space;
        csipstatsretrynotifys.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsRetryRefers")
    {
        csipstatsretryrefers = value;
        csipstatsretryrefers.value_namespace = name_space;
        csipstatsretryrefers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsRetryInfo")
    {
        csipstatsretryinfo = value;
        csipstatsretryinfo.value_namespace = name_space;
        csipstatsretryinfo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsRetrySubscribe")
    {
        csipstatsretrysubscribe = value;
        csipstatsretrysubscribe.value_namespace = name_space;
        csipstatsretrysubscribe.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSIPUAMIB::Csipstatsretry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cSipStatsRetryInvites")
    {
        csipstatsretryinvites.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRetryByes")
    {
        csipstatsretrybyes.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRetryCancels")
    {
        csipstatsretrycancels.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRetryRegisters")
    {
        csipstatsretryregisters.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRetryResponses")
    {
        csipstatsretryresponses.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRetryPracks")
    {
        csipstatsretrypracks.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRetryComets")
    {
        csipstatsretrycomets.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRetryReliable1xxRsps")
    {
        csipstatsretryreliable1xxrsps.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRetryNotifys")
    {
        csipstatsretrynotifys.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRetryRefers")
    {
        csipstatsretryrefers.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRetryInfo")
    {
        csipstatsretryinfo.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRetrySubscribe")
    {
        csipstatsretrysubscribe.yfilter = yfilter;
    }
}

bool CISCOSIPUAMIB::Csipstatsretry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipStatsRetryInvites" || name == "cSipStatsRetryByes" || name == "cSipStatsRetryCancels" || name == "cSipStatsRetryRegisters" || name == "cSipStatsRetryResponses" || name == "cSipStatsRetryPracks" || name == "cSipStatsRetryComets" || name == "cSipStatsRetryReliable1xxRsps" || name == "cSipStatsRetryNotifys" || name == "cSipStatsRetryRefers" || name == "cSipStatsRetryInfo" || name == "cSipStatsRetrySubscribe")
        return true;
    return false;
}

CISCOSIPUAMIB::Csipstatsmisc::Csipstatsmisc()
    :
    csipstatsmisc3xxmappedto4xxrsps{YType::uint32, "cSipStatsMisc3xxMappedTo4xxRsps"}
{

    yang_name = "cSipStatsMisc"; yang_parent_name = "CISCO-SIP-UA-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSIPUAMIB::Csipstatsmisc::~Csipstatsmisc()
{
}

bool CISCOSIPUAMIB::Csipstatsmisc::has_data() const
{
    return csipstatsmisc3xxmappedto4xxrsps.is_set;
}

bool CISCOSIPUAMIB::Csipstatsmisc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipstatsmisc3xxmappedto4xxrsps.yfilter);
}

std::string CISCOSIPUAMIB::Csipstatsmisc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSIPUAMIB::Csipstatsmisc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipStatsMisc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSIPUAMIB::Csipstatsmisc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipstatsmisc3xxmappedto4xxrsps.is_set || is_set(csipstatsmisc3xxmappedto4xxrsps.yfilter)) leaf_name_data.push_back(csipstatsmisc3xxmappedto4xxrsps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSIPUAMIB::Csipstatsmisc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSIPUAMIB::Csipstatsmisc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOSIPUAMIB::Csipstatsmisc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cSipStatsMisc3xxMappedTo4xxRsps")
    {
        csipstatsmisc3xxmappedto4xxrsps = value;
        csipstatsmisc3xxmappedto4xxrsps.value_namespace = name_space;
        csipstatsmisc3xxmappedto4xxrsps.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSIPUAMIB::Csipstatsmisc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cSipStatsMisc3xxMappedTo4xxRsps")
    {
        csipstatsmisc3xxmappedto4xxrsps.yfilter = yfilter;
    }
}

bool CISCOSIPUAMIB::Csipstatsmisc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipStatsMisc3xxMappedTo4xxRsps")
        return true;
    return false;
}

CISCOSIPUAMIB::Csipstatsconnection::Csipstatsconnection()
    :
    csipstatsconntcpsendfailures{YType::uint32, "cSipStatsConnTCPSendFailures"},
    csipstatsconnudpsendfailures{YType::uint32, "cSipStatsConnUDPSendFailures"},
    csipstatsconntcpremoteclosures{YType::uint32, "cSipStatsConnTCPRemoteClosures"},
    csipstatsconnudpcreatefailures{YType::uint32, "cSipStatsConnUDPCreateFailures"},
    csipstatsconntcpcreatefailures{YType::uint32, "cSipStatsConnTCPCreateFailures"},
    csipstatsconnudpinactivetimeouts{YType::uint32, "cSipStatsConnUDPInactiveTimeouts"},
    csipstatsconntcpinactivetimeouts{YType::uint32, "cSipStatsConnTCPInactiveTimeouts"},
    csipstatsactiveudpconnections{YType::uint32, "cSipStatsActiveUDPConnections"},
    csipstatsactivetcpconnections{YType::uint32, "cSipStatsActiveTCPConnections"}
{

    yang_name = "cSipStatsConnection"; yang_parent_name = "CISCO-SIP-UA-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSIPUAMIB::Csipstatsconnection::~Csipstatsconnection()
{
}

bool CISCOSIPUAMIB::Csipstatsconnection::has_data() const
{
    return csipstatsconntcpsendfailures.is_set
	|| csipstatsconnudpsendfailures.is_set
	|| csipstatsconntcpremoteclosures.is_set
	|| csipstatsconnudpcreatefailures.is_set
	|| csipstatsconntcpcreatefailures.is_set
	|| csipstatsconnudpinactivetimeouts.is_set
	|| csipstatsconntcpinactivetimeouts.is_set
	|| csipstatsactiveudpconnections.is_set
	|| csipstatsactivetcpconnections.is_set;
}

bool CISCOSIPUAMIB::Csipstatsconnection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipstatsconntcpsendfailures.yfilter)
	|| ydk::is_set(csipstatsconnudpsendfailures.yfilter)
	|| ydk::is_set(csipstatsconntcpremoteclosures.yfilter)
	|| ydk::is_set(csipstatsconnudpcreatefailures.yfilter)
	|| ydk::is_set(csipstatsconntcpcreatefailures.yfilter)
	|| ydk::is_set(csipstatsconnudpinactivetimeouts.yfilter)
	|| ydk::is_set(csipstatsconntcpinactivetimeouts.yfilter)
	|| ydk::is_set(csipstatsactiveudpconnections.yfilter)
	|| ydk::is_set(csipstatsactivetcpconnections.yfilter);
}

std::string CISCOSIPUAMIB::Csipstatsconnection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSIPUAMIB::Csipstatsconnection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipStatsConnection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSIPUAMIB::Csipstatsconnection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipstatsconntcpsendfailures.is_set || is_set(csipstatsconntcpsendfailures.yfilter)) leaf_name_data.push_back(csipstatsconntcpsendfailures.get_name_leafdata());
    if (csipstatsconnudpsendfailures.is_set || is_set(csipstatsconnudpsendfailures.yfilter)) leaf_name_data.push_back(csipstatsconnudpsendfailures.get_name_leafdata());
    if (csipstatsconntcpremoteclosures.is_set || is_set(csipstatsconntcpremoteclosures.yfilter)) leaf_name_data.push_back(csipstatsconntcpremoteclosures.get_name_leafdata());
    if (csipstatsconnudpcreatefailures.is_set || is_set(csipstatsconnudpcreatefailures.yfilter)) leaf_name_data.push_back(csipstatsconnudpcreatefailures.get_name_leafdata());
    if (csipstatsconntcpcreatefailures.is_set || is_set(csipstatsconntcpcreatefailures.yfilter)) leaf_name_data.push_back(csipstatsconntcpcreatefailures.get_name_leafdata());
    if (csipstatsconnudpinactivetimeouts.is_set || is_set(csipstatsconnudpinactivetimeouts.yfilter)) leaf_name_data.push_back(csipstatsconnudpinactivetimeouts.get_name_leafdata());
    if (csipstatsconntcpinactivetimeouts.is_set || is_set(csipstatsconntcpinactivetimeouts.yfilter)) leaf_name_data.push_back(csipstatsconntcpinactivetimeouts.get_name_leafdata());
    if (csipstatsactiveudpconnections.is_set || is_set(csipstatsactiveudpconnections.yfilter)) leaf_name_data.push_back(csipstatsactiveudpconnections.get_name_leafdata());
    if (csipstatsactivetcpconnections.is_set || is_set(csipstatsactivetcpconnections.yfilter)) leaf_name_data.push_back(csipstatsactivetcpconnections.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSIPUAMIB::Csipstatsconnection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSIPUAMIB::Csipstatsconnection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOSIPUAMIB::Csipstatsconnection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cSipStatsConnTCPSendFailures")
    {
        csipstatsconntcpsendfailures = value;
        csipstatsconntcpsendfailures.value_namespace = name_space;
        csipstatsconntcpsendfailures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsConnUDPSendFailures")
    {
        csipstatsconnudpsendfailures = value;
        csipstatsconnudpsendfailures.value_namespace = name_space;
        csipstatsconnudpsendfailures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsConnTCPRemoteClosures")
    {
        csipstatsconntcpremoteclosures = value;
        csipstatsconntcpremoteclosures.value_namespace = name_space;
        csipstatsconntcpremoteclosures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsConnUDPCreateFailures")
    {
        csipstatsconnudpcreatefailures = value;
        csipstatsconnudpcreatefailures.value_namespace = name_space;
        csipstatsconnudpcreatefailures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsConnTCPCreateFailures")
    {
        csipstatsconntcpcreatefailures = value;
        csipstatsconntcpcreatefailures.value_namespace = name_space;
        csipstatsconntcpcreatefailures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsConnUDPInactiveTimeouts")
    {
        csipstatsconnudpinactivetimeouts = value;
        csipstatsconnudpinactivetimeouts.value_namespace = name_space;
        csipstatsconnudpinactivetimeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsConnTCPInactiveTimeouts")
    {
        csipstatsconntcpinactivetimeouts = value;
        csipstatsconntcpinactivetimeouts.value_namespace = name_space;
        csipstatsconntcpinactivetimeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsActiveUDPConnections")
    {
        csipstatsactiveudpconnections = value;
        csipstatsactiveudpconnections.value_namespace = name_space;
        csipstatsactiveudpconnections.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsActiveTCPConnections")
    {
        csipstatsactivetcpconnections = value;
        csipstatsactivetcpconnections.value_namespace = name_space;
        csipstatsactivetcpconnections.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSIPUAMIB::Csipstatsconnection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cSipStatsConnTCPSendFailures")
    {
        csipstatsconntcpsendfailures.yfilter = yfilter;
    }
    if(value_path == "cSipStatsConnUDPSendFailures")
    {
        csipstatsconnudpsendfailures.yfilter = yfilter;
    }
    if(value_path == "cSipStatsConnTCPRemoteClosures")
    {
        csipstatsconntcpremoteclosures.yfilter = yfilter;
    }
    if(value_path == "cSipStatsConnUDPCreateFailures")
    {
        csipstatsconnudpcreatefailures.yfilter = yfilter;
    }
    if(value_path == "cSipStatsConnTCPCreateFailures")
    {
        csipstatsconntcpcreatefailures.yfilter = yfilter;
    }
    if(value_path == "cSipStatsConnUDPInactiveTimeouts")
    {
        csipstatsconnudpinactivetimeouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsConnTCPInactiveTimeouts")
    {
        csipstatsconntcpinactivetimeouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsActiveUDPConnections")
    {
        csipstatsactiveudpconnections.yfilter = yfilter;
    }
    if(value_path == "cSipStatsActiveTCPConnections")
    {
        csipstatsactivetcpconnections.yfilter = yfilter;
    }
}

bool CISCOSIPUAMIB::Csipstatsconnection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipStatsConnTCPSendFailures" || name == "cSipStatsConnUDPSendFailures" || name == "cSipStatsConnTCPRemoteClosures" || name == "cSipStatsConnUDPCreateFailures" || name == "cSipStatsConnTCPCreateFailures" || name == "cSipStatsConnUDPInactiveTimeouts" || name == "cSipStatsConnTCPInactiveTimeouts" || name == "cSipStatsActiveUDPConnections" || name == "cSipStatsActiveTCPConnections")
        return true;
    return false;
}

CISCOSIPUAMIB::Csipcfgearlymediatable::Csipcfgearlymediatable()
{

    yang_name = "cSipCfgEarlyMediaTable"; yang_parent_name = "CISCO-SIP-UA-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSIPUAMIB::Csipcfgearlymediatable::~Csipcfgearlymediatable()
{
}

bool CISCOSIPUAMIB::Csipcfgearlymediatable::has_data() const
{
    for (std::size_t index=0; index<csipcfgearlymediaentry.size(); index++)
    {
        if(csipcfgearlymediaentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSIPUAMIB::Csipcfgearlymediatable::has_operation() const
{
    for (std::size_t index=0; index<csipcfgearlymediaentry.size(); index++)
    {
        if(csipcfgearlymediaentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSIPUAMIB::Csipcfgearlymediatable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSIPUAMIB::Csipcfgearlymediatable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipCfgEarlyMediaTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSIPUAMIB::Csipcfgearlymediatable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSIPUAMIB::Csipcfgearlymediatable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cSipCfgEarlyMediaEntry")
    {
        auto c = std::make_shared<CISCOSIPUAMIB::Csipcfgearlymediatable::Csipcfgearlymediaentry>();
        c->parent = this;
        csipcfgearlymediaentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSIPUAMIB::Csipcfgearlymediatable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : csipcfgearlymediaentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOSIPUAMIB::Csipcfgearlymediatable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSIPUAMIB::Csipcfgearlymediatable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSIPUAMIB::Csipcfgearlymediatable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipCfgEarlyMediaEntry")
        return true;
    return false;
}

CISCOSIPUAMIB::Csipcfgearlymediatable::Csipcfgearlymediaentry::Csipcfgearlymediaentry()
    :
    csipcfgearlymediastatuscodeindex{YType::int32, "cSipCfgEarlyMediaStatusCodeIndex"},
    csipcfgearlymediacutthrudisabled{YType::boolean, "cSipCfgEarlyMediaCutThruDisabled"}
{

    yang_name = "cSipCfgEarlyMediaEntry"; yang_parent_name = "cSipCfgEarlyMediaTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSIPUAMIB::Csipcfgearlymediatable::Csipcfgearlymediaentry::~Csipcfgearlymediaentry()
{
}

bool CISCOSIPUAMIB::Csipcfgearlymediatable::Csipcfgearlymediaentry::has_data() const
{
    return csipcfgearlymediastatuscodeindex.is_set
	|| csipcfgearlymediacutthrudisabled.is_set;
}

bool CISCOSIPUAMIB::Csipcfgearlymediatable::Csipcfgearlymediaentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipcfgearlymediastatuscodeindex.yfilter)
	|| ydk::is_set(csipcfgearlymediacutthrudisabled.yfilter);
}

std::string CISCOSIPUAMIB::Csipcfgearlymediatable::Csipcfgearlymediaentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/cSipCfgEarlyMediaTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSIPUAMIB::Csipcfgearlymediatable::Csipcfgearlymediaentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipCfgEarlyMediaEntry" <<"[cSipCfgEarlyMediaStatusCodeIndex='" <<csipcfgearlymediastatuscodeindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSIPUAMIB::Csipcfgearlymediatable::Csipcfgearlymediaentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipcfgearlymediastatuscodeindex.is_set || is_set(csipcfgearlymediastatuscodeindex.yfilter)) leaf_name_data.push_back(csipcfgearlymediastatuscodeindex.get_name_leafdata());
    if (csipcfgearlymediacutthrudisabled.is_set || is_set(csipcfgearlymediacutthrudisabled.yfilter)) leaf_name_data.push_back(csipcfgearlymediacutthrudisabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSIPUAMIB::Csipcfgearlymediatable::Csipcfgearlymediaentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSIPUAMIB::Csipcfgearlymediatable::Csipcfgearlymediaentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOSIPUAMIB::Csipcfgearlymediatable::Csipcfgearlymediaentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cSipCfgEarlyMediaStatusCodeIndex")
    {
        csipcfgearlymediastatuscodeindex = value;
        csipcfgearlymediastatuscodeindex.value_namespace = name_space;
        csipcfgearlymediastatuscodeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgEarlyMediaCutThruDisabled")
    {
        csipcfgearlymediacutthrudisabled = value;
        csipcfgearlymediacutthrudisabled.value_namespace = name_space;
        csipcfgearlymediacutthrudisabled.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSIPUAMIB::Csipcfgearlymediatable::Csipcfgearlymediaentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cSipCfgEarlyMediaStatusCodeIndex")
    {
        csipcfgearlymediastatuscodeindex.yfilter = yfilter;
    }
    if(value_path == "cSipCfgEarlyMediaCutThruDisabled")
    {
        csipcfgearlymediacutthrudisabled.yfilter = yfilter;
    }
}

bool CISCOSIPUAMIB::Csipcfgearlymediatable::Csipcfgearlymediaentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipCfgEarlyMediaStatusCodeIndex" || name == "cSipCfgEarlyMediaCutThruDisabled")
        return true;
    return false;
}

CISCOSIPUAMIB::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrtable()
{

    yang_name = "cSipCfgBindSourceAddrTable"; yang_parent_name = "CISCO-SIP-UA-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSIPUAMIB::Csipcfgbindsourceaddrtable::~Csipcfgbindsourceaddrtable()
{
}

bool CISCOSIPUAMIB::Csipcfgbindsourceaddrtable::has_data() const
{
    for (std::size_t index=0; index<csipcfgbindsourceaddrentry.size(); index++)
    {
        if(csipcfgbindsourceaddrentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSIPUAMIB::Csipcfgbindsourceaddrtable::has_operation() const
{
    for (std::size_t index=0; index<csipcfgbindsourceaddrentry.size(); index++)
    {
        if(csipcfgbindsourceaddrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSIPUAMIB::Csipcfgbindsourceaddrtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSIPUAMIB::Csipcfgbindsourceaddrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipCfgBindSourceAddrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSIPUAMIB::Csipcfgbindsourceaddrtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSIPUAMIB::Csipcfgbindsourceaddrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cSipCfgBindSourceAddrEntry")
    {
        auto c = std::make_shared<CISCOSIPUAMIB::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrentry>();
        c->parent = this;
        csipcfgbindsourceaddrentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSIPUAMIB::Csipcfgbindsourceaddrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : csipcfgbindsourceaddrentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOSIPUAMIB::Csipcfgbindsourceaddrtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSIPUAMIB::Csipcfgbindsourceaddrtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSIPUAMIB::Csipcfgbindsourceaddrtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipCfgBindSourceAddrEntry")
        return true;
    return false;
}

CISCOSIPUAMIB::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrentry::Csipcfgbindsourceaddrentry()
    :
    csipcfgbindsourceaddrscope{YType::enumeration, "cSipCfgBindSourceAddrScope"},
    csipcfgbindsourceaddrinterface{YType::int32, "cSipCfgBindSourceAddrInterface"}
{

    yang_name = "cSipCfgBindSourceAddrEntry"; yang_parent_name = "cSipCfgBindSourceAddrTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSIPUAMIB::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrentry::~Csipcfgbindsourceaddrentry()
{
}

bool CISCOSIPUAMIB::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrentry::has_data() const
{
    return csipcfgbindsourceaddrscope.is_set
	|| csipcfgbindsourceaddrinterface.is_set;
}

bool CISCOSIPUAMIB::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipcfgbindsourceaddrscope.yfilter)
	|| ydk::is_set(csipcfgbindsourceaddrinterface.yfilter);
}

std::string CISCOSIPUAMIB::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/cSipCfgBindSourceAddrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSIPUAMIB::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipCfgBindSourceAddrEntry" <<"[cSipCfgBindSourceAddrScope='" <<csipcfgbindsourceaddrscope <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSIPUAMIB::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipcfgbindsourceaddrscope.is_set || is_set(csipcfgbindsourceaddrscope.yfilter)) leaf_name_data.push_back(csipcfgbindsourceaddrscope.get_name_leafdata());
    if (csipcfgbindsourceaddrinterface.is_set || is_set(csipcfgbindsourceaddrinterface.yfilter)) leaf_name_data.push_back(csipcfgbindsourceaddrinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSIPUAMIB::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSIPUAMIB::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOSIPUAMIB::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cSipCfgBindSourceAddrScope")
    {
        csipcfgbindsourceaddrscope = value;
        csipcfgbindsourceaddrscope.value_namespace = name_space;
        csipcfgbindsourceaddrscope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgBindSourceAddrInterface")
    {
        csipcfgbindsourceaddrinterface = value;
        csipcfgbindsourceaddrinterface.value_namespace = name_space;
        csipcfgbindsourceaddrinterface.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSIPUAMIB::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cSipCfgBindSourceAddrScope")
    {
        csipcfgbindsourceaddrscope.yfilter = yfilter;
    }
    if(value_path == "cSipCfgBindSourceAddrInterface")
    {
        csipcfgbindsourceaddrinterface.yfilter = yfilter;
    }
}

bool CISCOSIPUAMIB::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipCfgBindSourceAddrScope" || name == "cSipCfgBindSourceAddrInterface")
        return true;
    return false;
}

CISCOSIPUAMIB::Csipcfgpeertable::Csipcfgpeertable()
{

    yang_name = "cSipCfgPeerTable"; yang_parent_name = "CISCO-SIP-UA-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSIPUAMIB::Csipcfgpeertable::~Csipcfgpeertable()
{
}

bool CISCOSIPUAMIB::Csipcfgpeertable::has_data() const
{
    for (std::size_t index=0; index<csipcfgpeerentry.size(); index++)
    {
        if(csipcfgpeerentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSIPUAMIB::Csipcfgpeertable::has_operation() const
{
    for (std::size_t index=0; index<csipcfgpeerentry.size(); index++)
    {
        if(csipcfgpeerentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSIPUAMIB::Csipcfgpeertable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSIPUAMIB::Csipcfgpeertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipCfgPeerTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSIPUAMIB::Csipcfgpeertable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSIPUAMIB::Csipcfgpeertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cSipCfgPeerEntry")
    {
        auto c = std::make_shared<CISCOSIPUAMIB::Csipcfgpeertable::Csipcfgpeerentry>();
        c->parent = this;
        csipcfgpeerentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSIPUAMIB::Csipcfgpeertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : csipcfgpeerentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOSIPUAMIB::Csipcfgpeertable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSIPUAMIB::Csipcfgpeertable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSIPUAMIB::Csipcfgpeertable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipCfgPeerEntry")
        return true;
    return false;
}

CISCOSIPUAMIB::Csipcfgpeertable::Csipcfgpeerentry::Csipcfgpeerentry()
    :
    csipcfgpeerindex{YType::int32, "cSipCfgPeerIndex"},
    csipcfgpeeroutsessiontransport{YType::enumeration, "cSipCfgPeerOutSessionTransport"},
    csipcfgpeerreliable1xxrspstr{YType::str, "cSipCfgPeerReliable1xxRspStr"},
    csipcfgpeerreliable1xxrsphdr{YType::enumeration, "cSipCfgPeerReliable1xxRspHdr"},
    csipcfgpeerurltype{YType::enumeration, "cSipCfgPeerUrlType"},
    csipcfgpeerswitchtransenabled{YType::boolean, "cSipCfgPeerSwitchTransEnabled"}
{

    yang_name = "cSipCfgPeerEntry"; yang_parent_name = "cSipCfgPeerTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSIPUAMIB::Csipcfgpeertable::Csipcfgpeerentry::~Csipcfgpeerentry()
{
}

bool CISCOSIPUAMIB::Csipcfgpeertable::Csipcfgpeerentry::has_data() const
{
    return csipcfgpeerindex.is_set
	|| csipcfgpeeroutsessiontransport.is_set
	|| csipcfgpeerreliable1xxrspstr.is_set
	|| csipcfgpeerreliable1xxrsphdr.is_set
	|| csipcfgpeerurltype.is_set
	|| csipcfgpeerswitchtransenabled.is_set;
}

bool CISCOSIPUAMIB::Csipcfgpeertable::Csipcfgpeerentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipcfgpeerindex.yfilter)
	|| ydk::is_set(csipcfgpeeroutsessiontransport.yfilter)
	|| ydk::is_set(csipcfgpeerreliable1xxrspstr.yfilter)
	|| ydk::is_set(csipcfgpeerreliable1xxrsphdr.yfilter)
	|| ydk::is_set(csipcfgpeerurltype.yfilter)
	|| ydk::is_set(csipcfgpeerswitchtransenabled.yfilter);
}

std::string CISCOSIPUAMIB::Csipcfgpeertable::Csipcfgpeerentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/cSipCfgPeerTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSIPUAMIB::Csipcfgpeertable::Csipcfgpeerentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipCfgPeerEntry" <<"[cSipCfgPeerIndex='" <<csipcfgpeerindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSIPUAMIB::Csipcfgpeertable::Csipcfgpeerentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipcfgpeerindex.is_set || is_set(csipcfgpeerindex.yfilter)) leaf_name_data.push_back(csipcfgpeerindex.get_name_leafdata());
    if (csipcfgpeeroutsessiontransport.is_set || is_set(csipcfgpeeroutsessiontransport.yfilter)) leaf_name_data.push_back(csipcfgpeeroutsessiontransport.get_name_leafdata());
    if (csipcfgpeerreliable1xxrspstr.is_set || is_set(csipcfgpeerreliable1xxrspstr.yfilter)) leaf_name_data.push_back(csipcfgpeerreliable1xxrspstr.get_name_leafdata());
    if (csipcfgpeerreliable1xxrsphdr.is_set || is_set(csipcfgpeerreliable1xxrsphdr.yfilter)) leaf_name_data.push_back(csipcfgpeerreliable1xxrsphdr.get_name_leafdata());
    if (csipcfgpeerurltype.is_set || is_set(csipcfgpeerurltype.yfilter)) leaf_name_data.push_back(csipcfgpeerurltype.get_name_leafdata());
    if (csipcfgpeerswitchtransenabled.is_set || is_set(csipcfgpeerswitchtransenabled.yfilter)) leaf_name_data.push_back(csipcfgpeerswitchtransenabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSIPUAMIB::Csipcfgpeertable::Csipcfgpeerentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSIPUAMIB::Csipcfgpeertable::Csipcfgpeerentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOSIPUAMIB::Csipcfgpeertable::Csipcfgpeerentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cSipCfgPeerIndex")
    {
        csipcfgpeerindex = value;
        csipcfgpeerindex.value_namespace = name_space;
        csipcfgpeerindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgPeerOutSessionTransport")
    {
        csipcfgpeeroutsessiontransport = value;
        csipcfgpeeroutsessiontransport.value_namespace = name_space;
        csipcfgpeeroutsessiontransport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgPeerReliable1xxRspStr")
    {
        csipcfgpeerreliable1xxrspstr = value;
        csipcfgpeerreliable1xxrspstr.value_namespace = name_space;
        csipcfgpeerreliable1xxrspstr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgPeerReliable1xxRspHdr")
    {
        csipcfgpeerreliable1xxrsphdr = value;
        csipcfgpeerreliable1xxrsphdr.value_namespace = name_space;
        csipcfgpeerreliable1xxrsphdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgPeerUrlType")
    {
        csipcfgpeerurltype = value;
        csipcfgpeerurltype.value_namespace = name_space;
        csipcfgpeerurltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgPeerSwitchTransEnabled")
    {
        csipcfgpeerswitchtransenabled = value;
        csipcfgpeerswitchtransenabled.value_namespace = name_space;
        csipcfgpeerswitchtransenabled.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSIPUAMIB::Csipcfgpeertable::Csipcfgpeerentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cSipCfgPeerIndex")
    {
        csipcfgpeerindex.yfilter = yfilter;
    }
    if(value_path == "cSipCfgPeerOutSessionTransport")
    {
        csipcfgpeeroutsessiontransport.yfilter = yfilter;
    }
    if(value_path == "cSipCfgPeerReliable1xxRspStr")
    {
        csipcfgpeerreliable1xxrspstr.yfilter = yfilter;
    }
    if(value_path == "cSipCfgPeerReliable1xxRspHdr")
    {
        csipcfgpeerreliable1xxrsphdr.yfilter = yfilter;
    }
    if(value_path == "cSipCfgPeerUrlType")
    {
        csipcfgpeerurltype.yfilter = yfilter;
    }
    if(value_path == "cSipCfgPeerSwitchTransEnabled")
    {
        csipcfgpeerswitchtransenabled.yfilter = yfilter;
    }
}

bool CISCOSIPUAMIB::Csipcfgpeertable::Csipcfgpeerentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipCfgPeerIndex" || name == "cSipCfgPeerOutSessionTransport" || name == "cSipCfgPeerReliable1xxRspStr" || name == "cSipCfgPeerReliable1xxRspHdr" || name == "cSipCfgPeerUrlType" || name == "cSipCfgPeerSwitchTransEnabled")
        return true;
    return false;
}

CISCOSIPUAMIB::Csipcfgstatuscausetable::Csipcfgstatuscausetable()
{

    yang_name = "cSipCfgStatusCauseTable"; yang_parent_name = "CISCO-SIP-UA-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSIPUAMIB::Csipcfgstatuscausetable::~Csipcfgstatuscausetable()
{
}

bool CISCOSIPUAMIB::Csipcfgstatuscausetable::has_data() const
{
    for (std::size_t index=0; index<csipcfgstatuscauseentry.size(); index++)
    {
        if(csipcfgstatuscauseentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSIPUAMIB::Csipcfgstatuscausetable::has_operation() const
{
    for (std::size_t index=0; index<csipcfgstatuscauseentry.size(); index++)
    {
        if(csipcfgstatuscauseentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSIPUAMIB::Csipcfgstatuscausetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSIPUAMIB::Csipcfgstatuscausetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipCfgStatusCauseTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSIPUAMIB::Csipcfgstatuscausetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSIPUAMIB::Csipcfgstatuscausetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cSipCfgStatusCauseEntry")
    {
        auto c = std::make_shared<CISCOSIPUAMIB::Csipcfgstatuscausetable::Csipcfgstatuscauseentry>();
        c->parent = this;
        csipcfgstatuscauseentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSIPUAMIB::Csipcfgstatuscausetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : csipcfgstatuscauseentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOSIPUAMIB::Csipcfgstatuscausetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSIPUAMIB::Csipcfgstatuscausetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSIPUAMIB::Csipcfgstatuscausetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipCfgStatusCauseEntry")
        return true;
    return false;
}

CISCOSIPUAMIB::Csipcfgstatuscausetable::Csipcfgstatuscauseentry::Csipcfgstatuscauseentry()
    :
    csipcfgstatuscodeindex{YType::int32, "cSipCfgStatusCodeIndex"},
    csipcfgpstncause{YType::int32, "cSipCfgPstnCause"},
    csipcfgstatuscausestorestatus{YType::enumeration, "cSipCfgStatusCauseStoreStatus"}
{

    yang_name = "cSipCfgStatusCauseEntry"; yang_parent_name = "cSipCfgStatusCauseTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSIPUAMIB::Csipcfgstatuscausetable::Csipcfgstatuscauseentry::~Csipcfgstatuscauseentry()
{
}

bool CISCOSIPUAMIB::Csipcfgstatuscausetable::Csipcfgstatuscauseentry::has_data() const
{
    return csipcfgstatuscodeindex.is_set
	|| csipcfgpstncause.is_set
	|| csipcfgstatuscausestorestatus.is_set;
}

bool CISCOSIPUAMIB::Csipcfgstatuscausetable::Csipcfgstatuscauseentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipcfgstatuscodeindex.yfilter)
	|| ydk::is_set(csipcfgpstncause.yfilter)
	|| ydk::is_set(csipcfgstatuscausestorestatus.yfilter);
}

std::string CISCOSIPUAMIB::Csipcfgstatuscausetable::Csipcfgstatuscauseentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/cSipCfgStatusCauseTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSIPUAMIB::Csipcfgstatuscausetable::Csipcfgstatuscauseentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipCfgStatusCauseEntry" <<"[cSipCfgStatusCodeIndex='" <<csipcfgstatuscodeindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSIPUAMIB::Csipcfgstatuscausetable::Csipcfgstatuscauseentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipcfgstatuscodeindex.is_set || is_set(csipcfgstatuscodeindex.yfilter)) leaf_name_data.push_back(csipcfgstatuscodeindex.get_name_leafdata());
    if (csipcfgpstncause.is_set || is_set(csipcfgpstncause.yfilter)) leaf_name_data.push_back(csipcfgpstncause.get_name_leafdata());
    if (csipcfgstatuscausestorestatus.is_set || is_set(csipcfgstatuscausestorestatus.yfilter)) leaf_name_data.push_back(csipcfgstatuscausestorestatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSIPUAMIB::Csipcfgstatuscausetable::Csipcfgstatuscauseentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSIPUAMIB::Csipcfgstatuscausetable::Csipcfgstatuscauseentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOSIPUAMIB::Csipcfgstatuscausetable::Csipcfgstatuscauseentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cSipCfgStatusCodeIndex")
    {
        csipcfgstatuscodeindex = value;
        csipcfgstatuscodeindex.value_namespace = name_space;
        csipcfgstatuscodeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgPstnCause")
    {
        csipcfgpstncause = value;
        csipcfgpstncause.value_namespace = name_space;
        csipcfgpstncause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgStatusCauseStoreStatus")
    {
        csipcfgstatuscausestorestatus = value;
        csipcfgstatuscausestorestatus.value_namespace = name_space;
        csipcfgstatuscausestorestatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSIPUAMIB::Csipcfgstatuscausetable::Csipcfgstatuscauseentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cSipCfgStatusCodeIndex")
    {
        csipcfgstatuscodeindex.yfilter = yfilter;
    }
    if(value_path == "cSipCfgPstnCause")
    {
        csipcfgpstncause.yfilter = yfilter;
    }
    if(value_path == "cSipCfgStatusCauseStoreStatus")
    {
        csipcfgstatuscausestorestatus.yfilter = yfilter;
    }
}

bool CISCOSIPUAMIB::Csipcfgstatuscausetable::Csipcfgstatuscauseentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipCfgStatusCodeIndex" || name == "cSipCfgPstnCause" || name == "cSipCfgStatusCauseStoreStatus")
        return true;
    return false;
}

CISCOSIPUAMIB::Csipcfgcausestatustable::Csipcfgcausestatustable()
{

    yang_name = "cSipCfgCauseStatusTable"; yang_parent_name = "CISCO-SIP-UA-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSIPUAMIB::Csipcfgcausestatustable::~Csipcfgcausestatustable()
{
}

bool CISCOSIPUAMIB::Csipcfgcausestatustable::has_data() const
{
    for (std::size_t index=0; index<csipcfgcausestatusentry.size(); index++)
    {
        if(csipcfgcausestatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSIPUAMIB::Csipcfgcausestatustable::has_operation() const
{
    for (std::size_t index=0; index<csipcfgcausestatusentry.size(); index++)
    {
        if(csipcfgcausestatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSIPUAMIB::Csipcfgcausestatustable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSIPUAMIB::Csipcfgcausestatustable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipCfgCauseStatusTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSIPUAMIB::Csipcfgcausestatustable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSIPUAMIB::Csipcfgcausestatustable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cSipCfgCauseStatusEntry")
    {
        auto c = std::make_shared<CISCOSIPUAMIB::Csipcfgcausestatustable::Csipcfgcausestatusentry>();
        c->parent = this;
        csipcfgcausestatusentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSIPUAMIB::Csipcfgcausestatustable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : csipcfgcausestatusentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOSIPUAMIB::Csipcfgcausestatustable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSIPUAMIB::Csipcfgcausestatustable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSIPUAMIB::Csipcfgcausestatustable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipCfgCauseStatusEntry")
        return true;
    return false;
}

CISCOSIPUAMIB::Csipcfgcausestatustable::Csipcfgcausestatusentry::Csipcfgcausestatusentry()
    :
    csipcfgpstncauseindex{YType::int32, "cSipCfgPstnCauseIndex"},
    csipcfgstatuscode{YType::int32, "cSipCfgStatusCode"},
    csipcfgcausestatusstorestatus{YType::enumeration, "cSipCfgCauseStatusStoreStatus"}
{

    yang_name = "cSipCfgCauseStatusEntry"; yang_parent_name = "cSipCfgCauseStatusTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSIPUAMIB::Csipcfgcausestatustable::Csipcfgcausestatusentry::~Csipcfgcausestatusentry()
{
}

bool CISCOSIPUAMIB::Csipcfgcausestatustable::Csipcfgcausestatusentry::has_data() const
{
    return csipcfgpstncauseindex.is_set
	|| csipcfgstatuscode.is_set
	|| csipcfgcausestatusstorestatus.is_set;
}

bool CISCOSIPUAMIB::Csipcfgcausestatustable::Csipcfgcausestatusentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipcfgpstncauseindex.yfilter)
	|| ydk::is_set(csipcfgstatuscode.yfilter)
	|| ydk::is_set(csipcfgcausestatusstorestatus.yfilter);
}

std::string CISCOSIPUAMIB::Csipcfgcausestatustable::Csipcfgcausestatusentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/cSipCfgCauseStatusTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSIPUAMIB::Csipcfgcausestatustable::Csipcfgcausestatusentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipCfgCauseStatusEntry" <<"[cSipCfgPstnCauseIndex='" <<csipcfgpstncauseindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSIPUAMIB::Csipcfgcausestatustable::Csipcfgcausestatusentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipcfgpstncauseindex.is_set || is_set(csipcfgpstncauseindex.yfilter)) leaf_name_data.push_back(csipcfgpstncauseindex.get_name_leafdata());
    if (csipcfgstatuscode.is_set || is_set(csipcfgstatuscode.yfilter)) leaf_name_data.push_back(csipcfgstatuscode.get_name_leafdata());
    if (csipcfgcausestatusstorestatus.is_set || is_set(csipcfgcausestatusstorestatus.yfilter)) leaf_name_data.push_back(csipcfgcausestatusstorestatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSIPUAMIB::Csipcfgcausestatustable::Csipcfgcausestatusentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSIPUAMIB::Csipcfgcausestatustable::Csipcfgcausestatusentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOSIPUAMIB::Csipcfgcausestatustable::Csipcfgcausestatusentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cSipCfgPstnCauseIndex")
    {
        csipcfgpstncauseindex = value;
        csipcfgpstncauseindex.value_namespace = name_space;
        csipcfgpstncauseindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgStatusCode")
    {
        csipcfgstatuscode = value;
        csipcfgstatuscode.value_namespace = name_space;
        csipcfgstatuscode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgCauseStatusStoreStatus")
    {
        csipcfgcausestatusstorestatus = value;
        csipcfgcausestatusstorestatus.value_namespace = name_space;
        csipcfgcausestatusstorestatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSIPUAMIB::Csipcfgcausestatustable::Csipcfgcausestatusentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cSipCfgPstnCauseIndex")
    {
        csipcfgpstncauseindex.yfilter = yfilter;
    }
    if(value_path == "cSipCfgStatusCode")
    {
        csipcfgstatuscode.yfilter = yfilter;
    }
    if(value_path == "cSipCfgCauseStatusStoreStatus")
    {
        csipcfgcausestatusstorestatus.yfilter = yfilter;
    }
}

bool CISCOSIPUAMIB::Csipcfgcausestatustable::Csipcfgcausestatusentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipCfgPstnCauseIndex" || name == "cSipCfgStatusCode" || name == "cSipCfgCauseStatusStoreStatus")
        return true;
    return false;
}

CISCOSIPUAMIB::Csipstatssuccessoktable::Csipstatssuccessoktable()
{

    yang_name = "cSipStatsSuccessOkTable"; yang_parent_name = "CISCO-SIP-UA-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSIPUAMIB::Csipstatssuccessoktable::~Csipstatssuccessoktable()
{
}

bool CISCOSIPUAMIB::Csipstatssuccessoktable::has_data() const
{
    for (std::size_t index=0; index<csipstatssuccessokentry.size(); index++)
    {
        if(csipstatssuccessokentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSIPUAMIB::Csipstatssuccessoktable::has_operation() const
{
    for (std::size_t index=0; index<csipstatssuccessokentry.size(); index++)
    {
        if(csipstatssuccessokentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSIPUAMIB::Csipstatssuccessoktable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSIPUAMIB::Csipstatssuccessoktable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipStatsSuccessOkTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSIPUAMIB::Csipstatssuccessoktable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSIPUAMIB::Csipstatssuccessoktable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cSipStatsSuccessOkEntry")
    {
        auto c = std::make_shared<CISCOSIPUAMIB::Csipstatssuccessoktable::Csipstatssuccessokentry>();
        c->parent = this;
        csipstatssuccessokentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSIPUAMIB::Csipstatssuccessoktable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : csipstatssuccessokentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOSIPUAMIB::Csipstatssuccessoktable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSIPUAMIB::Csipstatssuccessoktable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSIPUAMIB::Csipstatssuccessoktable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipStatsSuccessOkEntry")
        return true;
    return false;
}

CISCOSIPUAMIB::Csipstatssuccessoktable::Csipstatssuccessokentry::Csipstatssuccessokentry()
    :
    csipstatssuccessokmethod{YType::str, "cSipStatsSuccessOkMethod"},
    csipstatssuccessokinbounds{YType::uint32, "cSipStatsSuccessOkInbounds"},
    csipstatssuccessokoutbounds{YType::uint32, "cSipStatsSuccessOkOutbounds"}
{

    yang_name = "cSipStatsSuccessOkEntry"; yang_parent_name = "cSipStatsSuccessOkTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSIPUAMIB::Csipstatssuccessoktable::Csipstatssuccessokentry::~Csipstatssuccessokentry()
{
}

bool CISCOSIPUAMIB::Csipstatssuccessoktable::Csipstatssuccessokentry::has_data() const
{
    return csipstatssuccessokmethod.is_set
	|| csipstatssuccessokinbounds.is_set
	|| csipstatssuccessokoutbounds.is_set;
}

bool CISCOSIPUAMIB::Csipstatssuccessoktable::Csipstatssuccessokentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipstatssuccessokmethod.yfilter)
	|| ydk::is_set(csipstatssuccessokinbounds.yfilter)
	|| ydk::is_set(csipstatssuccessokoutbounds.yfilter);
}

std::string CISCOSIPUAMIB::Csipstatssuccessoktable::Csipstatssuccessokentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/cSipStatsSuccessOkTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSIPUAMIB::Csipstatssuccessoktable::Csipstatssuccessokentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipStatsSuccessOkEntry" <<"[cSipStatsSuccessOkMethod='" <<csipstatssuccessokmethod <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSIPUAMIB::Csipstatssuccessoktable::Csipstatssuccessokentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipstatssuccessokmethod.is_set || is_set(csipstatssuccessokmethod.yfilter)) leaf_name_data.push_back(csipstatssuccessokmethod.get_name_leafdata());
    if (csipstatssuccessokinbounds.is_set || is_set(csipstatssuccessokinbounds.yfilter)) leaf_name_data.push_back(csipstatssuccessokinbounds.get_name_leafdata());
    if (csipstatssuccessokoutbounds.is_set || is_set(csipstatssuccessokoutbounds.yfilter)) leaf_name_data.push_back(csipstatssuccessokoutbounds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSIPUAMIB::Csipstatssuccessoktable::Csipstatssuccessokentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSIPUAMIB::Csipstatssuccessoktable::Csipstatssuccessokentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOSIPUAMIB::Csipstatssuccessoktable::Csipstatssuccessokentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cSipStatsSuccessOkMethod")
    {
        csipstatssuccessokmethod = value;
        csipstatssuccessokmethod.value_namespace = name_space;
        csipstatssuccessokmethod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsSuccessOkInbounds")
    {
        csipstatssuccessokinbounds = value;
        csipstatssuccessokinbounds.value_namespace = name_space;
        csipstatssuccessokinbounds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsSuccessOkOutbounds")
    {
        csipstatssuccessokoutbounds = value;
        csipstatssuccessokoutbounds.value_namespace = name_space;
        csipstatssuccessokoutbounds.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSIPUAMIB::Csipstatssuccessoktable::Csipstatssuccessokentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cSipStatsSuccessOkMethod")
    {
        csipstatssuccessokmethod.yfilter = yfilter;
    }
    if(value_path == "cSipStatsSuccessOkInbounds")
    {
        csipstatssuccessokinbounds.yfilter = yfilter;
    }
    if(value_path == "cSipStatsSuccessOkOutbounds")
    {
        csipstatssuccessokoutbounds.yfilter = yfilter;
    }
}

bool CISCOSIPUAMIB::Csipstatssuccessoktable::Csipstatssuccessokentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipStatsSuccessOkMethod" || name == "cSipStatsSuccessOkInbounds" || name == "cSipStatsSuccessOkOutbounds")
        return true;
    return false;
}

const Enum::YLeaf CISCOSIPUAMIB::Csipcfgbase::Csipcfgtransport::udp {1, "udp"};
const Enum::YLeaf CISCOSIPUAMIB::Csipcfgbase::Csipcfgtransport::tcp {2, "tcp"};
const Enum::YLeaf CISCOSIPUAMIB::Csipcfgbase::Csipcfgtransport::udpAndTcp {3, "udpAndTcp"};
const Enum::YLeaf CISCOSIPUAMIB::Csipcfgbase::Csipcfgtransport::disabled {4, "disabled"};

const Enum::YLeaf CISCOSIPUAMIB::Csipcfgbase::Csipcfgbindsrcaddrscope::none {0, "none"};
const Enum::YLeaf CISCOSIPUAMIB::Csipcfgbase::Csipcfgbindsrcaddrscope::all {1, "all"};
const Enum::YLeaf CISCOSIPUAMIB::Csipcfgbase::Csipcfgbindsrcaddrscope::control {2, "control"};

const Enum::YLeaf CISCOSIPUAMIB::Csipcfgbase::Csipcfgdnssrvquerystringformat::v1 {1, "v1"};
const Enum::YLeaf CISCOSIPUAMIB::Csipcfgbase::Csipcfgdnssrvquerystringformat::v2 {2, "v2"};

const Enum::YLeaf CISCOSIPUAMIB::Csipcfgbase::Csipcfgsymnatdirectionrole::none {1, "none"};
const Enum::YLeaf CISCOSIPUAMIB::Csipcfgbase::Csipcfgsymnatdirectionrole::passive {2, "passive"};
const Enum::YLeaf CISCOSIPUAMIB::Csipcfgbase::Csipcfgsymnatdirectionrole::active {3, "active"};

const Enum::YLeaf CISCOSIPUAMIB::Csipcfgbase::Csipcfgoffercallhold::directionAttr {1, "directionAttr"};
const Enum::YLeaf CISCOSIPUAMIB::Csipcfgbase::Csipcfgoffercallhold::connAddr {2, "connAddr"};

const Enum::YLeaf CISCOSIPUAMIB::Csipcfgpeer::Csipcfgoutsessiontransport::udp {1, "udp"};
const Enum::YLeaf CISCOSIPUAMIB::Csipcfgpeer::Csipcfgoutsessiontransport::tcp {2, "tcp"};

const Enum::YLeaf CISCOSIPUAMIB::Csipcfgpeer::Csipcfgreliable1Xxrsphdr::supported {1, "supported"};
const Enum::YLeaf CISCOSIPUAMIB::Csipcfgpeer::Csipcfgreliable1Xxrsphdr::require {2, "require"};
const Enum::YLeaf CISCOSIPUAMIB::Csipcfgpeer::Csipcfgreliable1Xxrsphdr::disabled {3, "disabled"};

const Enum::YLeaf CISCOSIPUAMIB::Csipcfgpeer::Csipcfgurltype::sip {1, "sip"};
const Enum::YLeaf CISCOSIPUAMIB::Csipcfgpeer::Csipcfgurltype::tel {2, "tel"};

const Enum::YLeaf CISCOSIPUAMIB::Csipcfgaaa::Csipcfgaaausername::callingNumber {1, "callingNumber"};
const Enum::YLeaf CISCOSIPUAMIB::Csipcfgaaa::Csipcfgaaausername::proxyAuth {2, "proxyAuth"};

const Enum::YLeaf CISCOSIPUAMIB::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrentry::Csipcfgbindsourceaddrscope::media {1, "media"};
const Enum::YLeaf CISCOSIPUAMIB::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrentry::Csipcfgbindsourceaddrscope::control {2, "control"};

const Enum::YLeaf CISCOSIPUAMIB::Csipcfgpeertable::Csipcfgpeerentry::Csipcfgpeeroutsessiontransport::system {1, "system"};
const Enum::YLeaf CISCOSIPUAMIB::Csipcfgpeertable::Csipcfgpeerentry::Csipcfgpeeroutsessiontransport::udp {2, "udp"};
const Enum::YLeaf CISCOSIPUAMIB::Csipcfgpeertable::Csipcfgpeerentry::Csipcfgpeeroutsessiontransport::tcp {3, "tcp"};

const Enum::YLeaf CISCOSIPUAMIB::Csipcfgpeertable::Csipcfgpeerentry::Csipcfgpeerreliable1Xxrsphdr::system {1, "system"};
const Enum::YLeaf CISCOSIPUAMIB::Csipcfgpeertable::Csipcfgpeerentry::Csipcfgpeerreliable1Xxrsphdr::supported {2, "supported"};
const Enum::YLeaf CISCOSIPUAMIB::Csipcfgpeertable::Csipcfgpeerentry::Csipcfgpeerreliable1Xxrsphdr::require {3, "require"};
const Enum::YLeaf CISCOSIPUAMIB::Csipcfgpeertable::Csipcfgpeerentry::Csipcfgpeerreliable1Xxrsphdr::disabled {4, "disabled"};

const Enum::YLeaf CISCOSIPUAMIB::Csipcfgpeertable::Csipcfgpeerentry::Csipcfgpeerurltype::system {1, "system"};
const Enum::YLeaf CISCOSIPUAMIB::Csipcfgpeertable::Csipcfgpeerentry::Csipcfgpeerurltype::sip {2, "sip"};
const Enum::YLeaf CISCOSIPUAMIB::Csipcfgpeertable::Csipcfgpeerentry::Csipcfgpeerurltype::tel {3, "tel"};


}
}

