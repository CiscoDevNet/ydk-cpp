
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IPSEC_FLOW_MONITOR_MIB.hpp"

namespace ydk {
namespace CISCO_IPSEC_FLOW_MONITOR_MIB {

CiscoIpsecFlowMonitorMib::CiscoIpsecFlowMonitorMib()
    :
    cikefailtable_(std::make_shared<CiscoIpsecFlowMonitorMib::Cikefailtable>())
	,cikeglobalstats_(std::make_shared<CiscoIpsecFlowMonitorMib::Cikeglobalstats>())
	,cikepeercorrtable_(std::make_shared<CiscoIpsecFlowMonitorMib::Cikepeercorrtable>())
	,cikepeertable_(std::make_shared<CiscoIpsecFlowMonitorMib::Cikepeertable>())
	,cikephase1gwstatstable_(std::make_shared<CiscoIpsecFlowMonitorMib::Cikephase1Gwstatstable>())
	,ciketunnelhisttable_(std::make_shared<CiscoIpsecFlowMonitorMib::Ciketunnelhisttable>())
	,ciketunneltable_(std::make_shared<CiscoIpsecFlowMonitorMib::Ciketunneltable>())
	,cipsecendpthisttable_(std::make_shared<CiscoIpsecFlowMonitorMib::Cipsecendpthisttable>())
	,cipsecendpttable_(std::make_shared<CiscoIpsecFlowMonitorMib::Cipsecendpttable>())
	,cipsecfailglobalcntl_(std::make_shared<CiscoIpsecFlowMonitorMib::Cipsecfailglobalcntl>())
	,cipsecfailtable_(std::make_shared<CiscoIpsecFlowMonitorMib::Cipsecfailtable>())
	,cipsecglobalstats_(std::make_shared<CiscoIpsecFlowMonitorMib::Cipsecglobalstats>())
	,cipsechistglobalcntl_(std::make_shared<CiscoIpsecFlowMonitorMib::Cipsechistglobalcntl>())
	,cipseclevels_(std::make_shared<CiscoIpsecFlowMonitorMib::Cipseclevels>())
	,cipsecphase2gwstatstable_(std::make_shared<CiscoIpsecFlowMonitorMib::Cipsecphase2Gwstatstable>())
	,cipsecspitable_(std::make_shared<CiscoIpsecFlowMonitorMib::Cipsecspitable>())
	,cipsectrapcntl_(std::make_shared<CiscoIpsecFlowMonitorMib::Cipsectrapcntl>())
	,cipsectunnelhisttable_(std::make_shared<CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable>())
	,cipsectunneltable_(std::make_shared<CiscoIpsecFlowMonitorMib::Cipsectunneltable>())
{
    cikefailtable_->parent = this;

    cikeglobalstats_->parent = this;

    cikepeercorrtable_->parent = this;

    cikepeertable_->parent = this;

    cikephase1gwstatstable_->parent = this;

    ciketunnelhisttable_->parent = this;

    ciketunneltable_->parent = this;

    cipsecendpthisttable_->parent = this;

    cipsecendpttable_->parent = this;

    cipsecfailglobalcntl_->parent = this;

    cipsecfailtable_->parent = this;

    cipsecglobalstats_->parent = this;

    cipsechistglobalcntl_->parent = this;

    cipseclevels_->parent = this;

    cipsecphase2gwstatstable_->parent = this;

    cipsecspitable_->parent = this;

    cipsectrapcntl_->parent = this;

    cipsectunnelhisttable_->parent = this;

    cipsectunneltable_->parent = this;

    yang_name = "CISCO-IPSEC-FLOW-MONITOR-MIB"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB";
}

CiscoIpsecFlowMonitorMib::~CiscoIpsecFlowMonitorMib()
{
}

bool CiscoIpsecFlowMonitorMib::has_data() const
{
    return (cikefailtable_ !=  nullptr && cikefailtable_->has_data())
	|| (cikeglobalstats_ !=  nullptr && cikeglobalstats_->has_data())
	|| (cikepeercorrtable_ !=  nullptr && cikepeercorrtable_->has_data())
	|| (cikepeertable_ !=  nullptr && cikepeertable_->has_data())
	|| (cikephase1gwstatstable_ !=  nullptr && cikephase1gwstatstable_->has_data())
	|| (ciketunnelhisttable_ !=  nullptr && ciketunnelhisttable_->has_data())
	|| (ciketunneltable_ !=  nullptr && ciketunneltable_->has_data())
	|| (cipsecendpthisttable_ !=  nullptr && cipsecendpthisttable_->has_data())
	|| (cipsecendpttable_ !=  nullptr && cipsecendpttable_->has_data())
	|| (cipsecfailglobalcntl_ !=  nullptr && cipsecfailglobalcntl_->has_data())
	|| (cipsecfailtable_ !=  nullptr && cipsecfailtable_->has_data())
	|| (cipsecglobalstats_ !=  nullptr && cipsecglobalstats_->has_data())
	|| (cipsechistglobalcntl_ !=  nullptr && cipsechistglobalcntl_->has_data())
	|| (cipseclevels_ !=  nullptr && cipseclevels_->has_data())
	|| (cipsecphase2gwstatstable_ !=  nullptr && cipsecphase2gwstatstable_->has_data())
	|| (cipsecspitable_ !=  nullptr && cipsecspitable_->has_data())
	|| (cipsectrapcntl_ !=  nullptr && cipsectrapcntl_->has_data())
	|| (cipsectunnelhisttable_ !=  nullptr && cipsectunnelhisttable_->has_data())
	|| (cipsectunneltable_ !=  nullptr && cipsectunneltable_->has_data());
}

bool CiscoIpsecFlowMonitorMib::has_operation() const
{
    return is_set(operation)
	|| (cikefailtable_ !=  nullptr && cikefailtable_->has_operation())
	|| (cikeglobalstats_ !=  nullptr && cikeglobalstats_->has_operation())
	|| (cikepeercorrtable_ !=  nullptr && cikepeercorrtable_->has_operation())
	|| (cikepeertable_ !=  nullptr && cikepeertable_->has_operation())
	|| (cikephase1gwstatstable_ !=  nullptr && cikephase1gwstatstable_->has_operation())
	|| (ciketunnelhisttable_ !=  nullptr && ciketunnelhisttable_->has_operation())
	|| (ciketunneltable_ !=  nullptr && ciketunneltable_->has_operation())
	|| (cipsecendpthisttable_ !=  nullptr && cipsecendpthisttable_->has_operation())
	|| (cipsecendpttable_ !=  nullptr && cipsecendpttable_->has_operation())
	|| (cipsecfailglobalcntl_ !=  nullptr && cipsecfailglobalcntl_->has_operation())
	|| (cipsecfailtable_ !=  nullptr && cipsecfailtable_->has_operation())
	|| (cipsecglobalstats_ !=  nullptr && cipsecglobalstats_->has_operation())
	|| (cipsechistglobalcntl_ !=  nullptr && cipsechistglobalcntl_->has_operation())
	|| (cipseclevels_ !=  nullptr && cipseclevels_->has_operation())
	|| (cipsecphase2gwstatstable_ !=  nullptr && cipsecphase2gwstatstable_->has_operation())
	|| (cipsecspitable_ !=  nullptr && cipsecspitable_->has_operation())
	|| (cipsectrapcntl_ !=  nullptr && cipsectrapcntl_->has_operation())
	|| (cipsectunnelhisttable_ !=  nullptr && cipsectunnelhisttable_->has_operation())
	|| (cipsectunneltable_ !=  nullptr && cipsectunneltable_->has_operation());
}

std::string CiscoIpsecFlowMonitorMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB";

    return path_buffer.str();

}

const EntityPath CiscoIpsecFlowMonitorMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoIpsecFlowMonitorMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cikeFailTable")
    {
        if(cikefailtable_ == nullptr)
        {
            cikefailtable_ = std::make_shared<CiscoIpsecFlowMonitorMib::Cikefailtable>();
        }
        return cikefailtable_;
    }

    if(child_yang_name == "cikeGlobalStats")
    {
        if(cikeglobalstats_ == nullptr)
        {
            cikeglobalstats_ = std::make_shared<CiscoIpsecFlowMonitorMib::Cikeglobalstats>();
        }
        return cikeglobalstats_;
    }

    if(child_yang_name == "cikePeerCorrTable")
    {
        if(cikepeercorrtable_ == nullptr)
        {
            cikepeercorrtable_ = std::make_shared<CiscoIpsecFlowMonitorMib::Cikepeercorrtable>();
        }
        return cikepeercorrtable_;
    }

    if(child_yang_name == "cikePeerTable")
    {
        if(cikepeertable_ == nullptr)
        {
            cikepeertable_ = std::make_shared<CiscoIpsecFlowMonitorMib::Cikepeertable>();
        }
        return cikepeertable_;
    }

    if(child_yang_name == "cikePhase1GWStatsTable")
    {
        if(cikephase1gwstatstable_ == nullptr)
        {
            cikephase1gwstatstable_ = std::make_shared<CiscoIpsecFlowMonitorMib::Cikephase1Gwstatstable>();
        }
        return cikephase1gwstatstable_;
    }

    if(child_yang_name == "cikeTunnelHistTable")
    {
        if(ciketunnelhisttable_ == nullptr)
        {
            ciketunnelhisttable_ = std::make_shared<CiscoIpsecFlowMonitorMib::Ciketunnelhisttable>();
        }
        return ciketunnelhisttable_;
    }

    if(child_yang_name == "cikeTunnelTable")
    {
        if(ciketunneltable_ == nullptr)
        {
            ciketunneltable_ = std::make_shared<CiscoIpsecFlowMonitorMib::Ciketunneltable>();
        }
        return ciketunneltable_;
    }

    if(child_yang_name == "cipSecEndPtHistTable")
    {
        if(cipsecendpthisttable_ == nullptr)
        {
            cipsecendpthisttable_ = std::make_shared<CiscoIpsecFlowMonitorMib::Cipsecendpthisttable>();
        }
        return cipsecendpthisttable_;
    }

    if(child_yang_name == "cipSecEndPtTable")
    {
        if(cipsecendpttable_ == nullptr)
        {
            cipsecendpttable_ = std::make_shared<CiscoIpsecFlowMonitorMib::Cipsecendpttable>();
        }
        return cipsecendpttable_;
    }

    if(child_yang_name == "cipSecFailGlobalCntl")
    {
        if(cipsecfailglobalcntl_ == nullptr)
        {
            cipsecfailglobalcntl_ = std::make_shared<CiscoIpsecFlowMonitorMib::Cipsecfailglobalcntl>();
        }
        return cipsecfailglobalcntl_;
    }

    if(child_yang_name == "cipSecFailTable")
    {
        if(cipsecfailtable_ == nullptr)
        {
            cipsecfailtable_ = std::make_shared<CiscoIpsecFlowMonitorMib::Cipsecfailtable>();
        }
        return cipsecfailtable_;
    }

    if(child_yang_name == "cipSecGlobalStats")
    {
        if(cipsecglobalstats_ == nullptr)
        {
            cipsecglobalstats_ = std::make_shared<CiscoIpsecFlowMonitorMib::Cipsecglobalstats>();
        }
        return cipsecglobalstats_;
    }

    if(child_yang_name == "cipSecHistGlobalCntl")
    {
        if(cipsechistglobalcntl_ == nullptr)
        {
            cipsechistglobalcntl_ = std::make_shared<CiscoIpsecFlowMonitorMib::Cipsechistglobalcntl>();
        }
        return cipsechistglobalcntl_;
    }

    if(child_yang_name == "cipSecLevels")
    {
        if(cipseclevels_ == nullptr)
        {
            cipseclevels_ = std::make_shared<CiscoIpsecFlowMonitorMib::Cipseclevels>();
        }
        return cipseclevels_;
    }

    if(child_yang_name == "cipSecPhase2GWStatsTable")
    {
        if(cipsecphase2gwstatstable_ == nullptr)
        {
            cipsecphase2gwstatstable_ = std::make_shared<CiscoIpsecFlowMonitorMib::Cipsecphase2Gwstatstable>();
        }
        return cipsecphase2gwstatstable_;
    }

    if(child_yang_name == "cipSecSpiTable")
    {
        if(cipsecspitable_ == nullptr)
        {
            cipsecspitable_ = std::make_shared<CiscoIpsecFlowMonitorMib::Cipsecspitable>();
        }
        return cipsecspitable_;
    }

    if(child_yang_name == "cipSecTrapCntl")
    {
        if(cipsectrapcntl_ == nullptr)
        {
            cipsectrapcntl_ = std::make_shared<CiscoIpsecFlowMonitorMib::Cipsectrapcntl>();
        }
        return cipsectrapcntl_;
    }

    if(child_yang_name == "cipSecTunnelHistTable")
    {
        if(cipsectunnelhisttable_ == nullptr)
        {
            cipsectunnelhisttable_ = std::make_shared<CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable>();
        }
        return cipsectunnelhisttable_;
    }

    if(child_yang_name == "cipSecTunnelTable")
    {
        if(cipsectunneltable_ == nullptr)
        {
            cipsectunneltable_ = std::make_shared<CiscoIpsecFlowMonitorMib::Cipsectunneltable>();
        }
        return cipsectunneltable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecFlowMonitorMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cikefailtable_ != nullptr)
    {
        children["cikeFailTable"] = cikefailtable_;
    }

    if(cikeglobalstats_ != nullptr)
    {
        children["cikeGlobalStats"] = cikeglobalstats_;
    }

    if(cikepeercorrtable_ != nullptr)
    {
        children["cikePeerCorrTable"] = cikepeercorrtable_;
    }

    if(cikepeertable_ != nullptr)
    {
        children["cikePeerTable"] = cikepeertable_;
    }

    if(cikephase1gwstatstable_ != nullptr)
    {
        children["cikePhase1GWStatsTable"] = cikephase1gwstatstable_;
    }

    if(ciketunnelhisttable_ != nullptr)
    {
        children["cikeTunnelHistTable"] = ciketunnelhisttable_;
    }

    if(ciketunneltable_ != nullptr)
    {
        children["cikeTunnelTable"] = ciketunneltable_;
    }

    if(cipsecendpthisttable_ != nullptr)
    {
        children["cipSecEndPtHistTable"] = cipsecendpthisttable_;
    }

    if(cipsecendpttable_ != nullptr)
    {
        children["cipSecEndPtTable"] = cipsecendpttable_;
    }

    if(cipsecfailglobalcntl_ != nullptr)
    {
        children["cipSecFailGlobalCntl"] = cipsecfailglobalcntl_;
    }

    if(cipsecfailtable_ != nullptr)
    {
        children["cipSecFailTable"] = cipsecfailtable_;
    }

    if(cipsecglobalstats_ != nullptr)
    {
        children["cipSecGlobalStats"] = cipsecglobalstats_;
    }

    if(cipsechistglobalcntl_ != nullptr)
    {
        children["cipSecHistGlobalCntl"] = cipsechistglobalcntl_;
    }

    if(cipseclevels_ != nullptr)
    {
        children["cipSecLevels"] = cipseclevels_;
    }

    if(cipsecphase2gwstatstable_ != nullptr)
    {
        children["cipSecPhase2GWStatsTable"] = cipsecphase2gwstatstable_;
    }

    if(cipsecspitable_ != nullptr)
    {
        children["cipSecSpiTable"] = cipsecspitable_;
    }

    if(cipsectrapcntl_ != nullptr)
    {
        children["cipSecTrapCntl"] = cipsectrapcntl_;
    }

    if(cipsectunnelhisttable_ != nullptr)
    {
        children["cipSecTunnelHistTable"] = cipsectunnelhisttable_;
    }

    if(cipsectunneltable_ != nullptr)
    {
        children["cipSecTunnelTable"] = cipsectunneltable_;
    }

    return children;
}

void CiscoIpsecFlowMonitorMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoIpsecFlowMonitorMib::clone_ptr() const
{
    return std::make_shared<CiscoIpsecFlowMonitorMib>();
}

std::string CiscoIpsecFlowMonitorMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoIpsecFlowMonitorMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoIpsecFlowMonitorMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoIpsecFlowMonitorMib::Cipseclevels::Cipseclevels()
    :
    cipsecmiblevel{YType::int32, "cipSecMibLevel"}
{
    yang_name = "cipSecLevels"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB";
}

CiscoIpsecFlowMonitorMib::Cipseclevels::~Cipseclevels()
{
}

bool CiscoIpsecFlowMonitorMib::Cipseclevels::has_data() const
{
    return cipsecmiblevel.is_set;
}

bool CiscoIpsecFlowMonitorMib::Cipseclevels::has_operation() const
{
    return is_set(operation)
	|| is_set(cipsecmiblevel.operation);
}

std::string CiscoIpsecFlowMonitorMib::Cipseclevels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecLevels";

    return path_buffer.str();

}

const EntityPath CiscoIpsecFlowMonitorMib::Cipseclevels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsecmiblevel.is_set || is_set(cipsecmiblevel.operation)) leaf_name_data.push_back(cipsecmiblevel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecFlowMonitorMib::Cipseclevels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecFlowMonitorMib::Cipseclevels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpsecFlowMonitorMib::Cipseclevels::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cipSecMibLevel")
    {
        cipsecmiblevel = value;
    }
}

CiscoIpsecFlowMonitorMib::Cikeglobalstats::Cikeglobalstats()
    :
    cikeglobalactivetunnels{YType::uint32, "cikeGlobalActiveTunnels"},
    cikeglobalauthfails{YType::uint32, "cikeGlobalAuthFails"},
    cikeglobaldecryptfails{YType::uint32, "cikeGlobalDecryptFails"},
    cikeglobalhashvalidfails{YType::uint32, "cikeGlobalHashValidFails"},
    cikeglobalindroppkts{YType::uint32, "cikeGlobalInDropPkts"},
    cikeglobalinittunnelfails{YType::uint32, "cikeGlobalInitTunnelFails"},
    cikeglobalinittunnels{YType::uint32, "cikeGlobalInitTunnels"},
    cikeglobalinnotifys{YType::uint32, "cikeGlobalInNotifys"},
    cikeglobalinoctets{YType::uint32, "cikeGlobalInOctets"},
    cikeglobalinp2exchginvalids{YType::uint32, "cikeGlobalInP2ExchgInvalids"},
    cikeglobalinp2exchgrejects{YType::uint32, "cikeGlobalInP2ExchgRejects"},
    cikeglobalinp2exchgs{YType::uint32, "cikeGlobalInP2Exchgs"},
    cikeglobalinp2sadelrequests{YType::uint32, "cikeGlobalInP2SaDelRequests"},
    cikeglobalinpkts{YType::uint32, "cikeGlobalInPkts"},
    cikeglobalnosafails{YType::uint32, "cikeGlobalNoSaFails"},
    cikeglobaloutdroppkts{YType::uint32, "cikeGlobalOutDropPkts"},
    cikeglobaloutnotifys{YType::uint32, "cikeGlobalOutNotifys"},
    cikeglobaloutoctets{YType::uint32, "cikeGlobalOutOctets"},
    cikeglobaloutp2exchginvalids{YType::uint32, "cikeGlobalOutP2ExchgInvalids"},
    cikeglobaloutp2exchgrejects{YType::uint32, "cikeGlobalOutP2ExchgRejects"},
    cikeglobaloutp2exchgs{YType::uint32, "cikeGlobalOutP2Exchgs"},
    cikeglobaloutp2sadelrequests{YType::uint32, "cikeGlobalOutP2SaDelRequests"},
    cikeglobaloutpkts{YType::uint32, "cikeGlobalOutPkts"},
    cikeglobalprevioustunnels{YType::uint32, "cikeGlobalPreviousTunnels"},
    cikeglobalresptunnelfails{YType::uint32, "cikeGlobalRespTunnelFails"},
    cikeglobalsyscapfails{YType::uint32, "cikeGlobalSysCapFails"}
{
    yang_name = "cikeGlobalStats"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB";
}

CiscoIpsecFlowMonitorMib::Cikeglobalstats::~Cikeglobalstats()
{
}

bool CiscoIpsecFlowMonitorMib::Cikeglobalstats::has_data() const
{
    return cikeglobalactivetunnels.is_set
	|| cikeglobalauthfails.is_set
	|| cikeglobaldecryptfails.is_set
	|| cikeglobalhashvalidfails.is_set
	|| cikeglobalindroppkts.is_set
	|| cikeglobalinittunnelfails.is_set
	|| cikeglobalinittunnels.is_set
	|| cikeglobalinnotifys.is_set
	|| cikeglobalinoctets.is_set
	|| cikeglobalinp2exchginvalids.is_set
	|| cikeglobalinp2exchgrejects.is_set
	|| cikeglobalinp2exchgs.is_set
	|| cikeglobalinp2sadelrequests.is_set
	|| cikeglobalinpkts.is_set
	|| cikeglobalnosafails.is_set
	|| cikeglobaloutdroppkts.is_set
	|| cikeglobaloutnotifys.is_set
	|| cikeglobaloutoctets.is_set
	|| cikeglobaloutp2exchginvalids.is_set
	|| cikeglobaloutp2exchgrejects.is_set
	|| cikeglobaloutp2exchgs.is_set
	|| cikeglobaloutp2sadelrequests.is_set
	|| cikeglobaloutpkts.is_set
	|| cikeglobalprevioustunnels.is_set
	|| cikeglobalresptunnelfails.is_set
	|| cikeglobalsyscapfails.is_set;
}

bool CiscoIpsecFlowMonitorMib::Cikeglobalstats::has_operation() const
{
    return is_set(operation)
	|| is_set(cikeglobalactivetunnels.operation)
	|| is_set(cikeglobalauthfails.operation)
	|| is_set(cikeglobaldecryptfails.operation)
	|| is_set(cikeglobalhashvalidfails.operation)
	|| is_set(cikeglobalindroppkts.operation)
	|| is_set(cikeglobalinittunnelfails.operation)
	|| is_set(cikeglobalinittunnels.operation)
	|| is_set(cikeglobalinnotifys.operation)
	|| is_set(cikeglobalinoctets.operation)
	|| is_set(cikeglobalinp2exchginvalids.operation)
	|| is_set(cikeglobalinp2exchgrejects.operation)
	|| is_set(cikeglobalinp2exchgs.operation)
	|| is_set(cikeglobalinp2sadelrequests.operation)
	|| is_set(cikeglobalinpkts.operation)
	|| is_set(cikeglobalnosafails.operation)
	|| is_set(cikeglobaloutdroppkts.operation)
	|| is_set(cikeglobaloutnotifys.operation)
	|| is_set(cikeglobaloutoctets.operation)
	|| is_set(cikeglobaloutp2exchginvalids.operation)
	|| is_set(cikeglobaloutp2exchgrejects.operation)
	|| is_set(cikeglobaloutp2exchgs.operation)
	|| is_set(cikeglobaloutp2sadelrequests.operation)
	|| is_set(cikeglobaloutpkts.operation)
	|| is_set(cikeglobalprevioustunnels.operation)
	|| is_set(cikeglobalresptunnelfails.operation)
	|| is_set(cikeglobalsyscapfails.operation);
}

std::string CiscoIpsecFlowMonitorMib::Cikeglobalstats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cikeGlobalStats";

    return path_buffer.str();

}

const EntityPath CiscoIpsecFlowMonitorMib::Cikeglobalstats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cikeglobalactivetunnels.is_set || is_set(cikeglobalactivetunnels.operation)) leaf_name_data.push_back(cikeglobalactivetunnels.get_name_leafdata());
    if (cikeglobalauthfails.is_set || is_set(cikeglobalauthfails.operation)) leaf_name_data.push_back(cikeglobalauthfails.get_name_leafdata());
    if (cikeglobaldecryptfails.is_set || is_set(cikeglobaldecryptfails.operation)) leaf_name_data.push_back(cikeglobaldecryptfails.get_name_leafdata());
    if (cikeglobalhashvalidfails.is_set || is_set(cikeglobalhashvalidfails.operation)) leaf_name_data.push_back(cikeglobalhashvalidfails.get_name_leafdata());
    if (cikeglobalindroppkts.is_set || is_set(cikeglobalindroppkts.operation)) leaf_name_data.push_back(cikeglobalindroppkts.get_name_leafdata());
    if (cikeglobalinittunnelfails.is_set || is_set(cikeglobalinittunnelfails.operation)) leaf_name_data.push_back(cikeglobalinittunnelfails.get_name_leafdata());
    if (cikeglobalinittunnels.is_set || is_set(cikeglobalinittunnels.operation)) leaf_name_data.push_back(cikeglobalinittunnels.get_name_leafdata());
    if (cikeglobalinnotifys.is_set || is_set(cikeglobalinnotifys.operation)) leaf_name_data.push_back(cikeglobalinnotifys.get_name_leafdata());
    if (cikeglobalinoctets.is_set || is_set(cikeglobalinoctets.operation)) leaf_name_data.push_back(cikeglobalinoctets.get_name_leafdata());
    if (cikeglobalinp2exchginvalids.is_set || is_set(cikeglobalinp2exchginvalids.operation)) leaf_name_data.push_back(cikeglobalinp2exchginvalids.get_name_leafdata());
    if (cikeglobalinp2exchgrejects.is_set || is_set(cikeglobalinp2exchgrejects.operation)) leaf_name_data.push_back(cikeglobalinp2exchgrejects.get_name_leafdata());
    if (cikeglobalinp2exchgs.is_set || is_set(cikeglobalinp2exchgs.operation)) leaf_name_data.push_back(cikeglobalinp2exchgs.get_name_leafdata());
    if (cikeglobalinp2sadelrequests.is_set || is_set(cikeglobalinp2sadelrequests.operation)) leaf_name_data.push_back(cikeglobalinp2sadelrequests.get_name_leafdata());
    if (cikeglobalinpkts.is_set || is_set(cikeglobalinpkts.operation)) leaf_name_data.push_back(cikeglobalinpkts.get_name_leafdata());
    if (cikeglobalnosafails.is_set || is_set(cikeglobalnosafails.operation)) leaf_name_data.push_back(cikeglobalnosafails.get_name_leafdata());
    if (cikeglobaloutdroppkts.is_set || is_set(cikeglobaloutdroppkts.operation)) leaf_name_data.push_back(cikeglobaloutdroppkts.get_name_leafdata());
    if (cikeglobaloutnotifys.is_set || is_set(cikeglobaloutnotifys.operation)) leaf_name_data.push_back(cikeglobaloutnotifys.get_name_leafdata());
    if (cikeglobaloutoctets.is_set || is_set(cikeglobaloutoctets.operation)) leaf_name_data.push_back(cikeglobaloutoctets.get_name_leafdata());
    if (cikeglobaloutp2exchginvalids.is_set || is_set(cikeglobaloutp2exchginvalids.operation)) leaf_name_data.push_back(cikeglobaloutp2exchginvalids.get_name_leafdata());
    if (cikeglobaloutp2exchgrejects.is_set || is_set(cikeglobaloutp2exchgrejects.operation)) leaf_name_data.push_back(cikeglobaloutp2exchgrejects.get_name_leafdata());
    if (cikeglobaloutp2exchgs.is_set || is_set(cikeglobaloutp2exchgs.operation)) leaf_name_data.push_back(cikeglobaloutp2exchgs.get_name_leafdata());
    if (cikeglobaloutp2sadelrequests.is_set || is_set(cikeglobaloutp2sadelrequests.operation)) leaf_name_data.push_back(cikeglobaloutp2sadelrequests.get_name_leafdata());
    if (cikeglobaloutpkts.is_set || is_set(cikeglobaloutpkts.operation)) leaf_name_data.push_back(cikeglobaloutpkts.get_name_leafdata());
    if (cikeglobalprevioustunnels.is_set || is_set(cikeglobalprevioustunnels.operation)) leaf_name_data.push_back(cikeglobalprevioustunnels.get_name_leafdata());
    if (cikeglobalresptunnelfails.is_set || is_set(cikeglobalresptunnelfails.operation)) leaf_name_data.push_back(cikeglobalresptunnelfails.get_name_leafdata());
    if (cikeglobalsyscapfails.is_set || is_set(cikeglobalsyscapfails.operation)) leaf_name_data.push_back(cikeglobalsyscapfails.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecFlowMonitorMib::Cikeglobalstats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecFlowMonitorMib::Cikeglobalstats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpsecFlowMonitorMib::Cikeglobalstats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cikeGlobalActiveTunnels")
    {
        cikeglobalactivetunnels = value;
    }
    if(value_path == "cikeGlobalAuthFails")
    {
        cikeglobalauthfails = value;
    }
    if(value_path == "cikeGlobalDecryptFails")
    {
        cikeglobaldecryptfails = value;
    }
    if(value_path == "cikeGlobalHashValidFails")
    {
        cikeglobalhashvalidfails = value;
    }
    if(value_path == "cikeGlobalInDropPkts")
    {
        cikeglobalindroppkts = value;
    }
    if(value_path == "cikeGlobalInitTunnelFails")
    {
        cikeglobalinittunnelfails = value;
    }
    if(value_path == "cikeGlobalInitTunnels")
    {
        cikeglobalinittunnels = value;
    }
    if(value_path == "cikeGlobalInNotifys")
    {
        cikeglobalinnotifys = value;
    }
    if(value_path == "cikeGlobalInOctets")
    {
        cikeglobalinoctets = value;
    }
    if(value_path == "cikeGlobalInP2ExchgInvalids")
    {
        cikeglobalinp2exchginvalids = value;
    }
    if(value_path == "cikeGlobalInP2ExchgRejects")
    {
        cikeglobalinp2exchgrejects = value;
    }
    if(value_path == "cikeGlobalInP2Exchgs")
    {
        cikeglobalinp2exchgs = value;
    }
    if(value_path == "cikeGlobalInP2SaDelRequests")
    {
        cikeglobalinp2sadelrequests = value;
    }
    if(value_path == "cikeGlobalInPkts")
    {
        cikeglobalinpkts = value;
    }
    if(value_path == "cikeGlobalNoSaFails")
    {
        cikeglobalnosafails = value;
    }
    if(value_path == "cikeGlobalOutDropPkts")
    {
        cikeglobaloutdroppkts = value;
    }
    if(value_path == "cikeGlobalOutNotifys")
    {
        cikeglobaloutnotifys = value;
    }
    if(value_path == "cikeGlobalOutOctets")
    {
        cikeglobaloutoctets = value;
    }
    if(value_path == "cikeGlobalOutP2ExchgInvalids")
    {
        cikeglobaloutp2exchginvalids = value;
    }
    if(value_path == "cikeGlobalOutP2ExchgRejects")
    {
        cikeglobaloutp2exchgrejects = value;
    }
    if(value_path == "cikeGlobalOutP2Exchgs")
    {
        cikeglobaloutp2exchgs = value;
    }
    if(value_path == "cikeGlobalOutP2SaDelRequests")
    {
        cikeglobaloutp2sadelrequests = value;
    }
    if(value_path == "cikeGlobalOutPkts")
    {
        cikeglobaloutpkts = value;
    }
    if(value_path == "cikeGlobalPreviousTunnels")
    {
        cikeglobalprevioustunnels = value;
    }
    if(value_path == "cikeGlobalRespTunnelFails")
    {
        cikeglobalresptunnelfails = value;
    }
    if(value_path == "cikeGlobalSysCapFails")
    {
        cikeglobalsyscapfails = value;
    }
}

