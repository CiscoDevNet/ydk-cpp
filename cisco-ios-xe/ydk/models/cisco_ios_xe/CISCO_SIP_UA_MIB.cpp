
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

CiscoSipUaMib::CiscoSipUaMib()
    :
    csipcfgaaa(std::make_shared<CiscoSipUaMib::Csipcfgaaa>())
	,csipcfgbase(std::make_shared<CiscoSipUaMib::Csipcfgbase>())
	,csipcfgbindsourceaddrtable(std::make_shared<CiscoSipUaMib::Csipcfgbindsourceaddrtable>())
	,csipcfgcausestatustable(std::make_shared<CiscoSipUaMib::Csipcfgcausestatustable>())
	,csipcfgearlymediatable(std::make_shared<CiscoSipUaMib::Csipcfgearlymediatable>())
	,csipcfgpeer(std::make_shared<CiscoSipUaMib::Csipcfgpeer>())
	,csipcfgpeertable(std::make_shared<CiscoSipUaMib::Csipcfgpeertable>())
	,csipcfgretry(std::make_shared<CiscoSipUaMib::Csipcfgretry>())
	,csipcfgstatuscausetable(std::make_shared<CiscoSipUaMib::Csipcfgstatuscausetable>())
	,csipcfgtimer(std::make_shared<CiscoSipUaMib::Csipcfgtimer>())
	,csipcfgvoiceservicevoip(std::make_shared<CiscoSipUaMib::Csipcfgvoiceservicevoip>())
	,csipstatsconnection(std::make_shared<CiscoSipUaMib::Csipstatsconnection>())
	,csipstatserrclient(std::make_shared<CiscoSipUaMib::Csipstatserrclient>())
	,csipstatserrserver(std::make_shared<CiscoSipUaMib::Csipstatserrserver>())
	,csipstatsglobalfail(std::make_shared<CiscoSipUaMib::Csipstatsglobalfail>())
	,csipstatsinfo(std::make_shared<CiscoSipUaMib::Csipstatsinfo>())
	,csipstatsmisc(std::make_shared<CiscoSipUaMib::Csipstatsmisc>())
	,csipstatsredirect(std::make_shared<CiscoSipUaMib::Csipstatsredirect>())
	,csipstatsretry(std::make_shared<CiscoSipUaMib::Csipstatsretry>())
	,csipstatssuccess(std::make_shared<CiscoSipUaMib::Csipstatssuccess>())
	,csipstatssuccessoktable(std::make_shared<CiscoSipUaMib::Csipstatssuccessoktable>())
	,csipstatstraffic(std::make_shared<CiscoSipUaMib::Csipstatstraffic>())
{
    csipcfgaaa->parent = this;

    csipcfgbase->parent = this;

    csipcfgbindsourceaddrtable->parent = this;

    csipcfgcausestatustable->parent = this;

    csipcfgearlymediatable->parent = this;

    csipcfgpeer->parent = this;

    csipcfgpeertable->parent = this;

    csipcfgretry->parent = this;

    csipcfgstatuscausetable->parent = this;

    csipcfgtimer->parent = this;

    csipcfgvoiceservicevoip->parent = this;

    csipstatsconnection->parent = this;

    csipstatserrclient->parent = this;

    csipstatserrserver->parent = this;

    csipstatsglobalfail->parent = this;

    csipstatsinfo->parent = this;

    csipstatsmisc->parent = this;

    csipstatsredirect->parent = this;

    csipstatsretry->parent = this;

    csipstatssuccess->parent = this;

    csipstatssuccessoktable->parent = this;

    csipstatstraffic->parent = this;

    yang_name = "CISCO-SIP-UA-MIB"; yang_parent_name = "CISCO-SIP-UA-MIB";
}

CiscoSipUaMib::~CiscoSipUaMib()
{
}

bool CiscoSipUaMib::has_data() const
{
    return (csipcfgaaa !=  nullptr && csipcfgaaa->has_data())
	|| (csipcfgbase !=  nullptr && csipcfgbase->has_data())
	|| (csipcfgbindsourceaddrtable !=  nullptr && csipcfgbindsourceaddrtable->has_data())
	|| (csipcfgcausestatustable !=  nullptr && csipcfgcausestatustable->has_data())
	|| (csipcfgearlymediatable !=  nullptr && csipcfgearlymediatable->has_data())
	|| (csipcfgpeer !=  nullptr && csipcfgpeer->has_data())
	|| (csipcfgpeertable !=  nullptr && csipcfgpeertable->has_data())
	|| (csipcfgretry !=  nullptr && csipcfgretry->has_data())
	|| (csipcfgstatuscausetable !=  nullptr && csipcfgstatuscausetable->has_data())
	|| (csipcfgtimer !=  nullptr && csipcfgtimer->has_data())
	|| (csipcfgvoiceservicevoip !=  nullptr && csipcfgvoiceservicevoip->has_data())
	|| (csipstatsconnection !=  nullptr && csipstatsconnection->has_data())
	|| (csipstatserrclient !=  nullptr && csipstatserrclient->has_data())
	|| (csipstatserrserver !=  nullptr && csipstatserrserver->has_data())
	|| (csipstatsglobalfail !=  nullptr && csipstatsglobalfail->has_data())
	|| (csipstatsinfo !=  nullptr && csipstatsinfo->has_data())
	|| (csipstatsmisc !=  nullptr && csipstatsmisc->has_data())
	|| (csipstatsredirect !=  nullptr && csipstatsredirect->has_data())
	|| (csipstatsretry !=  nullptr && csipstatsretry->has_data())
	|| (csipstatssuccess !=  nullptr && csipstatssuccess->has_data())
	|| (csipstatssuccessoktable !=  nullptr && csipstatssuccessoktable->has_data())
	|| (csipstatstraffic !=  nullptr && csipstatstraffic->has_data());
}

bool CiscoSipUaMib::has_operation() const
{
    return is_set(yfilter)
	|| (csipcfgaaa !=  nullptr && csipcfgaaa->has_operation())
	|| (csipcfgbase !=  nullptr && csipcfgbase->has_operation())
	|| (csipcfgbindsourceaddrtable !=  nullptr && csipcfgbindsourceaddrtable->has_operation())
	|| (csipcfgcausestatustable !=  nullptr && csipcfgcausestatustable->has_operation())
	|| (csipcfgearlymediatable !=  nullptr && csipcfgearlymediatable->has_operation())
	|| (csipcfgpeer !=  nullptr && csipcfgpeer->has_operation())
	|| (csipcfgpeertable !=  nullptr && csipcfgpeertable->has_operation())
	|| (csipcfgretry !=  nullptr && csipcfgretry->has_operation())
	|| (csipcfgstatuscausetable !=  nullptr && csipcfgstatuscausetable->has_operation())
	|| (csipcfgtimer !=  nullptr && csipcfgtimer->has_operation())
	|| (csipcfgvoiceservicevoip !=  nullptr && csipcfgvoiceservicevoip->has_operation())
	|| (csipstatsconnection !=  nullptr && csipstatsconnection->has_operation())
	|| (csipstatserrclient !=  nullptr && csipstatserrclient->has_operation())
	|| (csipstatserrserver !=  nullptr && csipstatserrserver->has_operation())
	|| (csipstatsglobalfail !=  nullptr && csipstatsglobalfail->has_operation())
	|| (csipstatsinfo !=  nullptr && csipstatsinfo->has_operation())
	|| (csipstatsmisc !=  nullptr && csipstatsmisc->has_operation())
	|| (csipstatsredirect !=  nullptr && csipstatsredirect->has_operation())
	|| (csipstatsretry !=  nullptr && csipstatsretry->has_operation())
	|| (csipstatssuccess !=  nullptr && csipstatssuccess->has_operation())
	|| (csipstatssuccessoktable !=  nullptr && csipstatssuccessoktable->has_operation())
	|| (csipstatstraffic !=  nullptr && csipstatstraffic->has_operation());
}

std::string CiscoSipUaMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB";

    return path_buffer.str();

}

const EntityPath CiscoSipUaMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoSipUaMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cSipCfgAaa")
    {
        if(csipcfgaaa == nullptr)
        {
            csipcfgaaa = std::make_shared<CiscoSipUaMib::Csipcfgaaa>();
        }
        return csipcfgaaa;
    }

    if(child_yang_name == "cSipCfgBase")
    {
        if(csipcfgbase == nullptr)
        {
            csipcfgbase = std::make_shared<CiscoSipUaMib::Csipcfgbase>();
        }
        return csipcfgbase;
    }

    if(child_yang_name == "cSipCfgBindSourceAddrTable")
    {
        if(csipcfgbindsourceaddrtable == nullptr)
        {
            csipcfgbindsourceaddrtable = std::make_shared<CiscoSipUaMib::Csipcfgbindsourceaddrtable>();
        }
        return csipcfgbindsourceaddrtable;
    }

    if(child_yang_name == "cSipCfgCauseStatusTable")
    {
        if(csipcfgcausestatustable == nullptr)
        {
            csipcfgcausestatustable = std::make_shared<CiscoSipUaMib::Csipcfgcausestatustable>();
        }
        return csipcfgcausestatustable;
    }

    if(child_yang_name == "cSipCfgEarlyMediaTable")
    {
        if(csipcfgearlymediatable == nullptr)
        {
            csipcfgearlymediatable = std::make_shared<CiscoSipUaMib::Csipcfgearlymediatable>();
        }
        return csipcfgearlymediatable;
    }

    if(child_yang_name == "cSipCfgPeer")
    {
        if(csipcfgpeer == nullptr)
        {
            csipcfgpeer = std::make_shared<CiscoSipUaMib::Csipcfgpeer>();
        }
        return csipcfgpeer;
    }

    if(child_yang_name == "cSipCfgPeerTable")
    {
        if(csipcfgpeertable == nullptr)
        {
            csipcfgpeertable = std::make_shared<CiscoSipUaMib::Csipcfgpeertable>();
        }
        return csipcfgpeertable;
    }

    if(child_yang_name == "cSipCfgRetry")
    {
        if(csipcfgretry == nullptr)
        {
            csipcfgretry = std::make_shared<CiscoSipUaMib::Csipcfgretry>();
        }
        return csipcfgretry;
    }

    if(child_yang_name == "cSipCfgStatusCauseTable")
    {
        if(csipcfgstatuscausetable == nullptr)
        {
            csipcfgstatuscausetable = std::make_shared<CiscoSipUaMib::Csipcfgstatuscausetable>();
        }
        return csipcfgstatuscausetable;
    }

    if(child_yang_name == "cSipCfgTimer")
    {
        if(csipcfgtimer == nullptr)
        {
            csipcfgtimer = std::make_shared<CiscoSipUaMib::Csipcfgtimer>();
        }
        return csipcfgtimer;
    }

    if(child_yang_name == "cSipCfgVoiceServiceVoip")
    {
        if(csipcfgvoiceservicevoip == nullptr)
        {
            csipcfgvoiceservicevoip = std::make_shared<CiscoSipUaMib::Csipcfgvoiceservicevoip>();
        }
        return csipcfgvoiceservicevoip;
    }

    if(child_yang_name == "cSipStatsConnection")
    {
        if(csipstatsconnection == nullptr)
        {
            csipstatsconnection = std::make_shared<CiscoSipUaMib::Csipstatsconnection>();
        }
        return csipstatsconnection;
    }

    if(child_yang_name == "cSipStatsErrClient")
    {
        if(csipstatserrclient == nullptr)
        {
            csipstatserrclient = std::make_shared<CiscoSipUaMib::Csipstatserrclient>();
        }
        return csipstatserrclient;
    }

    if(child_yang_name == "cSipStatsErrServer")
    {
        if(csipstatserrserver == nullptr)
        {
            csipstatserrserver = std::make_shared<CiscoSipUaMib::Csipstatserrserver>();
        }
        return csipstatserrserver;
    }

    if(child_yang_name == "cSipStatsGlobalFail")
    {
        if(csipstatsglobalfail == nullptr)
        {
            csipstatsglobalfail = std::make_shared<CiscoSipUaMib::Csipstatsglobalfail>();
        }
        return csipstatsglobalfail;
    }

    if(child_yang_name == "cSipStatsInfo")
    {
        if(csipstatsinfo == nullptr)
        {
            csipstatsinfo = std::make_shared<CiscoSipUaMib::Csipstatsinfo>();
        }
        return csipstatsinfo;
    }

    if(child_yang_name == "cSipStatsMisc")
    {
        if(csipstatsmisc == nullptr)
        {
            csipstatsmisc = std::make_shared<CiscoSipUaMib::Csipstatsmisc>();
        }
        return csipstatsmisc;
    }

    if(child_yang_name == "cSipStatsRedirect")
    {
        if(csipstatsredirect == nullptr)
        {
            csipstatsredirect = std::make_shared<CiscoSipUaMib::Csipstatsredirect>();
        }
        return csipstatsredirect;
    }

    if(child_yang_name == "cSipStatsRetry")
    {
        if(csipstatsretry == nullptr)
        {
            csipstatsretry = std::make_shared<CiscoSipUaMib::Csipstatsretry>();
        }
        return csipstatsretry;
    }

    if(child_yang_name == "cSipStatsSuccess")
    {
        if(csipstatssuccess == nullptr)
        {
            csipstatssuccess = std::make_shared<CiscoSipUaMib::Csipstatssuccess>();
        }
        return csipstatssuccess;
    }

    if(child_yang_name == "cSipStatsSuccessOkTable")
    {
        if(csipstatssuccessoktable == nullptr)
        {
            csipstatssuccessoktable = std::make_shared<CiscoSipUaMib::Csipstatssuccessoktable>();
        }
        return csipstatssuccessoktable;
    }

    if(child_yang_name == "cSipStatsTraffic")
    {
        if(csipstatstraffic == nullptr)
        {
            csipstatstraffic = std::make_shared<CiscoSipUaMib::Csipstatstraffic>();
        }
        return csipstatstraffic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSipUaMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(csipcfgaaa != nullptr)
    {
        children["cSipCfgAaa"] = csipcfgaaa;
    }

    if(csipcfgbase != nullptr)
    {
        children["cSipCfgBase"] = csipcfgbase;
    }

    if(csipcfgbindsourceaddrtable != nullptr)
    {
        children["cSipCfgBindSourceAddrTable"] = csipcfgbindsourceaddrtable;
    }

    if(csipcfgcausestatustable != nullptr)
    {
        children["cSipCfgCauseStatusTable"] = csipcfgcausestatustable;
    }

    if(csipcfgearlymediatable != nullptr)
    {
        children["cSipCfgEarlyMediaTable"] = csipcfgearlymediatable;
    }

    if(csipcfgpeer != nullptr)
    {
        children["cSipCfgPeer"] = csipcfgpeer;
    }

    if(csipcfgpeertable != nullptr)
    {
        children["cSipCfgPeerTable"] = csipcfgpeertable;
    }

    if(csipcfgretry != nullptr)
    {
        children["cSipCfgRetry"] = csipcfgretry;
    }

    if(csipcfgstatuscausetable != nullptr)
    {
        children["cSipCfgStatusCauseTable"] = csipcfgstatuscausetable;
    }

    if(csipcfgtimer != nullptr)
    {
        children["cSipCfgTimer"] = csipcfgtimer;
    }

    if(csipcfgvoiceservicevoip != nullptr)
    {
        children["cSipCfgVoiceServiceVoip"] = csipcfgvoiceservicevoip;
    }

    if(csipstatsconnection != nullptr)
    {
        children["cSipStatsConnection"] = csipstatsconnection;
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

    if(csipstatsinfo != nullptr)
    {
        children["cSipStatsInfo"] = csipstatsinfo;
    }

    if(csipstatsmisc != nullptr)
    {
        children["cSipStatsMisc"] = csipstatsmisc;
    }

    if(csipstatsredirect != nullptr)
    {
        children["cSipStatsRedirect"] = csipstatsredirect;
    }

    if(csipstatsretry != nullptr)
    {
        children["cSipStatsRetry"] = csipstatsretry;
    }

    if(csipstatssuccess != nullptr)
    {
        children["cSipStatsSuccess"] = csipstatssuccess;
    }

    if(csipstatssuccessoktable != nullptr)
    {
        children["cSipStatsSuccessOkTable"] = csipstatssuccessoktable;
    }

    if(csipstatstraffic != nullptr)
    {
        children["cSipStatsTraffic"] = csipstatstraffic;
    }

    return children;
}

void CiscoSipUaMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoSipUaMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoSipUaMib::clone_ptr() const
{
    return std::make_shared<CiscoSipUaMib>();
}

std::string CiscoSipUaMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoSipUaMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoSipUaMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoSipUaMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoSipUaMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipCfgAaa" || name == "cSipCfgBase" || name == "cSipCfgBindSourceAddrTable" || name == "cSipCfgCauseStatusTable" || name == "cSipCfgEarlyMediaTable" || name == "cSipCfgPeer" || name == "cSipCfgPeerTable" || name == "cSipCfgRetry" || name == "cSipCfgStatusCauseTable" || name == "cSipCfgTimer" || name == "cSipCfgVoiceServiceVoip" || name == "cSipStatsConnection" || name == "cSipStatsErrClient" || name == "cSipStatsErrServer" || name == "cSipStatsGlobalFail" || name == "cSipStatsInfo" || name == "cSipStatsMisc" || name == "cSipStatsRedirect" || name == "cSipStatsRetry" || name == "cSipStatsSuccess" || name == "cSipStatsSuccessOkTable" || name == "cSipStatsTraffic")
        return true;
    return false;
}

CiscoSipUaMib::Csipcfgbase::Csipcfgbase()
    :
    csipcfgbindsrcaddrinterface{YType::int32, "cSipCfgBindSrcAddrInterface"},
    csipcfgbindsrcaddrscope{YType::enumeration, "cSipCfgBindSrcAddrScope"},
    csipcfgdnssrvquerystringformat{YType::enumeration, "cSipCfgDnsSrvQueryStringFormat"},
    csipcfgmaxforwards{YType::int32, "cSipCfgMaxForwards"},
    csipcfgmaximumforwards{YType::int32, "cSipCfgMaximumForwards"},
    csipcfgoffercallhold{YType::enumeration, "cSipCfgOfferCallHold"},
    csipcfgreasonheaderoveride{YType::boolean, "cSipCfgReasonHeaderOveride"},
    csipcfgredirectiondisabled{YType::boolean, "cSipCfgRedirectionDisabled"},
    csipcfgsuspendresumeenabled{YType::boolean, "cSipCfgSuspendResumeEnabled"},
    csipcfgsymnatdirectionrole{YType::enumeration, "cSipCfgSymNatDirectionRole"},
    csipcfgsymnatenabled{YType::boolean, "cSipCfgSymNatEnabled"},
    csipcfgtransport{YType::enumeration, "cSipCfgTransport"},
    csipcfguserlocationserveraddr{YType::str, "cSipCfgUserLocationServerAddr"},
    csipcfgversion{YType::str, "cSipCfgVersion"}
{
    yang_name = "cSipCfgBase"; yang_parent_name = "CISCO-SIP-UA-MIB";
}

CiscoSipUaMib::Csipcfgbase::~Csipcfgbase()
{
}

bool CiscoSipUaMib::Csipcfgbase::has_data() const
{
    return csipcfgbindsrcaddrinterface.is_set
	|| csipcfgbindsrcaddrscope.is_set
	|| csipcfgdnssrvquerystringformat.is_set
	|| csipcfgmaxforwards.is_set
	|| csipcfgmaximumforwards.is_set
	|| csipcfgoffercallhold.is_set
	|| csipcfgreasonheaderoveride.is_set
	|| csipcfgredirectiondisabled.is_set
	|| csipcfgsuspendresumeenabled.is_set
	|| csipcfgsymnatdirectionrole.is_set
	|| csipcfgsymnatenabled.is_set
	|| csipcfgtransport.is_set
	|| csipcfguserlocationserveraddr.is_set
	|| csipcfgversion.is_set;
}

bool CiscoSipUaMib::Csipcfgbase::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipcfgbindsrcaddrinterface.yfilter)
	|| ydk::is_set(csipcfgbindsrcaddrscope.yfilter)
	|| ydk::is_set(csipcfgdnssrvquerystringformat.yfilter)
	|| ydk::is_set(csipcfgmaxforwards.yfilter)
	|| ydk::is_set(csipcfgmaximumforwards.yfilter)
	|| ydk::is_set(csipcfgoffercallhold.yfilter)
	|| ydk::is_set(csipcfgreasonheaderoveride.yfilter)
	|| ydk::is_set(csipcfgredirectiondisabled.yfilter)
	|| ydk::is_set(csipcfgsuspendresumeenabled.yfilter)
	|| ydk::is_set(csipcfgsymnatdirectionrole.yfilter)
	|| ydk::is_set(csipcfgsymnatenabled.yfilter)
	|| ydk::is_set(csipcfgtransport.yfilter)
	|| ydk::is_set(csipcfguserlocationserveraddr.yfilter)
	|| ydk::is_set(csipcfgversion.yfilter);
}

std::string CiscoSipUaMib::Csipcfgbase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipCfgBase";

    return path_buffer.str();

}

const EntityPath CiscoSipUaMib::Csipcfgbase::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipcfgbindsrcaddrinterface.is_set || is_set(csipcfgbindsrcaddrinterface.yfilter)) leaf_name_data.push_back(csipcfgbindsrcaddrinterface.get_name_leafdata());
    if (csipcfgbindsrcaddrscope.is_set || is_set(csipcfgbindsrcaddrscope.yfilter)) leaf_name_data.push_back(csipcfgbindsrcaddrscope.get_name_leafdata());
    if (csipcfgdnssrvquerystringformat.is_set || is_set(csipcfgdnssrvquerystringformat.yfilter)) leaf_name_data.push_back(csipcfgdnssrvquerystringformat.get_name_leafdata());
    if (csipcfgmaxforwards.is_set || is_set(csipcfgmaxforwards.yfilter)) leaf_name_data.push_back(csipcfgmaxforwards.get_name_leafdata());
    if (csipcfgmaximumforwards.is_set || is_set(csipcfgmaximumforwards.yfilter)) leaf_name_data.push_back(csipcfgmaximumforwards.get_name_leafdata());
    if (csipcfgoffercallhold.is_set || is_set(csipcfgoffercallhold.yfilter)) leaf_name_data.push_back(csipcfgoffercallhold.get_name_leafdata());
    if (csipcfgreasonheaderoveride.is_set || is_set(csipcfgreasonheaderoveride.yfilter)) leaf_name_data.push_back(csipcfgreasonheaderoveride.get_name_leafdata());
    if (csipcfgredirectiondisabled.is_set || is_set(csipcfgredirectiondisabled.yfilter)) leaf_name_data.push_back(csipcfgredirectiondisabled.get_name_leafdata());
    if (csipcfgsuspendresumeenabled.is_set || is_set(csipcfgsuspendresumeenabled.yfilter)) leaf_name_data.push_back(csipcfgsuspendresumeenabled.get_name_leafdata());
    if (csipcfgsymnatdirectionrole.is_set || is_set(csipcfgsymnatdirectionrole.yfilter)) leaf_name_data.push_back(csipcfgsymnatdirectionrole.get_name_leafdata());
    if (csipcfgsymnatenabled.is_set || is_set(csipcfgsymnatenabled.yfilter)) leaf_name_data.push_back(csipcfgsymnatenabled.get_name_leafdata());
    if (csipcfgtransport.is_set || is_set(csipcfgtransport.yfilter)) leaf_name_data.push_back(csipcfgtransport.get_name_leafdata());
    if (csipcfguserlocationserveraddr.is_set || is_set(csipcfguserlocationserveraddr.yfilter)) leaf_name_data.push_back(csipcfguserlocationserveraddr.get_name_leafdata());
    if (csipcfgversion.is_set || is_set(csipcfgversion.yfilter)) leaf_name_data.push_back(csipcfgversion.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSipUaMib::Csipcfgbase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSipUaMib::Csipcfgbase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSipUaMib::Csipcfgbase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "cSipCfgMaxForwards")
    {
        csipcfgmaxforwards = value;
        csipcfgmaxforwards.value_namespace = name_space;
        csipcfgmaxforwards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgMaximumForwards")
    {
        csipcfgmaximumforwards = value;
        csipcfgmaximumforwards.value_namespace = name_space;
        csipcfgmaximumforwards.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cSipCfgRedirectionDisabled")
    {
        csipcfgredirectiondisabled = value;
        csipcfgredirectiondisabled.value_namespace = name_space;
        csipcfgredirectiondisabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgSuspendResumeEnabled")
    {
        csipcfgsuspendresumeenabled = value;
        csipcfgsuspendresumeenabled.value_namespace = name_space;
        csipcfgsuspendresumeenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgSymNatDirectionRole")
    {
        csipcfgsymnatdirectionrole = value;
        csipcfgsymnatdirectionrole.value_namespace = name_space;
        csipcfgsymnatdirectionrole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgSymNatEnabled")
    {
        csipcfgsymnatenabled = value;
        csipcfgsymnatenabled.value_namespace = name_space;
        csipcfgsymnatenabled.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cSipCfgVersion")
    {
        csipcfgversion = value;
        csipcfgversion.value_namespace = name_space;
        csipcfgversion.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSipUaMib::Csipcfgbase::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "cSipCfgMaxForwards")
    {
        csipcfgmaxforwards.yfilter = yfilter;
    }
    if(value_path == "cSipCfgMaximumForwards")
    {
        csipcfgmaximumforwards.yfilter = yfilter;
    }
    if(value_path == "cSipCfgOfferCallHold")
    {
        csipcfgoffercallhold.yfilter = yfilter;
    }
    if(value_path == "cSipCfgReasonHeaderOveride")
    {
        csipcfgreasonheaderoveride.yfilter = yfilter;
    }
    if(value_path == "cSipCfgRedirectionDisabled")
    {
        csipcfgredirectiondisabled.yfilter = yfilter;
    }
    if(value_path == "cSipCfgSuspendResumeEnabled")
    {
        csipcfgsuspendresumeenabled.yfilter = yfilter;
    }
    if(value_path == "cSipCfgSymNatDirectionRole")
    {
        csipcfgsymnatdirectionrole.yfilter = yfilter;
    }
    if(value_path == "cSipCfgSymNatEnabled")
    {
        csipcfgsymnatenabled.yfilter = yfilter;
    }
    if(value_path == "cSipCfgTransport")
    {
        csipcfgtransport.yfilter = yfilter;
    }
    if(value_path == "cSipCfgUserLocationServerAddr")
    {
        csipcfguserlocationserveraddr.yfilter = yfilter;
    }
    if(value_path == "cSipCfgVersion")
    {
        csipcfgversion.yfilter = yfilter;
    }
}

bool CiscoSipUaMib::Csipcfgbase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipCfgBindSrcAddrInterface" || name == "cSipCfgBindSrcAddrScope" || name == "cSipCfgDnsSrvQueryStringFormat" || name == "cSipCfgMaxForwards" || name == "cSipCfgMaximumForwards" || name == "cSipCfgOfferCallHold" || name == "cSipCfgReasonHeaderOveride" || name == "cSipCfgRedirectionDisabled" || name == "cSipCfgSuspendResumeEnabled" || name == "cSipCfgSymNatDirectionRole" || name == "cSipCfgSymNatEnabled" || name == "cSipCfgTransport" || name == "cSipCfgUserLocationServerAddr" || name == "cSipCfgVersion")
        return true;
    return false;
}

CiscoSipUaMib::Csipcfgtimer::Csipcfgtimer()
    :
    csipcfgtimerbufferinvite{YType::int32, "cSipCfgTimerBufferInvite"},
    csipcfgtimercomet{YType::int32, "cSipCfgTimerComet"},
    csipcfgtimerconnect{YType::int32, "cSipCfgTimerConnect"},
    csipcfgtimerconnectionaging{YType::int32, "cSipCfgTimerConnectionAging"},
    csipcfgtimerdisconnect{YType::int32, "cSipCfgTimerDisconnect"},
    csipcfgtimerexpires{YType::int32, "cSipCfgTimerExpires"},
    csipcfgtimerhold{YType::int32, "cSipCfgTimerHold"},
    csipcfgtimerinfo{YType::int32, "cSipCfgTimerInfo"},
    csipcfgtimernotify{YType::int32, "cSipCfgTimerNotify"},
    csipcfgtimerprack{YType::int32, "cSipCfgTimerPrack"},
    csipcfgtimerrefer{YType::int32, "cSipCfgTimerRefer"},
    csipcfgtimerreliablersp{YType::int32, "cSipCfgTimerReliableRsp"},
    csipcfgtimersessiontimer{YType::int32, "cSipCfgTimerSessionTimer"},
    csipcfgtimertrying{YType::int32, "cSipCfgTimerTrying"}
{
    yang_name = "cSipCfgTimer"; yang_parent_name = "CISCO-SIP-UA-MIB";
}

CiscoSipUaMib::Csipcfgtimer::~Csipcfgtimer()
{
}

bool CiscoSipUaMib::Csipcfgtimer::has_data() const
{
    return csipcfgtimerbufferinvite.is_set
	|| csipcfgtimercomet.is_set
	|| csipcfgtimerconnect.is_set
	|| csipcfgtimerconnectionaging.is_set
	|| csipcfgtimerdisconnect.is_set
	|| csipcfgtimerexpires.is_set
	|| csipcfgtimerhold.is_set
	|| csipcfgtimerinfo.is_set
	|| csipcfgtimernotify.is_set
	|| csipcfgtimerprack.is_set
	|| csipcfgtimerrefer.is_set
	|| csipcfgtimerreliablersp.is_set
	|| csipcfgtimersessiontimer.is_set
	|| csipcfgtimertrying.is_set;
}

bool CiscoSipUaMib::Csipcfgtimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipcfgtimerbufferinvite.yfilter)
	|| ydk::is_set(csipcfgtimercomet.yfilter)
	|| ydk::is_set(csipcfgtimerconnect.yfilter)
	|| ydk::is_set(csipcfgtimerconnectionaging.yfilter)
	|| ydk::is_set(csipcfgtimerdisconnect.yfilter)
	|| ydk::is_set(csipcfgtimerexpires.yfilter)
	|| ydk::is_set(csipcfgtimerhold.yfilter)
	|| ydk::is_set(csipcfgtimerinfo.yfilter)
	|| ydk::is_set(csipcfgtimernotify.yfilter)
	|| ydk::is_set(csipcfgtimerprack.yfilter)
	|| ydk::is_set(csipcfgtimerrefer.yfilter)
	|| ydk::is_set(csipcfgtimerreliablersp.yfilter)
	|| ydk::is_set(csipcfgtimersessiontimer.yfilter)
	|| ydk::is_set(csipcfgtimertrying.yfilter);
}

std::string CiscoSipUaMib::Csipcfgtimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipCfgTimer";

    return path_buffer.str();

}

const EntityPath CiscoSipUaMib::Csipcfgtimer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipcfgtimerbufferinvite.is_set || is_set(csipcfgtimerbufferinvite.yfilter)) leaf_name_data.push_back(csipcfgtimerbufferinvite.get_name_leafdata());
    if (csipcfgtimercomet.is_set || is_set(csipcfgtimercomet.yfilter)) leaf_name_data.push_back(csipcfgtimercomet.get_name_leafdata());
    if (csipcfgtimerconnect.is_set || is_set(csipcfgtimerconnect.yfilter)) leaf_name_data.push_back(csipcfgtimerconnect.get_name_leafdata());
    if (csipcfgtimerconnectionaging.is_set || is_set(csipcfgtimerconnectionaging.yfilter)) leaf_name_data.push_back(csipcfgtimerconnectionaging.get_name_leafdata());
    if (csipcfgtimerdisconnect.is_set || is_set(csipcfgtimerdisconnect.yfilter)) leaf_name_data.push_back(csipcfgtimerdisconnect.get_name_leafdata());
    if (csipcfgtimerexpires.is_set || is_set(csipcfgtimerexpires.yfilter)) leaf_name_data.push_back(csipcfgtimerexpires.get_name_leafdata());
    if (csipcfgtimerhold.is_set || is_set(csipcfgtimerhold.yfilter)) leaf_name_data.push_back(csipcfgtimerhold.get_name_leafdata());
    if (csipcfgtimerinfo.is_set || is_set(csipcfgtimerinfo.yfilter)) leaf_name_data.push_back(csipcfgtimerinfo.get_name_leafdata());
    if (csipcfgtimernotify.is_set || is_set(csipcfgtimernotify.yfilter)) leaf_name_data.push_back(csipcfgtimernotify.get_name_leafdata());
    if (csipcfgtimerprack.is_set || is_set(csipcfgtimerprack.yfilter)) leaf_name_data.push_back(csipcfgtimerprack.get_name_leafdata());
    if (csipcfgtimerrefer.is_set || is_set(csipcfgtimerrefer.yfilter)) leaf_name_data.push_back(csipcfgtimerrefer.get_name_leafdata());
    if (csipcfgtimerreliablersp.is_set || is_set(csipcfgtimerreliablersp.yfilter)) leaf_name_data.push_back(csipcfgtimerreliablersp.get_name_leafdata());
    if (csipcfgtimersessiontimer.is_set || is_set(csipcfgtimersessiontimer.yfilter)) leaf_name_data.push_back(csipcfgtimersessiontimer.get_name_leafdata());
    if (csipcfgtimertrying.is_set || is_set(csipcfgtimertrying.yfilter)) leaf_name_data.push_back(csipcfgtimertrying.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSipUaMib::Csipcfgtimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSipUaMib::Csipcfgtimer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSipUaMib::Csipcfgtimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cSipCfgTimerBufferInvite")
    {
        csipcfgtimerbufferinvite = value;
        csipcfgtimerbufferinvite.value_namespace = name_space;
        csipcfgtimerbufferinvite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgTimerComet")
    {
        csipcfgtimercomet = value;
        csipcfgtimercomet.value_namespace = name_space;
        csipcfgtimercomet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgTimerConnect")
    {
        csipcfgtimerconnect = value;
        csipcfgtimerconnect.value_namespace = name_space;
        csipcfgtimerconnect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgTimerConnectionAging")
    {
        csipcfgtimerconnectionaging = value;
        csipcfgtimerconnectionaging.value_namespace = name_space;
        csipcfgtimerconnectionaging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgTimerDisconnect")
    {
        csipcfgtimerdisconnect = value;
        csipcfgtimerdisconnect.value_namespace = name_space;
        csipcfgtimerdisconnect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgTimerExpires")
    {
        csipcfgtimerexpires = value;
        csipcfgtimerexpires.value_namespace = name_space;
        csipcfgtimerexpires.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cSipCfgTimerNotify")
    {
        csipcfgtimernotify = value;
        csipcfgtimernotify.value_namespace = name_space;
        csipcfgtimernotify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgTimerPrack")
    {
        csipcfgtimerprack = value;
        csipcfgtimerprack.value_namespace = name_space;
        csipcfgtimerprack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgTimerRefer")
    {
        csipcfgtimerrefer = value;
        csipcfgtimerrefer.value_namespace = name_space;
        csipcfgtimerrefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgTimerReliableRsp")
    {
        csipcfgtimerreliablersp = value;
        csipcfgtimerreliablersp.value_namespace = name_space;
        csipcfgtimerreliablersp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgTimerSessionTimer")
    {
        csipcfgtimersessiontimer = value;
        csipcfgtimersessiontimer.value_namespace = name_space;
        csipcfgtimersessiontimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgTimerTrying")
    {
        csipcfgtimertrying = value;
        csipcfgtimertrying.value_namespace = name_space;
        csipcfgtimertrying.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSipUaMib::Csipcfgtimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cSipCfgTimerBufferInvite")
    {
        csipcfgtimerbufferinvite.yfilter = yfilter;
    }
    if(value_path == "cSipCfgTimerComet")
    {
        csipcfgtimercomet.yfilter = yfilter;
    }
    if(value_path == "cSipCfgTimerConnect")
    {
        csipcfgtimerconnect.yfilter = yfilter;
    }
    if(value_path == "cSipCfgTimerConnectionAging")
    {
        csipcfgtimerconnectionaging.yfilter = yfilter;
    }
    if(value_path == "cSipCfgTimerDisconnect")
    {
        csipcfgtimerdisconnect.yfilter = yfilter;
    }
    if(value_path == "cSipCfgTimerExpires")
    {
        csipcfgtimerexpires.yfilter = yfilter;
    }
    if(value_path == "cSipCfgTimerHold")
    {
        csipcfgtimerhold.yfilter = yfilter;
    }
    if(value_path == "cSipCfgTimerInfo")
    {
        csipcfgtimerinfo.yfilter = yfilter;
    }
    if(value_path == "cSipCfgTimerNotify")
    {
        csipcfgtimernotify.yfilter = yfilter;
    }
    if(value_path == "cSipCfgTimerPrack")
    {
        csipcfgtimerprack.yfilter = yfilter;
    }
    if(value_path == "cSipCfgTimerRefer")
    {
        csipcfgtimerrefer.yfilter = yfilter;
    }
    if(value_path == "cSipCfgTimerReliableRsp")
    {
        csipcfgtimerreliablersp.yfilter = yfilter;
    }
    if(value_path == "cSipCfgTimerSessionTimer")
    {
        csipcfgtimersessiontimer.yfilter = yfilter;
    }
    if(value_path == "cSipCfgTimerTrying")
    {
        csipcfgtimertrying.yfilter = yfilter;
    }
}

bool CiscoSipUaMib::Csipcfgtimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipCfgTimerBufferInvite" || name == "cSipCfgTimerComet" || name == "cSipCfgTimerConnect" || name == "cSipCfgTimerConnectionAging" || name == "cSipCfgTimerDisconnect" || name == "cSipCfgTimerExpires" || name == "cSipCfgTimerHold" || name == "cSipCfgTimerInfo" || name == "cSipCfgTimerNotify" || name == "cSipCfgTimerPrack" || name == "cSipCfgTimerRefer" || name == "cSipCfgTimerReliableRsp" || name == "cSipCfgTimerSessionTimer" || name == "cSipCfgTimerTrying")
        return true;
    return false;
}

CiscoSipUaMib::Csipcfgretry::Csipcfgretry()
    :
    csipcfgretrybye{YType::int32, "cSipCfgRetryBye"},
    csipcfgretrycancel{YType::int32, "cSipCfgRetryCancel"},
    csipcfgretrycomet{YType::int32, "cSipCfgRetryComet"},
    csipcfgretryinfo{YType::int32, "cSipCfgRetryInfo"},
    csipcfgretryinvite{YType::int32, "cSipCfgRetryInvite"},
    csipcfgretrynotify{YType::int32, "cSipCfgRetryNotify"},
    csipcfgretryprack{YType::int32, "cSipCfgRetryPrack"},
    csipcfgretryrefer{YType::int32, "cSipCfgRetryRefer"},
    csipcfgretryregister{YType::int32, "cSipCfgRetryRegister"},
    csipcfgretryreliablersp{YType::int32, "cSipCfgRetryReliableRsp"},
    csipcfgretryresponse{YType::int32, "cSipCfgRetryResponse"},
    csipcfgretrysubscribe{YType::int32, "cSipCfgRetrySubscribe"}
{
    yang_name = "cSipCfgRetry"; yang_parent_name = "CISCO-SIP-UA-MIB";
}

CiscoSipUaMib::Csipcfgretry::~Csipcfgretry()
{
}

bool CiscoSipUaMib::Csipcfgretry::has_data() const
{
    return csipcfgretrybye.is_set
	|| csipcfgretrycancel.is_set
	|| csipcfgretrycomet.is_set
	|| csipcfgretryinfo.is_set
	|| csipcfgretryinvite.is_set
	|| csipcfgretrynotify.is_set
	|| csipcfgretryprack.is_set
	|| csipcfgretryrefer.is_set
	|| csipcfgretryregister.is_set
	|| csipcfgretryreliablersp.is_set
	|| csipcfgretryresponse.is_set
	|| csipcfgretrysubscribe.is_set;
}

bool CiscoSipUaMib::Csipcfgretry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipcfgretrybye.yfilter)
	|| ydk::is_set(csipcfgretrycancel.yfilter)
	|| ydk::is_set(csipcfgretrycomet.yfilter)
	|| ydk::is_set(csipcfgretryinfo.yfilter)
	|| ydk::is_set(csipcfgretryinvite.yfilter)
	|| ydk::is_set(csipcfgretrynotify.yfilter)
	|| ydk::is_set(csipcfgretryprack.yfilter)
	|| ydk::is_set(csipcfgretryrefer.yfilter)
	|| ydk::is_set(csipcfgretryregister.yfilter)
	|| ydk::is_set(csipcfgretryreliablersp.yfilter)
	|| ydk::is_set(csipcfgretryresponse.yfilter)
	|| ydk::is_set(csipcfgretrysubscribe.yfilter);
}

std::string CiscoSipUaMib::Csipcfgretry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipCfgRetry";

    return path_buffer.str();

}

const EntityPath CiscoSipUaMib::Csipcfgretry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipcfgretrybye.is_set || is_set(csipcfgretrybye.yfilter)) leaf_name_data.push_back(csipcfgretrybye.get_name_leafdata());
    if (csipcfgretrycancel.is_set || is_set(csipcfgretrycancel.yfilter)) leaf_name_data.push_back(csipcfgretrycancel.get_name_leafdata());
    if (csipcfgretrycomet.is_set || is_set(csipcfgretrycomet.yfilter)) leaf_name_data.push_back(csipcfgretrycomet.get_name_leafdata());
    if (csipcfgretryinfo.is_set || is_set(csipcfgretryinfo.yfilter)) leaf_name_data.push_back(csipcfgretryinfo.get_name_leafdata());
    if (csipcfgretryinvite.is_set || is_set(csipcfgretryinvite.yfilter)) leaf_name_data.push_back(csipcfgretryinvite.get_name_leafdata());
    if (csipcfgretrynotify.is_set || is_set(csipcfgretrynotify.yfilter)) leaf_name_data.push_back(csipcfgretrynotify.get_name_leafdata());
    if (csipcfgretryprack.is_set || is_set(csipcfgretryprack.yfilter)) leaf_name_data.push_back(csipcfgretryprack.get_name_leafdata());
    if (csipcfgretryrefer.is_set || is_set(csipcfgretryrefer.yfilter)) leaf_name_data.push_back(csipcfgretryrefer.get_name_leafdata());
    if (csipcfgretryregister.is_set || is_set(csipcfgretryregister.yfilter)) leaf_name_data.push_back(csipcfgretryregister.get_name_leafdata());
    if (csipcfgretryreliablersp.is_set || is_set(csipcfgretryreliablersp.yfilter)) leaf_name_data.push_back(csipcfgretryreliablersp.get_name_leafdata());
    if (csipcfgretryresponse.is_set || is_set(csipcfgretryresponse.yfilter)) leaf_name_data.push_back(csipcfgretryresponse.get_name_leafdata());
    if (csipcfgretrysubscribe.is_set || is_set(csipcfgretrysubscribe.yfilter)) leaf_name_data.push_back(csipcfgretrysubscribe.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSipUaMib::Csipcfgretry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSipUaMib::Csipcfgretry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSipUaMib::Csipcfgretry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "cSipCfgRetryComet")
    {
        csipcfgretrycomet = value;
        csipcfgretrycomet.value_namespace = name_space;
        csipcfgretrycomet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgRetryInfo")
    {
        csipcfgretryinfo = value;
        csipcfgretryinfo.value_namespace = name_space;
        csipcfgretryinfo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgRetryInvite")
    {
        csipcfgretryinvite = value;
        csipcfgretryinvite.value_namespace = name_space;
        csipcfgretryinvite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgRetryNotify")
    {
        csipcfgretrynotify = value;
        csipcfgretrynotify.value_namespace = name_space;
        csipcfgretrynotify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgRetryPrack")
    {
        csipcfgretryprack = value;
        csipcfgretryprack.value_namespace = name_space;
        csipcfgretryprack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgRetryRefer")
    {
        csipcfgretryrefer = value;
        csipcfgretryrefer.value_namespace = name_space;
        csipcfgretryrefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgRetryRegister")
    {
        csipcfgretryregister = value;
        csipcfgretryregister.value_namespace = name_space;
        csipcfgretryregister.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgRetryReliableRsp")
    {
        csipcfgretryreliablersp = value;
        csipcfgretryreliablersp.value_namespace = name_space;
        csipcfgretryreliablersp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgRetryResponse")
    {
        csipcfgretryresponse = value;
        csipcfgretryresponse.value_namespace = name_space;
        csipcfgretryresponse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgRetrySubscribe")
    {
        csipcfgretrysubscribe = value;
        csipcfgretrysubscribe.value_namespace = name_space;
        csipcfgretrysubscribe.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSipUaMib::Csipcfgretry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cSipCfgRetryBye")
    {
        csipcfgretrybye.yfilter = yfilter;
    }
    if(value_path == "cSipCfgRetryCancel")
    {
        csipcfgretrycancel.yfilter = yfilter;
    }
    if(value_path == "cSipCfgRetryComet")
    {
        csipcfgretrycomet.yfilter = yfilter;
    }
    if(value_path == "cSipCfgRetryInfo")
    {
        csipcfgretryinfo.yfilter = yfilter;
    }
    if(value_path == "cSipCfgRetryInvite")
    {
        csipcfgretryinvite.yfilter = yfilter;
    }
    if(value_path == "cSipCfgRetryNotify")
    {
        csipcfgretrynotify.yfilter = yfilter;
    }
    if(value_path == "cSipCfgRetryPrack")
    {
        csipcfgretryprack.yfilter = yfilter;
    }
    if(value_path == "cSipCfgRetryRefer")
    {
        csipcfgretryrefer.yfilter = yfilter;
    }
    if(value_path == "cSipCfgRetryRegister")
    {
        csipcfgretryregister.yfilter = yfilter;
    }
    if(value_path == "cSipCfgRetryReliableRsp")
    {
        csipcfgretryreliablersp.yfilter = yfilter;
    }
    if(value_path == "cSipCfgRetryResponse")
    {
        csipcfgretryresponse.yfilter = yfilter;
    }
    if(value_path == "cSipCfgRetrySubscribe")
    {
        csipcfgretrysubscribe.yfilter = yfilter;
    }
}

bool CiscoSipUaMib::Csipcfgretry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipCfgRetryBye" || name == "cSipCfgRetryCancel" || name == "cSipCfgRetryComet" || name == "cSipCfgRetryInfo" || name == "cSipCfgRetryInvite" || name == "cSipCfgRetryNotify" || name == "cSipCfgRetryPrack" || name == "cSipCfgRetryRefer" || name == "cSipCfgRetryRegister" || name == "cSipCfgRetryReliableRsp" || name == "cSipCfgRetryResponse" || name == "cSipCfgRetrySubscribe")
        return true;
    return false;
}

CiscoSipUaMib::Csipcfgpeer::Csipcfgpeer()
    :
    csipcfgoutsessiontransport{YType::enumeration, "cSipCfgOutSessionTransport"},
    csipcfgreliable1xxrsphdr{YType::enumeration, "cSipCfgReliable1xxRspHdr"},
    csipcfgreliable1xxrspstr{YType::str, "cSipCfgReliable1xxRspStr"},
    csipcfgurltype{YType::enumeration, "cSipCfgUrlType"}
{
    yang_name = "cSipCfgPeer"; yang_parent_name = "CISCO-SIP-UA-MIB";
}

CiscoSipUaMib::Csipcfgpeer::~Csipcfgpeer()
{
}

bool CiscoSipUaMib::Csipcfgpeer::has_data() const
{
    return csipcfgoutsessiontransport.is_set
	|| csipcfgreliable1xxrsphdr.is_set
	|| csipcfgreliable1xxrspstr.is_set
	|| csipcfgurltype.is_set;
}

bool CiscoSipUaMib::Csipcfgpeer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipcfgoutsessiontransport.yfilter)
	|| ydk::is_set(csipcfgreliable1xxrsphdr.yfilter)
	|| ydk::is_set(csipcfgreliable1xxrspstr.yfilter)
	|| ydk::is_set(csipcfgurltype.yfilter);
}

std::string CiscoSipUaMib::Csipcfgpeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipCfgPeer";

    return path_buffer.str();

}

const EntityPath CiscoSipUaMib::Csipcfgpeer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipcfgoutsessiontransport.is_set || is_set(csipcfgoutsessiontransport.yfilter)) leaf_name_data.push_back(csipcfgoutsessiontransport.get_name_leafdata());
    if (csipcfgreliable1xxrsphdr.is_set || is_set(csipcfgreliable1xxrsphdr.yfilter)) leaf_name_data.push_back(csipcfgreliable1xxrsphdr.get_name_leafdata());
    if (csipcfgreliable1xxrspstr.is_set || is_set(csipcfgreliable1xxrspstr.yfilter)) leaf_name_data.push_back(csipcfgreliable1xxrspstr.get_name_leafdata());
    if (csipcfgurltype.is_set || is_set(csipcfgurltype.yfilter)) leaf_name_data.push_back(csipcfgurltype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSipUaMib::Csipcfgpeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSipUaMib::Csipcfgpeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSipUaMib::Csipcfgpeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cSipCfgOutSessionTransport")
    {
        csipcfgoutsessiontransport = value;
        csipcfgoutsessiontransport.value_namespace = name_space;
        csipcfgoutsessiontransport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgReliable1xxRspHdr")
    {
        csipcfgreliable1xxrsphdr = value;
        csipcfgreliable1xxrsphdr.value_namespace = name_space;
        csipcfgreliable1xxrsphdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgReliable1xxRspStr")
    {
        csipcfgreliable1xxrspstr = value;
        csipcfgreliable1xxrspstr.value_namespace = name_space;
        csipcfgreliable1xxrspstr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgUrlType")
    {
        csipcfgurltype = value;
        csipcfgurltype.value_namespace = name_space;
        csipcfgurltype.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSipUaMib::Csipcfgpeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cSipCfgOutSessionTransport")
    {
        csipcfgoutsessiontransport.yfilter = yfilter;
    }
    if(value_path == "cSipCfgReliable1xxRspHdr")
    {
        csipcfgreliable1xxrsphdr.yfilter = yfilter;
    }
    if(value_path == "cSipCfgReliable1xxRspStr")
    {
        csipcfgreliable1xxrspstr.yfilter = yfilter;
    }
    if(value_path == "cSipCfgUrlType")
    {
        csipcfgurltype.yfilter = yfilter;
    }
}

bool CiscoSipUaMib::Csipcfgpeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipCfgOutSessionTransport" || name == "cSipCfgReliable1xxRspHdr" || name == "cSipCfgReliable1xxRspStr" || name == "cSipCfgUrlType")
        return true;
    return false;
}

CiscoSipUaMib::Csipcfgaaa::Csipcfgaaa()
    :
    csipcfgaaausername{YType::enumeration, "cSipCfgAaaUsername"}
{
    yang_name = "cSipCfgAaa"; yang_parent_name = "CISCO-SIP-UA-MIB";
}

CiscoSipUaMib::Csipcfgaaa::~Csipcfgaaa()
{
}

bool CiscoSipUaMib::Csipcfgaaa::has_data() const
{
    return csipcfgaaausername.is_set;
}

bool CiscoSipUaMib::Csipcfgaaa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipcfgaaausername.yfilter);
}

std::string CiscoSipUaMib::Csipcfgaaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipCfgAaa";

    return path_buffer.str();

}

const EntityPath CiscoSipUaMib::Csipcfgaaa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipcfgaaausername.is_set || is_set(csipcfgaaausername.yfilter)) leaf_name_data.push_back(csipcfgaaausername.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSipUaMib::Csipcfgaaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSipUaMib::Csipcfgaaa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSipUaMib::Csipcfgaaa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cSipCfgAaaUsername")
    {
        csipcfgaaausername = value;
        csipcfgaaausername.value_namespace = name_space;
        csipcfgaaausername.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSipUaMib::Csipcfgaaa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cSipCfgAaaUsername")
    {
        csipcfgaaausername.yfilter = yfilter;
    }
}

bool CiscoSipUaMib::Csipcfgaaa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipCfgAaaUsername")
        return true;
    return false;
}

CiscoSipUaMib::Csipcfgvoiceservicevoip::Csipcfgvoiceservicevoip()
    :
    csipcfgheaderpassingenabled{YType::boolean, "cSipCfgHeaderPassingEnabled"},
    csipcfgmaxsubscriptionaccept{YType::uint32, "cSipCfgMaxSubscriptionAccept"},
    csipcfgmaxsubscriptionoriginate{YType::uint32, "cSipCfgMaxSubscriptionOriginate"},
    csipcfgswitchtransportenabled{YType::boolean, "cSipCfgSwitchTransportEnabled"}
{
    yang_name = "cSipCfgVoiceServiceVoip"; yang_parent_name = "CISCO-SIP-UA-MIB";
}

CiscoSipUaMib::Csipcfgvoiceservicevoip::~Csipcfgvoiceservicevoip()
{
}

bool CiscoSipUaMib::Csipcfgvoiceservicevoip::has_data() const
{
    return csipcfgheaderpassingenabled.is_set
	|| csipcfgmaxsubscriptionaccept.is_set
	|| csipcfgmaxsubscriptionoriginate.is_set
	|| csipcfgswitchtransportenabled.is_set;
}

bool CiscoSipUaMib::Csipcfgvoiceservicevoip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipcfgheaderpassingenabled.yfilter)
	|| ydk::is_set(csipcfgmaxsubscriptionaccept.yfilter)
	|| ydk::is_set(csipcfgmaxsubscriptionoriginate.yfilter)
	|| ydk::is_set(csipcfgswitchtransportenabled.yfilter);
}

std::string CiscoSipUaMib::Csipcfgvoiceservicevoip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipCfgVoiceServiceVoip";

    return path_buffer.str();

}

const EntityPath CiscoSipUaMib::Csipcfgvoiceservicevoip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipcfgheaderpassingenabled.is_set || is_set(csipcfgheaderpassingenabled.yfilter)) leaf_name_data.push_back(csipcfgheaderpassingenabled.get_name_leafdata());
    if (csipcfgmaxsubscriptionaccept.is_set || is_set(csipcfgmaxsubscriptionaccept.yfilter)) leaf_name_data.push_back(csipcfgmaxsubscriptionaccept.get_name_leafdata());
    if (csipcfgmaxsubscriptionoriginate.is_set || is_set(csipcfgmaxsubscriptionoriginate.yfilter)) leaf_name_data.push_back(csipcfgmaxsubscriptionoriginate.get_name_leafdata());
    if (csipcfgswitchtransportenabled.is_set || is_set(csipcfgswitchtransportenabled.yfilter)) leaf_name_data.push_back(csipcfgswitchtransportenabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSipUaMib::Csipcfgvoiceservicevoip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSipUaMib::Csipcfgvoiceservicevoip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSipUaMib::Csipcfgvoiceservicevoip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CiscoSipUaMib::Csipcfgvoiceservicevoip::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CiscoSipUaMib::Csipcfgvoiceservicevoip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipCfgHeaderPassingEnabled" || name == "cSipCfgMaxSubscriptionAccept" || name == "cSipCfgMaxSubscriptionOriginate" || name == "cSipCfgSwitchTransportEnabled")
        return true;
    return false;
}

CiscoSipUaMib::Csipstatsinfo::Csipstatsinfo()
    :
    csipstatsinfoforwardedins{YType::uint32, "cSipStatsInfoForwardedIns"},
    csipstatsinfoforwardedouts{YType::uint32, "cSipStatsInfoForwardedOuts"},
    csipstatsinfoqueuedins{YType::uint32, "cSipStatsInfoQueuedIns"},
    csipstatsinfoqueuedouts{YType::uint32, "cSipStatsInfoQueuedOuts"},
    csipstatsinforingingins{YType::uint32, "cSipStatsInfoRingingIns"},
    csipstatsinforingingouts{YType::uint32, "cSipStatsInfoRingingOuts"},
    csipstatsinfosessionprogins{YType::uint32, "cSipStatsInfoSessionProgIns"},
    csipstatsinfosessionprogouts{YType::uint32, "cSipStatsInfoSessionProgOuts"},
    csipstatsinfotryingins{YType::uint32, "cSipStatsInfoTryingIns"},
    csipstatsinfotryingouts{YType::uint32, "cSipStatsInfoTryingOuts"}
{
    yang_name = "cSipStatsInfo"; yang_parent_name = "CISCO-SIP-UA-MIB";
}

CiscoSipUaMib::Csipstatsinfo::~Csipstatsinfo()
{
}

bool CiscoSipUaMib::Csipstatsinfo::has_data() const
{
    return csipstatsinfoforwardedins.is_set
	|| csipstatsinfoforwardedouts.is_set
	|| csipstatsinfoqueuedins.is_set
	|| csipstatsinfoqueuedouts.is_set
	|| csipstatsinforingingins.is_set
	|| csipstatsinforingingouts.is_set
	|| csipstatsinfosessionprogins.is_set
	|| csipstatsinfosessionprogouts.is_set
	|| csipstatsinfotryingins.is_set
	|| csipstatsinfotryingouts.is_set;
}

bool CiscoSipUaMib::Csipstatsinfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipstatsinfoforwardedins.yfilter)
	|| ydk::is_set(csipstatsinfoforwardedouts.yfilter)
	|| ydk::is_set(csipstatsinfoqueuedins.yfilter)
	|| ydk::is_set(csipstatsinfoqueuedouts.yfilter)
	|| ydk::is_set(csipstatsinforingingins.yfilter)
	|| ydk::is_set(csipstatsinforingingouts.yfilter)
	|| ydk::is_set(csipstatsinfosessionprogins.yfilter)
	|| ydk::is_set(csipstatsinfosessionprogouts.yfilter)
	|| ydk::is_set(csipstatsinfotryingins.yfilter)
	|| ydk::is_set(csipstatsinfotryingouts.yfilter);
}

std::string CiscoSipUaMib::Csipstatsinfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipStatsInfo";

    return path_buffer.str();

}

const EntityPath CiscoSipUaMib::Csipstatsinfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipstatsinfoforwardedins.is_set || is_set(csipstatsinfoforwardedins.yfilter)) leaf_name_data.push_back(csipstatsinfoforwardedins.get_name_leafdata());
    if (csipstatsinfoforwardedouts.is_set || is_set(csipstatsinfoforwardedouts.yfilter)) leaf_name_data.push_back(csipstatsinfoforwardedouts.get_name_leafdata());
    if (csipstatsinfoqueuedins.is_set || is_set(csipstatsinfoqueuedins.yfilter)) leaf_name_data.push_back(csipstatsinfoqueuedins.get_name_leafdata());
    if (csipstatsinfoqueuedouts.is_set || is_set(csipstatsinfoqueuedouts.yfilter)) leaf_name_data.push_back(csipstatsinfoqueuedouts.get_name_leafdata());
    if (csipstatsinforingingins.is_set || is_set(csipstatsinforingingins.yfilter)) leaf_name_data.push_back(csipstatsinforingingins.get_name_leafdata());
    if (csipstatsinforingingouts.is_set || is_set(csipstatsinforingingouts.yfilter)) leaf_name_data.push_back(csipstatsinforingingouts.get_name_leafdata());
    if (csipstatsinfosessionprogins.is_set || is_set(csipstatsinfosessionprogins.yfilter)) leaf_name_data.push_back(csipstatsinfosessionprogins.get_name_leafdata());
    if (csipstatsinfosessionprogouts.is_set || is_set(csipstatsinfosessionprogouts.yfilter)) leaf_name_data.push_back(csipstatsinfosessionprogouts.get_name_leafdata());
    if (csipstatsinfotryingins.is_set || is_set(csipstatsinfotryingins.yfilter)) leaf_name_data.push_back(csipstatsinfotryingins.get_name_leafdata());
    if (csipstatsinfotryingouts.is_set || is_set(csipstatsinfotryingouts.yfilter)) leaf_name_data.push_back(csipstatsinfotryingouts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSipUaMib::Csipstatsinfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSipUaMib::Csipstatsinfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSipUaMib::Csipstatsinfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
}

void CiscoSipUaMib::Csipstatsinfo::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "cSipStatsInfoRingingIns")
    {
        csipstatsinforingingins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsInfoRingingOuts")
    {
        csipstatsinforingingouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsInfoSessionProgIns")
    {
        csipstatsinfosessionprogins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsInfoSessionProgOuts")
    {
        csipstatsinfosessionprogouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsInfoTryingIns")
    {
        csipstatsinfotryingins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsInfoTryingOuts")
    {
        csipstatsinfotryingouts.yfilter = yfilter;
    }
}

bool CiscoSipUaMib::Csipstatsinfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipStatsInfoForwardedIns" || name == "cSipStatsInfoForwardedOuts" || name == "cSipStatsInfoQueuedIns" || name == "cSipStatsInfoQueuedOuts" || name == "cSipStatsInfoRingingIns" || name == "cSipStatsInfoRingingOuts" || name == "cSipStatsInfoSessionProgIns" || name == "cSipStatsInfoSessionProgOuts" || name == "cSipStatsInfoTryingIns" || name == "cSipStatsInfoTryingOuts")
        return true;
    return false;
}

CiscoSipUaMib::Csipstatssuccess::Csipstatssuccess()
    :
    csipstatssuccessacceptedins{YType::uint32, "cSipStatsSuccessAcceptedIns"},
    csipstatssuccessacceptedouts{YType::uint32, "cSipStatsSuccessAcceptedOuts"},
    csipstatssuccessokins{YType::uint32, "cSipStatsSuccessOkIns"},
    csipstatssuccessokouts{YType::uint32, "cSipStatsSuccessOkOuts"}
{
    yang_name = "cSipStatsSuccess"; yang_parent_name = "CISCO-SIP-UA-MIB";
}

CiscoSipUaMib::Csipstatssuccess::~Csipstatssuccess()
{
}

bool CiscoSipUaMib::Csipstatssuccess::has_data() const
{
    return csipstatssuccessacceptedins.is_set
	|| csipstatssuccessacceptedouts.is_set
	|| csipstatssuccessokins.is_set
	|| csipstatssuccessokouts.is_set;
}

bool CiscoSipUaMib::Csipstatssuccess::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipstatssuccessacceptedins.yfilter)
	|| ydk::is_set(csipstatssuccessacceptedouts.yfilter)
	|| ydk::is_set(csipstatssuccessokins.yfilter)
	|| ydk::is_set(csipstatssuccessokouts.yfilter);
}

std::string CiscoSipUaMib::Csipstatssuccess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipStatsSuccess";

    return path_buffer.str();

}

const EntityPath CiscoSipUaMib::Csipstatssuccess::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipstatssuccessacceptedins.is_set || is_set(csipstatssuccessacceptedins.yfilter)) leaf_name_data.push_back(csipstatssuccessacceptedins.get_name_leafdata());
    if (csipstatssuccessacceptedouts.is_set || is_set(csipstatssuccessacceptedouts.yfilter)) leaf_name_data.push_back(csipstatssuccessacceptedouts.get_name_leafdata());
    if (csipstatssuccessokins.is_set || is_set(csipstatssuccessokins.yfilter)) leaf_name_data.push_back(csipstatssuccessokins.get_name_leafdata());
    if (csipstatssuccessokouts.is_set || is_set(csipstatssuccessokouts.yfilter)) leaf_name_data.push_back(csipstatssuccessokouts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSipUaMib::Csipstatssuccess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSipUaMib::Csipstatssuccess::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSipUaMib::Csipstatssuccess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
}