CiscoIpsecFlowMonitorMib::Cipsecglobalstats::Cipsecglobalstats()
    :
    cipsecglobalactivetunnels{YType::uint32, "cipSecGlobalActiveTunnels"},
    cipsecglobalhcindecompoctets{YType::uint64, "cipSecGlobalHcInDecompOctets"},
    cipsecglobalhcinoctets{YType::uint64, "cipSecGlobalHcInOctets"},
    cipsecglobalhcoutoctets{YType::uint64, "cipSecGlobalHcOutOctets"},
    cipsecglobalhcoutuncompoctets{YType::uint64, "cipSecGlobalHcOutUncompOctets"},
    cipsecglobalinauthfails{YType::uint32, "cipSecGlobalInAuthFails"},
    cipsecglobalinauths{YType::uint32, "cipSecGlobalInAuths"},
    cipsecglobalindecompoctets{YType::uint32, "cipSecGlobalInDecompOctets"},
    cipsecglobalindecompoctwraps{YType::uint32, "cipSecGlobalInDecompOctWraps"},
    cipsecglobalindecryptfails{YType::uint32, "cipSecGlobalInDecryptFails"},
    cipsecglobalindecrypts{YType::uint32, "cipSecGlobalInDecrypts"},
    cipsecglobalindrops{YType::uint32, "cipSecGlobalInDrops"},
    cipsecglobalinoctets{YType::uint32, "cipSecGlobalInOctets"},
    cipsecglobalinoctwraps{YType::uint32, "cipSecGlobalInOctWraps"},
    cipsecglobalinpkts{YType::uint32, "cipSecGlobalInPkts"},
    cipsecglobalinreplaydrops{YType::uint32, "cipSecGlobalInReplayDrops"},
    cipsecglobalnosafails{YType::uint32, "cipSecGlobalNoSaFails"},
    cipsecglobaloutauthfails{YType::uint32, "cipSecGlobalOutAuthFails"},
    cipsecglobaloutauths{YType::uint32, "cipSecGlobalOutAuths"},
    cipsecglobaloutdrops{YType::uint32, "cipSecGlobalOutDrops"},
    cipsecglobaloutencryptfails{YType::uint32, "cipSecGlobalOutEncryptFails"},
    cipsecglobaloutencrypts{YType::uint32, "cipSecGlobalOutEncrypts"},
    cipsecglobaloutoctets{YType::uint32, "cipSecGlobalOutOctets"},
    cipsecglobaloutoctwraps{YType::uint32, "cipSecGlobalOutOctWraps"},
    cipsecglobaloutpkts{YType::uint32, "cipSecGlobalOutPkts"},
    cipsecglobaloutuncompoctets{YType::uint32, "cipSecGlobalOutUncompOctets"},
    cipsecglobaloutuncompoctwraps{YType::uint32, "cipSecGlobalOutUncompOctWraps"},
    cipsecglobalprevioustunnels{YType::uint32, "cipSecGlobalPreviousTunnels"},
    cipsecglobalprotocolusefails{YType::uint32, "cipSecGlobalProtocolUseFails"},
    cipsecglobalsyscapfails{YType::uint32, "cipSecGlobalSysCapFails"}
{
    yang_name = "cipSecGlobalStats"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB";
}

CiscoIpsecFlowMonitorMib::Cipsecglobalstats::~Cipsecglobalstats()
{
}

bool CiscoIpsecFlowMonitorMib::Cipsecglobalstats::has_data() const
{
    return cipsecglobalactivetunnels.is_set
	|| cipsecglobalhcindecompoctets.is_set
	|| cipsecglobalhcinoctets.is_set
	|| cipsecglobalhcoutoctets.is_set
	|| cipsecglobalhcoutuncompoctets.is_set
	|| cipsecglobalinauthfails.is_set
	|| cipsecglobalinauths.is_set
	|| cipsecglobalindecompoctets.is_set
	|| cipsecglobalindecompoctwraps.is_set
	|| cipsecglobalindecryptfails.is_set
	|| cipsecglobalindecrypts.is_set
	|| cipsecglobalindrops.is_set
	|| cipsecglobalinoctets.is_set
	|| cipsecglobalinoctwraps.is_set
	|| cipsecglobalinpkts.is_set
	|| cipsecglobalinreplaydrops.is_set
	|| cipsecglobalnosafails.is_set
	|| cipsecglobaloutauthfails.is_set
	|| cipsecglobaloutauths.is_set
	|| cipsecglobaloutdrops.is_set
	|| cipsecglobaloutencryptfails.is_set
	|| cipsecglobaloutencrypts.is_set
	|| cipsecglobaloutoctets.is_set
	|| cipsecglobaloutoctwraps.is_set
	|| cipsecglobaloutpkts.is_set
	|| cipsecglobaloutuncompoctets.is_set
	|| cipsecglobaloutuncompoctwraps.is_set
	|| cipsecglobalprevioustunnels.is_set
	|| cipsecglobalprotocolusefails.is_set
	|| cipsecglobalsyscapfails.is_set;
}

bool CiscoIpsecFlowMonitorMib::Cipsecglobalstats::has_operation() const
{
    return is_set(operation)
	|| is_set(cipsecglobalactivetunnels.operation)
	|| is_set(cipsecglobalhcindecompoctets.operation)
	|| is_set(cipsecglobalhcinoctets.operation)
	|| is_set(cipsecglobalhcoutoctets.operation)
	|| is_set(cipsecglobalhcoutuncompoctets.operation)
	|| is_set(cipsecglobalinauthfails.operation)
	|| is_set(cipsecglobalinauths.operation)
	|| is_set(cipsecglobalindecompoctets.operation)
	|| is_set(cipsecglobalindecompoctwraps.operation)
	|| is_set(cipsecglobalindecryptfails.operation)
	|| is_set(cipsecglobalindecrypts.operation)
	|| is_set(cipsecglobalindrops.operation)
	|| is_set(cipsecglobalinoctets.operation)
	|| is_set(cipsecglobalinoctwraps.operation)
	|| is_set(cipsecglobalinpkts.operation)
	|| is_set(cipsecglobalinreplaydrops.operation)
	|| is_set(cipsecglobalnosafails.operation)
	|| is_set(cipsecglobaloutauthfails.operation)
	|| is_set(cipsecglobaloutauths.operation)
	|| is_set(cipsecglobaloutdrops.operation)
	|| is_set(cipsecglobaloutencryptfails.operation)
	|| is_set(cipsecglobaloutencrypts.operation)
	|| is_set(cipsecglobaloutoctets.operation)
	|| is_set(cipsecglobaloutoctwraps.operation)
	|| is_set(cipsecglobaloutpkts.operation)
	|| is_set(cipsecglobaloutuncompoctets.operation)
	|| is_set(cipsecglobaloutuncompoctwraps.operation)
	|| is_set(cipsecglobalprevioustunnels.operation)
	|| is_set(cipsecglobalprotocolusefails.operation)
	|| is_set(cipsecglobalsyscapfails.operation);
}

std::string CiscoIpsecFlowMonitorMib::Cipsecglobalstats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecGlobalStats";

    return path_buffer.str();

}

const EntityPath CiscoIpsecFlowMonitorMib::Cipsecglobalstats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsecglobalactivetunnels.is_set || is_set(cipsecglobalactivetunnels.operation)) leaf_name_data.push_back(cipsecglobalactivetunnels.get_name_leafdata());
    if (cipsecglobalhcindecompoctets.is_set || is_set(cipsecglobalhcindecompoctets.operation)) leaf_name_data.push_back(cipsecglobalhcindecompoctets.get_name_leafdata());
    if (cipsecglobalhcinoctets.is_set || is_set(cipsecglobalhcinoctets.operation)) leaf_name_data.push_back(cipsecglobalhcinoctets.get_name_leafdata());
    if (cipsecglobalhcoutoctets.is_set || is_set(cipsecglobalhcoutoctets.operation)) leaf_name_data.push_back(cipsecglobalhcoutoctets.get_name_leafdata());
    if (cipsecglobalhcoutuncompoctets.is_set || is_set(cipsecglobalhcoutuncompoctets.operation)) leaf_name_data.push_back(cipsecglobalhcoutuncompoctets.get_name_leafdata());
    if (cipsecglobalinauthfails.is_set || is_set(cipsecglobalinauthfails.operation)) leaf_name_data.push_back(cipsecglobalinauthfails.get_name_leafdata());
    if (cipsecglobalinauths.is_set || is_set(cipsecglobalinauths.operation)) leaf_name_data.push_back(cipsecglobalinauths.get_name_leafdata());
    if (cipsecglobalindecompoctets.is_set || is_set(cipsecglobalindecompoctets.operation)) leaf_name_data.push_back(cipsecglobalindecompoctets.get_name_leafdata());
    if (cipsecglobalindecompoctwraps.is_set || is_set(cipsecglobalindecompoctwraps.operation)) leaf_name_data.push_back(cipsecglobalindecompoctwraps.get_name_leafdata());
    if (cipsecglobalindecryptfails.is_set || is_set(cipsecglobalindecryptfails.operation)) leaf_name_data.push_back(cipsecglobalindecryptfails.get_name_leafdata());
    if (cipsecglobalindecrypts.is_set || is_set(cipsecglobalindecrypts.operation)) leaf_name_data.push_back(cipsecglobalindecrypts.get_name_leafdata());
    if (cipsecglobalindrops.is_set || is_set(cipsecglobalindrops.operation)) leaf_name_data.push_back(cipsecglobalindrops.get_name_leafdata());
    if (cipsecglobalinoctets.is_set || is_set(cipsecglobalinoctets.operation)) leaf_name_data.push_back(cipsecglobalinoctets.get_name_leafdata());
    if (cipsecglobalinoctwraps.is_set || is_set(cipsecglobalinoctwraps.operation)) leaf_name_data.push_back(cipsecglobalinoctwraps.get_name_leafdata());
    if (cipsecglobalinpkts.is_set || is_set(cipsecglobalinpkts.operation)) leaf_name_data.push_back(cipsecglobalinpkts.get_name_leafdata());
    if (cipsecglobalinreplaydrops.is_set || is_set(cipsecglobalinreplaydrops.operation)) leaf_name_data.push_back(cipsecglobalinreplaydrops.get_name_leafdata());
    if (cipsecglobalnosafails.is_set || is_set(cipsecglobalnosafails.operation)) leaf_name_data.push_back(cipsecglobalnosafails.get_name_leafdata());
    if (cipsecglobaloutauthfails.is_set || is_set(cipsecglobaloutauthfails.operation)) leaf_name_data.push_back(cipsecglobaloutauthfails.get_name_leafdata());
    if (cipsecglobaloutauths.is_set || is_set(cipsecglobaloutauths.operation)) leaf_name_data.push_back(cipsecglobaloutauths.get_name_leafdata());
    if (cipsecglobaloutdrops.is_set || is_set(cipsecglobaloutdrops.operation)) leaf_name_data.push_back(cipsecglobaloutdrops.get_name_leafdata());
    if (cipsecglobaloutencryptfails.is_set || is_set(cipsecglobaloutencryptfails.operation)) leaf_name_data.push_back(cipsecglobaloutencryptfails.get_name_leafdata());
    if (cipsecglobaloutencrypts.is_set || is_set(cipsecglobaloutencrypts.operation)) leaf_name_data.push_back(cipsecglobaloutencrypts.get_name_leafdata());
    if (cipsecglobaloutoctets.is_set || is_set(cipsecglobaloutoctets.operation)) leaf_name_data.push_back(cipsecglobaloutoctets.get_name_leafdata());
    if (cipsecglobaloutoctwraps.is_set || is_set(cipsecglobaloutoctwraps.operation)) leaf_name_data.push_back(cipsecglobaloutoctwraps.get_name_leafdata());
    if (cipsecglobaloutpkts.is_set || is_set(cipsecglobaloutpkts.operation)) leaf_name_data.push_back(cipsecglobaloutpkts.get_name_leafdata());
    if (cipsecglobaloutuncompoctets.is_set || is_set(cipsecglobaloutuncompoctets.operation)) leaf_name_data.push_back(cipsecglobaloutuncompoctets.get_name_leafdata());
    if (cipsecglobaloutuncompoctwraps.is_set || is_set(cipsecglobaloutuncompoctwraps.operation)) leaf_name_data.push_back(cipsecglobaloutuncompoctwraps.get_name_leafdata());
    if (cipsecglobalprevioustunnels.is_set || is_set(cipsecglobalprevioustunnels.operation)) leaf_name_data.push_back(cipsecglobalprevioustunnels.get_name_leafdata());
    if (cipsecglobalprotocolusefails.is_set || is_set(cipsecglobalprotocolusefails.operation)) leaf_name_data.push_back(cipsecglobalprotocolusefails.get_name_leafdata());
    if (cipsecglobalsyscapfails.is_set || is_set(cipsecglobalsyscapfails.operation)) leaf_name_data.push_back(cipsecglobalsyscapfails.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecFlowMonitorMib::Cipsecglobalstats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecFlowMonitorMib::Cipsecglobalstats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpsecFlowMonitorMib::Cipsecglobalstats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cipSecGlobalActiveTunnels")
    {
        cipsecglobalactivetunnels = value;
    }
    if(value_path == "cipSecGlobalHcInDecompOctets")
    {
        cipsecglobalhcindecompoctets = value;
    }
    if(value_path == "cipSecGlobalHcInOctets")
    {
        cipsecglobalhcinoctets = value;
    }
    if(value_path == "cipSecGlobalHcOutOctets")
    {
        cipsecglobalhcoutoctets = value;
    }
    if(value_path == "cipSecGlobalHcOutUncompOctets")
    {
        cipsecglobalhcoutuncompoctets = value;
    }
    if(value_path == "cipSecGlobalInAuthFails")
    {
        cipsecglobalinauthfails = value;
    }
    if(value_path == "cipSecGlobalInAuths")
    {
        cipsecglobalinauths = value;
    }
    if(value_path == "cipSecGlobalInDecompOctets")
    {
        cipsecglobalindecompoctets = value;
    }
    if(value_path == "cipSecGlobalInDecompOctWraps")
    {
        cipsecglobalindecompoctwraps = value;
    }
    if(value_path == "cipSecGlobalInDecryptFails")
    {
        cipsecglobalindecryptfails = value;
    }
    if(value_path == "cipSecGlobalInDecrypts")
    {
        cipsecglobalindecrypts = value;
    }
    if(value_path == "cipSecGlobalInDrops")
    {
        cipsecglobalindrops = value;
    }
    if(value_path == "cipSecGlobalInOctets")
    {
        cipsecglobalinoctets = value;
    }
    if(value_path == "cipSecGlobalInOctWraps")
    {
        cipsecglobalinoctwraps = value;
    }
    if(value_path == "cipSecGlobalInPkts")
    {
        cipsecglobalinpkts = value;
    }
    if(value_path == "cipSecGlobalInReplayDrops")
    {
        cipsecglobalinreplaydrops = value;
    }
    if(value_path == "cipSecGlobalNoSaFails")
    {
        cipsecglobalnosafails = value;
    }
    if(value_path == "cipSecGlobalOutAuthFails")
    {
        cipsecglobaloutauthfails = value;
    }
    if(value_path == "cipSecGlobalOutAuths")
    {
        cipsecglobaloutauths = value;
    }
    if(value_path == "cipSecGlobalOutDrops")
    {
        cipsecglobaloutdrops = value;
    }
    if(value_path == "cipSecGlobalOutEncryptFails")
    {
        cipsecglobaloutencryptfails = value;
    }
    if(value_path == "cipSecGlobalOutEncrypts")
    {
        cipsecglobaloutencrypts = value;
    }
    if(value_path == "cipSecGlobalOutOctets")
    {
        cipsecglobaloutoctets = value;
    }
    if(value_path == "cipSecGlobalOutOctWraps")
    {
        cipsecglobaloutoctwraps = value;
    }
    if(value_path == "cipSecGlobalOutPkts")
    {
        cipsecglobaloutpkts = value;
    }
    if(value_path == "cipSecGlobalOutUncompOctets")
    {
        cipsecglobaloutuncompoctets = value;
    }
    if(value_path == "cipSecGlobalOutUncompOctWraps")
    {
        cipsecglobaloutuncompoctwraps = value;
    }
    if(value_path == "cipSecGlobalPreviousTunnels")
    {
        cipsecglobalprevioustunnels = value;
    }
    if(value_path == "cipSecGlobalProtocolUseFails")
    {
        cipsecglobalprotocolusefails = value;
    }
    if(value_path == "cipSecGlobalSysCapFails")
    {
        cipsecglobalsyscapfails = value;
    }
}

CiscoIpsecFlowMonitorMib::Cipsechistglobalcntl::Cipsechistglobalcntl()
    :
    cipsechistcheckpoint{YType::enumeration, "cipSecHistCheckPoint"},
    cipsechisttablesize{YType::int32, "cipSecHistTableSize"}
{
    yang_name = "cipSecHistGlobalCntl"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB";
}

CiscoIpsecFlowMonitorMib::Cipsechistglobalcntl::~Cipsechistglobalcntl()
{
}

bool CiscoIpsecFlowMonitorMib::Cipsechistglobalcntl::has_data() const
{
    return cipsechistcheckpoint.is_set
	|| cipsechisttablesize.is_set;
}

bool CiscoIpsecFlowMonitorMib::Cipsechistglobalcntl::has_operation() const
{
    return is_set(operation)
	|| is_set(cipsechistcheckpoint.operation)
	|| is_set(cipsechisttablesize.operation);
}

std::string CiscoIpsecFlowMonitorMib::Cipsechistglobalcntl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecHistGlobalCntl";

    return path_buffer.str();

}

const EntityPath CiscoIpsecFlowMonitorMib::Cipsechistglobalcntl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsechistcheckpoint.is_set || is_set(cipsechistcheckpoint.operation)) leaf_name_data.push_back(cipsechistcheckpoint.get_name_leafdata());
    if (cipsechisttablesize.is_set || is_set(cipsechisttablesize.operation)) leaf_name_data.push_back(cipsechisttablesize.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecFlowMonitorMib::Cipsechistglobalcntl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecFlowMonitorMib::Cipsechistglobalcntl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpsecFlowMonitorMib::Cipsechistglobalcntl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cipSecHistCheckPoint")
    {
        cipsechistcheckpoint = value;
    }
    if(value_path == "cipSecHistTableSize")
    {
        cipsechisttablesize = value;
    }
}

CiscoIpsecFlowMonitorMib::Cipsecfailglobalcntl::Cipsecfailglobalcntl()
    :
    cipsecfailtablesize{YType::int32, "cipSecFailTableSize"}
{
    yang_name = "cipSecFailGlobalCntl"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB";
}

CiscoIpsecFlowMonitorMib::Cipsecfailglobalcntl::~Cipsecfailglobalcntl()
{
}

bool CiscoIpsecFlowMonitorMib::Cipsecfailglobalcntl::has_data() const
{
    return cipsecfailtablesize.is_set;
}

bool CiscoIpsecFlowMonitorMib::Cipsecfailglobalcntl::has_operation() const
{
    return is_set(operation)
	|| is_set(cipsecfailtablesize.operation);
}

std::string CiscoIpsecFlowMonitorMib::Cipsecfailglobalcntl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecFailGlobalCntl";

    return path_buffer.str();

}

const EntityPath CiscoIpsecFlowMonitorMib::Cipsecfailglobalcntl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsecfailtablesize.is_set || is_set(cipsecfailtablesize.operation)) leaf_name_data.push_back(cipsecfailtablesize.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecFlowMonitorMib::Cipsecfailglobalcntl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecFlowMonitorMib::Cipsecfailglobalcntl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpsecFlowMonitorMib::Cipsecfailglobalcntl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cipSecFailTableSize")
    {
        cipsecfailtablesize = value;
    }
}

CiscoIpsecFlowMonitorMib::Cipsectrapcntl::Cipsectrapcntl()
    :
    cipsectrapcntlikecertcrlfailure{YType::enumeration, "cipSecTrapCntlIkeCertCrlFailure"},
    cipsectrapcntlikenosa{YType::enumeration, "cipSecTrapCntlIkeNoSa"},
    cipsectrapcntlikeprotocolfail{YType::enumeration, "cipSecTrapCntlIkeProtocolFail"},
    cipsectrapcntlikesysfailure{YType::enumeration, "cipSecTrapCntlIkeSysFailure"},
    cipsectrapcntliketunnelstart{YType::enumeration, "cipSecTrapCntlIkeTunnelStart"},
    cipsectrapcntliketunnelstop{YType::enumeration, "cipSecTrapCntlIkeTunnelStop"},
    cipsectrapcntlipsecearlytunterm{YType::enumeration, "cipSecTrapCntlIpSecEarlyTunTerm"},
    cipsectrapcntlipsecnosa{YType::enumeration, "cipSecTrapCntlIpSecNoSa"},
    cipsectrapcntlipsecprotocolfail{YType::enumeration, "cipSecTrapCntlIpSecProtocolFail"},
    cipsectrapcntlipsecsetupfailure{YType::enumeration, "cipSecTrapCntlIpSecSetUpFailure"},
    cipsectrapcntlipsecsysfailure{YType::enumeration, "cipSecTrapCntlIpSecSysFailure"},
    cipsectrapcntlipsectunnelstart{YType::enumeration, "cipSecTrapCntlIpSecTunnelStart"},
    cipsectrapcntlipsectunnelstop{YType::enumeration, "cipSecTrapCntlIpSecTunnelStop"}
{
    yang_name = "cipSecTrapCntl"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB";
}

CiscoIpsecFlowMonitorMib::Cipsectrapcntl::~Cipsectrapcntl()
{
}

bool CiscoIpsecFlowMonitorMib::Cipsectrapcntl::has_data() const
{
    return cipsectrapcntlikecertcrlfailure.is_set
	|| cipsectrapcntlikenosa.is_set
	|| cipsectrapcntlikeprotocolfail.is_set
	|| cipsectrapcntlikesysfailure.is_set
	|| cipsectrapcntliketunnelstart.is_set
	|| cipsectrapcntliketunnelstop.is_set
	|| cipsectrapcntlipsecearlytunterm.is_set
	|| cipsectrapcntlipsecnosa.is_set
	|| cipsectrapcntlipsecprotocolfail.is_set
	|| cipsectrapcntlipsecsetupfailure.is_set
	|| cipsectrapcntlipsecsysfailure.is_set
	|| cipsectrapcntlipsectunnelstart.is_set
	|| cipsectrapcntlipsectunnelstop.is_set;
}

bool CiscoIpsecFlowMonitorMib::Cipsectrapcntl::has_operation() const
{
    return is_set(operation)
	|| is_set(cipsectrapcntlikecertcrlfailure.operation)
	|| is_set(cipsectrapcntlikenosa.operation)
	|| is_set(cipsectrapcntlikeprotocolfail.operation)
	|| is_set(cipsectrapcntlikesysfailure.operation)
	|| is_set(cipsectrapcntliketunnelstart.operation)
	|| is_set(cipsectrapcntliketunnelstop.operation)
	|| is_set(cipsectrapcntlipsecearlytunterm.operation)
	|| is_set(cipsectrapcntlipsecnosa.operation)
	|| is_set(cipsectrapcntlipsecprotocolfail.operation)
	|| is_set(cipsectrapcntlipsecsetupfailure.operation)
	|| is_set(cipsectrapcntlipsecsysfailure.operation)
	|| is_set(cipsectrapcntlipsectunnelstart.operation)
	|| is_set(cipsectrapcntlipsectunnelstop.operation);
}

std::string CiscoIpsecFlowMonitorMib::Cipsectrapcntl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecTrapCntl";

    return path_buffer.str();

}

const EntityPath CiscoIpsecFlowMonitorMib::Cipsectrapcntl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsectrapcntlikecertcrlfailure.is_set || is_set(cipsectrapcntlikecertcrlfailure.operation)) leaf_name_data.push_back(cipsectrapcntlikecertcrlfailure.get_name_leafdata());
    if (cipsectrapcntlikenosa.is_set || is_set(cipsectrapcntlikenosa.operation)) leaf_name_data.push_back(cipsectrapcntlikenosa.get_name_leafdata());
    if (cipsectrapcntlikeprotocolfail.is_set || is_set(cipsectrapcntlikeprotocolfail.operation)) leaf_name_data.push_back(cipsectrapcntlikeprotocolfail.get_name_leafdata());
    if (cipsectrapcntlikesysfailure.is_set || is_set(cipsectrapcntlikesysfailure.operation)) leaf_name_data.push_back(cipsectrapcntlikesysfailure.get_name_leafdata());
    if (cipsectrapcntliketunnelstart.is_set || is_set(cipsectrapcntliketunnelstart.operation)) leaf_name_data.push_back(cipsectrapcntliketunnelstart.get_name_leafdata());
    if (cipsectrapcntliketunnelstop.is_set || is_set(cipsectrapcntliketunnelstop.operation)) leaf_name_data.push_back(cipsectrapcntliketunnelstop.get_name_leafdata());
    if (cipsectrapcntlipsecearlytunterm.is_set || is_set(cipsectrapcntlipsecearlytunterm.operation)) leaf_name_data.push_back(cipsectrapcntlipsecearlytunterm.get_name_leafdata());
    if (cipsectrapcntlipsecnosa.is_set || is_set(cipsectrapcntlipsecnosa.operation)) leaf_name_data.push_back(cipsectrapcntlipsecnosa.get_name_leafdata());
    if (cipsectrapcntlipsecprotocolfail.is_set || is_set(cipsectrapcntlipsecprotocolfail.operation)) leaf_name_data.push_back(cipsectrapcntlipsecprotocolfail.get_name_leafdata());
    if (cipsectrapcntlipsecsetupfailure.is_set || is_set(cipsectrapcntlipsecsetupfailure.operation)) leaf_name_data.push_back(cipsectrapcntlipsecsetupfailure.get_name_leafdata());
    if (cipsectrapcntlipsecsysfailure.is_set || is_set(cipsectrapcntlipsecsysfailure.operation)) leaf_name_data.push_back(cipsectrapcntlipsecsysfailure.get_name_leafdata());
    if (cipsectrapcntlipsectunnelstart.is_set || is_set(cipsectrapcntlipsectunnelstart.operation)) leaf_name_data.push_back(cipsectrapcntlipsectunnelstart.get_name_leafdata());
    if (cipsectrapcntlipsectunnelstop.is_set || is_set(cipsectrapcntlipsectunnelstop.operation)) leaf_name_data.push_back(cipsectrapcntlipsectunnelstop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecFlowMonitorMib::Cipsectrapcntl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecFlowMonitorMib::Cipsectrapcntl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpsecFlowMonitorMib::Cipsectrapcntl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cipSecTrapCntlIkeCertCrlFailure")
    {
        cipsectrapcntlikecertcrlfailure = value;
    }
    if(value_path == "cipSecTrapCntlIkeNoSa")
    {
        cipsectrapcntlikenosa = value;
    }
    if(value_path == "cipSecTrapCntlIkeProtocolFail")
    {
        cipsectrapcntlikeprotocolfail = value;
    }
    if(value_path == "cipSecTrapCntlIkeSysFailure")
    {
        cipsectrapcntlikesysfailure = value;
    }
    if(value_path == "cipSecTrapCntlIkeTunnelStart")
    {
        cipsectrapcntliketunnelstart = value;
    }
    if(value_path == "cipSecTrapCntlIkeTunnelStop")
    {
        cipsectrapcntliketunnelstop = value;
    }
    if(value_path == "cipSecTrapCntlIpSecEarlyTunTerm")
    {
        cipsectrapcntlipsecearlytunterm = value;
    }
    if(value_path == "cipSecTrapCntlIpSecNoSa")
    {
        cipsectrapcntlipsecnosa = value;
    }
    if(value_path == "cipSecTrapCntlIpSecProtocolFail")
    {
        cipsectrapcntlipsecprotocolfail = value;
    }
    if(value_path == "cipSecTrapCntlIpSecSetUpFailure")
    {
        cipsectrapcntlipsecsetupfailure = value;
    }
    if(value_path == "cipSecTrapCntlIpSecSysFailure")
    {
        cipsectrapcntlipsecsysfailure = value;
    }
    if(value_path == "cipSecTrapCntlIpSecTunnelStart")
    {
        cipsectrapcntlipsectunnelstart = value;
    }
    if(value_path == "cipSecTrapCntlIpSecTunnelStop")
    {
        cipsectrapcntlipsectunnelstop = value;
    }
}

CiscoIpsecFlowMonitorMib::Cikepeertable::Cikepeertable()
{
    yang_name = "cikePeerTable"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB";
}

CiscoIpsecFlowMonitorMib::Cikepeertable::~Cikepeertable()
{
}