void CiscoSipUaMib::Csipstatssuccess::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cSipStatsSuccessAcceptedIns")
    {
        csipstatssuccessacceptedins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsSuccessAcceptedOuts")
    {
        csipstatssuccessacceptedouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsSuccessOkIns")
    {
        csipstatssuccessokins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsSuccessOkOuts")
    {
        csipstatssuccessokouts.yfilter = yfilter;
    }
}

bool CiscoSipUaMib::Csipstatssuccess::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipStatsSuccessAcceptedIns" || name == "cSipStatsSuccessAcceptedOuts" || name == "cSipStatsSuccessOkIns" || name == "cSipStatsSuccessOkOuts")
        return true;
    return false;
}

CiscoSipUaMib::Csipstatsredirect::Csipstatsredirect()
    :
    csipstatsrediraltservices{YType::uint32, "cSipStatsRedirAltServices"},
    csipstatsredirmovedperms{YType::uint32, "cSipStatsRedirMovedPerms"},
    csipstatsredirmovedtemps{YType::uint32, "cSipStatsRedirMovedTemps"},
    csipstatsredirmovedtempsins{YType::uint32, "cSipStatsRedirMovedTempsIns"},
    csipstatsredirmovedtempsouts{YType::uint32, "cSipStatsRedirMovedTempsOuts"},
    csipstatsredirmultiplechoices{YType::uint32, "cSipStatsRedirMultipleChoices"},
    csipstatsredirseeothers{YType::uint32, "cSipStatsRedirSeeOthers"},
    csipstatsrediruseproxys{YType::uint32, "cSipStatsRedirUseProxys"}
{
    yang_name = "cSipStatsRedirect"; yang_parent_name = "CISCO-SIP-UA-MIB";
}

CiscoSipUaMib::Csipstatsredirect::~Csipstatsredirect()
{
}

bool CiscoSipUaMib::Csipstatsredirect::has_data() const
{
    return csipstatsrediraltservices.is_set
	|| csipstatsredirmovedperms.is_set
	|| csipstatsredirmovedtemps.is_set
	|| csipstatsredirmovedtempsins.is_set
	|| csipstatsredirmovedtempsouts.is_set
	|| csipstatsredirmultiplechoices.is_set
	|| csipstatsredirseeothers.is_set
	|| csipstatsrediruseproxys.is_set;
}

bool CiscoSipUaMib::Csipstatsredirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipstatsrediraltservices.yfilter)
	|| ydk::is_set(csipstatsredirmovedperms.yfilter)
	|| ydk::is_set(csipstatsredirmovedtemps.yfilter)
	|| ydk::is_set(csipstatsredirmovedtempsins.yfilter)
	|| ydk::is_set(csipstatsredirmovedtempsouts.yfilter)
	|| ydk::is_set(csipstatsredirmultiplechoices.yfilter)
	|| ydk::is_set(csipstatsredirseeothers.yfilter)
	|| ydk::is_set(csipstatsrediruseproxys.yfilter);
}

std::string CiscoSipUaMib::Csipstatsredirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipStatsRedirect";

    return path_buffer.str();

}

const EntityPath CiscoSipUaMib::Csipstatsredirect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipstatsrediraltservices.is_set || is_set(csipstatsrediraltservices.yfilter)) leaf_name_data.push_back(csipstatsrediraltservices.get_name_leafdata());
    if (csipstatsredirmovedperms.is_set || is_set(csipstatsredirmovedperms.yfilter)) leaf_name_data.push_back(csipstatsredirmovedperms.get_name_leafdata());
    if (csipstatsredirmovedtemps.is_set || is_set(csipstatsredirmovedtemps.yfilter)) leaf_name_data.push_back(csipstatsredirmovedtemps.get_name_leafdata());
    if (csipstatsredirmovedtempsins.is_set || is_set(csipstatsredirmovedtempsins.yfilter)) leaf_name_data.push_back(csipstatsredirmovedtempsins.get_name_leafdata());
    if (csipstatsredirmovedtempsouts.is_set || is_set(csipstatsredirmovedtempsouts.yfilter)) leaf_name_data.push_back(csipstatsredirmovedtempsouts.get_name_leafdata());
    if (csipstatsredirmultiplechoices.is_set || is_set(csipstatsredirmultiplechoices.yfilter)) leaf_name_data.push_back(csipstatsredirmultiplechoices.get_name_leafdata());
    if (csipstatsredirseeothers.is_set || is_set(csipstatsredirseeothers.yfilter)) leaf_name_data.push_back(csipstatsredirseeothers.get_name_leafdata());
    if (csipstatsrediruseproxys.is_set || is_set(csipstatsrediruseproxys.yfilter)) leaf_name_data.push_back(csipstatsrediruseproxys.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSipUaMib::Csipstatsredirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSipUaMib::Csipstatsredirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSipUaMib::Csipstatsredirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cSipStatsRedirAltServices")
    {
        csipstatsrediraltservices = value;
        csipstatsrediraltservices.value_namespace = name_space;
        csipstatsrediraltservices.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cSipStatsRedirMultipleChoices")
    {
        csipstatsredirmultiplechoices = value;
        csipstatsredirmultiplechoices.value_namespace = name_space;
        csipstatsredirmultiplechoices.value_namespace_prefix = name_space_prefix;
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
}

void CiscoSipUaMib::Csipstatsredirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cSipStatsRedirAltServices")
    {
        csipstatsrediraltservices.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRedirMovedPerms")
    {
        csipstatsredirmovedperms.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRedirMovedTemps")
    {
        csipstatsredirmovedtemps.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRedirMovedTempsIns")
    {
        csipstatsredirmovedtempsins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRedirMovedTempsOuts")
    {
        csipstatsredirmovedtempsouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRedirMultipleChoices")
    {
        csipstatsredirmultiplechoices.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRedirSeeOthers")
    {
        csipstatsredirseeothers.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRedirUseProxys")
    {
        csipstatsrediruseproxys.yfilter = yfilter;
    }
}

bool CiscoSipUaMib::Csipstatsredirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipStatsRedirAltServices" || name == "cSipStatsRedirMovedPerms" || name == "cSipStatsRedirMovedTemps" || name == "cSipStatsRedirMovedTempsIns" || name == "cSipStatsRedirMovedTempsOuts" || name == "cSipStatsRedirMultipleChoices" || name == "cSipStatsRedirSeeOthers" || name == "cSipStatsRedirUseProxys")
        return true;
    return false;
}

CiscoSipUaMib::Csipstatserrclient::Csipstatserrclient()
    :
    csipstatsclientaddrincompleteins{YType::uint32, "cSipStatsClientAddrIncompleteIns"},
    csipstatsclientaddrincompleteouts{YType::uint32, "cSipStatsClientAddrIncompleteOuts"},
    csipstatsclientambiguousins{YType::uint32, "cSipStatsClientAmbiguousIns"},
    csipstatsclientambiguousouts{YType::uint32, "cSipStatsClientAmbiguousOuts"},
    csipstatsclientbadeventins{YType::uint32, "cSipStatsClientBadEventIns"},
    csipstatsclientbadeventouts{YType::uint32, "cSipStatsClientBadEventOuts"},
    csipstatsclientbadextensionins{YType::uint32, "cSipStatsClientBadExtensionIns"},
    csipstatsclientbadextensionouts{YType::uint32, "cSipStatsClientBadExtensionOuts"},
    csipstatsclientbadrequestins{YType::uint32, "cSipStatsClientBadRequestIns"},
    csipstatsclientbadrequestouts{YType::uint32, "cSipStatsClientBadRequestOuts"},
    csipstatsclientbusyhereins{YType::uint32, "cSipStatsClientBusyHereIns"},
    csipstatsclientbusyhereouts{YType::uint32, "cSipStatsClientBusyHereOuts"},
    csipstatsclientcalllegnoexistins{YType::uint32, "cSipStatsClientCallLegNoExistIns"},
    csipstatsclientcalllegnoexistouts{YType::uint32, "cSipStatsClientCallLegNoExistOuts"},
    csipstatsclientconflictins{YType::uint32, "cSipStatsClientConflictIns"},
    csipstatsclientconflictouts{YType::uint32, "cSipStatsClientConflictOuts"},
    csipstatsclientforbiddenins{YType::uint32, "cSipStatsClientForbiddenIns"},
    csipstatsclientforbiddenouts{YType::uint32, "cSipStatsClientForbiddenOuts"},
    csipstatsclientgoneins{YType::uint32, "cSipStatsClientGoneIns"},
    csipstatsclientgoneouts{YType::uint32, "cSipStatsClientGoneOuts"},
    csipstatsclientlengthrequiredins{YType::uint32, "cSipStatsClientLengthRequiredIns"},
    csipstatsclientlengthrequiredouts{YType::uint32, "cSipStatsClientLengthRequiredOuts"},
    csipstatsclientloopdetectedins{YType::uint32, "cSipStatsClientLoopDetectedIns"},
    csipstatsclientloopdetectedouts{YType::uint32, "cSipStatsClientLoopDetectedOuts"},
    csipstatsclientmethnotallowedins{YType::uint32, "cSipStatsClientMethNotAllowedIns"},
    csipstatsclientmethnotallowedouts{YType::uint32, "cSipStatsClientMethNotAllowedOuts"},
    csipstatsclientnoaccepthereins{YType::uint32, "cSipStatsClientNoAcceptHereIns"},
    csipstatsclientnoaccepthereouts{YType::uint32, "cSipStatsClientNoAcceptHereOuts"},
    csipstatsclientnosupmediatypeins{YType::uint32, "cSipStatsClientNoSupMediaTypeIns"},
    csipstatsclientnosupmediatypeouts{YType::uint32, "cSipStatsClientNoSupMediaTypeOuts"},
    csipstatsclientnotacceptableins{YType::uint32, "cSipStatsClientNotAcceptableIns"},
    csipstatsclientnotacceptableouts{YType::uint32, "cSipStatsClientNotAcceptableOuts"},
    csipstatsclientnotfoundins{YType::uint32, "cSipStatsClientNotFoundIns"},
    csipstatsclientnotfoundouts{YType::uint32, "cSipStatsClientNotFoundOuts"},
    csipstatsclientpaymentreqdins{YType::uint32, "cSipStatsClientPaymentReqdIns"},
    csipstatsclientpaymentreqdouts{YType::uint32, "cSipStatsClientPaymentReqdOuts"},
    csipstatsclientproxyauthreqdins{YType::uint32, "cSipStatsClientProxyAuthReqdIns"},
    csipstatsclientproxyauthreqdouts{YType::uint32, "cSipStatsClientProxyAuthReqdOuts"},
    csipstatsclientreqenttoolargeins{YType::uint32, "cSipStatsClientReqEntTooLargeIns"},
    csipstatsclientreqenttoolargeouts{YType::uint32, "cSipStatsClientReqEntTooLargeOuts"},
    csipstatsclientreqpendingins{YType::uint32, "cSipStatsClientReqPendingIns"},
    csipstatsclientreqpendingouts{YType::uint32, "cSipStatsClientReqPendingOuts"},
    csipstatsclientreqtermins{YType::uint32, "cSipStatsClientReqTermIns"},
    csipstatsclientreqtermouts{YType::uint32, "cSipStatsClientReqTermOuts"},
    csipstatsclientreqtimeoutins{YType::uint32, "cSipStatsClientReqTimeoutIns"},
    csipstatsclientreqtimeoutouts{YType::uint32, "cSipStatsClientReqTimeoutOuts"},
    csipstatsclientrequritoolargeins{YType::uint32, "cSipStatsClientReqURITooLargeIns"},
    csipstatsclientrequritoolargeouts{YType::uint32, "cSipStatsClientReqURITooLargeOuts"},
    csipstatsclientsttoosmallins{YType::uint32, "cSipStatsClientSTTooSmallIns"},
    csipstatsclientsttoosmallouts{YType::uint32, "cSipStatsClientSTTooSmallOuts"},
    csipstatsclienttempnotavailins{YType::uint32, "cSipStatsClientTempNotAvailIns"},
    csipstatsclienttempnotavailouts{YType::uint32, "cSipStatsClientTempNotAvailOuts"},
    csipstatsclienttoomanyhopsins{YType::uint32, "cSipStatsClientTooManyHopsIns"},
    csipstatsclienttoomanyhopsouts{YType::uint32, "cSipStatsClientTooManyHopsOuts"},
    csipstatsclientunauthorizedins{YType::uint32, "cSipStatsClientUnauthorizedIns"},
    csipstatsclientunauthorizedouts{YType::uint32, "cSipStatsClientUnauthorizedOuts"}
{
    yang_name = "cSipStatsErrClient"; yang_parent_name = "CISCO-SIP-UA-MIB";
}

CiscoSipUaMib::Csipstatserrclient::~Csipstatserrclient()
{
}

bool CiscoSipUaMib::Csipstatserrclient::has_data() const
{
    return csipstatsclientaddrincompleteins.is_set
	|| csipstatsclientaddrincompleteouts.is_set
	|| csipstatsclientambiguousins.is_set
	|| csipstatsclientambiguousouts.is_set
	|| csipstatsclientbadeventins.is_set
	|| csipstatsclientbadeventouts.is_set
	|| csipstatsclientbadextensionins.is_set
	|| csipstatsclientbadextensionouts.is_set
	|| csipstatsclientbadrequestins.is_set
	|| csipstatsclientbadrequestouts.is_set
	|| csipstatsclientbusyhereins.is_set
	|| csipstatsclientbusyhereouts.is_set
	|| csipstatsclientcalllegnoexistins.is_set
	|| csipstatsclientcalllegnoexistouts.is_set
	|| csipstatsclientconflictins.is_set
	|| csipstatsclientconflictouts.is_set
	|| csipstatsclientforbiddenins.is_set
	|| csipstatsclientforbiddenouts.is_set
	|| csipstatsclientgoneins.is_set
	|| csipstatsclientgoneouts.is_set
	|| csipstatsclientlengthrequiredins.is_set
	|| csipstatsclientlengthrequiredouts.is_set
	|| csipstatsclientloopdetectedins.is_set
	|| csipstatsclientloopdetectedouts.is_set
	|| csipstatsclientmethnotallowedins.is_set
	|| csipstatsclientmethnotallowedouts.is_set
	|| csipstatsclientnoaccepthereins.is_set
	|| csipstatsclientnoaccepthereouts.is_set
	|| csipstatsclientnosupmediatypeins.is_set
	|| csipstatsclientnosupmediatypeouts.is_set
	|| csipstatsclientnotacceptableins.is_set
	|| csipstatsclientnotacceptableouts.is_set
	|| csipstatsclientnotfoundins.is_set
	|| csipstatsclientnotfoundouts.is_set
	|| csipstatsclientpaymentreqdins.is_set
	|| csipstatsclientpaymentreqdouts.is_set
	|| csipstatsclientproxyauthreqdins.is_set
	|| csipstatsclientproxyauthreqdouts.is_set
	|| csipstatsclientreqenttoolargeins.is_set
	|| csipstatsclientreqenttoolargeouts.is_set
	|| csipstatsclientreqpendingins.is_set
	|| csipstatsclientreqpendingouts.is_set
	|| csipstatsclientreqtermins.is_set
	|| csipstatsclientreqtermouts.is_set
	|| csipstatsclientreqtimeoutins.is_set
	|| csipstatsclientreqtimeoutouts.is_set
	|| csipstatsclientrequritoolargeins.is_set
	|| csipstatsclientrequritoolargeouts.is_set
	|| csipstatsclientsttoosmallins.is_set
	|| csipstatsclientsttoosmallouts.is_set
	|| csipstatsclienttempnotavailins.is_set
	|| csipstatsclienttempnotavailouts.is_set
	|| csipstatsclienttoomanyhopsins.is_set
	|| csipstatsclienttoomanyhopsouts.is_set
	|| csipstatsclientunauthorizedins.is_set
	|| csipstatsclientunauthorizedouts.is_set;
}

bool CiscoSipUaMib::Csipstatserrclient::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipstatsclientaddrincompleteins.yfilter)
	|| ydk::is_set(csipstatsclientaddrincompleteouts.yfilter)
	|| ydk::is_set(csipstatsclientambiguousins.yfilter)
	|| ydk::is_set(csipstatsclientambiguousouts.yfilter)
	|| ydk::is_set(csipstatsclientbadeventins.yfilter)
	|| ydk::is_set(csipstatsclientbadeventouts.yfilter)
	|| ydk::is_set(csipstatsclientbadextensionins.yfilter)
	|| ydk::is_set(csipstatsclientbadextensionouts.yfilter)
	|| ydk::is_set(csipstatsclientbadrequestins.yfilter)
	|| ydk::is_set(csipstatsclientbadrequestouts.yfilter)
	|| ydk::is_set(csipstatsclientbusyhereins.yfilter)
	|| ydk::is_set(csipstatsclientbusyhereouts.yfilter)
	|| ydk::is_set(csipstatsclientcalllegnoexistins.yfilter)
	|| ydk::is_set(csipstatsclientcalllegnoexistouts.yfilter)
	|| ydk::is_set(csipstatsclientconflictins.yfilter)
	|| ydk::is_set(csipstatsclientconflictouts.yfilter)
	|| ydk::is_set(csipstatsclientforbiddenins.yfilter)
	|| ydk::is_set(csipstatsclientforbiddenouts.yfilter)
	|| ydk::is_set(csipstatsclientgoneins.yfilter)
	|| ydk::is_set(csipstatsclientgoneouts.yfilter)
	|| ydk::is_set(csipstatsclientlengthrequiredins.yfilter)
	|| ydk::is_set(csipstatsclientlengthrequiredouts.yfilter)
	|| ydk::is_set(csipstatsclientloopdetectedins.yfilter)
	|| ydk::is_set(csipstatsclientloopdetectedouts.yfilter)
	|| ydk::is_set(csipstatsclientmethnotallowedins.yfilter)
	|| ydk::is_set(csipstatsclientmethnotallowedouts.yfilter)
	|| ydk::is_set(csipstatsclientnoaccepthereins.yfilter)
	|| ydk::is_set(csipstatsclientnoaccepthereouts.yfilter)
	|| ydk::is_set(csipstatsclientnosupmediatypeins.yfilter)
	|| ydk::is_set(csipstatsclientnosupmediatypeouts.yfilter)
	|| ydk::is_set(csipstatsclientnotacceptableins.yfilter)
	|| ydk::is_set(csipstatsclientnotacceptableouts.yfilter)
	|| ydk::is_set(csipstatsclientnotfoundins.yfilter)
	|| ydk::is_set(csipstatsclientnotfoundouts.yfilter)
	|| ydk::is_set(csipstatsclientpaymentreqdins.yfilter)
	|| ydk::is_set(csipstatsclientpaymentreqdouts.yfilter)
	|| ydk::is_set(csipstatsclientproxyauthreqdins.yfilter)
	|| ydk::is_set(csipstatsclientproxyauthreqdouts.yfilter)
	|| ydk::is_set(csipstatsclientreqenttoolargeins.yfilter)
	|| ydk::is_set(csipstatsclientreqenttoolargeouts.yfilter)
	|| ydk::is_set(csipstatsclientreqpendingins.yfilter)
	|| ydk::is_set(csipstatsclientreqpendingouts.yfilter)
	|| ydk::is_set(csipstatsclientreqtermins.yfilter)
	|| ydk::is_set(csipstatsclientreqtermouts.yfilter)
	|| ydk::is_set(csipstatsclientreqtimeoutins.yfilter)
	|| ydk::is_set(csipstatsclientreqtimeoutouts.yfilter)
	|| ydk::is_set(csipstatsclientrequritoolargeins.yfilter)
	|| ydk::is_set(csipstatsclientrequritoolargeouts.yfilter)
	|| ydk::is_set(csipstatsclientsttoosmallins.yfilter)
	|| ydk::is_set(csipstatsclientsttoosmallouts.yfilter)
	|| ydk::is_set(csipstatsclienttempnotavailins.yfilter)
	|| ydk::is_set(csipstatsclienttempnotavailouts.yfilter)
	|| ydk::is_set(csipstatsclienttoomanyhopsins.yfilter)
	|| ydk::is_set(csipstatsclienttoomanyhopsouts.yfilter)
	|| ydk::is_set(csipstatsclientunauthorizedins.yfilter)
	|| ydk::is_set(csipstatsclientunauthorizedouts.yfilter);
}

std::string CiscoSipUaMib::Csipstatserrclient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipStatsErrClient";

    return path_buffer.str();

}

const EntityPath CiscoSipUaMib::Csipstatserrclient::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipstatsclientaddrincompleteins.is_set || is_set(csipstatsclientaddrincompleteins.yfilter)) leaf_name_data.push_back(csipstatsclientaddrincompleteins.get_name_leafdata());
    if (csipstatsclientaddrincompleteouts.is_set || is_set(csipstatsclientaddrincompleteouts.yfilter)) leaf_name_data.push_back(csipstatsclientaddrincompleteouts.get_name_leafdata());
    if (csipstatsclientambiguousins.is_set || is_set(csipstatsclientambiguousins.yfilter)) leaf_name_data.push_back(csipstatsclientambiguousins.get_name_leafdata());
    if (csipstatsclientambiguousouts.is_set || is_set(csipstatsclientambiguousouts.yfilter)) leaf_name_data.push_back(csipstatsclientambiguousouts.get_name_leafdata());
    if (csipstatsclientbadeventins.is_set || is_set(csipstatsclientbadeventins.yfilter)) leaf_name_data.push_back(csipstatsclientbadeventins.get_name_leafdata());
    if (csipstatsclientbadeventouts.is_set || is_set(csipstatsclientbadeventouts.yfilter)) leaf_name_data.push_back(csipstatsclientbadeventouts.get_name_leafdata());
    if (csipstatsclientbadextensionins.is_set || is_set(csipstatsclientbadextensionins.yfilter)) leaf_name_data.push_back(csipstatsclientbadextensionins.get_name_leafdata());
    if (csipstatsclientbadextensionouts.is_set || is_set(csipstatsclientbadextensionouts.yfilter)) leaf_name_data.push_back(csipstatsclientbadextensionouts.get_name_leafdata());
    if (csipstatsclientbadrequestins.is_set || is_set(csipstatsclientbadrequestins.yfilter)) leaf_name_data.push_back(csipstatsclientbadrequestins.get_name_leafdata());
    if (csipstatsclientbadrequestouts.is_set || is_set(csipstatsclientbadrequestouts.yfilter)) leaf_name_data.push_back(csipstatsclientbadrequestouts.get_name_leafdata());
    if (csipstatsclientbusyhereins.is_set || is_set(csipstatsclientbusyhereins.yfilter)) leaf_name_data.push_back(csipstatsclientbusyhereins.get_name_leafdata());
    if (csipstatsclientbusyhereouts.is_set || is_set(csipstatsclientbusyhereouts.yfilter)) leaf_name_data.push_back(csipstatsclientbusyhereouts.get_name_leafdata());
    if (csipstatsclientcalllegnoexistins.is_set || is_set(csipstatsclientcalllegnoexistins.yfilter)) leaf_name_data.push_back(csipstatsclientcalllegnoexistins.get_name_leafdata());
    if (csipstatsclientcalllegnoexistouts.is_set || is_set(csipstatsclientcalllegnoexistouts.yfilter)) leaf_name_data.push_back(csipstatsclientcalllegnoexistouts.get_name_leafdata());
    if (csipstatsclientconflictins.is_set || is_set(csipstatsclientconflictins.yfilter)) leaf_name_data.push_back(csipstatsclientconflictins.get_name_leafdata());
    if (csipstatsclientconflictouts.is_set || is_set(csipstatsclientconflictouts.yfilter)) leaf_name_data.push_back(csipstatsclientconflictouts.get_name_leafdata());
    if (csipstatsclientforbiddenins.is_set || is_set(csipstatsclientforbiddenins.yfilter)) leaf_name_data.push_back(csipstatsclientforbiddenins.get_name_leafdata());
    if (csipstatsclientforbiddenouts.is_set || is_set(csipstatsclientforbiddenouts.yfilter)) leaf_name_data.push_back(csipstatsclientforbiddenouts.get_name_leafdata());
    if (csipstatsclientgoneins.is_set || is_set(csipstatsclientgoneins.yfilter)) leaf_name_data.push_back(csipstatsclientgoneins.get_name_leafdata());
    if (csipstatsclientgoneouts.is_set || is_set(csipstatsclientgoneouts.yfilter)) leaf_name_data.push_back(csipstatsclientgoneouts.get_name_leafdata());
    if (csipstatsclientlengthrequiredins.is_set || is_set(csipstatsclientlengthrequiredins.yfilter)) leaf_name_data.push_back(csipstatsclientlengthrequiredins.get_name_leafdata());
    if (csipstatsclientlengthrequiredouts.is_set || is_set(csipstatsclientlengthrequiredouts.yfilter)) leaf_name_data.push_back(csipstatsclientlengthrequiredouts.get_name_leafdata());
    if (csipstatsclientloopdetectedins.is_set || is_set(csipstatsclientloopdetectedins.yfilter)) leaf_name_data.push_back(csipstatsclientloopdetectedins.get_name_leafdata());
    if (csipstatsclientloopdetectedouts.is_set || is_set(csipstatsclientloopdetectedouts.yfilter)) leaf_name_data.push_back(csipstatsclientloopdetectedouts.get_name_leafdata());
    if (csipstatsclientmethnotallowedins.is_set || is_set(csipstatsclientmethnotallowedins.yfilter)) leaf_name_data.push_back(csipstatsclientmethnotallowedins.get_name_leafdata());
    if (csipstatsclientmethnotallowedouts.is_set || is_set(csipstatsclientmethnotallowedouts.yfilter)) leaf_name_data.push_back(csipstatsclientmethnotallowedouts.get_name_leafdata());
    if (csipstatsclientnoaccepthereins.is_set || is_set(csipstatsclientnoaccepthereins.yfilter)) leaf_name_data.push_back(csipstatsclientnoaccepthereins.get_name_leafdata());
    if (csipstatsclientnoaccepthereouts.is_set || is_set(csipstatsclientnoaccepthereouts.yfilter)) leaf_name_data.push_back(csipstatsclientnoaccepthereouts.get_name_leafdata());
    if (csipstatsclientnosupmediatypeins.is_set || is_set(csipstatsclientnosupmediatypeins.yfilter)) leaf_name_data.push_back(csipstatsclientnosupmediatypeins.get_name_leafdata());
    if (csipstatsclientnosupmediatypeouts.is_set || is_set(csipstatsclientnosupmediatypeouts.yfilter)) leaf_name_data.push_back(csipstatsclientnosupmediatypeouts.get_name_leafdata());
    if (csipstatsclientnotacceptableins.is_set || is_set(csipstatsclientnotacceptableins.yfilter)) leaf_name_data.push_back(csipstatsclientnotacceptableins.get_name_leafdata());
    if (csipstatsclientnotacceptableouts.is_set || is_set(csipstatsclientnotacceptableouts.yfilter)) leaf_name_data.push_back(csipstatsclientnotacceptableouts.get_name_leafdata());
    if (csipstatsclientnotfoundins.is_set || is_set(csipstatsclientnotfoundins.yfilter)) leaf_name_data.push_back(csipstatsclientnotfoundins.get_name_leafdata());
    if (csipstatsclientnotfoundouts.is_set || is_set(csipstatsclientnotfoundouts.yfilter)) leaf_name_data.push_back(csipstatsclientnotfoundouts.get_name_leafdata());
    if (csipstatsclientpaymentreqdins.is_set || is_set(csipstatsclientpaymentreqdins.yfilter)) leaf_name_data.push_back(csipstatsclientpaymentreqdins.get_name_leafdata());
    if (csipstatsclientpaymentreqdouts.is_set || is_set(csipstatsclientpaymentreqdouts.yfilter)) leaf_name_data.push_back(csipstatsclientpaymentreqdouts.get_name_leafdata());
    if (csipstatsclientproxyauthreqdins.is_set || is_set(csipstatsclientproxyauthreqdins.yfilter)) leaf_name_data.push_back(csipstatsclientproxyauthreqdins.get_name_leafdata());
    if (csipstatsclientproxyauthreqdouts.is_set || is_set(csipstatsclientproxyauthreqdouts.yfilter)) leaf_name_data.push_back(csipstatsclientproxyauthreqdouts.get_name_leafdata());
    if (csipstatsclientreqenttoolargeins.is_set || is_set(csipstatsclientreqenttoolargeins.yfilter)) leaf_name_data.push_back(csipstatsclientreqenttoolargeins.get_name_leafdata());
    if (csipstatsclientreqenttoolargeouts.is_set || is_set(csipstatsclientreqenttoolargeouts.yfilter)) leaf_name_data.push_back(csipstatsclientreqenttoolargeouts.get_name_leafdata());
    if (csipstatsclientreqpendingins.is_set || is_set(csipstatsclientreqpendingins.yfilter)) leaf_name_data.push_back(csipstatsclientreqpendingins.get_name_leafdata());
    if (csipstatsclientreqpendingouts.is_set || is_set(csipstatsclientreqpendingouts.yfilter)) leaf_name_data.push_back(csipstatsclientreqpendingouts.get_name_leafdata());
    if (csipstatsclientreqtermins.is_set || is_set(csipstatsclientreqtermins.yfilter)) leaf_name_data.push_back(csipstatsclientreqtermins.get_name_leafdata());
    if (csipstatsclientreqtermouts.is_set || is_set(csipstatsclientreqtermouts.yfilter)) leaf_name_data.push_back(csipstatsclientreqtermouts.get_name_leafdata());
    if (csipstatsclientreqtimeoutins.is_set || is_set(csipstatsclientreqtimeoutins.yfilter)) leaf_name_data.push_back(csipstatsclientreqtimeoutins.get_name_leafdata());
    if (csipstatsclientreqtimeoutouts.is_set || is_set(csipstatsclientreqtimeoutouts.yfilter)) leaf_name_data.push_back(csipstatsclientreqtimeoutouts.get_name_leafdata());
    if (csipstatsclientrequritoolargeins.is_set || is_set(csipstatsclientrequritoolargeins.yfilter)) leaf_name_data.push_back(csipstatsclientrequritoolargeins.get_name_leafdata());
    if (csipstatsclientrequritoolargeouts.is_set || is_set(csipstatsclientrequritoolargeouts.yfilter)) leaf_name_data.push_back(csipstatsclientrequritoolargeouts.get_name_leafdata());
    if (csipstatsclientsttoosmallins.is_set || is_set(csipstatsclientsttoosmallins.yfilter)) leaf_name_data.push_back(csipstatsclientsttoosmallins.get_name_leafdata());
    if (csipstatsclientsttoosmallouts.is_set || is_set(csipstatsclientsttoosmallouts.yfilter)) leaf_name_data.push_back(csipstatsclientsttoosmallouts.get_name_leafdata());
    if (csipstatsclienttempnotavailins.is_set || is_set(csipstatsclienttempnotavailins.yfilter)) leaf_name_data.push_back(csipstatsclienttempnotavailins.get_name_leafdata());
    if (csipstatsclienttempnotavailouts.is_set || is_set(csipstatsclienttempnotavailouts.yfilter)) leaf_name_data.push_back(csipstatsclienttempnotavailouts.get_name_leafdata());
    if (csipstatsclienttoomanyhopsins.is_set || is_set(csipstatsclienttoomanyhopsins.yfilter)) leaf_name_data.push_back(csipstatsclienttoomanyhopsins.get_name_leafdata());
    if (csipstatsclienttoomanyhopsouts.is_set || is_set(csipstatsclienttoomanyhopsouts.yfilter)) leaf_name_data.push_back(csipstatsclienttoomanyhopsouts.get_name_leafdata());
    if (csipstatsclientunauthorizedins.is_set || is_set(csipstatsclientunauthorizedins.yfilter)) leaf_name_data.push_back(csipstatsclientunauthorizedins.get_name_leafdata());
    if (csipstatsclientunauthorizedouts.is_set || is_set(csipstatsclientunauthorizedouts.yfilter)) leaf_name_data.push_back(csipstatsclientunauthorizedouts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSipUaMib::Csipstatserrclient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSipUaMib::Csipstatserrclient::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSipUaMib::Csipstatserrclient::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
}

void CiscoSipUaMib::Csipstatserrclient::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "cSipStatsClientBadEventIns")
    {
        csipstatsclientbadeventins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientBadEventOuts")
    {
        csipstatsclientbadeventouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientBadExtensionIns")
    {
        csipstatsclientbadextensionins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientBadExtensionOuts")
    {
        csipstatsclientbadextensionouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientBadRequestIns")
    {
        csipstatsclientbadrequestins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientBadRequestOuts")
    {
        csipstatsclientbadrequestouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientBusyHereIns")
    {
        csipstatsclientbusyhereins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientBusyHereOuts")
    {
        csipstatsclientbusyhereouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientCallLegNoExistIns")
    {
        csipstatsclientcalllegnoexistins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientCallLegNoExistOuts")
    {
        csipstatsclientcalllegnoexistouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientConflictIns")
    {
        csipstatsclientconflictins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientConflictOuts")
    {
        csipstatsclientconflictouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientForbiddenIns")
    {
        csipstatsclientforbiddenins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientForbiddenOuts")
    {
        csipstatsclientforbiddenouts.yfilter = yfilter;
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
    if(value_path == "cSipStatsClientLoopDetectedIns")
    {
        csipstatsclientloopdetectedins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientLoopDetectedOuts")
    {
        csipstatsclientloopdetectedouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientMethNotAllowedIns")
    {
        csipstatsclientmethnotallowedins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientMethNotAllowedOuts")
    {
        csipstatsclientmethnotallowedouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientNoAcceptHereIns")
    {
        csipstatsclientnoaccepthereins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientNoAcceptHereOuts")
    {
        csipstatsclientnoaccepthereouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientNoSupMediaTypeIns")
    {
        csipstatsclientnosupmediatypeins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientNoSupMediaTypeOuts")
    {
        csipstatsclientnosupmediatypeouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientNotAcceptableIns")
    {
        csipstatsclientnotacceptableins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientNotAcceptableOuts")
    {
        csipstatsclientnotacceptableouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientNotFoundIns")
    {
        csipstatsclientnotfoundins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientNotFoundOuts")
    {
        csipstatsclientnotfoundouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientPaymentReqdIns")
    {
        csipstatsclientpaymentreqdins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientPaymentReqdOuts")
    {
        csipstatsclientpaymentreqdouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientProxyAuthReqdIns")
    {
        csipstatsclientproxyauthreqdins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientProxyAuthReqdOuts")
    {
        csipstatsclientproxyauthreqdouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientReqEntTooLargeIns")
    {
        csipstatsclientreqenttoolargeins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientReqEntTooLargeOuts")
    {
        csipstatsclientreqenttoolargeouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientReqPendingIns")
    {
        csipstatsclientreqpendingins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientReqPendingOuts")
    {
        csipstatsclientreqpendingouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientReqTermIns")
    {
        csipstatsclientreqtermins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientReqTermOuts")
    {
        csipstatsclientreqtermouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientReqTimeoutIns")
    {
        csipstatsclientreqtimeoutins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientReqTimeoutOuts")
    {
        csipstatsclientreqtimeoutouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientReqURITooLargeIns")
    {
        csipstatsclientrequritoolargeins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientReqURITooLargeOuts")
    {
        csipstatsclientrequritoolargeouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientSTTooSmallIns")
    {
        csipstatsclientsttoosmallins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientSTTooSmallOuts")
    {
        csipstatsclientsttoosmallouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientTempNotAvailIns")
    {
        csipstatsclienttempnotavailins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientTempNotAvailOuts")
    {
        csipstatsclienttempnotavailouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientTooManyHopsIns")
    {
        csipstatsclienttoomanyhopsins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientTooManyHopsOuts")
    {
        csipstatsclienttoomanyhopsouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientUnauthorizedIns")
    {
        csipstatsclientunauthorizedins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsClientUnauthorizedOuts")
    {
        csipstatsclientunauthorizedouts.yfilter = yfilter;
    }
}

bool CiscoSipUaMib::Csipstatserrclient::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipStatsClientAddrIncompleteIns" || name == "cSipStatsClientAddrIncompleteOuts" || name == "cSipStatsClientAmbiguousIns" || name == "cSipStatsClientAmbiguousOuts" || name == "cSipStatsClientBadEventIns" || name == "cSipStatsClientBadEventOuts" || name == "cSipStatsClientBadExtensionIns" || name == "cSipStatsClientBadExtensionOuts" || name == "cSipStatsClientBadRequestIns" || name == "cSipStatsClientBadRequestOuts" || name == "cSipStatsClientBusyHereIns" || name == "cSipStatsClientBusyHereOuts" || name == "cSipStatsClientCallLegNoExistIns" || name == "cSipStatsClientCallLegNoExistOuts" || name == "cSipStatsClientConflictIns" || name == "cSipStatsClientConflictOuts" || name == "cSipStatsClientForbiddenIns" || name == "cSipStatsClientForbiddenOuts" || name == "cSipStatsClientGoneIns" || name == "cSipStatsClientGoneOuts" || name == "cSipStatsClientLengthRequiredIns" || name == "cSipStatsClientLengthRequiredOuts" || name == "cSipStatsClientLoopDetectedIns" || name == "cSipStatsClientLoopDetectedOuts" || name == "cSipStatsClientMethNotAllowedIns" || name == "cSipStatsClientMethNotAllowedOuts" || name == "cSipStatsClientNoAcceptHereIns" || name == "cSipStatsClientNoAcceptHereOuts" || name == "cSipStatsClientNoSupMediaTypeIns" || name == "cSipStatsClientNoSupMediaTypeOuts" || name == "cSipStatsClientNotAcceptableIns" || name == "cSipStatsClientNotAcceptableOuts" || name == "cSipStatsClientNotFoundIns" || name == "cSipStatsClientNotFoundOuts" || name == "cSipStatsClientPaymentReqdIns" || name == "cSipStatsClientPaymentReqdOuts" || name == "cSipStatsClientProxyAuthReqdIns" || name == "cSipStatsClientProxyAuthReqdOuts" || name == "cSipStatsClientReqEntTooLargeIns" || name == "cSipStatsClientReqEntTooLargeOuts" || name == "cSipStatsClientReqPendingIns" || name == "cSipStatsClientReqPendingOuts" || name == "cSipStatsClientReqTermIns" || name == "cSipStatsClientReqTermOuts" || name == "cSipStatsClientReqTimeoutIns" || name == "cSipStatsClientReqTimeoutOuts" || name == "cSipStatsClientReqURITooLargeIns" || name == "cSipStatsClientReqURITooLargeOuts" || name == "cSipStatsClientSTTooSmallIns" || name == "cSipStatsClientSTTooSmallOuts" || name == "cSipStatsClientTempNotAvailIns" || name == "cSipStatsClientTempNotAvailOuts" || name == "cSipStatsClientTooManyHopsIns" || name == "cSipStatsClientTooManyHopsOuts" || name == "cSipStatsClientUnauthorizedIns" || name == "cSipStatsClientUnauthorizedOuts")
        return true;
    return false;
}

CiscoSipUaMib::Csipstatserrserver::Csipstatserrserver()
    :
    csipstatsserverbadgatewayins{YType::uint32, "cSipStatsServerBadGatewayIns"},
    csipstatsserverbadgatewayouts{YType::uint32, "cSipStatsServerBadGatewayOuts"},
    csipstatsserverbadsipversionins{YType::uint32, "cSipStatsServerBadSipVersionIns"},
    csipstatsserverbadsipversionouts{YType::uint32, "cSipStatsServerBadSipVersionOuts"},
    csipstatsservergatewaytimeoutins{YType::uint32, "cSipStatsServerGatewayTimeoutIns"},
    csipstatsservergatewaytimeoutouts{YType::uint32, "cSipStatsServerGatewayTimeoutOuts"},
    csipstatsserverinterrorins{YType::uint32, "cSipStatsServerIntErrorIns"},
    csipstatsserverinterrorouts{YType::uint32, "cSipStatsServerIntErrorOuts"},
    csipstatsservernotimplementedins{YType::uint32, "cSipStatsServerNotImplementedIns"},
    csipstatsservernotimplementedouts{YType::uint32, "cSipStatsServerNotImplementedOuts"},
    csipstatsserverprecondfailureins{YType::uint32, "cSipStatsServerPrecondFailureIns"},
    csipstatsserverprecondfailureouts{YType::uint32, "cSipStatsServerPrecondFailureOuts"},
    csipstatsserverserviceunavailins{YType::uint32, "cSipStatsServerServiceUnavailIns"},
    csipstatsserverserviceunavailouts{YType::uint32, "cSipStatsServerServiceUnavailOuts"}
{
    yang_name = "cSipStatsErrServer"; yang_parent_name = "CISCO-SIP-UA-MIB";
}

CiscoSipUaMib::Csipstatserrserver::~Csipstatserrserver()
{
}

bool CiscoSipUaMib::Csipstatserrserver::has_data() const
{
    return csipstatsserverbadgatewayins.is_set
	|| csipstatsserverbadgatewayouts.is_set
	|| csipstatsserverbadsipversionins.is_set
	|| csipstatsserverbadsipversionouts.is_set
	|| csipstatsservergatewaytimeoutins.is_set
	|| csipstatsservergatewaytimeoutouts.is_set
	|| csipstatsserverinterrorins.is_set
	|| csipstatsserverinterrorouts.is_set
	|| csipstatsservernotimplementedins.is_set
	|| csipstatsservernotimplementedouts.is_set
	|| csipstatsserverprecondfailureins.is_set
	|| csipstatsserverprecondfailureouts.is_set
	|| csipstatsserverserviceunavailins.is_set
	|| csipstatsserverserviceunavailouts.is_set;
}

bool CiscoSipUaMib::Csipstatserrserver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipstatsserverbadgatewayins.yfilter)
	|| ydk::is_set(csipstatsserverbadgatewayouts.yfilter)
	|| ydk::is_set(csipstatsserverbadsipversionins.yfilter)
	|| ydk::is_set(csipstatsserverbadsipversionouts.yfilter)
	|| ydk::is_set(csipstatsservergatewaytimeoutins.yfilter)
	|| ydk::is_set(csipstatsservergatewaytimeoutouts.yfilter)
	|| ydk::is_set(csipstatsserverinterrorins.yfilter)
	|| ydk::is_set(csipstatsserverinterrorouts.yfilter)
	|| ydk::is_set(csipstatsservernotimplementedins.yfilter)
	|| ydk::is_set(csipstatsservernotimplementedouts.yfilter)
	|| ydk::is_set(csipstatsserverprecondfailureins.yfilter)
	|| ydk::is_set(csipstatsserverprecondfailureouts.yfilter)
	|| ydk::is_set(csipstatsserverserviceunavailins.yfilter)
	|| ydk::is_set(csipstatsserverserviceunavailouts.yfilter);
}

std::string CiscoSipUaMib::Csipstatserrserver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipStatsErrServer";

    return path_buffer.str();

}

const EntityPath CiscoSipUaMib::Csipstatserrserver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipstatsserverbadgatewayins.is_set || is_set(csipstatsserverbadgatewayins.yfilter)) leaf_name_data.push_back(csipstatsserverbadgatewayins.get_name_leafdata());
    if (csipstatsserverbadgatewayouts.is_set || is_set(csipstatsserverbadgatewayouts.yfilter)) leaf_name_data.push_back(csipstatsserverbadgatewayouts.get_name_leafdata());
    if (csipstatsserverbadsipversionins.is_set || is_set(csipstatsserverbadsipversionins.yfilter)) leaf_name_data.push_back(csipstatsserverbadsipversionins.get_name_leafdata());
    if (csipstatsserverbadsipversionouts.is_set || is_set(csipstatsserverbadsipversionouts.yfilter)) leaf_name_data.push_back(csipstatsserverbadsipversionouts.get_name_leafdata());
    if (csipstatsservergatewaytimeoutins.is_set || is_set(csipstatsservergatewaytimeoutins.yfilter)) leaf_name_data.push_back(csipstatsservergatewaytimeoutins.get_name_leafdata());
    if (csipstatsservergatewaytimeoutouts.is_set || is_set(csipstatsservergatewaytimeoutouts.yfilter)) leaf_name_data.push_back(csipstatsservergatewaytimeoutouts.get_name_leafdata());
    if (csipstatsserverinterrorins.is_set || is_set(csipstatsserverinterrorins.yfilter)) leaf_name_data.push_back(csipstatsserverinterrorins.get_name_leafdata());
    if (csipstatsserverinterrorouts.is_set || is_set(csipstatsserverinterrorouts.yfilter)) leaf_name_data.push_back(csipstatsserverinterrorouts.get_name_leafdata());
    if (csipstatsservernotimplementedins.is_set || is_set(csipstatsservernotimplementedins.yfilter)) leaf_name_data.push_back(csipstatsservernotimplementedins.get_name_leafdata());
    if (csipstatsservernotimplementedouts.is_set || is_set(csipstatsservernotimplementedouts.yfilter)) leaf_name_data.push_back(csipstatsservernotimplementedouts.get_name_leafdata());
    if (csipstatsserverprecondfailureins.is_set || is_set(csipstatsserverprecondfailureins.yfilter)) leaf_name_data.push_back(csipstatsserverprecondfailureins.get_name_leafdata());
    if (csipstatsserverprecondfailureouts.is_set || is_set(csipstatsserverprecondfailureouts.yfilter)) leaf_name_data.push_back(csipstatsserverprecondfailureouts.get_name_leafdata());
    if (csipstatsserverserviceunavailins.is_set || is_set(csipstatsserverserviceunavailins.yfilter)) leaf_name_data.push_back(csipstatsserverserviceunavailins.get_name_leafdata());
    if (csipstatsserverserviceunavailouts.is_set || is_set(csipstatsserverserviceunavailouts.yfilter)) leaf_name_data.push_back(csipstatsserverserviceunavailouts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSipUaMib::Csipstatserrserver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSipUaMib::Csipstatserrserver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSipUaMib::Csipstatserrserver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
}

void CiscoSipUaMib::Csipstatserrserver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cSipStatsServerBadGatewayIns")
    {
        csipstatsserverbadgatewayins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsServerBadGatewayOuts")
    {
        csipstatsserverbadgatewayouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsServerBadSipVersionIns")
    {
        csipstatsserverbadsipversionins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsServerBadSipVersionOuts")
    {
        csipstatsserverbadsipversionouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsServerGatewayTimeoutIns")
    {
        csipstatsservergatewaytimeoutins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsServerGatewayTimeoutOuts")
    {
        csipstatsservergatewaytimeoutouts.yfilter = yfilter;
    }
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
    if(value_path == "cSipStatsServerPrecondFailureIns")
    {
        csipstatsserverprecondfailureins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsServerPrecondFailureOuts")
    {
        csipstatsserverprecondfailureouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsServerServiceUnavailIns")
    {
        csipstatsserverserviceunavailins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsServerServiceUnavailOuts")
    {
        csipstatsserverserviceunavailouts.yfilter = yfilter;
    }
}

bool CiscoSipUaMib::Csipstatserrserver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipStatsServerBadGatewayIns" || name == "cSipStatsServerBadGatewayOuts" || name == "cSipStatsServerBadSipVersionIns" || name == "cSipStatsServerBadSipVersionOuts" || name == "cSipStatsServerGatewayTimeoutIns" || name == "cSipStatsServerGatewayTimeoutOuts" || name == "cSipStatsServerIntErrorIns" || name == "cSipStatsServerIntErrorOuts" || name == "cSipStatsServerNotImplementedIns" || name == "cSipStatsServerNotImplementedOuts" || name == "cSipStatsServerPrecondFailureIns" || name == "cSipStatsServerPrecondFailureOuts" || name == "cSipStatsServerServiceUnavailIns" || name == "cSipStatsServerServiceUnavailOuts")
        return true;
    return false;
}

CiscoSipUaMib::Csipstatsglobalfail::Csipstatsglobalfail()
    :
    csipstatsglobalbusyeverywhereins{YType::uint32, "cSipStatsGlobalBusyEverywhereIns"},
    csipstatsglobalbusyeverywhereouts{YType::uint32, "cSipStatsGlobalBusyEverywhereOuts"},
    csipstatsglobaldeclineins{YType::uint32, "cSipStatsGlobalDeclineIns"},
    csipstatsglobaldeclineouts{YType::uint32, "cSipStatsGlobalDeclineOuts"},
    csipstatsglobalnotacceptableins{YType::uint32, "cSipStatsGlobalNotAcceptableIns"},
    csipstatsglobalnotacceptableouts{YType::uint32, "cSipStatsGlobalNotAcceptableOuts"},
    csipstatsglobalnotanywhereins{YType::uint32, "cSipStatsGlobalNotAnywhereIns"},
    csipstatsglobalnotanywhereouts{YType::uint32, "cSipStatsGlobalNotAnywhereOuts"}
{
    yang_name = "cSipStatsGlobalFail"; yang_parent_name = "CISCO-SIP-UA-MIB";
}

CiscoSipUaMib::Csipstatsglobalfail::~Csipstatsglobalfail()
{
}

bool CiscoSipUaMib::Csipstatsglobalfail::has_data() const
{
    return csipstatsglobalbusyeverywhereins.is_set
	|| csipstatsglobalbusyeverywhereouts.is_set
	|| csipstatsglobaldeclineins.is_set
	|| csipstatsglobaldeclineouts.is_set
	|| csipstatsglobalnotacceptableins.is_set
	|| csipstatsglobalnotacceptableouts.is_set
	|| csipstatsglobalnotanywhereins.is_set
	|| csipstatsglobalnotanywhereouts.is_set;
}

bool CiscoSipUaMib::Csipstatsglobalfail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipstatsglobalbusyeverywhereins.yfilter)
	|| ydk::is_set(csipstatsglobalbusyeverywhereouts.yfilter)
	|| ydk::is_set(csipstatsglobaldeclineins.yfilter)
	|| ydk::is_set(csipstatsglobaldeclineouts.yfilter)
	|| ydk::is_set(csipstatsglobalnotacceptableins.yfilter)
	|| ydk::is_set(csipstatsglobalnotacceptableouts.yfilter)
	|| ydk::is_set(csipstatsglobalnotanywhereins.yfilter)
	|| ydk::is_set(csipstatsglobalnotanywhereouts.yfilter);
}

std::string CiscoSipUaMib::Csipstatsglobalfail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipStatsGlobalFail";

    return path_buffer.str();

}

const EntityPath CiscoSipUaMib::Csipstatsglobalfail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipstatsglobalbusyeverywhereins.is_set || is_set(csipstatsglobalbusyeverywhereins.yfilter)) leaf_name_data.push_back(csipstatsglobalbusyeverywhereins.get_name_leafdata());
    if (csipstatsglobalbusyeverywhereouts.is_set || is_set(csipstatsglobalbusyeverywhereouts.yfilter)) leaf_name_data.push_back(csipstatsglobalbusyeverywhereouts.get_name_leafdata());
    if (csipstatsglobaldeclineins.is_set || is_set(csipstatsglobaldeclineins.yfilter)) leaf_name_data.push_back(csipstatsglobaldeclineins.get_name_leafdata());
    if (csipstatsglobaldeclineouts.is_set || is_set(csipstatsglobaldeclineouts.yfilter)) leaf_name_data.push_back(csipstatsglobaldeclineouts.get_name_leafdata());
    if (csipstatsglobalnotacceptableins.is_set || is_set(csipstatsglobalnotacceptableins.yfilter)) leaf_name_data.push_back(csipstatsglobalnotacceptableins.get_name_leafdata());
    if (csipstatsglobalnotacceptableouts.is_set || is_set(csipstatsglobalnotacceptableouts.yfilter)) leaf_name_data.push_back(csipstatsglobalnotacceptableouts.get_name_leafdata());
    if (csipstatsglobalnotanywhereins.is_set || is_set(csipstatsglobalnotanywhereins.yfilter)) leaf_name_data.push_back(csipstatsglobalnotanywhereins.get_name_leafdata());
    if (csipstatsglobalnotanywhereouts.is_set || is_set(csipstatsglobalnotanywhereouts.yfilter)) leaf_name_data.push_back(csipstatsglobalnotanywhereouts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSipUaMib::Csipstatsglobalfail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSipUaMib::Csipstatsglobalfail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSipUaMib::Csipstatsglobalfail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void CiscoSipUaMib::Csipstatsglobalfail::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "cSipStatsGlobalNotAcceptableIns")
    {
        csipstatsglobalnotacceptableins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsGlobalNotAcceptableOuts")
    {
        csipstatsglobalnotacceptableouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsGlobalNotAnywhereIns")
    {
        csipstatsglobalnotanywhereins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsGlobalNotAnywhereOuts")
    {
        csipstatsglobalnotanywhereouts.yfilter = yfilter;
    }
}

bool CiscoSipUaMib::Csipstatsglobalfail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipStatsGlobalBusyEverywhereIns" || name == "cSipStatsGlobalBusyEverywhereOuts" || name == "cSipStatsGlobalDeclineIns" || name == "cSipStatsGlobalDeclineOuts" || name == "cSipStatsGlobalNotAcceptableIns" || name == "cSipStatsGlobalNotAcceptableOuts" || name == "cSipStatsGlobalNotAnywhereIns" || name == "cSipStatsGlobalNotAnywhereOuts")
        return true;
    return false;
}

CiscoSipUaMib::Csipstatstraffic::Csipstatstraffic()
    :
    csipstatstrafficackins{YType::uint32, "cSipStatsTrafficAckIns"},
    csipstatstrafficackouts{YType::uint32, "cSipStatsTrafficAckOuts"},
    csipstatstrafficbyeins{YType::uint32, "cSipStatsTrafficByeIns"},
    csipstatstrafficbyeouts{YType::uint32, "cSipStatsTrafficByeOuts"},
    csipstatstrafficcancelins{YType::uint32, "cSipStatsTrafficCancelIns"},
    csipstatstrafficcancelouts{YType::uint32, "cSipStatsTrafficCancelOuts"},
    csipstatstrafficcometins{YType::uint32, "cSipStatsTrafficCometIns"},
    csipstatstrafficcometouts{YType::uint32, "cSipStatsTrafficCometOuts"},
    csipstatstrafficinfoins{YType::uint32, "cSipStatsTrafficInfoIns"},
    csipstatstrafficinfoouts{YType::uint32, "cSipStatsTrafficInfoOuts"},
    csipstatstrafficinviteins{YType::uint32, "cSipStatsTrafficInviteIns"},
    csipstatstrafficinviteouts{YType::uint32, "cSipStatsTrafficInviteOuts"},
    csipstatstrafficnotifyins{YType::uint32, "cSipStatsTrafficNotifyIns"},
    csipstatstrafficnotifyouts{YType::uint32, "cSipStatsTrafficNotifyOuts"},
    csipstatstrafficoptionsins{YType::uint32, "cSipStatsTrafficOptionsIns"},
    csipstatstrafficoptionsouts{YType::uint32, "cSipStatsTrafficOptionsOuts"},
    csipstatstrafficprackins{YType::uint32, "cSipStatsTrafficPrackIns"},
    csipstatstrafficprackouts{YType::uint32, "cSipStatsTrafficPrackOuts"},
    csipstatstrafficreferins{YType::uint32, "cSipStatsTrafficReferIns"},
    csipstatstrafficreferouts{YType::uint32, "cSipStatsTrafficReferOuts"},
    csipstatstrafficregisterins{YType::uint32, "cSipStatsTrafficRegisterIns"},
    csipstatstrafficregisterouts{YType::uint32, "cSipStatsTrafficRegisterOuts"},
    csipstatstrafficsubscribeins{YType::uint32, "cSipStatsTrafficSubscribeIns"},
    csipstatstrafficsubscribeouts{YType::uint32, "cSipStatsTrafficSubscribeOuts"},
    csipstatstrafficupdateins{YType::uint32, "cSipStatsTrafficUpdateIns"},
    csipstatstrafficupdateouts{YType::uint32, "cSipStatsTrafficUpdateOuts"}
{
    yang_name = "cSipStatsTraffic"; yang_parent_name = "CISCO-SIP-UA-MIB";
}

CiscoSipUaMib::Csipstatstraffic::~Csipstatstraffic()
{
}

bool CiscoSipUaMib::Csipstatstraffic::has_data() const
{
    return csipstatstrafficackins.is_set
	|| csipstatstrafficackouts.is_set
	|| csipstatstrafficbyeins.is_set
	|| csipstatstrafficbyeouts.is_set
	|| csipstatstrafficcancelins.is_set
	|| csipstatstrafficcancelouts.is_set
	|| csipstatstrafficcometins.is_set
	|| csipstatstrafficcometouts.is_set
	|| csipstatstrafficinfoins.is_set
	|| csipstatstrafficinfoouts.is_set
	|| csipstatstrafficinviteins.is_set
	|| csipstatstrafficinviteouts.is_set
	|| csipstatstrafficnotifyins.is_set
	|| csipstatstrafficnotifyouts.is_set
	|| csipstatstrafficoptionsins.is_set
	|| csipstatstrafficoptionsouts.is_set
	|| csipstatstrafficprackins.is_set
	|| csipstatstrafficprackouts.is_set
	|| csipstatstrafficreferins.is_set
	|| csipstatstrafficreferouts.is_set
	|| csipstatstrafficregisterins.is_set
	|| csipstatstrafficregisterouts.is_set
	|| csipstatstrafficsubscribeins.is_set
	|| csipstatstrafficsubscribeouts.is_set
	|| csipstatstrafficupdateins.is_set
	|| csipstatstrafficupdateouts.is_set;
}

bool CiscoSipUaMib::Csipstatstraffic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipstatstrafficackins.yfilter)
	|| ydk::is_set(csipstatstrafficackouts.yfilter)
	|| ydk::is_set(csipstatstrafficbyeins.yfilter)
	|| ydk::is_set(csipstatstrafficbyeouts.yfilter)
	|| ydk::is_set(csipstatstrafficcancelins.yfilter)
	|| ydk::is_set(csipstatstrafficcancelouts.yfilter)
	|| ydk::is_set(csipstatstrafficcometins.yfilter)
	|| ydk::is_set(csipstatstrafficcometouts.yfilter)
	|| ydk::is_set(csipstatstrafficinfoins.yfilter)
	|| ydk::is_set(csipstatstrafficinfoouts.yfilter)
	|| ydk::is_set(csipstatstrafficinviteins.yfilter)
	|| ydk::is_set(csipstatstrafficinviteouts.yfilter)
	|| ydk::is_set(csipstatstrafficnotifyins.yfilter)
	|| ydk::is_set(csipstatstrafficnotifyouts.yfilter)
	|| ydk::is_set(csipstatstrafficoptionsins.yfilter)
	|| ydk::is_set(csipstatstrafficoptionsouts.yfilter)
	|| ydk::is_set(csipstatstrafficprackins.yfilter)
	|| ydk::is_set(csipstatstrafficprackouts.yfilter)
	|| ydk::is_set(csipstatstrafficreferins.yfilter)
	|| ydk::is_set(csipstatstrafficreferouts.yfilter)
	|| ydk::is_set(csipstatstrafficregisterins.yfilter)
	|| ydk::is_set(csipstatstrafficregisterouts.yfilter)
	|| ydk::is_set(csipstatstrafficsubscribeins.yfilter)
	|| ydk::is_set(csipstatstrafficsubscribeouts.yfilter)
	|| ydk::is_set(csipstatstrafficupdateins.yfilter)
	|| ydk::is_set(csipstatstrafficupdateouts.yfilter);
}

std::string CiscoSipUaMib::Csipstatstraffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipStatsTraffic";

    return path_buffer.str();

}

const EntityPath CiscoSipUaMib::Csipstatstraffic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipstatstrafficackins.is_set || is_set(csipstatstrafficackins.yfilter)) leaf_name_data.push_back(csipstatstrafficackins.get_name_leafdata());
    if (csipstatstrafficackouts.is_set || is_set(csipstatstrafficackouts.yfilter)) leaf_name_data.push_back(csipstatstrafficackouts.get_name_leafdata());
    if (csipstatstrafficbyeins.is_set || is_set(csipstatstrafficbyeins.yfilter)) leaf_name_data.push_back(csipstatstrafficbyeins.get_name_leafdata());
    if (csipstatstrafficbyeouts.is_set || is_set(csipstatstrafficbyeouts.yfilter)) leaf_name_data.push_back(csipstatstrafficbyeouts.get_name_leafdata());
    if (csipstatstrafficcancelins.is_set || is_set(csipstatstrafficcancelins.yfilter)) leaf_name_data.push_back(csipstatstrafficcancelins.get_name_leafdata());
    if (csipstatstrafficcancelouts.is_set || is_set(csipstatstrafficcancelouts.yfilter)) leaf_name_data.push_back(csipstatstrafficcancelouts.get_name_leafdata());
    if (csipstatstrafficcometins.is_set || is_set(csipstatstrafficcometins.yfilter)) leaf_name_data.push_back(csipstatstrafficcometins.get_name_leafdata());
    if (csipstatstrafficcometouts.is_set || is_set(csipstatstrafficcometouts.yfilter)) leaf_name_data.push_back(csipstatstrafficcometouts.get_name_leafdata());
    if (csipstatstrafficinfoins.is_set || is_set(csipstatstrafficinfoins.yfilter)) leaf_name_data.push_back(csipstatstrafficinfoins.get_name_leafdata());
    if (csipstatstrafficinfoouts.is_set || is_set(csipstatstrafficinfoouts.yfilter)) leaf_name_data.push_back(csipstatstrafficinfoouts.get_name_leafdata());
    if (csipstatstrafficinviteins.is_set || is_set(csipstatstrafficinviteins.yfilter)) leaf_name_data.push_back(csipstatstrafficinviteins.get_name_leafdata());
    if (csipstatstrafficinviteouts.is_set || is_set(csipstatstrafficinviteouts.yfilter)) leaf_name_data.push_back(csipstatstrafficinviteouts.get_name_leafdata());
    if (csipstatstrafficnotifyins.is_set || is_set(csipstatstrafficnotifyins.yfilter)) leaf_name_data.push_back(csipstatstrafficnotifyins.get_name_leafdata());
    if (csipstatstrafficnotifyouts.is_set || is_set(csipstatstrafficnotifyouts.yfilter)) leaf_name_data.push_back(csipstatstrafficnotifyouts.get_name_leafdata());
    if (csipstatstrafficoptionsins.is_set || is_set(csipstatstrafficoptionsins.yfilter)) leaf_name_data.push_back(csipstatstrafficoptionsins.get_name_leafdata());
    if (csipstatstrafficoptionsouts.is_set || is_set(csipstatstrafficoptionsouts.yfilter)) leaf_name_data.push_back(csipstatstrafficoptionsouts.get_name_leafdata());
    if (csipstatstrafficprackins.is_set || is_set(csipstatstrafficprackins.yfilter)) leaf_name_data.push_back(csipstatstrafficprackins.get_name_leafdata());
    if (csipstatstrafficprackouts.is_set || is_set(csipstatstrafficprackouts.yfilter)) leaf_name_data.push_back(csipstatstrafficprackouts.get_name_leafdata());
    if (csipstatstrafficreferins.is_set || is_set(csipstatstrafficreferins.yfilter)) leaf_name_data.push_back(csipstatstrafficreferins.get_name_leafdata());
    if (csipstatstrafficreferouts.is_set || is_set(csipstatstrafficreferouts.yfilter)) leaf_name_data.push_back(csipstatstrafficreferouts.get_name_leafdata());
    if (csipstatstrafficregisterins.is_set || is_set(csipstatstrafficregisterins.yfilter)) leaf_name_data.push_back(csipstatstrafficregisterins.get_name_leafdata());
    if (csipstatstrafficregisterouts.is_set || is_set(csipstatstrafficregisterouts.yfilter)) leaf_name_data.push_back(csipstatstrafficregisterouts.get_name_leafdata());
    if (csipstatstrafficsubscribeins.is_set || is_set(csipstatstrafficsubscribeins.yfilter)) leaf_name_data.push_back(csipstatstrafficsubscribeins.get_name_leafdata());
    if (csipstatstrafficsubscribeouts.is_set || is_set(csipstatstrafficsubscribeouts.yfilter)) leaf_name_data.push_back(csipstatstrafficsubscribeouts.get_name_leafdata());
    if (csipstatstrafficupdateins.is_set || is_set(csipstatstrafficupdateins.yfilter)) leaf_name_data.push_back(csipstatstrafficupdateins.get_name_leafdata());
    if (csipstatstrafficupdateouts.is_set || is_set(csipstatstrafficupdateouts.yfilter)) leaf_name_data.push_back(csipstatstrafficupdateouts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSipUaMib::Csipstatstraffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSipUaMib::Csipstatstraffic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSipUaMib::Csipstatstraffic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void CiscoSipUaMib::Csipstatstraffic::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "cSipStatsTrafficCometIns")
    {
        csipstatstrafficcometins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsTrafficCometOuts")
    {
        csipstatstrafficcometouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsTrafficInfoIns")
    {
        csipstatstrafficinfoins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsTrafficInfoOuts")
    {
        csipstatstrafficinfoouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsTrafficInviteIns")
    {
        csipstatstrafficinviteins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsTrafficInviteOuts")
    {
        csipstatstrafficinviteouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsTrafficNotifyIns")
    {
        csipstatstrafficnotifyins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsTrafficNotifyOuts")
    {
        csipstatstrafficnotifyouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsTrafficOptionsIns")
    {
        csipstatstrafficoptionsins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsTrafficOptionsOuts")
    {
        csipstatstrafficoptionsouts.yfilter = yfilter;
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
    if(value_path == "cSipStatsTrafficRegisterIns")
    {
        csipstatstrafficregisterins.yfilter = yfilter;
    }
    if(value_path == "cSipStatsTrafficRegisterOuts")
    {
        csipstatstrafficregisterouts.yfilter = yfilter;
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

bool CiscoSipUaMib::Csipstatstraffic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipStatsTrafficAckIns" || name == "cSipStatsTrafficAckOuts" || name == "cSipStatsTrafficByeIns" || name == "cSipStatsTrafficByeOuts" || name == "cSipStatsTrafficCancelIns" || name == "cSipStatsTrafficCancelOuts" || name == "cSipStatsTrafficCometIns" || name == "cSipStatsTrafficCometOuts" || name == "cSipStatsTrafficInfoIns" || name == "cSipStatsTrafficInfoOuts" || name == "cSipStatsTrafficInviteIns" || name == "cSipStatsTrafficInviteOuts" || name == "cSipStatsTrafficNotifyIns" || name == "cSipStatsTrafficNotifyOuts" || name == "cSipStatsTrafficOptionsIns" || name == "cSipStatsTrafficOptionsOuts" || name == "cSipStatsTrafficPrackIns" || name == "cSipStatsTrafficPrackOuts" || name == "cSipStatsTrafficReferIns" || name == "cSipStatsTrafficReferOuts" || name == "cSipStatsTrafficRegisterIns" || name == "cSipStatsTrafficRegisterOuts" || name == "cSipStatsTrafficSubscribeIns" || name == "cSipStatsTrafficSubscribeOuts" || name == "cSipStatsTrafficUpdateIns" || name == "cSipStatsTrafficUpdateOuts")
        return true;
    return false;
}

CiscoSipUaMib::Csipstatsretry::Csipstatsretry()
    :
    csipstatsretrybyes{YType::uint32, "cSipStatsRetryByes"},
    csipstatsretrycancels{YType::uint32, "cSipStatsRetryCancels"},
    csipstatsretrycomets{YType::uint32, "cSipStatsRetryComets"},
    csipstatsretryinfo{YType::uint32, "cSipStatsRetryInfo"},
    csipstatsretryinvites{YType::uint32, "cSipStatsRetryInvites"},
    csipstatsretrynotifys{YType::uint32, "cSipStatsRetryNotifys"},
    csipstatsretrypracks{YType::uint32, "cSipStatsRetryPracks"},
    csipstatsretryrefers{YType::uint32, "cSipStatsRetryRefers"},
    csipstatsretryregisters{YType::uint32, "cSipStatsRetryRegisters"},
    csipstatsretryreliable1xxrsps{YType::uint32, "cSipStatsRetryReliable1xxRsps"},
    csipstatsretryresponses{YType::uint32, "cSipStatsRetryResponses"},
    csipstatsretrysubscribe{YType::uint32, "cSipStatsRetrySubscribe"}
{
    yang_name = "cSipStatsRetry"; yang_parent_name = "CISCO-SIP-UA-MIB";
}

CiscoSipUaMib::Csipstatsretry::~Csipstatsretry()
{
}

bool CiscoSipUaMib::Csipstatsretry::has_data() const
{
    return csipstatsretrybyes.is_set
	|| csipstatsretrycancels.is_set
	|| csipstatsretrycomets.is_set
	|| csipstatsretryinfo.is_set
	|| csipstatsretryinvites.is_set
	|| csipstatsretrynotifys.is_set
	|| csipstatsretrypracks.is_set
	|| csipstatsretryrefers.is_set
	|| csipstatsretryregisters.is_set
	|| csipstatsretryreliable1xxrsps.is_set
	|| csipstatsretryresponses.is_set
	|| csipstatsretrysubscribe.is_set;
}

bool CiscoSipUaMib::Csipstatsretry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipstatsretrybyes.yfilter)
	|| ydk::is_set(csipstatsretrycancels.yfilter)
	|| ydk::is_set(csipstatsretrycomets.yfilter)
	|| ydk::is_set(csipstatsretryinfo.yfilter)
	|| ydk::is_set(csipstatsretryinvites.yfilter)
	|| ydk::is_set(csipstatsretrynotifys.yfilter)
	|| ydk::is_set(csipstatsretrypracks.yfilter)
	|| ydk::is_set(csipstatsretryrefers.yfilter)
	|| ydk::is_set(csipstatsretryregisters.yfilter)
	|| ydk::is_set(csipstatsretryreliable1xxrsps.yfilter)
	|| ydk::is_set(csipstatsretryresponses.yfilter)
	|| ydk::is_set(csipstatsretrysubscribe.yfilter);
}

std::string CiscoSipUaMib::Csipstatsretry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipStatsRetry";

    return path_buffer.str();

}

const EntityPath CiscoSipUaMib::Csipstatsretry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipstatsretrybyes.is_set || is_set(csipstatsretrybyes.yfilter)) leaf_name_data.push_back(csipstatsretrybyes.get_name_leafdata());
    if (csipstatsretrycancels.is_set || is_set(csipstatsretrycancels.yfilter)) leaf_name_data.push_back(csipstatsretrycancels.get_name_leafdata());
    if (csipstatsretrycomets.is_set || is_set(csipstatsretrycomets.yfilter)) leaf_name_data.push_back(csipstatsretrycomets.get_name_leafdata());
    if (csipstatsretryinfo.is_set || is_set(csipstatsretryinfo.yfilter)) leaf_name_data.push_back(csipstatsretryinfo.get_name_leafdata());
    if (csipstatsretryinvites.is_set || is_set(csipstatsretryinvites.yfilter)) leaf_name_data.push_back(csipstatsretryinvites.get_name_leafdata());
    if (csipstatsretrynotifys.is_set || is_set(csipstatsretrynotifys.yfilter)) leaf_name_data.push_back(csipstatsretrynotifys.get_name_leafdata());
    if (csipstatsretrypracks.is_set || is_set(csipstatsretrypracks.yfilter)) leaf_name_data.push_back(csipstatsretrypracks.get_name_leafdata());
    if (csipstatsretryrefers.is_set || is_set(csipstatsretryrefers.yfilter)) leaf_name_data.push_back(csipstatsretryrefers.get_name_leafdata());
    if (csipstatsretryregisters.is_set || is_set(csipstatsretryregisters.yfilter)) leaf_name_data.push_back(csipstatsretryregisters.get_name_leafdata());
    if (csipstatsretryreliable1xxrsps.is_set || is_set(csipstatsretryreliable1xxrsps.yfilter)) leaf_name_data.push_back(csipstatsretryreliable1xxrsps.get_name_leafdata());
    if (csipstatsretryresponses.is_set || is_set(csipstatsretryresponses.yfilter)) leaf_name_data.push_back(csipstatsretryresponses.get_name_leafdata());
    if (csipstatsretrysubscribe.is_set || is_set(csipstatsretrysubscribe.yfilter)) leaf_name_data.push_back(csipstatsretrysubscribe.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSipUaMib::Csipstatsretry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSipUaMib::Csipstatsretry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSipUaMib::Csipstatsretry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "cSipStatsRetryComets")
    {
        csipstatsretrycomets = value;
        csipstatsretrycomets.value_namespace = name_space;
        csipstatsretrycomets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsRetryInfo")
    {
        csipstatsretryinfo = value;
        csipstatsretryinfo.value_namespace = name_space;
        csipstatsretryinfo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsRetryInvites")
    {
        csipstatsretryinvites = value;
        csipstatsretryinvites.value_namespace = name_space;
        csipstatsretryinvites.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsRetryNotifys")
    {
        csipstatsretrynotifys = value;
        csipstatsretrynotifys.value_namespace = name_space;
        csipstatsretrynotifys.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsRetryPracks")
    {
        csipstatsretrypracks = value;
        csipstatsretrypracks.value_namespace = name_space;
        csipstatsretrypracks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsRetryRefers")
    {
        csipstatsretryrefers = value;
        csipstatsretryrefers.value_namespace = name_space;
        csipstatsretryrefers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsRetryRegisters")
    {
        csipstatsretryregisters = value;
        csipstatsretryregisters.value_namespace = name_space;
        csipstatsretryregisters.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsRetryReliable1xxRsps")
    {
        csipstatsretryreliable1xxrsps = value;
        csipstatsretryreliable1xxrsps.value_namespace = name_space;
        csipstatsretryreliable1xxrsps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsRetryResponses")
    {
        csipstatsretryresponses = value;
        csipstatsretryresponses.value_namespace = name_space;
        csipstatsretryresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsRetrySubscribe")
    {
        csipstatsretrysubscribe = value;
        csipstatsretrysubscribe.value_namespace = name_space;
        csipstatsretrysubscribe.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSipUaMib::Csipstatsretry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cSipStatsRetryByes")
    {
        csipstatsretrybyes.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRetryCancels")
    {
        csipstatsretrycancels.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRetryComets")
    {
        csipstatsretrycomets.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRetryInfo")
    {
        csipstatsretryinfo.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRetryInvites")
    {
        csipstatsretryinvites.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRetryNotifys")
    {
        csipstatsretrynotifys.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRetryPracks")
    {
        csipstatsretrypracks.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRetryRefers")
    {
        csipstatsretryrefers.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRetryRegisters")
    {
        csipstatsretryregisters.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRetryReliable1xxRsps")
    {
        csipstatsretryreliable1xxrsps.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRetryResponses")
    {
        csipstatsretryresponses.yfilter = yfilter;
    }
    if(value_path == "cSipStatsRetrySubscribe")
    {
        csipstatsretrysubscribe.yfilter = yfilter;
    }
}

bool CiscoSipUaMib::Csipstatsretry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipStatsRetryByes" || name == "cSipStatsRetryCancels" || name == "cSipStatsRetryComets" || name == "cSipStatsRetryInfo" || name == "cSipStatsRetryInvites" || name == "cSipStatsRetryNotifys" || name == "cSipStatsRetryPracks" || name == "cSipStatsRetryRefers" || name == "cSipStatsRetryRegisters" || name == "cSipStatsRetryReliable1xxRsps" || name == "cSipStatsRetryResponses" || name == "cSipStatsRetrySubscribe")
        return true;
    return false;
}

CiscoSipUaMib::Csipstatsmisc::Csipstatsmisc()
    :
    csipstatsmisc3xxmappedto4xxrsps{YType::uint32, "cSipStatsMisc3xxMappedTo4xxRsps"}
{
    yang_name = "cSipStatsMisc"; yang_parent_name = "CISCO-SIP-UA-MIB";
}

CiscoSipUaMib::Csipstatsmisc::~Csipstatsmisc()
{
}

bool CiscoSipUaMib::Csipstatsmisc::has_data() const
{
    return csipstatsmisc3xxmappedto4xxrsps.is_set;
}

bool CiscoSipUaMib::Csipstatsmisc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipstatsmisc3xxmappedto4xxrsps.yfilter);
}

std::string CiscoSipUaMib::Csipstatsmisc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipStatsMisc";

    return path_buffer.str();

}

const EntityPath CiscoSipUaMib::Csipstatsmisc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipstatsmisc3xxmappedto4xxrsps.is_set || is_set(csipstatsmisc3xxmappedto4xxrsps.yfilter)) leaf_name_data.push_back(csipstatsmisc3xxmappedto4xxrsps.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSipUaMib::Csipstatsmisc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSipUaMib::Csipstatsmisc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSipUaMib::Csipstatsmisc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cSipStatsMisc3xxMappedTo4xxRsps")
    {
        csipstatsmisc3xxmappedto4xxrsps = value;
        csipstatsmisc3xxmappedto4xxrsps.value_namespace = name_space;
        csipstatsmisc3xxmappedto4xxrsps.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSipUaMib::Csipstatsmisc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cSipStatsMisc3xxMappedTo4xxRsps")
    {
        csipstatsmisc3xxmappedto4xxrsps.yfilter = yfilter;
    }
}

bool CiscoSipUaMib::Csipstatsmisc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipStatsMisc3xxMappedTo4xxRsps")
        return true;
    return false;
}

CiscoSipUaMib::Csipstatsconnection::Csipstatsconnection()
    :
    csipstatsactivetcpconnections{YType::uint32, "cSipStatsActiveTCPConnections"},
    csipstatsactiveudpconnections{YType::uint32, "cSipStatsActiveUDPConnections"},
    csipstatsconntcpcreatefailures{YType::uint32, "cSipStatsConnTCPCreateFailures"},
    csipstatsconntcpinactivetimeouts{YType::uint32, "cSipStatsConnTCPInactiveTimeouts"},
    csipstatsconntcpremoteclosures{YType::uint32, "cSipStatsConnTCPRemoteClosures"},
    csipstatsconntcpsendfailures{YType::uint32, "cSipStatsConnTCPSendFailures"},
    csipstatsconnudpcreatefailures{YType::uint32, "cSipStatsConnUDPCreateFailures"},
    csipstatsconnudpinactivetimeouts{YType::uint32, "cSipStatsConnUDPInactiveTimeouts"},
    csipstatsconnudpsendfailures{YType::uint32, "cSipStatsConnUDPSendFailures"}
{
    yang_name = "cSipStatsConnection"; yang_parent_name = "CISCO-SIP-UA-MIB";
}

CiscoSipUaMib::Csipstatsconnection::~Csipstatsconnection()
{
}

bool CiscoSipUaMib::Csipstatsconnection::has_data() const
{
    return csipstatsactivetcpconnections.is_set
	|| csipstatsactiveudpconnections.is_set
	|| csipstatsconntcpcreatefailures.is_set
	|| csipstatsconntcpinactivetimeouts.is_set
	|| csipstatsconntcpremoteclosures.is_set
	|| csipstatsconntcpsendfailures.is_set
	|| csipstatsconnudpcreatefailures.is_set
	|| csipstatsconnudpinactivetimeouts.is_set
	|| csipstatsconnudpsendfailures.is_set;
}

bool CiscoSipUaMib::Csipstatsconnection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipstatsactivetcpconnections.yfilter)
	|| ydk::is_set(csipstatsactiveudpconnections.yfilter)
	|| ydk::is_set(csipstatsconntcpcreatefailures.yfilter)
	|| ydk::is_set(csipstatsconntcpinactivetimeouts.yfilter)
	|| ydk::is_set(csipstatsconntcpremoteclosures.yfilter)
	|| ydk::is_set(csipstatsconntcpsendfailures.yfilter)
	|| ydk::is_set(csipstatsconnudpcreatefailures.yfilter)
	|| ydk::is_set(csipstatsconnudpinactivetimeouts.yfilter)
	|| ydk::is_set(csipstatsconnudpsendfailures.yfilter);
}

std::string CiscoSipUaMib::Csipstatsconnection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipStatsConnection";

    return path_buffer.str();

}

const EntityPath CiscoSipUaMib::Csipstatsconnection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipstatsactivetcpconnections.is_set || is_set(csipstatsactivetcpconnections.yfilter)) leaf_name_data.push_back(csipstatsactivetcpconnections.get_name_leafdata());
    if (csipstatsactiveudpconnections.is_set || is_set(csipstatsactiveudpconnections.yfilter)) leaf_name_data.push_back(csipstatsactiveudpconnections.get_name_leafdata());
    if (csipstatsconntcpcreatefailures.is_set || is_set(csipstatsconntcpcreatefailures.yfilter)) leaf_name_data.push_back(csipstatsconntcpcreatefailures.get_name_leafdata());
    if (csipstatsconntcpinactivetimeouts.is_set || is_set(csipstatsconntcpinactivetimeouts.yfilter)) leaf_name_data.push_back(csipstatsconntcpinactivetimeouts.get_name_leafdata());
    if (csipstatsconntcpremoteclosures.is_set || is_set(csipstatsconntcpremoteclosures.yfilter)) leaf_name_data.push_back(csipstatsconntcpremoteclosures.get_name_leafdata());
    if (csipstatsconntcpsendfailures.is_set || is_set(csipstatsconntcpsendfailures.yfilter)) leaf_name_data.push_back(csipstatsconntcpsendfailures.get_name_leafdata());
    if (csipstatsconnudpcreatefailures.is_set || is_set(csipstatsconnudpcreatefailures.yfilter)) leaf_name_data.push_back(csipstatsconnudpcreatefailures.get_name_leafdata());
    if (csipstatsconnudpinactivetimeouts.is_set || is_set(csipstatsconnudpinactivetimeouts.yfilter)) leaf_name_data.push_back(csipstatsconnudpinactivetimeouts.get_name_leafdata());
    if (csipstatsconnudpsendfailures.is_set || is_set(csipstatsconnudpsendfailures.yfilter)) leaf_name_data.push_back(csipstatsconnudpsendfailures.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSipUaMib::Csipstatsconnection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSipUaMib::Csipstatsconnection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSipUaMib::Csipstatsconnection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cSipStatsActiveTCPConnections")
    {
        csipstatsactivetcpconnections = value;
        csipstatsactivetcpconnections.value_namespace = name_space;
        csipstatsactivetcpconnections.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsActiveUDPConnections")
    {
        csipstatsactiveudpconnections = value;
        csipstatsactiveudpconnections.value_namespace = name_space;
        csipstatsactiveudpconnections.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsConnTCPCreateFailures")
    {
        csipstatsconntcpcreatefailures = value;
        csipstatsconntcpcreatefailures.value_namespace = name_space;
        csipstatsconntcpcreatefailures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsConnTCPInactiveTimeouts")
    {
        csipstatsconntcpinactivetimeouts = value;
        csipstatsconntcpinactivetimeouts.value_namespace = name_space;
        csipstatsconntcpinactivetimeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsConnTCPRemoteClosures")
    {
        csipstatsconntcpremoteclosures = value;
        csipstatsconntcpremoteclosures.value_namespace = name_space;
        csipstatsconntcpremoteclosures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsConnTCPSendFailures")
    {
        csipstatsconntcpsendfailures = value;
        csipstatsconntcpsendfailures.value_namespace = name_space;
        csipstatsconntcpsendfailures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsConnUDPCreateFailures")
    {
        csipstatsconnudpcreatefailures = value;
        csipstatsconnudpcreatefailures.value_namespace = name_space;
        csipstatsconnudpcreatefailures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsConnUDPInactiveTimeouts")
    {
        csipstatsconnudpinactivetimeouts = value;
        csipstatsconnudpinactivetimeouts.value_namespace = name_space;
        csipstatsconnudpinactivetimeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipStatsConnUDPSendFailures")
    {
        csipstatsconnudpsendfailures = value;
        csipstatsconnudpsendfailures.value_namespace = name_space;
        csipstatsconnudpsendfailures.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSipUaMib::Csipstatsconnection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cSipStatsActiveTCPConnections")
    {
        csipstatsactivetcpconnections.yfilter = yfilter;
    }
    if(value_path == "cSipStatsActiveUDPConnections")
    {
        csipstatsactiveudpconnections.yfilter = yfilter;
    }
    if(value_path == "cSipStatsConnTCPCreateFailures")
    {
        csipstatsconntcpcreatefailures.yfilter = yfilter;
    }
    if(value_path == "cSipStatsConnTCPInactiveTimeouts")
    {
        csipstatsconntcpinactivetimeouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsConnTCPRemoteClosures")
    {
        csipstatsconntcpremoteclosures.yfilter = yfilter;
    }
    if(value_path == "cSipStatsConnTCPSendFailures")
    {
        csipstatsconntcpsendfailures.yfilter = yfilter;
    }
    if(value_path == "cSipStatsConnUDPCreateFailures")
    {
        csipstatsconnudpcreatefailures.yfilter = yfilter;
    }
    if(value_path == "cSipStatsConnUDPInactiveTimeouts")
    {
        csipstatsconnudpinactivetimeouts.yfilter = yfilter;
    }
    if(value_path == "cSipStatsConnUDPSendFailures")
    {
        csipstatsconnudpsendfailures.yfilter = yfilter;
    }
}

bool CiscoSipUaMib::Csipstatsconnection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipStatsActiveTCPConnections" || name == "cSipStatsActiveUDPConnections" || name == "cSipStatsConnTCPCreateFailures" || name == "cSipStatsConnTCPInactiveTimeouts" || name == "cSipStatsConnTCPRemoteClosures" || name == "cSipStatsConnTCPSendFailures" || name == "cSipStatsConnUDPCreateFailures" || name == "cSipStatsConnUDPInactiveTimeouts" || name == "cSipStatsConnUDPSendFailures")
        return true;
    return false;
}

CiscoSipUaMib::Csipcfgearlymediatable::Csipcfgearlymediatable()
{
    yang_name = "cSipCfgEarlyMediaTable"; yang_parent_name = "CISCO-SIP-UA-MIB";
}

CiscoSipUaMib::Csipcfgearlymediatable::~Csipcfgearlymediatable()
{
}

bool CiscoSipUaMib::Csipcfgearlymediatable::has_data() const
{
    for (std::size_t index=0; index<csipcfgearlymediaentry.size(); index++)
    {
        if(csipcfgearlymediaentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSipUaMib::Csipcfgearlymediatable::has_operation() const
{
    for (std::size_t index=0; index<csipcfgearlymediaentry.size(); index++)
    {
        if(csipcfgearlymediaentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoSipUaMib::Csipcfgearlymediatable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipCfgEarlyMediaTable";

    return path_buffer.str();

}

const EntityPath CiscoSipUaMib::Csipcfgearlymediatable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSipUaMib::Csipcfgearlymediatable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cSipCfgEarlyMediaEntry")
    {
        for(auto const & c : csipcfgearlymediaentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSipUaMib::Csipcfgearlymediatable::Csipcfgearlymediaentry>();
        c->parent = this;
        csipcfgearlymediaentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSipUaMib::Csipcfgearlymediatable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csipcfgearlymediaentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSipUaMib::Csipcfgearlymediatable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoSipUaMib::Csipcfgearlymediatable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoSipUaMib::Csipcfgearlymediatable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipCfgEarlyMediaEntry")
        return true;
    return false;
}

CiscoSipUaMib::Csipcfgearlymediatable::Csipcfgearlymediaentry::Csipcfgearlymediaentry()
    :
    csipcfgearlymediastatuscodeindex{YType::int32, "cSipCfgEarlyMediaStatusCodeIndex"},
    csipcfgearlymediacutthrudisabled{YType::boolean, "cSipCfgEarlyMediaCutThruDisabled"}
{
    yang_name = "cSipCfgEarlyMediaEntry"; yang_parent_name = "cSipCfgEarlyMediaTable";
}

CiscoSipUaMib::Csipcfgearlymediatable::Csipcfgearlymediaentry::~Csipcfgearlymediaentry()
{
}

bool CiscoSipUaMib::Csipcfgearlymediatable::Csipcfgearlymediaentry::has_data() const
{
    return csipcfgearlymediastatuscodeindex.is_set
	|| csipcfgearlymediacutthrudisabled.is_set;
}

bool CiscoSipUaMib::Csipcfgearlymediatable::Csipcfgearlymediaentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipcfgearlymediastatuscodeindex.yfilter)
	|| ydk::is_set(csipcfgearlymediacutthrudisabled.yfilter);
}

std::string CiscoSipUaMib::Csipcfgearlymediatable::Csipcfgearlymediaentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipCfgEarlyMediaEntry" <<"[cSipCfgEarlyMediaStatusCodeIndex='" <<csipcfgearlymediastatuscodeindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSipUaMib::Csipcfgearlymediatable::Csipcfgearlymediaentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/cSipCfgEarlyMediaTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipcfgearlymediastatuscodeindex.is_set || is_set(csipcfgearlymediastatuscodeindex.yfilter)) leaf_name_data.push_back(csipcfgearlymediastatuscodeindex.get_name_leafdata());
    if (csipcfgearlymediacutthrudisabled.is_set || is_set(csipcfgearlymediacutthrudisabled.yfilter)) leaf_name_data.push_back(csipcfgearlymediacutthrudisabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSipUaMib::Csipcfgearlymediatable::Csipcfgearlymediaentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSipUaMib::Csipcfgearlymediatable::Csipcfgearlymediaentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSipUaMib::Csipcfgearlymediatable::Csipcfgearlymediaentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CiscoSipUaMib::Csipcfgearlymediatable::Csipcfgearlymediaentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CiscoSipUaMib::Csipcfgearlymediatable::Csipcfgearlymediaentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipCfgEarlyMediaStatusCodeIndex" || name == "cSipCfgEarlyMediaCutThruDisabled")
        return true;
    return false;
}

CiscoSipUaMib::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrtable()
{
    yang_name = "cSipCfgBindSourceAddrTable"; yang_parent_name = "CISCO-SIP-UA-MIB";
}

CiscoSipUaMib::Csipcfgbindsourceaddrtable::~Csipcfgbindsourceaddrtable()
{
}

bool CiscoSipUaMib::Csipcfgbindsourceaddrtable::has_data() const
{
    for (std::size_t index=0; index<csipcfgbindsourceaddrentry.size(); index++)
    {
        if(csipcfgbindsourceaddrentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSipUaMib::Csipcfgbindsourceaddrtable::has_operation() const
{
    for (std::size_t index=0; index<csipcfgbindsourceaddrentry.size(); index++)
    {
        if(csipcfgbindsourceaddrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoSipUaMib::Csipcfgbindsourceaddrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipCfgBindSourceAddrTable";

    return path_buffer.str();

}

const EntityPath CiscoSipUaMib::Csipcfgbindsourceaddrtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSipUaMib::Csipcfgbindsourceaddrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cSipCfgBindSourceAddrEntry")
    {
        for(auto const & c : csipcfgbindsourceaddrentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSipUaMib::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrentry>();
        c->parent = this;
        csipcfgbindsourceaddrentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSipUaMib::Csipcfgbindsourceaddrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csipcfgbindsourceaddrentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSipUaMib::Csipcfgbindsourceaddrtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoSipUaMib::Csipcfgbindsourceaddrtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoSipUaMib::Csipcfgbindsourceaddrtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipCfgBindSourceAddrEntry")
        return true;
    return false;
}

CiscoSipUaMib::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrentry::Csipcfgbindsourceaddrentry()
    :
    csipcfgbindsourceaddrscope{YType::enumeration, "cSipCfgBindSourceAddrScope"},
    csipcfgbindsourceaddrinterface{YType::int32, "cSipCfgBindSourceAddrInterface"}
{
    yang_name = "cSipCfgBindSourceAddrEntry"; yang_parent_name = "cSipCfgBindSourceAddrTable";
}

CiscoSipUaMib::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrentry::~Csipcfgbindsourceaddrentry()
{
}

bool CiscoSipUaMib::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrentry::has_data() const
{
    return csipcfgbindsourceaddrscope.is_set
	|| csipcfgbindsourceaddrinterface.is_set;
}

bool CiscoSipUaMib::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipcfgbindsourceaddrscope.yfilter)
	|| ydk::is_set(csipcfgbindsourceaddrinterface.yfilter);
}

std::string CiscoSipUaMib::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipCfgBindSourceAddrEntry" <<"[cSipCfgBindSourceAddrScope='" <<csipcfgbindsourceaddrscope <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSipUaMib::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/cSipCfgBindSourceAddrTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipcfgbindsourceaddrscope.is_set || is_set(csipcfgbindsourceaddrscope.yfilter)) leaf_name_data.push_back(csipcfgbindsourceaddrscope.get_name_leafdata());
    if (csipcfgbindsourceaddrinterface.is_set || is_set(csipcfgbindsourceaddrinterface.yfilter)) leaf_name_data.push_back(csipcfgbindsourceaddrinterface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSipUaMib::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSipUaMib::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSipUaMib::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CiscoSipUaMib::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CiscoSipUaMib::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipCfgBindSourceAddrScope" || name == "cSipCfgBindSourceAddrInterface")
        return true;
    return false;
}

CiscoSipUaMib::Csipcfgpeertable::Csipcfgpeertable()
{
    yang_name = "cSipCfgPeerTable"; yang_parent_name = "CISCO-SIP-UA-MIB";
}

CiscoSipUaMib::Csipcfgpeertable::~Csipcfgpeertable()
{
}

bool CiscoSipUaMib::Csipcfgpeertable::has_data() const
{
    for (std::size_t index=0; index<csipcfgpeerentry.size(); index++)
    {
        if(csipcfgpeerentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSipUaMib::Csipcfgpeertable::has_operation() const
{
    for (std::size_t index=0; index<csipcfgpeerentry.size(); index++)
    {
        if(csipcfgpeerentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoSipUaMib::Csipcfgpeertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipCfgPeerTable";

    return path_buffer.str();

}

const EntityPath CiscoSipUaMib::Csipcfgpeertable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSipUaMib::Csipcfgpeertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cSipCfgPeerEntry")
    {
        for(auto const & c : csipcfgpeerentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSipUaMib::Csipcfgpeertable::Csipcfgpeerentry>();
        c->parent = this;
        csipcfgpeerentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSipUaMib::Csipcfgpeertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csipcfgpeerentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSipUaMib::Csipcfgpeertable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoSipUaMib::Csipcfgpeertable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoSipUaMib::Csipcfgpeertable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipCfgPeerEntry")
        return true;
    return false;
}

CiscoSipUaMib::Csipcfgpeertable::Csipcfgpeerentry::Csipcfgpeerentry()
    :
    csipcfgpeerindex{YType::int32, "cSipCfgPeerIndex"},
    csipcfgpeeroutsessiontransport{YType::enumeration, "cSipCfgPeerOutSessionTransport"},
    csipcfgpeerreliable1xxrsphdr{YType::enumeration, "cSipCfgPeerReliable1xxRspHdr"},
    csipcfgpeerreliable1xxrspstr{YType::str, "cSipCfgPeerReliable1xxRspStr"},
    csipcfgpeerswitchtransenabled{YType::boolean, "cSipCfgPeerSwitchTransEnabled"},
    csipcfgpeerurltype{YType::enumeration, "cSipCfgPeerUrlType"}
{
    yang_name = "cSipCfgPeerEntry"; yang_parent_name = "cSipCfgPeerTable";
}

CiscoSipUaMib::Csipcfgpeertable::Csipcfgpeerentry::~Csipcfgpeerentry()
{
}

bool CiscoSipUaMib::Csipcfgpeertable::Csipcfgpeerentry::has_data() const
{
    return csipcfgpeerindex.is_set
	|| csipcfgpeeroutsessiontransport.is_set
	|| csipcfgpeerreliable1xxrsphdr.is_set
	|| csipcfgpeerreliable1xxrspstr.is_set
	|| csipcfgpeerswitchtransenabled.is_set
	|| csipcfgpeerurltype.is_set;
}

bool CiscoSipUaMib::Csipcfgpeertable::Csipcfgpeerentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipcfgpeerindex.yfilter)
	|| ydk::is_set(csipcfgpeeroutsessiontransport.yfilter)
	|| ydk::is_set(csipcfgpeerreliable1xxrsphdr.yfilter)
	|| ydk::is_set(csipcfgpeerreliable1xxrspstr.yfilter)
	|| ydk::is_set(csipcfgpeerswitchtransenabled.yfilter)
	|| ydk::is_set(csipcfgpeerurltype.yfilter);
}

std::string CiscoSipUaMib::Csipcfgpeertable::Csipcfgpeerentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipCfgPeerEntry" <<"[cSipCfgPeerIndex='" <<csipcfgpeerindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSipUaMib::Csipcfgpeertable::Csipcfgpeerentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/cSipCfgPeerTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipcfgpeerindex.is_set || is_set(csipcfgpeerindex.yfilter)) leaf_name_data.push_back(csipcfgpeerindex.get_name_leafdata());
    if (csipcfgpeeroutsessiontransport.is_set || is_set(csipcfgpeeroutsessiontransport.yfilter)) leaf_name_data.push_back(csipcfgpeeroutsessiontransport.get_name_leafdata());
    if (csipcfgpeerreliable1xxrsphdr.is_set || is_set(csipcfgpeerreliable1xxrsphdr.yfilter)) leaf_name_data.push_back(csipcfgpeerreliable1xxrsphdr.get_name_leafdata());
    if (csipcfgpeerreliable1xxrspstr.is_set || is_set(csipcfgpeerreliable1xxrspstr.yfilter)) leaf_name_data.push_back(csipcfgpeerreliable1xxrspstr.get_name_leafdata());
    if (csipcfgpeerswitchtransenabled.is_set || is_set(csipcfgpeerswitchtransenabled.yfilter)) leaf_name_data.push_back(csipcfgpeerswitchtransenabled.get_name_leafdata());
    if (csipcfgpeerurltype.is_set || is_set(csipcfgpeerurltype.yfilter)) leaf_name_data.push_back(csipcfgpeerurltype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSipUaMib::Csipcfgpeertable::Csipcfgpeerentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSipUaMib::Csipcfgpeertable::Csipcfgpeerentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSipUaMib::Csipcfgpeertable::Csipcfgpeerentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cSipCfgPeerReliable1xxRspHdr")
    {
        csipcfgpeerreliable1xxrsphdr = value;
        csipcfgpeerreliable1xxrsphdr.value_namespace = name_space;
        csipcfgpeerreliable1xxrsphdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgPeerReliable1xxRspStr")
    {
        csipcfgpeerreliable1xxrspstr = value;
        csipcfgpeerreliable1xxrspstr.value_namespace = name_space;
        csipcfgpeerreliable1xxrspstr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgPeerSwitchTransEnabled")
    {
        csipcfgpeerswitchtransenabled = value;
        csipcfgpeerswitchtransenabled.value_namespace = name_space;
        csipcfgpeerswitchtransenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgPeerUrlType")
    {
        csipcfgpeerurltype = value;
        csipcfgpeerurltype.value_namespace = name_space;
        csipcfgpeerurltype.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSipUaMib::Csipcfgpeertable::Csipcfgpeerentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cSipCfgPeerIndex")
    {
        csipcfgpeerindex.yfilter = yfilter;
    }
    if(value_path == "cSipCfgPeerOutSessionTransport")
    {
        csipcfgpeeroutsessiontransport.yfilter = yfilter;
    }
    if(value_path == "cSipCfgPeerReliable1xxRspHdr")
    {
        csipcfgpeerreliable1xxrsphdr.yfilter = yfilter;
    }
    if(value_path == "cSipCfgPeerReliable1xxRspStr")
    {
        csipcfgpeerreliable1xxrspstr.yfilter = yfilter;
    }
    if(value_path == "cSipCfgPeerSwitchTransEnabled")
    {
        csipcfgpeerswitchtransenabled.yfilter = yfilter;
    }
    if(value_path == "cSipCfgPeerUrlType")
    {
        csipcfgpeerurltype.yfilter = yfilter;
    }
}

bool CiscoSipUaMib::Csipcfgpeertable::Csipcfgpeerentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipCfgPeerIndex" || name == "cSipCfgPeerOutSessionTransport" || name == "cSipCfgPeerReliable1xxRspHdr" || name == "cSipCfgPeerReliable1xxRspStr" || name == "cSipCfgPeerSwitchTransEnabled" || name == "cSipCfgPeerUrlType")
        return true;
    return false;
}

CiscoSipUaMib::Csipcfgstatuscausetable::Csipcfgstatuscausetable()
{
    yang_name = "cSipCfgStatusCauseTable"; yang_parent_name = "CISCO-SIP-UA-MIB";
}

CiscoSipUaMib::Csipcfgstatuscausetable::~Csipcfgstatuscausetable()
{
}

bool CiscoSipUaMib::Csipcfgstatuscausetable::has_data() const
{
    for (std::size_t index=0; index<csipcfgstatuscauseentry.size(); index++)
    {
        if(csipcfgstatuscauseentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSipUaMib::Csipcfgstatuscausetable::has_operation() const
{
    for (std::size_t index=0; index<csipcfgstatuscauseentry.size(); index++)
    {
        if(csipcfgstatuscauseentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoSipUaMib::Csipcfgstatuscausetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipCfgStatusCauseTable";

    return path_buffer.str();

}

const EntityPath CiscoSipUaMib::Csipcfgstatuscausetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSipUaMib::Csipcfgstatuscausetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cSipCfgStatusCauseEntry")
    {
        for(auto const & c : csipcfgstatuscauseentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSipUaMib::Csipcfgstatuscausetable::Csipcfgstatuscauseentry>();
        c->parent = this;
        csipcfgstatuscauseentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSipUaMib::Csipcfgstatuscausetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csipcfgstatuscauseentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSipUaMib::Csipcfgstatuscausetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoSipUaMib::Csipcfgstatuscausetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoSipUaMib::Csipcfgstatuscausetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipCfgStatusCauseEntry")
        return true;
    return false;
}

CiscoSipUaMib::Csipcfgstatuscausetable::Csipcfgstatuscauseentry::Csipcfgstatuscauseentry()
    :
    csipcfgstatuscodeindex{YType::int32, "cSipCfgStatusCodeIndex"},
    csipcfgpstncause{YType::int32, "cSipCfgPstnCause"},
    csipcfgstatuscausestorestatus{YType::enumeration, "cSipCfgStatusCauseStoreStatus"}
{
    yang_name = "cSipCfgStatusCauseEntry"; yang_parent_name = "cSipCfgStatusCauseTable";
}

CiscoSipUaMib::Csipcfgstatuscausetable::Csipcfgstatuscauseentry::~Csipcfgstatuscauseentry()
{
}

bool CiscoSipUaMib::Csipcfgstatuscausetable::Csipcfgstatuscauseentry::has_data() const
{
    return csipcfgstatuscodeindex.is_set
	|| csipcfgpstncause.is_set
	|| csipcfgstatuscausestorestatus.is_set;
}

bool CiscoSipUaMib::Csipcfgstatuscausetable::Csipcfgstatuscauseentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipcfgstatuscodeindex.yfilter)
	|| ydk::is_set(csipcfgpstncause.yfilter)
	|| ydk::is_set(csipcfgstatuscausestorestatus.yfilter);
}

std::string CiscoSipUaMib::Csipcfgstatuscausetable::Csipcfgstatuscauseentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipCfgStatusCauseEntry" <<"[cSipCfgStatusCodeIndex='" <<csipcfgstatuscodeindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSipUaMib::Csipcfgstatuscausetable::Csipcfgstatuscauseentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/cSipCfgStatusCauseTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipcfgstatuscodeindex.is_set || is_set(csipcfgstatuscodeindex.yfilter)) leaf_name_data.push_back(csipcfgstatuscodeindex.get_name_leafdata());
    if (csipcfgpstncause.is_set || is_set(csipcfgpstncause.yfilter)) leaf_name_data.push_back(csipcfgpstncause.get_name_leafdata());
    if (csipcfgstatuscausestorestatus.is_set || is_set(csipcfgstatuscausestorestatus.yfilter)) leaf_name_data.push_back(csipcfgstatuscausestorestatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSipUaMib::Csipcfgstatuscausetable::Csipcfgstatuscauseentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSipUaMib::Csipcfgstatuscausetable::Csipcfgstatuscauseentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSipUaMib::Csipcfgstatuscausetable::Csipcfgstatuscauseentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CiscoSipUaMib::Csipcfgstatuscausetable::Csipcfgstatuscauseentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CiscoSipUaMib::Csipcfgstatuscausetable::Csipcfgstatuscauseentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipCfgStatusCodeIndex" || name == "cSipCfgPstnCause" || name == "cSipCfgStatusCauseStoreStatus")
        return true;
    return false;
}

CiscoSipUaMib::Csipcfgcausestatustable::Csipcfgcausestatustable()
{
    yang_name = "cSipCfgCauseStatusTable"; yang_parent_name = "CISCO-SIP-UA-MIB";
}

CiscoSipUaMib::Csipcfgcausestatustable::~Csipcfgcausestatustable()
{
}

bool CiscoSipUaMib::Csipcfgcausestatustable::has_data() const
{
    for (std::size_t index=0; index<csipcfgcausestatusentry.size(); index++)
    {
        if(csipcfgcausestatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSipUaMib::Csipcfgcausestatustable::has_operation() const
{
    for (std::size_t index=0; index<csipcfgcausestatusentry.size(); index++)
    {
        if(csipcfgcausestatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoSipUaMib::Csipcfgcausestatustable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipCfgCauseStatusTable";

    return path_buffer.str();

}

const EntityPath CiscoSipUaMib::Csipcfgcausestatustable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSipUaMib::Csipcfgcausestatustable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cSipCfgCauseStatusEntry")
    {
        for(auto const & c : csipcfgcausestatusentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSipUaMib::Csipcfgcausestatustable::Csipcfgcausestatusentry>();
        c->parent = this;
        csipcfgcausestatusentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSipUaMib::Csipcfgcausestatustable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csipcfgcausestatusentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSipUaMib::Csipcfgcausestatustable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoSipUaMib::Csipcfgcausestatustable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoSipUaMib::Csipcfgcausestatustable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipCfgCauseStatusEntry")
        return true;
    return false;
}

CiscoSipUaMib::Csipcfgcausestatustable::Csipcfgcausestatusentry::Csipcfgcausestatusentry()
    :
    csipcfgpstncauseindex{YType::int32, "cSipCfgPstnCauseIndex"},
    csipcfgcausestatusstorestatus{YType::enumeration, "cSipCfgCauseStatusStoreStatus"},
    csipcfgstatuscode{YType::int32, "cSipCfgStatusCode"}
{
    yang_name = "cSipCfgCauseStatusEntry"; yang_parent_name = "cSipCfgCauseStatusTable";
}

CiscoSipUaMib::Csipcfgcausestatustable::Csipcfgcausestatusentry::~Csipcfgcausestatusentry()
{
}

bool CiscoSipUaMib::Csipcfgcausestatustable::Csipcfgcausestatusentry::has_data() const
{
    return csipcfgpstncauseindex.is_set
	|| csipcfgcausestatusstorestatus.is_set
	|| csipcfgstatuscode.is_set;
}

bool CiscoSipUaMib::Csipcfgcausestatustable::Csipcfgcausestatusentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipcfgpstncauseindex.yfilter)
	|| ydk::is_set(csipcfgcausestatusstorestatus.yfilter)
	|| ydk::is_set(csipcfgstatuscode.yfilter);
}

std::string CiscoSipUaMib::Csipcfgcausestatustable::Csipcfgcausestatusentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipCfgCauseStatusEntry" <<"[cSipCfgPstnCauseIndex='" <<csipcfgpstncauseindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSipUaMib::Csipcfgcausestatustable::Csipcfgcausestatusentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/cSipCfgCauseStatusTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipcfgpstncauseindex.is_set || is_set(csipcfgpstncauseindex.yfilter)) leaf_name_data.push_back(csipcfgpstncauseindex.get_name_leafdata());
    if (csipcfgcausestatusstorestatus.is_set || is_set(csipcfgcausestatusstorestatus.yfilter)) leaf_name_data.push_back(csipcfgcausestatusstorestatus.get_name_leafdata());
    if (csipcfgstatuscode.is_set || is_set(csipcfgstatuscode.yfilter)) leaf_name_data.push_back(csipcfgstatuscode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSipUaMib::Csipcfgcausestatustable::Csipcfgcausestatusentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSipUaMib::Csipcfgcausestatustable::Csipcfgcausestatusentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSipUaMib::Csipcfgcausestatustable::Csipcfgcausestatusentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cSipCfgPstnCauseIndex")
    {
        csipcfgpstncauseindex = value;
        csipcfgpstncauseindex.value_namespace = name_space;
        csipcfgpstncauseindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgCauseStatusStoreStatus")
    {
        csipcfgcausestatusstorestatus = value;
        csipcfgcausestatusstorestatus.value_namespace = name_space;
        csipcfgcausestatusstorestatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSipCfgStatusCode")
    {
        csipcfgstatuscode = value;
        csipcfgstatuscode.value_namespace = name_space;
        csipcfgstatuscode.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSipUaMib::Csipcfgcausestatustable::Csipcfgcausestatusentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cSipCfgPstnCauseIndex")
    {
        csipcfgpstncauseindex.yfilter = yfilter;
    }
    if(value_path == "cSipCfgCauseStatusStoreStatus")
    {
        csipcfgcausestatusstorestatus.yfilter = yfilter;
    }
    if(value_path == "cSipCfgStatusCode")
    {
        csipcfgstatuscode.yfilter = yfilter;
    }
}

bool CiscoSipUaMib::Csipcfgcausestatustable::Csipcfgcausestatusentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipCfgPstnCauseIndex" || name == "cSipCfgCauseStatusStoreStatus" || name == "cSipCfgStatusCode")
        return true;
    return false;
}

CiscoSipUaMib::Csipstatssuccessoktable::Csipstatssuccessoktable()
{
    yang_name = "cSipStatsSuccessOkTable"; yang_parent_name = "CISCO-SIP-UA-MIB";
}

CiscoSipUaMib::Csipstatssuccessoktable::~Csipstatssuccessoktable()
{
}

bool CiscoSipUaMib::Csipstatssuccessoktable::has_data() const
{
    for (std::size_t index=0; index<csipstatssuccessokentry.size(); index++)
    {
        if(csipstatssuccessokentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSipUaMib::Csipstatssuccessoktable::has_operation() const
{
    for (std::size_t index=0; index<csipstatssuccessokentry.size(); index++)
    {
        if(csipstatssuccessokentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoSipUaMib::Csipstatssuccessoktable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipStatsSuccessOkTable";

    return path_buffer.str();

}

const EntityPath CiscoSipUaMib::Csipstatssuccessoktable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSipUaMib::Csipstatssuccessoktable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cSipStatsSuccessOkEntry")
    {
        for(auto const & c : csipstatssuccessokentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSipUaMib::Csipstatssuccessoktable::Csipstatssuccessokentry>();
        c->parent = this;
        csipstatssuccessokentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSipUaMib::Csipstatssuccessoktable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csipstatssuccessokentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSipUaMib::Csipstatssuccessoktable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoSipUaMib::Csipstatssuccessoktable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoSipUaMib::Csipstatssuccessoktable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipStatsSuccessOkEntry")
        return true;
    return false;
}

CiscoSipUaMib::Csipstatssuccessoktable::Csipstatssuccessokentry::Csipstatssuccessokentry()
    :
    csipstatssuccessokmethod{YType::str, "cSipStatsSuccessOkMethod"},
    csipstatssuccessokinbounds{YType::uint32, "cSipStatsSuccessOkInbounds"},
    csipstatssuccessokoutbounds{YType::uint32, "cSipStatsSuccessOkOutbounds"}
{
    yang_name = "cSipStatsSuccessOkEntry"; yang_parent_name = "cSipStatsSuccessOkTable";
}

CiscoSipUaMib::Csipstatssuccessoktable::Csipstatssuccessokentry::~Csipstatssuccessokentry()
{
}

bool CiscoSipUaMib::Csipstatssuccessoktable::Csipstatssuccessokentry::has_data() const
{
    return csipstatssuccessokmethod.is_set
	|| csipstatssuccessokinbounds.is_set
	|| csipstatssuccessokoutbounds.is_set;
}

bool CiscoSipUaMib::Csipstatssuccessoktable::Csipstatssuccessokentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csipstatssuccessokmethod.yfilter)
	|| ydk::is_set(csipstatssuccessokinbounds.yfilter)
	|| ydk::is_set(csipstatssuccessokoutbounds.yfilter);
}

std::string CiscoSipUaMib::Csipstatssuccessoktable::Csipstatssuccessokentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cSipStatsSuccessOkEntry" <<"[cSipStatsSuccessOkMethod='" <<csipstatssuccessokmethod <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSipUaMib::Csipstatssuccessoktable::Csipstatssuccessokentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SIP-UA-MIB:CISCO-SIP-UA-MIB/cSipStatsSuccessOkTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csipstatssuccessokmethod.is_set || is_set(csipstatssuccessokmethod.yfilter)) leaf_name_data.push_back(csipstatssuccessokmethod.get_name_leafdata());
    if (csipstatssuccessokinbounds.is_set || is_set(csipstatssuccessokinbounds.yfilter)) leaf_name_data.push_back(csipstatssuccessokinbounds.get_name_leafdata());
    if (csipstatssuccessokoutbounds.is_set || is_set(csipstatssuccessokoutbounds.yfilter)) leaf_name_data.push_back(csipstatssuccessokoutbounds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSipUaMib::Csipstatssuccessoktable::Csipstatssuccessokentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSipUaMib::Csipstatssuccessoktable::Csipstatssuccessokentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSipUaMib::Csipstatssuccessoktable::Csipstatssuccessokentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CiscoSipUaMib::Csipstatssuccessoktable::Csipstatssuccessokentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CiscoSipUaMib::Csipstatssuccessoktable::Csipstatssuccessokentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cSipStatsSuccessOkMethod" || name == "cSipStatsSuccessOkInbounds" || name == "cSipStatsSuccessOkOutbounds")
        return true;
    return false;
}

const Enum::YLeaf CiscoSipUaMib::Csipcfgbase::Csipcfgtransport::udp {1, "udp"};
const Enum::YLeaf CiscoSipUaMib::Csipcfgbase::Csipcfgtransport::tcp {2, "tcp"};
const Enum::YLeaf CiscoSipUaMib::Csipcfgbase::Csipcfgtransport::udpAndTcp {3, "udpAndTcp"};
const Enum::YLeaf CiscoSipUaMib::Csipcfgbase::Csipcfgtransport::disabled {4, "disabled"};

const Enum::YLeaf CiscoSipUaMib::Csipcfgbase::Csipcfgbindsrcaddrscope::none {0, "none"};
const Enum::YLeaf CiscoSipUaMib::Csipcfgbase::Csipcfgbindsrcaddrscope::all {1, "all"};
const Enum::YLeaf CiscoSipUaMib::Csipcfgbase::Csipcfgbindsrcaddrscope::control {2, "control"};

const Enum::YLeaf CiscoSipUaMib::Csipcfgbase::Csipcfgdnssrvquerystringformat::v1 {1, "v1"};
const Enum::YLeaf CiscoSipUaMib::Csipcfgbase::Csipcfgdnssrvquerystringformat::v2 {2, "v2"};

const Enum::YLeaf CiscoSipUaMib::Csipcfgbase::Csipcfgsymnatdirectionrole::none {1, "none"};
const Enum::YLeaf CiscoSipUaMib::Csipcfgbase::Csipcfgsymnatdirectionrole::passive {2, "passive"};
const Enum::YLeaf CiscoSipUaMib::Csipcfgbase::Csipcfgsymnatdirectionrole::active {3, "active"};

const Enum::YLeaf CiscoSipUaMib::Csipcfgbase::Csipcfgoffercallhold::directionAttr {1, "directionAttr"};
const Enum::YLeaf CiscoSipUaMib::Csipcfgbase::Csipcfgoffercallhold::connAddr {2, "connAddr"};

const Enum::YLeaf CiscoSipUaMib::Csipcfgpeer::Csipcfgoutsessiontransport::udp {1, "udp"};
const Enum::YLeaf CiscoSipUaMib::Csipcfgpeer::Csipcfgoutsessiontransport::tcp {2, "tcp"};

const Enum::YLeaf CiscoSipUaMib::Csipcfgpeer::Csipcfgreliable1Xxrsphdr::supported {1, "supported"};
const Enum::YLeaf CiscoSipUaMib::Csipcfgpeer::Csipcfgreliable1Xxrsphdr::require {2, "require"};
const Enum::YLeaf CiscoSipUaMib::Csipcfgpeer::Csipcfgreliable1Xxrsphdr::disabled {3, "disabled"};

const Enum::YLeaf CiscoSipUaMib::Csipcfgpeer::Csipcfgurltype::sip {1, "sip"};
const Enum::YLeaf CiscoSipUaMib::Csipcfgpeer::Csipcfgurltype::tel {2, "tel"};

const Enum::YLeaf CiscoSipUaMib::Csipcfgaaa::Csipcfgaaausername::callingNumber {1, "callingNumber"};
const Enum::YLeaf CiscoSipUaMib::Csipcfgaaa::Csipcfgaaausername::proxyAuth {2, "proxyAuth"};

const Enum::YLeaf CiscoSipUaMib::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrentry::Csipcfgbindsourceaddrscope::media {1, "media"};
const Enum::YLeaf CiscoSipUaMib::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrentry::Csipcfgbindsourceaddrscope::control {2, "control"};

const Enum::YLeaf CiscoSipUaMib::Csipcfgpeertable::Csipcfgpeerentry::Csipcfgpeeroutsessiontransport::system {1, "system"};
const Enum::YLeaf CiscoSipUaMib::Csipcfgpeertable::Csipcfgpeerentry::Csipcfgpeeroutsessiontransport::udp {2, "udp"};
const Enum::YLeaf CiscoSipUaMib::Csipcfgpeertable::Csipcfgpeerentry::Csipcfgpeeroutsessiontransport::tcp {3, "tcp"};

const Enum::YLeaf CiscoSipUaMib::Csipcfgpeertable::Csipcfgpeerentry::Csipcfgpeerreliable1Xxrsphdr::system {1, "system"};
const Enum::YLeaf CiscoSipUaMib::Csipcfgpeertable::Csipcfgpeerentry::Csipcfgpeerreliable1Xxrsphdr::supported {2, "supported"};
const Enum::YLeaf CiscoSipUaMib::Csipcfgpeertable::Csipcfgpeerentry::Csipcfgpeerreliable1Xxrsphdr::require {3, "require"};
const Enum::YLeaf CiscoSipUaMib::Csipcfgpeertable::Csipcfgpeerentry::Csipcfgpeerreliable1Xxrsphdr::disabled {4, "disabled"};

const Enum::YLeaf CiscoSipUaMib::Csipcfgpeertable::Csipcfgpeerentry::Csipcfgpeerurltype::system {1, "system"};
const Enum::YLeaf CiscoSipUaMib::Csipcfgpeertable::Csipcfgpeerentry::Csipcfgpeerurltype::sip {2, "sip"};
const Enum::YLeaf CiscoSipUaMib::Csipcfgpeertable::Csipcfgpeerentry::Csipcfgpeerurltype::tel {3, "tel"};


}
}