bool CiscoIpsecFlowMonitorMib::Cikepeertable::has_data() const
{
    for (std::size_t index=0; index<cikepeerentry_.size(); index++)
    {
        if(cikepeerentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpsecFlowMonitorMib::Cikepeertable::has_operation() const
{
    for (std::size_t index=0; index<cikepeerentry_.size(); index++)
    {
        if(cikepeerentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIpsecFlowMonitorMib::Cikepeertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cikePeerTable";

    return path_buffer.str();

}

const EntityPath CiscoIpsecFlowMonitorMib::Cikepeertable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecFlowMonitorMib::Cikepeertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cikePeerEntry")
    {
        for(auto const & c : cikepeerentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpsecFlowMonitorMib::Cikepeertable::Cikepeerentry>();
        c->parent = this;
        cikepeerentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecFlowMonitorMib::Cikepeertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cikepeerentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpsecFlowMonitorMib::Cikepeertable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIpsecFlowMonitorMib::Cikepeertable::Cikepeerentry::Cikepeerentry()
    :
    cikepeerlocaltype{YType::enumeration, "cikePeerLocalType"},
    cikepeerlocalvalue{YType::str, "cikePeerLocalValue"},
    cikepeerremotetype{YType::enumeration, "cikePeerRemoteType"},
    cikepeerremotevalue{YType::str, "cikePeerRemoteValue"},
    cikepeerintindex{YType::int32, "cikePeerIntIndex"},
    cikepeeractivetime{YType::int32, "cikePeerActiveTime"},
    cikepeeractivetunnelindex{YType::int32, "cikePeerActiveTunnelIndex"},
    cikepeerlocaladdr{YType::str, "cikePeerLocalAddr"},
    cikepeerremoteaddr{YType::str, "cikePeerRemoteAddr"}
{
    yang_name = "cikePeerEntry"; yang_parent_name = "cikePeerTable";
}

CiscoIpsecFlowMonitorMib::Cikepeertable::Cikepeerentry::~Cikepeerentry()
{
}

bool CiscoIpsecFlowMonitorMib::Cikepeertable::Cikepeerentry::has_data() const
{
    return cikepeerlocaltype.is_set
	|| cikepeerlocalvalue.is_set
	|| cikepeerremotetype.is_set
	|| cikepeerremotevalue.is_set
	|| cikepeerintindex.is_set
	|| cikepeeractivetime.is_set
	|| cikepeeractivetunnelindex.is_set
	|| cikepeerlocaladdr.is_set
	|| cikepeerremoteaddr.is_set;
}

bool CiscoIpsecFlowMonitorMib::Cikepeertable::Cikepeerentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cikepeerlocaltype.operation)
	|| is_set(cikepeerlocalvalue.operation)
	|| is_set(cikepeerremotetype.operation)
	|| is_set(cikepeerremotevalue.operation)
	|| is_set(cikepeerintindex.operation)
	|| is_set(cikepeeractivetime.operation)
	|| is_set(cikepeeractivetunnelindex.operation)
	|| is_set(cikepeerlocaladdr.operation)
	|| is_set(cikepeerremoteaddr.operation);
}

std::string CiscoIpsecFlowMonitorMib::Cikepeertable::Cikepeerentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cikePeerEntry" <<"[cikePeerLocalType='" <<cikepeerlocaltype <<"']" <<"[cikePeerLocalValue='" <<cikepeerlocalvalue <<"']" <<"[cikePeerRemoteType='" <<cikepeerremotetype <<"']" <<"[cikePeerRemoteValue='" <<cikepeerremotevalue <<"']" <<"[cikePeerIntIndex='" <<cikepeerintindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpsecFlowMonitorMib::Cikepeertable::Cikepeerentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/cikePeerTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cikepeerlocaltype.is_set || is_set(cikepeerlocaltype.operation)) leaf_name_data.push_back(cikepeerlocaltype.get_name_leafdata());
    if (cikepeerlocalvalue.is_set || is_set(cikepeerlocalvalue.operation)) leaf_name_data.push_back(cikepeerlocalvalue.get_name_leafdata());
    if (cikepeerremotetype.is_set || is_set(cikepeerremotetype.operation)) leaf_name_data.push_back(cikepeerremotetype.get_name_leafdata());
    if (cikepeerremotevalue.is_set || is_set(cikepeerremotevalue.operation)) leaf_name_data.push_back(cikepeerremotevalue.get_name_leafdata());
    if (cikepeerintindex.is_set || is_set(cikepeerintindex.operation)) leaf_name_data.push_back(cikepeerintindex.get_name_leafdata());
    if (cikepeeractivetime.is_set || is_set(cikepeeractivetime.operation)) leaf_name_data.push_back(cikepeeractivetime.get_name_leafdata());
    if (cikepeeractivetunnelindex.is_set || is_set(cikepeeractivetunnelindex.operation)) leaf_name_data.push_back(cikepeeractivetunnelindex.get_name_leafdata());
    if (cikepeerlocaladdr.is_set || is_set(cikepeerlocaladdr.operation)) leaf_name_data.push_back(cikepeerlocaladdr.get_name_leafdata());
    if (cikepeerremoteaddr.is_set || is_set(cikepeerremoteaddr.operation)) leaf_name_data.push_back(cikepeerremoteaddr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecFlowMonitorMib::Cikepeertable::Cikepeerentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecFlowMonitorMib::Cikepeertable::Cikepeerentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpsecFlowMonitorMib::Cikepeertable::Cikepeerentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cikePeerLocalType")
    {
        cikepeerlocaltype = value;
    }
    if(value_path == "cikePeerLocalValue")
    {
        cikepeerlocalvalue = value;
    }
    if(value_path == "cikePeerRemoteType")
    {
        cikepeerremotetype = value;
    }
    if(value_path == "cikePeerRemoteValue")
    {
        cikepeerremotevalue = value;
    }
    if(value_path == "cikePeerIntIndex")
    {
        cikepeerintindex = value;
    }
    if(value_path == "cikePeerActiveTime")
    {
        cikepeeractivetime = value;
    }
    if(value_path == "cikePeerActiveTunnelIndex")
    {
        cikepeeractivetunnelindex = value;
    }
    if(value_path == "cikePeerLocalAddr")
    {
        cikepeerlocaladdr = value;
    }
    if(value_path == "cikePeerRemoteAddr")
    {
        cikepeerremoteaddr = value;
    }
}

CiscoIpsecFlowMonitorMib::Ciketunneltable::Ciketunneltable()
{
    yang_name = "cikeTunnelTable"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB";
}

CiscoIpsecFlowMonitorMib::Ciketunneltable::~Ciketunneltable()
{
}

bool CiscoIpsecFlowMonitorMib::Ciketunneltable::has_data() const
{
    for (std::size_t index=0; index<ciketunnelentry_.size(); index++)
    {
        if(ciketunnelentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpsecFlowMonitorMib::Ciketunneltable::has_operation() const
{
    for (std::size_t index=0; index<ciketunnelentry_.size(); index++)
    {
        if(ciketunnelentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIpsecFlowMonitorMib::Ciketunneltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cikeTunnelTable";

    return path_buffer.str();

}

const EntityPath CiscoIpsecFlowMonitorMib::Ciketunneltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecFlowMonitorMib::Ciketunneltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cikeTunnelEntry")
    {
        for(auto const & c : ciketunnelentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpsecFlowMonitorMib::Ciketunneltable::Ciketunnelentry>();
        c->parent = this;
        ciketunnelentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecFlowMonitorMib::Ciketunneltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciketunnelentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpsecFlowMonitorMib::Ciketunneltable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIpsecFlowMonitorMib::Ciketunneltable::Ciketunnelentry::Ciketunnelentry()
    :
    ciketunindex{YType::int32, "cikeTunIndex"},
    ciketunactivetime{YType::int32, "cikeTunActiveTime"},
    ciketunauthmethod{YType::enumeration, "cikeTunAuthMethod"},
    ciketundiffhellmangrp{YType::enumeration, "cikeTunDiffHellmanGrp"},
    ciketunencryptalgo{YType::enumeration, "cikeTunEncryptAlgo"},
    ciketunhashalgo{YType::enumeration, "cikeTunHashAlgo"},
    ciketunindroppkts{YType::uint32, "cikeTunInDropPkts"},
    ciketuninnotifys{YType::uint32, "cikeTunInNotifys"},
    ciketuninoctets{YType::uint32, "cikeTunInOctets"},
    ciketuninp2exchginvalids{YType::uint32, "cikeTunInP2ExchgInvalids"},
    ciketuninp2exchgrejects{YType::uint32, "cikeTunInP2ExchgRejects"},
    ciketuninp2exchgs{YType::uint32, "cikeTunInP2Exchgs"},
    ciketuninp2sadelrequests{YType::uint32, "cikeTunInP2SaDelRequests"},
    ciketuninpkts{YType::uint32, "cikeTunInPkts"},
    ciketunlifetime{YType::int32, "cikeTunLifeTime"},
    ciketunlocaladdr{YType::str, "cikeTunLocalAddr"},
    ciketunlocalname{YType::str, "cikeTunLocalName"},
    ciketunlocaltype{YType::enumeration, "cikeTunLocalType"},
    ciketunlocalvalue{YType::str, "cikeTunLocalValue"},
    ciketunnegomode{YType::enumeration, "cikeTunNegoMode"},
    ciketunoutdroppkts{YType::uint32, "cikeTunOutDropPkts"},
    ciketunoutnotifys{YType::uint32, "cikeTunOutNotifys"},
    ciketunoutoctets{YType::uint32, "cikeTunOutOctets"},
    ciketunoutp2exchginvalids{YType::uint32, "cikeTunOutP2ExchgInvalids"},
    ciketunoutp2exchgrejects{YType::uint32, "cikeTunOutP2ExchgRejects"},
    ciketunoutp2exchgs{YType::uint32, "cikeTunOutP2Exchgs"},
    ciketunoutp2sadelrequests{YType::uint32, "cikeTunOutP2SaDelRequests"},
    ciketunoutpkts{YType::uint32, "cikeTunOutPkts"},
    ciketunremoteaddr{YType::str, "cikeTunRemoteAddr"},
    ciketunremotename{YType::str, "cikeTunRemoteName"},
    ciketunremotetype{YType::enumeration, "cikeTunRemoteType"},
    ciketunremotevalue{YType::str, "cikeTunRemoteValue"},
    ciketunsarefreshthreshold{YType::int32, "cikeTunSaRefreshThreshold"},
    ciketunstatus{YType::enumeration, "cikeTunStatus"},
    ciketuntotalrefreshes{YType::uint32, "cikeTunTotalRefreshes"}
{
    yang_name = "cikeTunnelEntry"; yang_parent_name = "cikeTunnelTable";
}

CiscoIpsecFlowMonitorMib::Ciketunneltable::Ciketunnelentry::~Ciketunnelentry()
{
}

bool CiscoIpsecFlowMonitorMib::Ciketunneltable::Ciketunnelentry::has_data() const
{
    return ciketunindex.is_set
	|| ciketunactivetime.is_set
	|| ciketunauthmethod.is_set
	|| ciketundiffhellmangrp.is_set
	|| ciketunencryptalgo.is_set
	|| ciketunhashalgo.is_set
	|| ciketunindroppkts.is_set
	|| ciketuninnotifys.is_set
	|| ciketuninoctets.is_set
	|| ciketuninp2exchginvalids.is_set
	|| ciketuninp2exchgrejects.is_set
	|| ciketuninp2exchgs.is_set
	|| ciketuninp2sadelrequests.is_set
	|| ciketuninpkts.is_set
	|| ciketunlifetime.is_set
	|| ciketunlocaladdr.is_set
	|| ciketunlocalname.is_set
	|| ciketunlocaltype.is_set
	|| ciketunlocalvalue.is_set
	|| ciketunnegomode.is_set
	|| ciketunoutdroppkts.is_set
	|| ciketunoutnotifys.is_set
	|| ciketunoutoctets.is_set
	|| ciketunoutp2exchginvalids.is_set
	|| ciketunoutp2exchgrejects.is_set
	|| ciketunoutp2exchgs.is_set
	|| ciketunoutp2sadelrequests.is_set
	|| ciketunoutpkts.is_set
	|| ciketunremoteaddr.is_set
	|| ciketunremotename.is_set
	|| ciketunremotetype.is_set
	|| ciketunremotevalue.is_set
	|| ciketunsarefreshthreshold.is_set
	|| ciketunstatus.is_set
	|| ciketuntotalrefreshes.is_set;
}

bool CiscoIpsecFlowMonitorMib::Ciketunneltable::Ciketunnelentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ciketunindex.operation)
	|| is_set(ciketunactivetime.operation)
	|| is_set(ciketunauthmethod.operation)
	|| is_set(ciketundiffhellmangrp.operation)
	|| is_set(ciketunencryptalgo.operation)
	|| is_set(ciketunhashalgo.operation)
	|| is_set(ciketunindroppkts.operation)
	|| is_set(ciketuninnotifys.operation)
	|| is_set(ciketuninoctets.operation)
	|| is_set(ciketuninp2exchginvalids.operation)
	|| is_set(ciketuninp2exchgrejects.operation)
	|| is_set(ciketuninp2exchgs.operation)
	|| is_set(ciketuninp2sadelrequests.operation)
	|| is_set(ciketuninpkts.operation)
	|| is_set(ciketunlifetime.operation)
	|| is_set(ciketunlocaladdr.operation)
	|| is_set(ciketunlocalname.operation)
	|| is_set(ciketunlocaltype.operation)
	|| is_set(ciketunlocalvalue.operation)
	|| is_set(ciketunnegomode.operation)
	|| is_set(ciketunoutdroppkts.operation)
	|| is_set(ciketunoutnotifys.operation)
	|| is_set(ciketunoutoctets.operation)
	|| is_set(ciketunoutp2exchginvalids.operation)
	|| is_set(ciketunoutp2exchgrejects.operation)
	|| is_set(ciketunoutp2exchgs.operation)
	|| is_set(ciketunoutp2sadelrequests.operation)
	|| is_set(ciketunoutpkts.operation)
	|| is_set(ciketunremoteaddr.operation)
	|| is_set(ciketunremotename.operation)
	|| is_set(ciketunremotetype.operation)
	|| is_set(ciketunremotevalue.operation)
	|| is_set(ciketunsarefreshthreshold.operation)
	|| is_set(ciketunstatus.operation)
	|| is_set(ciketuntotalrefreshes.operation);
}

std::string CiscoIpsecFlowMonitorMib::Ciketunneltable::Ciketunnelentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cikeTunnelEntry" <<"[cikeTunIndex='" <<ciketunindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpsecFlowMonitorMib::Ciketunneltable::Ciketunnelentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/cikeTunnelTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciketunindex.is_set || is_set(ciketunindex.operation)) leaf_name_data.push_back(ciketunindex.get_name_leafdata());
    if (ciketunactivetime.is_set || is_set(ciketunactivetime.operation)) leaf_name_data.push_back(ciketunactivetime.get_name_leafdata());
    if (ciketunauthmethod.is_set || is_set(ciketunauthmethod.operation)) leaf_name_data.push_back(ciketunauthmethod.get_name_leafdata());
    if (ciketundiffhellmangrp.is_set || is_set(ciketundiffhellmangrp.operation)) leaf_name_data.push_back(ciketundiffhellmangrp.get_name_leafdata());
    if (ciketunencryptalgo.is_set || is_set(ciketunencryptalgo.operation)) leaf_name_data.push_back(ciketunencryptalgo.get_name_leafdata());
    if (ciketunhashalgo.is_set || is_set(ciketunhashalgo.operation)) leaf_name_data.push_back(ciketunhashalgo.get_name_leafdata());
    if (ciketunindroppkts.is_set || is_set(ciketunindroppkts.operation)) leaf_name_data.push_back(ciketunindroppkts.get_name_leafdata());
    if (ciketuninnotifys.is_set || is_set(ciketuninnotifys.operation)) leaf_name_data.push_back(ciketuninnotifys.get_name_leafdata());
    if (ciketuninoctets.is_set || is_set(ciketuninoctets.operation)) leaf_name_data.push_back(ciketuninoctets.get_name_leafdata());
    if (ciketuninp2exchginvalids.is_set || is_set(ciketuninp2exchginvalids.operation)) leaf_name_data.push_back(ciketuninp2exchginvalids.get_name_leafdata());
    if (ciketuninp2exchgrejects.is_set || is_set(ciketuninp2exchgrejects.operation)) leaf_name_data.push_back(ciketuninp2exchgrejects.get_name_leafdata());
    if (ciketuninp2exchgs.is_set || is_set(ciketuninp2exchgs.operation)) leaf_name_data.push_back(ciketuninp2exchgs.get_name_leafdata());
    if (ciketuninp2sadelrequests.is_set || is_set(ciketuninp2sadelrequests.operation)) leaf_name_data.push_back(ciketuninp2sadelrequests.get_name_leafdata());
    if (ciketuninpkts.is_set || is_set(ciketuninpkts.operation)) leaf_name_data.push_back(ciketuninpkts.get_name_leafdata());
    if (ciketunlifetime.is_set || is_set(ciketunlifetime.operation)) leaf_name_data.push_back(ciketunlifetime.get_name_leafdata());
    if (ciketunlocaladdr.is_set || is_set(ciketunlocaladdr.operation)) leaf_name_data.push_back(ciketunlocaladdr.get_name_leafdata());
    if (ciketunlocalname.is_set || is_set(ciketunlocalname.operation)) leaf_name_data.push_back(ciketunlocalname.get_name_leafdata());
    if (ciketunlocaltype.is_set || is_set(ciketunlocaltype.operation)) leaf_name_data.push_back(ciketunlocaltype.get_name_leafdata());
    if (ciketunlocalvalue.is_set || is_set(ciketunlocalvalue.operation)) leaf_name_data.push_back(ciketunlocalvalue.get_name_leafdata());
    if (ciketunnegomode.is_set || is_set(ciketunnegomode.operation)) leaf_name_data.push_back(ciketunnegomode.get_name_leafdata());
    if (ciketunoutdroppkts.is_set || is_set(ciketunoutdroppkts.operation)) leaf_name_data.push_back(ciketunoutdroppkts.get_name_leafdata());
    if (ciketunoutnotifys.is_set || is_set(ciketunoutnotifys.operation)) leaf_name_data.push_back(ciketunoutnotifys.get_name_leafdata());
    if (ciketunoutoctets.is_set || is_set(ciketunoutoctets.operation)) leaf_name_data.push_back(ciketunoutoctets.get_name_leafdata());
    if (ciketunoutp2exchginvalids.is_set || is_set(ciketunoutp2exchginvalids.operation)) leaf_name_data.push_back(ciketunoutp2exchginvalids.get_name_leafdata());
    if (ciketunoutp2exchgrejects.is_set || is_set(ciketunoutp2exchgrejects.operation)) leaf_name_data.push_back(ciketunoutp2exchgrejects.get_name_leafdata());
    if (ciketunoutp2exchgs.is_set || is_set(ciketunoutp2exchgs.operation)) leaf_name_data.push_back(ciketunoutp2exchgs.get_name_leafdata());
    if (ciketunoutp2sadelrequests.is_set || is_set(ciketunoutp2sadelrequests.operation)) leaf_name_data.push_back(ciketunoutp2sadelrequests.get_name_leafdata());
    if (ciketunoutpkts.is_set || is_set(ciketunoutpkts.operation)) leaf_name_data.push_back(ciketunoutpkts.get_name_leafdata());
    if (ciketunremoteaddr.is_set || is_set(ciketunremoteaddr.operation)) leaf_name_data.push_back(ciketunremoteaddr.get_name_leafdata());
    if (ciketunremotename.is_set || is_set(ciketunremotename.operation)) leaf_name_data.push_back(ciketunremotename.get_name_leafdata());
    if (ciketunremotetype.is_set || is_set(ciketunremotetype.operation)) leaf_name_data.push_back(ciketunremotetype.get_name_leafdata());
    if (ciketunremotevalue.is_set || is_set(ciketunremotevalue.operation)) leaf_name_data.push_back(ciketunremotevalue.get_name_leafdata());
    if (ciketunsarefreshthreshold.is_set || is_set(ciketunsarefreshthreshold.operation)) leaf_name_data.push_back(ciketunsarefreshthreshold.get_name_leafdata());
    if (ciketunstatus.is_set || is_set(ciketunstatus.operation)) leaf_name_data.push_back(ciketunstatus.get_name_leafdata());
    if (ciketuntotalrefreshes.is_set || is_set(ciketuntotalrefreshes.operation)) leaf_name_data.push_back(ciketuntotalrefreshes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecFlowMonitorMib::Ciketunneltable::Ciketunnelentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecFlowMonitorMib::Ciketunneltable::Ciketunnelentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpsecFlowMonitorMib::Ciketunneltable::Ciketunnelentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cikeTunIndex")
    {
        ciketunindex = value;
    }
    if(value_path == "cikeTunActiveTime")
    {
        ciketunactivetime = value;
    }
    if(value_path == "cikeTunAuthMethod")
    {
        ciketunauthmethod = value;
    }
    if(value_path == "cikeTunDiffHellmanGrp")
    {
        ciketundiffhellmangrp = value;
    }
    if(value_path == "cikeTunEncryptAlgo")
    {
        ciketunencryptalgo = value;
    }
    if(value_path == "cikeTunHashAlgo")
    {
        ciketunhashalgo = value;
    }
    if(value_path == "cikeTunInDropPkts")
    {
        ciketunindroppkts = value;
    }
    if(value_path == "cikeTunInNotifys")
    {
        ciketuninnotifys = value;
    }
    if(value_path == "cikeTunInOctets")
    {
        ciketuninoctets = value;
    }
    if(value_path == "cikeTunInP2ExchgInvalids")
    {
        ciketuninp2exchginvalids = value;
    }
    if(value_path == "cikeTunInP2ExchgRejects")
    {
        ciketuninp2exchgrejects = value;
    }
    if(value_path == "cikeTunInP2Exchgs")
    {
        ciketuninp2exchgs = value;
    }
    if(value_path == "cikeTunInP2SaDelRequests")
    {
        ciketuninp2sadelrequests = value;
    }
    if(value_path == "cikeTunInPkts")
    {
        ciketuninpkts = value;
    }
    if(value_path == "cikeTunLifeTime")
    {
        ciketunlifetime = value;
    }
    if(value_path == "cikeTunLocalAddr")
    {
        ciketunlocaladdr = value;
    }
    if(value_path == "cikeTunLocalName")
    {
        ciketunlocalname = value;
    }
    if(value_path == "cikeTunLocalType")
    {
        ciketunlocaltype = value;
    }
    if(value_path == "cikeTunLocalValue")
    {
        ciketunlocalvalue = value;
    }
    if(value_path == "cikeTunNegoMode")
    {
        ciketunnegomode = value;
    }
    if(value_path == "cikeTunOutDropPkts")
    {
        ciketunoutdroppkts = value;
    }
    if(value_path == "cikeTunOutNotifys")
    {
        ciketunoutnotifys = value;
    }
    if(value_path == "cikeTunOutOctets")
    {
        ciketunoutoctets = value;
    }
    if(value_path == "cikeTunOutP2ExchgInvalids")
    {
        ciketunoutp2exchginvalids = value;
    }
    if(value_path == "cikeTunOutP2ExchgRejects")
    {
        ciketunoutp2exchgrejects = value;
    }
    if(value_path == "cikeTunOutP2Exchgs")
    {
        ciketunoutp2exchgs = value;
    }
    if(value_path == "cikeTunOutP2SaDelRequests")
    {
        ciketunoutp2sadelrequests = value;
    }
    if(value_path == "cikeTunOutPkts")
    {
        ciketunoutpkts = value;
    }
    if(value_path == "cikeTunRemoteAddr")
    {
        ciketunremoteaddr = value;
    }
    if(value_path == "cikeTunRemoteName")
    {
        ciketunremotename = value;
    }
    if(value_path == "cikeTunRemoteType")
    {
        ciketunremotetype = value;
    }
    if(value_path == "cikeTunRemoteValue")
    {
        ciketunremotevalue = value;
    }
    if(value_path == "cikeTunSaRefreshThreshold")
    {
        ciketunsarefreshthreshold = value;
    }
    if(value_path == "cikeTunStatus")
    {
        ciketunstatus = value;
    }
    if(value_path == "cikeTunTotalRefreshes")
    {
        ciketuntotalrefreshes = value;
    }
}

CiscoIpsecFlowMonitorMib::Cikepeercorrtable::Cikepeercorrtable()
{
    yang_name = "cikePeerCorrTable"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB";
}

CiscoIpsecFlowMonitorMib::Cikepeercorrtable::~Cikepeercorrtable()
{
}

bool CiscoIpsecFlowMonitorMib::Cikepeercorrtable::has_data() const
{
    for (std::size_t index=0; index<cikepeercorrentry_.size(); index++)
    {
        if(cikepeercorrentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpsecFlowMonitorMib::Cikepeercorrtable::has_operation() const
{
    for (std::size_t index=0; index<cikepeercorrentry_.size(); index++)
    {
        if(cikepeercorrentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIpsecFlowMonitorMib::Cikepeercorrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cikePeerCorrTable";

    return path_buffer.str();

}

const EntityPath CiscoIpsecFlowMonitorMib::Cikepeercorrtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecFlowMonitorMib::Cikepeercorrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cikePeerCorrEntry")
    {
        for(auto const & c : cikepeercorrentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpsecFlowMonitorMib::Cikepeercorrtable::Cikepeercorrentry>();
        c->parent = this;
        cikepeercorrentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecFlowMonitorMib::Cikepeercorrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cikepeercorrentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpsecFlowMonitorMib::Cikepeercorrtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIpsecFlowMonitorMib::Cikepeercorrtable::Cikepeercorrentry::Cikepeercorrentry()
    :
    cikepeercorrlocaltype{YType::enumeration, "cikePeerCorrLocalType"},
    cikepeercorrlocalvalue{YType::str, "cikePeerCorrLocalValue"},
    cikepeercorrremotetype{YType::enumeration, "cikePeerCorrRemoteType"},
    cikepeercorrremotevalue{YType::str, "cikePeerCorrRemoteValue"},
    cikepeercorrintindex{YType::int32, "cikePeerCorrIntIndex"},
    cikepeercorrseqnum{YType::int32, "cikePeerCorrSeqNum"},
    cikepeercorripsectunindex{YType::int32, "cikePeerCorrIpSecTunIndex"}
{
    yang_name = "cikePeerCorrEntry"; yang_parent_name = "cikePeerCorrTable";
}

CiscoIpsecFlowMonitorMib::Cikepeercorrtable::Cikepeercorrentry::~Cikepeercorrentry()
{
}

bool CiscoIpsecFlowMonitorMib::Cikepeercorrtable::Cikepeercorrentry::has_data() const
{
    return cikepeercorrlocaltype.is_set
	|| cikepeercorrlocalvalue.is_set
	|| cikepeercorrremotetype.is_set
	|| cikepeercorrremotevalue.is_set
	|| cikepeercorrintindex.is_set
	|| cikepeercorrseqnum.is_set
	|| cikepeercorripsectunindex.is_set;
}

bool CiscoIpsecFlowMonitorMib::Cikepeercorrtable::Cikepeercorrentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cikepeercorrlocaltype.operation)
	|| is_set(cikepeercorrlocalvalue.operation)
	|| is_set(cikepeercorrremotetype.operation)
	|| is_set(cikepeercorrremotevalue.operation)
	|| is_set(cikepeercorrintindex.operation)
	|| is_set(cikepeercorrseqnum.operation)
	|| is_set(cikepeercorripsectunindex.operation);
}

std::string CiscoIpsecFlowMonitorMib::Cikepeercorrtable::Cikepeercorrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cikePeerCorrEntry" <<"[cikePeerCorrLocalType='" <<cikepeercorrlocaltype <<"']" <<"[cikePeerCorrLocalValue='" <<cikepeercorrlocalvalue <<"']" <<"[cikePeerCorrRemoteType='" <<cikepeercorrremotetype <<"']" <<"[cikePeerCorrRemoteValue='" <<cikepeercorrremotevalue <<"']" <<"[cikePeerCorrIntIndex='" <<cikepeercorrintindex <<"']" <<"[cikePeerCorrSeqNum='" <<cikepeercorrseqnum <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpsecFlowMonitorMib::Cikepeercorrtable::Cikepeercorrentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/cikePeerCorrTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cikepeercorrlocaltype.is_set || is_set(cikepeercorrlocaltype.operation)) leaf_name_data.push_back(cikepeercorrlocaltype.get_name_leafdata());
    if (cikepeercorrlocalvalue.is_set || is_set(cikepeercorrlocalvalue.operation)) leaf_name_data.push_back(cikepeercorrlocalvalue.get_name_leafdata());
    if (cikepeercorrremotetype.is_set || is_set(cikepeercorrremotetype.operation)) leaf_name_data.push_back(cikepeercorrremotetype.get_name_leafdata());
    if (cikepeercorrremotevalue.is_set || is_set(cikepeercorrremotevalue.operation)) leaf_name_data.push_back(cikepeercorrremotevalue.get_name_leafdata());
    if (cikepeercorrintindex.is_set || is_set(cikepeercorrintindex.operation)) leaf_name_data.push_back(cikepeercorrintindex.get_name_leafdata());
    if (cikepeercorrseqnum.is_set || is_set(cikepeercorrseqnum.operation)) leaf_name_data.push_back(cikepeercorrseqnum.get_name_leafdata());
    if (cikepeercorripsectunindex.is_set || is_set(cikepeercorripsectunindex.operation)) leaf_name_data.push_back(cikepeercorripsectunindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecFlowMonitorMib::Cikepeercorrtable::Cikepeercorrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecFlowMonitorMib::Cikepeercorrtable::Cikepeercorrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpsecFlowMonitorMib::Cikepeercorrtable::Cikepeercorrentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cikePeerCorrLocalType")
    {
        cikepeercorrlocaltype = value;
    }
    if(value_path == "cikePeerCorrLocalValue")
    {
        cikepeercorrlocalvalue = value;
    }
    if(value_path == "cikePeerCorrRemoteType")
    {
        cikepeercorrremotetype = value;
    }
    if(value_path == "cikePeerCorrRemoteValue")
    {
        cikepeercorrremotevalue = value;
    }
    if(value_path == "cikePeerCorrIntIndex")
    {
        cikepeercorrintindex = value;
    }
    if(value_path == "cikePeerCorrSeqNum")
    {
        cikepeercorrseqnum = value;
    }
    if(value_path == "cikePeerCorrIpSecTunIndex")
    {
        cikepeercorripsectunindex = value;
    }
}

CiscoIpsecFlowMonitorMib::Cikephase1Gwstatstable::Cikephase1Gwstatstable()
{
    yang_name = "cikePhase1GWStatsTable"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB";
}

CiscoIpsecFlowMonitorMib::Cikephase1Gwstatstable::~Cikephase1Gwstatstable()
{
}

bool CiscoIpsecFlowMonitorMib::Cikephase1Gwstatstable::has_data() const
{
    for (std::size_t index=0; index<cikephase1gwstatsentry_.size(); index++)
    {
        if(cikephase1gwstatsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpsecFlowMonitorMib::Cikephase1Gwstatstable::has_operation() const
{
    for (std::size_t index=0; index<cikephase1gwstatsentry_.size(); index++)
    {
        if(cikephase1gwstatsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIpsecFlowMonitorMib::Cikephase1Gwstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cikePhase1GWStatsTable";

    return path_buffer.str();

}

const EntityPath CiscoIpsecFlowMonitorMib::Cikephase1Gwstatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecFlowMonitorMib::Cikephase1Gwstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cikePhase1GWStatsEntry")
    {
        for(auto const & c : cikephase1gwstatsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpsecFlowMonitorMib::Cikephase1Gwstatstable::Cikephase1Gwstatsentry>();
        c->parent = this;
        cikephase1gwstatsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecFlowMonitorMib::Cikephase1Gwstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cikephase1gwstatsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpsecFlowMonitorMib::Cikephase1Gwstatstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIpsecFlowMonitorMib::Cikephase1Gwstatstable::Cikephase1Gwstatsentry::Cikephase1Gwstatsentry()
    :
    cmgwindex{YType::str, "cmgwIndex"},
    cikephase1gwactivetunnels{YType::uint32, "cikePhase1GWActiveTunnels"},
    cikephase1gwauthfails{YType::uint32, "cikePhase1GWAuthFails"},
    cikephase1gwdecryptfails{YType::uint32, "cikePhase1GWDecryptFails"},
    cikephase1gwhashvalidfails{YType::uint32, "cikePhase1GWHashValidFails"},
    cikephase1gwindroppkts{YType::uint32, "cikePhase1GWInDropPkts"},
    cikephase1gwinittunnelfails{YType::uint32, "cikePhase1GWInitTunnelFails"},
    cikephase1gwinittunnels{YType::uint32, "cikePhase1GWInitTunnels"},
    cikephase1gwinnotifys{YType::uint32, "cikePhase1GWInNotifys"},
    cikephase1gwinoctets{YType::uint32, "cikePhase1GWInOctets"},
    cikephase1gwinp2exchginvalids{YType::uint32, "cikePhase1GWInP2ExchgInvalids"},
    cikephase1gwinp2exchgrejects{YType::uint32, "cikePhase1GWInP2ExchgRejects"},
    cikephase1gwinp2exchgs{YType::uint32, "cikePhase1GWInP2Exchgs"},
    cikephase1gwinp2sadelrequests{YType::uint32, "cikePhase1GWInP2SaDelRequests"},
    cikephase1gwinpkts{YType::uint32, "cikePhase1GWInPkts"},
    cikephase1gwnosafails{YType::uint32, "cikePhase1GWNoSaFails"},
    cikephase1gwoutdroppkts{YType::uint32, "cikePhase1GWOutDropPkts"},
    cikephase1gwoutnotifys{YType::uint32, "cikePhase1GWOutNotifys"},
    cikephase1gwoutoctets{YType::uint32, "cikePhase1GWOutOctets"},
    cikephase1gwoutp2exchginvalids{YType::uint32, "cikePhase1GWOutP2ExchgInvalids"},
    cikephase1gwoutp2exchgrejects{YType::uint32, "cikePhase1GWOutP2ExchgRejects"},
    cikephase1gwoutp2exchgs{YType::uint32, "cikePhase1GWOutP2Exchgs"},
    cikephase1gwoutp2sadelrequests{YType::uint32, "cikePhase1GWOutP2SaDelRequests"},
    cikephase1gwoutpkts{YType::uint32, "cikePhase1GWOutPkts"},
    cikephase1gwprevioustunnels{YType::uint32, "cikePhase1GWPreviousTunnels"},
    cikephase1gwresptunnelfails{YType::uint32, "cikePhase1GWRespTunnelFails"},
    cikephase1gwsyscapfails{YType::uint32, "cikePhase1GWSysCapFails"}
{
    yang_name = "cikePhase1GWStatsEntry"; yang_parent_name = "cikePhase1GWStatsTable";
}

CiscoIpsecFlowMonitorMib::Cikephase1Gwstatstable::Cikephase1Gwstatsentry::~Cikephase1Gwstatsentry()
{
}

bool CiscoIpsecFlowMonitorMib::Cikephase1Gwstatstable::Cikephase1Gwstatsentry::has_data() const
{
    return cmgwindex.is_set
	|| cikephase1gwactivetunnels.is_set
	|| cikephase1gwauthfails.is_set
	|| cikephase1gwdecryptfails.is_set
	|| cikephase1gwhashvalidfails.is_set
	|| cikephase1gwindroppkts.is_set
	|| cikephase1gwinittunnelfails.is_set
	|| cikephase1gwinittunnels.is_set
	|| cikephase1gwinnotifys.is_set
	|| cikephase1gwinoctets.is_set
	|| cikephase1gwinp2exchginvalids.is_set
	|| cikephase1gwinp2exchgrejects.is_set
	|| cikephase1gwinp2exchgs.is_set
	|| cikephase1gwinp2sadelrequests.is_set
	|| cikephase1gwinpkts.is_set
	|| cikephase1gwnosafails.is_set
	|| cikephase1gwoutdroppkts.is_set
	|| cikephase1gwoutnotifys.is_set
	|| cikephase1gwoutoctets.is_set
	|| cikephase1gwoutp2exchginvalids.is_set
	|| cikephase1gwoutp2exchgrejects.is_set
	|| cikephase1gwoutp2exchgs.is_set
	|| cikephase1gwoutp2sadelrequests.is_set
	|| cikephase1gwoutpkts.is_set
	|| cikephase1gwprevioustunnels.is_set
	|| cikephase1gwresptunnelfails.is_set
	|| cikephase1gwsyscapfails.is_set;
}

bool CiscoIpsecFlowMonitorMib::Cikephase1Gwstatstable::Cikephase1Gwstatsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cmgwindex.operation)
	|| is_set(cikephase1gwactivetunnels.operation)
	|| is_set(cikephase1gwauthfails.operation)
	|| is_set(cikephase1gwdecryptfails.operation)
	|| is_set(cikephase1gwhashvalidfails.operation)
	|| is_set(cikephase1gwindroppkts.operation)
	|| is_set(cikephase1gwinittunnelfails.operation)
	|| is_set(cikephase1gwinittunnels.operation)
	|| is_set(cikephase1gwinnotifys.operation)
	|| is_set(cikephase1gwinoctets.operation)
	|| is_set(cikephase1gwinp2exchginvalids.operation)
	|| is_set(cikephase1gwinp2exchgrejects.operation)
	|| is_set(cikephase1gwinp2exchgs.operation)
	|| is_set(cikephase1gwinp2sadelrequests.operation)
	|| is_set(cikephase1gwinpkts.operation)
	|| is_set(cikephase1gwnosafails.operation)
	|| is_set(cikephase1gwoutdroppkts.operation)
	|| is_set(cikephase1gwoutnotifys.operation)
	|| is_set(cikephase1gwoutoctets.operation)
	|| is_set(cikephase1gwoutp2exchginvalids.operation)
	|| is_set(cikephase1gwoutp2exchgrejects.operation)
	|| is_set(cikephase1gwoutp2exchgs.operation)
	|| is_set(cikephase1gwoutp2sadelrequests.operation)
	|| is_set(cikephase1gwoutpkts.operation)
	|| is_set(cikephase1gwprevioustunnels.operation)
	|| is_set(cikephase1gwresptunnelfails.operation)
	|| is_set(cikephase1gwsyscapfails.operation);
}

std::string CiscoIpsecFlowMonitorMib::Cikephase1Gwstatstable::Cikephase1Gwstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cikePhase1GWStatsEntry" <<"[cmgwIndex='" <<cmgwindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpsecFlowMonitorMib::Cikephase1Gwstatstable::Cikephase1Gwstatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/cikePhase1GWStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmgwindex.is_set || is_set(cmgwindex.operation)) leaf_name_data.push_back(cmgwindex.get_name_leafdata());
    if (cikephase1gwactivetunnels.is_set || is_set(cikephase1gwactivetunnels.operation)) leaf_name_data.push_back(cikephase1gwactivetunnels.get_name_leafdata());
    if (cikephase1gwauthfails.is_set || is_set(cikephase1gwauthfails.operation)) leaf_name_data.push_back(cikephase1gwauthfails.get_name_leafdata());
    if (cikephase1gwdecryptfails.is_set || is_set(cikephase1gwdecryptfails.operation)) leaf_name_data.push_back(cikephase1gwdecryptfails.get_name_leafdata());
    if (cikephase1gwhashvalidfails.is_set || is_set(cikephase1gwhashvalidfails.operation)) leaf_name_data.push_back(cikephase1gwhashvalidfails.get_name_leafdata());
    if (cikephase1gwindroppkts.is_set || is_set(cikephase1gwindroppkts.operation)) leaf_name_data.push_back(cikephase1gwindroppkts.get_name_leafdata());
    if (cikephase1gwinittunnelfails.is_set || is_set(cikephase1gwinittunnelfails.operation)) leaf_name_data.push_back(cikephase1gwinittunnelfails.get_name_leafdata());
    if (cikephase1gwinittunnels.is_set || is_set(cikephase1gwinittunnels.operation)) leaf_name_data.push_back(cikephase1gwinittunnels.get_name_leafdata());
    if (cikephase1gwinnotifys.is_set || is_set(cikephase1gwinnotifys.operation)) leaf_name_data.push_back(cikephase1gwinnotifys.get_name_leafdata());
    if (cikephase1gwinoctets.is_set || is_set(cikephase1gwinoctets.operation)) leaf_name_data.push_back(cikephase1gwinoctets.get_name_leafdata());
    if (cikephase1gwinp2exchginvalids.is_set || is_set(cikephase1gwinp2exchginvalids.operation)) leaf_name_data.push_back(cikephase1gwinp2exchginvalids.get_name_leafdata());
    if (cikephase1gwinp2exchgrejects.is_set || is_set(cikephase1gwinp2exchgrejects.operation)) leaf_name_data.push_back(cikephase1gwinp2exchgrejects.get_name_leafdata());
    if (cikephase1gwinp2exchgs.is_set || is_set(cikephase1gwinp2exchgs.operation)) leaf_name_data.push_back(cikephase1gwinp2exchgs.get_name_leafdata());
    if (cikephase1gwinp2sadelrequests.is_set || is_set(cikephase1gwinp2sadelrequests.operation)) leaf_name_data.push_back(cikephase1gwinp2sadelrequests.get_name_leafdata());
    if (cikephase1gwinpkts.is_set || is_set(cikephase1gwinpkts.operation)) leaf_name_data.push_back(cikephase1gwinpkts.get_name_leafdata());
    if (cikephase1gwnosafails.is_set || is_set(cikephase1gwnosafails.operation)) leaf_name_data.push_back(cikephase1gwnosafails.get_name_leafdata());
    if (cikephase1gwoutdroppkts.is_set || is_set(cikephase1gwoutdroppkts.operation)) leaf_name_data.push_back(cikephase1gwoutdroppkts.get_name_leafdata());
    if (cikephase1gwoutnotifys.is_set || is_set(cikephase1gwoutnotifys.operation)) leaf_name_data.push_back(cikephase1gwoutnotifys.get_name_leafdata());
    if (cikephase1gwoutoctets.is_set || is_set(cikephase1gwoutoctets.operation)) leaf_name_data.push_back(cikephase1gwoutoctets.get_name_leafdata());
    if (cikephase1gwoutp2exchginvalids.is_set || is_set(cikephase1gwoutp2exchginvalids.operation)) leaf_name_data.push_back(cikephase1gwoutp2exchginvalids.get_name_leafdata());
    if (cikephase1gwoutp2exchgrejects.is_set || is_set(cikephase1gwoutp2exchgrejects.operation)) leaf_name_data.push_back(cikephase1gwoutp2exchgrejects.get_name_leafdata());
    if (cikephase1gwoutp2exchgs.is_set || is_set(cikephase1gwoutp2exchgs.operation)) leaf_name_data.push_back(cikephase1gwoutp2exchgs.get_name_leafdata());
    if (cikephase1gwoutp2sadelrequests.is_set || is_set(cikephase1gwoutp2sadelrequests.operation)) leaf_name_data.push_back(cikephase1gwoutp2sadelrequests.get_name_leafdata());
    if (cikephase1gwoutpkts.is_set || is_set(cikephase1gwoutpkts.operation)) leaf_name_data.push_back(cikephase1gwoutpkts.get_name_leafdata());
    if (cikephase1gwprevioustunnels.is_set || is_set(cikephase1gwprevioustunnels.operation)) leaf_name_data.push_back(cikephase1gwprevioustunnels.get_name_leafdata());
    if (cikephase1gwresptunnelfails.is_set || is_set(cikephase1gwresptunnelfails.operation)) leaf_name_data.push_back(cikephase1gwresptunnelfails.get_name_leafdata());
    if (cikephase1gwsyscapfails.is_set || is_set(cikephase1gwsyscapfails.operation)) leaf_name_data.push_back(cikephase1gwsyscapfails.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecFlowMonitorMib::Cikephase1Gwstatstable::Cikephase1Gwstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecFlowMonitorMib::Cikephase1Gwstatstable::Cikephase1Gwstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpsecFlowMonitorMib::Cikephase1Gwstatstable::Cikephase1Gwstatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cmgwIndex")
    {
        cmgwindex = value;
    }
    if(value_path == "cikePhase1GWActiveTunnels")
    {
        cikephase1gwactivetunnels = value;
    }
    if(value_path == "cikePhase1GWAuthFails")
    {
        cikephase1gwauthfails = value;
    }
    if(value_path == "cikePhase1GWDecryptFails")
    {
        cikephase1gwdecryptfails = value;
    }
    if(value_path == "cikePhase1GWHashValidFails")
    {
        cikephase1gwhashvalidfails = value;
    }
    if(value_path == "cikePhase1GWInDropPkts")
    {
        cikephase1gwindroppkts = value;
    }
    if(value_path == "cikePhase1GWInitTunnelFails")
    {
        cikephase1gwinittunnelfails = value;
    }
    if(value_path == "cikePhase1GWInitTunnels")
    {
        cikephase1gwinittunnels = value;
    }
    if(value_path == "cikePhase1GWInNotifys")
    {
        cikephase1gwinnotifys = value;
    }
    if(value_path == "cikePhase1GWInOctets")
    {
        cikephase1gwinoctets = value;
    }
    if(value_path == "cikePhase1GWInP2ExchgInvalids")
    {
        cikephase1gwinp2exchginvalids = value;
    }
    if(value_path == "cikePhase1GWInP2ExchgRejects")
    {
        cikephase1gwinp2exchgrejects = value;
    }
    if(value_path == "cikePhase1GWInP2Exchgs")
    {
        cikephase1gwinp2exchgs = value;
    }
    if(value_path == "cikePhase1GWInP2SaDelRequests")
    {
        cikephase1gwinp2sadelrequests = value;
    }
    if(value_path == "cikePhase1GWInPkts")
    {
        cikephase1gwinpkts = value;
    }
    if(value_path == "cikePhase1GWNoSaFails")
    {
        cikephase1gwnosafails = value;
    }
    if(value_path == "cikePhase1GWOutDropPkts")
    {
        cikephase1gwoutdroppkts = value;
    }
    if(value_path == "cikePhase1GWOutNotifys")
    {
        cikephase1gwoutnotifys = value;
    }
    if(value_path == "cikePhase1GWOutOctets")
    {
        cikephase1gwoutoctets = value;
    }
    if(value_path == "cikePhase1GWOutP2ExchgInvalids")
    {
        cikephase1gwoutp2exchginvalids = value;
    }
    if(value_path == "cikePhase1GWOutP2ExchgRejects")
    {
        cikephase1gwoutp2exchgrejects = value;
    }
    if(value_path == "cikePhase1GWOutP2Exchgs")
    {
        cikephase1gwoutp2exchgs = value;
    }
    if(value_path == "cikePhase1GWOutP2SaDelRequests")
    {
        cikephase1gwoutp2sadelrequests = value;
    }
    if(value_path == "cikePhase1GWOutPkts")
    {
        cikephase1gwoutpkts = value;
    }
    if(value_path == "cikePhase1GWPreviousTunnels")
    {
        cikephase1gwprevioustunnels = value;
    }
    if(value_path == "cikePhase1GWRespTunnelFails")
    {
        cikephase1gwresptunnelfails = value;
    }
    if(value_path == "cikePhase1GWSysCapFails")
    {
        cikephase1gwsyscapfails = value;
    }
}

CiscoIpsecFlowMonitorMib::Cipsectunneltable::Cipsectunneltable()
{
    yang_name = "cipSecTunnelTable"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB";
}

CiscoIpsecFlowMonitorMib::Cipsectunneltable::~Cipsectunneltable()
{
}

bool CiscoIpsecFlowMonitorMib::Cipsectunneltable::has_data() const
{
    for (std::size_t index=0; index<cipsectunnelentry_.size(); index++)
    {
        if(cipsectunnelentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpsecFlowMonitorMib::Cipsectunneltable::has_operation() const
{
    for (std::size_t index=0; index<cipsectunnelentry_.size(); index++)
    {
        if(cipsectunnelentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIpsecFlowMonitorMib::Cipsectunneltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecTunnelTable";

    return path_buffer.str();

}

const EntityPath CiscoIpsecFlowMonitorMib::Cipsectunneltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecFlowMonitorMib::Cipsectunneltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipSecTunnelEntry")
    {
        for(auto const & c : cipsectunnelentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpsecFlowMonitorMib::Cipsectunneltable::Cipsectunnelentry>();
        c->parent = this;
        cipsectunnelentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecFlowMonitorMib::Cipsectunneltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipsectunnelentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpsecFlowMonitorMib::Cipsectunneltable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIpsecFlowMonitorMib::Cipsectunneltable::Cipsectunnelentry::Cipsectunnelentry()
    :
    cipsectunindex{YType::int32, "cipSecTunIndex"},
    cipsectunactivetime{YType::int32, "cipSecTunActiveTime"},
    cipsectuncurrentsainstances{YType::uint32, "cipSecTunCurrentSaInstances"},
    cipsectunencapmode{YType::enumeration, "cipSecTunEncapMode"},
    cipsectunexpiredsainstances{YType::uint32, "cipSecTunExpiredSaInstances"},
    cipsectunhcindecompoctets{YType::uint64, "cipSecTunHcInDecompOctets"},
    cipsectunhcinoctets{YType::uint64, "cipSecTunHcInOctets"},
    cipsectunhcoutoctets{YType::uint64, "cipSecTunHcOutOctets"},
    cipsectunhcoutuncompoctets{YType::uint64, "cipSecTunHcOutUncompOctets"},
    cipsectuniketunnelalive{YType::boolean, "cipSecTunIkeTunnelAlive"},
    cipsectuniketunnelindex{YType::int32, "cipSecTunIkeTunnelIndex"},
    cipsectuninauthfails{YType::uint32, "cipSecTunInAuthFails"},
    cipsectuninauths{YType::uint32, "cipSecTunInAuths"},
    cipsectunindecompoctets{YType::uint32, "cipSecTunInDecompOctets"},
    cipsectunindecompoctwraps{YType::uint32, "cipSecTunInDecompOctWraps"},
    cipsectunindecryptfails{YType::uint32, "cipSecTunInDecryptFails"},
    cipsectunindecrypts{YType::uint32, "cipSecTunInDecrypts"},
    cipsectunindroppkts{YType::uint32, "cipSecTunInDropPkts"},
    cipsectuninoctets{YType::uint32, "cipSecTunInOctets"},
    cipsectuninoctwraps{YType::uint32, "cipSecTunInOctWraps"},
    cipsectuninpkts{YType::uint32, "cipSecTunInPkts"},
    cipsectuninreplaydroppkts{YType::uint32, "cipSecTunInReplayDropPkts"},
    cipsectuninsaahauthalgo{YType::enumeration, "cipSecTunInSaAhAuthAlgo"},
    cipsectuninsadecompalgo{YType::enumeration, "cipSecTunInSaDecompAlgo"},
    cipsectuninsadiffhellmangrp{YType::enumeration, "cipSecTunInSaDiffHellmanGrp"},
    cipsectuninsaencryptalgo{YType::enumeration, "cipSecTunInSaEncryptAlgo"},
    cipsectuninsaespauthalgo{YType::enumeration, "cipSecTunInSaEspAuthAlgo"},
    cipsectunkeytype{YType::enumeration, "cipSecTunKeyType"},
    cipsectunlifesize{YType::int32, "cipSecTunLifeSize"},
    cipsectunlifetime{YType::int32, "cipSecTunLifeTime"},
    cipsectunlocaladdr{YType::str, "cipSecTunLocalAddr"},
    cipsectunoutauthfails{YType::uint32, "cipSecTunOutAuthFails"},
    cipsectunoutauths{YType::uint32, "cipSecTunOutAuths"},
    cipsectunoutdroppkts{YType::uint32, "cipSecTunOutDropPkts"},
    cipsectunoutencryptfails{YType::uint32, "cipSecTunOutEncryptFails"},
    cipsectunoutencrypts{YType::uint32, "cipSecTunOutEncrypts"},
    cipsectunoutoctets{YType::uint32, "cipSecTunOutOctets"},
    cipsectunoutoctwraps{YType::uint32, "cipSecTunOutOctWraps"},
    cipsectunoutpkts{YType::uint32, "cipSecTunOutPkts"},
    cipsectunoutsaahauthalgo{YType::enumeration, "cipSecTunOutSaAhAuthAlgo"},
    cipsectunoutsacompalgo{YType::enumeration, "cipSecTunOutSaCompAlgo"},
    cipsectunoutsadiffhellmangrp{YType::enumeration, "cipSecTunOutSaDiffHellmanGrp"},
    cipsectunoutsaencryptalgo{YType::enumeration, "cipSecTunOutSaEncryptAlgo"},
    cipsectunoutsaespauthalgo{YType::enumeration, "cipSecTunOutSaEspAuthAlgo"},
    cipsectunoutuncompoctets{YType::uint32, "cipSecTunOutUncompOctets"},
    cipsectunoutuncompoctwraps{YType::uint32, "cipSecTunOutUncompOctWraps"},
    cipsectunremoteaddr{YType::str, "cipSecTunRemoteAddr"},
    cipsectunsalifesizethreshold{YType::int32, "cipSecTunSaLifeSizeThreshold"},
    cipsectunsalifetimethreshold{YType::int32, "cipSecTunSaLifeTimeThreshold"},
    cipsectunstatus{YType::enumeration, "cipSecTunStatus"},
    cipsectuntotalrefreshes{YType::uint32, "cipSecTunTotalRefreshes"}
{
    yang_name = "cipSecTunnelEntry"; yang_parent_name = "cipSecTunnelTable";
}

CiscoIpsecFlowMonitorMib::Cipsectunneltable::Cipsectunnelentry::~Cipsectunnelentry()
{
}

bool CiscoIpsecFlowMonitorMib::Cipsectunneltable::Cipsectunnelentry::has_data() const
{
    return cipsectunindex.is_set
	|| cipsectunactivetime.is_set
	|| cipsectuncurrentsainstances.is_set
	|| cipsectunencapmode.is_set
	|| cipsectunexpiredsainstances.is_set
	|| cipsectunhcindecompoctets.is_set
	|| cipsectunhcinoctets.is_set
	|| cipsectunhcoutoctets.is_set
	|| cipsectunhcoutuncompoctets.is_set
	|| cipsectuniketunnelalive.is_set
	|| cipsectuniketunnelindex.is_set
	|| cipsectuninauthfails.is_set
	|| cipsectuninauths.is_set
	|| cipsectunindecompoctets.is_set
	|| cipsectunindecompoctwraps.is_set
	|| cipsectunindecryptfails.is_set
	|| cipsectunindecrypts.is_set
	|| cipsectunindroppkts.is_set
	|| cipsectuninoctets.is_set
	|| cipsectuninoctwraps.is_set
	|| cipsectuninpkts.is_set
	|| cipsectuninreplaydroppkts.is_set
	|| cipsectuninsaahauthalgo.is_set
	|| cipsectuninsadecompalgo.is_set
	|| cipsectuninsadiffhellmangrp.is_set
	|| cipsectuninsaencryptalgo.is_set
	|| cipsectuninsaespauthalgo.is_set
	|| cipsectunkeytype.is_set
	|| cipsectunlifesize.is_set
	|| cipsectunlifetime.is_set
	|| cipsectunlocaladdr.is_set
	|| cipsectunoutauthfails.is_set
	|| cipsectunoutauths.is_set
	|| cipsectunoutdroppkts.is_set
	|| cipsectunoutencryptfails.is_set
	|| cipsectunoutencrypts.is_set
	|| cipsectunoutoctets.is_set
	|| cipsectunoutoctwraps.is_set
	|| cipsectunoutpkts.is_set
	|| cipsectunoutsaahauthalgo.is_set
	|| cipsectunoutsacompalgo.is_set
	|| cipsectunoutsadiffhellmangrp.is_set
	|| cipsectunoutsaencryptalgo.is_set
	|| cipsectunoutsaespauthalgo.is_set
	|| cipsectunoutuncompoctets.is_set
	|| cipsectunoutuncompoctwraps.is_set
	|| cipsectunremoteaddr.is_set
	|| cipsectunsalifesizethreshold.is_set
	|| cipsectunsalifetimethreshold.is_set
	|| cipsectunstatus.is_set
	|| cipsectuntotalrefreshes.is_set;
}

bool CiscoIpsecFlowMonitorMib::Cipsectunneltable::Cipsectunnelentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cipsectunindex.operation)
	|| is_set(cipsectunactivetime.operation)
	|| is_set(cipsectuncurrentsainstances.operation)
	|| is_set(cipsectunencapmode.operation)
	|| is_set(cipsectunexpiredsainstances.operation)
	|| is_set(cipsectunhcindecompoctets.operation)
	|| is_set(cipsectunhcinoctets.operation)
	|| is_set(cipsectunhcoutoctets.operation)
	|| is_set(cipsectunhcoutuncompoctets.operation)
	|| is_set(cipsectuniketunnelalive.operation)
	|| is_set(cipsectuniketunnelindex.operation)
	|| is_set(cipsectuninauthfails.operation)
	|| is_set(cipsectuninauths.operation)
	|| is_set(cipsectunindecompoctets.operation)
	|| is_set(cipsectunindecompoctwraps.operation)
	|| is_set(cipsectunindecryptfails.operation)
	|| is_set(cipsectunindecrypts.operation)
	|| is_set(cipsectunindroppkts.operation)
	|| is_set(cipsectuninoctets.operation)
	|| is_set(cipsectuninoctwraps.operation)
	|| is_set(cipsectuninpkts.operation)
	|| is_set(cipsectuninreplaydroppkts.operation)
	|| is_set(cipsectuninsaahauthalgo.operation)
	|| is_set(cipsectuninsadecompalgo.operation)
	|| is_set(cipsectuninsadiffhellmangrp.operation)
	|| is_set(cipsectuninsaencryptalgo.operation)
	|| is_set(cipsectuninsaespauthalgo.operation)
	|| is_set(cipsectunkeytype.operation)
	|| is_set(cipsectunlifesize.operation)
	|| is_set(cipsectunlifetime.operation)
	|| is_set(cipsectunlocaladdr.operation)
	|| is_set(cipsectunoutauthfails.operation)
	|| is_set(cipsectunoutauths.operation)
	|| is_set(cipsectunoutdroppkts.operation)
	|| is_set(cipsectunoutencryptfails.operation)
	|| is_set(cipsectunoutencrypts.operation)
	|| is_set(cipsectunoutoctets.operation)
	|| is_set(cipsectunoutoctwraps.operation)
	|| is_set(cipsectunoutpkts.operation)
	|| is_set(cipsectunoutsaahauthalgo.operation)
	|| is_set(cipsectunoutsacompalgo.operation)
	|| is_set(cipsectunoutsadiffhellmangrp.operation)
	|| is_set(cipsectunoutsaencryptalgo.operation)
	|| is_set(cipsectunoutsaespauthalgo.operation)
	|| is_set(cipsectunoutuncompoctets.operation)
	|| is_set(cipsectunoutuncompoctwraps.operation)
	|| is_set(cipsectunremoteaddr.operation)
	|| is_set(cipsectunsalifesizethreshold.operation)
	|| is_set(cipsectunsalifetimethreshold.operation)
	|| is_set(cipsectunstatus.operation)
	|| is_set(cipsectuntotalrefreshes.operation);
}

std::string CiscoIpsecFlowMonitorMib::Cipsectunneltable::Cipsectunnelentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecTunnelEntry" <<"[cipSecTunIndex='" <<cipsectunindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpsecFlowMonitorMib::Cipsectunneltable::Cipsectunnelentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/cipSecTunnelTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsectunindex.is_set || is_set(cipsectunindex.operation)) leaf_name_data.push_back(cipsectunindex.get_name_leafdata());
    if (cipsectunactivetime.is_set || is_set(cipsectunactivetime.operation)) leaf_name_data.push_back(cipsectunactivetime.get_name_leafdata());
    if (cipsectuncurrentsainstances.is_set || is_set(cipsectuncurrentsainstances.operation)) leaf_name_data.push_back(cipsectuncurrentsainstances.get_name_leafdata());
    if (cipsectunencapmode.is_set || is_set(cipsectunencapmode.operation)) leaf_name_data.push_back(cipsectunencapmode.get_name_leafdata());
    if (cipsectunexpiredsainstances.is_set || is_set(cipsectunexpiredsainstances.operation)) leaf_name_data.push_back(cipsectunexpiredsainstances.get_name_leafdata());
    if (cipsectunhcindecompoctets.is_set || is_set(cipsectunhcindecompoctets.operation)) leaf_name_data.push_back(cipsectunhcindecompoctets.get_name_leafdata());
    if (cipsectunhcinoctets.is_set || is_set(cipsectunhcinoctets.operation)) leaf_name_data.push_back(cipsectunhcinoctets.get_name_leafdata());
    if (cipsectunhcoutoctets.is_set || is_set(cipsectunhcoutoctets.operation)) leaf_name_data.push_back(cipsectunhcoutoctets.get_name_leafdata());
    if (cipsectunhcoutuncompoctets.is_set || is_set(cipsectunhcoutuncompoctets.operation)) leaf_name_data.push_back(cipsectunhcoutuncompoctets.get_name_leafdata());
    if (cipsectuniketunnelalive.is_set || is_set(cipsectuniketunnelalive.operation)) leaf_name_data.push_back(cipsectuniketunnelalive.get_name_leafdata());
    if (cipsectuniketunnelindex.is_set || is_set(cipsectuniketunnelindex.operation)) leaf_name_data.push_back(cipsectuniketunnelindex.get_name_leafdata());
    if (cipsectuninauthfails.is_set || is_set(cipsectuninauthfails.operation)) leaf_name_data.push_back(cipsectuninauthfails.get_name_leafdata());
    if (cipsectuninauths.is_set || is_set(cipsectuninauths.operation)) leaf_name_data.push_back(cipsectuninauths.get_name_leafdata());
    if (cipsectunindecompoctets.is_set || is_set(cipsectunindecompoctets.operation)) leaf_name_data.push_back(cipsectunindecompoctets.get_name_leafdata());
    if (cipsectunindecompoctwraps.is_set || is_set(cipsectunindecompoctwraps.operation)) leaf_name_data.push_back(cipsectunindecompoctwraps.get_name_leafdata());
    if (cipsectunindecryptfails.is_set || is_set(cipsectunindecryptfails.operation)) leaf_name_data.push_back(cipsectunindecryptfails.get_name_leafdata());
    if (cipsectunindecrypts.is_set || is_set(cipsectunindecrypts.operation)) leaf_name_data.push_back(cipsectunindecrypts.get_name_leafdata());
    if (cipsectunindroppkts.is_set || is_set(cipsectunindroppkts.operation)) leaf_name_data.push_back(cipsectunindroppkts.get_name_leafdata());
    if (cipsectuninoctets.is_set || is_set(cipsectuninoctets.operation)) leaf_name_data.push_back(cipsectuninoctets.get_name_leafdata());
    if (cipsectuninoctwraps.is_set || is_set(cipsectuninoctwraps.operation)) leaf_name_data.push_back(cipsectuninoctwraps.get_name_leafdata());
    if (cipsectuninpkts.is_set || is_set(cipsectuninpkts.operation)) leaf_name_data.push_back(cipsectuninpkts.get_name_leafdata());
    if (cipsectuninreplaydroppkts.is_set || is_set(cipsectuninreplaydroppkts.operation)) leaf_name_data.push_back(cipsectuninreplaydroppkts.get_name_leafdata());
    if (cipsectuninsaahauthalgo.is_set || is_set(cipsectuninsaahauthalgo.operation)) leaf_name_data.push_back(cipsectuninsaahauthalgo.get_name_leafdata());
    if (cipsectuninsadecompalgo.is_set || is_set(cipsectuninsadecompalgo.operation)) leaf_name_data.push_back(cipsectuninsadecompalgo.get_name_leafdata());
    if (cipsectuninsadiffhellmangrp.is_set || is_set(cipsectuninsadiffhellmangrp.operation)) leaf_name_data.push_back(cipsectuninsadiffhellmangrp.get_name_leafdata());
    if (cipsectuninsaencryptalgo.is_set || is_set(cipsectuninsaencryptalgo.operation)) leaf_name_data.push_back(cipsectuninsaencryptalgo.get_name_leafdata());
    if (cipsectuninsaespauthalgo.is_set || is_set(cipsectuninsaespauthalgo.operation)) leaf_name_data.push_back(cipsectuninsaespauthalgo.get_name_leafdata());
    if (cipsectunkeytype.is_set || is_set(cipsectunkeytype.operation)) leaf_name_data.push_back(cipsectunkeytype.get_name_leafdata());
    if (cipsectunlifesize.is_set || is_set(cipsectunlifesize.operation)) leaf_name_data.push_back(cipsectunlifesize.get_name_leafdata());
    if (cipsectunlifetime.is_set || is_set(cipsectunlifetime.operation)) leaf_name_data.push_back(cipsectunlifetime.get_name_leafdata());
    if (cipsectunlocaladdr.is_set || is_set(cipsectunlocaladdr.operation)) leaf_name_data.push_back(cipsectunlocaladdr.get_name_leafdata());
    if (cipsectunoutauthfails.is_set || is_set(cipsectunoutauthfails.operation)) leaf_name_data.push_back(cipsectunoutauthfails.get_name_leafdata());
    if (cipsectunoutauths.is_set || is_set(cipsectunoutauths.operation)) leaf_name_data.push_back(cipsectunoutauths.get_name_leafdata());
    if (cipsectunoutdroppkts.is_set || is_set(cipsectunoutdroppkts.operation)) leaf_name_data.push_back(cipsectunoutdroppkts.get_name_leafdata());
    if (cipsectunoutencryptfails.is_set || is_set(cipsectunoutencryptfails.operation)) leaf_name_data.push_back(cipsectunoutencryptfails.get_name_leafdata());
    if (cipsectunoutencrypts.is_set || is_set(cipsectunoutencrypts.operation)) leaf_name_data.push_back(cipsectunoutencrypts.get_name_leafdata());
    if (cipsectunoutoctets.is_set || is_set(cipsectunoutoctets.operation)) leaf_name_data.push_back(cipsectunoutoctets.get_name_leafdata());
    if (cipsectunoutoctwraps.is_set || is_set(cipsectunoutoctwraps.operation)) leaf_name_data.push_back(cipsectunoutoctwraps.get_name_leafdata());
    if (cipsectunoutpkts.is_set || is_set(cipsectunoutpkts.operation)) leaf_name_data.push_back(cipsectunoutpkts.get_name_leafdata());
    if (cipsectunoutsaahauthalgo.is_set || is_set(cipsectunoutsaahauthalgo.operation)) leaf_name_data.push_back(cipsectunoutsaahauthalgo.get_name_leafdata());
    if (cipsectunoutsacompalgo.is_set || is_set(cipsectunoutsacompalgo.operation)) leaf_name_data.push_back(cipsectunoutsacompalgo.get_name_leafdata());
    if (cipsectunoutsadiffhellmangrp.is_set || is_set(cipsectunoutsadiffhellmangrp.operation)) leaf_name_data.push_back(cipsectunoutsadiffhellmangrp.get_name_leafdata());
    if (cipsectunoutsaencryptalgo.is_set || is_set(cipsectunoutsaencryptalgo.operation)) leaf_name_data.push_back(cipsectunoutsaencryptalgo.get_name_leafdata());
    if (cipsectunoutsaespauthalgo.is_set || is_set(cipsectunoutsaespauthalgo.operation)) leaf_name_data.push_back(cipsectunoutsaespauthalgo.get_name_leafdata());
    if (cipsectunoutuncompoctets.is_set || is_set(cipsectunoutuncompoctets.operation)) leaf_name_data.push_back(cipsectunoutuncompoctets.get_name_leafdata());
    if (cipsectunoutuncompoctwraps.is_set || is_set(cipsectunoutuncompoctwraps.operation)) leaf_name_data.push_back(cipsectunoutuncompoctwraps.get_name_leafdata());
    if (cipsectunremoteaddr.is_set || is_set(cipsectunremoteaddr.operation)) leaf_name_data.push_back(cipsectunremoteaddr.get_name_leafdata());
    if (cipsectunsalifesizethreshold.is_set || is_set(cipsectunsalifesizethreshold.operation)) leaf_name_data.push_back(cipsectunsalifesizethreshold.get_name_leafdata());
    if (cipsectunsalifetimethreshold.is_set || is_set(cipsectunsalifetimethreshold.operation)) leaf_name_data.push_back(cipsectunsalifetimethreshold.get_name_leafdata());
    if (cipsectunstatus.is_set || is_set(cipsectunstatus.operation)) leaf_name_data.push_back(cipsectunstatus.get_name_leafdata());
    if (cipsectuntotalrefreshes.is_set || is_set(cipsectuntotalrefreshes.operation)) leaf_name_data.push_back(cipsectuntotalrefreshes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecFlowMonitorMib::Cipsectunneltable::Cipsectunnelentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecFlowMonitorMib::Cipsectunneltable::Cipsectunnelentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpsecFlowMonitorMib::Cipsectunneltable::Cipsectunnelentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cipSecTunIndex")
    {
        cipsectunindex = value;
    }
    if(value_path == "cipSecTunActiveTime")
    {
        cipsectunactivetime = value;
    }
    if(value_path == "cipSecTunCurrentSaInstances")
    {
        cipsectuncurrentsainstances = value;
    }
    if(value_path == "cipSecTunEncapMode")
    {
        cipsectunencapmode = value;
    }
    if(value_path == "cipSecTunExpiredSaInstances")
    {
        cipsectunexpiredsainstances = value;
    }
    if(value_path == "cipSecTunHcInDecompOctets")
    {
        cipsectunhcindecompoctets = value;
    }
    if(value_path == "cipSecTunHcInOctets")
    {
        cipsectunhcinoctets = value;
    }
    if(value_path == "cipSecTunHcOutOctets")
    {
        cipsectunhcoutoctets = value;
    }
    if(value_path == "cipSecTunHcOutUncompOctets")
    {
        cipsectunhcoutuncompoctets = value;
    }
    if(value_path == "cipSecTunIkeTunnelAlive")
    {
        cipsectuniketunnelalive = value;
    }
    if(value_path == "cipSecTunIkeTunnelIndex")
    {
        cipsectuniketunnelindex = value;
    }
    if(value_path == "cipSecTunInAuthFails")
    {
        cipsectuninauthfails = value;
    }
    if(value_path == "cipSecTunInAuths")
    {
        cipsectuninauths = value;
    }
    if(value_path == "cipSecTunInDecompOctets")
    {
        cipsectunindecompoctets = value;
    }
    if(value_path == "cipSecTunInDecompOctWraps")
    {
        cipsectunindecompoctwraps = value;
    }
    if(value_path == "cipSecTunInDecryptFails")
    {
        cipsectunindecryptfails = value;
    }
    if(value_path == "cipSecTunInDecrypts")
    {
        cipsectunindecrypts = value;
    }
    if(value_path == "cipSecTunInDropPkts")
    {
        cipsectunindroppkts = value;
    }
    if(value_path == "cipSecTunInOctets")
    {
        cipsectuninoctets = value;
    }
    if(value_path == "cipSecTunInOctWraps")
    {
        cipsectuninoctwraps = value;
    }
    if(value_path == "cipSecTunInPkts")
    {
        cipsectuninpkts = value;
    }
    if(value_path == "cipSecTunInReplayDropPkts")
    {
        cipsectuninreplaydroppkts = value;
    }
    if(value_path == "cipSecTunInSaAhAuthAlgo")
    {
        cipsectuninsaahauthalgo = value;
    }
    if(value_path == "cipSecTunInSaDecompAlgo")
    {
        cipsectuninsadecompalgo = value;
    }
    if(value_path == "cipSecTunInSaDiffHellmanGrp")
    {
        cipsectuninsadiffhellmangrp = value;
    }
    if(value_path == "cipSecTunInSaEncryptAlgo")
    {
        cipsectuninsaencryptalgo = value;
    }
    if(value_path == "cipSecTunInSaEspAuthAlgo")
    {
        cipsectuninsaespauthalgo = value;
    }
    if(value_path == "cipSecTunKeyType")
    {
        cipsectunkeytype = value;
    }
    if(value_path == "cipSecTunLifeSize")
    {
        cipsectunlifesize = value;
    }
    if(value_path == "cipSecTunLifeTime")
    {
        cipsectunlifetime = value;
    }
    if(value_path == "cipSecTunLocalAddr")
    {
        cipsectunlocaladdr = value;
    }
    if(value_path == "cipSecTunOutAuthFails")
    {
        cipsectunoutauthfails = value;
    }
    if(value_path == "cipSecTunOutAuths")
    {
        cipsectunoutauths = value;
    }
    if(value_path == "cipSecTunOutDropPkts")
    {
        cipsectunoutdroppkts = value;
    }
    if(value_path == "cipSecTunOutEncryptFails")
    {
        cipsectunoutencryptfails = value;
    }
    if(value_path == "cipSecTunOutEncrypts")
    {
        cipsectunoutencrypts = value;
    }
    if(value_path == "cipSecTunOutOctets")
    {
        cipsectunoutoctets = value;
    }
    if(value_path == "cipSecTunOutOctWraps")
    {
        cipsectunoutoctwraps = value;
    }
    if(value_path == "cipSecTunOutPkts")
    {
        cipsectunoutpkts = value;
    }
    if(value_path == "cipSecTunOutSaAhAuthAlgo")
    {
        cipsectunoutsaahauthalgo = value;
    }
    if(value_path == "cipSecTunOutSaCompAlgo")
    {
        cipsectunoutsacompalgo = value;
    }
    if(value_path == "cipSecTunOutSaDiffHellmanGrp")
    {
        cipsectunoutsadiffhellmangrp = value;
    }
    if(value_path == "cipSecTunOutSaEncryptAlgo")
    {
        cipsectunoutsaencryptalgo = value;
    }
    if(value_path == "cipSecTunOutSaEspAuthAlgo")
    {
        cipsectunoutsaespauthalgo = value;
    }
    if(value_path == "cipSecTunOutUncompOctets")
    {
        cipsectunoutuncompoctets = value;
    }
    if(value_path == "cipSecTunOutUncompOctWraps")
    {
        cipsectunoutuncompoctwraps = value;
    }
    if(value_path == "cipSecTunRemoteAddr")
    {
        cipsectunremoteaddr = value;
    }
    if(value_path == "cipSecTunSaLifeSizeThreshold")
    {
        cipsectunsalifesizethreshold = value;
    }
    if(value_path == "cipSecTunSaLifeTimeThreshold")
    {
        cipsectunsalifetimethreshold = value;
    }
    if(value_path == "cipSecTunStatus")
    {
        cipsectunstatus = value;
    }
    if(value_path == "cipSecTunTotalRefreshes")
    {
        cipsectuntotalrefreshes = value;
    }
}

CiscoIpsecFlowMonitorMib::Cipsecendpttable::Cipsecendpttable()
{
    yang_name = "cipSecEndPtTable"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB";
}

CiscoIpsecFlowMonitorMib::Cipsecendpttable::~Cipsecendpttable()
{
}

bool CiscoIpsecFlowMonitorMib::Cipsecendpttable::has_data() const
{
    for (std::size_t index=0; index<cipsecendptentry_.size(); index++)
    {
        if(cipsecendptentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpsecFlowMonitorMib::Cipsecendpttable::has_operation() const
{
    for (std::size_t index=0; index<cipsecendptentry_.size(); index++)
    {
        if(cipsecendptentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIpsecFlowMonitorMib::Cipsecendpttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecEndPtTable";

    return path_buffer.str();

}

const EntityPath CiscoIpsecFlowMonitorMib::Cipsecendpttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecFlowMonitorMib::Cipsecendpttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipSecEndPtEntry")
    {
        for(auto const & c : cipsecendptentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpsecFlowMonitorMib::Cipsecendpttable::Cipsecendptentry>();
        c->parent = this;
        cipsecendptentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecFlowMonitorMib::Cipsecendpttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipsecendptentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpsecFlowMonitorMib::Cipsecendpttable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIpsecFlowMonitorMib::Cipsecendpttable::Cipsecendptentry::Cipsecendptentry()
    :
    cipsectunindex{YType::str, "cipSecTunIndex"},
    cipsecendptindex{YType::int32, "cipSecEndPtIndex"},
    cipsecendptlocaladdr1{YType::str, "cipSecEndPtLocalAddr1"},
    cipsecendptlocaladdr2{YType::str, "cipSecEndPtLocalAddr2"},
    cipsecendptlocalname{YType::str, "cipSecEndPtLocalName"},
    cipsecendptlocalport{YType::int32, "cipSecEndPtLocalPort"},
    cipsecendptlocalprotocol{YType::int32, "cipSecEndPtLocalProtocol"},
    cipsecendptlocaltype{YType::enumeration, "cipSecEndPtLocalType"},
    cipsecendptremoteaddr1{YType::str, "cipSecEndPtRemoteAddr1"},
    cipsecendptremoteaddr2{YType::str, "cipSecEndPtRemoteAddr2"},
    cipsecendptremotename{YType::str, "cipSecEndPtRemoteName"},
    cipsecendptremoteport{YType::int32, "cipSecEndPtRemotePort"},
    cipsecendptremoteprotocol{YType::int32, "cipSecEndPtRemoteProtocol"},
    cipsecendptremotetype{YType::enumeration, "cipSecEndPtRemoteType"}
{
    yang_name = "cipSecEndPtEntry"; yang_parent_name = "cipSecEndPtTable";
}

CiscoIpsecFlowMonitorMib::Cipsecendpttable::Cipsecendptentry::~Cipsecendptentry()
{
}

bool CiscoIpsecFlowMonitorMib::Cipsecendpttable::Cipsecendptentry::has_data() const
{
    return cipsectunindex.is_set
	|| cipsecendptindex.is_set
	|| cipsecendptlocaladdr1.is_set
	|| cipsecendptlocaladdr2.is_set
	|| cipsecendptlocalname.is_set
	|| cipsecendptlocalport.is_set
	|| cipsecendptlocalprotocol.is_set
	|| cipsecendptlocaltype.is_set
	|| cipsecendptremoteaddr1.is_set
	|| cipsecendptremoteaddr2.is_set
	|| cipsecendptremotename.is_set
	|| cipsecendptremoteport.is_set
	|| cipsecendptremoteprotocol.is_set
	|| cipsecendptremotetype.is_set;
}

bool CiscoIpsecFlowMonitorMib::Cipsecendpttable::Cipsecendptentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cipsectunindex.operation)
	|| is_set(cipsecendptindex.operation)
	|| is_set(cipsecendptlocaladdr1.operation)
	|| is_set(cipsecendptlocaladdr2.operation)
	|| is_set(cipsecendptlocalname.operation)
	|| is_set(cipsecendptlocalport.operation)
	|| is_set(cipsecendptlocalprotocol.operation)
	|| is_set(cipsecendptlocaltype.operation)
	|| is_set(cipsecendptremoteaddr1.operation)
	|| is_set(cipsecendptremoteaddr2.operation)
	|| is_set(cipsecendptremotename.operation)
	|| is_set(cipsecendptremoteport.operation)
	|| is_set(cipsecendptremoteprotocol.operation)
	|| is_set(cipsecendptremotetype.operation);
}

std::string CiscoIpsecFlowMonitorMib::Cipsecendpttable::Cipsecendptentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecEndPtEntry" <<"[cipSecTunIndex='" <<cipsectunindex <<"']" <<"[cipSecEndPtIndex='" <<cipsecendptindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpsecFlowMonitorMib::Cipsecendpttable::Cipsecendptentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/cipSecEndPtTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsectunindex.is_set || is_set(cipsectunindex.operation)) leaf_name_data.push_back(cipsectunindex.get_name_leafdata());
    if (cipsecendptindex.is_set || is_set(cipsecendptindex.operation)) leaf_name_data.push_back(cipsecendptindex.get_name_leafdata());
    if (cipsecendptlocaladdr1.is_set || is_set(cipsecendptlocaladdr1.operation)) leaf_name_data.push_back(cipsecendptlocaladdr1.get_name_leafdata());
    if (cipsecendptlocaladdr2.is_set || is_set(cipsecendptlocaladdr2.operation)) leaf_name_data.push_back(cipsecendptlocaladdr2.get_name_leafdata());
    if (cipsecendptlocalname.is_set || is_set(cipsecendptlocalname.operation)) leaf_name_data.push_back(cipsecendptlocalname.get_name_leafdata());
    if (cipsecendptlocalport.is_set || is_set(cipsecendptlocalport.operation)) leaf_name_data.push_back(cipsecendptlocalport.get_name_leafdata());
    if (cipsecendptlocalprotocol.is_set || is_set(cipsecendptlocalprotocol.operation)) leaf_name_data.push_back(cipsecendptlocalprotocol.get_name_leafdata());
    if (cipsecendptlocaltype.is_set || is_set(cipsecendptlocaltype.operation)) leaf_name_data.push_back(cipsecendptlocaltype.get_name_leafdata());
    if (cipsecendptremoteaddr1.is_set || is_set(cipsecendptremoteaddr1.operation)) leaf_name_data.push_back(cipsecendptremoteaddr1.get_name_leafdata());
    if (cipsecendptremoteaddr2.is_set || is_set(cipsecendptremoteaddr2.operation)) leaf_name_data.push_back(cipsecendptremoteaddr2.get_name_leafdata());
    if (cipsecendptremotename.is_set || is_set(cipsecendptremotename.operation)) leaf_name_data.push_back(cipsecendptremotename.get_name_leafdata());
    if (cipsecendptremoteport.is_set || is_set(cipsecendptremoteport.operation)) leaf_name_data.push_back(cipsecendptremoteport.get_name_leafdata());
    if (cipsecendptremoteprotocol.is_set || is_set(cipsecendptremoteprotocol.operation)) leaf_name_data.push_back(cipsecendptremoteprotocol.get_name_leafdata());
    if (cipsecendptremotetype.is_set || is_set(cipsecendptremotetype.operation)) leaf_name_data.push_back(cipsecendptremotetype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecFlowMonitorMib::Cipsecendpttable::Cipsecendptentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecFlowMonitorMib::Cipsecendpttable::Cipsecendptentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpsecFlowMonitorMib::Cipsecendpttable::Cipsecendptentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cipSecTunIndex")
    {
        cipsectunindex = value;
    }
    if(value_path == "cipSecEndPtIndex")
    {
        cipsecendptindex = value;
    }
    if(value_path == "cipSecEndPtLocalAddr1")
    {
        cipsecendptlocaladdr1 = value;
    }
    if(value_path == "cipSecEndPtLocalAddr2")
    {
        cipsecendptlocaladdr2 = value;
    }
    if(value_path == "cipSecEndPtLocalName")
    {
        cipsecendptlocalname = value;
    }
    if(value_path == "cipSecEndPtLocalPort")
    {
        cipsecendptlocalport = value;
    }
    if(value_path == "cipSecEndPtLocalProtocol")
    {
        cipsecendptlocalprotocol = value;
    }
    if(value_path == "cipSecEndPtLocalType")
    {
        cipsecendptlocaltype = value;
    }
    if(value_path == "cipSecEndPtRemoteAddr1")
    {
        cipsecendptremoteaddr1 = value;
    }
    if(value_path == "cipSecEndPtRemoteAddr2")
    {
        cipsecendptremoteaddr2 = value;
    }
    if(value_path == "cipSecEndPtRemoteName")
    {
        cipsecendptremotename = value;
    }
    if(value_path == "cipSecEndPtRemotePort")
    {
        cipsecendptremoteport = value;
    }
    if(value_path == "cipSecEndPtRemoteProtocol")
    {
        cipsecendptremoteprotocol = value;
    }
    if(value_path == "cipSecEndPtRemoteType")
    {
        cipsecendptremotetype = value;
    }
}

CiscoIpsecFlowMonitorMib::Cipsecspitable::Cipsecspitable()
{
    yang_name = "cipSecSpiTable"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB";
}

CiscoIpsecFlowMonitorMib::Cipsecspitable::~Cipsecspitable()
{
}

bool CiscoIpsecFlowMonitorMib::Cipsecspitable::has_data() const
{
    for (std::size_t index=0; index<cipsecspientry_.size(); index++)
    {
        if(cipsecspientry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpsecFlowMonitorMib::Cipsecspitable::has_operation() const
{
    for (std::size_t index=0; index<cipsecspientry_.size(); index++)
    {
        if(cipsecspientry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIpsecFlowMonitorMib::Cipsecspitable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecSpiTable";

    return path_buffer.str();

}

const EntityPath CiscoIpsecFlowMonitorMib::Cipsecspitable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecFlowMonitorMib::Cipsecspitable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipSecSpiEntry")
    {
        for(auto const & c : cipsecspientry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpsecFlowMonitorMib::Cipsecspitable::Cipsecspientry>();
        c->parent = this;
        cipsecspientry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecFlowMonitorMib::Cipsecspitable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipsecspientry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpsecFlowMonitorMib::Cipsecspitable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIpsecFlowMonitorMib::Cipsecspitable::Cipsecspientry::Cipsecspientry()
    :
    cipsectunindex{YType::str, "cipSecTunIndex"},
    cipsecspiindex{YType::int32, "cipSecSpiIndex"},
    cipsecspidirection{YType::enumeration, "cipSecSpiDirection"},
    cipsecspiprotocol{YType::enumeration, "cipSecSpiProtocol"},
    cipsecspistatus{YType::enumeration, "cipSecSpiStatus"},
    cipsecspivalue{YType::uint32, "cipSecSpiValue"}
{
    yang_name = "cipSecSpiEntry"; yang_parent_name = "cipSecSpiTable";
}

CiscoIpsecFlowMonitorMib::Cipsecspitable::Cipsecspientry::~Cipsecspientry()
{
}

bool CiscoIpsecFlowMonitorMib::Cipsecspitable::Cipsecspientry::has_data() const
{
    return cipsectunindex.is_set
	|| cipsecspiindex.is_set
	|| cipsecspidirection.is_set
	|| cipsecspiprotocol.is_set
	|| cipsecspistatus.is_set
	|| cipsecspivalue.is_set;
}

bool CiscoIpsecFlowMonitorMib::Cipsecspitable::Cipsecspientry::has_operation() const
{
    return is_set(operation)
	|| is_set(cipsectunindex.operation)
	|| is_set(cipsecspiindex.operation)
	|| is_set(cipsecspidirection.operation)
	|| is_set(cipsecspiprotocol.operation)
	|| is_set(cipsecspistatus.operation)
	|| is_set(cipsecspivalue.operation);
}

std::string CiscoIpsecFlowMonitorMib::Cipsecspitable::Cipsecspientry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecSpiEntry" <<"[cipSecTunIndex='" <<cipsectunindex <<"']" <<"[cipSecSpiIndex='" <<cipsecspiindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpsecFlowMonitorMib::Cipsecspitable::Cipsecspientry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/cipSecSpiTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsectunindex.is_set || is_set(cipsectunindex.operation)) leaf_name_data.push_back(cipsectunindex.get_name_leafdata());
    if (cipsecspiindex.is_set || is_set(cipsecspiindex.operation)) leaf_name_data.push_back(cipsecspiindex.get_name_leafdata());
    if (cipsecspidirection.is_set || is_set(cipsecspidirection.operation)) leaf_name_data.push_back(cipsecspidirection.get_name_leafdata());
    if (cipsecspiprotocol.is_set || is_set(cipsecspiprotocol.operation)) leaf_name_data.push_back(cipsecspiprotocol.get_name_leafdata());
    if (cipsecspistatus.is_set || is_set(cipsecspistatus.operation)) leaf_name_data.push_back(cipsecspistatus.get_name_leafdata());
    if (cipsecspivalue.is_set || is_set(cipsecspivalue.operation)) leaf_name_data.push_back(cipsecspivalue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecFlowMonitorMib::Cipsecspitable::Cipsecspientry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecFlowMonitorMib::Cipsecspitable::Cipsecspientry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpsecFlowMonitorMib::Cipsecspitable::Cipsecspientry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cipSecTunIndex")
    {
        cipsectunindex = value;
    }
    if(value_path == "cipSecSpiIndex")
    {
        cipsecspiindex = value;
    }
    if(value_path == "cipSecSpiDirection")
    {
        cipsecspidirection = value;
    }
    if(value_path == "cipSecSpiProtocol")
    {
        cipsecspiprotocol = value;
    }
    if(value_path == "cipSecSpiStatus")
    {
        cipsecspistatus = value;
    }
    if(value_path == "cipSecSpiValue")
    {
        cipsecspivalue = value;
    }
}

CiscoIpsecFlowMonitorMib::Cipsecphase2Gwstatstable::Cipsecphase2Gwstatstable()
{
    yang_name = "cipSecPhase2GWStatsTable"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB";
}

CiscoIpsecFlowMonitorMib::Cipsecphase2Gwstatstable::~Cipsecphase2Gwstatstable()
{
}

bool CiscoIpsecFlowMonitorMib::Cipsecphase2Gwstatstable::has_data() const
{
    for (std::size_t index=0; index<cipsecphase2gwstatsentry_.size(); index++)
    {
        if(cipsecphase2gwstatsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpsecFlowMonitorMib::Cipsecphase2Gwstatstable::has_operation() const
{
    for (std::size_t index=0; index<cipsecphase2gwstatsentry_.size(); index++)
    {
        if(cipsecphase2gwstatsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIpsecFlowMonitorMib::Cipsecphase2Gwstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecPhase2GWStatsTable";

    return path_buffer.str();

}

const EntityPath CiscoIpsecFlowMonitorMib::Cipsecphase2Gwstatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecFlowMonitorMib::Cipsecphase2Gwstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipSecPhase2GWStatsEntry")
    {
        for(auto const & c : cipsecphase2gwstatsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpsecFlowMonitorMib::Cipsecphase2Gwstatstable::Cipsecphase2Gwstatsentry>();
        c->parent = this;
        cipsecphase2gwstatsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecFlowMonitorMib::Cipsecphase2Gwstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipsecphase2gwstatsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpsecFlowMonitorMib::Cipsecphase2Gwstatstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIpsecFlowMonitorMib::Cipsecphase2Gwstatstable::Cipsecphase2Gwstatsentry::Cipsecphase2Gwstatsentry()
    :
    cmgwindex{YType::str, "cmgwIndex"},
    cipsecphase2gwactivetunnels{YType::uint32, "cipSecPhase2GWActiveTunnels"},
    cipsecphase2gwinauthfails{YType::uint32, "cipSecPhase2GWInAuthFails"},
    cipsecphase2gwinauths{YType::uint32, "cipSecPhase2GWInAuths"},
    cipsecphase2gwindecompoctets{YType::uint32, "cipSecPhase2GWInDecompOctets"},
    cipsecphase2gwindecompoctwraps{YType::uint32, "cipSecPhase2GWInDecompOctWraps"},
    cipsecphase2gwindecryptfails{YType::uint32, "cipSecPhase2GWInDecryptFails"},
    cipsecphase2gwindecrypts{YType::uint32, "cipSecPhase2GWInDecrypts"},
    cipsecphase2gwindrops{YType::uint32, "cipSecPhase2GWInDrops"},
    cipsecphase2gwinoctets{YType::uint32, "cipSecPhase2GWInOctets"},
    cipsecphase2gwinoctwraps{YType::uint32, "cipSecPhase2GWInOctWraps"},
    cipsecphase2gwinpkts{YType::uint32, "cipSecPhase2GWInPkts"},
    cipsecphase2gwinreplaydrops{YType::uint32, "cipSecPhase2GWInReplayDrops"},
    cipsecphase2gwnosafails{YType::uint32, "cipSecPhase2GWNoSaFails"},
    cipsecphase2gwoutauthfails{YType::uint32, "cipSecPhase2GWOutAuthFails"},
    cipsecphase2gwoutauths{YType::uint32, "cipSecPhase2GWOutAuths"},
    cipsecphase2gwoutdrops{YType::uint32, "cipSecPhase2GWOutDrops"},
    cipsecphase2gwoutencryptfails{YType::uint32, "cipSecPhase2GWOutEncryptFails"},
    cipsecphase2gwoutencrypts{YType::uint32, "cipSecPhase2GWOutEncrypts"},
    cipsecphase2gwoutoctets{YType::uint32, "cipSecPhase2GWOutOctets"},
    cipsecphase2gwoutoctwraps{YType::uint32, "cipSecPhase2GWOutOctWraps"},
    cipsecphase2gwoutpkts{YType::uint32, "cipSecPhase2GWOutPkts"},
    cipsecphase2gwoutuncompoctets{YType::uint32, "cipSecPhase2GWOutUncompOctets"},
    cipsecphase2gwoutuncompoctwraps{YType::uint32, "cipSecPhase2GWOutUncompOctWraps"},
    cipsecphase2gwprevioustunnels{YType::uint32, "cipSecPhase2GWPreviousTunnels"},
    cipsecphase2gwprotocolusefails{YType::uint32, "cipSecPhase2GWProtocolUseFails"},
    cipsecphase2gwsyscapfails{YType::uint32, "cipSecPhase2GWSysCapFails"}
{
    yang_name = "cipSecPhase2GWStatsEntry"; yang_parent_name = "cipSecPhase2GWStatsTable";
}

CiscoIpsecFlowMonitorMib::Cipsecphase2Gwstatstable::Cipsecphase2Gwstatsentry::~Cipsecphase2Gwstatsentry()
{
}

bool CiscoIpsecFlowMonitorMib::Cipsecphase2Gwstatstable::Cipsecphase2Gwstatsentry::has_data() const
{
    return cmgwindex.is_set
	|| cipsecphase2gwactivetunnels.is_set
	|| cipsecphase2gwinauthfails.is_set
	|| cipsecphase2gwinauths.is_set
	|| cipsecphase2gwindecompoctets.is_set
	|| cipsecphase2gwindecompoctwraps.is_set
	|| cipsecphase2gwindecryptfails.is_set
	|| cipsecphase2gwindecrypts.is_set
	|| cipsecphase2gwindrops.is_set
	|| cipsecphase2gwinoctets.is_set
	|| cipsecphase2gwinoctwraps.is_set
	|| cipsecphase2gwinpkts.is_set
	|| cipsecphase2gwinreplaydrops.is_set
	|| cipsecphase2gwnosafails.is_set
	|| cipsecphase2gwoutauthfails.is_set
	|| cipsecphase2gwoutauths.is_set
	|| cipsecphase2gwoutdrops.is_set
	|| cipsecphase2gwoutencryptfails.is_set
	|| cipsecphase2gwoutencrypts.is_set
	|| cipsecphase2gwoutoctets.is_set
	|| cipsecphase2gwoutoctwraps.is_set
	|| cipsecphase2gwoutpkts.is_set
	|| cipsecphase2gwoutuncompoctets.is_set
	|| cipsecphase2gwoutuncompoctwraps.is_set
	|| cipsecphase2gwprevioustunnels.is_set
	|| cipsecphase2gwprotocolusefails.is_set
	|| cipsecphase2gwsyscapfails.is_set;
}

bool CiscoIpsecFlowMonitorMib::Cipsecphase2Gwstatstable::Cipsecphase2Gwstatsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cmgwindex.operation)
	|| is_set(cipsecphase2gwactivetunnels.operation)
	|| is_set(cipsecphase2gwinauthfails.operation)
	|| is_set(cipsecphase2gwinauths.operation)
	|| is_set(cipsecphase2gwindecompoctets.operation)
	|| is_set(cipsecphase2gwindecompoctwraps.operation)
	|| is_set(cipsecphase2gwindecryptfails.operation)
	|| is_set(cipsecphase2gwindecrypts.operation)
	|| is_set(cipsecphase2gwindrops.operation)
	|| is_set(cipsecphase2gwinoctets.operation)
	|| is_set(cipsecphase2gwinoctwraps.operation)
	|| is_set(cipsecphase2gwinpkts.operation)
	|| is_set(cipsecphase2gwinreplaydrops.operation)
	|| is_set(cipsecphase2gwnosafails.operation)
	|| is_set(cipsecphase2gwoutauthfails.operation)
	|| is_set(cipsecphase2gwoutauths.operation)
	|| is_set(cipsecphase2gwoutdrops.operation)
	|| is_set(cipsecphase2gwoutencryptfails.operation)
	|| is_set(cipsecphase2gwoutencrypts.operation)
	|| is_set(cipsecphase2gwoutoctets.operation)
	|| is_set(cipsecphase2gwoutoctwraps.operation)
	|| is_set(cipsecphase2gwoutpkts.operation)
	|| is_set(cipsecphase2gwoutuncompoctets.operation)
	|| is_set(cipsecphase2gwoutuncompoctwraps.operation)
	|| is_set(cipsecphase2gwprevioustunnels.operation)
	|| is_set(cipsecphase2gwprotocolusefails.operation)
	|| is_set(cipsecphase2gwsyscapfails.operation);
}

std::string CiscoIpsecFlowMonitorMib::Cipsecphase2Gwstatstable::Cipsecphase2Gwstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecPhase2GWStatsEntry" <<"[cmgwIndex='" <<cmgwindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpsecFlowMonitorMib::Cipsecphase2Gwstatstable::Cipsecphase2Gwstatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/cipSecPhase2GWStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmgwindex.is_set || is_set(cmgwindex.operation)) leaf_name_data.push_back(cmgwindex.get_name_leafdata());
    if (cipsecphase2gwactivetunnels.is_set || is_set(cipsecphase2gwactivetunnels.operation)) leaf_name_data.push_back(cipsecphase2gwactivetunnels.get_name_leafdata());
    if (cipsecphase2gwinauthfails.is_set || is_set(cipsecphase2gwinauthfails.operation)) leaf_name_data.push_back(cipsecphase2gwinauthfails.get_name_leafdata());
    if (cipsecphase2gwinauths.is_set || is_set(cipsecphase2gwinauths.operation)) leaf_name_data.push_back(cipsecphase2gwinauths.get_name_leafdata());
    if (cipsecphase2gwindecompoctets.is_set || is_set(cipsecphase2gwindecompoctets.operation)) leaf_name_data.push_back(cipsecphase2gwindecompoctets.get_name_leafdata());
    if (cipsecphase2gwindecompoctwraps.is_set || is_set(cipsecphase2gwindecompoctwraps.operation)) leaf_name_data.push_back(cipsecphase2gwindecompoctwraps.get_name_leafdata());
    if (cipsecphase2gwindecryptfails.is_set || is_set(cipsecphase2gwindecryptfails.operation)) leaf_name_data.push_back(cipsecphase2gwindecryptfails.get_name_leafdata());
    if (cipsecphase2gwindecrypts.is_set || is_set(cipsecphase2gwindecrypts.operation)) leaf_name_data.push_back(cipsecphase2gwindecrypts.get_name_leafdata());
    if (cipsecphase2gwindrops.is_set || is_set(cipsecphase2gwindrops.operation)) leaf_name_data.push_back(cipsecphase2gwindrops.get_name_leafdata());
    if (cipsecphase2gwinoctets.is_set || is_set(cipsecphase2gwinoctets.operation)) leaf_name_data.push_back(cipsecphase2gwinoctets.get_name_leafdata());
    if (cipsecphase2gwinoctwraps.is_set || is_set(cipsecphase2gwinoctwraps.operation)) leaf_name_data.push_back(cipsecphase2gwinoctwraps.get_name_leafdata());
    if (cipsecphase2gwinpkts.is_set || is_set(cipsecphase2gwinpkts.operation)) leaf_name_data.push_back(cipsecphase2gwinpkts.get_name_leafdata());
    if (cipsecphase2gwinreplaydrops.is_set || is_set(cipsecphase2gwinreplaydrops.operation)) leaf_name_data.push_back(cipsecphase2gwinreplaydrops.get_name_leafdata());
    if (cipsecphase2gwnosafails.is_set || is_set(cipsecphase2gwnosafails.operation)) leaf_name_data.push_back(cipsecphase2gwnosafails.get_name_leafdata());
    if (cipsecphase2gwoutauthfails.is_set || is_set(cipsecphase2gwoutauthfails.operation)) leaf_name_data.push_back(cipsecphase2gwoutauthfails.get_name_leafdata());
    if (cipsecphase2gwoutauths.is_set || is_set(cipsecphase2gwoutauths.operation)) leaf_name_data.push_back(cipsecphase2gwoutauths.get_name_leafdata());
    if (cipsecphase2gwoutdrops.is_set || is_set(cipsecphase2gwoutdrops.operation)) leaf_name_data.push_back(cipsecphase2gwoutdrops.get_name_leafdata());
    if (cipsecphase2gwoutencryptfails.is_set || is_set(cipsecphase2gwoutencryptfails.operation)) leaf_name_data.push_back(cipsecphase2gwoutencryptfails.get_name_leafdata());
    if (cipsecphase2gwoutencrypts.is_set || is_set(cipsecphase2gwoutencrypts.operation)) leaf_name_data.push_back(cipsecphase2gwoutencrypts.get_name_leafdata());
    if (cipsecphase2gwoutoctets.is_set || is_set(cipsecphase2gwoutoctets.operation)) leaf_name_data.push_back(cipsecphase2gwoutoctets.get_name_leafdata());
    if (cipsecphase2gwoutoctwraps.is_set || is_set(cipsecphase2gwoutoctwraps.operation)) leaf_name_data.push_back(cipsecphase2gwoutoctwraps.get_name_leafdata());
    if (cipsecphase2gwoutpkts.is_set || is_set(cipsecphase2gwoutpkts.operation)) leaf_name_data.push_back(cipsecphase2gwoutpkts.get_name_leafdata());
    if (cipsecphase2gwoutuncompoctets.is_set || is_set(cipsecphase2gwoutuncompoctets.operation)) leaf_name_data.push_back(cipsecphase2gwoutuncompoctets.get_name_leafdata());
    if (cipsecphase2gwoutuncompoctwraps.is_set || is_set(cipsecphase2gwoutuncompoctwraps.operation)) leaf_name_data.push_back(cipsecphase2gwoutuncompoctwraps.get_name_leafdata());
    if (cipsecphase2gwprevioustunnels.is_set || is_set(cipsecphase2gwprevioustunnels.operation)) leaf_name_data.push_back(cipsecphase2gwprevioustunnels.get_name_leafdata());
    if (cipsecphase2gwprotocolusefails.is_set || is_set(cipsecphase2gwprotocolusefails.operation)) leaf_name_data.push_back(cipsecphase2gwprotocolusefails.get_name_leafdata());
    if (cipsecphase2gwsyscapfails.is_set || is_set(cipsecphase2gwsyscapfails.operation)) leaf_name_data.push_back(cipsecphase2gwsyscapfails.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecFlowMonitorMib::Cipsecphase2Gwstatstable::Cipsecphase2Gwstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecFlowMonitorMib::Cipsecphase2Gwstatstable::Cipsecphase2Gwstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpsecFlowMonitorMib::Cipsecphase2Gwstatstable::Cipsecphase2Gwstatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cmgwIndex")
    {
        cmgwindex = value;
    }
    if(value_path == "cipSecPhase2GWActiveTunnels")
    {
        cipsecphase2gwactivetunnels = value;
    }
    if(value_path == "cipSecPhase2GWInAuthFails")
    {
        cipsecphase2gwinauthfails = value;
    }
    if(value_path == "cipSecPhase2GWInAuths")
    {
        cipsecphase2gwinauths = value;
    }
    if(value_path == "cipSecPhase2GWInDecompOctets")
    {
        cipsecphase2gwindecompoctets = value;
    }
    if(value_path == "cipSecPhase2GWInDecompOctWraps")
    {
        cipsecphase2gwindecompoctwraps = value;
    }
    if(value_path == "cipSecPhase2GWInDecryptFails")
    {
        cipsecphase2gwindecryptfails = value;
    }
    if(value_path == "cipSecPhase2GWInDecrypts")
    {
        cipsecphase2gwindecrypts = value;
    }
    if(value_path == "cipSecPhase2GWInDrops")
    {
        cipsecphase2gwindrops = value;
    }
    if(value_path == "cipSecPhase2GWInOctets")
    {
        cipsecphase2gwinoctets = value;
    }
    if(value_path == "cipSecPhase2GWInOctWraps")
    {
        cipsecphase2gwinoctwraps = value;
    }
    if(value_path == "cipSecPhase2GWInPkts")
    {
        cipsecphase2gwinpkts = value;
    }
    if(value_path == "cipSecPhase2GWInReplayDrops")
    {
        cipsecphase2gwinreplaydrops = value;
    }
    if(value_path == "cipSecPhase2GWNoSaFails")
    {
        cipsecphase2gwnosafails = value;
    }
    if(value_path == "cipSecPhase2GWOutAuthFails")
    {
        cipsecphase2gwoutauthfails = value;
    }
    if(value_path == "cipSecPhase2GWOutAuths")
    {
        cipsecphase2gwoutauths = value;
    }
    if(value_path == "cipSecPhase2GWOutDrops")
    {
        cipsecphase2gwoutdrops = value;
    }
    if(value_path == "cipSecPhase2GWOutEncryptFails")
    {
        cipsecphase2gwoutencryptfails = value;
    }
    if(value_path == "cipSecPhase2GWOutEncrypts")
    {
        cipsecphase2gwoutencrypts = value;
    }
    if(value_path == "cipSecPhase2GWOutOctets")
    {
        cipsecphase2gwoutoctets = value;
    }
    if(value_path == "cipSecPhase2GWOutOctWraps")
    {
        cipsecphase2gwoutoctwraps = value;
    }
    if(value_path == "cipSecPhase2GWOutPkts")
    {
        cipsecphase2gwoutpkts = value;
    }
    if(value_path == "cipSecPhase2GWOutUncompOctets")
    {
        cipsecphase2gwoutuncompoctets = value;
    }
    if(value_path == "cipSecPhase2GWOutUncompOctWraps")
    {
        cipsecphase2gwoutuncompoctwraps = value;
    }
    if(value_path == "cipSecPhase2GWPreviousTunnels")
    {
        cipsecphase2gwprevioustunnels = value;
    }
    if(value_path == "cipSecPhase2GWProtocolUseFails")
    {
        cipsecphase2gwprotocolusefails = value;
    }
    if(value_path == "cipSecPhase2GWSysCapFails")
    {
        cipsecphase2gwsyscapfails = value;
    }
}

CiscoIpsecFlowMonitorMib::Ciketunnelhisttable::Ciketunnelhisttable()
{
    yang_name = "cikeTunnelHistTable"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB";
}

CiscoIpsecFlowMonitorMib::Ciketunnelhisttable::~Ciketunnelhisttable()
{
}

bool CiscoIpsecFlowMonitorMib::Ciketunnelhisttable::has_data() const
{
    for (std::size_t index=0; index<ciketunnelhistentry_.size(); index++)
    {
        if(ciketunnelhistentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpsecFlowMonitorMib::Ciketunnelhisttable::has_operation() const
{
    for (std::size_t index=0; index<ciketunnelhistentry_.size(); index++)
    {
        if(ciketunnelhistentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIpsecFlowMonitorMib::Ciketunnelhisttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cikeTunnelHistTable";

    return path_buffer.str();

}

const EntityPath CiscoIpsecFlowMonitorMib::Ciketunnelhisttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecFlowMonitorMib::Ciketunnelhisttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cikeTunnelHistEntry")
    {
        for(auto const & c : ciketunnelhistentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpsecFlowMonitorMib::Ciketunnelhisttable::Ciketunnelhistentry>();
        c->parent = this;
        ciketunnelhistentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecFlowMonitorMib::Ciketunnelhisttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciketunnelhistentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpsecFlowMonitorMib::Ciketunnelhisttable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIpsecFlowMonitorMib::Ciketunnelhisttable::Ciketunnelhistentry::Ciketunnelhistentry()
    :
    ciketunhistindex{YType::int32, "cikeTunHistIndex"},
    ciketunhistactiveindex{YType::int32, "cikeTunHistActiveIndex"},
    ciketunhistactivetime{YType::int32, "cikeTunHistActiveTime"},
    ciketunhistauthmethod{YType::enumeration, "cikeTunHistAuthMethod"},
    ciketunhistdiffhellmangrp{YType::enumeration, "cikeTunHistDiffHellmanGrp"},
    ciketunhistencryptalgo{YType::enumeration, "cikeTunHistEncryptAlgo"},
    ciketunhisthashalgo{YType::enumeration, "cikeTunHistHashAlgo"},
    ciketunhistindroppkts{YType::uint32, "cikeTunHistInDropPkts"},
    ciketunhistinnotifys{YType::uint32, "cikeTunHistInNotifys"},
    ciketunhistinoctets{YType::uint32, "cikeTunHistInOctets"},
    ciketunhistinp2exchginvalids{YType::uint32, "cikeTunHistInP2ExchgInvalids"},
    ciketunhistinp2exchgrejects{YType::uint32, "cikeTunHistInP2ExchgRejects"},
    ciketunhistinp2exchgs{YType::uint32, "cikeTunHistInP2Exchgs"},
    ciketunhistinp2sadelrequests{YType::uint32, "cikeTunHistInP2SaDelRequests"},
    ciketunhistinpkts{YType::uint32, "cikeTunHistInPkts"},
    ciketunhistlifetime{YType::int32, "cikeTunHistLifeTime"},
    ciketunhistlocaladdr{YType::str, "cikeTunHistLocalAddr"},
    ciketunhistlocalname{YType::str, "cikeTunHistLocalName"},
    ciketunhistnegomode{YType::enumeration, "cikeTunHistNegoMode"},
    ciketunhistoutdroppkts{YType::uint32, "cikeTunHistOutDropPkts"},
    ciketunhistoutnotifys{YType::uint32, "cikeTunHistOutNotifys"},
    ciketunhistoutoctets{YType::uint32, "cikeTunHistOutOctets"},
    ciketunhistoutp2exchginvalids{YType::uint32, "cikeTunHistOutP2ExchgInvalids"},
    ciketunhistoutp2exchgrejects{YType::uint32, "cikeTunHistOutP2ExchgRejects"},
    ciketunhistoutp2exchgs{YType::uint32, "cikeTunHistOutP2Exchgs"},
    ciketunhistoutp2sadelrequests{YType::uint32, "cikeTunHistOutP2SaDelRequests"},
    ciketunhistoutpkts{YType::uint32, "cikeTunHistOutPkts"},
    ciketunhistpeerintindex{YType::int32, "cikeTunHistPeerIntIndex"},
    ciketunhistpeerlocaltype{YType::enumeration, "cikeTunHistPeerLocalType"},
    ciketunhistpeerlocalvalue{YType::str, "cikeTunHistPeerLocalValue"},
    ciketunhistpeerremotetype{YType::enumeration, "cikeTunHistPeerRemoteType"},
    ciketunhistpeerremotevalue{YType::str, "cikeTunHistPeerRemoteValue"},
    ciketunhistremoteaddr{YType::str, "cikeTunHistRemoteAddr"},
    ciketunhistremotename{YType::str, "cikeTunHistRemoteName"},
    ciketunhiststarttime{YType::uint32, "cikeTunHistStartTime"},
    ciketunhisttermreason{YType::enumeration, "cikeTunHistTermReason"},
    ciketunhisttotalrefreshes{YType::uint32, "cikeTunHistTotalRefreshes"},
    ciketunhisttotalsas{YType::uint32, "cikeTunHistTotalSas"}
{
    yang_name = "cikeTunnelHistEntry"; yang_parent_name = "cikeTunnelHistTable";
}

CiscoIpsecFlowMonitorMib::Ciketunnelhisttable::Ciketunnelhistentry::~Ciketunnelhistentry()
{
}

bool CiscoIpsecFlowMonitorMib::Ciketunnelhisttable::Ciketunnelhistentry::has_data() const
{
    return ciketunhistindex.is_set
	|| ciketunhistactiveindex.is_set
	|| ciketunhistactivetime.is_set
	|| ciketunhistauthmethod.is_set
	|| ciketunhistdiffhellmangrp.is_set
	|| ciketunhistencryptalgo.is_set
	|| ciketunhisthashalgo.is_set
	|| ciketunhistindroppkts.is_set
	|| ciketunhistinnotifys.is_set
	|| ciketunhistinoctets.is_set
	|| ciketunhistinp2exchginvalids.is_set
	|| ciketunhistinp2exchgrejects.is_set
	|| ciketunhistinp2exchgs.is_set
	|| ciketunhistinp2sadelrequests.is_set
	|| ciketunhistinpkts.is_set
	|| ciketunhistlifetime.is_set
	|| ciketunhistlocaladdr.is_set
	|| ciketunhistlocalname.is_set
	|| ciketunhistnegomode.is_set
	|| ciketunhistoutdroppkts.is_set
	|| ciketunhistoutnotifys.is_set
	|| ciketunhistoutoctets.is_set
	|| ciketunhistoutp2exchginvalids.is_set
	|| ciketunhistoutp2exchgrejects.is_set
	|| ciketunhistoutp2exchgs.is_set
	|| ciketunhistoutp2sadelrequests.is_set
	|| ciketunhistoutpkts.is_set
	|| ciketunhistpeerintindex.is_set
	|| ciketunhistpeerlocaltype.is_set
	|| ciketunhistpeerlocalvalue.is_set
	|| ciketunhistpeerremotetype.is_set
	|| ciketunhistpeerremotevalue.is_set
	|| ciketunhistremoteaddr.is_set
	|| ciketunhistremotename.is_set
	|| ciketunhiststarttime.is_set
	|| ciketunhisttermreason.is_set
	|| ciketunhisttotalrefreshes.is_set
	|| ciketunhisttotalsas.is_set;
}

bool CiscoIpsecFlowMonitorMib::Ciketunnelhisttable::Ciketunnelhistentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ciketunhistindex.operation)
	|| is_set(ciketunhistactiveindex.operation)
	|| is_set(ciketunhistactivetime.operation)
	|| is_set(ciketunhistauthmethod.operation)
	|| is_set(ciketunhistdiffhellmangrp.operation)
	|| is_set(ciketunhistencryptalgo.operation)
	|| is_set(ciketunhisthashalgo.operation)
	|| is_set(ciketunhistindroppkts.operation)
	|| is_set(ciketunhistinnotifys.operation)
	|| is_set(ciketunhistinoctets.operation)
	|| is_set(ciketunhistinp2exchginvalids.operation)
	|| is_set(ciketunhistinp2exchgrejects.operation)
	|| is_set(ciketunhistinp2exchgs.operation)
	|| is_set(ciketunhistinp2sadelrequests.operation)
	|| is_set(ciketunhistinpkts.operation)
	|| is_set(ciketunhistlifetime.operation)
	|| is_set(ciketunhistlocaladdr.operation)
	|| is_set(ciketunhistlocalname.operation)
	|| is_set(ciketunhistnegomode.operation)
	|| is_set(ciketunhistoutdroppkts.operation)
	|| is_set(ciketunhistoutnotifys.operation)
	|| is_set(ciketunhistoutoctets.operation)
	|| is_set(ciketunhistoutp2exchginvalids.operation)
	|| is_set(ciketunhistoutp2exchgrejects.operation)
	|| is_set(ciketunhistoutp2exchgs.operation)
	|| is_set(ciketunhistoutp2sadelrequests.operation)
	|| is_set(ciketunhistoutpkts.operation)
	|| is_set(ciketunhistpeerintindex.operation)
	|| is_set(ciketunhistpeerlocaltype.operation)
	|| is_set(ciketunhistpeerlocalvalue.operation)
	|| is_set(ciketunhistpeerremotetype.operation)
	|| is_set(ciketunhistpeerremotevalue.operation)
	|| is_set(ciketunhistremoteaddr.operation)
	|| is_set(ciketunhistremotename.operation)
	|| is_set(ciketunhiststarttime.operation)
	|| is_set(ciketunhisttermreason.operation)
	|| is_set(ciketunhisttotalrefreshes.operation)
	|| is_set(ciketunhisttotalsas.operation);
}

std::string CiscoIpsecFlowMonitorMib::Ciketunnelhisttable::Ciketunnelhistentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cikeTunnelHistEntry" <<"[cikeTunHistIndex='" <<ciketunhistindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpsecFlowMonitorMib::Ciketunnelhisttable::Ciketunnelhistentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/cikeTunnelHistTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciketunhistindex.is_set || is_set(ciketunhistindex.operation)) leaf_name_data.push_back(ciketunhistindex.get_name_leafdata());
    if (ciketunhistactiveindex.is_set || is_set(ciketunhistactiveindex.operation)) leaf_name_data.push_back(ciketunhistactiveindex.get_name_leafdata());
    if (ciketunhistactivetime.is_set || is_set(ciketunhistactivetime.operation)) leaf_name_data.push_back(ciketunhistactivetime.get_name_leafdata());
    if (ciketunhistauthmethod.is_set || is_set(ciketunhistauthmethod.operation)) leaf_name_data.push_back(ciketunhistauthmethod.get_name_leafdata());
    if (ciketunhistdiffhellmangrp.is_set || is_set(ciketunhistdiffhellmangrp.operation)) leaf_name_data.push_back(ciketunhistdiffhellmangrp.get_name_leafdata());
    if (ciketunhistencryptalgo.is_set || is_set(ciketunhistencryptalgo.operation)) leaf_name_data.push_back(ciketunhistencryptalgo.get_name_leafdata());
    if (ciketunhisthashalgo.is_set || is_set(ciketunhisthashalgo.operation)) leaf_name_data.push_back(ciketunhisthashalgo.get_name_leafdata());
    if (ciketunhistindroppkts.is_set || is_set(ciketunhistindroppkts.operation)) leaf_name_data.push_back(ciketunhistindroppkts.get_name_leafdata());
    if (ciketunhistinnotifys.is_set || is_set(ciketunhistinnotifys.operation)) leaf_name_data.push_back(ciketunhistinnotifys.get_name_leafdata());
    if (ciketunhistinoctets.is_set || is_set(ciketunhistinoctets.operation)) leaf_name_data.push_back(ciketunhistinoctets.get_name_leafdata());
    if (ciketunhistinp2exchginvalids.is_set || is_set(ciketunhistinp2exchginvalids.operation)) leaf_name_data.push_back(ciketunhistinp2exchginvalids.get_name_leafdata());
    if (ciketunhistinp2exchgrejects.is_set || is_set(ciketunhistinp2exchgrejects.operation)) leaf_name_data.push_back(ciketunhistinp2exchgrejects.get_name_leafdata());
    if (ciketunhistinp2exchgs.is_set || is_set(ciketunhistinp2exchgs.operation)) leaf_name_data.push_back(ciketunhistinp2exchgs.get_name_leafdata());
    if (ciketunhistinp2sadelrequests.is_set || is_set(ciketunhistinp2sadelrequests.operation)) leaf_name_data.push_back(ciketunhistinp2sadelrequests.get_name_leafdata());
    if (ciketunhistinpkts.is_set || is_set(ciketunhistinpkts.operation)) leaf_name_data.push_back(ciketunhistinpkts.get_name_leafdata());
    if (ciketunhistlifetime.is_set || is_set(ciketunhistlifetime.operation)) leaf_name_data.push_back(ciketunhistlifetime.get_name_leafdata());
    if (ciketunhistlocaladdr.is_set || is_set(ciketunhistlocaladdr.operation)) leaf_name_data.push_back(ciketunhistlocaladdr.get_name_leafdata());
    if (ciketunhistlocalname.is_set || is_set(ciketunhistlocalname.operation)) leaf_name_data.push_back(ciketunhistlocalname.get_name_leafdata());
    if (ciketunhistnegomode.is_set || is_set(ciketunhistnegomode.operation)) leaf_name_data.push_back(ciketunhistnegomode.get_name_leafdata());
    if (ciketunhistoutdroppkts.is_set || is_set(ciketunhistoutdroppkts.operation)) leaf_name_data.push_back(ciketunhistoutdroppkts.get_name_leafdata());
    if (ciketunhistoutnotifys.is_set || is_set(ciketunhistoutnotifys.operation)) leaf_name_data.push_back(ciketunhistoutnotifys.get_name_leafdata());
    if (ciketunhistoutoctets.is_set || is_set(ciketunhistoutoctets.operation)) leaf_name_data.push_back(ciketunhistoutoctets.get_name_leafdata());
    if (ciketunhistoutp2exchginvalids.is_set || is_set(ciketunhistoutp2exchginvalids.operation)) leaf_name_data.push_back(ciketunhistoutp2exchginvalids.get_name_leafdata());
    if (ciketunhistoutp2exchgrejects.is_set || is_set(ciketunhistoutp2exchgrejects.operation)) leaf_name_data.push_back(ciketunhistoutp2exchgrejects.get_name_leafdata());
    if (ciketunhistoutp2exchgs.is_set || is_set(ciketunhistoutp2exchgs.operation)) leaf_name_data.push_back(ciketunhistoutp2exchgs.get_name_leafdata());
    if (ciketunhistoutp2sadelrequests.is_set || is_set(ciketunhistoutp2sadelrequests.operation)) leaf_name_data.push_back(ciketunhistoutp2sadelrequests.get_name_leafdata());
    if (ciketunhistoutpkts.is_set || is_set(ciketunhistoutpkts.operation)) leaf_name_data.push_back(ciketunhistoutpkts.get_name_leafdata());
    if (ciketunhistpeerintindex.is_set || is_set(ciketunhistpeerintindex.operation)) leaf_name_data.push_back(ciketunhistpeerintindex.get_name_leafdata());
    if (ciketunhistpeerlocaltype.is_set || is_set(ciketunhistpeerlocaltype.operation)) leaf_name_data.push_back(ciketunhistpeerlocaltype.get_name_leafdata());
    if (ciketunhistpeerlocalvalue.is_set || is_set(ciketunhistpeerlocalvalue.operation)) leaf_name_data.push_back(ciketunhistpeerlocalvalue.get_name_leafdata());
    if (ciketunhistpeerremotetype.is_set || is_set(ciketunhistpeerremotetype.operation)) leaf_name_data.push_back(ciketunhistpeerremotetype.get_name_leafdata());
    if (ciketunhistpeerremotevalue.is_set || is_set(ciketunhistpeerremotevalue.operation)) leaf_name_data.push_back(ciketunhistpeerremotevalue.get_name_leafdata());
    if (ciketunhistremoteaddr.is_set || is_set(ciketunhistremoteaddr.operation)) leaf_name_data.push_back(ciketunhistremoteaddr.get_name_leafdata());
    if (ciketunhistremotename.is_set || is_set(ciketunhistremotename.operation)) leaf_name_data.push_back(ciketunhistremotename.get_name_leafdata());
    if (ciketunhiststarttime.is_set || is_set(ciketunhiststarttime.operation)) leaf_name_data.push_back(ciketunhiststarttime.get_name_leafdata());
    if (ciketunhisttermreason.is_set || is_set(ciketunhisttermreason.operation)) leaf_name_data.push_back(ciketunhisttermreason.get_name_leafdata());
    if (ciketunhisttotalrefreshes.is_set || is_set(ciketunhisttotalrefreshes.operation)) leaf_name_data.push_back(ciketunhisttotalrefreshes.get_name_leafdata());
    if (ciketunhisttotalsas.is_set || is_set(ciketunhisttotalsas.operation)) leaf_name_data.push_back(ciketunhisttotalsas.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecFlowMonitorMib::Ciketunnelhisttable::Ciketunnelhistentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecFlowMonitorMib::Ciketunnelhisttable::Ciketunnelhistentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpsecFlowMonitorMib::Ciketunnelhisttable::Ciketunnelhistentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cikeTunHistIndex")
    {
        ciketunhistindex = value;
    }
    if(value_path == "cikeTunHistActiveIndex")
    {
        ciketunhistactiveindex = value;
    }
    if(value_path == "cikeTunHistActiveTime")
    {
        ciketunhistactivetime = value;
    }
    if(value_path == "cikeTunHistAuthMethod")
    {
        ciketunhistauthmethod = value;
    }
    if(value_path == "cikeTunHistDiffHellmanGrp")
    {
        ciketunhistdiffhellmangrp = value;
    }
    if(value_path == "cikeTunHistEncryptAlgo")
    {
        ciketunhistencryptalgo = value;
    }
    if(value_path == "cikeTunHistHashAlgo")
    {
        ciketunhisthashalgo = value;
    }
    if(value_path == "cikeTunHistInDropPkts")
    {
        ciketunhistindroppkts = value;
    }
    if(value_path == "cikeTunHistInNotifys")
    {
        ciketunhistinnotifys = value;
    }
    if(value_path == "cikeTunHistInOctets")
    {
        ciketunhistinoctets = value;
    }
    if(value_path == "cikeTunHistInP2ExchgInvalids")
    {
        ciketunhistinp2exchginvalids = value;
    }
    if(value_path == "cikeTunHistInP2ExchgRejects")
    {
        ciketunhistinp2exchgrejects = value;
    }
    if(value_path == "cikeTunHistInP2Exchgs")
    {
        ciketunhistinp2exchgs = value;
    }
    if(value_path == "cikeTunHistInP2SaDelRequests")
    {
        ciketunhistinp2sadelrequests = value;
    }
    if(value_path == "cikeTunHistInPkts")
    {
        ciketunhistinpkts = value;
    }
    if(value_path == "cikeTunHistLifeTime")
    {
        ciketunhistlifetime = value;
    }
    if(value_path == "cikeTunHistLocalAddr")
    {
        ciketunhistlocaladdr = value;
    }
    if(value_path == "cikeTunHistLocalName")
    {
        ciketunhistlocalname = value;
    }
    if(value_path == "cikeTunHistNegoMode")
    {
        ciketunhistnegomode = value;
    }
    if(value_path == "cikeTunHistOutDropPkts")
    {
        ciketunhistoutdroppkts = value;
    }
    if(value_path == "cikeTunHistOutNotifys")
    {
        ciketunhistoutnotifys = value;
    }
    if(value_path == "cikeTunHistOutOctets")
    {
        ciketunhistoutoctets = value;
    }
    if(value_path == "cikeTunHistOutP2ExchgInvalids")
    {
        ciketunhistoutp2exchginvalids = value;
    }
    if(value_path == "cikeTunHistOutP2ExchgRejects")
    {
        ciketunhistoutp2exchgrejects = value;
    }
    if(value_path == "cikeTunHistOutP2Exchgs")
    {
        ciketunhistoutp2exchgs = value;
    }
    if(value_path == "cikeTunHistOutP2SaDelRequests")
    {
        ciketunhistoutp2sadelrequests = value;
    }
    if(value_path == "cikeTunHistOutPkts")
    {
        ciketunhistoutpkts = value;
    }
    if(value_path == "cikeTunHistPeerIntIndex")
    {
        ciketunhistpeerintindex = value;
    }
    if(value_path == "cikeTunHistPeerLocalType")
    {
        ciketunhistpeerlocaltype = value;
    }
    if(value_path == "cikeTunHistPeerLocalValue")
    {
        ciketunhistpeerlocalvalue = value;
    }
    if(value_path == "cikeTunHistPeerRemoteType")
    {
        ciketunhistpeerremotetype = value;
    }
    if(value_path == "cikeTunHistPeerRemoteValue")
    {
        ciketunhistpeerremotevalue = value;
    }
    if(value_path == "cikeTunHistRemoteAddr")
    {
        ciketunhistremoteaddr = value;
    }
    if(value_path == "cikeTunHistRemoteName")
    {
        ciketunhistremotename = value;
    }
    if(value_path == "cikeTunHistStartTime")
    {
        ciketunhiststarttime = value;
    }
    if(value_path == "cikeTunHistTermReason")
    {
        ciketunhisttermreason = value;
    }
    if(value_path == "cikeTunHistTotalRefreshes")
    {
        ciketunhisttotalrefreshes = value;
    }
    if(value_path == "cikeTunHistTotalSas")
    {
        ciketunhisttotalsas = value;
    }
}

CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable::Cipsectunnelhisttable()
{
    yang_name = "cipSecTunnelHistTable"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB";
}

CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable::~Cipsectunnelhisttable()
{
}

bool CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable::has_data() const
{
    for (std::size_t index=0; index<cipsectunnelhistentry_.size(); index++)
    {
        if(cipsectunnelhistentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable::has_operation() const
{
    for (std::size_t index=0; index<cipsectunnelhistentry_.size(); index++)
    {
        if(cipsectunnelhistentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecTunnelHistTable";

    return path_buffer.str();

}

const EntityPath CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipSecTunnelHistEntry")
    {
        for(auto const & c : cipsectunnelhistentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable::Cipsectunnelhistentry>();
        c->parent = this;
        cipsectunnelhistentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipsectunnelhistentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable::Cipsectunnelhistentry::Cipsectunnelhistentry()
    :
    cipsectunhistindex{YType::int32, "cipSecTunHistIndex"},
    cipsectunhistactiveindex{YType::int32, "cipSecTunHistActiveIndex"},
    cipsectunhistactivetime{YType::int32, "cipSecTunHistActiveTime"},
    cipsectunhistencapmode{YType::enumeration, "cipSecTunHistEncapMode"},
    cipsectunhisthcindecompoctets{YType::uint64, "cipSecTunHistHcInDecompOctets"},
    cipsectunhisthcinoctets{YType::uint64, "cipSecTunHistHcInOctets"},
    cipsectunhisthcoutoctets{YType::uint64, "cipSecTunHistHcOutOctets"},
    cipsectunhisthcoutuncompoctets{YType::uint64, "cipSecTunHistHcOutUncompOctets"},
    cipsectunhistiketunnelindex{YType::int32, "cipSecTunHistIkeTunnelIndex"},
    cipsectunhistinauthfails{YType::uint32, "cipSecTunHistInAuthFails"},
    cipsectunhistinauths{YType::uint32, "cipSecTunHistInAuths"},
    cipsectunhistindecompoctets{YType::uint32, "cipSecTunHistInDecompOctets"},
    cipsectunhistindecompoctwraps{YType::uint32, "cipSecTunHistInDecompOctWraps"},
    cipsectunhistindecryptfails{YType::uint32, "cipSecTunHistInDecryptFails"},
    cipsectunhistindecrypts{YType::uint32, "cipSecTunHistInDecrypts"},
    cipsectunhistindroppkts{YType::uint32, "cipSecTunHistInDropPkts"},
    cipsectunhistinoctets{YType::uint32, "cipSecTunHistInOctets"},
    cipsectunhistinoctwraps{YType::uint32, "cipSecTunHistInOctWraps"},
    cipsectunhistinpkts{YType::uint32, "cipSecTunHistInPkts"},
    cipsectunhistinreplaydroppkts{YType::uint32, "cipSecTunHistInReplayDropPkts"},
    cipsectunhistinsaahauthalgo{YType::enumeration, "cipSecTunHistInSaAhAuthAlgo"},
    cipsectunhistinsadecompalgo{YType::enumeration, "cipSecTunHistInSaDecompAlgo"},
    cipsectunhistinsadiffhellmangrp{YType::enumeration, "cipSecTunHistInSaDiffHellmanGrp"},
    cipsectunhistinsaencryptalgo{YType::enumeration, "cipSecTunHistInSaEncryptAlgo"},
    cipsectunhistinsaespauthalgo{YType::enumeration, "cipSecTunHistInSaEspAuthAlgo"},
    cipsectunhistkeytype{YType::enumeration, "cipSecTunHistKeyType"},
    cipsectunhistlifesize{YType::int32, "cipSecTunHistLifeSize"},
    cipsectunhistlifetime{YType::int32, "cipSecTunHistLifeTime"},
    cipsectunhistlocaladdr{YType::str, "cipSecTunHistLocalAddr"},
    cipsectunhistoutauthfails{YType::uint32, "cipSecTunHistOutAuthFails"},
    cipsectunhistoutauths{YType::uint32, "cipSecTunHistOutAuths"},
    cipsectunhistoutdroppkts{YType::uint32, "cipSecTunHistOutDropPkts"},
    cipsectunhistoutencryptfails{YType::uint32, "cipSecTunHistOutEncryptFails"},
    cipsectunhistoutencrypts{YType::uint32, "cipSecTunHistOutEncrypts"},
    cipsectunhistoutoctets{YType::uint32, "cipSecTunHistOutOctets"},
    cipsectunhistoutoctwraps{YType::uint32, "cipSecTunHistOutOctWraps"},
    cipsectunhistoutpkts{YType::uint32, "cipSecTunHistOutPkts"},
    cipsectunhistoutsaahauthalgo{YType::enumeration, "cipSecTunHistOutSaAhAuthAlgo"},
    cipsectunhistoutsacompalgo{YType::enumeration, "cipSecTunHistOutSaCompAlgo"},
    cipsectunhistoutsadiffhellmangrp{YType::enumeration, "cipSecTunHistOutSaDiffHellmanGrp"},
    cipsectunhistoutsaencryptalgo{YType::enumeration, "cipSecTunHistOutSaEncryptAlgo"},
    cipsectunhistoutsaespauthalgo{YType::enumeration, "cipSecTunHistOutSaEspAuthAlgo"},
    cipsectunhistoutuncompoctets{YType::uint32, "cipSecTunHistOutUncompOctets"},
    cipsectunhistoutuncompoctwraps{YType::uint32, "cipSecTunHistOutUncompOctWraps"},
    cipsectunhistremoteaddr{YType::str, "cipSecTunHistRemoteAddr"},
    cipsectunhiststarttime{YType::uint32, "cipSecTunHistStartTime"},
    cipsectunhisttermreason{YType::enumeration, "cipSecTunHistTermReason"},
    cipsectunhisttotalrefreshes{YType::uint32, "cipSecTunHistTotalRefreshes"},
    cipsectunhisttotalsas{YType::uint32, "cipSecTunHistTotalSas"}
{
    yang_name = "cipSecTunnelHistEntry"; yang_parent_name = "cipSecTunnelHistTable";
}

CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable::Cipsectunnelhistentry::~Cipsectunnelhistentry()
{
}

bool CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable::Cipsectunnelhistentry::has_data() const
{
    return cipsectunhistindex.is_set
	|| cipsectunhistactiveindex.is_set
	|| cipsectunhistactivetime.is_set
	|| cipsectunhistencapmode.is_set
	|| cipsectunhisthcindecompoctets.is_set
	|| cipsectunhisthcinoctets.is_set
	|| cipsectunhisthcoutoctets.is_set
	|| cipsectunhisthcoutuncompoctets.is_set
	|| cipsectunhistiketunnelindex.is_set
	|| cipsectunhistinauthfails.is_set
	|| cipsectunhistinauths.is_set
	|| cipsectunhistindecompoctets.is_set
	|| cipsectunhistindecompoctwraps.is_set
	|| cipsectunhistindecryptfails.is_set
	|| cipsectunhistindecrypts.is_set
	|| cipsectunhistindroppkts.is_set
	|| cipsectunhistinoctets.is_set
	|| cipsectunhistinoctwraps.is_set
	|| cipsectunhistinpkts.is_set
	|| cipsectunhistinreplaydroppkts.is_set
	|| cipsectunhistinsaahauthalgo.is_set
	|| cipsectunhistinsadecompalgo.is_set
	|| cipsectunhistinsadiffhellmangrp.is_set
	|| cipsectunhistinsaencryptalgo.is_set
	|| cipsectunhistinsaespauthalgo.is_set
	|| cipsectunhistkeytype.is_set
	|| cipsectunhistlifesize.is_set
	|| cipsectunhistlifetime.is_set
	|| cipsectunhistlocaladdr.is_set
	|| cipsectunhistoutauthfails.is_set
	|| cipsectunhistoutauths.is_set
	|| cipsectunhistoutdroppkts.is_set
	|| cipsectunhistoutencryptfails.is_set
	|| cipsectunhistoutencrypts.is_set
	|| cipsectunhistoutoctets.is_set
	|| cipsectunhistoutoctwraps.is_set
	|| cipsectunhistoutpkts.is_set
	|| cipsectunhistoutsaahauthalgo.is_set
	|| cipsectunhistoutsacompalgo.is_set
	|| cipsectunhistoutsadiffhellmangrp.is_set
	|| cipsectunhistoutsaencryptalgo.is_set
	|| cipsectunhistoutsaespauthalgo.is_set
	|| cipsectunhistoutuncompoctets.is_set
	|| cipsectunhistoutuncompoctwraps.is_set
	|| cipsectunhistremoteaddr.is_set
	|| cipsectunhiststarttime.is_set
	|| cipsectunhisttermreason.is_set
	|| cipsectunhisttotalrefreshes.is_set
	|| cipsectunhisttotalsas.is_set;
}

bool CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable::Cipsectunnelhistentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cipsectunhistindex.operation)
	|| is_set(cipsectunhistactiveindex.operation)
	|| is_set(cipsectunhistactivetime.operation)
	|| is_set(cipsectunhistencapmode.operation)
	|| is_set(cipsectunhisthcindecompoctets.operation)
	|| is_set(cipsectunhisthcinoctets.operation)
	|| is_set(cipsectunhisthcoutoctets.operation)
	|| is_set(cipsectunhisthcoutuncompoctets.operation)
	|| is_set(cipsectunhistiketunnelindex.operation)
	|| is_set(cipsectunhistinauthfails.operation)
	|| is_set(cipsectunhistinauths.operation)
	|| is_set(cipsectunhistindecompoctets.operation)
	|| is_set(cipsectunhistindecompoctwraps.operation)
	|| is_set(cipsectunhistindecryptfails.operation)
	|| is_set(cipsectunhistindecrypts.operation)
	|| is_set(cipsectunhistindroppkts.operation)
	|| is_set(cipsectunhistinoctets.operation)
	|| is_set(cipsectunhistinoctwraps.operation)
	|| is_set(cipsectunhistinpkts.operation)
	|| is_set(cipsectunhistinreplaydroppkts.operation)
	|| is_set(cipsectunhistinsaahauthalgo.operation)
	|| is_set(cipsectunhistinsadecompalgo.operation)
	|| is_set(cipsectunhistinsadiffhellmangrp.operation)
	|| is_set(cipsectunhistinsaencryptalgo.operation)
	|| is_set(cipsectunhistinsaespauthalgo.operation)
	|| is_set(cipsectunhistkeytype.operation)
	|| is_set(cipsectunhistlifesize.operation)
	|| is_set(cipsectunhistlifetime.operation)
	|| is_set(cipsectunhistlocaladdr.operation)
	|| is_set(cipsectunhistoutauthfails.operation)
	|| is_set(cipsectunhistoutauths.operation)
	|| is_set(cipsectunhistoutdroppkts.operation)
	|| is_set(cipsectunhistoutencryptfails.operation)
	|| is_set(cipsectunhistoutencrypts.operation)
	|| is_set(cipsectunhistoutoctets.operation)
	|| is_set(cipsectunhistoutoctwraps.operation)
	|| is_set(cipsectunhistoutpkts.operation)
	|| is_set(cipsectunhistoutsaahauthalgo.operation)
	|| is_set(cipsectunhistoutsacompalgo.operation)
	|| is_set(cipsectunhistoutsadiffhellmangrp.operation)
	|| is_set(cipsectunhistoutsaencryptalgo.operation)
	|| is_set(cipsectunhistoutsaespauthalgo.operation)
	|| is_set(cipsectunhistoutuncompoctets.operation)
	|| is_set(cipsectunhistoutuncompoctwraps.operation)
	|| is_set(cipsectunhistremoteaddr.operation)
	|| is_set(cipsectunhiststarttime.operation)
	|| is_set(cipsectunhisttermreason.operation)
	|| is_set(cipsectunhisttotalrefreshes.operation)
	|| is_set(cipsectunhisttotalsas.operation);
}

std::string CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable::Cipsectunnelhistentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecTunnelHistEntry" <<"[cipSecTunHistIndex='" <<cipsectunhistindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable::Cipsectunnelhistentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/cipSecTunnelHistTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsectunhistindex.is_set || is_set(cipsectunhistindex.operation)) leaf_name_data.push_back(cipsectunhistindex.get_name_leafdata());
    if (cipsectunhistactiveindex.is_set || is_set(cipsectunhistactiveindex.operation)) leaf_name_data.push_back(cipsectunhistactiveindex.get_name_leafdata());
    if (cipsectunhistactivetime.is_set || is_set(cipsectunhistactivetime.operation)) leaf_name_data.push_back(cipsectunhistactivetime.get_name_leafdata());
    if (cipsectunhistencapmode.is_set || is_set(cipsectunhistencapmode.operation)) leaf_name_data.push_back(cipsectunhistencapmode.get_name_leafdata());
    if (cipsectunhisthcindecompoctets.is_set || is_set(cipsectunhisthcindecompoctets.operation)) leaf_name_data.push_back(cipsectunhisthcindecompoctets.get_name_leafdata());
    if (cipsectunhisthcinoctets.is_set || is_set(cipsectunhisthcinoctets.operation)) leaf_name_data.push_back(cipsectunhisthcinoctets.get_name_leafdata());
    if (cipsectunhisthcoutoctets.is_set || is_set(cipsectunhisthcoutoctets.operation)) leaf_name_data.push_back(cipsectunhisthcoutoctets.get_name_leafdata());
    if (cipsectunhisthcoutuncompoctets.is_set || is_set(cipsectunhisthcoutuncompoctets.operation)) leaf_name_data.push_back(cipsectunhisthcoutuncompoctets.get_name_leafdata());
    if (cipsectunhistiketunnelindex.is_set || is_set(cipsectunhistiketunnelindex.operation)) leaf_name_data.push_back(cipsectunhistiketunnelindex.get_name_leafdata());
    if (cipsectunhistinauthfails.is_set || is_set(cipsectunhistinauthfails.operation)) leaf_name_data.push_back(cipsectunhistinauthfails.get_name_leafdata());
    if (cipsectunhistinauths.is_set || is_set(cipsectunhistinauths.operation)) leaf_name_data.push_back(cipsectunhistinauths.get_name_leafdata());
    if (cipsectunhistindecompoctets.is_set || is_set(cipsectunhistindecompoctets.operation)) leaf_name_data.push_back(cipsectunhistindecompoctets.get_name_leafdata());
    if (cipsectunhistindecompoctwraps.is_set || is_set(cipsectunhistindecompoctwraps.operation)) leaf_name_data.push_back(cipsectunhistindecompoctwraps.get_name_leafdata());
    if (cipsectunhistindecryptfails.is_set || is_set(cipsectunhistindecryptfails.operation)) leaf_name_data.push_back(cipsectunhistindecryptfails.get_name_leafdata());
    if (cipsectunhistindecrypts.is_set || is_set(cipsectunhistindecrypts.operation)) leaf_name_data.push_back(cipsectunhistindecrypts.get_name_leafdata());
    if (cipsectunhistindroppkts.is_set || is_set(cipsectunhistindroppkts.operation)) leaf_name_data.push_back(cipsectunhistindroppkts.get_name_leafdata());
    if (cipsectunhistinoctets.is_set || is_set(cipsectunhistinoctets.operation)) leaf_name_data.push_back(cipsectunhistinoctets.get_name_leafdata());
    if (cipsectunhistinoctwraps.is_set || is_set(cipsectunhistinoctwraps.operation)) leaf_name_data.push_back(cipsectunhistinoctwraps.get_name_leafdata());
    if (cipsectunhistinpkts.is_set || is_set(cipsectunhistinpkts.operation)) leaf_name_data.push_back(cipsectunhistinpkts.get_name_leafdata());
    if (cipsectunhistinreplaydroppkts.is_set || is_set(cipsectunhistinreplaydroppkts.operation)) leaf_name_data.push_back(cipsectunhistinreplaydroppkts.get_name_leafdata());
    if (cipsectunhistinsaahauthalgo.is_set || is_set(cipsectunhistinsaahauthalgo.operation)) leaf_name_data.push_back(cipsectunhistinsaahauthalgo.get_name_leafdata());
    if (cipsectunhistinsadecompalgo.is_set || is_set(cipsectunhistinsadecompalgo.operation)) leaf_name_data.push_back(cipsectunhistinsadecompalgo.get_name_leafdata());
    if (cipsectunhistinsadiffhellmangrp.is_set || is_set(cipsectunhistinsadiffhellmangrp.operation)) leaf_name_data.push_back(cipsectunhistinsadiffhellmangrp.get_name_leafdata());
    if (cipsectunhistinsaencryptalgo.is_set || is_set(cipsectunhistinsaencryptalgo.operation)) leaf_name_data.push_back(cipsectunhistinsaencryptalgo.get_name_leafdata());
    if (cipsectunhistinsaespauthalgo.is_set || is_set(cipsectunhistinsaespauthalgo.operation)) leaf_name_data.push_back(cipsectunhistinsaespauthalgo.get_name_leafdata());
    if (cipsectunhistkeytype.is_set || is_set(cipsectunhistkeytype.operation)) leaf_name_data.push_back(cipsectunhistkeytype.get_name_leafdata());
    if (cipsectunhistlifesize.is_set || is_set(cipsectunhistlifesize.operation)) leaf_name_data.push_back(cipsectunhistlifesize.get_name_leafdata());
    if (cipsectunhistlifetime.is_set || is_set(cipsectunhistlifetime.operation)) leaf_name_data.push_back(cipsectunhistlifetime.get_name_leafdata());
    if (cipsectunhistlocaladdr.is_set || is_set(cipsectunhistlocaladdr.operation)) leaf_name_data.push_back(cipsectunhistlocaladdr.get_name_leafdata());
    if (cipsectunhistoutauthfails.is_set || is_set(cipsectunhistoutauthfails.operation)) leaf_name_data.push_back(cipsectunhistoutauthfails.get_name_leafdata());
    if (cipsectunhistoutauths.is_set || is_set(cipsectunhistoutauths.operation)) leaf_name_data.push_back(cipsectunhistoutauths.get_name_leafdata());
    if (cipsectunhistoutdroppkts.is_set || is_set(cipsectunhistoutdroppkts.operation)) leaf_name_data.push_back(cipsectunhistoutdroppkts.get_name_leafdata());
    if (cipsectunhistoutencryptfails.is_set || is_set(cipsectunhistoutencryptfails.operation)) leaf_name_data.push_back(cipsectunhistoutencryptfails.get_name_leafdata());
    if (cipsectunhistoutencrypts.is_set || is_set(cipsectunhistoutencrypts.operation)) leaf_name_data.push_back(cipsectunhistoutencrypts.get_name_leafdata());
    if (cipsectunhistoutoctets.is_set || is_set(cipsectunhistoutoctets.operation)) leaf_name_data.push_back(cipsectunhistoutoctets.get_name_leafdata());
    if (cipsectunhistoutoctwraps.is_set || is_set(cipsectunhistoutoctwraps.operation)) leaf_name_data.push_back(cipsectunhistoutoctwraps.get_name_leafdata());
    if (cipsectunhistoutpkts.is_set || is_set(cipsectunhistoutpkts.operation)) leaf_name_data.push_back(cipsectunhistoutpkts.get_name_leafdata());
    if (cipsectunhistoutsaahauthalgo.is_set || is_set(cipsectunhistoutsaahauthalgo.operation)) leaf_name_data.push_back(cipsectunhistoutsaahauthalgo.get_name_leafdata());
    if (cipsectunhistoutsacompalgo.is_set || is_set(cipsectunhistoutsacompalgo.operation)) leaf_name_data.push_back(cipsectunhistoutsacompalgo.get_name_leafdata());
    if (cipsectunhistoutsadiffhellmangrp.is_set || is_set(cipsectunhistoutsadiffhellmangrp.operation)) leaf_name_data.push_back(cipsectunhistoutsadiffhellmangrp.get_name_leafdata());
    if (cipsectunhistoutsaencryptalgo.is_set || is_set(cipsectunhistoutsaencryptalgo.operation)) leaf_name_data.push_back(cipsectunhistoutsaencryptalgo.get_name_leafdata());
    if (cipsectunhistoutsaespauthalgo.is_set || is_set(cipsectunhistoutsaespauthalgo.operation)) leaf_name_data.push_back(cipsectunhistoutsaespauthalgo.get_name_leafdata());
    if (cipsectunhistoutuncompoctets.is_set || is_set(cipsectunhistoutuncompoctets.operation)) leaf_name_data.push_back(cipsectunhistoutuncompoctets.get_name_leafdata());
    if (cipsectunhistoutuncompoctwraps.is_set || is_set(cipsectunhistoutuncompoctwraps.operation)) leaf_name_data.push_back(cipsectunhistoutuncompoctwraps.get_name_leafdata());
    if (cipsectunhistremoteaddr.is_set || is_set(cipsectunhistremoteaddr.operation)) leaf_name_data.push_back(cipsectunhistremoteaddr.get_name_leafdata());
    if (cipsectunhiststarttime.is_set || is_set(cipsectunhiststarttime.operation)) leaf_name_data.push_back(cipsectunhiststarttime.get_name_leafdata());
    if (cipsectunhisttermreason.is_set || is_set(cipsectunhisttermreason.operation)) leaf_name_data.push_back(cipsectunhisttermreason.get_name_leafdata());
    if (cipsectunhisttotalrefreshes.is_set || is_set(cipsectunhisttotalrefreshes.operation)) leaf_name_data.push_back(cipsectunhisttotalrefreshes.get_name_leafdata());
    if (cipsectunhisttotalsas.is_set || is_set(cipsectunhisttotalsas.operation)) leaf_name_data.push_back(cipsectunhisttotalsas.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable::Cipsectunnelhistentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable::Cipsectunnelhistentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable::Cipsectunnelhistentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cipSecTunHistIndex")
    {
        cipsectunhistindex = value;
    }
    if(value_path == "cipSecTunHistActiveIndex")
    {
        cipsectunhistactiveindex = value;
    }
    if(value_path == "cipSecTunHistActiveTime")
    {
        cipsectunhistactivetime = value;
    }
    if(value_path == "cipSecTunHistEncapMode")
    {
        cipsectunhistencapmode = value;
    }
    if(value_path == "cipSecTunHistHcInDecompOctets")
    {
        cipsectunhisthcindecompoctets = value;
    }
    if(value_path == "cipSecTunHistHcInOctets")
    {
        cipsectunhisthcinoctets = value;
    }
    if(value_path == "cipSecTunHistHcOutOctets")
    {
        cipsectunhisthcoutoctets = value;
    }
    if(value_path == "cipSecTunHistHcOutUncompOctets")
    {
        cipsectunhisthcoutuncompoctets = value;
    }
    if(value_path == "cipSecTunHistIkeTunnelIndex")
    {
        cipsectunhistiketunnelindex = value;
    }
    if(value_path == "cipSecTunHistInAuthFails")
    {
        cipsectunhistinauthfails = value;
    }
    if(value_path == "cipSecTunHistInAuths")
    {
        cipsectunhistinauths = value;
    }
    if(value_path == "cipSecTunHistInDecompOctets")
    {
        cipsectunhistindecompoctets = value;
    }
    if(value_path == "cipSecTunHistInDecompOctWraps")
    {
        cipsectunhistindecompoctwraps = value;
    }
    if(value_path == "cipSecTunHistInDecryptFails")
    {
        cipsectunhistindecryptfails = value;
    }
    if(value_path == "cipSecTunHistInDecrypts")
    {
        cipsectunhistindecrypts = value;
    }
    if(value_path == "cipSecTunHistInDropPkts")
    {
        cipsectunhistindroppkts = value;
    }
    if(value_path == "cipSecTunHistInOctets")
    {
        cipsectunhistinoctets = value;
    }
    if(value_path == "cipSecTunHistInOctWraps")
    {
        cipsectunhistinoctwraps = value;
    }
    if(value_path == "cipSecTunHistInPkts")
    {
        cipsectunhistinpkts = value;
    }
    if(value_path == "cipSecTunHistInReplayDropPkts")
    {
        cipsectunhistinreplaydroppkts = value;
    }
    if(value_path == "cipSecTunHistInSaAhAuthAlgo")
    {
        cipsectunhistinsaahauthalgo = value;
    }
    if(value_path == "cipSecTunHistInSaDecompAlgo")
    {
        cipsectunhistinsadecompalgo = value;
    }
    if(value_path == "cipSecTunHistInSaDiffHellmanGrp")
    {
        cipsectunhistinsadiffhellmangrp = value;
    }
    if(value_path == "cipSecTunHistInSaEncryptAlgo")
    {
        cipsectunhistinsaencryptalgo = value;
    }
    if(value_path == "cipSecTunHistInSaEspAuthAlgo")
    {
        cipsectunhistinsaespauthalgo = value;
    }
    if(value_path == "cipSecTunHistKeyType")
    {
        cipsectunhistkeytype = value;
    }
    if(value_path == "cipSecTunHistLifeSize")
    {
        cipsectunhistlifesize = value;
    }
    if(value_path == "cipSecTunHistLifeTime")
    {
        cipsectunhistlifetime = value;
    }
    if(value_path == "cipSecTunHistLocalAddr")
    {
        cipsectunhistlocaladdr = value;
    }
    if(value_path == "cipSecTunHistOutAuthFails")
    {
        cipsectunhistoutauthfails = value;
    }
    if(value_path == "cipSecTunHistOutAuths")
    {
        cipsectunhistoutauths = value;
    }
    if(value_path == "cipSecTunHistOutDropPkts")
    {
        cipsectunhistoutdroppkts = value;
    }
    if(value_path == "cipSecTunHistOutEncryptFails")
    {
        cipsectunhistoutencryptfails = value;
    }
    if(value_path == "cipSecTunHistOutEncrypts")
    {
        cipsectunhistoutencrypts = value;
    }
    if(value_path == "cipSecTunHistOutOctets")
    {
        cipsectunhistoutoctets = value;
    }
    if(value_path == "cipSecTunHistOutOctWraps")
    {
        cipsectunhistoutoctwraps = value;
    }
    if(value_path == "cipSecTunHistOutPkts")
    {
        cipsectunhistoutpkts = value;
    }
    if(value_path == "cipSecTunHistOutSaAhAuthAlgo")
    {
        cipsectunhistoutsaahauthalgo = value;
    }
    if(value_path == "cipSecTunHistOutSaCompAlgo")
    {
        cipsectunhistoutsacompalgo = value;
    }
    if(value_path == "cipSecTunHistOutSaDiffHellmanGrp")
    {
        cipsectunhistoutsadiffhellmangrp = value;
    }
    if(value_path == "cipSecTunHistOutSaEncryptAlgo")
    {
        cipsectunhistoutsaencryptalgo = value;
    }
    if(value_path == "cipSecTunHistOutSaEspAuthAlgo")
    {
        cipsectunhistoutsaespauthalgo = value;
    }
    if(value_path == "cipSecTunHistOutUncompOctets")
    {
        cipsectunhistoutuncompoctets = value;
    }
    if(value_path == "cipSecTunHistOutUncompOctWraps")
    {
        cipsectunhistoutuncompoctwraps = value;
    }
    if(value_path == "cipSecTunHistRemoteAddr")
    {
        cipsectunhistremoteaddr = value;
    }
    if(value_path == "cipSecTunHistStartTime")
    {
        cipsectunhiststarttime = value;
    }
    if(value_path == "cipSecTunHistTermReason")
    {
        cipsectunhisttermreason = value;
    }
    if(value_path == "cipSecTunHistTotalRefreshes")
    {
        cipsectunhisttotalrefreshes = value;
    }
    if(value_path == "cipSecTunHistTotalSas")
    {
        cipsectunhisttotalsas = value;
    }
}

CiscoIpsecFlowMonitorMib::Cipsecendpthisttable::Cipsecendpthisttable()
{
    yang_name = "cipSecEndPtHistTable"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB";
}

CiscoIpsecFlowMonitorMib::Cipsecendpthisttable::~Cipsecendpthisttable()
{
}

bool CiscoIpsecFlowMonitorMib::Cipsecendpthisttable::has_data() const
{
    for (std::size_t index=0; index<cipsecendpthistentry_.size(); index++)
    {
        if(cipsecendpthistentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpsecFlowMonitorMib::Cipsecendpthisttable::has_operation() const
{
    for (std::size_t index=0; index<cipsecendpthistentry_.size(); index++)
    {
        if(cipsecendpthistentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIpsecFlowMonitorMib::Cipsecendpthisttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecEndPtHistTable";

    return path_buffer.str();

}

const EntityPath CiscoIpsecFlowMonitorMib::Cipsecendpthisttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecFlowMonitorMib::Cipsecendpthisttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipSecEndPtHistEntry")
    {
        for(auto const & c : cipsecendpthistentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpsecFlowMonitorMib::Cipsecendpthisttable::Cipsecendpthistentry>();
        c->parent = this;
        cipsecendpthistentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecFlowMonitorMib::Cipsecendpthisttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipsecendpthistentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpsecFlowMonitorMib::Cipsecendpthisttable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIpsecFlowMonitorMib::Cipsecendpthisttable::Cipsecendpthistentry::Cipsecendpthistentry()
    :
    cipsecendpthistindex{YType::int32, "cipSecEndPtHistIndex"},
    cipsecendpthistactiveindex{YType::int32, "cipSecEndPtHistActiveIndex"},
    cipsecendpthistlocaladdr1{YType::str, "cipSecEndPtHistLocalAddr1"},
    cipsecendpthistlocaladdr2{YType::str, "cipSecEndPtHistLocalAddr2"},
    cipsecendpthistlocalname{YType::str, "cipSecEndPtHistLocalName"},
    cipsecendpthistlocalport{YType::int32, "cipSecEndPtHistLocalPort"},
    cipsecendpthistlocalprotocol{YType::int32, "cipSecEndPtHistLocalProtocol"},
    cipsecendpthistlocaltype{YType::enumeration, "cipSecEndPtHistLocalType"},
    cipsecendpthistremoteaddr1{YType::str, "cipSecEndPtHistRemoteAddr1"},
    cipsecendpthistremoteaddr2{YType::str, "cipSecEndPtHistRemoteAddr2"},
    cipsecendpthistremotename{YType::str, "cipSecEndPtHistRemoteName"},
    cipsecendpthistremoteport{YType::int32, "cipSecEndPtHistRemotePort"},
    cipsecendpthistremoteprotocol{YType::int32, "cipSecEndPtHistRemoteProtocol"},
    cipsecendpthistremotetype{YType::enumeration, "cipSecEndPtHistRemoteType"},
    cipsecendpthisttunindex{YType::int32, "cipSecEndPtHistTunIndex"}
{
    yang_name = "cipSecEndPtHistEntry"; yang_parent_name = "cipSecEndPtHistTable";
}

CiscoIpsecFlowMonitorMib::Cipsecendpthisttable::Cipsecendpthistentry::~Cipsecendpthistentry()
{
}

bool CiscoIpsecFlowMonitorMib::Cipsecendpthisttable::Cipsecendpthistentry::has_data() const
{
    return cipsecendpthistindex.is_set
	|| cipsecendpthistactiveindex.is_set
	|| cipsecendpthistlocaladdr1.is_set
	|| cipsecendpthistlocaladdr2.is_set
	|| cipsecendpthistlocalname.is_set
	|| cipsecendpthistlocalport.is_set
	|| cipsecendpthistlocalprotocol.is_set
	|| cipsecendpthistlocaltype.is_set
	|| cipsecendpthistremoteaddr1.is_set
	|| cipsecendpthistremoteaddr2.is_set
	|| cipsecendpthistremotename.is_set
	|| cipsecendpthistremoteport.is_set
	|| cipsecendpthistremoteprotocol.is_set
	|| cipsecendpthistremotetype.is_set
	|| cipsecendpthisttunindex.is_set;
}

bool CiscoIpsecFlowMonitorMib::Cipsecendpthisttable::Cipsecendpthistentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cipsecendpthistindex.operation)
	|| is_set(cipsecendpthistactiveindex.operation)
	|| is_set(cipsecendpthistlocaladdr1.operation)
	|| is_set(cipsecendpthistlocaladdr2.operation)
	|| is_set(cipsecendpthistlocalname.operation)
	|| is_set(cipsecendpthistlocalport.operation)
	|| is_set(cipsecendpthistlocalprotocol.operation)
	|| is_set(cipsecendpthistlocaltype.operation)
	|| is_set(cipsecendpthistremoteaddr1.operation)
	|| is_set(cipsecendpthistremoteaddr2.operation)
	|| is_set(cipsecendpthistremotename.operation)
	|| is_set(cipsecendpthistremoteport.operation)
	|| is_set(cipsecendpthistremoteprotocol.operation)
	|| is_set(cipsecendpthistremotetype.operation)
	|| is_set(cipsecendpthisttunindex.operation);
}

std::string CiscoIpsecFlowMonitorMib::Cipsecendpthisttable::Cipsecendpthistentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecEndPtHistEntry" <<"[cipSecEndPtHistIndex='" <<cipsecendpthistindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpsecFlowMonitorMib::Cipsecendpthisttable::Cipsecendpthistentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/cipSecEndPtHistTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsecendpthistindex.is_set || is_set(cipsecendpthistindex.operation)) leaf_name_data.push_back(cipsecendpthistindex.get_name_leafdata());
    if (cipsecendpthistactiveindex.is_set || is_set(cipsecendpthistactiveindex.operation)) leaf_name_data.push_back(cipsecendpthistactiveindex.get_name_leafdata());
    if (cipsecendpthistlocaladdr1.is_set || is_set(cipsecendpthistlocaladdr1.operation)) leaf_name_data.push_back(cipsecendpthistlocaladdr1.get_name_leafdata());
    if (cipsecendpthistlocaladdr2.is_set || is_set(cipsecendpthistlocaladdr2.operation)) leaf_name_data.push_back(cipsecendpthistlocaladdr2.get_name_leafdata());
    if (cipsecendpthistlocalname.is_set || is_set(cipsecendpthistlocalname.operation)) leaf_name_data.push_back(cipsecendpthistlocalname.get_name_leafdata());
    if (cipsecendpthistlocalport.is_set || is_set(cipsecendpthistlocalport.operation)) leaf_name_data.push_back(cipsecendpthistlocalport.get_name_leafdata());
    if (cipsecendpthistlocalprotocol.is_set || is_set(cipsecendpthistlocalprotocol.operation)) leaf_name_data.push_back(cipsecendpthistlocalprotocol.get_name_leafdata());
    if (cipsecendpthistlocaltype.is_set || is_set(cipsecendpthistlocaltype.operation)) leaf_name_data.push_back(cipsecendpthistlocaltype.get_name_leafdata());
    if (cipsecendpthistremoteaddr1.is_set || is_set(cipsecendpthistremoteaddr1.operation)) leaf_name_data.push_back(cipsecendpthistremoteaddr1.get_name_leafdata());
    if (cipsecendpthistremoteaddr2.is_set || is_set(cipsecendpthistremoteaddr2.operation)) leaf_name_data.push_back(cipsecendpthistremoteaddr2.get_name_leafdata());
    if (cipsecendpthistremotename.is_set || is_set(cipsecendpthistremotename.operation)) leaf_name_data.push_back(cipsecendpthistremotename.get_name_leafdata());
    if (cipsecendpthistremoteport.is_set || is_set(cipsecendpthistremoteport.operation)) leaf_name_data.push_back(cipsecendpthistremoteport.get_name_leafdata());
    if (cipsecendpthistremoteprotocol.is_set || is_set(cipsecendpthistremoteprotocol.operation)) leaf_name_data.push_back(cipsecendpthistremoteprotocol.get_name_leafdata());
    if (cipsecendpthistremotetype.is_set || is_set(cipsecendpthistremotetype.operation)) leaf_name_data.push_back(cipsecendpthistremotetype.get_name_leafdata());
    if (cipsecendpthisttunindex.is_set || is_set(cipsecendpthisttunindex.operation)) leaf_name_data.push_back(cipsecendpthisttunindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecFlowMonitorMib::Cipsecendpthisttable::Cipsecendpthistentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecFlowMonitorMib::Cipsecendpthisttable::Cipsecendpthistentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpsecFlowMonitorMib::Cipsecendpthisttable::Cipsecendpthistentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cipSecEndPtHistIndex")
    {
        cipsecendpthistindex = value;
    }
    if(value_path == "cipSecEndPtHistActiveIndex")
    {
        cipsecendpthistactiveindex = value;
    }
    if(value_path == "cipSecEndPtHistLocalAddr1")
    {
        cipsecendpthistlocaladdr1 = value;
    }
    if(value_path == "cipSecEndPtHistLocalAddr2")
    {
        cipsecendpthistlocaladdr2 = value;
    }
    if(value_path == "cipSecEndPtHistLocalName")
    {
        cipsecendpthistlocalname = value;
    }
    if(value_path == "cipSecEndPtHistLocalPort")
    {
        cipsecendpthistlocalport = value;
    }
    if(value_path == "cipSecEndPtHistLocalProtocol")
    {
        cipsecendpthistlocalprotocol = value;
    }
    if(value_path == "cipSecEndPtHistLocalType")
    {
        cipsecendpthistlocaltype = value;
    }
    if(value_path == "cipSecEndPtHistRemoteAddr1")
    {
        cipsecendpthistremoteaddr1 = value;
    }
    if(value_path == "cipSecEndPtHistRemoteAddr2")
    {
        cipsecendpthistremoteaddr2 = value;
    }
    if(value_path == "cipSecEndPtHistRemoteName")
    {
        cipsecendpthistremotename = value;
    }
    if(value_path == "cipSecEndPtHistRemotePort")
    {
        cipsecendpthistremoteport = value;
    }
    if(value_path == "cipSecEndPtHistRemoteProtocol")
    {
        cipsecendpthistremoteprotocol = value;
    }
    if(value_path == "cipSecEndPtHistRemoteType")
    {
        cipsecendpthistremotetype = value;
    }
    if(value_path == "cipSecEndPtHistTunIndex")
    {
        cipsecendpthisttunindex = value;
    }
}

CiscoIpsecFlowMonitorMib::Cikefailtable::Cikefailtable()
{
    yang_name = "cikeFailTable"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB";
}

CiscoIpsecFlowMonitorMib::Cikefailtable::~Cikefailtable()
{
}

bool CiscoIpsecFlowMonitorMib::Cikefailtable::has_data() const
{
    for (std::size_t index=0; index<cikefailentry_.size(); index++)
    {
        if(cikefailentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpsecFlowMonitorMib::Cikefailtable::has_operation() const
{
    for (std::size_t index=0; index<cikefailentry_.size(); index++)
    {
        if(cikefailentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIpsecFlowMonitorMib::Cikefailtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cikeFailTable";

    return path_buffer.str();

}

const EntityPath CiscoIpsecFlowMonitorMib::Cikefailtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecFlowMonitorMib::Cikefailtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cikeFailEntry")
    {
        for(auto const & c : cikefailentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpsecFlowMonitorMib::Cikefailtable::Cikefailentry>();
        c->parent = this;
        cikefailentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecFlowMonitorMib::Cikefailtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cikefailentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpsecFlowMonitorMib::Cikefailtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIpsecFlowMonitorMib::Cikefailtable::Cikefailentry::Cikefailentry()
    :
    cikefailindex{YType::int32, "cikeFailIndex"},
    cikefaillocaladdr{YType::str, "cikeFailLocalAddr"},
    cikefaillocaltype{YType::enumeration, "cikeFailLocalType"},
    cikefaillocalvalue{YType::str, "cikeFailLocalValue"},
    cikefailreason{YType::enumeration, "cikeFailReason"},
    cikefailremoteaddr{YType::str, "cikeFailRemoteAddr"},
    cikefailremotetype{YType::enumeration, "cikeFailRemoteType"},
    cikefailremotevalue{YType::str, "cikeFailRemoteValue"},
    cikefailtime{YType::uint32, "cikeFailTime"}
{
    yang_name = "cikeFailEntry"; yang_parent_name = "cikeFailTable";
}

CiscoIpsecFlowMonitorMib::Cikefailtable::Cikefailentry::~Cikefailentry()
{
}

bool CiscoIpsecFlowMonitorMib::Cikefailtable::Cikefailentry::has_data() const
{
    return cikefailindex.is_set
	|| cikefaillocaladdr.is_set
	|| cikefaillocaltype.is_set
	|| cikefaillocalvalue.is_set
	|| cikefailreason.is_set
	|| cikefailremoteaddr.is_set
	|| cikefailremotetype.is_set
	|| cikefailremotevalue.is_set
	|| cikefailtime.is_set;
}

bool CiscoIpsecFlowMonitorMib::Cikefailtable::Cikefailentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cikefailindex.operation)
	|| is_set(cikefaillocaladdr.operation)
	|| is_set(cikefaillocaltype.operation)
	|| is_set(cikefaillocalvalue.operation)
	|| is_set(cikefailreason.operation)
	|| is_set(cikefailremoteaddr.operation)
	|| is_set(cikefailremotetype.operation)
	|| is_set(cikefailremotevalue.operation)
	|| is_set(cikefailtime.operation);
}

std::string CiscoIpsecFlowMonitorMib::Cikefailtable::Cikefailentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cikeFailEntry" <<"[cikeFailIndex='" <<cikefailindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpsecFlowMonitorMib::Cikefailtable::Cikefailentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/cikeFailTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cikefailindex.is_set || is_set(cikefailindex.operation)) leaf_name_data.push_back(cikefailindex.get_name_leafdata());
    if (cikefaillocaladdr.is_set || is_set(cikefaillocaladdr.operation)) leaf_name_data.push_back(cikefaillocaladdr.get_name_leafdata());
    if (cikefaillocaltype.is_set || is_set(cikefaillocaltype.operation)) leaf_name_data.push_back(cikefaillocaltype.get_name_leafdata());
    if (cikefaillocalvalue.is_set || is_set(cikefaillocalvalue.operation)) leaf_name_data.push_back(cikefaillocalvalue.get_name_leafdata());
    if (cikefailreason.is_set || is_set(cikefailreason.operation)) leaf_name_data.push_back(cikefailreason.get_name_leafdata());
    if (cikefailremoteaddr.is_set || is_set(cikefailremoteaddr.operation)) leaf_name_data.push_back(cikefailremoteaddr.get_name_leafdata());
    if (cikefailremotetype.is_set || is_set(cikefailremotetype.operation)) leaf_name_data.push_back(cikefailremotetype.get_name_leafdata());
    if (cikefailremotevalue.is_set || is_set(cikefailremotevalue.operation)) leaf_name_data.push_back(cikefailremotevalue.get_name_leafdata());
    if (cikefailtime.is_set || is_set(cikefailtime.operation)) leaf_name_data.push_back(cikefailtime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecFlowMonitorMib::Cikefailtable::Cikefailentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecFlowMonitorMib::Cikefailtable::Cikefailentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpsecFlowMonitorMib::Cikefailtable::Cikefailentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cikeFailIndex")
    {
        cikefailindex = value;
    }
    if(value_path == "cikeFailLocalAddr")
    {
        cikefaillocaladdr = value;
    }
    if(value_path == "cikeFailLocalType")
    {
        cikefaillocaltype = value;
    }
    if(value_path == "cikeFailLocalValue")
    {
        cikefaillocalvalue = value;
    }
    if(value_path == "cikeFailReason")
    {
        cikefailreason = value;
    }
    if(value_path == "cikeFailRemoteAddr")
    {
        cikefailremoteaddr = value;
    }
    if(value_path == "cikeFailRemoteType")
    {
        cikefailremotetype = value;
    }
    if(value_path == "cikeFailRemoteValue")
    {
        cikefailremotevalue = value;
    }
    if(value_path == "cikeFailTime")
    {
        cikefailtime = value;
    }
}

CiscoIpsecFlowMonitorMib::Cipsecfailtable::Cipsecfailtable()
{
    yang_name = "cipSecFailTable"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB";
}

CiscoIpsecFlowMonitorMib::Cipsecfailtable::~Cipsecfailtable()
{
}

bool CiscoIpsecFlowMonitorMib::Cipsecfailtable::has_data() const
{
    for (std::size_t index=0; index<cipsecfailentry_.size(); index++)
    {
        if(cipsecfailentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpsecFlowMonitorMib::Cipsecfailtable::has_operation() const
{
    for (std::size_t index=0; index<cipsecfailentry_.size(); index++)
    {
        if(cipsecfailentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIpsecFlowMonitorMib::Cipsecfailtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecFailTable";

    return path_buffer.str();

}

const EntityPath CiscoIpsecFlowMonitorMib::Cipsecfailtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecFlowMonitorMib::Cipsecfailtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipSecFailEntry")
    {
        for(auto const & c : cipsecfailentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpsecFlowMonitorMib::Cipsecfailtable::Cipsecfailentry>();
        c->parent = this;
        cipsecfailentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecFlowMonitorMib::Cipsecfailtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipsecfailentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpsecFlowMonitorMib::Cipsecfailtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIpsecFlowMonitorMib::Cipsecfailtable::Cipsecfailentry::Cipsecfailentry()
    :
    cipsecfailindex{YType::int32, "cipSecFailIndex"},
    cipsecfailpktdstaddr{YType::str, "cipSecFailPktDstAddr"},
    cipsecfailpktsrcaddr{YType::str, "cipSecFailPktSrcAddr"},
    cipsecfailreason{YType::enumeration, "cipSecFailReason"},
    cipsecfailsaspi{YType::int32, "cipSecFailSaSpi"},
    cipsecfailtime{YType::uint32, "cipSecFailTime"},
    cipsecfailtunnelindex{YType::int32, "cipSecFailTunnelIndex"}
{
    yang_name = "cipSecFailEntry"; yang_parent_name = "cipSecFailTable";
}

CiscoIpsecFlowMonitorMib::Cipsecfailtable::Cipsecfailentry::~Cipsecfailentry()
{
}

bool CiscoIpsecFlowMonitorMib::Cipsecfailtable::Cipsecfailentry::has_data() const
{
    return cipsecfailindex.is_set
	|| cipsecfailpktdstaddr.is_set
	|| cipsecfailpktsrcaddr.is_set
	|| cipsecfailreason.is_set
	|| cipsecfailsaspi.is_set
	|| cipsecfailtime.is_set
	|| cipsecfailtunnelindex.is_set;
}

bool CiscoIpsecFlowMonitorMib::Cipsecfailtable::Cipsecfailentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cipsecfailindex.operation)
	|| is_set(cipsecfailpktdstaddr.operation)
	|| is_set(cipsecfailpktsrcaddr.operation)
	|| is_set(cipsecfailreason.operation)
	|| is_set(cipsecfailsaspi.operation)
	|| is_set(cipsecfailtime.operation)
	|| is_set(cipsecfailtunnelindex.operation);
}

std::string CiscoIpsecFlowMonitorMib::Cipsecfailtable::Cipsecfailentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecFailEntry" <<"[cipSecFailIndex='" <<cipsecfailindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpsecFlowMonitorMib::Cipsecfailtable::Cipsecfailentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/cipSecFailTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsecfailindex.is_set || is_set(cipsecfailindex.operation)) leaf_name_data.push_back(cipsecfailindex.get_name_leafdata());
    if (cipsecfailpktdstaddr.is_set || is_set(cipsecfailpktdstaddr.operation)) leaf_name_data.push_back(cipsecfailpktdstaddr.get_name_leafdata());
    if (cipsecfailpktsrcaddr.is_set || is_set(cipsecfailpktsrcaddr.operation)) leaf_name_data.push_back(cipsecfailpktsrcaddr.get_name_leafdata());
    if (cipsecfailreason.is_set || is_set(cipsecfailreason.operation)) leaf_name_data.push_back(cipsecfailreason.get_name_leafdata());
    if (cipsecfailsaspi.is_set || is_set(cipsecfailsaspi.operation)) leaf_name_data.push_back(cipsecfailsaspi.get_name_leafdata());
    if (cipsecfailtime.is_set || is_set(cipsecfailtime.operation)) leaf_name_data.push_back(cipsecfailtime.get_name_leafdata());
    if (cipsecfailtunnelindex.is_set || is_set(cipsecfailtunnelindex.operation)) leaf_name_data.push_back(cipsecfailtunnelindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecFlowMonitorMib::Cipsecfailtable::Cipsecfailentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecFlowMonitorMib::Cipsecfailtable::Cipsecfailentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpsecFlowMonitorMib::Cipsecfailtable::Cipsecfailentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cipSecFailIndex")
    {
        cipsecfailindex = value;
    }
    if(value_path == "cipSecFailPktDstAddr")
    {
        cipsecfailpktdstaddr = value;
    }
    if(value_path == "cipSecFailPktSrcAddr")
    {
        cipsecfailpktsrcaddr = value;
    }
    if(value_path == "cipSecFailReason")
    {
        cipsecfailreason = value;
    }
    if(value_path == "cipSecFailSaSpi")
    {
        cipsecfailsaspi = value;
    }
    if(value_path == "cipSecFailTime")
    {
        cipsecfailtime = value;
    }
    if(value_path == "cipSecFailTunnelIndex")
    {
        cipsecfailtunnelindex = value;
    }
}

const Enum::YLeaf TunnelstatusEnum::active {1, "active"};
const Enum::YLeaf TunnelstatusEnum::destroy {2, "destroy"};

const Enum::YLeaf IkehashalgoEnum::none {1, "none"};
const Enum::YLeaf IkehashalgoEnum::md5 {2, "md5"};
const Enum::YLeaf IkehashalgoEnum::sha {3, "sha"};

const Enum::YLeaf IkeauthmethodEnum::none {1, "none"};
const Enum::YLeaf IkeauthmethodEnum::preSharedKey {2, "preSharedKey"};
const Enum::YLeaf IkeauthmethodEnum::rsaSig {3, "rsaSig"};
const Enum::YLeaf IkeauthmethodEnum::rsaEncrypt {4, "rsaEncrypt"};
const Enum::YLeaf IkeauthmethodEnum::revPublicKey {5, "revPublicKey"};

const Enum::YLeaf KeytypeEnum::ike {1, "ike"};
const Enum::YLeaf KeytypeEnum::manual {2, "manual"};

const Enum::YLeaf TrapstatusEnum::enabled {1, "enabled"};
const Enum::YLeaf TrapstatusEnum::disabled {2, "disabled"};

const Enum::YLeaf CompalgoEnum::none {1, "none"};
const Enum::YLeaf CompalgoEnum::ldf {2, "ldf"};

const Enum::YLeaf EncryptalgoEnum::none {1, "none"};
const Enum::YLeaf EncryptalgoEnum::des {2, "des"};
const Enum::YLeaf EncryptalgoEnum::des3 {3, "des3"};

const Enum::YLeaf IkepeertypeEnum::ipAddrPeer {1, "ipAddrPeer"};
const Enum::YLeaf IkepeertypeEnum::namePeer {2, "namePeer"};

const Enum::YLeaf IkenegomodeEnum::main {1, "main"};
const Enum::YLeaf IkenegomodeEnum::aggressive {2, "aggressive"};

const Enum::YLeaf EncapmodeEnum::tunnel {1, "tunnel"};
const Enum::YLeaf EncapmodeEnum::transport {2, "transport"};

const Enum::YLeaf AuthalgoEnum::none {1, "none"};
const Enum::YLeaf AuthalgoEnum::hmacMd5 {2, "hmacMd5"};
const Enum::YLeaf AuthalgoEnum::hmacSha {3, "hmacSha"};

const Enum::YLeaf EndpttypeEnum::singleIpAddr {1, "singleIpAddr"};
const Enum::YLeaf EndpttypeEnum::ipAddrRange {2, "ipAddrRange"};
const Enum::YLeaf EndpttypeEnum::ipSubnet {3, "ipSubnet"};

const Enum::YLeaf DiffhellmangrpEnum::none {1, "none"};
const Enum::YLeaf DiffhellmangrpEnum::dhGroup1 {2, "dhGroup1"};
const Enum::YLeaf DiffhellmangrpEnum::dhGroup2 {3, "dhGroup2"};

const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cipsechistglobalcntl::CipsechistcheckpointEnum::ready {1, "ready"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cipsechistglobalcntl::CipsechistcheckpointEnum::checkPoint {2, "checkPoint"};

const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cipsecspitable::Cipsecspientry::CipsecspidirectionEnum::in {1, "in"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cipsecspitable::Cipsecspientry::CipsecspidirectionEnum::out {2, "out"};

const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cipsecspitable::Cipsecspientry::CipsecspiprotocolEnum::ah {1, "ah"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cipsecspitable::Cipsecspientry::CipsecspiprotocolEnum::esp {2, "esp"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cipsecspitable::Cipsecspientry::CipsecspiprotocolEnum::ipcomp {3, "ipcomp"};

const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cipsecspitable::Cipsecspientry::CipsecspistatusEnum::active {1, "active"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cipsecspitable::Cipsecspientry::CipsecspistatusEnum::expiring {2, "expiring"};

const Enum::YLeaf CiscoIpsecFlowMonitorMib::Ciketunnelhisttable::Ciketunnelhistentry::CiketunhisttermreasonEnum::other {1, "other"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Ciketunnelhisttable::Ciketunnelhistentry::CiketunhisttermreasonEnum::normal {2, "normal"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Ciketunnelhisttable::Ciketunnelhistentry::CiketunhisttermreasonEnum::operRequest {3, "operRequest"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Ciketunnelhisttable::Ciketunnelhistentry::CiketunhisttermreasonEnum::peerDelRequest {4, "peerDelRequest"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Ciketunnelhisttable::Ciketunnelhistentry::CiketunhisttermreasonEnum::peerLost {5, "peerLost"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Ciketunnelhisttable::Ciketunnelhistentry::CiketunhisttermreasonEnum::localFailure {6, "localFailure"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Ciketunnelhisttable::Ciketunnelhistentry::CiketunhisttermreasonEnum::checkPointReg {7, "checkPointReg"};

const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable::Cipsectunnelhistentry::CipsectunhisttermreasonEnum::other {1, "other"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable::Cipsectunnelhistentry::CipsectunhisttermreasonEnum::normal {2, "normal"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable::Cipsectunnelhistentry::CipsectunhisttermreasonEnum::operRequest {3, "operRequest"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable::Cipsectunnelhistentry::CipsectunhisttermreasonEnum::peerDelRequest {4, "peerDelRequest"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable::Cipsectunnelhistentry::CipsectunhisttermreasonEnum::peerLost {5, "peerLost"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable::Cipsectunnelhistentry::CipsectunhisttermreasonEnum::seqNumRollOver {6, "seqNumRollOver"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cipsectunnelhisttable::Cipsectunnelhistentry::CipsectunhisttermreasonEnum::checkPointReq {7, "checkPointReq"};

const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cikefailtable::Cikefailentry::CikefailreasonEnum::other {1, "other"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cikefailtable::Cikefailentry::CikefailreasonEnum::peerDelRequest {2, "peerDelRequest"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cikefailtable::Cikefailentry::CikefailreasonEnum::peerLost {3, "peerLost"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cikefailtable::Cikefailentry::CikefailreasonEnum::localFailure {4, "localFailure"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cikefailtable::Cikefailentry::CikefailreasonEnum::authFailure {5, "authFailure"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cikefailtable::Cikefailentry::CikefailreasonEnum::hashValidation {6, "hashValidation"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cikefailtable::Cikefailentry::CikefailreasonEnum::encryptFailure {7, "encryptFailure"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cikefailtable::Cikefailentry::CikefailreasonEnum::internalError {8, "internalError"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cikefailtable::Cikefailentry::CikefailreasonEnum::sysCapExceeded {9, "sysCapExceeded"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cikefailtable::Cikefailentry::CikefailreasonEnum::proposalFailure {10, "proposalFailure"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cikefailtable::Cikefailentry::CikefailreasonEnum::peerCertUnavailable {11, "peerCertUnavailable"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cikefailtable::Cikefailentry::CikefailreasonEnum::peerCertNotValid {12, "peerCertNotValid"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cikefailtable::Cikefailentry::CikefailreasonEnum::localCertExpired {13, "localCertExpired"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cikefailtable::Cikefailentry::CikefailreasonEnum::crlFailure {14, "crlFailure"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cikefailtable::Cikefailentry::CikefailreasonEnum::peerEncodingError {15, "peerEncodingError"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cikefailtable::Cikefailentry::CikefailreasonEnum::nonExistentSa {16, "nonExistentSa"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cikefailtable::Cikefailentry::CikefailreasonEnum::operRequest {17, "operRequest"};

const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cipsecfailtable::Cipsecfailentry::CipsecfailreasonEnum::other {1, "other"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cipsecfailtable::Cipsecfailentry::CipsecfailreasonEnum::internalError {2, "internalError"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cipsecfailtable::Cipsecfailentry::CipsecfailreasonEnum::peerEncodingError {3, "peerEncodingError"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cipsecfailtable::Cipsecfailentry::CipsecfailreasonEnum::proposalFailure {4, "proposalFailure"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cipsecfailtable::Cipsecfailentry::CipsecfailreasonEnum::protocolUseFail {5, "protocolUseFail"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cipsecfailtable::Cipsecfailentry::CipsecfailreasonEnum::nonExistentSa {6, "nonExistentSa"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cipsecfailtable::Cipsecfailentry::CipsecfailreasonEnum::decryptFailure {7, "decryptFailure"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cipsecfailtable::Cipsecfailentry::CipsecfailreasonEnum::encryptFailure {8, "encryptFailure"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cipsecfailtable::Cipsecfailentry::CipsecfailreasonEnum::inAuthFailure {9, "inAuthFailure"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cipsecfailtable::Cipsecfailentry::CipsecfailreasonEnum::outAuthFailure {10, "outAuthFailure"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cipsecfailtable::Cipsecfailentry::CipsecfailreasonEnum::compression {11, "compression"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cipsecfailtable::Cipsecfailentry::CipsecfailreasonEnum::sysCapExceeded {12, "sysCapExceeded"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cipsecfailtable::Cipsecfailentry::CipsecfailreasonEnum::peerDelRequest {13, "peerDelRequest"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cipsecfailtable::Cipsecfailentry::CipsecfailreasonEnum::peerLost {14, "peerLost"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cipsecfailtable::Cipsecfailentry::CipsecfailreasonEnum::seqNumRollOver {15, "seqNumRollOver"};
const Enum::YLeaf CiscoIpsecFlowMonitorMib::Cipsecfailtable::Cipsecfailentry::CipsecfailreasonEnum::operRequest {16, "operRequest"};


}
}

