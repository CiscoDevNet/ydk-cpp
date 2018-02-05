
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IPSEC_FLOW_MONITOR_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IPSEC_FLOW_MONITOR_MIB {

CISCOIPSECFLOWMONITORMIB::CISCOIPSECFLOWMONITORMIB()
    :
    cipseclevels(std::make_shared<CISCOIPSECFLOWMONITORMIB::Cipseclevels>())
	,cikeglobalstats(std::make_shared<CISCOIPSECFLOWMONITORMIB::Cikeglobalstats>())
	,cipsecglobalstats(std::make_shared<CISCOIPSECFLOWMONITORMIB::Cipsecglobalstats>())
	,cipsechistglobalcntl(std::make_shared<CISCOIPSECFLOWMONITORMIB::Cipsechistglobalcntl>())
	,cipsecfailglobalcntl(std::make_shared<CISCOIPSECFLOWMONITORMIB::Cipsecfailglobalcntl>())
	,cipsectrapcntl(std::make_shared<CISCOIPSECFLOWMONITORMIB::Cipsectrapcntl>())
	,cikepeertable(std::make_shared<CISCOIPSECFLOWMONITORMIB::Cikepeertable>())
	,ciketunneltable(std::make_shared<CISCOIPSECFLOWMONITORMIB::Ciketunneltable>())
	,cikepeercorrtable(std::make_shared<CISCOIPSECFLOWMONITORMIB::Cikepeercorrtable>())
	,cikephase1gwstatstable(std::make_shared<CISCOIPSECFLOWMONITORMIB::Cikephase1Gwstatstable>())
	,cipsectunneltable(std::make_shared<CISCOIPSECFLOWMONITORMIB::Cipsectunneltable>())
	,cipsecendpttable(std::make_shared<CISCOIPSECFLOWMONITORMIB::Cipsecendpttable>())
	,cipsecspitable(std::make_shared<CISCOIPSECFLOWMONITORMIB::Cipsecspitable>())
	,cipsecphase2gwstatstable(std::make_shared<CISCOIPSECFLOWMONITORMIB::Cipsecphase2Gwstatstable>())
	,ciketunnelhisttable(std::make_shared<CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable>())
	,cipsectunnelhisttable(std::make_shared<CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable>())
	,cipsecendpthisttable(std::make_shared<CISCOIPSECFLOWMONITORMIB::Cipsecendpthisttable>())
	,cikefailtable(std::make_shared<CISCOIPSECFLOWMONITORMIB::Cikefailtable>())
	,cipsecfailtable(std::make_shared<CISCOIPSECFLOWMONITORMIB::Cipsecfailtable>())
{
    cipseclevels->parent = this;
    cikeglobalstats->parent = this;
    cipsecglobalstats->parent = this;
    cipsechistglobalcntl->parent = this;
    cipsecfailglobalcntl->parent = this;
    cipsectrapcntl->parent = this;
    cikepeertable->parent = this;
    ciketunneltable->parent = this;
    cikepeercorrtable->parent = this;
    cikephase1gwstatstable->parent = this;
    cipsectunneltable->parent = this;
    cipsecendpttable->parent = this;
    cipsecspitable->parent = this;
    cipsecphase2gwstatstable->parent = this;
    ciketunnelhisttable->parent = this;
    cipsectunnelhisttable->parent = this;
    cipsecendpthisttable->parent = this;
    cikefailtable->parent = this;
    cipsecfailtable->parent = this;

    yang_name = "CISCO-IPSEC-FLOW-MONITOR-MIB"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCOIPSECFLOWMONITORMIB::~CISCOIPSECFLOWMONITORMIB()
{
}

bool CISCOIPSECFLOWMONITORMIB::has_data() const
{
    return (cipseclevels !=  nullptr && cipseclevels->has_data())
	|| (cikeglobalstats !=  nullptr && cikeglobalstats->has_data())
	|| (cipsecglobalstats !=  nullptr && cipsecglobalstats->has_data())
	|| (cipsechistglobalcntl !=  nullptr && cipsechistglobalcntl->has_data())
	|| (cipsecfailglobalcntl !=  nullptr && cipsecfailglobalcntl->has_data())
	|| (cipsectrapcntl !=  nullptr && cipsectrapcntl->has_data())
	|| (cikepeertable !=  nullptr && cikepeertable->has_data())
	|| (ciketunneltable !=  nullptr && ciketunneltable->has_data())
	|| (cikepeercorrtable !=  nullptr && cikepeercorrtable->has_data())
	|| (cikephase1gwstatstable !=  nullptr && cikephase1gwstatstable->has_data())
	|| (cipsectunneltable !=  nullptr && cipsectunneltable->has_data())
	|| (cipsecendpttable !=  nullptr && cipsecendpttable->has_data())
	|| (cipsecspitable !=  nullptr && cipsecspitable->has_data())
	|| (cipsecphase2gwstatstable !=  nullptr && cipsecphase2gwstatstable->has_data())
	|| (ciketunnelhisttable !=  nullptr && ciketunnelhisttable->has_data())
	|| (cipsectunnelhisttable !=  nullptr && cipsectunnelhisttable->has_data())
	|| (cipsecendpthisttable !=  nullptr && cipsecendpthisttable->has_data())
	|| (cikefailtable !=  nullptr && cikefailtable->has_data())
	|| (cipsecfailtable !=  nullptr && cipsecfailtable->has_data());
}

bool CISCOIPSECFLOWMONITORMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cipseclevels !=  nullptr && cipseclevels->has_operation())
	|| (cikeglobalstats !=  nullptr && cikeglobalstats->has_operation())
	|| (cipsecglobalstats !=  nullptr && cipsecglobalstats->has_operation())
	|| (cipsechistglobalcntl !=  nullptr && cipsechistglobalcntl->has_operation())
	|| (cipsecfailglobalcntl !=  nullptr && cipsecfailglobalcntl->has_operation())
	|| (cipsectrapcntl !=  nullptr && cipsectrapcntl->has_operation())
	|| (cikepeertable !=  nullptr && cikepeertable->has_operation())
	|| (ciketunneltable !=  nullptr && ciketunneltable->has_operation())
	|| (cikepeercorrtable !=  nullptr && cikepeercorrtable->has_operation())
	|| (cikephase1gwstatstable !=  nullptr && cikephase1gwstatstable->has_operation())
	|| (cipsectunneltable !=  nullptr && cipsectunneltable->has_operation())
	|| (cipsecendpttable !=  nullptr && cipsecendpttable->has_operation())
	|| (cipsecspitable !=  nullptr && cipsecspitable->has_operation())
	|| (cipsecphase2gwstatstable !=  nullptr && cipsecphase2gwstatstable->has_operation())
	|| (ciketunnelhisttable !=  nullptr && ciketunnelhisttable->has_operation())
	|| (cipsectunnelhisttable !=  nullptr && cipsectunnelhisttable->has_operation())
	|| (cipsecendpthisttable !=  nullptr && cipsecendpthisttable->has_operation())
	|| (cikefailtable !=  nullptr && cikefailtable->has_operation())
	|| (cipsecfailtable !=  nullptr && cipsecfailtable->has_operation());
}

std::string CISCOIPSECFLOWMONITORMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECFLOWMONITORMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECFLOWMONITORMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipSecLevels")
    {
        if(cipseclevels == nullptr)
        {
            cipseclevels = std::make_shared<CISCOIPSECFLOWMONITORMIB::Cipseclevels>();
        }
        return cipseclevels;
    }

    if(child_yang_name == "cikeGlobalStats")
    {
        if(cikeglobalstats == nullptr)
        {
            cikeglobalstats = std::make_shared<CISCOIPSECFLOWMONITORMIB::Cikeglobalstats>();
        }
        return cikeglobalstats;
    }

    if(child_yang_name == "cipSecGlobalStats")
    {
        if(cipsecglobalstats == nullptr)
        {
            cipsecglobalstats = std::make_shared<CISCOIPSECFLOWMONITORMIB::Cipsecglobalstats>();
        }
        return cipsecglobalstats;
    }

    if(child_yang_name == "cipSecHistGlobalCntl")
    {
        if(cipsechistglobalcntl == nullptr)
        {
            cipsechistglobalcntl = std::make_shared<CISCOIPSECFLOWMONITORMIB::Cipsechistglobalcntl>();
        }
        return cipsechistglobalcntl;
    }

    if(child_yang_name == "cipSecFailGlobalCntl")
    {
        if(cipsecfailglobalcntl == nullptr)
        {
            cipsecfailglobalcntl = std::make_shared<CISCOIPSECFLOWMONITORMIB::Cipsecfailglobalcntl>();
        }
        return cipsecfailglobalcntl;
    }

    if(child_yang_name == "cipSecTrapCntl")
    {
        if(cipsectrapcntl == nullptr)
        {
            cipsectrapcntl = std::make_shared<CISCOIPSECFLOWMONITORMIB::Cipsectrapcntl>();
        }
        return cipsectrapcntl;
    }

    if(child_yang_name == "cikePeerTable")
    {
        if(cikepeertable == nullptr)
        {
            cikepeertable = std::make_shared<CISCOIPSECFLOWMONITORMIB::Cikepeertable>();
        }
        return cikepeertable;
    }

    if(child_yang_name == "cikeTunnelTable")
    {
        if(ciketunneltable == nullptr)
        {
            ciketunneltable = std::make_shared<CISCOIPSECFLOWMONITORMIB::Ciketunneltable>();
        }
        return ciketunneltable;
    }

    if(child_yang_name == "cikePeerCorrTable")
    {
        if(cikepeercorrtable == nullptr)
        {
            cikepeercorrtable = std::make_shared<CISCOIPSECFLOWMONITORMIB::Cikepeercorrtable>();
        }
        return cikepeercorrtable;
    }

    if(child_yang_name == "cikePhase1GWStatsTable")
    {
        if(cikephase1gwstatstable == nullptr)
        {
            cikephase1gwstatstable = std::make_shared<CISCOIPSECFLOWMONITORMIB::Cikephase1Gwstatstable>();
        }
        return cikephase1gwstatstable;
    }

    if(child_yang_name == "cipSecTunnelTable")
    {
        if(cipsectunneltable == nullptr)
        {
            cipsectunneltable = std::make_shared<CISCOIPSECFLOWMONITORMIB::Cipsectunneltable>();
        }
        return cipsectunneltable;
    }

    if(child_yang_name == "cipSecEndPtTable")
    {
        if(cipsecendpttable == nullptr)
        {
            cipsecendpttable = std::make_shared<CISCOIPSECFLOWMONITORMIB::Cipsecendpttable>();
        }
        return cipsecendpttable;
    }

    if(child_yang_name == "cipSecSpiTable")
    {
        if(cipsecspitable == nullptr)
        {
            cipsecspitable = std::make_shared<CISCOIPSECFLOWMONITORMIB::Cipsecspitable>();
        }
        return cipsecspitable;
    }

    if(child_yang_name == "cipSecPhase2GWStatsTable")
    {
        if(cipsecphase2gwstatstable == nullptr)
        {
            cipsecphase2gwstatstable = std::make_shared<CISCOIPSECFLOWMONITORMIB::Cipsecphase2Gwstatstable>();
        }
        return cipsecphase2gwstatstable;
    }

    if(child_yang_name == "cikeTunnelHistTable")
    {
        if(ciketunnelhisttable == nullptr)
        {
            ciketunnelhisttable = std::make_shared<CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable>();
        }
        return ciketunnelhisttable;
    }

    if(child_yang_name == "cipSecTunnelHistTable")
    {
        if(cipsectunnelhisttable == nullptr)
        {
            cipsectunnelhisttable = std::make_shared<CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable>();
        }
        return cipsectunnelhisttable;
    }

    if(child_yang_name == "cipSecEndPtHistTable")
    {
        if(cipsecendpthisttable == nullptr)
        {
            cipsecendpthisttable = std::make_shared<CISCOIPSECFLOWMONITORMIB::Cipsecendpthisttable>();
        }
        return cipsecendpthisttable;
    }

    if(child_yang_name == "cikeFailTable")
    {
        if(cikefailtable == nullptr)
        {
            cikefailtable = std::make_shared<CISCOIPSECFLOWMONITORMIB::Cikefailtable>();
        }
        return cikefailtable;
    }

    if(child_yang_name == "cipSecFailTable")
    {
        if(cipsecfailtable == nullptr)
        {
            cipsecfailtable = std::make_shared<CISCOIPSECFLOWMONITORMIB::Cipsecfailtable>();
        }
        return cipsecfailtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECFLOWMONITORMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cipseclevels != nullptr)
    {
        children["cipSecLevels"] = cipseclevels;
    }

    if(cikeglobalstats != nullptr)
    {
        children["cikeGlobalStats"] = cikeglobalstats;
    }

    if(cipsecglobalstats != nullptr)
    {
        children["cipSecGlobalStats"] = cipsecglobalstats;
    }

    if(cipsechistglobalcntl != nullptr)
    {
        children["cipSecHistGlobalCntl"] = cipsechistglobalcntl;
    }

    if(cipsecfailglobalcntl != nullptr)
    {
        children["cipSecFailGlobalCntl"] = cipsecfailglobalcntl;
    }

    if(cipsectrapcntl != nullptr)
    {
        children["cipSecTrapCntl"] = cipsectrapcntl;
    }

    if(cikepeertable != nullptr)
    {
        children["cikePeerTable"] = cikepeertable;
    }

    if(ciketunneltable != nullptr)
    {
        children["cikeTunnelTable"] = ciketunneltable;
    }

    if(cikepeercorrtable != nullptr)
    {
        children["cikePeerCorrTable"] = cikepeercorrtable;
    }

    if(cikephase1gwstatstable != nullptr)
    {
        children["cikePhase1GWStatsTable"] = cikephase1gwstatstable;
    }

    if(cipsectunneltable != nullptr)
    {
        children["cipSecTunnelTable"] = cipsectunneltable;
    }

    if(cipsecendpttable != nullptr)
    {
        children["cipSecEndPtTable"] = cipsecendpttable;
    }

    if(cipsecspitable != nullptr)
    {
        children["cipSecSpiTable"] = cipsecspitable;
    }

    if(cipsecphase2gwstatstable != nullptr)
    {
        children["cipSecPhase2GWStatsTable"] = cipsecphase2gwstatstable;
    }

    if(ciketunnelhisttable != nullptr)
    {
        children["cikeTunnelHistTable"] = ciketunnelhisttable;
    }

    if(cipsectunnelhisttable != nullptr)
    {
        children["cipSecTunnelHistTable"] = cipsectunnelhisttable;
    }

    if(cipsecendpthisttable != nullptr)
    {
        children["cipSecEndPtHistTable"] = cipsecendpthisttable;
    }

    if(cikefailtable != nullptr)
    {
        children["cikeFailTable"] = cikefailtable;
    }

    if(cipsecfailtable != nullptr)
    {
        children["cipSecFailTable"] = cipsecfailtable;
    }

    return children;
}

void CISCOIPSECFLOWMONITORMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPSECFLOWMONITORMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOIPSECFLOWMONITORMIB::clone_ptr() const
{
    return std::make_shared<CISCOIPSECFLOWMONITORMIB>();
}

std::string CISCOIPSECFLOWMONITORMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOIPSECFLOWMONITORMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOIPSECFLOWMONITORMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOIPSECFLOWMONITORMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOIPSECFLOWMONITORMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipSecLevels" || name == "cikeGlobalStats" || name == "cipSecGlobalStats" || name == "cipSecHistGlobalCntl" || name == "cipSecFailGlobalCntl" || name == "cipSecTrapCntl" || name == "cikePeerTable" || name == "cikeTunnelTable" || name == "cikePeerCorrTable" || name == "cikePhase1GWStatsTable" || name == "cipSecTunnelTable" || name == "cipSecEndPtTable" || name == "cipSecSpiTable" || name == "cipSecPhase2GWStatsTable" || name == "cikeTunnelHistTable" || name == "cipSecTunnelHistTable" || name == "cipSecEndPtHistTable" || name == "cikeFailTable" || name == "cipSecFailTable")
        return true;
    return false;
}

CISCOIPSECFLOWMONITORMIB::Cipseclevels::Cipseclevels()
    :
    cipsecmiblevel{YType::int32, "cipSecMibLevel"}
{

    yang_name = "cipSecLevels"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSECFLOWMONITORMIB::Cipseclevels::~Cipseclevels()
{
}

bool CISCOIPSECFLOWMONITORMIB::Cipseclevels::has_data() const
{
    return cipsecmiblevel.is_set;
}

bool CISCOIPSECFLOWMONITORMIB::Cipseclevels::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipsecmiblevel.yfilter);
}

std::string CISCOIPSECFLOWMONITORMIB::Cipseclevels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECFLOWMONITORMIB::Cipseclevels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecLevels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECFLOWMONITORMIB::Cipseclevels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsecmiblevel.is_set || is_set(cipsecmiblevel.yfilter)) leaf_name_data.push_back(cipsecmiblevel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECFLOWMONITORMIB::Cipseclevels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECFLOWMONITORMIB::Cipseclevels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPSECFLOWMONITORMIB::Cipseclevels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipSecMibLevel")
    {
        cipsecmiblevel = value;
        cipsecmiblevel.value_namespace = name_space;
        cipsecmiblevel.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSECFLOWMONITORMIB::Cipseclevels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipSecMibLevel")
    {
        cipsecmiblevel.yfilter = yfilter;
    }
}

bool CISCOIPSECFLOWMONITORMIB::Cipseclevels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipSecMibLevel")
        return true;
    return false;
}

CISCOIPSECFLOWMONITORMIB::Cikeglobalstats::Cikeglobalstats()
    :
    cikeglobalactivetunnels{YType::uint32, "cikeGlobalActiveTunnels"},
    cikeglobalprevioustunnels{YType::uint32, "cikeGlobalPreviousTunnels"},
    cikeglobalinoctets{YType::uint32, "cikeGlobalInOctets"},
    cikeglobalinpkts{YType::uint32, "cikeGlobalInPkts"},
    cikeglobalindroppkts{YType::uint32, "cikeGlobalInDropPkts"},
    cikeglobalinnotifys{YType::uint32, "cikeGlobalInNotifys"},
    cikeglobalinp2exchgs{YType::uint32, "cikeGlobalInP2Exchgs"},
    cikeglobalinp2exchginvalids{YType::uint32, "cikeGlobalInP2ExchgInvalids"},
    cikeglobalinp2exchgrejects{YType::uint32, "cikeGlobalInP2ExchgRejects"},
    cikeglobalinp2sadelrequests{YType::uint32, "cikeGlobalInP2SaDelRequests"},
    cikeglobaloutoctets{YType::uint32, "cikeGlobalOutOctets"},
    cikeglobaloutpkts{YType::uint32, "cikeGlobalOutPkts"},
    cikeglobaloutdroppkts{YType::uint32, "cikeGlobalOutDropPkts"},
    cikeglobaloutnotifys{YType::uint32, "cikeGlobalOutNotifys"},
    cikeglobaloutp2exchgs{YType::uint32, "cikeGlobalOutP2Exchgs"},
    cikeglobaloutp2exchginvalids{YType::uint32, "cikeGlobalOutP2ExchgInvalids"},
    cikeglobaloutp2exchgrejects{YType::uint32, "cikeGlobalOutP2ExchgRejects"},
    cikeglobaloutp2sadelrequests{YType::uint32, "cikeGlobalOutP2SaDelRequests"},
    cikeglobalinittunnels{YType::uint32, "cikeGlobalInitTunnels"},
    cikeglobalinittunnelfails{YType::uint32, "cikeGlobalInitTunnelFails"},
    cikeglobalresptunnelfails{YType::uint32, "cikeGlobalRespTunnelFails"},
    cikeglobalsyscapfails{YType::uint32, "cikeGlobalSysCapFails"},
    cikeglobalauthfails{YType::uint32, "cikeGlobalAuthFails"},
    cikeglobaldecryptfails{YType::uint32, "cikeGlobalDecryptFails"},
    cikeglobalhashvalidfails{YType::uint32, "cikeGlobalHashValidFails"},
    cikeglobalnosafails{YType::uint32, "cikeGlobalNoSaFails"}
{

    yang_name = "cikeGlobalStats"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSECFLOWMONITORMIB::Cikeglobalstats::~Cikeglobalstats()
{
}

bool CISCOIPSECFLOWMONITORMIB::Cikeglobalstats::has_data() const
{
    return cikeglobalactivetunnels.is_set
	|| cikeglobalprevioustunnels.is_set
	|| cikeglobalinoctets.is_set
	|| cikeglobalinpkts.is_set
	|| cikeglobalindroppkts.is_set
	|| cikeglobalinnotifys.is_set
	|| cikeglobalinp2exchgs.is_set
	|| cikeglobalinp2exchginvalids.is_set
	|| cikeglobalinp2exchgrejects.is_set
	|| cikeglobalinp2sadelrequests.is_set
	|| cikeglobaloutoctets.is_set
	|| cikeglobaloutpkts.is_set
	|| cikeglobaloutdroppkts.is_set
	|| cikeglobaloutnotifys.is_set
	|| cikeglobaloutp2exchgs.is_set
	|| cikeglobaloutp2exchginvalids.is_set
	|| cikeglobaloutp2exchgrejects.is_set
	|| cikeglobaloutp2sadelrequests.is_set
	|| cikeglobalinittunnels.is_set
	|| cikeglobalinittunnelfails.is_set
	|| cikeglobalresptunnelfails.is_set
	|| cikeglobalsyscapfails.is_set
	|| cikeglobalauthfails.is_set
	|| cikeglobaldecryptfails.is_set
	|| cikeglobalhashvalidfails.is_set
	|| cikeglobalnosafails.is_set;
}

bool CISCOIPSECFLOWMONITORMIB::Cikeglobalstats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cikeglobalactivetunnels.yfilter)
	|| ydk::is_set(cikeglobalprevioustunnels.yfilter)
	|| ydk::is_set(cikeglobalinoctets.yfilter)
	|| ydk::is_set(cikeglobalinpkts.yfilter)
	|| ydk::is_set(cikeglobalindroppkts.yfilter)
	|| ydk::is_set(cikeglobalinnotifys.yfilter)
	|| ydk::is_set(cikeglobalinp2exchgs.yfilter)
	|| ydk::is_set(cikeglobalinp2exchginvalids.yfilter)
	|| ydk::is_set(cikeglobalinp2exchgrejects.yfilter)
	|| ydk::is_set(cikeglobalinp2sadelrequests.yfilter)
	|| ydk::is_set(cikeglobaloutoctets.yfilter)
	|| ydk::is_set(cikeglobaloutpkts.yfilter)
	|| ydk::is_set(cikeglobaloutdroppkts.yfilter)
	|| ydk::is_set(cikeglobaloutnotifys.yfilter)
	|| ydk::is_set(cikeglobaloutp2exchgs.yfilter)
	|| ydk::is_set(cikeglobaloutp2exchginvalids.yfilter)
	|| ydk::is_set(cikeglobaloutp2exchgrejects.yfilter)
	|| ydk::is_set(cikeglobaloutp2sadelrequests.yfilter)
	|| ydk::is_set(cikeglobalinittunnels.yfilter)
	|| ydk::is_set(cikeglobalinittunnelfails.yfilter)
	|| ydk::is_set(cikeglobalresptunnelfails.yfilter)
	|| ydk::is_set(cikeglobalsyscapfails.yfilter)
	|| ydk::is_set(cikeglobalauthfails.yfilter)
	|| ydk::is_set(cikeglobaldecryptfails.yfilter)
	|| ydk::is_set(cikeglobalhashvalidfails.yfilter)
	|| ydk::is_set(cikeglobalnosafails.yfilter);
}

std::string CISCOIPSECFLOWMONITORMIB::Cikeglobalstats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECFLOWMONITORMIB::Cikeglobalstats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cikeGlobalStats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECFLOWMONITORMIB::Cikeglobalstats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cikeglobalactivetunnels.is_set || is_set(cikeglobalactivetunnels.yfilter)) leaf_name_data.push_back(cikeglobalactivetunnels.get_name_leafdata());
    if (cikeglobalprevioustunnels.is_set || is_set(cikeglobalprevioustunnels.yfilter)) leaf_name_data.push_back(cikeglobalprevioustunnels.get_name_leafdata());
    if (cikeglobalinoctets.is_set || is_set(cikeglobalinoctets.yfilter)) leaf_name_data.push_back(cikeglobalinoctets.get_name_leafdata());
    if (cikeglobalinpkts.is_set || is_set(cikeglobalinpkts.yfilter)) leaf_name_data.push_back(cikeglobalinpkts.get_name_leafdata());
    if (cikeglobalindroppkts.is_set || is_set(cikeglobalindroppkts.yfilter)) leaf_name_data.push_back(cikeglobalindroppkts.get_name_leafdata());
    if (cikeglobalinnotifys.is_set || is_set(cikeglobalinnotifys.yfilter)) leaf_name_data.push_back(cikeglobalinnotifys.get_name_leafdata());
    if (cikeglobalinp2exchgs.is_set || is_set(cikeglobalinp2exchgs.yfilter)) leaf_name_data.push_back(cikeglobalinp2exchgs.get_name_leafdata());
    if (cikeglobalinp2exchginvalids.is_set || is_set(cikeglobalinp2exchginvalids.yfilter)) leaf_name_data.push_back(cikeglobalinp2exchginvalids.get_name_leafdata());
    if (cikeglobalinp2exchgrejects.is_set || is_set(cikeglobalinp2exchgrejects.yfilter)) leaf_name_data.push_back(cikeglobalinp2exchgrejects.get_name_leafdata());
    if (cikeglobalinp2sadelrequests.is_set || is_set(cikeglobalinp2sadelrequests.yfilter)) leaf_name_data.push_back(cikeglobalinp2sadelrequests.get_name_leafdata());
    if (cikeglobaloutoctets.is_set || is_set(cikeglobaloutoctets.yfilter)) leaf_name_data.push_back(cikeglobaloutoctets.get_name_leafdata());
    if (cikeglobaloutpkts.is_set || is_set(cikeglobaloutpkts.yfilter)) leaf_name_data.push_back(cikeglobaloutpkts.get_name_leafdata());
    if (cikeglobaloutdroppkts.is_set || is_set(cikeglobaloutdroppkts.yfilter)) leaf_name_data.push_back(cikeglobaloutdroppkts.get_name_leafdata());
    if (cikeglobaloutnotifys.is_set || is_set(cikeglobaloutnotifys.yfilter)) leaf_name_data.push_back(cikeglobaloutnotifys.get_name_leafdata());
    if (cikeglobaloutp2exchgs.is_set || is_set(cikeglobaloutp2exchgs.yfilter)) leaf_name_data.push_back(cikeglobaloutp2exchgs.get_name_leafdata());
    if (cikeglobaloutp2exchginvalids.is_set || is_set(cikeglobaloutp2exchginvalids.yfilter)) leaf_name_data.push_back(cikeglobaloutp2exchginvalids.get_name_leafdata());
    if (cikeglobaloutp2exchgrejects.is_set || is_set(cikeglobaloutp2exchgrejects.yfilter)) leaf_name_data.push_back(cikeglobaloutp2exchgrejects.get_name_leafdata());
    if (cikeglobaloutp2sadelrequests.is_set || is_set(cikeglobaloutp2sadelrequests.yfilter)) leaf_name_data.push_back(cikeglobaloutp2sadelrequests.get_name_leafdata());
    if (cikeglobalinittunnels.is_set || is_set(cikeglobalinittunnels.yfilter)) leaf_name_data.push_back(cikeglobalinittunnels.get_name_leafdata());
    if (cikeglobalinittunnelfails.is_set || is_set(cikeglobalinittunnelfails.yfilter)) leaf_name_data.push_back(cikeglobalinittunnelfails.get_name_leafdata());
    if (cikeglobalresptunnelfails.is_set || is_set(cikeglobalresptunnelfails.yfilter)) leaf_name_data.push_back(cikeglobalresptunnelfails.get_name_leafdata());
    if (cikeglobalsyscapfails.is_set || is_set(cikeglobalsyscapfails.yfilter)) leaf_name_data.push_back(cikeglobalsyscapfails.get_name_leafdata());
    if (cikeglobalauthfails.is_set || is_set(cikeglobalauthfails.yfilter)) leaf_name_data.push_back(cikeglobalauthfails.get_name_leafdata());
    if (cikeglobaldecryptfails.is_set || is_set(cikeglobaldecryptfails.yfilter)) leaf_name_data.push_back(cikeglobaldecryptfails.get_name_leafdata());
    if (cikeglobalhashvalidfails.is_set || is_set(cikeglobalhashvalidfails.yfilter)) leaf_name_data.push_back(cikeglobalhashvalidfails.get_name_leafdata());
    if (cikeglobalnosafails.is_set || is_set(cikeglobalnosafails.yfilter)) leaf_name_data.push_back(cikeglobalnosafails.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECFLOWMONITORMIB::Cikeglobalstats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECFLOWMONITORMIB::Cikeglobalstats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPSECFLOWMONITORMIB::Cikeglobalstats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cikeGlobalActiveTunnels")
    {
        cikeglobalactivetunnels = value;
        cikeglobalactivetunnels.value_namespace = name_space;
        cikeglobalactivetunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeGlobalPreviousTunnels")
    {
        cikeglobalprevioustunnels = value;
        cikeglobalprevioustunnels.value_namespace = name_space;
        cikeglobalprevioustunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeGlobalInOctets")
    {
        cikeglobalinoctets = value;
        cikeglobalinoctets.value_namespace = name_space;
        cikeglobalinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeGlobalInPkts")
    {
        cikeglobalinpkts = value;
        cikeglobalinpkts.value_namespace = name_space;
        cikeglobalinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeGlobalInDropPkts")
    {
        cikeglobalindroppkts = value;
        cikeglobalindroppkts.value_namespace = name_space;
        cikeglobalindroppkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeGlobalInNotifys")
    {
        cikeglobalinnotifys = value;
        cikeglobalinnotifys.value_namespace = name_space;
        cikeglobalinnotifys.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeGlobalInP2Exchgs")
    {
        cikeglobalinp2exchgs = value;
        cikeglobalinp2exchgs.value_namespace = name_space;
        cikeglobalinp2exchgs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeGlobalInP2ExchgInvalids")
    {
        cikeglobalinp2exchginvalids = value;
        cikeglobalinp2exchginvalids.value_namespace = name_space;
        cikeglobalinp2exchginvalids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeGlobalInP2ExchgRejects")
    {
        cikeglobalinp2exchgrejects = value;
        cikeglobalinp2exchgrejects.value_namespace = name_space;
        cikeglobalinp2exchgrejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeGlobalInP2SaDelRequests")
    {
        cikeglobalinp2sadelrequests = value;
        cikeglobalinp2sadelrequests.value_namespace = name_space;
        cikeglobalinp2sadelrequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeGlobalOutOctets")
    {
        cikeglobaloutoctets = value;
        cikeglobaloutoctets.value_namespace = name_space;
        cikeglobaloutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeGlobalOutPkts")
    {
        cikeglobaloutpkts = value;
        cikeglobaloutpkts.value_namespace = name_space;
        cikeglobaloutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeGlobalOutDropPkts")
    {
        cikeglobaloutdroppkts = value;
        cikeglobaloutdroppkts.value_namespace = name_space;
        cikeglobaloutdroppkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeGlobalOutNotifys")
    {
        cikeglobaloutnotifys = value;
        cikeglobaloutnotifys.value_namespace = name_space;
        cikeglobaloutnotifys.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeGlobalOutP2Exchgs")
    {
        cikeglobaloutp2exchgs = value;
        cikeglobaloutp2exchgs.value_namespace = name_space;
        cikeglobaloutp2exchgs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeGlobalOutP2ExchgInvalids")
    {
        cikeglobaloutp2exchginvalids = value;
        cikeglobaloutp2exchginvalids.value_namespace = name_space;
        cikeglobaloutp2exchginvalids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeGlobalOutP2ExchgRejects")
    {
        cikeglobaloutp2exchgrejects = value;
        cikeglobaloutp2exchgrejects.value_namespace = name_space;
        cikeglobaloutp2exchgrejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeGlobalOutP2SaDelRequests")
    {
        cikeglobaloutp2sadelrequests = value;
        cikeglobaloutp2sadelrequests.value_namespace = name_space;
        cikeglobaloutp2sadelrequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeGlobalInitTunnels")
    {
        cikeglobalinittunnels = value;
        cikeglobalinittunnels.value_namespace = name_space;
        cikeglobalinittunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeGlobalInitTunnelFails")
    {
        cikeglobalinittunnelfails = value;
        cikeglobalinittunnelfails.value_namespace = name_space;
        cikeglobalinittunnelfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeGlobalRespTunnelFails")
    {
        cikeglobalresptunnelfails = value;
        cikeglobalresptunnelfails.value_namespace = name_space;
        cikeglobalresptunnelfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeGlobalSysCapFails")
    {
        cikeglobalsyscapfails = value;
        cikeglobalsyscapfails.value_namespace = name_space;
        cikeglobalsyscapfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeGlobalAuthFails")
    {
        cikeglobalauthfails = value;
        cikeglobalauthfails.value_namespace = name_space;
        cikeglobalauthfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeGlobalDecryptFails")
    {
        cikeglobaldecryptfails = value;
        cikeglobaldecryptfails.value_namespace = name_space;
        cikeglobaldecryptfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeGlobalHashValidFails")
    {
        cikeglobalhashvalidfails = value;
        cikeglobalhashvalidfails.value_namespace = name_space;
        cikeglobalhashvalidfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeGlobalNoSaFails")
    {
        cikeglobalnosafails = value;
        cikeglobalnosafails.value_namespace = name_space;
        cikeglobalnosafails.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSECFLOWMONITORMIB::Cikeglobalstats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cikeGlobalActiveTunnels")
    {
        cikeglobalactivetunnels.yfilter = yfilter;
    }
    if(value_path == "cikeGlobalPreviousTunnels")
    {
        cikeglobalprevioustunnels.yfilter = yfilter;
    }
    if(value_path == "cikeGlobalInOctets")
    {
        cikeglobalinoctets.yfilter = yfilter;
    }
    if(value_path == "cikeGlobalInPkts")
    {
        cikeglobalinpkts.yfilter = yfilter;
    }
    if(value_path == "cikeGlobalInDropPkts")
    {
        cikeglobalindroppkts.yfilter = yfilter;
    }
    if(value_path == "cikeGlobalInNotifys")
    {
        cikeglobalinnotifys.yfilter = yfilter;
    }
    if(value_path == "cikeGlobalInP2Exchgs")
    {
        cikeglobalinp2exchgs.yfilter = yfilter;
    }
    if(value_path == "cikeGlobalInP2ExchgInvalids")
    {
        cikeglobalinp2exchginvalids.yfilter = yfilter;
    }
    if(value_path == "cikeGlobalInP2ExchgRejects")
    {
        cikeglobalinp2exchgrejects.yfilter = yfilter;
    }
    if(value_path == "cikeGlobalInP2SaDelRequests")
    {
        cikeglobalinp2sadelrequests.yfilter = yfilter;
    }
    if(value_path == "cikeGlobalOutOctets")
    {
        cikeglobaloutoctets.yfilter = yfilter;
    }
    if(value_path == "cikeGlobalOutPkts")
    {
        cikeglobaloutpkts.yfilter = yfilter;
    }
    if(value_path == "cikeGlobalOutDropPkts")
    {
        cikeglobaloutdroppkts.yfilter = yfilter;
    }
    if(value_path == "cikeGlobalOutNotifys")
    {
        cikeglobaloutnotifys.yfilter = yfilter;
    }
    if(value_path == "cikeGlobalOutP2Exchgs")
    {
        cikeglobaloutp2exchgs.yfilter = yfilter;
    }
    if(value_path == "cikeGlobalOutP2ExchgInvalids")
    {
        cikeglobaloutp2exchginvalids.yfilter = yfilter;
    }
    if(value_path == "cikeGlobalOutP2ExchgRejects")
    {
        cikeglobaloutp2exchgrejects.yfilter = yfilter;
    }
    if(value_path == "cikeGlobalOutP2SaDelRequests")
    {
        cikeglobaloutp2sadelrequests.yfilter = yfilter;
    }
    if(value_path == "cikeGlobalInitTunnels")
    {
        cikeglobalinittunnels.yfilter = yfilter;
    }
    if(value_path == "cikeGlobalInitTunnelFails")
    {
        cikeglobalinittunnelfails.yfilter = yfilter;
    }
    if(value_path == "cikeGlobalRespTunnelFails")
    {
        cikeglobalresptunnelfails.yfilter = yfilter;
    }
    if(value_path == "cikeGlobalSysCapFails")
    {
        cikeglobalsyscapfails.yfilter = yfilter;
    }
    if(value_path == "cikeGlobalAuthFails")
    {
        cikeglobalauthfails.yfilter = yfilter;
    }
    if(value_path == "cikeGlobalDecryptFails")
    {
        cikeglobaldecryptfails.yfilter = yfilter;
    }
    if(value_path == "cikeGlobalHashValidFails")
    {
        cikeglobalhashvalidfails.yfilter = yfilter;
    }
    if(value_path == "cikeGlobalNoSaFails")
    {
        cikeglobalnosafails.yfilter = yfilter;
    }
}

bool CISCOIPSECFLOWMONITORMIB::Cikeglobalstats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cikeGlobalActiveTunnels" || name == "cikeGlobalPreviousTunnels" || name == "cikeGlobalInOctets" || name == "cikeGlobalInPkts" || name == "cikeGlobalInDropPkts" || name == "cikeGlobalInNotifys" || name == "cikeGlobalInP2Exchgs" || name == "cikeGlobalInP2ExchgInvalids" || name == "cikeGlobalInP2ExchgRejects" || name == "cikeGlobalInP2SaDelRequests" || name == "cikeGlobalOutOctets" || name == "cikeGlobalOutPkts" || name == "cikeGlobalOutDropPkts" || name == "cikeGlobalOutNotifys" || name == "cikeGlobalOutP2Exchgs" || name == "cikeGlobalOutP2ExchgInvalids" || name == "cikeGlobalOutP2ExchgRejects" || name == "cikeGlobalOutP2SaDelRequests" || name == "cikeGlobalInitTunnels" || name == "cikeGlobalInitTunnelFails" || name == "cikeGlobalRespTunnelFails" || name == "cikeGlobalSysCapFails" || name == "cikeGlobalAuthFails" || name == "cikeGlobalDecryptFails" || name == "cikeGlobalHashValidFails" || name == "cikeGlobalNoSaFails")
        return true;
    return false;
}

CISCOIPSECFLOWMONITORMIB::Cipsecglobalstats::Cipsecglobalstats()
    :
    cipsecglobalactivetunnels{YType::uint32, "cipSecGlobalActiveTunnels"},
    cipsecglobalprevioustunnels{YType::uint32, "cipSecGlobalPreviousTunnels"},
    cipsecglobalinoctets{YType::uint32, "cipSecGlobalInOctets"},
    cipsecglobalhcinoctets{YType::uint64, "cipSecGlobalHcInOctets"},
    cipsecglobalinoctwraps{YType::uint32, "cipSecGlobalInOctWraps"},
    cipsecglobalindecompoctets{YType::uint32, "cipSecGlobalInDecompOctets"},
    cipsecglobalhcindecompoctets{YType::uint64, "cipSecGlobalHcInDecompOctets"},
    cipsecglobalindecompoctwraps{YType::uint32, "cipSecGlobalInDecompOctWraps"},
    cipsecglobalinpkts{YType::uint32, "cipSecGlobalInPkts"},
    cipsecglobalindrops{YType::uint32, "cipSecGlobalInDrops"},
    cipsecglobalinreplaydrops{YType::uint32, "cipSecGlobalInReplayDrops"},
    cipsecglobalinauths{YType::uint32, "cipSecGlobalInAuths"},
    cipsecglobalinauthfails{YType::uint32, "cipSecGlobalInAuthFails"},
    cipsecglobalindecrypts{YType::uint32, "cipSecGlobalInDecrypts"},
    cipsecglobalindecryptfails{YType::uint32, "cipSecGlobalInDecryptFails"},
    cipsecglobaloutoctets{YType::uint32, "cipSecGlobalOutOctets"},
    cipsecglobalhcoutoctets{YType::uint64, "cipSecGlobalHcOutOctets"},
    cipsecglobaloutoctwraps{YType::uint32, "cipSecGlobalOutOctWraps"},
    cipsecglobaloutuncompoctets{YType::uint32, "cipSecGlobalOutUncompOctets"},
    cipsecglobalhcoutuncompoctets{YType::uint64, "cipSecGlobalHcOutUncompOctets"},
    cipsecglobaloutuncompoctwraps{YType::uint32, "cipSecGlobalOutUncompOctWraps"},
    cipsecglobaloutpkts{YType::uint32, "cipSecGlobalOutPkts"},
    cipsecglobaloutdrops{YType::uint32, "cipSecGlobalOutDrops"},
    cipsecglobaloutauths{YType::uint32, "cipSecGlobalOutAuths"},
    cipsecglobaloutauthfails{YType::uint32, "cipSecGlobalOutAuthFails"},
    cipsecglobaloutencrypts{YType::uint32, "cipSecGlobalOutEncrypts"},
    cipsecglobaloutencryptfails{YType::uint32, "cipSecGlobalOutEncryptFails"},
    cipsecglobalprotocolusefails{YType::uint32, "cipSecGlobalProtocolUseFails"},
    cipsecglobalnosafails{YType::uint32, "cipSecGlobalNoSaFails"},
    cipsecglobalsyscapfails{YType::uint32, "cipSecGlobalSysCapFails"}
{

    yang_name = "cipSecGlobalStats"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSECFLOWMONITORMIB::Cipsecglobalstats::~Cipsecglobalstats()
{
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecglobalstats::has_data() const
{
    return cipsecglobalactivetunnels.is_set
	|| cipsecglobalprevioustunnels.is_set
	|| cipsecglobalinoctets.is_set
	|| cipsecglobalhcinoctets.is_set
	|| cipsecglobalinoctwraps.is_set
	|| cipsecglobalindecompoctets.is_set
	|| cipsecglobalhcindecompoctets.is_set
	|| cipsecglobalindecompoctwraps.is_set
	|| cipsecglobalinpkts.is_set
	|| cipsecglobalindrops.is_set
	|| cipsecglobalinreplaydrops.is_set
	|| cipsecglobalinauths.is_set
	|| cipsecglobalinauthfails.is_set
	|| cipsecglobalindecrypts.is_set
	|| cipsecglobalindecryptfails.is_set
	|| cipsecglobaloutoctets.is_set
	|| cipsecglobalhcoutoctets.is_set
	|| cipsecglobaloutoctwraps.is_set
	|| cipsecglobaloutuncompoctets.is_set
	|| cipsecglobalhcoutuncompoctets.is_set
	|| cipsecglobaloutuncompoctwraps.is_set
	|| cipsecglobaloutpkts.is_set
	|| cipsecglobaloutdrops.is_set
	|| cipsecglobaloutauths.is_set
	|| cipsecglobaloutauthfails.is_set
	|| cipsecglobaloutencrypts.is_set
	|| cipsecglobaloutencryptfails.is_set
	|| cipsecglobalprotocolusefails.is_set
	|| cipsecglobalnosafails.is_set
	|| cipsecglobalsyscapfails.is_set;
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecglobalstats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipsecglobalactivetunnels.yfilter)
	|| ydk::is_set(cipsecglobalprevioustunnels.yfilter)
	|| ydk::is_set(cipsecglobalinoctets.yfilter)
	|| ydk::is_set(cipsecglobalhcinoctets.yfilter)
	|| ydk::is_set(cipsecglobalinoctwraps.yfilter)
	|| ydk::is_set(cipsecglobalindecompoctets.yfilter)
	|| ydk::is_set(cipsecglobalhcindecompoctets.yfilter)
	|| ydk::is_set(cipsecglobalindecompoctwraps.yfilter)
	|| ydk::is_set(cipsecglobalinpkts.yfilter)
	|| ydk::is_set(cipsecglobalindrops.yfilter)
	|| ydk::is_set(cipsecglobalinreplaydrops.yfilter)
	|| ydk::is_set(cipsecglobalinauths.yfilter)
	|| ydk::is_set(cipsecglobalinauthfails.yfilter)
	|| ydk::is_set(cipsecglobalindecrypts.yfilter)
	|| ydk::is_set(cipsecglobalindecryptfails.yfilter)
	|| ydk::is_set(cipsecglobaloutoctets.yfilter)
	|| ydk::is_set(cipsecglobalhcoutoctets.yfilter)
	|| ydk::is_set(cipsecglobaloutoctwraps.yfilter)
	|| ydk::is_set(cipsecglobaloutuncompoctets.yfilter)
	|| ydk::is_set(cipsecglobalhcoutuncompoctets.yfilter)
	|| ydk::is_set(cipsecglobaloutuncompoctwraps.yfilter)
	|| ydk::is_set(cipsecglobaloutpkts.yfilter)
	|| ydk::is_set(cipsecglobaloutdrops.yfilter)
	|| ydk::is_set(cipsecglobaloutauths.yfilter)
	|| ydk::is_set(cipsecglobaloutauthfails.yfilter)
	|| ydk::is_set(cipsecglobaloutencrypts.yfilter)
	|| ydk::is_set(cipsecglobaloutencryptfails.yfilter)
	|| ydk::is_set(cipsecglobalprotocolusefails.yfilter)
	|| ydk::is_set(cipsecglobalnosafails.yfilter)
	|| ydk::is_set(cipsecglobalsyscapfails.yfilter);
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsecglobalstats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsecglobalstats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecGlobalStats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECFLOWMONITORMIB::Cipsecglobalstats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsecglobalactivetunnels.is_set || is_set(cipsecglobalactivetunnels.yfilter)) leaf_name_data.push_back(cipsecglobalactivetunnels.get_name_leafdata());
    if (cipsecglobalprevioustunnels.is_set || is_set(cipsecglobalprevioustunnels.yfilter)) leaf_name_data.push_back(cipsecglobalprevioustunnels.get_name_leafdata());
    if (cipsecglobalinoctets.is_set || is_set(cipsecglobalinoctets.yfilter)) leaf_name_data.push_back(cipsecglobalinoctets.get_name_leafdata());
    if (cipsecglobalhcinoctets.is_set || is_set(cipsecglobalhcinoctets.yfilter)) leaf_name_data.push_back(cipsecglobalhcinoctets.get_name_leafdata());
    if (cipsecglobalinoctwraps.is_set || is_set(cipsecglobalinoctwraps.yfilter)) leaf_name_data.push_back(cipsecglobalinoctwraps.get_name_leafdata());
    if (cipsecglobalindecompoctets.is_set || is_set(cipsecglobalindecompoctets.yfilter)) leaf_name_data.push_back(cipsecglobalindecompoctets.get_name_leafdata());
    if (cipsecglobalhcindecompoctets.is_set || is_set(cipsecglobalhcindecompoctets.yfilter)) leaf_name_data.push_back(cipsecglobalhcindecompoctets.get_name_leafdata());
    if (cipsecglobalindecompoctwraps.is_set || is_set(cipsecglobalindecompoctwraps.yfilter)) leaf_name_data.push_back(cipsecglobalindecompoctwraps.get_name_leafdata());
    if (cipsecglobalinpkts.is_set || is_set(cipsecglobalinpkts.yfilter)) leaf_name_data.push_back(cipsecglobalinpkts.get_name_leafdata());
    if (cipsecglobalindrops.is_set || is_set(cipsecglobalindrops.yfilter)) leaf_name_data.push_back(cipsecglobalindrops.get_name_leafdata());
    if (cipsecglobalinreplaydrops.is_set || is_set(cipsecglobalinreplaydrops.yfilter)) leaf_name_data.push_back(cipsecglobalinreplaydrops.get_name_leafdata());
    if (cipsecglobalinauths.is_set || is_set(cipsecglobalinauths.yfilter)) leaf_name_data.push_back(cipsecglobalinauths.get_name_leafdata());
    if (cipsecglobalinauthfails.is_set || is_set(cipsecglobalinauthfails.yfilter)) leaf_name_data.push_back(cipsecglobalinauthfails.get_name_leafdata());
    if (cipsecglobalindecrypts.is_set || is_set(cipsecglobalindecrypts.yfilter)) leaf_name_data.push_back(cipsecglobalindecrypts.get_name_leafdata());
    if (cipsecglobalindecryptfails.is_set || is_set(cipsecglobalindecryptfails.yfilter)) leaf_name_data.push_back(cipsecglobalindecryptfails.get_name_leafdata());
    if (cipsecglobaloutoctets.is_set || is_set(cipsecglobaloutoctets.yfilter)) leaf_name_data.push_back(cipsecglobaloutoctets.get_name_leafdata());
    if (cipsecglobalhcoutoctets.is_set || is_set(cipsecglobalhcoutoctets.yfilter)) leaf_name_data.push_back(cipsecglobalhcoutoctets.get_name_leafdata());
    if (cipsecglobaloutoctwraps.is_set || is_set(cipsecglobaloutoctwraps.yfilter)) leaf_name_data.push_back(cipsecglobaloutoctwraps.get_name_leafdata());
    if (cipsecglobaloutuncompoctets.is_set || is_set(cipsecglobaloutuncompoctets.yfilter)) leaf_name_data.push_back(cipsecglobaloutuncompoctets.get_name_leafdata());
    if (cipsecglobalhcoutuncompoctets.is_set || is_set(cipsecglobalhcoutuncompoctets.yfilter)) leaf_name_data.push_back(cipsecglobalhcoutuncompoctets.get_name_leafdata());
    if (cipsecglobaloutuncompoctwraps.is_set || is_set(cipsecglobaloutuncompoctwraps.yfilter)) leaf_name_data.push_back(cipsecglobaloutuncompoctwraps.get_name_leafdata());
    if (cipsecglobaloutpkts.is_set || is_set(cipsecglobaloutpkts.yfilter)) leaf_name_data.push_back(cipsecglobaloutpkts.get_name_leafdata());
    if (cipsecglobaloutdrops.is_set || is_set(cipsecglobaloutdrops.yfilter)) leaf_name_data.push_back(cipsecglobaloutdrops.get_name_leafdata());
    if (cipsecglobaloutauths.is_set || is_set(cipsecglobaloutauths.yfilter)) leaf_name_data.push_back(cipsecglobaloutauths.get_name_leafdata());
    if (cipsecglobaloutauthfails.is_set || is_set(cipsecglobaloutauthfails.yfilter)) leaf_name_data.push_back(cipsecglobaloutauthfails.get_name_leafdata());
    if (cipsecglobaloutencrypts.is_set || is_set(cipsecglobaloutencrypts.yfilter)) leaf_name_data.push_back(cipsecglobaloutencrypts.get_name_leafdata());
    if (cipsecglobaloutencryptfails.is_set || is_set(cipsecglobaloutencryptfails.yfilter)) leaf_name_data.push_back(cipsecglobaloutencryptfails.get_name_leafdata());
    if (cipsecglobalprotocolusefails.is_set || is_set(cipsecglobalprotocolusefails.yfilter)) leaf_name_data.push_back(cipsecglobalprotocolusefails.get_name_leafdata());
    if (cipsecglobalnosafails.is_set || is_set(cipsecglobalnosafails.yfilter)) leaf_name_data.push_back(cipsecglobalnosafails.get_name_leafdata());
    if (cipsecglobalsyscapfails.is_set || is_set(cipsecglobalsyscapfails.yfilter)) leaf_name_data.push_back(cipsecglobalsyscapfails.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECFLOWMONITORMIB::Cipsecglobalstats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECFLOWMONITORMIB::Cipsecglobalstats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPSECFLOWMONITORMIB::Cipsecglobalstats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipSecGlobalActiveTunnels")
    {
        cipsecglobalactivetunnels = value;
        cipsecglobalactivetunnels.value_namespace = name_space;
        cipsecglobalactivetunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecGlobalPreviousTunnels")
    {
        cipsecglobalprevioustunnels = value;
        cipsecglobalprevioustunnels.value_namespace = name_space;
        cipsecglobalprevioustunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecGlobalInOctets")
    {
        cipsecglobalinoctets = value;
        cipsecglobalinoctets.value_namespace = name_space;
        cipsecglobalinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecGlobalHcInOctets")
    {
        cipsecglobalhcinoctets = value;
        cipsecglobalhcinoctets.value_namespace = name_space;
        cipsecglobalhcinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecGlobalInOctWraps")
    {
        cipsecglobalinoctwraps = value;
        cipsecglobalinoctwraps.value_namespace = name_space;
        cipsecglobalinoctwraps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecGlobalInDecompOctets")
    {
        cipsecglobalindecompoctets = value;
        cipsecglobalindecompoctets.value_namespace = name_space;
        cipsecglobalindecompoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecGlobalHcInDecompOctets")
    {
        cipsecglobalhcindecompoctets = value;
        cipsecglobalhcindecompoctets.value_namespace = name_space;
        cipsecglobalhcindecompoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecGlobalInDecompOctWraps")
    {
        cipsecglobalindecompoctwraps = value;
        cipsecglobalindecompoctwraps.value_namespace = name_space;
        cipsecglobalindecompoctwraps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecGlobalInPkts")
    {
        cipsecglobalinpkts = value;
        cipsecglobalinpkts.value_namespace = name_space;
        cipsecglobalinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecGlobalInDrops")
    {
        cipsecglobalindrops = value;
        cipsecglobalindrops.value_namespace = name_space;
        cipsecglobalindrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecGlobalInReplayDrops")
    {
        cipsecglobalinreplaydrops = value;
        cipsecglobalinreplaydrops.value_namespace = name_space;
        cipsecglobalinreplaydrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecGlobalInAuths")
    {
        cipsecglobalinauths = value;
        cipsecglobalinauths.value_namespace = name_space;
        cipsecglobalinauths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecGlobalInAuthFails")
    {
        cipsecglobalinauthfails = value;
        cipsecglobalinauthfails.value_namespace = name_space;
        cipsecglobalinauthfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecGlobalInDecrypts")
    {
        cipsecglobalindecrypts = value;
        cipsecglobalindecrypts.value_namespace = name_space;
        cipsecglobalindecrypts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecGlobalInDecryptFails")
    {
        cipsecglobalindecryptfails = value;
        cipsecglobalindecryptfails.value_namespace = name_space;
        cipsecglobalindecryptfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecGlobalOutOctets")
    {
        cipsecglobaloutoctets = value;
        cipsecglobaloutoctets.value_namespace = name_space;
        cipsecglobaloutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecGlobalHcOutOctets")
    {
        cipsecglobalhcoutoctets = value;
        cipsecglobalhcoutoctets.value_namespace = name_space;
        cipsecglobalhcoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecGlobalOutOctWraps")
    {
        cipsecglobaloutoctwraps = value;
        cipsecglobaloutoctwraps.value_namespace = name_space;
        cipsecglobaloutoctwraps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecGlobalOutUncompOctets")
    {
        cipsecglobaloutuncompoctets = value;
        cipsecglobaloutuncompoctets.value_namespace = name_space;
        cipsecglobaloutuncompoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecGlobalHcOutUncompOctets")
    {
        cipsecglobalhcoutuncompoctets = value;
        cipsecglobalhcoutuncompoctets.value_namespace = name_space;
        cipsecglobalhcoutuncompoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecGlobalOutUncompOctWraps")
    {
        cipsecglobaloutuncompoctwraps = value;
        cipsecglobaloutuncompoctwraps.value_namespace = name_space;
        cipsecglobaloutuncompoctwraps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecGlobalOutPkts")
    {
        cipsecglobaloutpkts = value;
        cipsecglobaloutpkts.value_namespace = name_space;
        cipsecglobaloutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecGlobalOutDrops")
    {
        cipsecglobaloutdrops = value;
        cipsecglobaloutdrops.value_namespace = name_space;
        cipsecglobaloutdrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecGlobalOutAuths")
    {
        cipsecglobaloutauths = value;
        cipsecglobaloutauths.value_namespace = name_space;
        cipsecglobaloutauths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecGlobalOutAuthFails")
    {
        cipsecglobaloutauthfails = value;
        cipsecglobaloutauthfails.value_namespace = name_space;
        cipsecglobaloutauthfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecGlobalOutEncrypts")
    {
        cipsecglobaloutencrypts = value;
        cipsecglobaloutencrypts.value_namespace = name_space;
        cipsecglobaloutencrypts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecGlobalOutEncryptFails")
    {
        cipsecglobaloutencryptfails = value;
        cipsecglobaloutencryptfails.value_namespace = name_space;
        cipsecglobaloutencryptfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecGlobalProtocolUseFails")
    {
        cipsecglobalprotocolusefails = value;
        cipsecglobalprotocolusefails.value_namespace = name_space;
        cipsecglobalprotocolusefails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecGlobalNoSaFails")
    {
        cipsecglobalnosafails = value;
        cipsecglobalnosafails.value_namespace = name_space;
        cipsecglobalnosafails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecGlobalSysCapFails")
    {
        cipsecglobalsyscapfails = value;
        cipsecglobalsyscapfails.value_namespace = name_space;
        cipsecglobalsyscapfails.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSECFLOWMONITORMIB::Cipsecglobalstats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipSecGlobalActiveTunnels")
    {
        cipsecglobalactivetunnels.yfilter = yfilter;
    }
    if(value_path == "cipSecGlobalPreviousTunnels")
    {
        cipsecglobalprevioustunnels.yfilter = yfilter;
    }
    if(value_path == "cipSecGlobalInOctets")
    {
        cipsecglobalinoctets.yfilter = yfilter;
    }
    if(value_path == "cipSecGlobalHcInOctets")
    {
        cipsecglobalhcinoctets.yfilter = yfilter;
    }
    if(value_path == "cipSecGlobalInOctWraps")
    {
        cipsecglobalinoctwraps.yfilter = yfilter;
    }
    if(value_path == "cipSecGlobalInDecompOctets")
    {
        cipsecglobalindecompoctets.yfilter = yfilter;
    }
    if(value_path == "cipSecGlobalHcInDecompOctets")
    {
        cipsecglobalhcindecompoctets.yfilter = yfilter;
    }
    if(value_path == "cipSecGlobalInDecompOctWraps")
    {
        cipsecglobalindecompoctwraps.yfilter = yfilter;
    }
    if(value_path == "cipSecGlobalInPkts")
    {
        cipsecglobalinpkts.yfilter = yfilter;
    }
    if(value_path == "cipSecGlobalInDrops")
    {
        cipsecglobalindrops.yfilter = yfilter;
    }
    if(value_path == "cipSecGlobalInReplayDrops")
    {
        cipsecglobalinreplaydrops.yfilter = yfilter;
    }
    if(value_path == "cipSecGlobalInAuths")
    {
        cipsecglobalinauths.yfilter = yfilter;
    }
    if(value_path == "cipSecGlobalInAuthFails")
    {
        cipsecglobalinauthfails.yfilter = yfilter;
    }
    if(value_path == "cipSecGlobalInDecrypts")
    {
        cipsecglobalindecrypts.yfilter = yfilter;
    }
    if(value_path == "cipSecGlobalInDecryptFails")
    {
        cipsecglobalindecryptfails.yfilter = yfilter;
    }
    if(value_path == "cipSecGlobalOutOctets")
    {
        cipsecglobaloutoctets.yfilter = yfilter;
    }
    if(value_path == "cipSecGlobalHcOutOctets")
    {
        cipsecglobalhcoutoctets.yfilter = yfilter;
    }
    if(value_path == "cipSecGlobalOutOctWraps")
    {
        cipsecglobaloutoctwraps.yfilter = yfilter;
    }
    if(value_path == "cipSecGlobalOutUncompOctets")
    {
        cipsecglobaloutuncompoctets.yfilter = yfilter;
    }
    if(value_path == "cipSecGlobalHcOutUncompOctets")
    {
        cipsecglobalhcoutuncompoctets.yfilter = yfilter;
    }
    if(value_path == "cipSecGlobalOutUncompOctWraps")
    {
        cipsecglobaloutuncompoctwraps.yfilter = yfilter;
    }
    if(value_path == "cipSecGlobalOutPkts")
    {
        cipsecglobaloutpkts.yfilter = yfilter;
    }
    if(value_path == "cipSecGlobalOutDrops")
    {
        cipsecglobaloutdrops.yfilter = yfilter;
    }
    if(value_path == "cipSecGlobalOutAuths")
    {
        cipsecglobaloutauths.yfilter = yfilter;
    }
    if(value_path == "cipSecGlobalOutAuthFails")
    {
        cipsecglobaloutauthfails.yfilter = yfilter;
    }
    if(value_path == "cipSecGlobalOutEncrypts")
    {
        cipsecglobaloutencrypts.yfilter = yfilter;
    }
    if(value_path == "cipSecGlobalOutEncryptFails")
    {
        cipsecglobaloutencryptfails.yfilter = yfilter;
    }
    if(value_path == "cipSecGlobalProtocolUseFails")
    {
        cipsecglobalprotocolusefails.yfilter = yfilter;
    }
    if(value_path == "cipSecGlobalNoSaFails")
    {
        cipsecglobalnosafails.yfilter = yfilter;
    }
    if(value_path == "cipSecGlobalSysCapFails")
    {
        cipsecglobalsyscapfails.yfilter = yfilter;
    }
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecglobalstats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipSecGlobalActiveTunnels" || name == "cipSecGlobalPreviousTunnels" || name == "cipSecGlobalInOctets" || name == "cipSecGlobalHcInOctets" || name == "cipSecGlobalInOctWraps" || name == "cipSecGlobalInDecompOctets" || name == "cipSecGlobalHcInDecompOctets" || name == "cipSecGlobalInDecompOctWraps" || name == "cipSecGlobalInPkts" || name == "cipSecGlobalInDrops" || name == "cipSecGlobalInReplayDrops" || name == "cipSecGlobalInAuths" || name == "cipSecGlobalInAuthFails" || name == "cipSecGlobalInDecrypts" || name == "cipSecGlobalInDecryptFails" || name == "cipSecGlobalOutOctets" || name == "cipSecGlobalHcOutOctets" || name == "cipSecGlobalOutOctWraps" || name == "cipSecGlobalOutUncompOctets" || name == "cipSecGlobalHcOutUncompOctets" || name == "cipSecGlobalOutUncompOctWraps" || name == "cipSecGlobalOutPkts" || name == "cipSecGlobalOutDrops" || name == "cipSecGlobalOutAuths" || name == "cipSecGlobalOutAuthFails" || name == "cipSecGlobalOutEncrypts" || name == "cipSecGlobalOutEncryptFails" || name == "cipSecGlobalProtocolUseFails" || name == "cipSecGlobalNoSaFails" || name == "cipSecGlobalSysCapFails")
        return true;
    return false;
}

CISCOIPSECFLOWMONITORMIB::Cipsechistglobalcntl::Cipsechistglobalcntl()
    :
    cipsechisttablesize{YType::int32, "cipSecHistTableSize"},
    cipsechistcheckpoint{YType::enumeration, "cipSecHistCheckPoint"}
{

    yang_name = "cipSecHistGlobalCntl"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSECFLOWMONITORMIB::Cipsechistglobalcntl::~Cipsechistglobalcntl()
{
}

bool CISCOIPSECFLOWMONITORMIB::Cipsechistglobalcntl::has_data() const
{
    return cipsechisttablesize.is_set
	|| cipsechistcheckpoint.is_set;
}

bool CISCOIPSECFLOWMONITORMIB::Cipsechistglobalcntl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipsechisttablesize.yfilter)
	|| ydk::is_set(cipsechistcheckpoint.yfilter);
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsechistglobalcntl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsechistglobalcntl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecHistGlobalCntl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECFLOWMONITORMIB::Cipsechistglobalcntl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsechisttablesize.is_set || is_set(cipsechisttablesize.yfilter)) leaf_name_data.push_back(cipsechisttablesize.get_name_leafdata());
    if (cipsechistcheckpoint.is_set || is_set(cipsechistcheckpoint.yfilter)) leaf_name_data.push_back(cipsechistcheckpoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECFLOWMONITORMIB::Cipsechistglobalcntl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECFLOWMONITORMIB::Cipsechistglobalcntl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPSECFLOWMONITORMIB::Cipsechistglobalcntl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipSecHistTableSize")
    {
        cipsechisttablesize = value;
        cipsechisttablesize.value_namespace = name_space;
        cipsechisttablesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecHistCheckPoint")
    {
        cipsechistcheckpoint = value;
        cipsechistcheckpoint.value_namespace = name_space;
        cipsechistcheckpoint.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSECFLOWMONITORMIB::Cipsechistglobalcntl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipSecHistTableSize")
    {
        cipsechisttablesize.yfilter = yfilter;
    }
    if(value_path == "cipSecHistCheckPoint")
    {
        cipsechistcheckpoint.yfilter = yfilter;
    }
}

bool CISCOIPSECFLOWMONITORMIB::Cipsechistglobalcntl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipSecHistTableSize" || name == "cipSecHistCheckPoint")
        return true;
    return false;
}

CISCOIPSECFLOWMONITORMIB::Cipsecfailglobalcntl::Cipsecfailglobalcntl()
    :
    cipsecfailtablesize{YType::int32, "cipSecFailTableSize"}
{

    yang_name = "cipSecFailGlobalCntl"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSECFLOWMONITORMIB::Cipsecfailglobalcntl::~Cipsecfailglobalcntl()
{
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecfailglobalcntl::has_data() const
{
    return cipsecfailtablesize.is_set;
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecfailglobalcntl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipsecfailtablesize.yfilter);
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsecfailglobalcntl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsecfailglobalcntl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecFailGlobalCntl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECFLOWMONITORMIB::Cipsecfailglobalcntl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsecfailtablesize.is_set || is_set(cipsecfailtablesize.yfilter)) leaf_name_data.push_back(cipsecfailtablesize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECFLOWMONITORMIB::Cipsecfailglobalcntl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECFLOWMONITORMIB::Cipsecfailglobalcntl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPSECFLOWMONITORMIB::Cipsecfailglobalcntl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipSecFailTableSize")
    {
        cipsecfailtablesize = value;
        cipsecfailtablesize.value_namespace = name_space;
        cipsecfailtablesize.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSECFLOWMONITORMIB::Cipsecfailglobalcntl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipSecFailTableSize")
    {
        cipsecfailtablesize.yfilter = yfilter;
    }
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecfailglobalcntl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipSecFailTableSize")
        return true;
    return false;
}

CISCOIPSECFLOWMONITORMIB::Cipsectrapcntl::Cipsectrapcntl()
    :
    cipsectrapcntliketunnelstart{YType::enumeration, "cipSecTrapCntlIkeTunnelStart"},
    cipsectrapcntliketunnelstop{YType::enumeration, "cipSecTrapCntlIkeTunnelStop"},
    cipsectrapcntlikesysfailure{YType::enumeration, "cipSecTrapCntlIkeSysFailure"},
    cipsectrapcntlikecertcrlfailure{YType::enumeration, "cipSecTrapCntlIkeCertCrlFailure"},
    cipsectrapcntlikeprotocolfail{YType::enumeration, "cipSecTrapCntlIkeProtocolFail"},
    cipsectrapcntlikenosa{YType::enumeration, "cipSecTrapCntlIkeNoSa"},
    cipsectrapcntlipsectunnelstart{YType::enumeration, "cipSecTrapCntlIpSecTunnelStart"},
    cipsectrapcntlipsectunnelstop{YType::enumeration, "cipSecTrapCntlIpSecTunnelStop"},
    cipsectrapcntlipsecsysfailure{YType::enumeration, "cipSecTrapCntlIpSecSysFailure"},
    cipsectrapcntlipsecsetupfailure{YType::enumeration, "cipSecTrapCntlIpSecSetUpFailure"},
    cipsectrapcntlipsecearlytunterm{YType::enumeration, "cipSecTrapCntlIpSecEarlyTunTerm"},
    cipsectrapcntlipsecprotocolfail{YType::enumeration, "cipSecTrapCntlIpSecProtocolFail"},
    cipsectrapcntlipsecnosa{YType::enumeration, "cipSecTrapCntlIpSecNoSa"}
{

    yang_name = "cipSecTrapCntl"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSECFLOWMONITORMIB::Cipsectrapcntl::~Cipsectrapcntl()
{
}

bool CISCOIPSECFLOWMONITORMIB::Cipsectrapcntl::has_data() const
{
    return cipsectrapcntliketunnelstart.is_set
	|| cipsectrapcntliketunnelstop.is_set
	|| cipsectrapcntlikesysfailure.is_set
	|| cipsectrapcntlikecertcrlfailure.is_set
	|| cipsectrapcntlikeprotocolfail.is_set
	|| cipsectrapcntlikenosa.is_set
	|| cipsectrapcntlipsectunnelstart.is_set
	|| cipsectrapcntlipsectunnelstop.is_set
	|| cipsectrapcntlipsecsysfailure.is_set
	|| cipsectrapcntlipsecsetupfailure.is_set
	|| cipsectrapcntlipsecearlytunterm.is_set
	|| cipsectrapcntlipsecprotocolfail.is_set
	|| cipsectrapcntlipsecnosa.is_set;
}

bool CISCOIPSECFLOWMONITORMIB::Cipsectrapcntl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipsectrapcntliketunnelstart.yfilter)
	|| ydk::is_set(cipsectrapcntliketunnelstop.yfilter)
	|| ydk::is_set(cipsectrapcntlikesysfailure.yfilter)
	|| ydk::is_set(cipsectrapcntlikecertcrlfailure.yfilter)
	|| ydk::is_set(cipsectrapcntlikeprotocolfail.yfilter)
	|| ydk::is_set(cipsectrapcntlikenosa.yfilter)
	|| ydk::is_set(cipsectrapcntlipsectunnelstart.yfilter)
	|| ydk::is_set(cipsectrapcntlipsectunnelstop.yfilter)
	|| ydk::is_set(cipsectrapcntlipsecsysfailure.yfilter)
	|| ydk::is_set(cipsectrapcntlipsecsetupfailure.yfilter)
	|| ydk::is_set(cipsectrapcntlipsecearlytunterm.yfilter)
	|| ydk::is_set(cipsectrapcntlipsecprotocolfail.yfilter)
	|| ydk::is_set(cipsectrapcntlipsecnosa.yfilter);
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsectrapcntl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsectrapcntl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecTrapCntl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECFLOWMONITORMIB::Cipsectrapcntl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsectrapcntliketunnelstart.is_set || is_set(cipsectrapcntliketunnelstart.yfilter)) leaf_name_data.push_back(cipsectrapcntliketunnelstart.get_name_leafdata());
    if (cipsectrapcntliketunnelstop.is_set || is_set(cipsectrapcntliketunnelstop.yfilter)) leaf_name_data.push_back(cipsectrapcntliketunnelstop.get_name_leafdata());
    if (cipsectrapcntlikesysfailure.is_set || is_set(cipsectrapcntlikesysfailure.yfilter)) leaf_name_data.push_back(cipsectrapcntlikesysfailure.get_name_leafdata());
    if (cipsectrapcntlikecertcrlfailure.is_set || is_set(cipsectrapcntlikecertcrlfailure.yfilter)) leaf_name_data.push_back(cipsectrapcntlikecertcrlfailure.get_name_leafdata());
    if (cipsectrapcntlikeprotocolfail.is_set || is_set(cipsectrapcntlikeprotocolfail.yfilter)) leaf_name_data.push_back(cipsectrapcntlikeprotocolfail.get_name_leafdata());
    if (cipsectrapcntlikenosa.is_set || is_set(cipsectrapcntlikenosa.yfilter)) leaf_name_data.push_back(cipsectrapcntlikenosa.get_name_leafdata());
    if (cipsectrapcntlipsectunnelstart.is_set || is_set(cipsectrapcntlipsectunnelstart.yfilter)) leaf_name_data.push_back(cipsectrapcntlipsectunnelstart.get_name_leafdata());
    if (cipsectrapcntlipsectunnelstop.is_set || is_set(cipsectrapcntlipsectunnelstop.yfilter)) leaf_name_data.push_back(cipsectrapcntlipsectunnelstop.get_name_leafdata());
    if (cipsectrapcntlipsecsysfailure.is_set || is_set(cipsectrapcntlipsecsysfailure.yfilter)) leaf_name_data.push_back(cipsectrapcntlipsecsysfailure.get_name_leafdata());
    if (cipsectrapcntlipsecsetupfailure.is_set || is_set(cipsectrapcntlipsecsetupfailure.yfilter)) leaf_name_data.push_back(cipsectrapcntlipsecsetupfailure.get_name_leafdata());
    if (cipsectrapcntlipsecearlytunterm.is_set || is_set(cipsectrapcntlipsecearlytunterm.yfilter)) leaf_name_data.push_back(cipsectrapcntlipsecearlytunterm.get_name_leafdata());
    if (cipsectrapcntlipsecprotocolfail.is_set || is_set(cipsectrapcntlipsecprotocolfail.yfilter)) leaf_name_data.push_back(cipsectrapcntlipsecprotocolfail.get_name_leafdata());
    if (cipsectrapcntlipsecnosa.is_set || is_set(cipsectrapcntlipsecnosa.yfilter)) leaf_name_data.push_back(cipsectrapcntlipsecnosa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECFLOWMONITORMIB::Cipsectrapcntl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECFLOWMONITORMIB::Cipsectrapcntl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPSECFLOWMONITORMIB::Cipsectrapcntl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipSecTrapCntlIkeTunnelStart")
    {
        cipsectrapcntliketunnelstart = value;
        cipsectrapcntliketunnelstart.value_namespace = name_space;
        cipsectrapcntliketunnelstart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTrapCntlIkeTunnelStop")
    {
        cipsectrapcntliketunnelstop = value;
        cipsectrapcntliketunnelstop.value_namespace = name_space;
        cipsectrapcntliketunnelstop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTrapCntlIkeSysFailure")
    {
        cipsectrapcntlikesysfailure = value;
        cipsectrapcntlikesysfailure.value_namespace = name_space;
        cipsectrapcntlikesysfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTrapCntlIkeCertCrlFailure")
    {
        cipsectrapcntlikecertcrlfailure = value;
        cipsectrapcntlikecertcrlfailure.value_namespace = name_space;
        cipsectrapcntlikecertcrlfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTrapCntlIkeProtocolFail")
    {
        cipsectrapcntlikeprotocolfail = value;
        cipsectrapcntlikeprotocolfail.value_namespace = name_space;
        cipsectrapcntlikeprotocolfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTrapCntlIkeNoSa")
    {
        cipsectrapcntlikenosa = value;
        cipsectrapcntlikenosa.value_namespace = name_space;
        cipsectrapcntlikenosa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTrapCntlIpSecTunnelStart")
    {
        cipsectrapcntlipsectunnelstart = value;
        cipsectrapcntlipsectunnelstart.value_namespace = name_space;
        cipsectrapcntlipsectunnelstart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTrapCntlIpSecTunnelStop")
    {
        cipsectrapcntlipsectunnelstop = value;
        cipsectrapcntlipsectunnelstop.value_namespace = name_space;
        cipsectrapcntlipsectunnelstop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTrapCntlIpSecSysFailure")
    {
        cipsectrapcntlipsecsysfailure = value;
        cipsectrapcntlipsecsysfailure.value_namespace = name_space;
        cipsectrapcntlipsecsysfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTrapCntlIpSecSetUpFailure")
    {
        cipsectrapcntlipsecsetupfailure = value;
        cipsectrapcntlipsecsetupfailure.value_namespace = name_space;
        cipsectrapcntlipsecsetupfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTrapCntlIpSecEarlyTunTerm")
    {
        cipsectrapcntlipsecearlytunterm = value;
        cipsectrapcntlipsecearlytunterm.value_namespace = name_space;
        cipsectrapcntlipsecearlytunterm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTrapCntlIpSecProtocolFail")
    {
        cipsectrapcntlipsecprotocolfail = value;
        cipsectrapcntlipsecprotocolfail.value_namespace = name_space;
        cipsectrapcntlipsecprotocolfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTrapCntlIpSecNoSa")
    {
        cipsectrapcntlipsecnosa = value;
        cipsectrapcntlipsecnosa.value_namespace = name_space;
        cipsectrapcntlipsecnosa.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSECFLOWMONITORMIB::Cipsectrapcntl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipSecTrapCntlIkeTunnelStart")
    {
        cipsectrapcntliketunnelstart.yfilter = yfilter;
    }
    if(value_path == "cipSecTrapCntlIkeTunnelStop")
    {
        cipsectrapcntliketunnelstop.yfilter = yfilter;
    }
    if(value_path == "cipSecTrapCntlIkeSysFailure")
    {
        cipsectrapcntlikesysfailure.yfilter = yfilter;
    }
    if(value_path == "cipSecTrapCntlIkeCertCrlFailure")
    {
        cipsectrapcntlikecertcrlfailure.yfilter = yfilter;
    }
    if(value_path == "cipSecTrapCntlIkeProtocolFail")
    {
        cipsectrapcntlikeprotocolfail.yfilter = yfilter;
    }
    if(value_path == "cipSecTrapCntlIkeNoSa")
    {
        cipsectrapcntlikenosa.yfilter = yfilter;
    }
    if(value_path == "cipSecTrapCntlIpSecTunnelStart")
    {
        cipsectrapcntlipsectunnelstart.yfilter = yfilter;
    }
    if(value_path == "cipSecTrapCntlIpSecTunnelStop")
    {
        cipsectrapcntlipsectunnelstop.yfilter = yfilter;
    }
    if(value_path == "cipSecTrapCntlIpSecSysFailure")
    {
        cipsectrapcntlipsecsysfailure.yfilter = yfilter;
    }
    if(value_path == "cipSecTrapCntlIpSecSetUpFailure")
    {
        cipsectrapcntlipsecsetupfailure.yfilter = yfilter;
    }
    if(value_path == "cipSecTrapCntlIpSecEarlyTunTerm")
    {
        cipsectrapcntlipsecearlytunterm.yfilter = yfilter;
    }
    if(value_path == "cipSecTrapCntlIpSecProtocolFail")
    {
        cipsectrapcntlipsecprotocolfail.yfilter = yfilter;
    }
    if(value_path == "cipSecTrapCntlIpSecNoSa")
    {
        cipsectrapcntlipsecnosa.yfilter = yfilter;
    }
}

bool CISCOIPSECFLOWMONITORMIB::Cipsectrapcntl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipSecTrapCntlIkeTunnelStart" || name == "cipSecTrapCntlIkeTunnelStop" || name == "cipSecTrapCntlIkeSysFailure" || name == "cipSecTrapCntlIkeCertCrlFailure" || name == "cipSecTrapCntlIkeProtocolFail" || name == "cipSecTrapCntlIkeNoSa" || name == "cipSecTrapCntlIpSecTunnelStart" || name == "cipSecTrapCntlIpSecTunnelStop" || name == "cipSecTrapCntlIpSecSysFailure" || name == "cipSecTrapCntlIpSecSetUpFailure" || name == "cipSecTrapCntlIpSecEarlyTunTerm" || name == "cipSecTrapCntlIpSecProtocolFail" || name == "cipSecTrapCntlIpSecNoSa")
        return true;
    return false;
}

CISCOIPSECFLOWMONITORMIB::Cikepeertable::Cikepeertable()
{

    yang_name = "cikePeerTable"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSECFLOWMONITORMIB::Cikepeertable::~Cikepeertable()
{
}

bool CISCOIPSECFLOWMONITORMIB::Cikepeertable::has_data() const
{
    for (std::size_t index=0; index<cikepeerentry.size(); index++)
    {
        if(cikepeerentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPSECFLOWMONITORMIB::Cikepeertable::has_operation() const
{
    for (std::size_t index=0; index<cikepeerentry.size(); index++)
    {
        if(cikepeerentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPSECFLOWMONITORMIB::Cikepeertable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECFLOWMONITORMIB::Cikepeertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cikePeerTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECFLOWMONITORMIB::Cikepeertable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECFLOWMONITORMIB::Cikepeertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cikePeerEntry")
    {
        auto c = std::make_shared<CISCOIPSECFLOWMONITORMIB::Cikepeertable::Cikepeerentry>();
        c->parent = this;
        cikepeerentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECFLOWMONITORMIB::Cikepeertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cikepeerentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIPSECFLOWMONITORMIB::Cikepeertable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPSECFLOWMONITORMIB::Cikepeertable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPSECFLOWMONITORMIB::Cikepeertable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cikePeerEntry")
        return true;
    return false;
}

CISCOIPSECFLOWMONITORMIB::Cikepeertable::Cikepeerentry::Cikepeerentry()
    :
    cikepeerlocaltype{YType::enumeration, "cikePeerLocalType"},
    cikepeerlocalvalue{YType::str, "cikePeerLocalValue"},
    cikepeerremotetype{YType::enumeration, "cikePeerRemoteType"},
    cikepeerremotevalue{YType::str, "cikePeerRemoteValue"},
    cikepeerintindex{YType::int32, "cikePeerIntIndex"},
    cikepeerlocaladdr{YType::str, "cikePeerLocalAddr"},
    cikepeerremoteaddr{YType::str, "cikePeerRemoteAddr"},
    cikepeeractivetime{YType::int32, "cikePeerActiveTime"},
    cikepeeractivetunnelindex{YType::int32, "cikePeerActiveTunnelIndex"}
{

    yang_name = "cikePeerEntry"; yang_parent_name = "cikePeerTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSECFLOWMONITORMIB::Cikepeertable::Cikepeerentry::~Cikepeerentry()
{
}

bool CISCOIPSECFLOWMONITORMIB::Cikepeertable::Cikepeerentry::has_data() const
{
    return cikepeerlocaltype.is_set
	|| cikepeerlocalvalue.is_set
	|| cikepeerremotetype.is_set
	|| cikepeerremotevalue.is_set
	|| cikepeerintindex.is_set
	|| cikepeerlocaladdr.is_set
	|| cikepeerremoteaddr.is_set
	|| cikepeeractivetime.is_set
	|| cikepeeractivetunnelindex.is_set;
}

bool CISCOIPSECFLOWMONITORMIB::Cikepeertable::Cikepeerentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cikepeerlocaltype.yfilter)
	|| ydk::is_set(cikepeerlocalvalue.yfilter)
	|| ydk::is_set(cikepeerremotetype.yfilter)
	|| ydk::is_set(cikepeerremotevalue.yfilter)
	|| ydk::is_set(cikepeerintindex.yfilter)
	|| ydk::is_set(cikepeerlocaladdr.yfilter)
	|| ydk::is_set(cikepeerremoteaddr.yfilter)
	|| ydk::is_set(cikepeeractivetime.yfilter)
	|| ydk::is_set(cikepeeractivetunnelindex.yfilter);
}

std::string CISCOIPSECFLOWMONITORMIB::Cikepeertable::Cikepeerentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/cikePeerTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECFLOWMONITORMIB::Cikepeertable::Cikepeerentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cikePeerEntry" <<"[cikePeerLocalType='" <<cikepeerlocaltype <<"']" <<"[cikePeerLocalValue='" <<cikepeerlocalvalue <<"']" <<"[cikePeerRemoteType='" <<cikepeerremotetype <<"']" <<"[cikePeerRemoteValue='" <<cikepeerremotevalue <<"']" <<"[cikePeerIntIndex='" <<cikepeerintindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECFLOWMONITORMIB::Cikepeertable::Cikepeerentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cikepeerlocaltype.is_set || is_set(cikepeerlocaltype.yfilter)) leaf_name_data.push_back(cikepeerlocaltype.get_name_leafdata());
    if (cikepeerlocalvalue.is_set || is_set(cikepeerlocalvalue.yfilter)) leaf_name_data.push_back(cikepeerlocalvalue.get_name_leafdata());
    if (cikepeerremotetype.is_set || is_set(cikepeerremotetype.yfilter)) leaf_name_data.push_back(cikepeerremotetype.get_name_leafdata());
    if (cikepeerremotevalue.is_set || is_set(cikepeerremotevalue.yfilter)) leaf_name_data.push_back(cikepeerremotevalue.get_name_leafdata());
    if (cikepeerintindex.is_set || is_set(cikepeerintindex.yfilter)) leaf_name_data.push_back(cikepeerintindex.get_name_leafdata());
    if (cikepeerlocaladdr.is_set || is_set(cikepeerlocaladdr.yfilter)) leaf_name_data.push_back(cikepeerlocaladdr.get_name_leafdata());
    if (cikepeerremoteaddr.is_set || is_set(cikepeerremoteaddr.yfilter)) leaf_name_data.push_back(cikepeerremoteaddr.get_name_leafdata());
    if (cikepeeractivetime.is_set || is_set(cikepeeractivetime.yfilter)) leaf_name_data.push_back(cikepeeractivetime.get_name_leafdata());
    if (cikepeeractivetunnelindex.is_set || is_set(cikepeeractivetunnelindex.yfilter)) leaf_name_data.push_back(cikepeeractivetunnelindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECFLOWMONITORMIB::Cikepeertable::Cikepeerentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECFLOWMONITORMIB::Cikepeertable::Cikepeerentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPSECFLOWMONITORMIB::Cikepeertable::Cikepeerentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cikePeerLocalType")
    {
        cikepeerlocaltype = value;
        cikepeerlocaltype.value_namespace = name_space;
        cikepeerlocaltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePeerLocalValue")
    {
        cikepeerlocalvalue = value;
        cikepeerlocalvalue.value_namespace = name_space;
        cikepeerlocalvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePeerRemoteType")
    {
        cikepeerremotetype = value;
        cikepeerremotetype.value_namespace = name_space;
        cikepeerremotetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePeerRemoteValue")
    {
        cikepeerremotevalue = value;
        cikepeerremotevalue.value_namespace = name_space;
        cikepeerremotevalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePeerIntIndex")
    {
        cikepeerintindex = value;
        cikepeerintindex.value_namespace = name_space;
        cikepeerintindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePeerLocalAddr")
    {
        cikepeerlocaladdr = value;
        cikepeerlocaladdr.value_namespace = name_space;
        cikepeerlocaladdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePeerRemoteAddr")
    {
        cikepeerremoteaddr = value;
        cikepeerremoteaddr.value_namespace = name_space;
        cikepeerremoteaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePeerActiveTime")
    {
        cikepeeractivetime = value;
        cikepeeractivetime.value_namespace = name_space;
        cikepeeractivetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePeerActiveTunnelIndex")
    {
        cikepeeractivetunnelindex = value;
        cikepeeractivetunnelindex.value_namespace = name_space;
        cikepeeractivetunnelindex.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSECFLOWMONITORMIB::Cikepeertable::Cikepeerentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cikePeerLocalType")
    {
        cikepeerlocaltype.yfilter = yfilter;
    }
    if(value_path == "cikePeerLocalValue")
    {
        cikepeerlocalvalue.yfilter = yfilter;
    }
    if(value_path == "cikePeerRemoteType")
    {
        cikepeerremotetype.yfilter = yfilter;
    }
    if(value_path == "cikePeerRemoteValue")
    {
        cikepeerremotevalue.yfilter = yfilter;
    }
    if(value_path == "cikePeerIntIndex")
    {
        cikepeerintindex.yfilter = yfilter;
    }
    if(value_path == "cikePeerLocalAddr")
    {
        cikepeerlocaladdr.yfilter = yfilter;
    }
    if(value_path == "cikePeerRemoteAddr")
    {
        cikepeerremoteaddr.yfilter = yfilter;
    }
    if(value_path == "cikePeerActiveTime")
    {
        cikepeeractivetime.yfilter = yfilter;
    }
    if(value_path == "cikePeerActiveTunnelIndex")
    {
        cikepeeractivetunnelindex.yfilter = yfilter;
    }
}

bool CISCOIPSECFLOWMONITORMIB::Cikepeertable::Cikepeerentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cikePeerLocalType" || name == "cikePeerLocalValue" || name == "cikePeerRemoteType" || name == "cikePeerRemoteValue" || name == "cikePeerIntIndex" || name == "cikePeerLocalAddr" || name == "cikePeerRemoteAddr" || name == "cikePeerActiveTime" || name == "cikePeerActiveTunnelIndex")
        return true;
    return false;
}

CISCOIPSECFLOWMONITORMIB::Ciketunneltable::Ciketunneltable()
{

    yang_name = "cikeTunnelTable"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSECFLOWMONITORMIB::Ciketunneltable::~Ciketunneltable()
{
}

bool CISCOIPSECFLOWMONITORMIB::Ciketunneltable::has_data() const
{
    for (std::size_t index=0; index<ciketunnelentry.size(); index++)
    {
        if(ciketunnelentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPSECFLOWMONITORMIB::Ciketunneltable::has_operation() const
{
    for (std::size_t index=0; index<ciketunnelentry.size(); index++)
    {
        if(ciketunnelentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPSECFLOWMONITORMIB::Ciketunneltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECFLOWMONITORMIB::Ciketunneltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cikeTunnelTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECFLOWMONITORMIB::Ciketunneltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECFLOWMONITORMIB::Ciketunneltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cikeTunnelEntry")
    {
        auto c = std::make_shared<CISCOIPSECFLOWMONITORMIB::Ciketunneltable::Ciketunnelentry>();
        c->parent = this;
        ciketunnelentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECFLOWMONITORMIB::Ciketunneltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ciketunnelentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIPSECFLOWMONITORMIB::Ciketunneltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPSECFLOWMONITORMIB::Ciketunneltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPSECFLOWMONITORMIB::Ciketunneltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cikeTunnelEntry")
        return true;
    return false;
}

CISCOIPSECFLOWMONITORMIB::Ciketunneltable::Ciketunnelentry::Ciketunnelentry()
    :
    ciketunindex{YType::int32, "cikeTunIndex"},
    ciketunlocaltype{YType::enumeration, "cikeTunLocalType"},
    ciketunlocalvalue{YType::str, "cikeTunLocalValue"},
    ciketunlocaladdr{YType::str, "cikeTunLocalAddr"},
    ciketunlocalname{YType::str, "cikeTunLocalName"},
    ciketunremotetype{YType::enumeration, "cikeTunRemoteType"},
    ciketunremotevalue{YType::str, "cikeTunRemoteValue"},
    ciketunremoteaddr{YType::str, "cikeTunRemoteAddr"},
    ciketunremotename{YType::str, "cikeTunRemoteName"},
    ciketunnegomode{YType::enumeration, "cikeTunNegoMode"},
    ciketundiffhellmangrp{YType::enumeration, "cikeTunDiffHellmanGrp"},
    ciketunencryptalgo{YType::enumeration, "cikeTunEncryptAlgo"},
    ciketunhashalgo{YType::enumeration, "cikeTunHashAlgo"},
    ciketunauthmethod{YType::enumeration, "cikeTunAuthMethod"},
    ciketunlifetime{YType::int32, "cikeTunLifeTime"},
    ciketunactivetime{YType::int32, "cikeTunActiveTime"},
    ciketunsarefreshthreshold{YType::int32, "cikeTunSaRefreshThreshold"},
    ciketuntotalrefreshes{YType::uint32, "cikeTunTotalRefreshes"},
    ciketuninoctets{YType::uint32, "cikeTunInOctets"},
    ciketuninpkts{YType::uint32, "cikeTunInPkts"},
    ciketunindroppkts{YType::uint32, "cikeTunInDropPkts"},
    ciketuninnotifys{YType::uint32, "cikeTunInNotifys"},
    ciketuninp2exchgs{YType::uint32, "cikeTunInP2Exchgs"},
    ciketuninp2exchginvalids{YType::uint32, "cikeTunInP2ExchgInvalids"},
    ciketuninp2exchgrejects{YType::uint32, "cikeTunInP2ExchgRejects"},
    ciketuninp2sadelrequests{YType::uint32, "cikeTunInP2SaDelRequests"},
    ciketunoutoctets{YType::uint32, "cikeTunOutOctets"},
    ciketunoutpkts{YType::uint32, "cikeTunOutPkts"},
    ciketunoutdroppkts{YType::uint32, "cikeTunOutDropPkts"},
    ciketunoutnotifys{YType::uint32, "cikeTunOutNotifys"},
    ciketunoutp2exchgs{YType::uint32, "cikeTunOutP2Exchgs"},
    ciketunoutp2exchginvalids{YType::uint32, "cikeTunOutP2ExchgInvalids"},
    ciketunoutp2exchgrejects{YType::uint32, "cikeTunOutP2ExchgRejects"},
    ciketunoutp2sadelrequests{YType::uint32, "cikeTunOutP2SaDelRequests"},
    ciketunstatus{YType::enumeration, "cikeTunStatus"}
{

    yang_name = "cikeTunnelEntry"; yang_parent_name = "cikeTunnelTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSECFLOWMONITORMIB::Ciketunneltable::Ciketunnelentry::~Ciketunnelentry()
{
}

bool CISCOIPSECFLOWMONITORMIB::Ciketunneltable::Ciketunnelentry::has_data() const
{
    return ciketunindex.is_set
	|| ciketunlocaltype.is_set
	|| ciketunlocalvalue.is_set
	|| ciketunlocaladdr.is_set
	|| ciketunlocalname.is_set
	|| ciketunremotetype.is_set
	|| ciketunremotevalue.is_set
	|| ciketunremoteaddr.is_set
	|| ciketunremotename.is_set
	|| ciketunnegomode.is_set
	|| ciketundiffhellmangrp.is_set
	|| ciketunencryptalgo.is_set
	|| ciketunhashalgo.is_set
	|| ciketunauthmethod.is_set
	|| ciketunlifetime.is_set
	|| ciketunactivetime.is_set
	|| ciketunsarefreshthreshold.is_set
	|| ciketuntotalrefreshes.is_set
	|| ciketuninoctets.is_set
	|| ciketuninpkts.is_set
	|| ciketunindroppkts.is_set
	|| ciketuninnotifys.is_set
	|| ciketuninp2exchgs.is_set
	|| ciketuninp2exchginvalids.is_set
	|| ciketuninp2exchgrejects.is_set
	|| ciketuninp2sadelrequests.is_set
	|| ciketunoutoctets.is_set
	|| ciketunoutpkts.is_set
	|| ciketunoutdroppkts.is_set
	|| ciketunoutnotifys.is_set
	|| ciketunoutp2exchgs.is_set
	|| ciketunoutp2exchginvalids.is_set
	|| ciketunoutp2exchgrejects.is_set
	|| ciketunoutp2sadelrequests.is_set
	|| ciketunstatus.is_set;
}

bool CISCOIPSECFLOWMONITORMIB::Ciketunneltable::Ciketunnelentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciketunindex.yfilter)
	|| ydk::is_set(ciketunlocaltype.yfilter)
	|| ydk::is_set(ciketunlocalvalue.yfilter)
	|| ydk::is_set(ciketunlocaladdr.yfilter)
	|| ydk::is_set(ciketunlocalname.yfilter)
	|| ydk::is_set(ciketunremotetype.yfilter)
	|| ydk::is_set(ciketunremotevalue.yfilter)
	|| ydk::is_set(ciketunremoteaddr.yfilter)
	|| ydk::is_set(ciketunremotename.yfilter)
	|| ydk::is_set(ciketunnegomode.yfilter)
	|| ydk::is_set(ciketundiffhellmangrp.yfilter)
	|| ydk::is_set(ciketunencryptalgo.yfilter)
	|| ydk::is_set(ciketunhashalgo.yfilter)
	|| ydk::is_set(ciketunauthmethod.yfilter)
	|| ydk::is_set(ciketunlifetime.yfilter)
	|| ydk::is_set(ciketunactivetime.yfilter)
	|| ydk::is_set(ciketunsarefreshthreshold.yfilter)
	|| ydk::is_set(ciketuntotalrefreshes.yfilter)
	|| ydk::is_set(ciketuninoctets.yfilter)
	|| ydk::is_set(ciketuninpkts.yfilter)
	|| ydk::is_set(ciketunindroppkts.yfilter)
	|| ydk::is_set(ciketuninnotifys.yfilter)
	|| ydk::is_set(ciketuninp2exchgs.yfilter)
	|| ydk::is_set(ciketuninp2exchginvalids.yfilter)
	|| ydk::is_set(ciketuninp2exchgrejects.yfilter)
	|| ydk::is_set(ciketuninp2sadelrequests.yfilter)
	|| ydk::is_set(ciketunoutoctets.yfilter)
	|| ydk::is_set(ciketunoutpkts.yfilter)
	|| ydk::is_set(ciketunoutdroppkts.yfilter)
	|| ydk::is_set(ciketunoutnotifys.yfilter)
	|| ydk::is_set(ciketunoutp2exchgs.yfilter)
	|| ydk::is_set(ciketunoutp2exchginvalids.yfilter)
	|| ydk::is_set(ciketunoutp2exchgrejects.yfilter)
	|| ydk::is_set(ciketunoutp2sadelrequests.yfilter)
	|| ydk::is_set(ciketunstatus.yfilter);
}

std::string CISCOIPSECFLOWMONITORMIB::Ciketunneltable::Ciketunnelentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/cikeTunnelTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECFLOWMONITORMIB::Ciketunneltable::Ciketunnelentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cikeTunnelEntry" <<"[cikeTunIndex='" <<ciketunindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECFLOWMONITORMIB::Ciketunneltable::Ciketunnelentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciketunindex.is_set || is_set(ciketunindex.yfilter)) leaf_name_data.push_back(ciketunindex.get_name_leafdata());
    if (ciketunlocaltype.is_set || is_set(ciketunlocaltype.yfilter)) leaf_name_data.push_back(ciketunlocaltype.get_name_leafdata());
    if (ciketunlocalvalue.is_set || is_set(ciketunlocalvalue.yfilter)) leaf_name_data.push_back(ciketunlocalvalue.get_name_leafdata());
    if (ciketunlocaladdr.is_set || is_set(ciketunlocaladdr.yfilter)) leaf_name_data.push_back(ciketunlocaladdr.get_name_leafdata());
    if (ciketunlocalname.is_set || is_set(ciketunlocalname.yfilter)) leaf_name_data.push_back(ciketunlocalname.get_name_leafdata());
    if (ciketunremotetype.is_set || is_set(ciketunremotetype.yfilter)) leaf_name_data.push_back(ciketunremotetype.get_name_leafdata());
    if (ciketunremotevalue.is_set || is_set(ciketunremotevalue.yfilter)) leaf_name_data.push_back(ciketunremotevalue.get_name_leafdata());
    if (ciketunremoteaddr.is_set || is_set(ciketunremoteaddr.yfilter)) leaf_name_data.push_back(ciketunremoteaddr.get_name_leafdata());
    if (ciketunremotename.is_set || is_set(ciketunremotename.yfilter)) leaf_name_data.push_back(ciketunremotename.get_name_leafdata());
    if (ciketunnegomode.is_set || is_set(ciketunnegomode.yfilter)) leaf_name_data.push_back(ciketunnegomode.get_name_leafdata());
    if (ciketundiffhellmangrp.is_set || is_set(ciketundiffhellmangrp.yfilter)) leaf_name_data.push_back(ciketundiffhellmangrp.get_name_leafdata());
    if (ciketunencryptalgo.is_set || is_set(ciketunencryptalgo.yfilter)) leaf_name_data.push_back(ciketunencryptalgo.get_name_leafdata());
    if (ciketunhashalgo.is_set || is_set(ciketunhashalgo.yfilter)) leaf_name_data.push_back(ciketunhashalgo.get_name_leafdata());
    if (ciketunauthmethod.is_set || is_set(ciketunauthmethod.yfilter)) leaf_name_data.push_back(ciketunauthmethod.get_name_leafdata());
    if (ciketunlifetime.is_set || is_set(ciketunlifetime.yfilter)) leaf_name_data.push_back(ciketunlifetime.get_name_leafdata());
    if (ciketunactivetime.is_set || is_set(ciketunactivetime.yfilter)) leaf_name_data.push_back(ciketunactivetime.get_name_leafdata());
    if (ciketunsarefreshthreshold.is_set || is_set(ciketunsarefreshthreshold.yfilter)) leaf_name_data.push_back(ciketunsarefreshthreshold.get_name_leafdata());
    if (ciketuntotalrefreshes.is_set || is_set(ciketuntotalrefreshes.yfilter)) leaf_name_data.push_back(ciketuntotalrefreshes.get_name_leafdata());
    if (ciketuninoctets.is_set || is_set(ciketuninoctets.yfilter)) leaf_name_data.push_back(ciketuninoctets.get_name_leafdata());
    if (ciketuninpkts.is_set || is_set(ciketuninpkts.yfilter)) leaf_name_data.push_back(ciketuninpkts.get_name_leafdata());
    if (ciketunindroppkts.is_set || is_set(ciketunindroppkts.yfilter)) leaf_name_data.push_back(ciketunindroppkts.get_name_leafdata());
    if (ciketuninnotifys.is_set || is_set(ciketuninnotifys.yfilter)) leaf_name_data.push_back(ciketuninnotifys.get_name_leafdata());
    if (ciketuninp2exchgs.is_set || is_set(ciketuninp2exchgs.yfilter)) leaf_name_data.push_back(ciketuninp2exchgs.get_name_leafdata());
    if (ciketuninp2exchginvalids.is_set || is_set(ciketuninp2exchginvalids.yfilter)) leaf_name_data.push_back(ciketuninp2exchginvalids.get_name_leafdata());
    if (ciketuninp2exchgrejects.is_set || is_set(ciketuninp2exchgrejects.yfilter)) leaf_name_data.push_back(ciketuninp2exchgrejects.get_name_leafdata());
    if (ciketuninp2sadelrequests.is_set || is_set(ciketuninp2sadelrequests.yfilter)) leaf_name_data.push_back(ciketuninp2sadelrequests.get_name_leafdata());
    if (ciketunoutoctets.is_set || is_set(ciketunoutoctets.yfilter)) leaf_name_data.push_back(ciketunoutoctets.get_name_leafdata());
    if (ciketunoutpkts.is_set || is_set(ciketunoutpkts.yfilter)) leaf_name_data.push_back(ciketunoutpkts.get_name_leafdata());
    if (ciketunoutdroppkts.is_set || is_set(ciketunoutdroppkts.yfilter)) leaf_name_data.push_back(ciketunoutdroppkts.get_name_leafdata());
    if (ciketunoutnotifys.is_set || is_set(ciketunoutnotifys.yfilter)) leaf_name_data.push_back(ciketunoutnotifys.get_name_leafdata());
    if (ciketunoutp2exchgs.is_set || is_set(ciketunoutp2exchgs.yfilter)) leaf_name_data.push_back(ciketunoutp2exchgs.get_name_leafdata());
    if (ciketunoutp2exchginvalids.is_set || is_set(ciketunoutp2exchginvalids.yfilter)) leaf_name_data.push_back(ciketunoutp2exchginvalids.get_name_leafdata());
    if (ciketunoutp2exchgrejects.is_set || is_set(ciketunoutp2exchgrejects.yfilter)) leaf_name_data.push_back(ciketunoutp2exchgrejects.get_name_leafdata());
    if (ciketunoutp2sadelrequests.is_set || is_set(ciketunoutp2sadelrequests.yfilter)) leaf_name_data.push_back(ciketunoutp2sadelrequests.get_name_leafdata());
    if (ciketunstatus.is_set || is_set(ciketunstatus.yfilter)) leaf_name_data.push_back(ciketunstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECFLOWMONITORMIB::Ciketunneltable::Ciketunnelentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECFLOWMONITORMIB::Ciketunneltable::Ciketunnelentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPSECFLOWMONITORMIB::Ciketunneltable::Ciketunnelentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cikeTunIndex")
    {
        ciketunindex = value;
        ciketunindex.value_namespace = name_space;
        ciketunindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunLocalType")
    {
        ciketunlocaltype = value;
        ciketunlocaltype.value_namespace = name_space;
        ciketunlocaltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunLocalValue")
    {
        ciketunlocalvalue = value;
        ciketunlocalvalue.value_namespace = name_space;
        ciketunlocalvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunLocalAddr")
    {
        ciketunlocaladdr = value;
        ciketunlocaladdr.value_namespace = name_space;
        ciketunlocaladdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunLocalName")
    {
        ciketunlocalname = value;
        ciketunlocalname.value_namespace = name_space;
        ciketunlocalname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunRemoteType")
    {
        ciketunremotetype = value;
        ciketunremotetype.value_namespace = name_space;
        ciketunremotetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunRemoteValue")
    {
        ciketunremotevalue = value;
        ciketunremotevalue.value_namespace = name_space;
        ciketunremotevalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunRemoteAddr")
    {
        ciketunremoteaddr = value;
        ciketunremoteaddr.value_namespace = name_space;
        ciketunremoteaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunRemoteName")
    {
        ciketunremotename = value;
        ciketunremotename.value_namespace = name_space;
        ciketunremotename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunNegoMode")
    {
        ciketunnegomode = value;
        ciketunnegomode.value_namespace = name_space;
        ciketunnegomode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunDiffHellmanGrp")
    {
        ciketundiffhellmangrp = value;
        ciketundiffhellmangrp.value_namespace = name_space;
        ciketundiffhellmangrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunEncryptAlgo")
    {
        ciketunencryptalgo = value;
        ciketunencryptalgo.value_namespace = name_space;
        ciketunencryptalgo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHashAlgo")
    {
        ciketunhashalgo = value;
        ciketunhashalgo.value_namespace = name_space;
        ciketunhashalgo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunAuthMethod")
    {
        ciketunauthmethod = value;
        ciketunauthmethod.value_namespace = name_space;
        ciketunauthmethod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunLifeTime")
    {
        ciketunlifetime = value;
        ciketunlifetime.value_namespace = name_space;
        ciketunlifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunActiveTime")
    {
        ciketunactivetime = value;
        ciketunactivetime.value_namespace = name_space;
        ciketunactivetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunSaRefreshThreshold")
    {
        ciketunsarefreshthreshold = value;
        ciketunsarefreshthreshold.value_namespace = name_space;
        ciketunsarefreshthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunTotalRefreshes")
    {
        ciketuntotalrefreshes = value;
        ciketuntotalrefreshes.value_namespace = name_space;
        ciketuntotalrefreshes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunInOctets")
    {
        ciketuninoctets = value;
        ciketuninoctets.value_namespace = name_space;
        ciketuninoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunInPkts")
    {
        ciketuninpkts = value;
        ciketuninpkts.value_namespace = name_space;
        ciketuninpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunInDropPkts")
    {
        ciketunindroppkts = value;
        ciketunindroppkts.value_namespace = name_space;
        ciketunindroppkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunInNotifys")
    {
        ciketuninnotifys = value;
        ciketuninnotifys.value_namespace = name_space;
        ciketuninnotifys.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunInP2Exchgs")
    {
        ciketuninp2exchgs = value;
        ciketuninp2exchgs.value_namespace = name_space;
        ciketuninp2exchgs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunInP2ExchgInvalids")
    {
        ciketuninp2exchginvalids = value;
        ciketuninp2exchginvalids.value_namespace = name_space;
        ciketuninp2exchginvalids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunInP2ExchgRejects")
    {
        ciketuninp2exchgrejects = value;
        ciketuninp2exchgrejects.value_namespace = name_space;
        ciketuninp2exchgrejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunInP2SaDelRequests")
    {
        ciketuninp2sadelrequests = value;
        ciketuninp2sadelrequests.value_namespace = name_space;
        ciketuninp2sadelrequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunOutOctets")
    {
        ciketunoutoctets = value;
        ciketunoutoctets.value_namespace = name_space;
        ciketunoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunOutPkts")
    {
        ciketunoutpkts = value;
        ciketunoutpkts.value_namespace = name_space;
        ciketunoutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunOutDropPkts")
    {
        ciketunoutdroppkts = value;
        ciketunoutdroppkts.value_namespace = name_space;
        ciketunoutdroppkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunOutNotifys")
    {
        ciketunoutnotifys = value;
        ciketunoutnotifys.value_namespace = name_space;
        ciketunoutnotifys.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunOutP2Exchgs")
    {
        ciketunoutp2exchgs = value;
        ciketunoutp2exchgs.value_namespace = name_space;
        ciketunoutp2exchgs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunOutP2ExchgInvalids")
    {
        ciketunoutp2exchginvalids = value;
        ciketunoutp2exchginvalids.value_namespace = name_space;
        ciketunoutp2exchginvalids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunOutP2ExchgRejects")
    {
        ciketunoutp2exchgrejects = value;
        ciketunoutp2exchgrejects.value_namespace = name_space;
        ciketunoutp2exchgrejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunOutP2SaDelRequests")
    {
        ciketunoutp2sadelrequests = value;
        ciketunoutp2sadelrequests.value_namespace = name_space;
        ciketunoutp2sadelrequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunStatus")
    {
        ciketunstatus = value;
        ciketunstatus.value_namespace = name_space;
        ciketunstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSECFLOWMONITORMIB::Ciketunneltable::Ciketunnelentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cikeTunIndex")
    {
        ciketunindex.yfilter = yfilter;
    }
    if(value_path == "cikeTunLocalType")
    {
        ciketunlocaltype.yfilter = yfilter;
    }
    if(value_path == "cikeTunLocalValue")
    {
        ciketunlocalvalue.yfilter = yfilter;
    }
    if(value_path == "cikeTunLocalAddr")
    {
        ciketunlocaladdr.yfilter = yfilter;
    }
    if(value_path == "cikeTunLocalName")
    {
        ciketunlocalname.yfilter = yfilter;
    }
    if(value_path == "cikeTunRemoteType")
    {
        ciketunremotetype.yfilter = yfilter;
    }
    if(value_path == "cikeTunRemoteValue")
    {
        ciketunremotevalue.yfilter = yfilter;
    }
    if(value_path == "cikeTunRemoteAddr")
    {
        ciketunremoteaddr.yfilter = yfilter;
    }
    if(value_path == "cikeTunRemoteName")
    {
        ciketunremotename.yfilter = yfilter;
    }
    if(value_path == "cikeTunNegoMode")
    {
        ciketunnegomode.yfilter = yfilter;
    }
    if(value_path == "cikeTunDiffHellmanGrp")
    {
        ciketundiffhellmangrp.yfilter = yfilter;
    }
    if(value_path == "cikeTunEncryptAlgo")
    {
        ciketunencryptalgo.yfilter = yfilter;
    }
    if(value_path == "cikeTunHashAlgo")
    {
        ciketunhashalgo.yfilter = yfilter;
    }
    if(value_path == "cikeTunAuthMethod")
    {
        ciketunauthmethod.yfilter = yfilter;
    }
    if(value_path == "cikeTunLifeTime")
    {
        ciketunlifetime.yfilter = yfilter;
    }
    if(value_path == "cikeTunActiveTime")
    {
        ciketunactivetime.yfilter = yfilter;
    }
    if(value_path == "cikeTunSaRefreshThreshold")
    {
        ciketunsarefreshthreshold.yfilter = yfilter;
    }
    if(value_path == "cikeTunTotalRefreshes")
    {
        ciketuntotalrefreshes.yfilter = yfilter;
    }
    if(value_path == "cikeTunInOctets")
    {
        ciketuninoctets.yfilter = yfilter;
    }
    if(value_path == "cikeTunInPkts")
    {
        ciketuninpkts.yfilter = yfilter;
    }
    if(value_path == "cikeTunInDropPkts")
    {
        ciketunindroppkts.yfilter = yfilter;
    }
    if(value_path == "cikeTunInNotifys")
    {
        ciketuninnotifys.yfilter = yfilter;
    }
    if(value_path == "cikeTunInP2Exchgs")
    {
        ciketuninp2exchgs.yfilter = yfilter;
    }
    if(value_path == "cikeTunInP2ExchgInvalids")
    {
        ciketuninp2exchginvalids.yfilter = yfilter;
    }
    if(value_path == "cikeTunInP2ExchgRejects")
    {
        ciketuninp2exchgrejects.yfilter = yfilter;
    }
    if(value_path == "cikeTunInP2SaDelRequests")
    {
        ciketuninp2sadelrequests.yfilter = yfilter;
    }
    if(value_path == "cikeTunOutOctets")
    {
        ciketunoutoctets.yfilter = yfilter;
    }
    if(value_path == "cikeTunOutPkts")
    {
        ciketunoutpkts.yfilter = yfilter;
    }
    if(value_path == "cikeTunOutDropPkts")
    {
        ciketunoutdroppkts.yfilter = yfilter;
    }
    if(value_path == "cikeTunOutNotifys")
    {
        ciketunoutnotifys.yfilter = yfilter;
    }
    if(value_path == "cikeTunOutP2Exchgs")
    {
        ciketunoutp2exchgs.yfilter = yfilter;
    }
    if(value_path == "cikeTunOutP2ExchgInvalids")
    {
        ciketunoutp2exchginvalids.yfilter = yfilter;
    }
    if(value_path == "cikeTunOutP2ExchgRejects")
    {
        ciketunoutp2exchgrejects.yfilter = yfilter;
    }
    if(value_path == "cikeTunOutP2SaDelRequests")
    {
        ciketunoutp2sadelrequests.yfilter = yfilter;
    }
    if(value_path == "cikeTunStatus")
    {
        ciketunstatus.yfilter = yfilter;
    }
}

bool CISCOIPSECFLOWMONITORMIB::Ciketunneltable::Ciketunnelentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cikeTunIndex" || name == "cikeTunLocalType" || name == "cikeTunLocalValue" || name == "cikeTunLocalAddr" || name == "cikeTunLocalName" || name == "cikeTunRemoteType" || name == "cikeTunRemoteValue" || name == "cikeTunRemoteAddr" || name == "cikeTunRemoteName" || name == "cikeTunNegoMode" || name == "cikeTunDiffHellmanGrp" || name == "cikeTunEncryptAlgo" || name == "cikeTunHashAlgo" || name == "cikeTunAuthMethod" || name == "cikeTunLifeTime" || name == "cikeTunActiveTime" || name == "cikeTunSaRefreshThreshold" || name == "cikeTunTotalRefreshes" || name == "cikeTunInOctets" || name == "cikeTunInPkts" || name == "cikeTunInDropPkts" || name == "cikeTunInNotifys" || name == "cikeTunInP2Exchgs" || name == "cikeTunInP2ExchgInvalids" || name == "cikeTunInP2ExchgRejects" || name == "cikeTunInP2SaDelRequests" || name == "cikeTunOutOctets" || name == "cikeTunOutPkts" || name == "cikeTunOutDropPkts" || name == "cikeTunOutNotifys" || name == "cikeTunOutP2Exchgs" || name == "cikeTunOutP2ExchgInvalids" || name == "cikeTunOutP2ExchgRejects" || name == "cikeTunOutP2SaDelRequests" || name == "cikeTunStatus")
        return true;
    return false;
}

CISCOIPSECFLOWMONITORMIB::Cikepeercorrtable::Cikepeercorrtable()
{

    yang_name = "cikePeerCorrTable"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSECFLOWMONITORMIB::Cikepeercorrtable::~Cikepeercorrtable()
{
}

bool CISCOIPSECFLOWMONITORMIB::Cikepeercorrtable::has_data() const
{
    for (std::size_t index=0; index<cikepeercorrentry.size(); index++)
    {
        if(cikepeercorrentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPSECFLOWMONITORMIB::Cikepeercorrtable::has_operation() const
{
    for (std::size_t index=0; index<cikepeercorrentry.size(); index++)
    {
        if(cikepeercorrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPSECFLOWMONITORMIB::Cikepeercorrtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECFLOWMONITORMIB::Cikepeercorrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cikePeerCorrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECFLOWMONITORMIB::Cikepeercorrtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECFLOWMONITORMIB::Cikepeercorrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cikePeerCorrEntry")
    {
        auto c = std::make_shared<CISCOIPSECFLOWMONITORMIB::Cikepeercorrtable::Cikepeercorrentry>();
        c->parent = this;
        cikepeercorrentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECFLOWMONITORMIB::Cikepeercorrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cikepeercorrentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIPSECFLOWMONITORMIB::Cikepeercorrtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPSECFLOWMONITORMIB::Cikepeercorrtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPSECFLOWMONITORMIB::Cikepeercorrtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cikePeerCorrEntry")
        return true;
    return false;
}

CISCOIPSECFLOWMONITORMIB::Cikepeercorrtable::Cikepeercorrentry::Cikepeercorrentry()
    :
    cikepeercorrlocaltype{YType::enumeration, "cikePeerCorrLocalType"},
    cikepeercorrlocalvalue{YType::str, "cikePeerCorrLocalValue"},
    cikepeercorrremotetype{YType::enumeration, "cikePeerCorrRemoteType"},
    cikepeercorrremotevalue{YType::str, "cikePeerCorrRemoteValue"},
    cikepeercorrintindex{YType::int32, "cikePeerCorrIntIndex"},
    cikepeercorrseqnum{YType::int32, "cikePeerCorrSeqNum"},
    cikepeercorripsectunindex{YType::int32, "cikePeerCorrIpSecTunIndex"}
{

    yang_name = "cikePeerCorrEntry"; yang_parent_name = "cikePeerCorrTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSECFLOWMONITORMIB::Cikepeercorrtable::Cikepeercorrentry::~Cikepeercorrentry()
{
}

bool CISCOIPSECFLOWMONITORMIB::Cikepeercorrtable::Cikepeercorrentry::has_data() const
{
    return cikepeercorrlocaltype.is_set
	|| cikepeercorrlocalvalue.is_set
	|| cikepeercorrremotetype.is_set
	|| cikepeercorrremotevalue.is_set
	|| cikepeercorrintindex.is_set
	|| cikepeercorrseqnum.is_set
	|| cikepeercorripsectunindex.is_set;
}

bool CISCOIPSECFLOWMONITORMIB::Cikepeercorrtable::Cikepeercorrentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cikepeercorrlocaltype.yfilter)
	|| ydk::is_set(cikepeercorrlocalvalue.yfilter)
	|| ydk::is_set(cikepeercorrremotetype.yfilter)
	|| ydk::is_set(cikepeercorrremotevalue.yfilter)
	|| ydk::is_set(cikepeercorrintindex.yfilter)
	|| ydk::is_set(cikepeercorrseqnum.yfilter)
	|| ydk::is_set(cikepeercorripsectunindex.yfilter);
}

std::string CISCOIPSECFLOWMONITORMIB::Cikepeercorrtable::Cikepeercorrentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/cikePeerCorrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECFLOWMONITORMIB::Cikepeercorrtable::Cikepeercorrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cikePeerCorrEntry" <<"[cikePeerCorrLocalType='" <<cikepeercorrlocaltype <<"']" <<"[cikePeerCorrLocalValue='" <<cikepeercorrlocalvalue <<"']" <<"[cikePeerCorrRemoteType='" <<cikepeercorrremotetype <<"']" <<"[cikePeerCorrRemoteValue='" <<cikepeercorrremotevalue <<"']" <<"[cikePeerCorrIntIndex='" <<cikepeercorrintindex <<"']" <<"[cikePeerCorrSeqNum='" <<cikepeercorrseqnum <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECFLOWMONITORMIB::Cikepeercorrtable::Cikepeercorrentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cikepeercorrlocaltype.is_set || is_set(cikepeercorrlocaltype.yfilter)) leaf_name_data.push_back(cikepeercorrlocaltype.get_name_leafdata());
    if (cikepeercorrlocalvalue.is_set || is_set(cikepeercorrlocalvalue.yfilter)) leaf_name_data.push_back(cikepeercorrlocalvalue.get_name_leafdata());
    if (cikepeercorrremotetype.is_set || is_set(cikepeercorrremotetype.yfilter)) leaf_name_data.push_back(cikepeercorrremotetype.get_name_leafdata());
    if (cikepeercorrremotevalue.is_set || is_set(cikepeercorrremotevalue.yfilter)) leaf_name_data.push_back(cikepeercorrremotevalue.get_name_leafdata());
    if (cikepeercorrintindex.is_set || is_set(cikepeercorrintindex.yfilter)) leaf_name_data.push_back(cikepeercorrintindex.get_name_leafdata());
    if (cikepeercorrseqnum.is_set || is_set(cikepeercorrseqnum.yfilter)) leaf_name_data.push_back(cikepeercorrseqnum.get_name_leafdata());
    if (cikepeercorripsectunindex.is_set || is_set(cikepeercorripsectunindex.yfilter)) leaf_name_data.push_back(cikepeercorripsectunindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECFLOWMONITORMIB::Cikepeercorrtable::Cikepeercorrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECFLOWMONITORMIB::Cikepeercorrtable::Cikepeercorrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPSECFLOWMONITORMIB::Cikepeercorrtable::Cikepeercorrentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cikePeerCorrLocalType")
    {
        cikepeercorrlocaltype = value;
        cikepeercorrlocaltype.value_namespace = name_space;
        cikepeercorrlocaltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePeerCorrLocalValue")
    {
        cikepeercorrlocalvalue = value;
        cikepeercorrlocalvalue.value_namespace = name_space;
        cikepeercorrlocalvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePeerCorrRemoteType")
    {
        cikepeercorrremotetype = value;
        cikepeercorrremotetype.value_namespace = name_space;
        cikepeercorrremotetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePeerCorrRemoteValue")
    {
        cikepeercorrremotevalue = value;
        cikepeercorrremotevalue.value_namespace = name_space;
        cikepeercorrremotevalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePeerCorrIntIndex")
    {
        cikepeercorrintindex = value;
        cikepeercorrintindex.value_namespace = name_space;
        cikepeercorrintindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePeerCorrSeqNum")
    {
        cikepeercorrseqnum = value;
        cikepeercorrseqnum.value_namespace = name_space;
        cikepeercorrseqnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePeerCorrIpSecTunIndex")
    {
        cikepeercorripsectunindex = value;
        cikepeercorripsectunindex.value_namespace = name_space;
        cikepeercorripsectunindex.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSECFLOWMONITORMIB::Cikepeercorrtable::Cikepeercorrentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cikePeerCorrLocalType")
    {
        cikepeercorrlocaltype.yfilter = yfilter;
    }
    if(value_path == "cikePeerCorrLocalValue")
    {
        cikepeercorrlocalvalue.yfilter = yfilter;
    }
    if(value_path == "cikePeerCorrRemoteType")
    {
        cikepeercorrremotetype.yfilter = yfilter;
    }
    if(value_path == "cikePeerCorrRemoteValue")
    {
        cikepeercorrremotevalue.yfilter = yfilter;
    }
    if(value_path == "cikePeerCorrIntIndex")
    {
        cikepeercorrintindex.yfilter = yfilter;
    }
    if(value_path == "cikePeerCorrSeqNum")
    {
        cikepeercorrseqnum.yfilter = yfilter;
    }
    if(value_path == "cikePeerCorrIpSecTunIndex")
    {
        cikepeercorripsectunindex.yfilter = yfilter;
    }
}

bool CISCOIPSECFLOWMONITORMIB::Cikepeercorrtable::Cikepeercorrentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cikePeerCorrLocalType" || name == "cikePeerCorrLocalValue" || name == "cikePeerCorrRemoteType" || name == "cikePeerCorrRemoteValue" || name == "cikePeerCorrIntIndex" || name == "cikePeerCorrSeqNum" || name == "cikePeerCorrIpSecTunIndex")
        return true;
    return false;
}

CISCOIPSECFLOWMONITORMIB::Cikephase1Gwstatstable::Cikephase1Gwstatstable()
{

    yang_name = "cikePhase1GWStatsTable"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSECFLOWMONITORMIB::Cikephase1Gwstatstable::~Cikephase1Gwstatstable()
{
}

bool CISCOIPSECFLOWMONITORMIB::Cikephase1Gwstatstable::has_data() const
{
    for (std::size_t index=0; index<cikephase1gwstatsentry.size(); index++)
    {
        if(cikephase1gwstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPSECFLOWMONITORMIB::Cikephase1Gwstatstable::has_operation() const
{
    for (std::size_t index=0; index<cikephase1gwstatsentry.size(); index++)
    {
        if(cikephase1gwstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPSECFLOWMONITORMIB::Cikephase1Gwstatstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECFLOWMONITORMIB::Cikephase1Gwstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cikePhase1GWStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECFLOWMONITORMIB::Cikephase1Gwstatstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECFLOWMONITORMIB::Cikephase1Gwstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cikePhase1GWStatsEntry")
    {
        auto c = std::make_shared<CISCOIPSECFLOWMONITORMIB::Cikephase1Gwstatstable::Cikephase1Gwstatsentry>();
        c->parent = this;
        cikephase1gwstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECFLOWMONITORMIB::Cikephase1Gwstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cikephase1gwstatsentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIPSECFLOWMONITORMIB::Cikephase1Gwstatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPSECFLOWMONITORMIB::Cikephase1Gwstatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPSECFLOWMONITORMIB::Cikephase1Gwstatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cikePhase1GWStatsEntry")
        return true;
    return false;
}

CISCOIPSECFLOWMONITORMIB::Cikephase1Gwstatstable::Cikephase1Gwstatsentry::Cikephase1Gwstatsentry()
    :
    cmgwindex{YType::str, "cmgwIndex"},
    cikephase1gwactivetunnels{YType::uint32, "cikePhase1GWActiveTunnels"},
    cikephase1gwprevioustunnels{YType::uint32, "cikePhase1GWPreviousTunnels"},
    cikephase1gwinoctets{YType::uint32, "cikePhase1GWInOctets"},
    cikephase1gwinpkts{YType::uint32, "cikePhase1GWInPkts"},
    cikephase1gwindroppkts{YType::uint32, "cikePhase1GWInDropPkts"},
    cikephase1gwinnotifys{YType::uint32, "cikePhase1GWInNotifys"},
    cikephase1gwinp2exchgs{YType::uint32, "cikePhase1GWInP2Exchgs"},
    cikephase1gwinp2exchginvalids{YType::uint32, "cikePhase1GWInP2ExchgInvalids"},
    cikephase1gwinp2exchgrejects{YType::uint32, "cikePhase1GWInP2ExchgRejects"},
    cikephase1gwinp2sadelrequests{YType::uint32, "cikePhase1GWInP2SaDelRequests"},
    cikephase1gwoutoctets{YType::uint32, "cikePhase1GWOutOctets"},
    cikephase1gwoutpkts{YType::uint32, "cikePhase1GWOutPkts"},
    cikephase1gwoutdroppkts{YType::uint32, "cikePhase1GWOutDropPkts"},
    cikephase1gwoutnotifys{YType::uint32, "cikePhase1GWOutNotifys"},
    cikephase1gwoutp2exchgs{YType::uint32, "cikePhase1GWOutP2Exchgs"},
    cikephase1gwoutp2exchginvalids{YType::uint32, "cikePhase1GWOutP2ExchgInvalids"},
    cikephase1gwoutp2exchgrejects{YType::uint32, "cikePhase1GWOutP2ExchgRejects"},
    cikephase1gwoutp2sadelrequests{YType::uint32, "cikePhase1GWOutP2SaDelRequests"},
    cikephase1gwinittunnels{YType::uint32, "cikePhase1GWInitTunnels"},
    cikephase1gwinittunnelfails{YType::uint32, "cikePhase1GWInitTunnelFails"},
    cikephase1gwresptunnelfails{YType::uint32, "cikePhase1GWRespTunnelFails"},
    cikephase1gwsyscapfails{YType::uint32, "cikePhase1GWSysCapFails"},
    cikephase1gwauthfails{YType::uint32, "cikePhase1GWAuthFails"},
    cikephase1gwdecryptfails{YType::uint32, "cikePhase1GWDecryptFails"},
    cikephase1gwhashvalidfails{YType::uint32, "cikePhase1GWHashValidFails"},
    cikephase1gwnosafails{YType::uint32, "cikePhase1GWNoSaFails"}
{

    yang_name = "cikePhase1GWStatsEntry"; yang_parent_name = "cikePhase1GWStatsTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSECFLOWMONITORMIB::Cikephase1Gwstatstable::Cikephase1Gwstatsentry::~Cikephase1Gwstatsentry()
{
}

bool CISCOIPSECFLOWMONITORMIB::Cikephase1Gwstatstable::Cikephase1Gwstatsentry::has_data() const
{
    return cmgwindex.is_set
	|| cikephase1gwactivetunnels.is_set
	|| cikephase1gwprevioustunnels.is_set
	|| cikephase1gwinoctets.is_set
	|| cikephase1gwinpkts.is_set
	|| cikephase1gwindroppkts.is_set
	|| cikephase1gwinnotifys.is_set
	|| cikephase1gwinp2exchgs.is_set
	|| cikephase1gwinp2exchginvalids.is_set
	|| cikephase1gwinp2exchgrejects.is_set
	|| cikephase1gwinp2sadelrequests.is_set
	|| cikephase1gwoutoctets.is_set
	|| cikephase1gwoutpkts.is_set
	|| cikephase1gwoutdroppkts.is_set
	|| cikephase1gwoutnotifys.is_set
	|| cikephase1gwoutp2exchgs.is_set
	|| cikephase1gwoutp2exchginvalids.is_set
	|| cikephase1gwoutp2exchgrejects.is_set
	|| cikephase1gwoutp2sadelrequests.is_set
	|| cikephase1gwinittunnels.is_set
	|| cikephase1gwinittunnelfails.is_set
	|| cikephase1gwresptunnelfails.is_set
	|| cikephase1gwsyscapfails.is_set
	|| cikephase1gwauthfails.is_set
	|| cikephase1gwdecryptfails.is_set
	|| cikephase1gwhashvalidfails.is_set
	|| cikephase1gwnosafails.is_set;
}

bool CISCOIPSECFLOWMONITORMIB::Cikephase1Gwstatstable::Cikephase1Gwstatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmgwindex.yfilter)
	|| ydk::is_set(cikephase1gwactivetunnels.yfilter)
	|| ydk::is_set(cikephase1gwprevioustunnels.yfilter)
	|| ydk::is_set(cikephase1gwinoctets.yfilter)
	|| ydk::is_set(cikephase1gwinpkts.yfilter)
	|| ydk::is_set(cikephase1gwindroppkts.yfilter)
	|| ydk::is_set(cikephase1gwinnotifys.yfilter)
	|| ydk::is_set(cikephase1gwinp2exchgs.yfilter)
	|| ydk::is_set(cikephase1gwinp2exchginvalids.yfilter)
	|| ydk::is_set(cikephase1gwinp2exchgrejects.yfilter)
	|| ydk::is_set(cikephase1gwinp2sadelrequests.yfilter)
	|| ydk::is_set(cikephase1gwoutoctets.yfilter)
	|| ydk::is_set(cikephase1gwoutpkts.yfilter)
	|| ydk::is_set(cikephase1gwoutdroppkts.yfilter)
	|| ydk::is_set(cikephase1gwoutnotifys.yfilter)
	|| ydk::is_set(cikephase1gwoutp2exchgs.yfilter)
	|| ydk::is_set(cikephase1gwoutp2exchginvalids.yfilter)
	|| ydk::is_set(cikephase1gwoutp2exchgrejects.yfilter)
	|| ydk::is_set(cikephase1gwoutp2sadelrequests.yfilter)
	|| ydk::is_set(cikephase1gwinittunnels.yfilter)
	|| ydk::is_set(cikephase1gwinittunnelfails.yfilter)
	|| ydk::is_set(cikephase1gwresptunnelfails.yfilter)
	|| ydk::is_set(cikephase1gwsyscapfails.yfilter)
	|| ydk::is_set(cikephase1gwauthfails.yfilter)
	|| ydk::is_set(cikephase1gwdecryptfails.yfilter)
	|| ydk::is_set(cikephase1gwhashvalidfails.yfilter)
	|| ydk::is_set(cikephase1gwnosafails.yfilter);
}

std::string CISCOIPSECFLOWMONITORMIB::Cikephase1Gwstatstable::Cikephase1Gwstatsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/cikePhase1GWStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECFLOWMONITORMIB::Cikephase1Gwstatstable::Cikephase1Gwstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cikePhase1GWStatsEntry" <<"[cmgwIndex='" <<cmgwindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECFLOWMONITORMIB::Cikephase1Gwstatstable::Cikephase1Gwstatsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmgwindex.is_set || is_set(cmgwindex.yfilter)) leaf_name_data.push_back(cmgwindex.get_name_leafdata());
    if (cikephase1gwactivetunnels.is_set || is_set(cikephase1gwactivetunnels.yfilter)) leaf_name_data.push_back(cikephase1gwactivetunnels.get_name_leafdata());
    if (cikephase1gwprevioustunnels.is_set || is_set(cikephase1gwprevioustunnels.yfilter)) leaf_name_data.push_back(cikephase1gwprevioustunnels.get_name_leafdata());
    if (cikephase1gwinoctets.is_set || is_set(cikephase1gwinoctets.yfilter)) leaf_name_data.push_back(cikephase1gwinoctets.get_name_leafdata());
    if (cikephase1gwinpkts.is_set || is_set(cikephase1gwinpkts.yfilter)) leaf_name_data.push_back(cikephase1gwinpkts.get_name_leafdata());
    if (cikephase1gwindroppkts.is_set || is_set(cikephase1gwindroppkts.yfilter)) leaf_name_data.push_back(cikephase1gwindroppkts.get_name_leafdata());
    if (cikephase1gwinnotifys.is_set || is_set(cikephase1gwinnotifys.yfilter)) leaf_name_data.push_back(cikephase1gwinnotifys.get_name_leafdata());
    if (cikephase1gwinp2exchgs.is_set || is_set(cikephase1gwinp2exchgs.yfilter)) leaf_name_data.push_back(cikephase1gwinp2exchgs.get_name_leafdata());
    if (cikephase1gwinp2exchginvalids.is_set || is_set(cikephase1gwinp2exchginvalids.yfilter)) leaf_name_data.push_back(cikephase1gwinp2exchginvalids.get_name_leafdata());
    if (cikephase1gwinp2exchgrejects.is_set || is_set(cikephase1gwinp2exchgrejects.yfilter)) leaf_name_data.push_back(cikephase1gwinp2exchgrejects.get_name_leafdata());
    if (cikephase1gwinp2sadelrequests.is_set || is_set(cikephase1gwinp2sadelrequests.yfilter)) leaf_name_data.push_back(cikephase1gwinp2sadelrequests.get_name_leafdata());
    if (cikephase1gwoutoctets.is_set || is_set(cikephase1gwoutoctets.yfilter)) leaf_name_data.push_back(cikephase1gwoutoctets.get_name_leafdata());
    if (cikephase1gwoutpkts.is_set || is_set(cikephase1gwoutpkts.yfilter)) leaf_name_data.push_back(cikephase1gwoutpkts.get_name_leafdata());
    if (cikephase1gwoutdroppkts.is_set || is_set(cikephase1gwoutdroppkts.yfilter)) leaf_name_data.push_back(cikephase1gwoutdroppkts.get_name_leafdata());
    if (cikephase1gwoutnotifys.is_set || is_set(cikephase1gwoutnotifys.yfilter)) leaf_name_data.push_back(cikephase1gwoutnotifys.get_name_leafdata());
    if (cikephase1gwoutp2exchgs.is_set || is_set(cikephase1gwoutp2exchgs.yfilter)) leaf_name_data.push_back(cikephase1gwoutp2exchgs.get_name_leafdata());
    if (cikephase1gwoutp2exchginvalids.is_set || is_set(cikephase1gwoutp2exchginvalids.yfilter)) leaf_name_data.push_back(cikephase1gwoutp2exchginvalids.get_name_leafdata());
    if (cikephase1gwoutp2exchgrejects.is_set || is_set(cikephase1gwoutp2exchgrejects.yfilter)) leaf_name_data.push_back(cikephase1gwoutp2exchgrejects.get_name_leafdata());
    if (cikephase1gwoutp2sadelrequests.is_set || is_set(cikephase1gwoutp2sadelrequests.yfilter)) leaf_name_data.push_back(cikephase1gwoutp2sadelrequests.get_name_leafdata());
    if (cikephase1gwinittunnels.is_set || is_set(cikephase1gwinittunnels.yfilter)) leaf_name_data.push_back(cikephase1gwinittunnels.get_name_leafdata());
    if (cikephase1gwinittunnelfails.is_set || is_set(cikephase1gwinittunnelfails.yfilter)) leaf_name_data.push_back(cikephase1gwinittunnelfails.get_name_leafdata());
    if (cikephase1gwresptunnelfails.is_set || is_set(cikephase1gwresptunnelfails.yfilter)) leaf_name_data.push_back(cikephase1gwresptunnelfails.get_name_leafdata());
    if (cikephase1gwsyscapfails.is_set || is_set(cikephase1gwsyscapfails.yfilter)) leaf_name_data.push_back(cikephase1gwsyscapfails.get_name_leafdata());
    if (cikephase1gwauthfails.is_set || is_set(cikephase1gwauthfails.yfilter)) leaf_name_data.push_back(cikephase1gwauthfails.get_name_leafdata());
    if (cikephase1gwdecryptfails.is_set || is_set(cikephase1gwdecryptfails.yfilter)) leaf_name_data.push_back(cikephase1gwdecryptfails.get_name_leafdata());
    if (cikephase1gwhashvalidfails.is_set || is_set(cikephase1gwhashvalidfails.yfilter)) leaf_name_data.push_back(cikephase1gwhashvalidfails.get_name_leafdata());
    if (cikephase1gwnosafails.is_set || is_set(cikephase1gwnosafails.yfilter)) leaf_name_data.push_back(cikephase1gwnosafails.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECFLOWMONITORMIB::Cikephase1Gwstatstable::Cikephase1Gwstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECFLOWMONITORMIB::Cikephase1Gwstatstable::Cikephase1Gwstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPSECFLOWMONITORMIB::Cikephase1Gwstatstable::Cikephase1Gwstatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmgwIndex")
    {
        cmgwindex = value;
        cmgwindex.value_namespace = name_space;
        cmgwindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePhase1GWActiveTunnels")
    {
        cikephase1gwactivetunnels = value;
        cikephase1gwactivetunnels.value_namespace = name_space;
        cikephase1gwactivetunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePhase1GWPreviousTunnels")
    {
        cikephase1gwprevioustunnels = value;
        cikephase1gwprevioustunnels.value_namespace = name_space;
        cikephase1gwprevioustunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePhase1GWInOctets")
    {
        cikephase1gwinoctets = value;
        cikephase1gwinoctets.value_namespace = name_space;
        cikephase1gwinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePhase1GWInPkts")
    {
        cikephase1gwinpkts = value;
        cikephase1gwinpkts.value_namespace = name_space;
        cikephase1gwinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePhase1GWInDropPkts")
    {
        cikephase1gwindroppkts = value;
        cikephase1gwindroppkts.value_namespace = name_space;
        cikephase1gwindroppkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePhase1GWInNotifys")
    {
        cikephase1gwinnotifys = value;
        cikephase1gwinnotifys.value_namespace = name_space;
        cikephase1gwinnotifys.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePhase1GWInP2Exchgs")
    {
        cikephase1gwinp2exchgs = value;
        cikephase1gwinp2exchgs.value_namespace = name_space;
        cikephase1gwinp2exchgs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePhase1GWInP2ExchgInvalids")
    {
        cikephase1gwinp2exchginvalids = value;
        cikephase1gwinp2exchginvalids.value_namespace = name_space;
        cikephase1gwinp2exchginvalids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePhase1GWInP2ExchgRejects")
    {
        cikephase1gwinp2exchgrejects = value;
        cikephase1gwinp2exchgrejects.value_namespace = name_space;
        cikephase1gwinp2exchgrejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePhase1GWInP2SaDelRequests")
    {
        cikephase1gwinp2sadelrequests = value;
        cikephase1gwinp2sadelrequests.value_namespace = name_space;
        cikephase1gwinp2sadelrequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePhase1GWOutOctets")
    {
        cikephase1gwoutoctets = value;
        cikephase1gwoutoctets.value_namespace = name_space;
        cikephase1gwoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePhase1GWOutPkts")
    {
        cikephase1gwoutpkts = value;
        cikephase1gwoutpkts.value_namespace = name_space;
        cikephase1gwoutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePhase1GWOutDropPkts")
    {
        cikephase1gwoutdroppkts = value;
        cikephase1gwoutdroppkts.value_namespace = name_space;
        cikephase1gwoutdroppkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePhase1GWOutNotifys")
    {
        cikephase1gwoutnotifys = value;
        cikephase1gwoutnotifys.value_namespace = name_space;
        cikephase1gwoutnotifys.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePhase1GWOutP2Exchgs")
    {
        cikephase1gwoutp2exchgs = value;
        cikephase1gwoutp2exchgs.value_namespace = name_space;
        cikephase1gwoutp2exchgs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePhase1GWOutP2ExchgInvalids")
    {
        cikephase1gwoutp2exchginvalids = value;
        cikephase1gwoutp2exchginvalids.value_namespace = name_space;
        cikephase1gwoutp2exchginvalids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePhase1GWOutP2ExchgRejects")
    {
        cikephase1gwoutp2exchgrejects = value;
        cikephase1gwoutp2exchgrejects.value_namespace = name_space;
        cikephase1gwoutp2exchgrejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePhase1GWOutP2SaDelRequests")
    {
        cikephase1gwoutp2sadelrequests = value;
        cikephase1gwoutp2sadelrequests.value_namespace = name_space;
        cikephase1gwoutp2sadelrequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePhase1GWInitTunnels")
    {
        cikephase1gwinittunnels = value;
        cikephase1gwinittunnels.value_namespace = name_space;
        cikephase1gwinittunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePhase1GWInitTunnelFails")
    {
        cikephase1gwinittunnelfails = value;
        cikephase1gwinittunnelfails.value_namespace = name_space;
        cikephase1gwinittunnelfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePhase1GWRespTunnelFails")
    {
        cikephase1gwresptunnelfails = value;
        cikephase1gwresptunnelfails.value_namespace = name_space;
        cikephase1gwresptunnelfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePhase1GWSysCapFails")
    {
        cikephase1gwsyscapfails = value;
        cikephase1gwsyscapfails.value_namespace = name_space;
        cikephase1gwsyscapfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePhase1GWAuthFails")
    {
        cikephase1gwauthfails = value;
        cikephase1gwauthfails.value_namespace = name_space;
        cikephase1gwauthfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePhase1GWDecryptFails")
    {
        cikephase1gwdecryptfails = value;
        cikephase1gwdecryptfails.value_namespace = name_space;
        cikephase1gwdecryptfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePhase1GWHashValidFails")
    {
        cikephase1gwhashvalidfails = value;
        cikephase1gwhashvalidfails.value_namespace = name_space;
        cikephase1gwhashvalidfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikePhase1GWNoSaFails")
    {
        cikephase1gwnosafails = value;
        cikephase1gwnosafails.value_namespace = name_space;
        cikephase1gwnosafails.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSECFLOWMONITORMIB::Cikephase1Gwstatstable::Cikephase1Gwstatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmgwIndex")
    {
        cmgwindex.yfilter = yfilter;
    }
    if(value_path == "cikePhase1GWActiveTunnels")
    {
        cikephase1gwactivetunnels.yfilter = yfilter;
    }
    if(value_path == "cikePhase1GWPreviousTunnels")
    {
        cikephase1gwprevioustunnels.yfilter = yfilter;
    }
    if(value_path == "cikePhase1GWInOctets")
    {
        cikephase1gwinoctets.yfilter = yfilter;
    }
    if(value_path == "cikePhase1GWInPkts")
    {
        cikephase1gwinpkts.yfilter = yfilter;
    }
    if(value_path == "cikePhase1GWInDropPkts")
    {
        cikephase1gwindroppkts.yfilter = yfilter;
    }
    if(value_path == "cikePhase1GWInNotifys")
    {
        cikephase1gwinnotifys.yfilter = yfilter;
    }
    if(value_path == "cikePhase1GWInP2Exchgs")
    {
        cikephase1gwinp2exchgs.yfilter = yfilter;
    }
    if(value_path == "cikePhase1GWInP2ExchgInvalids")
    {
        cikephase1gwinp2exchginvalids.yfilter = yfilter;
    }
    if(value_path == "cikePhase1GWInP2ExchgRejects")
    {
        cikephase1gwinp2exchgrejects.yfilter = yfilter;
    }
    if(value_path == "cikePhase1GWInP2SaDelRequests")
    {
        cikephase1gwinp2sadelrequests.yfilter = yfilter;
    }
    if(value_path == "cikePhase1GWOutOctets")
    {
        cikephase1gwoutoctets.yfilter = yfilter;
    }
    if(value_path == "cikePhase1GWOutPkts")
    {
        cikephase1gwoutpkts.yfilter = yfilter;
    }
    if(value_path == "cikePhase1GWOutDropPkts")
    {
        cikephase1gwoutdroppkts.yfilter = yfilter;
    }
    if(value_path == "cikePhase1GWOutNotifys")
    {
        cikephase1gwoutnotifys.yfilter = yfilter;
    }
    if(value_path == "cikePhase1GWOutP2Exchgs")
    {
        cikephase1gwoutp2exchgs.yfilter = yfilter;
    }
    if(value_path == "cikePhase1GWOutP2ExchgInvalids")
    {
        cikephase1gwoutp2exchginvalids.yfilter = yfilter;
    }
    if(value_path == "cikePhase1GWOutP2ExchgRejects")
    {
        cikephase1gwoutp2exchgrejects.yfilter = yfilter;
    }
    if(value_path == "cikePhase1GWOutP2SaDelRequests")
    {
        cikephase1gwoutp2sadelrequests.yfilter = yfilter;
    }
    if(value_path == "cikePhase1GWInitTunnels")
    {
        cikephase1gwinittunnels.yfilter = yfilter;
    }
    if(value_path == "cikePhase1GWInitTunnelFails")
    {
        cikephase1gwinittunnelfails.yfilter = yfilter;
    }
    if(value_path == "cikePhase1GWRespTunnelFails")
    {
        cikephase1gwresptunnelfails.yfilter = yfilter;
    }
    if(value_path == "cikePhase1GWSysCapFails")
    {
        cikephase1gwsyscapfails.yfilter = yfilter;
    }
    if(value_path == "cikePhase1GWAuthFails")
    {
        cikephase1gwauthfails.yfilter = yfilter;
    }
    if(value_path == "cikePhase1GWDecryptFails")
    {
        cikephase1gwdecryptfails.yfilter = yfilter;
    }
    if(value_path == "cikePhase1GWHashValidFails")
    {
        cikephase1gwhashvalidfails.yfilter = yfilter;
    }
    if(value_path == "cikePhase1GWNoSaFails")
    {
        cikephase1gwnosafails.yfilter = yfilter;
    }
}

bool CISCOIPSECFLOWMONITORMIB::Cikephase1Gwstatstable::Cikephase1Gwstatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmgwIndex" || name == "cikePhase1GWActiveTunnels" || name == "cikePhase1GWPreviousTunnels" || name == "cikePhase1GWInOctets" || name == "cikePhase1GWInPkts" || name == "cikePhase1GWInDropPkts" || name == "cikePhase1GWInNotifys" || name == "cikePhase1GWInP2Exchgs" || name == "cikePhase1GWInP2ExchgInvalids" || name == "cikePhase1GWInP2ExchgRejects" || name == "cikePhase1GWInP2SaDelRequests" || name == "cikePhase1GWOutOctets" || name == "cikePhase1GWOutPkts" || name == "cikePhase1GWOutDropPkts" || name == "cikePhase1GWOutNotifys" || name == "cikePhase1GWOutP2Exchgs" || name == "cikePhase1GWOutP2ExchgInvalids" || name == "cikePhase1GWOutP2ExchgRejects" || name == "cikePhase1GWOutP2SaDelRequests" || name == "cikePhase1GWInitTunnels" || name == "cikePhase1GWInitTunnelFails" || name == "cikePhase1GWRespTunnelFails" || name == "cikePhase1GWSysCapFails" || name == "cikePhase1GWAuthFails" || name == "cikePhase1GWDecryptFails" || name == "cikePhase1GWHashValidFails" || name == "cikePhase1GWNoSaFails")
        return true;
    return false;
}

CISCOIPSECFLOWMONITORMIB::Cipsectunneltable::Cipsectunneltable()
{

    yang_name = "cipSecTunnelTable"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSECFLOWMONITORMIB::Cipsectunneltable::~Cipsectunneltable()
{
}

bool CISCOIPSECFLOWMONITORMIB::Cipsectunneltable::has_data() const
{
    for (std::size_t index=0; index<cipsectunnelentry.size(); index++)
    {
        if(cipsectunnelentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPSECFLOWMONITORMIB::Cipsectunneltable::has_operation() const
{
    for (std::size_t index=0; index<cipsectunnelentry.size(); index++)
    {
        if(cipsectunnelentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsectunneltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsectunneltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecTunnelTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECFLOWMONITORMIB::Cipsectunneltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECFLOWMONITORMIB::Cipsectunneltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipSecTunnelEntry")
    {
        auto c = std::make_shared<CISCOIPSECFLOWMONITORMIB::Cipsectunneltable::Cipsectunnelentry>();
        c->parent = this;
        cipsectunnelentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECFLOWMONITORMIB::Cipsectunneltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cipsectunnelentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIPSECFLOWMONITORMIB::Cipsectunneltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPSECFLOWMONITORMIB::Cipsectunneltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPSECFLOWMONITORMIB::Cipsectunneltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipSecTunnelEntry")
        return true;
    return false;
}

CISCOIPSECFLOWMONITORMIB::Cipsectunneltable::Cipsectunnelentry::Cipsectunnelentry()
    :
    cipsectunindex{YType::int32, "cipSecTunIndex"},
    cipsectuniketunnelindex{YType::int32, "cipSecTunIkeTunnelIndex"},
    cipsectuniketunnelalive{YType::boolean, "cipSecTunIkeTunnelAlive"},
    cipsectunlocaladdr{YType::str, "cipSecTunLocalAddr"},
    cipsectunremoteaddr{YType::str, "cipSecTunRemoteAddr"},
    cipsectunkeytype{YType::enumeration, "cipSecTunKeyType"},
    cipsectunencapmode{YType::enumeration, "cipSecTunEncapMode"},
    cipsectunlifesize{YType::int32, "cipSecTunLifeSize"},
    cipsectunlifetime{YType::int32, "cipSecTunLifeTime"},
    cipsectunactivetime{YType::int32, "cipSecTunActiveTime"},
    cipsectunsalifesizethreshold{YType::int32, "cipSecTunSaLifeSizeThreshold"},
    cipsectunsalifetimethreshold{YType::int32, "cipSecTunSaLifeTimeThreshold"},
    cipsectuntotalrefreshes{YType::uint32, "cipSecTunTotalRefreshes"},
    cipsectunexpiredsainstances{YType::uint32, "cipSecTunExpiredSaInstances"},
    cipsectuncurrentsainstances{YType::uint32, "cipSecTunCurrentSaInstances"},
    cipsectuninsadiffhellmangrp{YType::enumeration, "cipSecTunInSaDiffHellmanGrp"},
    cipsectuninsaencryptalgo{YType::enumeration, "cipSecTunInSaEncryptAlgo"},
    cipsectuninsaahauthalgo{YType::enumeration, "cipSecTunInSaAhAuthAlgo"},
    cipsectuninsaespauthalgo{YType::enumeration, "cipSecTunInSaEspAuthAlgo"},
    cipsectuninsadecompalgo{YType::enumeration, "cipSecTunInSaDecompAlgo"},
    cipsectunoutsadiffhellmangrp{YType::enumeration, "cipSecTunOutSaDiffHellmanGrp"},
    cipsectunoutsaencryptalgo{YType::enumeration, "cipSecTunOutSaEncryptAlgo"},
    cipsectunoutsaahauthalgo{YType::enumeration, "cipSecTunOutSaAhAuthAlgo"},
    cipsectunoutsaespauthalgo{YType::enumeration, "cipSecTunOutSaEspAuthAlgo"},
    cipsectunoutsacompalgo{YType::enumeration, "cipSecTunOutSaCompAlgo"},
    cipsectuninoctets{YType::uint32, "cipSecTunInOctets"},
    cipsectunhcinoctets{YType::uint64, "cipSecTunHcInOctets"},
    cipsectuninoctwraps{YType::uint32, "cipSecTunInOctWraps"},
    cipsectunindecompoctets{YType::uint32, "cipSecTunInDecompOctets"},
    cipsectunhcindecompoctets{YType::uint64, "cipSecTunHcInDecompOctets"},
    cipsectunindecompoctwraps{YType::uint32, "cipSecTunInDecompOctWraps"},
    cipsectuninpkts{YType::uint32, "cipSecTunInPkts"},
    cipsectunindroppkts{YType::uint32, "cipSecTunInDropPkts"},
    cipsectuninreplaydroppkts{YType::uint32, "cipSecTunInReplayDropPkts"},
    cipsectuninauths{YType::uint32, "cipSecTunInAuths"},
    cipsectuninauthfails{YType::uint32, "cipSecTunInAuthFails"},
    cipsectunindecrypts{YType::uint32, "cipSecTunInDecrypts"},
    cipsectunindecryptfails{YType::uint32, "cipSecTunInDecryptFails"},
    cipsectunoutoctets{YType::uint32, "cipSecTunOutOctets"},
    cipsectunhcoutoctets{YType::uint64, "cipSecTunHcOutOctets"},
    cipsectunoutoctwraps{YType::uint32, "cipSecTunOutOctWraps"},
    cipsectunoutuncompoctets{YType::uint32, "cipSecTunOutUncompOctets"},
    cipsectunhcoutuncompoctets{YType::uint64, "cipSecTunHcOutUncompOctets"},
    cipsectunoutuncompoctwraps{YType::uint32, "cipSecTunOutUncompOctWraps"},
    cipsectunoutpkts{YType::uint32, "cipSecTunOutPkts"},
    cipsectunoutdroppkts{YType::uint32, "cipSecTunOutDropPkts"},
    cipsectunoutauths{YType::uint32, "cipSecTunOutAuths"},
    cipsectunoutauthfails{YType::uint32, "cipSecTunOutAuthFails"},
    cipsectunoutencrypts{YType::uint32, "cipSecTunOutEncrypts"},
    cipsectunoutencryptfails{YType::uint32, "cipSecTunOutEncryptFails"},
    cipsectunstatus{YType::enumeration, "cipSecTunStatus"}
{

    yang_name = "cipSecTunnelEntry"; yang_parent_name = "cipSecTunnelTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSECFLOWMONITORMIB::Cipsectunneltable::Cipsectunnelentry::~Cipsectunnelentry()
{
}

bool CISCOIPSECFLOWMONITORMIB::Cipsectunneltable::Cipsectunnelentry::has_data() const
{
    return cipsectunindex.is_set
	|| cipsectuniketunnelindex.is_set
	|| cipsectuniketunnelalive.is_set
	|| cipsectunlocaladdr.is_set
	|| cipsectunremoteaddr.is_set
	|| cipsectunkeytype.is_set
	|| cipsectunencapmode.is_set
	|| cipsectunlifesize.is_set
	|| cipsectunlifetime.is_set
	|| cipsectunactivetime.is_set
	|| cipsectunsalifesizethreshold.is_set
	|| cipsectunsalifetimethreshold.is_set
	|| cipsectuntotalrefreshes.is_set
	|| cipsectunexpiredsainstances.is_set
	|| cipsectuncurrentsainstances.is_set
	|| cipsectuninsadiffhellmangrp.is_set
	|| cipsectuninsaencryptalgo.is_set
	|| cipsectuninsaahauthalgo.is_set
	|| cipsectuninsaespauthalgo.is_set
	|| cipsectuninsadecompalgo.is_set
	|| cipsectunoutsadiffhellmangrp.is_set
	|| cipsectunoutsaencryptalgo.is_set
	|| cipsectunoutsaahauthalgo.is_set
	|| cipsectunoutsaespauthalgo.is_set
	|| cipsectunoutsacompalgo.is_set
	|| cipsectuninoctets.is_set
	|| cipsectunhcinoctets.is_set
	|| cipsectuninoctwraps.is_set
	|| cipsectunindecompoctets.is_set
	|| cipsectunhcindecompoctets.is_set
	|| cipsectunindecompoctwraps.is_set
	|| cipsectuninpkts.is_set
	|| cipsectunindroppkts.is_set
	|| cipsectuninreplaydroppkts.is_set
	|| cipsectuninauths.is_set
	|| cipsectuninauthfails.is_set
	|| cipsectunindecrypts.is_set
	|| cipsectunindecryptfails.is_set
	|| cipsectunoutoctets.is_set
	|| cipsectunhcoutoctets.is_set
	|| cipsectunoutoctwraps.is_set
	|| cipsectunoutuncompoctets.is_set
	|| cipsectunhcoutuncompoctets.is_set
	|| cipsectunoutuncompoctwraps.is_set
	|| cipsectunoutpkts.is_set
	|| cipsectunoutdroppkts.is_set
	|| cipsectunoutauths.is_set
	|| cipsectunoutauthfails.is_set
	|| cipsectunoutencrypts.is_set
	|| cipsectunoutencryptfails.is_set
	|| cipsectunstatus.is_set;
}

bool CISCOIPSECFLOWMONITORMIB::Cipsectunneltable::Cipsectunnelentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipsectunindex.yfilter)
	|| ydk::is_set(cipsectuniketunnelindex.yfilter)
	|| ydk::is_set(cipsectuniketunnelalive.yfilter)
	|| ydk::is_set(cipsectunlocaladdr.yfilter)
	|| ydk::is_set(cipsectunremoteaddr.yfilter)
	|| ydk::is_set(cipsectunkeytype.yfilter)
	|| ydk::is_set(cipsectunencapmode.yfilter)
	|| ydk::is_set(cipsectunlifesize.yfilter)
	|| ydk::is_set(cipsectunlifetime.yfilter)
	|| ydk::is_set(cipsectunactivetime.yfilter)
	|| ydk::is_set(cipsectunsalifesizethreshold.yfilter)
	|| ydk::is_set(cipsectunsalifetimethreshold.yfilter)
	|| ydk::is_set(cipsectuntotalrefreshes.yfilter)
	|| ydk::is_set(cipsectunexpiredsainstances.yfilter)
	|| ydk::is_set(cipsectuncurrentsainstances.yfilter)
	|| ydk::is_set(cipsectuninsadiffhellmangrp.yfilter)
	|| ydk::is_set(cipsectuninsaencryptalgo.yfilter)
	|| ydk::is_set(cipsectuninsaahauthalgo.yfilter)
	|| ydk::is_set(cipsectuninsaespauthalgo.yfilter)
	|| ydk::is_set(cipsectuninsadecompalgo.yfilter)
	|| ydk::is_set(cipsectunoutsadiffhellmangrp.yfilter)
	|| ydk::is_set(cipsectunoutsaencryptalgo.yfilter)
	|| ydk::is_set(cipsectunoutsaahauthalgo.yfilter)
	|| ydk::is_set(cipsectunoutsaespauthalgo.yfilter)
	|| ydk::is_set(cipsectunoutsacompalgo.yfilter)
	|| ydk::is_set(cipsectuninoctets.yfilter)
	|| ydk::is_set(cipsectunhcinoctets.yfilter)
	|| ydk::is_set(cipsectuninoctwraps.yfilter)
	|| ydk::is_set(cipsectunindecompoctets.yfilter)
	|| ydk::is_set(cipsectunhcindecompoctets.yfilter)
	|| ydk::is_set(cipsectunindecompoctwraps.yfilter)
	|| ydk::is_set(cipsectuninpkts.yfilter)
	|| ydk::is_set(cipsectunindroppkts.yfilter)
	|| ydk::is_set(cipsectuninreplaydroppkts.yfilter)
	|| ydk::is_set(cipsectuninauths.yfilter)
	|| ydk::is_set(cipsectuninauthfails.yfilter)
	|| ydk::is_set(cipsectunindecrypts.yfilter)
	|| ydk::is_set(cipsectunindecryptfails.yfilter)
	|| ydk::is_set(cipsectunoutoctets.yfilter)
	|| ydk::is_set(cipsectunhcoutoctets.yfilter)
	|| ydk::is_set(cipsectunoutoctwraps.yfilter)
	|| ydk::is_set(cipsectunoutuncompoctets.yfilter)
	|| ydk::is_set(cipsectunhcoutuncompoctets.yfilter)
	|| ydk::is_set(cipsectunoutuncompoctwraps.yfilter)
	|| ydk::is_set(cipsectunoutpkts.yfilter)
	|| ydk::is_set(cipsectunoutdroppkts.yfilter)
	|| ydk::is_set(cipsectunoutauths.yfilter)
	|| ydk::is_set(cipsectunoutauthfails.yfilter)
	|| ydk::is_set(cipsectunoutencrypts.yfilter)
	|| ydk::is_set(cipsectunoutencryptfails.yfilter)
	|| ydk::is_set(cipsectunstatus.yfilter);
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsectunneltable::Cipsectunnelentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/cipSecTunnelTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsectunneltable::Cipsectunnelentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecTunnelEntry" <<"[cipSecTunIndex='" <<cipsectunindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECFLOWMONITORMIB::Cipsectunneltable::Cipsectunnelentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsectunindex.is_set || is_set(cipsectunindex.yfilter)) leaf_name_data.push_back(cipsectunindex.get_name_leafdata());
    if (cipsectuniketunnelindex.is_set || is_set(cipsectuniketunnelindex.yfilter)) leaf_name_data.push_back(cipsectuniketunnelindex.get_name_leafdata());
    if (cipsectuniketunnelalive.is_set || is_set(cipsectuniketunnelalive.yfilter)) leaf_name_data.push_back(cipsectuniketunnelalive.get_name_leafdata());
    if (cipsectunlocaladdr.is_set || is_set(cipsectunlocaladdr.yfilter)) leaf_name_data.push_back(cipsectunlocaladdr.get_name_leafdata());
    if (cipsectunremoteaddr.is_set || is_set(cipsectunremoteaddr.yfilter)) leaf_name_data.push_back(cipsectunremoteaddr.get_name_leafdata());
    if (cipsectunkeytype.is_set || is_set(cipsectunkeytype.yfilter)) leaf_name_data.push_back(cipsectunkeytype.get_name_leafdata());
    if (cipsectunencapmode.is_set || is_set(cipsectunencapmode.yfilter)) leaf_name_data.push_back(cipsectunencapmode.get_name_leafdata());
    if (cipsectunlifesize.is_set || is_set(cipsectunlifesize.yfilter)) leaf_name_data.push_back(cipsectunlifesize.get_name_leafdata());
    if (cipsectunlifetime.is_set || is_set(cipsectunlifetime.yfilter)) leaf_name_data.push_back(cipsectunlifetime.get_name_leafdata());
    if (cipsectunactivetime.is_set || is_set(cipsectunactivetime.yfilter)) leaf_name_data.push_back(cipsectunactivetime.get_name_leafdata());
    if (cipsectunsalifesizethreshold.is_set || is_set(cipsectunsalifesizethreshold.yfilter)) leaf_name_data.push_back(cipsectunsalifesizethreshold.get_name_leafdata());
    if (cipsectunsalifetimethreshold.is_set || is_set(cipsectunsalifetimethreshold.yfilter)) leaf_name_data.push_back(cipsectunsalifetimethreshold.get_name_leafdata());
    if (cipsectuntotalrefreshes.is_set || is_set(cipsectuntotalrefreshes.yfilter)) leaf_name_data.push_back(cipsectuntotalrefreshes.get_name_leafdata());
    if (cipsectunexpiredsainstances.is_set || is_set(cipsectunexpiredsainstances.yfilter)) leaf_name_data.push_back(cipsectunexpiredsainstances.get_name_leafdata());
    if (cipsectuncurrentsainstances.is_set || is_set(cipsectuncurrentsainstances.yfilter)) leaf_name_data.push_back(cipsectuncurrentsainstances.get_name_leafdata());
    if (cipsectuninsadiffhellmangrp.is_set || is_set(cipsectuninsadiffhellmangrp.yfilter)) leaf_name_data.push_back(cipsectuninsadiffhellmangrp.get_name_leafdata());
    if (cipsectuninsaencryptalgo.is_set || is_set(cipsectuninsaencryptalgo.yfilter)) leaf_name_data.push_back(cipsectuninsaencryptalgo.get_name_leafdata());
    if (cipsectuninsaahauthalgo.is_set || is_set(cipsectuninsaahauthalgo.yfilter)) leaf_name_data.push_back(cipsectuninsaahauthalgo.get_name_leafdata());
    if (cipsectuninsaespauthalgo.is_set || is_set(cipsectuninsaespauthalgo.yfilter)) leaf_name_data.push_back(cipsectuninsaespauthalgo.get_name_leafdata());
    if (cipsectuninsadecompalgo.is_set || is_set(cipsectuninsadecompalgo.yfilter)) leaf_name_data.push_back(cipsectuninsadecompalgo.get_name_leafdata());
    if (cipsectunoutsadiffhellmangrp.is_set || is_set(cipsectunoutsadiffhellmangrp.yfilter)) leaf_name_data.push_back(cipsectunoutsadiffhellmangrp.get_name_leafdata());
    if (cipsectunoutsaencryptalgo.is_set || is_set(cipsectunoutsaencryptalgo.yfilter)) leaf_name_data.push_back(cipsectunoutsaencryptalgo.get_name_leafdata());
    if (cipsectunoutsaahauthalgo.is_set || is_set(cipsectunoutsaahauthalgo.yfilter)) leaf_name_data.push_back(cipsectunoutsaahauthalgo.get_name_leafdata());
    if (cipsectunoutsaespauthalgo.is_set || is_set(cipsectunoutsaespauthalgo.yfilter)) leaf_name_data.push_back(cipsectunoutsaespauthalgo.get_name_leafdata());
    if (cipsectunoutsacompalgo.is_set || is_set(cipsectunoutsacompalgo.yfilter)) leaf_name_data.push_back(cipsectunoutsacompalgo.get_name_leafdata());
    if (cipsectuninoctets.is_set || is_set(cipsectuninoctets.yfilter)) leaf_name_data.push_back(cipsectuninoctets.get_name_leafdata());
    if (cipsectunhcinoctets.is_set || is_set(cipsectunhcinoctets.yfilter)) leaf_name_data.push_back(cipsectunhcinoctets.get_name_leafdata());
    if (cipsectuninoctwraps.is_set || is_set(cipsectuninoctwraps.yfilter)) leaf_name_data.push_back(cipsectuninoctwraps.get_name_leafdata());
    if (cipsectunindecompoctets.is_set || is_set(cipsectunindecompoctets.yfilter)) leaf_name_data.push_back(cipsectunindecompoctets.get_name_leafdata());
    if (cipsectunhcindecompoctets.is_set || is_set(cipsectunhcindecompoctets.yfilter)) leaf_name_data.push_back(cipsectunhcindecompoctets.get_name_leafdata());
    if (cipsectunindecompoctwraps.is_set || is_set(cipsectunindecompoctwraps.yfilter)) leaf_name_data.push_back(cipsectunindecompoctwraps.get_name_leafdata());
    if (cipsectuninpkts.is_set || is_set(cipsectuninpkts.yfilter)) leaf_name_data.push_back(cipsectuninpkts.get_name_leafdata());
    if (cipsectunindroppkts.is_set || is_set(cipsectunindroppkts.yfilter)) leaf_name_data.push_back(cipsectunindroppkts.get_name_leafdata());
    if (cipsectuninreplaydroppkts.is_set || is_set(cipsectuninreplaydroppkts.yfilter)) leaf_name_data.push_back(cipsectuninreplaydroppkts.get_name_leafdata());
    if (cipsectuninauths.is_set || is_set(cipsectuninauths.yfilter)) leaf_name_data.push_back(cipsectuninauths.get_name_leafdata());
    if (cipsectuninauthfails.is_set || is_set(cipsectuninauthfails.yfilter)) leaf_name_data.push_back(cipsectuninauthfails.get_name_leafdata());
    if (cipsectunindecrypts.is_set || is_set(cipsectunindecrypts.yfilter)) leaf_name_data.push_back(cipsectunindecrypts.get_name_leafdata());
    if (cipsectunindecryptfails.is_set || is_set(cipsectunindecryptfails.yfilter)) leaf_name_data.push_back(cipsectunindecryptfails.get_name_leafdata());
    if (cipsectunoutoctets.is_set || is_set(cipsectunoutoctets.yfilter)) leaf_name_data.push_back(cipsectunoutoctets.get_name_leafdata());
    if (cipsectunhcoutoctets.is_set || is_set(cipsectunhcoutoctets.yfilter)) leaf_name_data.push_back(cipsectunhcoutoctets.get_name_leafdata());
    if (cipsectunoutoctwraps.is_set || is_set(cipsectunoutoctwraps.yfilter)) leaf_name_data.push_back(cipsectunoutoctwraps.get_name_leafdata());
    if (cipsectunoutuncompoctets.is_set || is_set(cipsectunoutuncompoctets.yfilter)) leaf_name_data.push_back(cipsectunoutuncompoctets.get_name_leafdata());
    if (cipsectunhcoutuncompoctets.is_set || is_set(cipsectunhcoutuncompoctets.yfilter)) leaf_name_data.push_back(cipsectunhcoutuncompoctets.get_name_leafdata());
    if (cipsectunoutuncompoctwraps.is_set || is_set(cipsectunoutuncompoctwraps.yfilter)) leaf_name_data.push_back(cipsectunoutuncompoctwraps.get_name_leafdata());
    if (cipsectunoutpkts.is_set || is_set(cipsectunoutpkts.yfilter)) leaf_name_data.push_back(cipsectunoutpkts.get_name_leafdata());
    if (cipsectunoutdroppkts.is_set || is_set(cipsectunoutdroppkts.yfilter)) leaf_name_data.push_back(cipsectunoutdroppkts.get_name_leafdata());
    if (cipsectunoutauths.is_set || is_set(cipsectunoutauths.yfilter)) leaf_name_data.push_back(cipsectunoutauths.get_name_leafdata());
    if (cipsectunoutauthfails.is_set || is_set(cipsectunoutauthfails.yfilter)) leaf_name_data.push_back(cipsectunoutauthfails.get_name_leafdata());
    if (cipsectunoutencrypts.is_set || is_set(cipsectunoutencrypts.yfilter)) leaf_name_data.push_back(cipsectunoutencrypts.get_name_leafdata());
    if (cipsectunoutencryptfails.is_set || is_set(cipsectunoutencryptfails.yfilter)) leaf_name_data.push_back(cipsectunoutencryptfails.get_name_leafdata());
    if (cipsectunstatus.is_set || is_set(cipsectunstatus.yfilter)) leaf_name_data.push_back(cipsectunstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECFLOWMONITORMIB::Cipsectunneltable::Cipsectunnelentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECFLOWMONITORMIB::Cipsectunneltable::Cipsectunnelentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPSECFLOWMONITORMIB::Cipsectunneltable::Cipsectunnelentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipSecTunIndex")
    {
        cipsectunindex = value;
        cipsectunindex.value_namespace = name_space;
        cipsectunindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunIkeTunnelIndex")
    {
        cipsectuniketunnelindex = value;
        cipsectuniketunnelindex.value_namespace = name_space;
        cipsectuniketunnelindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunIkeTunnelAlive")
    {
        cipsectuniketunnelalive = value;
        cipsectuniketunnelalive.value_namespace = name_space;
        cipsectuniketunnelalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunLocalAddr")
    {
        cipsectunlocaladdr = value;
        cipsectunlocaladdr.value_namespace = name_space;
        cipsectunlocaladdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunRemoteAddr")
    {
        cipsectunremoteaddr = value;
        cipsectunremoteaddr.value_namespace = name_space;
        cipsectunremoteaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunKeyType")
    {
        cipsectunkeytype = value;
        cipsectunkeytype.value_namespace = name_space;
        cipsectunkeytype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunEncapMode")
    {
        cipsectunencapmode = value;
        cipsectunencapmode.value_namespace = name_space;
        cipsectunencapmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunLifeSize")
    {
        cipsectunlifesize = value;
        cipsectunlifesize.value_namespace = name_space;
        cipsectunlifesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunLifeTime")
    {
        cipsectunlifetime = value;
        cipsectunlifetime.value_namespace = name_space;
        cipsectunlifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunActiveTime")
    {
        cipsectunactivetime = value;
        cipsectunactivetime.value_namespace = name_space;
        cipsectunactivetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunSaLifeSizeThreshold")
    {
        cipsectunsalifesizethreshold = value;
        cipsectunsalifesizethreshold.value_namespace = name_space;
        cipsectunsalifesizethreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunSaLifeTimeThreshold")
    {
        cipsectunsalifetimethreshold = value;
        cipsectunsalifetimethreshold.value_namespace = name_space;
        cipsectunsalifetimethreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunTotalRefreshes")
    {
        cipsectuntotalrefreshes = value;
        cipsectuntotalrefreshes.value_namespace = name_space;
        cipsectuntotalrefreshes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunExpiredSaInstances")
    {
        cipsectunexpiredsainstances = value;
        cipsectunexpiredsainstances.value_namespace = name_space;
        cipsectunexpiredsainstances.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunCurrentSaInstances")
    {
        cipsectuncurrentsainstances = value;
        cipsectuncurrentsainstances.value_namespace = name_space;
        cipsectuncurrentsainstances.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunInSaDiffHellmanGrp")
    {
        cipsectuninsadiffhellmangrp = value;
        cipsectuninsadiffhellmangrp.value_namespace = name_space;
        cipsectuninsadiffhellmangrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunInSaEncryptAlgo")
    {
        cipsectuninsaencryptalgo = value;
        cipsectuninsaencryptalgo.value_namespace = name_space;
        cipsectuninsaencryptalgo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunInSaAhAuthAlgo")
    {
        cipsectuninsaahauthalgo = value;
        cipsectuninsaahauthalgo.value_namespace = name_space;
        cipsectuninsaahauthalgo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunInSaEspAuthAlgo")
    {
        cipsectuninsaespauthalgo = value;
        cipsectuninsaespauthalgo.value_namespace = name_space;
        cipsectuninsaespauthalgo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunInSaDecompAlgo")
    {
        cipsectuninsadecompalgo = value;
        cipsectuninsadecompalgo.value_namespace = name_space;
        cipsectuninsadecompalgo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunOutSaDiffHellmanGrp")
    {
        cipsectunoutsadiffhellmangrp = value;
        cipsectunoutsadiffhellmangrp.value_namespace = name_space;
        cipsectunoutsadiffhellmangrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunOutSaEncryptAlgo")
    {
        cipsectunoutsaencryptalgo = value;
        cipsectunoutsaencryptalgo.value_namespace = name_space;
        cipsectunoutsaencryptalgo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunOutSaAhAuthAlgo")
    {
        cipsectunoutsaahauthalgo = value;
        cipsectunoutsaahauthalgo.value_namespace = name_space;
        cipsectunoutsaahauthalgo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunOutSaEspAuthAlgo")
    {
        cipsectunoutsaespauthalgo = value;
        cipsectunoutsaespauthalgo.value_namespace = name_space;
        cipsectunoutsaespauthalgo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunOutSaCompAlgo")
    {
        cipsectunoutsacompalgo = value;
        cipsectunoutsacompalgo.value_namespace = name_space;
        cipsectunoutsacompalgo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunInOctets")
    {
        cipsectuninoctets = value;
        cipsectuninoctets.value_namespace = name_space;
        cipsectuninoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHcInOctets")
    {
        cipsectunhcinoctets = value;
        cipsectunhcinoctets.value_namespace = name_space;
        cipsectunhcinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunInOctWraps")
    {
        cipsectuninoctwraps = value;
        cipsectuninoctwraps.value_namespace = name_space;
        cipsectuninoctwraps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunInDecompOctets")
    {
        cipsectunindecompoctets = value;
        cipsectunindecompoctets.value_namespace = name_space;
        cipsectunindecompoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHcInDecompOctets")
    {
        cipsectunhcindecompoctets = value;
        cipsectunhcindecompoctets.value_namespace = name_space;
        cipsectunhcindecompoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunInDecompOctWraps")
    {
        cipsectunindecompoctwraps = value;
        cipsectunindecompoctwraps.value_namespace = name_space;
        cipsectunindecompoctwraps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunInPkts")
    {
        cipsectuninpkts = value;
        cipsectuninpkts.value_namespace = name_space;
        cipsectuninpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunInDropPkts")
    {
        cipsectunindroppkts = value;
        cipsectunindroppkts.value_namespace = name_space;
        cipsectunindroppkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunInReplayDropPkts")
    {
        cipsectuninreplaydroppkts = value;
        cipsectuninreplaydroppkts.value_namespace = name_space;
        cipsectuninreplaydroppkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunInAuths")
    {
        cipsectuninauths = value;
        cipsectuninauths.value_namespace = name_space;
        cipsectuninauths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunInAuthFails")
    {
        cipsectuninauthfails = value;
        cipsectuninauthfails.value_namespace = name_space;
        cipsectuninauthfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunInDecrypts")
    {
        cipsectunindecrypts = value;
        cipsectunindecrypts.value_namespace = name_space;
        cipsectunindecrypts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunInDecryptFails")
    {
        cipsectunindecryptfails = value;
        cipsectunindecryptfails.value_namespace = name_space;
        cipsectunindecryptfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunOutOctets")
    {
        cipsectunoutoctets = value;
        cipsectunoutoctets.value_namespace = name_space;
        cipsectunoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHcOutOctets")
    {
        cipsectunhcoutoctets = value;
        cipsectunhcoutoctets.value_namespace = name_space;
        cipsectunhcoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunOutOctWraps")
    {
        cipsectunoutoctwraps = value;
        cipsectunoutoctwraps.value_namespace = name_space;
        cipsectunoutoctwraps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunOutUncompOctets")
    {
        cipsectunoutuncompoctets = value;
        cipsectunoutuncompoctets.value_namespace = name_space;
        cipsectunoutuncompoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHcOutUncompOctets")
    {
        cipsectunhcoutuncompoctets = value;
        cipsectunhcoutuncompoctets.value_namespace = name_space;
        cipsectunhcoutuncompoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunOutUncompOctWraps")
    {
        cipsectunoutuncompoctwraps = value;
        cipsectunoutuncompoctwraps.value_namespace = name_space;
        cipsectunoutuncompoctwraps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunOutPkts")
    {
        cipsectunoutpkts = value;
        cipsectunoutpkts.value_namespace = name_space;
        cipsectunoutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunOutDropPkts")
    {
        cipsectunoutdroppkts = value;
        cipsectunoutdroppkts.value_namespace = name_space;
        cipsectunoutdroppkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunOutAuths")
    {
        cipsectunoutauths = value;
        cipsectunoutauths.value_namespace = name_space;
        cipsectunoutauths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunOutAuthFails")
    {
        cipsectunoutauthfails = value;
        cipsectunoutauthfails.value_namespace = name_space;
        cipsectunoutauthfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunOutEncrypts")
    {
        cipsectunoutencrypts = value;
        cipsectunoutencrypts.value_namespace = name_space;
        cipsectunoutencrypts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunOutEncryptFails")
    {
        cipsectunoutencryptfails = value;
        cipsectunoutencryptfails.value_namespace = name_space;
        cipsectunoutencryptfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunStatus")
    {
        cipsectunstatus = value;
        cipsectunstatus.value_namespace = name_space;
        cipsectunstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSECFLOWMONITORMIB::Cipsectunneltable::Cipsectunnelentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipSecTunIndex")
    {
        cipsectunindex.yfilter = yfilter;
    }
    if(value_path == "cipSecTunIkeTunnelIndex")
    {
        cipsectuniketunnelindex.yfilter = yfilter;
    }
    if(value_path == "cipSecTunIkeTunnelAlive")
    {
        cipsectuniketunnelalive.yfilter = yfilter;
    }
    if(value_path == "cipSecTunLocalAddr")
    {
        cipsectunlocaladdr.yfilter = yfilter;
    }
    if(value_path == "cipSecTunRemoteAddr")
    {
        cipsectunremoteaddr.yfilter = yfilter;
    }
    if(value_path == "cipSecTunKeyType")
    {
        cipsectunkeytype.yfilter = yfilter;
    }
    if(value_path == "cipSecTunEncapMode")
    {
        cipsectunencapmode.yfilter = yfilter;
    }
    if(value_path == "cipSecTunLifeSize")
    {
        cipsectunlifesize.yfilter = yfilter;
    }
    if(value_path == "cipSecTunLifeTime")
    {
        cipsectunlifetime.yfilter = yfilter;
    }
    if(value_path == "cipSecTunActiveTime")
    {
        cipsectunactivetime.yfilter = yfilter;
    }
    if(value_path == "cipSecTunSaLifeSizeThreshold")
    {
        cipsectunsalifesizethreshold.yfilter = yfilter;
    }
    if(value_path == "cipSecTunSaLifeTimeThreshold")
    {
        cipsectunsalifetimethreshold.yfilter = yfilter;
    }
    if(value_path == "cipSecTunTotalRefreshes")
    {
        cipsectuntotalrefreshes.yfilter = yfilter;
    }
    if(value_path == "cipSecTunExpiredSaInstances")
    {
        cipsectunexpiredsainstances.yfilter = yfilter;
    }
    if(value_path == "cipSecTunCurrentSaInstances")
    {
        cipsectuncurrentsainstances.yfilter = yfilter;
    }
    if(value_path == "cipSecTunInSaDiffHellmanGrp")
    {
        cipsectuninsadiffhellmangrp.yfilter = yfilter;
    }
    if(value_path == "cipSecTunInSaEncryptAlgo")
    {
        cipsectuninsaencryptalgo.yfilter = yfilter;
    }
    if(value_path == "cipSecTunInSaAhAuthAlgo")
    {
        cipsectuninsaahauthalgo.yfilter = yfilter;
    }
    if(value_path == "cipSecTunInSaEspAuthAlgo")
    {
        cipsectuninsaespauthalgo.yfilter = yfilter;
    }
    if(value_path == "cipSecTunInSaDecompAlgo")
    {
        cipsectuninsadecompalgo.yfilter = yfilter;
    }
    if(value_path == "cipSecTunOutSaDiffHellmanGrp")
    {
        cipsectunoutsadiffhellmangrp.yfilter = yfilter;
    }
    if(value_path == "cipSecTunOutSaEncryptAlgo")
    {
        cipsectunoutsaencryptalgo.yfilter = yfilter;
    }
    if(value_path == "cipSecTunOutSaAhAuthAlgo")
    {
        cipsectunoutsaahauthalgo.yfilter = yfilter;
    }
    if(value_path == "cipSecTunOutSaEspAuthAlgo")
    {
        cipsectunoutsaespauthalgo.yfilter = yfilter;
    }
    if(value_path == "cipSecTunOutSaCompAlgo")
    {
        cipsectunoutsacompalgo.yfilter = yfilter;
    }
    if(value_path == "cipSecTunInOctets")
    {
        cipsectuninoctets.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHcInOctets")
    {
        cipsectunhcinoctets.yfilter = yfilter;
    }
    if(value_path == "cipSecTunInOctWraps")
    {
        cipsectuninoctwraps.yfilter = yfilter;
    }
    if(value_path == "cipSecTunInDecompOctets")
    {
        cipsectunindecompoctets.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHcInDecompOctets")
    {
        cipsectunhcindecompoctets.yfilter = yfilter;
    }
    if(value_path == "cipSecTunInDecompOctWraps")
    {
        cipsectunindecompoctwraps.yfilter = yfilter;
    }
    if(value_path == "cipSecTunInPkts")
    {
        cipsectuninpkts.yfilter = yfilter;
    }
    if(value_path == "cipSecTunInDropPkts")
    {
        cipsectunindroppkts.yfilter = yfilter;
    }
    if(value_path == "cipSecTunInReplayDropPkts")
    {
        cipsectuninreplaydroppkts.yfilter = yfilter;
    }
    if(value_path == "cipSecTunInAuths")
    {
        cipsectuninauths.yfilter = yfilter;
    }
    if(value_path == "cipSecTunInAuthFails")
    {
        cipsectuninauthfails.yfilter = yfilter;
    }
    if(value_path == "cipSecTunInDecrypts")
    {
        cipsectunindecrypts.yfilter = yfilter;
    }
    if(value_path == "cipSecTunInDecryptFails")
    {
        cipsectunindecryptfails.yfilter = yfilter;
    }
    if(value_path == "cipSecTunOutOctets")
    {
        cipsectunoutoctets.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHcOutOctets")
    {
        cipsectunhcoutoctets.yfilter = yfilter;
    }
    if(value_path == "cipSecTunOutOctWraps")
    {
        cipsectunoutoctwraps.yfilter = yfilter;
    }
    if(value_path == "cipSecTunOutUncompOctets")
    {
        cipsectunoutuncompoctets.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHcOutUncompOctets")
    {
        cipsectunhcoutuncompoctets.yfilter = yfilter;
    }
    if(value_path == "cipSecTunOutUncompOctWraps")
    {
        cipsectunoutuncompoctwraps.yfilter = yfilter;
    }
    if(value_path == "cipSecTunOutPkts")
    {
        cipsectunoutpkts.yfilter = yfilter;
    }
    if(value_path == "cipSecTunOutDropPkts")
    {
        cipsectunoutdroppkts.yfilter = yfilter;
    }
    if(value_path == "cipSecTunOutAuths")
    {
        cipsectunoutauths.yfilter = yfilter;
    }
    if(value_path == "cipSecTunOutAuthFails")
    {
        cipsectunoutauthfails.yfilter = yfilter;
    }
    if(value_path == "cipSecTunOutEncrypts")
    {
        cipsectunoutencrypts.yfilter = yfilter;
    }
    if(value_path == "cipSecTunOutEncryptFails")
    {
        cipsectunoutencryptfails.yfilter = yfilter;
    }
    if(value_path == "cipSecTunStatus")
    {
        cipsectunstatus.yfilter = yfilter;
    }
}

bool CISCOIPSECFLOWMONITORMIB::Cipsectunneltable::Cipsectunnelentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipSecTunIndex" || name == "cipSecTunIkeTunnelIndex" || name == "cipSecTunIkeTunnelAlive" || name == "cipSecTunLocalAddr" || name == "cipSecTunRemoteAddr" || name == "cipSecTunKeyType" || name == "cipSecTunEncapMode" || name == "cipSecTunLifeSize" || name == "cipSecTunLifeTime" || name == "cipSecTunActiveTime" || name == "cipSecTunSaLifeSizeThreshold" || name == "cipSecTunSaLifeTimeThreshold" || name == "cipSecTunTotalRefreshes" || name == "cipSecTunExpiredSaInstances" || name == "cipSecTunCurrentSaInstances" || name == "cipSecTunInSaDiffHellmanGrp" || name == "cipSecTunInSaEncryptAlgo" || name == "cipSecTunInSaAhAuthAlgo" || name == "cipSecTunInSaEspAuthAlgo" || name == "cipSecTunInSaDecompAlgo" || name == "cipSecTunOutSaDiffHellmanGrp" || name == "cipSecTunOutSaEncryptAlgo" || name == "cipSecTunOutSaAhAuthAlgo" || name == "cipSecTunOutSaEspAuthAlgo" || name == "cipSecTunOutSaCompAlgo" || name == "cipSecTunInOctets" || name == "cipSecTunHcInOctets" || name == "cipSecTunInOctWraps" || name == "cipSecTunInDecompOctets" || name == "cipSecTunHcInDecompOctets" || name == "cipSecTunInDecompOctWraps" || name == "cipSecTunInPkts" || name == "cipSecTunInDropPkts" || name == "cipSecTunInReplayDropPkts" || name == "cipSecTunInAuths" || name == "cipSecTunInAuthFails" || name == "cipSecTunInDecrypts" || name == "cipSecTunInDecryptFails" || name == "cipSecTunOutOctets" || name == "cipSecTunHcOutOctets" || name == "cipSecTunOutOctWraps" || name == "cipSecTunOutUncompOctets" || name == "cipSecTunHcOutUncompOctets" || name == "cipSecTunOutUncompOctWraps" || name == "cipSecTunOutPkts" || name == "cipSecTunOutDropPkts" || name == "cipSecTunOutAuths" || name == "cipSecTunOutAuthFails" || name == "cipSecTunOutEncrypts" || name == "cipSecTunOutEncryptFails" || name == "cipSecTunStatus")
        return true;
    return false;
}

CISCOIPSECFLOWMONITORMIB::Cipsecendpttable::Cipsecendpttable()
{

    yang_name = "cipSecEndPtTable"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSECFLOWMONITORMIB::Cipsecendpttable::~Cipsecendpttable()
{
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecendpttable::has_data() const
{
    for (std::size_t index=0; index<cipsecendptentry.size(); index++)
    {
        if(cipsecendptentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecendpttable::has_operation() const
{
    for (std::size_t index=0; index<cipsecendptentry.size(); index++)
    {
        if(cipsecendptentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsecendpttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsecendpttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecEndPtTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECFLOWMONITORMIB::Cipsecendpttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECFLOWMONITORMIB::Cipsecendpttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipSecEndPtEntry")
    {
        auto c = std::make_shared<CISCOIPSECFLOWMONITORMIB::Cipsecendpttable::Cipsecendptentry>();
        c->parent = this;
        cipsecendptentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECFLOWMONITORMIB::Cipsecendpttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cipsecendptentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIPSECFLOWMONITORMIB::Cipsecendpttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPSECFLOWMONITORMIB::Cipsecendpttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecendpttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipSecEndPtEntry")
        return true;
    return false;
}

CISCOIPSECFLOWMONITORMIB::Cipsecendpttable::Cipsecendptentry::Cipsecendptentry()
    :
    cipsectunindex{YType::str, "cipSecTunIndex"},
    cipsecendptindex{YType::int32, "cipSecEndPtIndex"},
    cipsecendptlocalname{YType::str, "cipSecEndPtLocalName"},
    cipsecendptlocaltype{YType::enumeration, "cipSecEndPtLocalType"},
    cipsecendptlocaladdr1{YType::str, "cipSecEndPtLocalAddr1"},
    cipsecendptlocaladdr2{YType::str, "cipSecEndPtLocalAddr2"},
    cipsecendptlocalprotocol{YType::int32, "cipSecEndPtLocalProtocol"},
    cipsecendptlocalport{YType::int32, "cipSecEndPtLocalPort"},
    cipsecendptremotename{YType::str, "cipSecEndPtRemoteName"},
    cipsecendptremotetype{YType::enumeration, "cipSecEndPtRemoteType"},
    cipsecendptremoteaddr1{YType::str, "cipSecEndPtRemoteAddr1"},
    cipsecendptremoteaddr2{YType::str, "cipSecEndPtRemoteAddr2"},
    cipsecendptremoteprotocol{YType::int32, "cipSecEndPtRemoteProtocol"},
    cipsecendptremoteport{YType::int32, "cipSecEndPtRemotePort"}
{

    yang_name = "cipSecEndPtEntry"; yang_parent_name = "cipSecEndPtTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSECFLOWMONITORMIB::Cipsecendpttable::Cipsecendptentry::~Cipsecendptentry()
{
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecendpttable::Cipsecendptentry::has_data() const
{
    return cipsectunindex.is_set
	|| cipsecendptindex.is_set
	|| cipsecendptlocalname.is_set
	|| cipsecendptlocaltype.is_set
	|| cipsecendptlocaladdr1.is_set
	|| cipsecendptlocaladdr2.is_set
	|| cipsecendptlocalprotocol.is_set
	|| cipsecendptlocalport.is_set
	|| cipsecendptremotename.is_set
	|| cipsecendptremotetype.is_set
	|| cipsecendptremoteaddr1.is_set
	|| cipsecendptremoteaddr2.is_set
	|| cipsecendptremoteprotocol.is_set
	|| cipsecendptremoteport.is_set;
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecendpttable::Cipsecendptentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipsectunindex.yfilter)
	|| ydk::is_set(cipsecendptindex.yfilter)
	|| ydk::is_set(cipsecendptlocalname.yfilter)
	|| ydk::is_set(cipsecendptlocaltype.yfilter)
	|| ydk::is_set(cipsecendptlocaladdr1.yfilter)
	|| ydk::is_set(cipsecendptlocaladdr2.yfilter)
	|| ydk::is_set(cipsecendptlocalprotocol.yfilter)
	|| ydk::is_set(cipsecendptlocalport.yfilter)
	|| ydk::is_set(cipsecendptremotename.yfilter)
	|| ydk::is_set(cipsecendptremotetype.yfilter)
	|| ydk::is_set(cipsecendptremoteaddr1.yfilter)
	|| ydk::is_set(cipsecendptremoteaddr2.yfilter)
	|| ydk::is_set(cipsecendptremoteprotocol.yfilter)
	|| ydk::is_set(cipsecendptremoteport.yfilter);
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsecendpttable::Cipsecendptentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/cipSecEndPtTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsecendpttable::Cipsecendptentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecEndPtEntry" <<"[cipSecTunIndex='" <<cipsectunindex <<"']" <<"[cipSecEndPtIndex='" <<cipsecendptindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECFLOWMONITORMIB::Cipsecendpttable::Cipsecendptentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsectunindex.is_set || is_set(cipsectunindex.yfilter)) leaf_name_data.push_back(cipsectunindex.get_name_leafdata());
    if (cipsecendptindex.is_set || is_set(cipsecendptindex.yfilter)) leaf_name_data.push_back(cipsecendptindex.get_name_leafdata());
    if (cipsecendptlocalname.is_set || is_set(cipsecendptlocalname.yfilter)) leaf_name_data.push_back(cipsecendptlocalname.get_name_leafdata());
    if (cipsecendptlocaltype.is_set || is_set(cipsecendptlocaltype.yfilter)) leaf_name_data.push_back(cipsecendptlocaltype.get_name_leafdata());
    if (cipsecendptlocaladdr1.is_set || is_set(cipsecendptlocaladdr1.yfilter)) leaf_name_data.push_back(cipsecendptlocaladdr1.get_name_leafdata());
    if (cipsecendptlocaladdr2.is_set || is_set(cipsecendptlocaladdr2.yfilter)) leaf_name_data.push_back(cipsecendptlocaladdr2.get_name_leafdata());
    if (cipsecendptlocalprotocol.is_set || is_set(cipsecendptlocalprotocol.yfilter)) leaf_name_data.push_back(cipsecendptlocalprotocol.get_name_leafdata());
    if (cipsecendptlocalport.is_set || is_set(cipsecendptlocalport.yfilter)) leaf_name_data.push_back(cipsecendptlocalport.get_name_leafdata());
    if (cipsecendptremotename.is_set || is_set(cipsecendptremotename.yfilter)) leaf_name_data.push_back(cipsecendptremotename.get_name_leafdata());
    if (cipsecendptremotetype.is_set || is_set(cipsecendptremotetype.yfilter)) leaf_name_data.push_back(cipsecendptremotetype.get_name_leafdata());
    if (cipsecendptremoteaddr1.is_set || is_set(cipsecendptremoteaddr1.yfilter)) leaf_name_data.push_back(cipsecendptremoteaddr1.get_name_leafdata());
    if (cipsecendptremoteaddr2.is_set || is_set(cipsecendptremoteaddr2.yfilter)) leaf_name_data.push_back(cipsecendptremoteaddr2.get_name_leafdata());
    if (cipsecendptremoteprotocol.is_set || is_set(cipsecendptremoteprotocol.yfilter)) leaf_name_data.push_back(cipsecendptremoteprotocol.get_name_leafdata());
    if (cipsecendptremoteport.is_set || is_set(cipsecendptremoteport.yfilter)) leaf_name_data.push_back(cipsecendptremoteport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECFLOWMONITORMIB::Cipsecendpttable::Cipsecendptentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECFLOWMONITORMIB::Cipsecendpttable::Cipsecendptentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPSECFLOWMONITORMIB::Cipsecendpttable::Cipsecendptentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipSecTunIndex")
    {
        cipsectunindex = value;
        cipsectunindex.value_namespace = name_space;
        cipsectunindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecEndPtIndex")
    {
        cipsecendptindex = value;
        cipsecendptindex.value_namespace = name_space;
        cipsecendptindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecEndPtLocalName")
    {
        cipsecendptlocalname = value;
        cipsecendptlocalname.value_namespace = name_space;
        cipsecendptlocalname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecEndPtLocalType")
    {
        cipsecendptlocaltype = value;
        cipsecendptlocaltype.value_namespace = name_space;
        cipsecendptlocaltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecEndPtLocalAddr1")
    {
        cipsecendptlocaladdr1 = value;
        cipsecendptlocaladdr1.value_namespace = name_space;
        cipsecendptlocaladdr1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecEndPtLocalAddr2")
    {
        cipsecendptlocaladdr2 = value;
        cipsecendptlocaladdr2.value_namespace = name_space;
        cipsecendptlocaladdr2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecEndPtLocalProtocol")
    {
        cipsecendptlocalprotocol = value;
        cipsecendptlocalprotocol.value_namespace = name_space;
        cipsecendptlocalprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecEndPtLocalPort")
    {
        cipsecendptlocalport = value;
        cipsecendptlocalport.value_namespace = name_space;
        cipsecendptlocalport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecEndPtRemoteName")
    {
        cipsecendptremotename = value;
        cipsecendptremotename.value_namespace = name_space;
        cipsecendptremotename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecEndPtRemoteType")
    {
        cipsecendptremotetype = value;
        cipsecendptremotetype.value_namespace = name_space;
        cipsecendptremotetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecEndPtRemoteAddr1")
    {
        cipsecendptremoteaddr1 = value;
        cipsecendptremoteaddr1.value_namespace = name_space;
        cipsecendptremoteaddr1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecEndPtRemoteAddr2")
    {
        cipsecendptremoteaddr2 = value;
        cipsecendptremoteaddr2.value_namespace = name_space;
        cipsecendptremoteaddr2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecEndPtRemoteProtocol")
    {
        cipsecendptremoteprotocol = value;
        cipsecendptremoteprotocol.value_namespace = name_space;
        cipsecendptremoteprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecEndPtRemotePort")
    {
        cipsecendptremoteport = value;
        cipsecendptremoteport.value_namespace = name_space;
        cipsecendptremoteport.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSECFLOWMONITORMIB::Cipsecendpttable::Cipsecendptentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipSecTunIndex")
    {
        cipsectunindex.yfilter = yfilter;
    }
    if(value_path == "cipSecEndPtIndex")
    {
        cipsecendptindex.yfilter = yfilter;
    }
    if(value_path == "cipSecEndPtLocalName")
    {
        cipsecendptlocalname.yfilter = yfilter;
    }
    if(value_path == "cipSecEndPtLocalType")
    {
        cipsecendptlocaltype.yfilter = yfilter;
    }
    if(value_path == "cipSecEndPtLocalAddr1")
    {
        cipsecendptlocaladdr1.yfilter = yfilter;
    }
    if(value_path == "cipSecEndPtLocalAddr2")
    {
        cipsecendptlocaladdr2.yfilter = yfilter;
    }
    if(value_path == "cipSecEndPtLocalProtocol")
    {
        cipsecendptlocalprotocol.yfilter = yfilter;
    }
    if(value_path == "cipSecEndPtLocalPort")
    {
        cipsecendptlocalport.yfilter = yfilter;
    }
    if(value_path == "cipSecEndPtRemoteName")
    {
        cipsecendptremotename.yfilter = yfilter;
    }
    if(value_path == "cipSecEndPtRemoteType")
    {
        cipsecendptremotetype.yfilter = yfilter;
    }
    if(value_path == "cipSecEndPtRemoteAddr1")
    {
        cipsecendptremoteaddr1.yfilter = yfilter;
    }
    if(value_path == "cipSecEndPtRemoteAddr2")
    {
        cipsecendptremoteaddr2.yfilter = yfilter;
    }
    if(value_path == "cipSecEndPtRemoteProtocol")
    {
        cipsecendptremoteprotocol.yfilter = yfilter;
    }
    if(value_path == "cipSecEndPtRemotePort")
    {
        cipsecendptremoteport.yfilter = yfilter;
    }
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecendpttable::Cipsecendptentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipSecTunIndex" || name == "cipSecEndPtIndex" || name == "cipSecEndPtLocalName" || name == "cipSecEndPtLocalType" || name == "cipSecEndPtLocalAddr1" || name == "cipSecEndPtLocalAddr2" || name == "cipSecEndPtLocalProtocol" || name == "cipSecEndPtLocalPort" || name == "cipSecEndPtRemoteName" || name == "cipSecEndPtRemoteType" || name == "cipSecEndPtRemoteAddr1" || name == "cipSecEndPtRemoteAddr2" || name == "cipSecEndPtRemoteProtocol" || name == "cipSecEndPtRemotePort")
        return true;
    return false;
}

CISCOIPSECFLOWMONITORMIB::Cipsecspitable::Cipsecspitable()
{

    yang_name = "cipSecSpiTable"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSECFLOWMONITORMIB::Cipsecspitable::~Cipsecspitable()
{
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecspitable::has_data() const
{
    for (std::size_t index=0; index<cipsecspientry.size(); index++)
    {
        if(cipsecspientry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecspitable::has_operation() const
{
    for (std::size_t index=0; index<cipsecspientry.size(); index++)
    {
        if(cipsecspientry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsecspitable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsecspitable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecSpiTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECFLOWMONITORMIB::Cipsecspitable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECFLOWMONITORMIB::Cipsecspitable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipSecSpiEntry")
    {
        auto c = std::make_shared<CISCOIPSECFLOWMONITORMIB::Cipsecspitable::Cipsecspientry>();
        c->parent = this;
        cipsecspientry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECFLOWMONITORMIB::Cipsecspitable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cipsecspientry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIPSECFLOWMONITORMIB::Cipsecspitable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPSECFLOWMONITORMIB::Cipsecspitable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecspitable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipSecSpiEntry")
        return true;
    return false;
}

CISCOIPSECFLOWMONITORMIB::Cipsecspitable::Cipsecspientry::Cipsecspientry()
    :
    cipsectunindex{YType::str, "cipSecTunIndex"},
    cipsecspiindex{YType::int32, "cipSecSpiIndex"},
    cipsecspidirection{YType::enumeration, "cipSecSpiDirection"},
    cipsecspivalue{YType::uint32, "cipSecSpiValue"},
    cipsecspiprotocol{YType::enumeration, "cipSecSpiProtocol"},
    cipsecspistatus{YType::enumeration, "cipSecSpiStatus"}
{

    yang_name = "cipSecSpiEntry"; yang_parent_name = "cipSecSpiTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSECFLOWMONITORMIB::Cipsecspitable::Cipsecspientry::~Cipsecspientry()
{
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecspitable::Cipsecspientry::has_data() const
{
    return cipsectunindex.is_set
	|| cipsecspiindex.is_set
	|| cipsecspidirection.is_set
	|| cipsecspivalue.is_set
	|| cipsecspiprotocol.is_set
	|| cipsecspistatus.is_set;
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecspitable::Cipsecspientry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipsectunindex.yfilter)
	|| ydk::is_set(cipsecspiindex.yfilter)
	|| ydk::is_set(cipsecspidirection.yfilter)
	|| ydk::is_set(cipsecspivalue.yfilter)
	|| ydk::is_set(cipsecspiprotocol.yfilter)
	|| ydk::is_set(cipsecspistatus.yfilter);
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsecspitable::Cipsecspientry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/cipSecSpiTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsecspitable::Cipsecspientry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecSpiEntry" <<"[cipSecTunIndex='" <<cipsectunindex <<"']" <<"[cipSecSpiIndex='" <<cipsecspiindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECFLOWMONITORMIB::Cipsecspitable::Cipsecspientry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsectunindex.is_set || is_set(cipsectunindex.yfilter)) leaf_name_data.push_back(cipsectunindex.get_name_leafdata());
    if (cipsecspiindex.is_set || is_set(cipsecspiindex.yfilter)) leaf_name_data.push_back(cipsecspiindex.get_name_leafdata());
    if (cipsecspidirection.is_set || is_set(cipsecspidirection.yfilter)) leaf_name_data.push_back(cipsecspidirection.get_name_leafdata());
    if (cipsecspivalue.is_set || is_set(cipsecspivalue.yfilter)) leaf_name_data.push_back(cipsecspivalue.get_name_leafdata());
    if (cipsecspiprotocol.is_set || is_set(cipsecspiprotocol.yfilter)) leaf_name_data.push_back(cipsecspiprotocol.get_name_leafdata());
    if (cipsecspistatus.is_set || is_set(cipsecspistatus.yfilter)) leaf_name_data.push_back(cipsecspistatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECFLOWMONITORMIB::Cipsecspitable::Cipsecspientry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECFLOWMONITORMIB::Cipsecspitable::Cipsecspientry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPSECFLOWMONITORMIB::Cipsecspitable::Cipsecspientry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipSecTunIndex")
    {
        cipsectunindex = value;
        cipsectunindex.value_namespace = name_space;
        cipsectunindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecSpiIndex")
    {
        cipsecspiindex = value;
        cipsecspiindex.value_namespace = name_space;
        cipsecspiindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecSpiDirection")
    {
        cipsecspidirection = value;
        cipsecspidirection.value_namespace = name_space;
        cipsecspidirection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecSpiValue")
    {
        cipsecspivalue = value;
        cipsecspivalue.value_namespace = name_space;
        cipsecspivalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecSpiProtocol")
    {
        cipsecspiprotocol = value;
        cipsecspiprotocol.value_namespace = name_space;
        cipsecspiprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecSpiStatus")
    {
        cipsecspistatus = value;
        cipsecspistatus.value_namespace = name_space;
        cipsecspistatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSECFLOWMONITORMIB::Cipsecspitable::Cipsecspientry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipSecTunIndex")
    {
        cipsectunindex.yfilter = yfilter;
    }
    if(value_path == "cipSecSpiIndex")
    {
        cipsecspiindex.yfilter = yfilter;
    }
    if(value_path == "cipSecSpiDirection")
    {
        cipsecspidirection.yfilter = yfilter;
    }
    if(value_path == "cipSecSpiValue")
    {
        cipsecspivalue.yfilter = yfilter;
    }
    if(value_path == "cipSecSpiProtocol")
    {
        cipsecspiprotocol.yfilter = yfilter;
    }
    if(value_path == "cipSecSpiStatus")
    {
        cipsecspistatus.yfilter = yfilter;
    }
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecspitable::Cipsecspientry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipSecTunIndex" || name == "cipSecSpiIndex" || name == "cipSecSpiDirection" || name == "cipSecSpiValue" || name == "cipSecSpiProtocol" || name == "cipSecSpiStatus")
        return true;
    return false;
}

CISCOIPSECFLOWMONITORMIB::Cipsecphase2Gwstatstable::Cipsecphase2Gwstatstable()
{

    yang_name = "cipSecPhase2GWStatsTable"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSECFLOWMONITORMIB::Cipsecphase2Gwstatstable::~Cipsecphase2Gwstatstable()
{
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecphase2Gwstatstable::has_data() const
{
    for (std::size_t index=0; index<cipsecphase2gwstatsentry.size(); index++)
    {
        if(cipsecphase2gwstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecphase2Gwstatstable::has_operation() const
{
    for (std::size_t index=0; index<cipsecphase2gwstatsentry.size(); index++)
    {
        if(cipsecphase2gwstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsecphase2Gwstatstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsecphase2Gwstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecPhase2GWStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECFLOWMONITORMIB::Cipsecphase2Gwstatstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECFLOWMONITORMIB::Cipsecphase2Gwstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipSecPhase2GWStatsEntry")
    {
        auto c = std::make_shared<CISCOIPSECFLOWMONITORMIB::Cipsecphase2Gwstatstable::Cipsecphase2Gwstatsentry>();
        c->parent = this;
        cipsecphase2gwstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECFLOWMONITORMIB::Cipsecphase2Gwstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cipsecphase2gwstatsentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIPSECFLOWMONITORMIB::Cipsecphase2Gwstatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPSECFLOWMONITORMIB::Cipsecphase2Gwstatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecphase2Gwstatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipSecPhase2GWStatsEntry")
        return true;
    return false;
}

CISCOIPSECFLOWMONITORMIB::Cipsecphase2Gwstatstable::Cipsecphase2Gwstatsentry::Cipsecphase2Gwstatsentry()
    :
    cmgwindex{YType::str, "cmgwIndex"},
    cipsecphase2gwactivetunnels{YType::uint32, "cipSecPhase2GWActiveTunnels"},
    cipsecphase2gwprevioustunnels{YType::uint32, "cipSecPhase2GWPreviousTunnels"},
    cipsecphase2gwinoctets{YType::uint32, "cipSecPhase2GWInOctets"},
    cipsecphase2gwinoctwraps{YType::uint32, "cipSecPhase2GWInOctWraps"},
    cipsecphase2gwindecompoctets{YType::uint32, "cipSecPhase2GWInDecompOctets"},
    cipsecphase2gwindecompoctwraps{YType::uint32, "cipSecPhase2GWInDecompOctWraps"},
    cipsecphase2gwinpkts{YType::uint32, "cipSecPhase2GWInPkts"},
    cipsecphase2gwindrops{YType::uint32, "cipSecPhase2GWInDrops"},
    cipsecphase2gwinreplaydrops{YType::uint32, "cipSecPhase2GWInReplayDrops"},
    cipsecphase2gwinauths{YType::uint32, "cipSecPhase2GWInAuths"},
    cipsecphase2gwinauthfails{YType::uint32, "cipSecPhase2GWInAuthFails"},
    cipsecphase2gwindecrypts{YType::uint32, "cipSecPhase2GWInDecrypts"},
    cipsecphase2gwindecryptfails{YType::uint32, "cipSecPhase2GWInDecryptFails"},
    cipsecphase2gwoutoctets{YType::uint32, "cipSecPhase2GWOutOctets"},
    cipsecphase2gwoutoctwraps{YType::uint32, "cipSecPhase2GWOutOctWraps"},
    cipsecphase2gwoutuncompoctets{YType::uint32, "cipSecPhase2GWOutUncompOctets"},
    cipsecphase2gwoutuncompoctwraps{YType::uint32, "cipSecPhase2GWOutUncompOctWraps"},
    cipsecphase2gwoutpkts{YType::uint32, "cipSecPhase2GWOutPkts"},
    cipsecphase2gwoutdrops{YType::uint32, "cipSecPhase2GWOutDrops"},
    cipsecphase2gwoutauths{YType::uint32, "cipSecPhase2GWOutAuths"},
    cipsecphase2gwoutauthfails{YType::uint32, "cipSecPhase2GWOutAuthFails"},
    cipsecphase2gwoutencrypts{YType::uint32, "cipSecPhase2GWOutEncrypts"},
    cipsecphase2gwoutencryptfails{YType::uint32, "cipSecPhase2GWOutEncryptFails"},
    cipsecphase2gwprotocolusefails{YType::uint32, "cipSecPhase2GWProtocolUseFails"},
    cipsecphase2gwnosafails{YType::uint32, "cipSecPhase2GWNoSaFails"},
    cipsecphase2gwsyscapfails{YType::uint32, "cipSecPhase2GWSysCapFails"}
{

    yang_name = "cipSecPhase2GWStatsEntry"; yang_parent_name = "cipSecPhase2GWStatsTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSECFLOWMONITORMIB::Cipsecphase2Gwstatstable::Cipsecphase2Gwstatsentry::~Cipsecphase2Gwstatsentry()
{
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecphase2Gwstatstable::Cipsecphase2Gwstatsentry::has_data() const
{
    return cmgwindex.is_set
	|| cipsecphase2gwactivetunnels.is_set
	|| cipsecphase2gwprevioustunnels.is_set
	|| cipsecphase2gwinoctets.is_set
	|| cipsecphase2gwinoctwraps.is_set
	|| cipsecphase2gwindecompoctets.is_set
	|| cipsecphase2gwindecompoctwraps.is_set
	|| cipsecphase2gwinpkts.is_set
	|| cipsecphase2gwindrops.is_set
	|| cipsecphase2gwinreplaydrops.is_set
	|| cipsecphase2gwinauths.is_set
	|| cipsecphase2gwinauthfails.is_set
	|| cipsecphase2gwindecrypts.is_set
	|| cipsecphase2gwindecryptfails.is_set
	|| cipsecphase2gwoutoctets.is_set
	|| cipsecphase2gwoutoctwraps.is_set
	|| cipsecphase2gwoutuncompoctets.is_set
	|| cipsecphase2gwoutuncompoctwraps.is_set
	|| cipsecphase2gwoutpkts.is_set
	|| cipsecphase2gwoutdrops.is_set
	|| cipsecphase2gwoutauths.is_set
	|| cipsecphase2gwoutauthfails.is_set
	|| cipsecphase2gwoutencrypts.is_set
	|| cipsecphase2gwoutencryptfails.is_set
	|| cipsecphase2gwprotocolusefails.is_set
	|| cipsecphase2gwnosafails.is_set
	|| cipsecphase2gwsyscapfails.is_set;
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecphase2Gwstatstable::Cipsecphase2Gwstatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmgwindex.yfilter)
	|| ydk::is_set(cipsecphase2gwactivetunnels.yfilter)
	|| ydk::is_set(cipsecphase2gwprevioustunnels.yfilter)
	|| ydk::is_set(cipsecphase2gwinoctets.yfilter)
	|| ydk::is_set(cipsecphase2gwinoctwraps.yfilter)
	|| ydk::is_set(cipsecphase2gwindecompoctets.yfilter)
	|| ydk::is_set(cipsecphase2gwindecompoctwraps.yfilter)
	|| ydk::is_set(cipsecphase2gwinpkts.yfilter)
	|| ydk::is_set(cipsecphase2gwindrops.yfilter)
	|| ydk::is_set(cipsecphase2gwinreplaydrops.yfilter)
	|| ydk::is_set(cipsecphase2gwinauths.yfilter)
	|| ydk::is_set(cipsecphase2gwinauthfails.yfilter)
	|| ydk::is_set(cipsecphase2gwindecrypts.yfilter)
	|| ydk::is_set(cipsecphase2gwindecryptfails.yfilter)
	|| ydk::is_set(cipsecphase2gwoutoctets.yfilter)
	|| ydk::is_set(cipsecphase2gwoutoctwraps.yfilter)
	|| ydk::is_set(cipsecphase2gwoutuncompoctets.yfilter)
	|| ydk::is_set(cipsecphase2gwoutuncompoctwraps.yfilter)
	|| ydk::is_set(cipsecphase2gwoutpkts.yfilter)
	|| ydk::is_set(cipsecphase2gwoutdrops.yfilter)
	|| ydk::is_set(cipsecphase2gwoutauths.yfilter)
	|| ydk::is_set(cipsecphase2gwoutauthfails.yfilter)
	|| ydk::is_set(cipsecphase2gwoutencrypts.yfilter)
	|| ydk::is_set(cipsecphase2gwoutencryptfails.yfilter)
	|| ydk::is_set(cipsecphase2gwprotocolusefails.yfilter)
	|| ydk::is_set(cipsecphase2gwnosafails.yfilter)
	|| ydk::is_set(cipsecphase2gwsyscapfails.yfilter);
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsecphase2Gwstatstable::Cipsecphase2Gwstatsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/cipSecPhase2GWStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsecphase2Gwstatstable::Cipsecphase2Gwstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecPhase2GWStatsEntry" <<"[cmgwIndex='" <<cmgwindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECFLOWMONITORMIB::Cipsecphase2Gwstatstable::Cipsecphase2Gwstatsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmgwindex.is_set || is_set(cmgwindex.yfilter)) leaf_name_data.push_back(cmgwindex.get_name_leafdata());
    if (cipsecphase2gwactivetunnels.is_set || is_set(cipsecphase2gwactivetunnels.yfilter)) leaf_name_data.push_back(cipsecphase2gwactivetunnels.get_name_leafdata());
    if (cipsecphase2gwprevioustunnels.is_set || is_set(cipsecphase2gwprevioustunnels.yfilter)) leaf_name_data.push_back(cipsecphase2gwprevioustunnels.get_name_leafdata());
    if (cipsecphase2gwinoctets.is_set || is_set(cipsecphase2gwinoctets.yfilter)) leaf_name_data.push_back(cipsecphase2gwinoctets.get_name_leafdata());
    if (cipsecphase2gwinoctwraps.is_set || is_set(cipsecphase2gwinoctwraps.yfilter)) leaf_name_data.push_back(cipsecphase2gwinoctwraps.get_name_leafdata());
    if (cipsecphase2gwindecompoctets.is_set || is_set(cipsecphase2gwindecompoctets.yfilter)) leaf_name_data.push_back(cipsecphase2gwindecompoctets.get_name_leafdata());
    if (cipsecphase2gwindecompoctwraps.is_set || is_set(cipsecphase2gwindecompoctwraps.yfilter)) leaf_name_data.push_back(cipsecphase2gwindecompoctwraps.get_name_leafdata());
    if (cipsecphase2gwinpkts.is_set || is_set(cipsecphase2gwinpkts.yfilter)) leaf_name_data.push_back(cipsecphase2gwinpkts.get_name_leafdata());
    if (cipsecphase2gwindrops.is_set || is_set(cipsecphase2gwindrops.yfilter)) leaf_name_data.push_back(cipsecphase2gwindrops.get_name_leafdata());
    if (cipsecphase2gwinreplaydrops.is_set || is_set(cipsecphase2gwinreplaydrops.yfilter)) leaf_name_data.push_back(cipsecphase2gwinreplaydrops.get_name_leafdata());
    if (cipsecphase2gwinauths.is_set || is_set(cipsecphase2gwinauths.yfilter)) leaf_name_data.push_back(cipsecphase2gwinauths.get_name_leafdata());
    if (cipsecphase2gwinauthfails.is_set || is_set(cipsecphase2gwinauthfails.yfilter)) leaf_name_data.push_back(cipsecphase2gwinauthfails.get_name_leafdata());
    if (cipsecphase2gwindecrypts.is_set || is_set(cipsecphase2gwindecrypts.yfilter)) leaf_name_data.push_back(cipsecphase2gwindecrypts.get_name_leafdata());
    if (cipsecphase2gwindecryptfails.is_set || is_set(cipsecphase2gwindecryptfails.yfilter)) leaf_name_data.push_back(cipsecphase2gwindecryptfails.get_name_leafdata());
    if (cipsecphase2gwoutoctets.is_set || is_set(cipsecphase2gwoutoctets.yfilter)) leaf_name_data.push_back(cipsecphase2gwoutoctets.get_name_leafdata());
    if (cipsecphase2gwoutoctwraps.is_set || is_set(cipsecphase2gwoutoctwraps.yfilter)) leaf_name_data.push_back(cipsecphase2gwoutoctwraps.get_name_leafdata());
    if (cipsecphase2gwoutuncompoctets.is_set || is_set(cipsecphase2gwoutuncompoctets.yfilter)) leaf_name_data.push_back(cipsecphase2gwoutuncompoctets.get_name_leafdata());
    if (cipsecphase2gwoutuncompoctwraps.is_set || is_set(cipsecphase2gwoutuncompoctwraps.yfilter)) leaf_name_data.push_back(cipsecphase2gwoutuncompoctwraps.get_name_leafdata());
    if (cipsecphase2gwoutpkts.is_set || is_set(cipsecphase2gwoutpkts.yfilter)) leaf_name_data.push_back(cipsecphase2gwoutpkts.get_name_leafdata());
    if (cipsecphase2gwoutdrops.is_set || is_set(cipsecphase2gwoutdrops.yfilter)) leaf_name_data.push_back(cipsecphase2gwoutdrops.get_name_leafdata());
    if (cipsecphase2gwoutauths.is_set || is_set(cipsecphase2gwoutauths.yfilter)) leaf_name_data.push_back(cipsecphase2gwoutauths.get_name_leafdata());
    if (cipsecphase2gwoutauthfails.is_set || is_set(cipsecphase2gwoutauthfails.yfilter)) leaf_name_data.push_back(cipsecphase2gwoutauthfails.get_name_leafdata());
    if (cipsecphase2gwoutencrypts.is_set || is_set(cipsecphase2gwoutencrypts.yfilter)) leaf_name_data.push_back(cipsecphase2gwoutencrypts.get_name_leafdata());
    if (cipsecphase2gwoutencryptfails.is_set || is_set(cipsecphase2gwoutencryptfails.yfilter)) leaf_name_data.push_back(cipsecphase2gwoutencryptfails.get_name_leafdata());
    if (cipsecphase2gwprotocolusefails.is_set || is_set(cipsecphase2gwprotocolusefails.yfilter)) leaf_name_data.push_back(cipsecphase2gwprotocolusefails.get_name_leafdata());
    if (cipsecphase2gwnosafails.is_set || is_set(cipsecphase2gwnosafails.yfilter)) leaf_name_data.push_back(cipsecphase2gwnosafails.get_name_leafdata());
    if (cipsecphase2gwsyscapfails.is_set || is_set(cipsecphase2gwsyscapfails.yfilter)) leaf_name_data.push_back(cipsecphase2gwsyscapfails.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECFLOWMONITORMIB::Cipsecphase2Gwstatstable::Cipsecphase2Gwstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECFLOWMONITORMIB::Cipsecphase2Gwstatstable::Cipsecphase2Gwstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPSECFLOWMONITORMIB::Cipsecphase2Gwstatstable::Cipsecphase2Gwstatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmgwIndex")
    {
        cmgwindex = value;
        cmgwindex.value_namespace = name_space;
        cmgwindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecPhase2GWActiveTunnels")
    {
        cipsecphase2gwactivetunnels = value;
        cipsecphase2gwactivetunnels.value_namespace = name_space;
        cipsecphase2gwactivetunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecPhase2GWPreviousTunnels")
    {
        cipsecphase2gwprevioustunnels = value;
        cipsecphase2gwprevioustunnels.value_namespace = name_space;
        cipsecphase2gwprevioustunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecPhase2GWInOctets")
    {
        cipsecphase2gwinoctets = value;
        cipsecphase2gwinoctets.value_namespace = name_space;
        cipsecphase2gwinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecPhase2GWInOctWraps")
    {
        cipsecphase2gwinoctwraps = value;
        cipsecphase2gwinoctwraps.value_namespace = name_space;
        cipsecphase2gwinoctwraps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecPhase2GWInDecompOctets")
    {
        cipsecphase2gwindecompoctets = value;
        cipsecphase2gwindecompoctets.value_namespace = name_space;
        cipsecphase2gwindecompoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecPhase2GWInDecompOctWraps")
    {
        cipsecphase2gwindecompoctwraps = value;
        cipsecphase2gwindecompoctwraps.value_namespace = name_space;
        cipsecphase2gwindecompoctwraps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecPhase2GWInPkts")
    {
        cipsecphase2gwinpkts = value;
        cipsecphase2gwinpkts.value_namespace = name_space;
        cipsecphase2gwinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecPhase2GWInDrops")
    {
        cipsecphase2gwindrops = value;
        cipsecphase2gwindrops.value_namespace = name_space;
        cipsecphase2gwindrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecPhase2GWInReplayDrops")
    {
        cipsecphase2gwinreplaydrops = value;
        cipsecphase2gwinreplaydrops.value_namespace = name_space;
        cipsecphase2gwinreplaydrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecPhase2GWInAuths")
    {
        cipsecphase2gwinauths = value;
        cipsecphase2gwinauths.value_namespace = name_space;
        cipsecphase2gwinauths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecPhase2GWInAuthFails")
    {
        cipsecphase2gwinauthfails = value;
        cipsecphase2gwinauthfails.value_namespace = name_space;
        cipsecphase2gwinauthfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecPhase2GWInDecrypts")
    {
        cipsecphase2gwindecrypts = value;
        cipsecphase2gwindecrypts.value_namespace = name_space;
        cipsecphase2gwindecrypts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecPhase2GWInDecryptFails")
    {
        cipsecphase2gwindecryptfails = value;
        cipsecphase2gwindecryptfails.value_namespace = name_space;
        cipsecphase2gwindecryptfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecPhase2GWOutOctets")
    {
        cipsecphase2gwoutoctets = value;
        cipsecphase2gwoutoctets.value_namespace = name_space;
        cipsecphase2gwoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecPhase2GWOutOctWraps")
    {
        cipsecphase2gwoutoctwraps = value;
        cipsecphase2gwoutoctwraps.value_namespace = name_space;
        cipsecphase2gwoutoctwraps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecPhase2GWOutUncompOctets")
    {
        cipsecphase2gwoutuncompoctets = value;
        cipsecphase2gwoutuncompoctets.value_namespace = name_space;
        cipsecphase2gwoutuncompoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecPhase2GWOutUncompOctWraps")
    {
        cipsecphase2gwoutuncompoctwraps = value;
        cipsecphase2gwoutuncompoctwraps.value_namespace = name_space;
        cipsecphase2gwoutuncompoctwraps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecPhase2GWOutPkts")
    {
        cipsecphase2gwoutpkts = value;
        cipsecphase2gwoutpkts.value_namespace = name_space;
        cipsecphase2gwoutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecPhase2GWOutDrops")
    {
        cipsecphase2gwoutdrops = value;
        cipsecphase2gwoutdrops.value_namespace = name_space;
        cipsecphase2gwoutdrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecPhase2GWOutAuths")
    {
        cipsecphase2gwoutauths = value;
        cipsecphase2gwoutauths.value_namespace = name_space;
        cipsecphase2gwoutauths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecPhase2GWOutAuthFails")
    {
        cipsecphase2gwoutauthfails = value;
        cipsecphase2gwoutauthfails.value_namespace = name_space;
        cipsecphase2gwoutauthfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecPhase2GWOutEncrypts")
    {
        cipsecphase2gwoutencrypts = value;
        cipsecphase2gwoutencrypts.value_namespace = name_space;
        cipsecphase2gwoutencrypts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecPhase2GWOutEncryptFails")
    {
        cipsecphase2gwoutencryptfails = value;
        cipsecphase2gwoutencryptfails.value_namespace = name_space;
        cipsecphase2gwoutencryptfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecPhase2GWProtocolUseFails")
    {
        cipsecphase2gwprotocolusefails = value;
        cipsecphase2gwprotocolusefails.value_namespace = name_space;
        cipsecphase2gwprotocolusefails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecPhase2GWNoSaFails")
    {
        cipsecphase2gwnosafails = value;
        cipsecphase2gwnosafails.value_namespace = name_space;
        cipsecphase2gwnosafails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecPhase2GWSysCapFails")
    {
        cipsecphase2gwsyscapfails = value;
        cipsecphase2gwsyscapfails.value_namespace = name_space;
        cipsecphase2gwsyscapfails.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSECFLOWMONITORMIB::Cipsecphase2Gwstatstable::Cipsecphase2Gwstatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmgwIndex")
    {
        cmgwindex.yfilter = yfilter;
    }
    if(value_path == "cipSecPhase2GWActiveTunnels")
    {
        cipsecphase2gwactivetunnels.yfilter = yfilter;
    }
    if(value_path == "cipSecPhase2GWPreviousTunnels")
    {
        cipsecphase2gwprevioustunnels.yfilter = yfilter;
    }
    if(value_path == "cipSecPhase2GWInOctets")
    {
        cipsecphase2gwinoctets.yfilter = yfilter;
    }
    if(value_path == "cipSecPhase2GWInOctWraps")
    {
        cipsecphase2gwinoctwraps.yfilter = yfilter;
    }
    if(value_path == "cipSecPhase2GWInDecompOctets")
    {
        cipsecphase2gwindecompoctets.yfilter = yfilter;
    }
    if(value_path == "cipSecPhase2GWInDecompOctWraps")
    {
        cipsecphase2gwindecompoctwraps.yfilter = yfilter;
    }
    if(value_path == "cipSecPhase2GWInPkts")
    {
        cipsecphase2gwinpkts.yfilter = yfilter;
    }
    if(value_path == "cipSecPhase2GWInDrops")
    {
        cipsecphase2gwindrops.yfilter = yfilter;
    }
    if(value_path == "cipSecPhase2GWInReplayDrops")
    {
        cipsecphase2gwinreplaydrops.yfilter = yfilter;
    }
    if(value_path == "cipSecPhase2GWInAuths")
    {
        cipsecphase2gwinauths.yfilter = yfilter;
    }
    if(value_path == "cipSecPhase2GWInAuthFails")
    {
        cipsecphase2gwinauthfails.yfilter = yfilter;
    }
    if(value_path == "cipSecPhase2GWInDecrypts")
    {
        cipsecphase2gwindecrypts.yfilter = yfilter;
    }
    if(value_path == "cipSecPhase2GWInDecryptFails")
    {
        cipsecphase2gwindecryptfails.yfilter = yfilter;
    }
    if(value_path == "cipSecPhase2GWOutOctets")
    {
        cipsecphase2gwoutoctets.yfilter = yfilter;
    }
    if(value_path == "cipSecPhase2GWOutOctWraps")
    {
        cipsecphase2gwoutoctwraps.yfilter = yfilter;
    }
    if(value_path == "cipSecPhase2GWOutUncompOctets")
    {
        cipsecphase2gwoutuncompoctets.yfilter = yfilter;
    }
    if(value_path == "cipSecPhase2GWOutUncompOctWraps")
    {
        cipsecphase2gwoutuncompoctwraps.yfilter = yfilter;
    }
    if(value_path == "cipSecPhase2GWOutPkts")
    {
        cipsecphase2gwoutpkts.yfilter = yfilter;
    }
    if(value_path == "cipSecPhase2GWOutDrops")
    {
        cipsecphase2gwoutdrops.yfilter = yfilter;
    }
    if(value_path == "cipSecPhase2GWOutAuths")
    {
        cipsecphase2gwoutauths.yfilter = yfilter;
    }
    if(value_path == "cipSecPhase2GWOutAuthFails")
    {
        cipsecphase2gwoutauthfails.yfilter = yfilter;
    }
    if(value_path == "cipSecPhase2GWOutEncrypts")
    {
        cipsecphase2gwoutencrypts.yfilter = yfilter;
    }
    if(value_path == "cipSecPhase2GWOutEncryptFails")
    {
        cipsecphase2gwoutencryptfails.yfilter = yfilter;
    }
    if(value_path == "cipSecPhase2GWProtocolUseFails")
    {
        cipsecphase2gwprotocolusefails.yfilter = yfilter;
    }
    if(value_path == "cipSecPhase2GWNoSaFails")
    {
        cipsecphase2gwnosafails.yfilter = yfilter;
    }
    if(value_path == "cipSecPhase2GWSysCapFails")
    {
        cipsecphase2gwsyscapfails.yfilter = yfilter;
    }
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecphase2Gwstatstable::Cipsecphase2Gwstatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmgwIndex" || name == "cipSecPhase2GWActiveTunnels" || name == "cipSecPhase2GWPreviousTunnels" || name == "cipSecPhase2GWInOctets" || name == "cipSecPhase2GWInOctWraps" || name == "cipSecPhase2GWInDecompOctets" || name == "cipSecPhase2GWInDecompOctWraps" || name == "cipSecPhase2GWInPkts" || name == "cipSecPhase2GWInDrops" || name == "cipSecPhase2GWInReplayDrops" || name == "cipSecPhase2GWInAuths" || name == "cipSecPhase2GWInAuthFails" || name == "cipSecPhase2GWInDecrypts" || name == "cipSecPhase2GWInDecryptFails" || name == "cipSecPhase2GWOutOctets" || name == "cipSecPhase2GWOutOctWraps" || name == "cipSecPhase2GWOutUncompOctets" || name == "cipSecPhase2GWOutUncompOctWraps" || name == "cipSecPhase2GWOutPkts" || name == "cipSecPhase2GWOutDrops" || name == "cipSecPhase2GWOutAuths" || name == "cipSecPhase2GWOutAuthFails" || name == "cipSecPhase2GWOutEncrypts" || name == "cipSecPhase2GWOutEncryptFails" || name == "cipSecPhase2GWProtocolUseFails" || name == "cipSecPhase2GWNoSaFails" || name == "cipSecPhase2GWSysCapFails")
        return true;
    return false;
}

CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::Ciketunnelhisttable()
{

    yang_name = "cikeTunnelHistTable"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::~Ciketunnelhisttable()
{
}

bool CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::has_data() const
{
    for (std::size_t index=0; index<ciketunnelhistentry.size(); index++)
    {
        if(ciketunnelhistentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::has_operation() const
{
    for (std::size_t index=0; index<ciketunnelhistentry.size(); index++)
    {
        if(ciketunnelhistentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cikeTunnelHistTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cikeTunnelHistEntry")
    {
        auto c = std::make_shared<CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::Ciketunnelhistentry>();
        c->parent = this;
        ciketunnelhistentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ciketunnelhistentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cikeTunnelHistEntry")
        return true;
    return false;
}

CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::Ciketunnelhistentry::Ciketunnelhistentry()
    :
    ciketunhistindex{YType::int32, "cikeTunHistIndex"},
    ciketunhisttermreason{YType::enumeration, "cikeTunHistTermReason"},
    ciketunhistactiveindex{YType::int32, "cikeTunHistActiveIndex"},
    ciketunhistpeerlocaltype{YType::enumeration, "cikeTunHistPeerLocalType"},
    ciketunhistpeerlocalvalue{YType::str, "cikeTunHistPeerLocalValue"},
    ciketunhistpeerintindex{YType::int32, "cikeTunHistPeerIntIndex"},
    ciketunhistpeerremotetype{YType::enumeration, "cikeTunHistPeerRemoteType"},
    ciketunhistpeerremotevalue{YType::str, "cikeTunHistPeerRemoteValue"},
    ciketunhistlocaladdr{YType::str, "cikeTunHistLocalAddr"},
    ciketunhistlocalname{YType::str, "cikeTunHistLocalName"},
    ciketunhistremoteaddr{YType::str, "cikeTunHistRemoteAddr"},
    ciketunhistremotename{YType::str, "cikeTunHistRemoteName"},
    ciketunhistnegomode{YType::enumeration, "cikeTunHistNegoMode"},
    ciketunhistdiffhellmangrp{YType::enumeration, "cikeTunHistDiffHellmanGrp"},
    ciketunhistencryptalgo{YType::enumeration, "cikeTunHistEncryptAlgo"},
    ciketunhisthashalgo{YType::enumeration, "cikeTunHistHashAlgo"},
    ciketunhistauthmethod{YType::enumeration, "cikeTunHistAuthMethod"},
    ciketunhistlifetime{YType::int32, "cikeTunHistLifeTime"},
    ciketunhiststarttime{YType::uint32, "cikeTunHistStartTime"},
    ciketunhistactivetime{YType::int32, "cikeTunHistActiveTime"},
    ciketunhisttotalrefreshes{YType::uint32, "cikeTunHistTotalRefreshes"},
    ciketunhisttotalsas{YType::uint32, "cikeTunHistTotalSas"},
    ciketunhistinoctets{YType::uint32, "cikeTunHistInOctets"},
    ciketunhistinpkts{YType::uint32, "cikeTunHistInPkts"},
    ciketunhistindroppkts{YType::uint32, "cikeTunHistInDropPkts"},
    ciketunhistinnotifys{YType::uint32, "cikeTunHistInNotifys"},
    ciketunhistinp2exchgs{YType::uint32, "cikeTunHistInP2Exchgs"},
    ciketunhistinp2exchginvalids{YType::uint32, "cikeTunHistInP2ExchgInvalids"},
    ciketunhistinp2exchgrejects{YType::uint32, "cikeTunHistInP2ExchgRejects"},
    ciketunhistinp2sadelrequests{YType::uint32, "cikeTunHistInP2SaDelRequests"},
    ciketunhistoutoctets{YType::uint32, "cikeTunHistOutOctets"},
    ciketunhistoutpkts{YType::uint32, "cikeTunHistOutPkts"},
    ciketunhistoutdroppkts{YType::uint32, "cikeTunHistOutDropPkts"},
    ciketunhistoutnotifys{YType::uint32, "cikeTunHistOutNotifys"},
    ciketunhistoutp2exchgs{YType::uint32, "cikeTunHistOutP2Exchgs"},
    ciketunhistoutp2exchginvalids{YType::uint32, "cikeTunHistOutP2ExchgInvalids"},
    ciketunhistoutp2exchgrejects{YType::uint32, "cikeTunHistOutP2ExchgRejects"},
    ciketunhistoutp2sadelrequests{YType::uint32, "cikeTunHistOutP2SaDelRequests"}
{

    yang_name = "cikeTunnelHistEntry"; yang_parent_name = "cikeTunnelHistTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::Ciketunnelhistentry::~Ciketunnelhistentry()
{
}

bool CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::Ciketunnelhistentry::has_data() const
{
    return ciketunhistindex.is_set
	|| ciketunhisttermreason.is_set
	|| ciketunhistactiveindex.is_set
	|| ciketunhistpeerlocaltype.is_set
	|| ciketunhistpeerlocalvalue.is_set
	|| ciketunhistpeerintindex.is_set
	|| ciketunhistpeerremotetype.is_set
	|| ciketunhistpeerremotevalue.is_set
	|| ciketunhistlocaladdr.is_set
	|| ciketunhistlocalname.is_set
	|| ciketunhistremoteaddr.is_set
	|| ciketunhistremotename.is_set
	|| ciketunhistnegomode.is_set
	|| ciketunhistdiffhellmangrp.is_set
	|| ciketunhistencryptalgo.is_set
	|| ciketunhisthashalgo.is_set
	|| ciketunhistauthmethod.is_set
	|| ciketunhistlifetime.is_set
	|| ciketunhiststarttime.is_set
	|| ciketunhistactivetime.is_set
	|| ciketunhisttotalrefreshes.is_set
	|| ciketunhisttotalsas.is_set
	|| ciketunhistinoctets.is_set
	|| ciketunhistinpkts.is_set
	|| ciketunhistindroppkts.is_set
	|| ciketunhistinnotifys.is_set
	|| ciketunhistinp2exchgs.is_set
	|| ciketunhistinp2exchginvalids.is_set
	|| ciketunhistinp2exchgrejects.is_set
	|| ciketunhistinp2sadelrequests.is_set
	|| ciketunhistoutoctets.is_set
	|| ciketunhistoutpkts.is_set
	|| ciketunhistoutdroppkts.is_set
	|| ciketunhistoutnotifys.is_set
	|| ciketunhistoutp2exchgs.is_set
	|| ciketunhistoutp2exchginvalids.is_set
	|| ciketunhistoutp2exchgrejects.is_set
	|| ciketunhistoutp2sadelrequests.is_set;
}

bool CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::Ciketunnelhistentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciketunhistindex.yfilter)
	|| ydk::is_set(ciketunhisttermreason.yfilter)
	|| ydk::is_set(ciketunhistactiveindex.yfilter)
	|| ydk::is_set(ciketunhistpeerlocaltype.yfilter)
	|| ydk::is_set(ciketunhistpeerlocalvalue.yfilter)
	|| ydk::is_set(ciketunhistpeerintindex.yfilter)
	|| ydk::is_set(ciketunhistpeerremotetype.yfilter)
	|| ydk::is_set(ciketunhistpeerremotevalue.yfilter)
	|| ydk::is_set(ciketunhistlocaladdr.yfilter)
	|| ydk::is_set(ciketunhistlocalname.yfilter)
	|| ydk::is_set(ciketunhistremoteaddr.yfilter)
	|| ydk::is_set(ciketunhistremotename.yfilter)
	|| ydk::is_set(ciketunhistnegomode.yfilter)
	|| ydk::is_set(ciketunhistdiffhellmangrp.yfilter)
	|| ydk::is_set(ciketunhistencryptalgo.yfilter)
	|| ydk::is_set(ciketunhisthashalgo.yfilter)
	|| ydk::is_set(ciketunhistauthmethod.yfilter)
	|| ydk::is_set(ciketunhistlifetime.yfilter)
	|| ydk::is_set(ciketunhiststarttime.yfilter)
	|| ydk::is_set(ciketunhistactivetime.yfilter)
	|| ydk::is_set(ciketunhisttotalrefreshes.yfilter)
	|| ydk::is_set(ciketunhisttotalsas.yfilter)
	|| ydk::is_set(ciketunhistinoctets.yfilter)
	|| ydk::is_set(ciketunhistinpkts.yfilter)
	|| ydk::is_set(ciketunhistindroppkts.yfilter)
	|| ydk::is_set(ciketunhistinnotifys.yfilter)
	|| ydk::is_set(ciketunhistinp2exchgs.yfilter)
	|| ydk::is_set(ciketunhistinp2exchginvalids.yfilter)
	|| ydk::is_set(ciketunhistinp2exchgrejects.yfilter)
	|| ydk::is_set(ciketunhistinp2sadelrequests.yfilter)
	|| ydk::is_set(ciketunhistoutoctets.yfilter)
	|| ydk::is_set(ciketunhistoutpkts.yfilter)
	|| ydk::is_set(ciketunhistoutdroppkts.yfilter)
	|| ydk::is_set(ciketunhistoutnotifys.yfilter)
	|| ydk::is_set(ciketunhistoutp2exchgs.yfilter)
	|| ydk::is_set(ciketunhistoutp2exchginvalids.yfilter)
	|| ydk::is_set(ciketunhistoutp2exchgrejects.yfilter)
	|| ydk::is_set(ciketunhistoutp2sadelrequests.yfilter);
}

std::string CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::Ciketunnelhistentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/cikeTunnelHistTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::Ciketunnelhistentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cikeTunnelHistEntry" <<"[cikeTunHistIndex='" <<ciketunhistindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::Ciketunnelhistentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciketunhistindex.is_set || is_set(ciketunhistindex.yfilter)) leaf_name_data.push_back(ciketunhistindex.get_name_leafdata());
    if (ciketunhisttermreason.is_set || is_set(ciketunhisttermreason.yfilter)) leaf_name_data.push_back(ciketunhisttermreason.get_name_leafdata());
    if (ciketunhistactiveindex.is_set || is_set(ciketunhistactiveindex.yfilter)) leaf_name_data.push_back(ciketunhistactiveindex.get_name_leafdata());
    if (ciketunhistpeerlocaltype.is_set || is_set(ciketunhistpeerlocaltype.yfilter)) leaf_name_data.push_back(ciketunhistpeerlocaltype.get_name_leafdata());
    if (ciketunhistpeerlocalvalue.is_set || is_set(ciketunhistpeerlocalvalue.yfilter)) leaf_name_data.push_back(ciketunhistpeerlocalvalue.get_name_leafdata());
    if (ciketunhistpeerintindex.is_set || is_set(ciketunhistpeerintindex.yfilter)) leaf_name_data.push_back(ciketunhistpeerintindex.get_name_leafdata());
    if (ciketunhistpeerremotetype.is_set || is_set(ciketunhistpeerremotetype.yfilter)) leaf_name_data.push_back(ciketunhistpeerremotetype.get_name_leafdata());
    if (ciketunhistpeerremotevalue.is_set || is_set(ciketunhistpeerremotevalue.yfilter)) leaf_name_data.push_back(ciketunhistpeerremotevalue.get_name_leafdata());
    if (ciketunhistlocaladdr.is_set || is_set(ciketunhistlocaladdr.yfilter)) leaf_name_data.push_back(ciketunhistlocaladdr.get_name_leafdata());
    if (ciketunhistlocalname.is_set || is_set(ciketunhistlocalname.yfilter)) leaf_name_data.push_back(ciketunhistlocalname.get_name_leafdata());
    if (ciketunhistremoteaddr.is_set || is_set(ciketunhistremoteaddr.yfilter)) leaf_name_data.push_back(ciketunhistremoteaddr.get_name_leafdata());
    if (ciketunhistremotename.is_set || is_set(ciketunhistremotename.yfilter)) leaf_name_data.push_back(ciketunhistremotename.get_name_leafdata());
    if (ciketunhistnegomode.is_set || is_set(ciketunhistnegomode.yfilter)) leaf_name_data.push_back(ciketunhistnegomode.get_name_leafdata());
    if (ciketunhistdiffhellmangrp.is_set || is_set(ciketunhistdiffhellmangrp.yfilter)) leaf_name_data.push_back(ciketunhistdiffhellmangrp.get_name_leafdata());
    if (ciketunhistencryptalgo.is_set || is_set(ciketunhistencryptalgo.yfilter)) leaf_name_data.push_back(ciketunhistencryptalgo.get_name_leafdata());
    if (ciketunhisthashalgo.is_set || is_set(ciketunhisthashalgo.yfilter)) leaf_name_data.push_back(ciketunhisthashalgo.get_name_leafdata());
    if (ciketunhistauthmethod.is_set || is_set(ciketunhistauthmethod.yfilter)) leaf_name_data.push_back(ciketunhistauthmethod.get_name_leafdata());
    if (ciketunhistlifetime.is_set || is_set(ciketunhistlifetime.yfilter)) leaf_name_data.push_back(ciketunhistlifetime.get_name_leafdata());
    if (ciketunhiststarttime.is_set || is_set(ciketunhiststarttime.yfilter)) leaf_name_data.push_back(ciketunhiststarttime.get_name_leafdata());
    if (ciketunhistactivetime.is_set || is_set(ciketunhistactivetime.yfilter)) leaf_name_data.push_back(ciketunhistactivetime.get_name_leafdata());
    if (ciketunhisttotalrefreshes.is_set || is_set(ciketunhisttotalrefreshes.yfilter)) leaf_name_data.push_back(ciketunhisttotalrefreshes.get_name_leafdata());
    if (ciketunhisttotalsas.is_set || is_set(ciketunhisttotalsas.yfilter)) leaf_name_data.push_back(ciketunhisttotalsas.get_name_leafdata());
    if (ciketunhistinoctets.is_set || is_set(ciketunhistinoctets.yfilter)) leaf_name_data.push_back(ciketunhistinoctets.get_name_leafdata());
    if (ciketunhistinpkts.is_set || is_set(ciketunhistinpkts.yfilter)) leaf_name_data.push_back(ciketunhistinpkts.get_name_leafdata());
    if (ciketunhistindroppkts.is_set || is_set(ciketunhistindroppkts.yfilter)) leaf_name_data.push_back(ciketunhistindroppkts.get_name_leafdata());
    if (ciketunhistinnotifys.is_set || is_set(ciketunhistinnotifys.yfilter)) leaf_name_data.push_back(ciketunhistinnotifys.get_name_leafdata());
    if (ciketunhistinp2exchgs.is_set || is_set(ciketunhistinp2exchgs.yfilter)) leaf_name_data.push_back(ciketunhistinp2exchgs.get_name_leafdata());
    if (ciketunhistinp2exchginvalids.is_set || is_set(ciketunhistinp2exchginvalids.yfilter)) leaf_name_data.push_back(ciketunhistinp2exchginvalids.get_name_leafdata());
    if (ciketunhistinp2exchgrejects.is_set || is_set(ciketunhistinp2exchgrejects.yfilter)) leaf_name_data.push_back(ciketunhistinp2exchgrejects.get_name_leafdata());
    if (ciketunhistinp2sadelrequests.is_set || is_set(ciketunhistinp2sadelrequests.yfilter)) leaf_name_data.push_back(ciketunhistinp2sadelrequests.get_name_leafdata());
    if (ciketunhistoutoctets.is_set || is_set(ciketunhistoutoctets.yfilter)) leaf_name_data.push_back(ciketunhistoutoctets.get_name_leafdata());
    if (ciketunhistoutpkts.is_set || is_set(ciketunhistoutpkts.yfilter)) leaf_name_data.push_back(ciketunhistoutpkts.get_name_leafdata());
    if (ciketunhistoutdroppkts.is_set || is_set(ciketunhistoutdroppkts.yfilter)) leaf_name_data.push_back(ciketunhistoutdroppkts.get_name_leafdata());
    if (ciketunhistoutnotifys.is_set || is_set(ciketunhistoutnotifys.yfilter)) leaf_name_data.push_back(ciketunhistoutnotifys.get_name_leafdata());
    if (ciketunhistoutp2exchgs.is_set || is_set(ciketunhistoutp2exchgs.yfilter)) leaf_name_data.push_back(ciketunhistoutp2exchgs.get_name_leafdata());
    if (ciketunhistoutp2exchginvalids.is_set || is_set(ciketunhistoutp2exchginvalids.yfilter)) leaf_name_data.push_back(ciketunhistoutp2exchginvalids.get_name_leafdata());
    if (ciketunhistoutp2exchgrejects.is_set || is_set(ciketunhistoutp2exchgrejects.yfilter)) leaf_name_data.push_back(ciketunhistoutp2exchgrejects.get_name_leafdata());
    if (ciketunhistoutp2sadelrequests.is_set || is_set(ciketunhistoutp2sadelrequests.yfilter)) leaf_name_data.push_back(ciketunhistoutp2sadelrequests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::Ciketunnelhistentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::Ciketunnelhistentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::Ciketunnelhistentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cikeTunHistIndex")
    {
        ciketunhistindex = value;
        ciketunhistindex.value_namespace = name_space;
        ciketunhistindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistTermReason")
    {
        ciketunhisttermreason = value;
        ciketunhisttermreason.value_namespace = name_space;
        ciketunhisttermreason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistActiveIndex")
    {
        ciketunhistactiveindex = value;
        ciketunhistactiveindex.value_namespace = name_space;
        ciketunhistactiveindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistPeerLocalType")
    {
        ciketunhistpeerlocaltype = value;
        ciketunhistpeerlocaltype.value_namespace = name_space;
        ciketunhistpeerlocaltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistPeerLocalValue")
    {
        ciketunhistpeerlocalvalue = value;
        ciketunhistpeerlocalvalue.value_namespace = name_space;
        ciketunhistpeerlocalvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistPeerIntIndex")
    {
        ciketunhistpeerintindex = value;
        ciketunhistpeerintindex.value_namespace = name_space;
        ciketunhistpeerintindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistPeerRemoteType")
    {
        ciketunhistpeerremotetype = value;
        ciketunhistpeerremotetype.value_namespace = name_space;
        ciketunhistpeerremotetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistPeerRemoteValue")
    {
        ciketunhistpeerremotevalue = value;
        ciketunhistpeerremotevalue.value_namespace = name_space;
        ciketunhistpeerremotevalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistLocalAddr")
    {
        ciketunhistlocaladdr = value;
        ciketunhistlocaladdr.value_namespace = name_space;
        ciketunhistlocaladdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistLocalName")
    {
        ciketunhistlocalname = value;
        ciketunhistlocalname.value_namespace = name_space;
        ciketunhistlocalname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistRemoteAddr")
    {
        ciketunhistremoteaddr = value;
        ciketunhistremoteaddr.value_namespace = name_space;
        ciketunhistremoteaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistRemoteName")
    {
        ciketunhistremotename = value;
        ciketunhistremotename.value_namespace = name_space;
        ciketunhistremotename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistNegoMode")
    {
        ciketunhistnegomode = value;
        ciketunhistnegomode.value_namespace = name_space;
        ciketunhistnegomode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistDiffHellmanGrp")
    {
        ciketunhistdiffhellmangrp = value;
        ciketunhistdiffhellmangrp.value_namespace = name_space;
        ciketunhistdiffhellmangrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistEncryptAlgo")
    {
        ciketunhistencryptalgo = value;
        ciketunhistencryptalgo.value_namespace = name_space;
        ciketunhistencryptalgo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistHashAlgo")
    {
        ciketunhisthashalgo = value;
        ciketunhisthashalgo.value_namespace = name_space;
        ciketunhisthashalgo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistAuthMethod")
    {
        ciketunhistauthmethod = value;
        ciketunhistauthmethod.value_namespace = name_space;
        ciketunhistauthmethod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistLifeTime")
    {
        ciketunhistlifetime = value;
        ciketunhistlifetime.value_namespace = name_space;
        ciketunhistlifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistStartTime")
    {
        ciketunhiststarttime = value;
        ciketunhiststarttime.value_namespace = name_space;
        ciketunhiststarttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistActiveTime")
    {
        ciketunhistactivetime = value;
        ciketunhistactivetime.value_namespace = name_space;
        ciketunhistactivetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistTotalRefreshes")
    {
        ciketunhisttotalrefreshes = value;
        ciketunhisttotalrefreshes.value_namespace = name_space;
        ciketunhisttotalrefreshes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistTotalSas")
    {
        ciketunhisttotalsas = value;
        ciketunhisttotalsas.value_namespace = name_space;
        ciketunhisttotalsas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistInOctets")
    {
        ciketunhistinoctets = value;
        ciketunhistinoctets.value_namespace = name_space;
        ciketunhistinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistInPkts")
    {
        ciketunhistinpkts = value;
        ciketunhistinpkts.value_namespace = name_space;
        ciketunhistinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistInDropPkts")
    {
        ciketunhistindroppkts = value;
        ciketunhistindroppkts.value_namespace = name_space;
        ciketunhistindroppkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistInNotifys")
    {
        ciketunhistinnotifys = value;
        ciketunhistinnotifys.value_namespace = name_space;
        ciketunhistinnotifys.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistInP2Exchgs")
    {
        ciketunhistinp2exchgs = value;
        ciketunhistinp2exchgs.value_namespace = name_space;
        ciketunhistinp2exchgs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistInP2ExchgInvalids")
    {
        ciketunhistinp2exchginvalids = value;
        ciketunhistinp2exchginvalids.value_namespace = name_space;
        ciketunhistinp2exchginvalids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistInP2ExchgRejects")
    {
        ciketunhistinp2exchgrejects = value;
        ciketunhistinp2exchgrejects.value_namespace = name_space;
        ciketunhistinp2exchgrejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistInP2SaDelRequests")
    {
        ciketunhistinp2sadelrequests = value;
        ciketunhistinp2sadelrequests.value_namespace = name_space;
        ciketunhistinp2sadelrequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistOutOctets")
    {
        ciketunhistoutoctets = value;
        ciketunhistoutoctets.value_namespace = name_space;
        ciketunhistoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistOutPkts")
    {
        ciketunhistoutpkts = value;
        ciketunhistoutpkts.value_namespace = name_space;
        ciketunhistoutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistOutDropPkts")
    {
        ciketunhistoutdroppkts = value;
        ciketunhistoutdroppkts.value_namespace = name_space;
        ciketunhistoutdroppkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistOutNotifys")
    {
        ciketunhistoutnotifys = value;
        ciketunhistoutnotifys.value_namespace = name_space;
        ciketunhistoutnotifys.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistOutP2Exchgs")
    {
        ciketunhistoutp2exchgs = value;
        ciketunhistoutp2exchgs.value_namespace = name_space;
        ciketunhistoutp2exchgs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistOutP2ExchgInvalids")
    {
        ciketunhistoutp2exchginvalids = value;
        ciketunhistoutp2exchginvalids.value_namespace = name_space;
        ciketunhistoutp2exchginvalids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistOutP2ExchgRejects")
    {
        ciketunhistoutp2exchgrejects = value;
        ciketunhistoutp2exchgrejects.value_namespace = name_space;
        ciketunhistoutp2exchgrejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeTunHistOutP2SaDelRequests")
    {
        ciketunhistoutp2sadelrequests = value;
        ciketunhistoutp2sadelrequests.value_namespace = name_space;
        ciketunhistoutp2sadelrequests.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::Ciketunnelhistentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cikeTunHistIndex")
    {
        ciketunhistindex.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistTermReason")
    {
        ciketunhisttermreason.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistActiveIndex")
    {
        ciketunhistactiveindex.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistPeerLocalType")
    {
        ciketunhistpeerlocaltype.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistPeerLocalValue")
    {
        ciketunhistpeerlocalvalue.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistPeerIntIndex")
    {
        ciketunhistpeerintindex.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistPeerRemoteType")
    {
        ciketunhistpeerremotetype.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistPeerRemoteValue")
    {
        ciketunhistpeerremotevalue.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistLocalAddr")
    {
        ciketunhistlocaladdr.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistLocalName")
    {
        ciketunhistlocalname.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistRemoteAddr")
    {
        ciketunhistremoteaddr.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistRemoteName")
    {
        ciketunhistremotename.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistNegoMode")
    {
        ciketunhistnegomode.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistDiffHellmanGrp")
    {
        ciketunhistdiffhellmangrp.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistEncryptAlgo")
    {
        ciketunhistencryptalgo.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistHashAlgo")
    {
        ciketunhisthashalgo.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistAuthMethod")
    {
        ciketunhistauthmethod.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistLifeTime")
    {
        ciketunhistlifetime.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistStartTime")
    {
        ciketunhiststarttime.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistActiveTime")
    {
        ciketunhistactivetime.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistTotalRefreshes")
    {
        ciketunhisttotalrefreshes.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistTotalSas")
    {
        ciketunhisttotalsas.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistInOctets")
    {
        ciketunhistinoctets.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistInPkts")
    {
        ciketunhistinpkts.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistInDropPkts")
    {
        ciketunhistindroppkts.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistInNotifys")
    {
        ciketunhistinnotifys.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistInP2Exchgs")
    {
        ciketunhistinp2exchgs.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistInP2ExchgInvalids")
    {
        ciketunhistinp2exchginvalids.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistInP2ExchgRejects")
    {
        ciketunhistinp2exchgrejects.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistInP2SaDelRequests")
    {
        ciketunhistinp2sadelrequests.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistOutOctets")
    {
        ciketunhistoutoctets.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistOutPkts")
    {
        ciketunhistoutpkts.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistOutDropPkts")
    {
        ciketunhistoutdroppkts.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistOutNotifys")
    {
        ciketunhistoutnotifys.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistOutP2Exchgs")
    {
        ciketunhistoutp2exchgs.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistOutP2ExchgInvalids")
    {
        ciketunhistoutp2exchginvalids.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistOutP2ExchgRejects")
    {
        ciketunhistoutp2exchgrejects.yfilter = yfilter;
    }
    if(value_path == "cikeTunHistOutP2SaDelRequests")
    {
        ciketunhistoutp2sadelrequests.yfilter = yfilter;
    }
}

bool CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::Ciketunnelhistentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cikeTunHistIndex" || name == "cikeTunHistTermReason" || name == "cikeTunHistActiveIndex" || name == "cikeTunHistPeerLocalType" || name == "cikeTunHistPeerLocalValue" || name == "cikeTunHistPeerIntIndex" || name == "cikeTunHistPeerRemoteType" || name == "cikeTunHistPeerRemoteValue" || name == "cikeTunHistLocalAddr" || name == "cikeTunHistLocalName" || name == "cikeTunHistRemoteAddr" || name == "cikeTunHistRemoteName" || name == "cikeTunHistNegoMode" || name == "cikeTunHistDiffHellmanGrp" || name == "cikeTunHistEncryptAlgo" || name == "cikeTunHistHashAlgo" || name == "cikeTunHistAuthMethod" || name == "cikeTunHistLifeTime" || name == "cikeTunHistStartTime" || name == "cikeTunHistActiveTime" || name == "cikeTunHistTotalRefreshes" || name == "cikeTunHistTotalSas" || name == "cikeTunHistInOctets" || name == "cikeTunHistInPkts" || name == "cikeTunHistInDropPkts" || name == "cikeTunHistInNotifys" || name == "cikeTunHistInP2Exchgs" || name == "cikeTunHistInP2ExchgInvalids" || name == "cikeTunHistInP2ExchgRejects" || name == "cikeTunHistInP2SaDelRequests" || name == "cikeTunHistOutOctets" || name == "cikeTunHistOutPkts" || name == "cikeTunHistOutDropPkts" || name == "cikeTunHistOutNotifys" || name == "cikeTunHistOutP2Exchgs" || name == "cikeTunHistOutP2ExchgInvalids" || name == "cikeTunHistOutP2ExchgRejects" || name == "cikeTunHistOutP2SaDelRequests")
        return true;
    return false;
}

CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::Cipsectunnelhisttable()
{

    yang_name = "cipSecTunnelHistTable"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::~Cipsectunnelhisttable()
{
}

bool CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::has_data() const
{
    for (std::size_t index=0; index<cipsectunnelhistentry.size(); index++)
    {
        if(cipsectunnelhistentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::has_operation() const
{
    for (std::size_t index=0; index<cipsectunnelhistentry.size(); index++)
    {
        if(cipsectunnelhistentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecTunnelHistTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipSecTunnelHistEntry")
    {
        auto c = std::make_shared<CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::Cipsectunnelhistentry>();
        c->parent = this;
        cipsectunnelhistentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cipsectunnelhistentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipSecTunnelHistEntry")
        return true;
    return false;
}

CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::Cipsectunnelhistentry::Cipsectunnelhistentry()
    :
    cipsectunhistindex{YType::int32, "cipSecTunHistIndex"},
    cipsectunhisttermreason{YType::enumeration, "cipSecTunHistTermReason"},
    cipsectunhistactiveindex{YType::int32, "cipSecTunHistActiveIndex"},
    cipsectunhistiketunnelindex{YType::int32, "cipSecTunHistIkeTunnelIndex"},
    cipsectunhistlocaladdr{YType::str, "cipSecTunHistLocalAddr"},
    cipsectunhistremoteaddr{YType::str, "cipSecTunHistRemoteAddr"},
    cipsectunhistkeytype{YType::enumeration, "cipSecTunHistKeyType"},
    cipsectunhistencapmode{YType::enumeration, "cipSecTunHistEncapMode"},
    cipsectunhistlifesize{YType::int32, "cipSecTunHistLifeSize"},
    cipsectunhistlifetime{YType::int32, "cipSecTunHistLifeTime"},
    cipsectunhiststarttime{YType::uint32, "cipSecTunHistStartTime"},
    cipsectunhistactivetime{YType::int32, "cipSecTunHistActiveTime"},
    cipsectunhisttotalrefreshes{YType::uint32, "cipSecTunHistTotalRefreshes"},
    cipsectunhisttotalsas{YType::uint32, "cipSecTunHistTotalSas"},
    cipsectunhistinsadiffhellmangrp{YType::enumeration, "cipSecTunHistInSaDiffHellmanGrp"},
    cipsectunhistinsaencryptalgo{YType::enumeration, "cipSecTunHistInSaEncryptAlgo"},
    cipsectunhistinsaahauthalgo{YType::enumeration, "cipSecTunHistInSaAhAuthAlgo"},
    cipsectunhistinsaespauthalgo{YType::enumeration, "cipSecTunHistInSaEspAuthAlgo"},
    cipsectunhistinsadecompalgo{YType::enumeration, "cipSecTunHistInSaDecompAlgo"},
    cipsectunhistoutsadiffhellmangrp{YType::enumeration, "cipSecTunHistOutSaDiffHellmanGrp"},
    cipsectunhistoutsaencryptalgo{YType::enumeration, "cipSecTunHistOutSaEncryptAlgo"},
    cipsectunhistoutsaahauthalgo{YType::enumeration, "cipSecTunHistOutSaAhAuthAlgo"},
    cipsectunhistoutsaespauthalgo{YType::enumeration, "cipSecTunHistOutSaEspAuthAlgo"},
    cipsectunhistoutsacompalgo{YType::enumeration, "cipSecTunHistOutSaCompAlgo"},
    cipsectunhistinoctets{YType::uint32, "cipSecTunHistInOctets"},
    cipsectunhisthcinoctets{YType::uint64, "cipSecTunHistHcInOctets"},
    cipsectunhistinoctwraps{YType::uint32, "cipSecTunHistInOctWraps"},
    cipsectunhistindecompoctets{YType::uint32, "cipSecTunHistInDecompOctets"},
    cipsectunhisthcindecompoctets{YType::uint64, "cipSecTunHistHcInDecompOctets"},
    cipsectunhistindecompoctwraps{YType::uint32, "cipSecTunHistInDecompOctWraps"},
    cipsectunhistinpkts{YType::uint32, "cipSecTunHistInPkts"},
    cipsectunhistindroppkts{YType::uint32, "cipSecTunHistInDropPkts"},
    cipsectunhistinreplaydroppkts{YType::uint32, "cipSecTunHistInReplayDropPkts"},
    cipsectunhistinauths{YType::uint32, "cipSecTunHistInAuths"},
    cipsectunhistinauthfails{YType::uint32, "cipSecTunHistInAuthFails"},
    cipsectunhistindecrypts{YType::uint32, "cipSecTunHistInDecrypts"},
    cipsectunhistindecryptfails{YType::uint32, "cipSecTunHistInDecryptFails"},
    cipsectunhistoutoctets{YType::uint32, "cipSecTunHistOutOctets"},
    cipsectunhisthcoutoctets{YType::uint64, "cipSecTunHistHcOutOctets"},
    cipsectunhistoutoctwraps{YType::uint32, "cipSecTunHistOutOctWraps"},
    cipsectunhistoutuncompoctets{YType::uint32, "cipSecTunHistOutUncompOctets"},
    cipsectunhisthcoutuncompoctets{YType::uint64, "cipSecTunHistHcOutUncompOctets"},
    cipsectunhistoutuncompoctwraps{YType::uint32, "cipSecTunHistOutUncompOctWraps"},
    cipsectunhistoutpkts{YType::uint32, "cipSecTunHistOutPkts"},
    cipsectunhistoutdroppkts{YType::uint32, "cipSecTunHistOutDropPkts"},
    cipsectunhistoutauths{YType::uint32, "cipSecTunHistOutAuths"},
    cipsectunhistoutauthfails{YType::uint32, "cipSecTunHistOutAuthFails"},
    cipsectunhistoutencrypts{YType::uint32, "cipSecTunHistOutEncrypts"},
    cipsectunhistoutencryptfails{YType::uint32, "cipSecTunHistOutEncryptFails"}
{

    yang_name = "cipSecTunnelHistEntry"; yang_parent_name = "cipSecTunnelHistTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::Cipsectunnelhistentry::~Cipsectunnelhistentry()
{
}

bool CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::Cipsectunnelhistentry::has_data() const
{
    return cipsectunhistindex.is_set
	|| cipsectunhisttermreason.is_set
	|| cipsectunhistactiveindex.is_set
	|| cipsectunhistiketunnelindex.is_set
	|| cipsectunhistlocaladdr.is_set
	|| cipsectunhistremoteaddr.is_set
	|| cipsectunhistkeytype.is_set
	|| cipsectunhistencapmode.is_set
	|| cipsectunhistlifesize.is_set
	|| cipsectunhistlifetime.is_set
	|| cipsectunhiststarttime.is_set
	|| cipsectunhistactivetime.is_set
	|| cipsectunhisttotalrefreshes.is_set
	|| cipsectunhisttotalsas.is_set
	|| cipsectunhistinsadiffhellmangrp.is_set
	|| cipsectunhistinsaencryptalgo.is_set
	|| cipsectunhistinsaahauthalgo.is_set
	|| cipsectunhistinsaespauthalgo.is_set
	|| cipsectunhistinsadecompalgo.is_set
	|| cipsectunhistoutsadiffhellmangrp.is_set
	|| cipsectunhistoutsaencryptalgo.is_set
	|| cipsectunhistoutsaahauthalgo.is_set
	|| cipsectunhistoutsaespauthalgo.is_set
	|| cipsectunhistoutsacompalgo.is_set
	|| cipsectunhistinoctets.is_set
	|| cipsectunhisthcinoctets.is_set
	|| cipsectunhistinoctwraps.is_set
	|| cipsectunhistindecompoctets.is_set
	|| cipsectunhisthcindecompoctets.is_set
	|| cipsectunhistindecompoctwraps.is_set
	|| cipsectunhistinpkts.is_set
	|| cipsectunhistindroppkts.is_set
	|| cipsectunhistinreplaydroppkts.is_set
	|| cipsectunhistinauths.is_set
	|| cipsectunhistinauthfails.is_set
	|| cipsectunhistindecrypts.is_set
	|| cipsectunhistindecryptfails.is_set
	|| cipsectunhistoutoctets.is_set
	|| cipsectunhisthcoutoctets.is_set
	|| cipsectunhistoutoctwraps.is_set
	|| cipsectunhistoutuncompoctets.is_set
	|| cipsectunhisthcoutuncompoctets.is_set
	|| cipsectunhistoutuncompoctwraps.is_set
	|| cipsectunhistoutpkts.is_set
	|| cipsectunhistoutdroppkts.is_set
	|| cipsectunhistoutauths.is_set
	|| cipsectunhistoutauthfails.is_set
	|| cipsectunhistoutencrypts.is_set
	|| cipsectunhistoutencryptfails.is_set;
}

bool CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::Cipsectunnelhistentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipsectunhistindex.yfilter)
	|| ydk::is_set(cipsectunhisttermreason.yfilter)
	|| ydk::is_set(cipsectunhistactiveindex.yfilter)
	|| ydk::is_set(cipsectunhistiketunnelindex.yfilter)
	|| ydk::is_set(cipsectunhistlocaladdr.yfilter)
	|| ydk::is_set(cipsectunhistremoteaddr.yfilter)
	|| ydk::is_set(cipsectunhistkeytype.yfilter)
	|| ydk::is_set(cipsectunhistencapmode.yfilter)
	|| ydk::is_set(cipsectunhistlifesize.yfilter)
	|| ydk::is_set(cipsectunhistlifetime.yfilter)
	|| ydk::is_set(cipsectunhiststarttime.yfilter)
	|| ydk::is_set(cipsectunhistactivetime.yfilter)
	|| ydk::is_set(cipsectunhisttotalrefreshes.yfilter)
	|| ydk::is_set(cipsectunhisttotalsas.yfilter)
	|| ydk::is_set(cipsectunhistinsadiffhellmangrp.yfilter)
	|| ydk::is_set(cipsectunhistinsaencryptalgo.yfilter)
	|| ydk::is_set(cipsectunhistinsaahauthalgo.yfilter)
	|| ydk::is_set(cipsectunhistinsaespauthalgo.yfilter)
	|| ydk::is_set(cipsectunhistinsadecompalgo.yfilter)
	|| ydk::is_set(cipsectunhistoutsadiffhellmangrp.yfilter)
	|| ydk::is_set(cipsectunhistoutsaencryptalgo.yfilter)
	|| ydk::is_set(cipsectunhistoutsaahauthalgo.yfilter)
	|| ydk::is_set(cipsectunhistoutsaespauthalgo.yfilter)
	|| ydk::is_set(cipsectunhistoutsacompalgo.yfilter)
	|| ydk::is_set(cipsectunhistinoctets.yfilter)
	|| ydk::is_set(cipsectunhisthcinoctets.yfilter)
	|| ydk::is_set(cipsectunhistinoctwraps.yfilter)
	|| ydk::is_set(cipsectunhistindecompoctets.yfilter)
	|| ydk::is_set(cipsectunhisthcindecompoctets.yfilter)
	|| ydk::is_set(cipsectunhistindecompoctwraps.yfilter)
	|| ydk::is_set(cipsectunhistinpkts.yfilter)
	|| ydk::is_set(cipsectunhistindroppkts.yfilter)
	|| ydk::is_set(cipsectunhistinreplaydroppkts.yfilter)
	|| ydk::is_set(cipsectunhistinauths.yfilter)
	|| ydk::is_set(cipsectunhistinauthfails.yfilter)
	|| ydk::is_set(cipsectunhistindecrypts.yfilter)
	|| ydk::is_set(cipsectunhistindecryptfails.yfilter)
	|| ydk::is_set(cipsectunhistoutoctets.yfilter)
	|| ydk::is_set(cipsectunhisthcoutoctets.yfilter)
	|| ydk::is_set(cipsectunhistoutoctwraps.yfilter)
	|| ydk::is_set(cipsectunhistoutuncompoctets.yfilter)
	|| ydk::is_set(cipsectunhisthcoutuncompoctets.yfilter)
	|| ydk::is_set(cipsectunhistoutuncompoctwraps.yfilter)
	|| ydk::is_set(cipsectunhistoutpkts.yfilter)
	|| ydk::is_set(cipsectunhistoutdroppkts.yfilter)
	|| ydk::is_set(cipsectunhistoutauths.yfilter)
	|| ydk::is_set(cipsectunhistoutauthfails.yfilter)
	|| ydk::is_set(cipsectunhistoutencrypts.yfilter)
	|| ydk::is_set(cipsectunhistoutencryptfails.yfilter);
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::Cipsectunnelhistentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/cipSecTunnelHistTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::Cipsectunnelhistentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecTunnelHistEntry" <<"[cipSecTunHistIndex='" <<cipsectunhistindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::Cipsectunnelhistentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsectunhistindex.is_set || is_set(cipsectunhistindex.yfilter)) leaf_name_data.push_back(cipsectunhistindex.get_name_leafdata());
    if (cipsectunhisttermreason.is_set || is_set(cipsectunhisttermreason.yfilter)) leaf_name_data.push_back(cipsectunhisttermreason.get_name_leafdata());
    if (cipsectunhistactiveindex.is_set || is_set(cipsectunhistactiveindex.yfilter)) leaf_name_data.push_back(cipsectunhistactiveindex.get_name_leafdata());
    if (cipsectunhistiketunnelindex.is_set || is_set(cipsectunhistiketunnelindex.yfilter)) leaf_name_data.push_back(cipsectunhistiketunnelindex.get_name_leafdata());
    if (cipsectunhistlocaladdr.is_set || is_set(cipsectunhistlocaladdr.yfilter)) leaf_name_data.push_back(cipsectunhistlocaladdr.get_name_leafdata());
    if (cipsectunhistremoteaddr.is_set || is_set(cipsectunhistremoteaddr.yfilter)) leaf_name_data.push_back(cipsectunhistremoteaddr.get_name_leafdata());
    if (cipsectunhistkeytype.is_set || is_set(cipsectunhistkeytype.yfilter)) leaf_name_data.push_back(cipsectunhistkeytype.get_name_leafdata());
    if (cipsectunhistencapmode.is_set || is_set(cipsectunhistencapmode.yfilter)) leaf_name_data.push_back(cipsectunhistencapmode.get_name_leafdata());
    if (cipsectunhistlifesize.is_set || is_set(cipsectunhistlifesize.yfilter)) leaf_name_data.push_back(cipsectunhistlifesize.get_name_leafdata());
    if (cipsectunhistlifetime.is_set || is_set(cipsectunhistlifetime.yfilter)) leaf_name_data.push_back(cipsectunhistlifetime.get_name_leafdata());
    if (cipsectunhiststarttime.is_set || is_set(cipsectunhiststarttime.yfilter)) leaf_name_data.push_back(cipsectunhiststarttime.get_name_leafdata());
    if (cipsectunhistactivetime.is_set || is_set(cipsectunhistactivetime.yfilter)) leaf_name_data.push_back(cipsectunhistactivetime.get_name_leafdata());
    if (cipsectunhisttotalrefreshes.is_set || is_set(cipsectunhisttotalrefreshes.yfilter)) leaf_name_data.push_back(cipsectunhisttotalrefreshes.get_name_leafdata());
    if (cipsectunhisttotalsas.is_set || is_set(cipsectunhisttotalsas.yfilter)) leaf_name_data.push_back(cipsectunhisttotalsas.get_name_leafdata());
    if (cipsectunhistinsadiffhellmangrp.is_set || is_set(cipsectunhistinsadiffhellmangrp.yfilter)) leaf_name_data.push_back(cipsectunhistinsadiffhellmangrp.get_name_leafdata());
    if (cipsectunhistinsaencryptalgo.is_set || is_set(cipsectunhistinsaencryptalgo.yfilter)) leaf_name_data.push_back(cipsectunhistinsaencryptalgo.get_name_leafdata());
    if (cipsectunhistinsaahauthalgo.is_set || is_set(cipsectunhistinsaahauthalgo.yfilter)) leaf_name_data.push_back(cipsectunhistinsaahauthalgo.get_name_leafdata());
    if (cipsectunhistinsaespauthalgo.is_set || is_set(cipsectunhistinsaespauthalgo.yfilter)) leaf_name_data.push_back(cipsectunhistinsaespauthalgo.get_name_leafdata());
    if (cipsectunhistinsadecompalgo.is_set || is_set(cipsectunhistinsadecompalgo.yfilter)) leaf_name_data.push_back(cipsectunhistinsadecompalgo.get_name_leafdata());
    if (cipsectunhistoutsadiffhellmangrp.is_set || is_set(cipsectunhistoutsadiffhellmangrp.yfilter)) leaf_name_data.push_back(cipsectunhistoutsadiffhellmangrp.get_name_leafdata());
    if (cipsectunhistoutsaencryptalgo.is_set || is_set(cipsectunhistoutsaencryptalgo.yfilter)) leaf_name_data.push_back(cipsectunhistoutsaencryptalgo.get_name_leafdata());
    if (cipsectunhistoutsaahauthalgo.is_set || is_set(cipsectunhistoutsaahauthalgo.yfilter)) leaf_name_data.push_back(cipsectunhistoutsaahauthalgo.get_name_leafdata());
    if (cipsectunhistoutsaespauthalgo.is_set || is_set(cipsectunhistoutsaespauthalgo.yfilter)) leaf_name_data.push_back(cipsectunhistoutsaespauthalgo.get_name_leafdata());
    if (cipsectunhistoutsacompalgo.is_set || is_set(cipsectunhistoutsacompalgo.yfilter)) leaf_name_data.push_back(cipsectunhistoutsacompalgo.get_name_leafdata());
    if (cipsectunhistinoctets.is_set || is_set(cipsectunhistinoctets.yfilter)) leaf_name_data.push_back(cipsectunhistinoctets.get_name_leafdata());
    if (cipsectunhisthcinoctets.is_set || is_set(cipsectunhisthcinoctets.yfilter)) leaf_name_data.push_back(cipsectunhisthcinoctets.get_name_leafdata());
    if (cipsectunhistinoctwraps.is_set || is_set(cipsectunhistinoctwraps.yfilter)) leaf_name_data.push_back(cipsectunhistinoctwraps.get_name_leafdata());
    if (cipsectunhistindecompoctets.is_set || is_set(cipsectunhistindecompoctets.yfilter)) leaf_name_data.push_back(cipsectunhistindecompoctets.get_name_leafdata());
    if (cipsectunhisthcindecompoctets.is_set || is_set(cipsectunhisthcindecompoctets.yfilter)) leaf_name_data.push_back(cipsectunhisthcindecompoctets.get_name_leafdata());
    if (cipsectunhistindecompoctwraps.is_set || is_set(cipsectunhistindecompoctwraps.yfilter)) leaf_name_data.push_back(cipsectunhistindecompoctwraps.get_name_leafdata());
    if (cipsectunhistinpkts.is_set || is_set(cipsectunhistinpkts.yfilter)) leaf_name_data.push_back(cipsectunhistinpkts.get_name_leafdata());
    if (cipsectunhistindroppkts.is_set || is_set(cipsectunhistindroppkts.yfilter)) leaf_name_data.push_back(cipsectunhistindroppkts.get_name_leafdata());
    if (cipsectunhistinreplaydroppkts.is_set || is_set(cipsectunhistinreplaydroppkts.yfilter)) leaf_name_data.push_back(cipsectunhistinreplaydroppkts.get_name_leafdata());
    if (cipsectunhistinauths.is_set || is_set(cipsectunhistinauths.yfilter)) leaf_name_data.push_back(cipsectunhistinauths.get_name_leafdata());
    if (cipsectunhistinauthfails.is_set || is_set(cipsectunhistinauthfails.yfilter)) leaf_name_data.push_back(cipsectunhistinauthfails.get_name_leafdata());
    if (cipsectunhistindecrypts.is_set || is_set(cipsectunhistindecrypts.yfilter)) leaf_name_data.push_back(cipsectunhistindecrypts.get_name_leafdata());
    if (cipsectunhistindecryptfails.is_set || is_set(cipsectunhistindecryptfails.yfilter)) leaf_name_data.push_back(cipsectunhistindecryptfails.get_name_leafdata());
    if (cipsectunhistoutoctets.is_set || is_set(cipsectunhistoutoctets.yfilter)) leaf_name_data.push_back(cipsectunhistoutoctets.get_name_leafdata());
    if (cipsectunhisthcoutoctets.is_set || is_set(cipsectunhisthcoutoctets.yfilter)) leaf_name_data.push_back(cipsectunhisthcoutoctets.get_name_leafdata());
    if (cipsectunhistoutoctwraps.is_set || is_set(cipsectunhistoutoctwraps.yfilter)) leaf_name_data.push_back(cipsectunhistoutoctwraps.get_name_leafdata());
    if (cipsectunhistoutuncompoctets.is_set || is_set(cipsectunhistoutuncompoctets.yfilter)) leaf_name_data.push_back(cipsectunhistoutuncompoctets.get_name_leafdata());
    if (cipsectunhisthcoutuncompoctets.is_set || is_set(cipsectunhisthcoutuncompoctets.yfilter)) leaf_name_data.push_back(cipsectunhisthcoutuncompoctets.get_name_leafdata());
    if (cipsectunhistoutuncompoctwraps.is_set || is_set(cipsectunhistoutuncompoctwraps.yfilter)) leaf_name_data.push_back(cipsectunhistoutuncompoctwraps.get_name_leafdata());
    if (cipsectunhistoutpkts.is_set || is_set(cipsectunhistoutpkts.yfilter)) leaf_name_data.push_back(cipsectunhistoutpkts.get_name_leafdata());
    if (cipsectunhistoutdroppkts.is_set || is_set(cipsectunhistoutdroppkts.yfilter)) leaf_name_data.push_back(cipsectunhistoutdroppkts.get_name_leafdata());
    if (cipsectunhistoutauths.is_set || is_set(cipsectunhistoutauths.yfilter)) leaf_name_data.push_back(cipsectunhistoutauths.get_name_leafdata());
    if (cipsectunhistoutauthfails.is_set || is_set(cipsectunhistoutauthfails.yfilter)) leaf_name_data.push_back(cipsectunhistoutauthfails.get_name_leafdata());
    if (cipsectunhistoutencrypts.is_set || is_set(cipsectunhistoutencrypts.yfilter)) leaf_name_data.push_back(cipsectunhistoutencrypts.get_name_leafdata());
    if (cipsectunhistoutencryptfails.is_set || is_set(cipsectunhistoutencryptfails.yfilter)) leaf_name_data.push_back(cipsectunhistoutencryptfails.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::Cipsectunnelhistentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::Cipsectunnelhistentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::Cipsectunnelhistentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipSecTunHistIndex")
    {
        cipsectunhistindex = value;
        cipsectunhistindex.value_namespace = name_space;
        cipsectunhistindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistTermReason")
    {
        cipsectunhisttermreason = value;
        cipsectunhisttermreason.value_namespace = name_space;
        cipsectunhisttermreason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistActiveIndex")
    {
        cipsectunhistactiveindex = value;
        cipsectunhistactiveindex.value_namespace = name_space;
        cipsectunhistactiveindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistIkeTunnelIndex")
    {
        cipsectunhistiketunnelindex = value;
        cipsectunhistiketunnelindex.value_namespace = name_space;
        cipsectunhistiketunnelindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistLocalAddr")
    {
        cipsectunhistlocaladdr = value;
        cipsectunhistlocaladdr.value_namespace = name_space;
        cipsectunhistlocaladdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistRemoteAddr")
    {
        cipsectunhistremoteaddr = value;
        cipsectunhistremoteaddr.value_namespace = name_space;
        cipsectunhistremoteaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistKeyType")
    {
        cipsectunhistkeytype = value;
        cipsectunhistkeytype.value_namespace = name_space;
        cipsectunhistkeytype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistEncapMode")
    {
        cipsectunhistencapmode = value;
        cipsectunhistencapmode.value_namespace = name_space;
        cipsectunhistencapmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistLifeSize")
    {
        cipsectunhistlifesize = value;
        cipsectunhistlifesize.value_namespace = name_space;
        cipsectunhistlifesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistLifeTime")
    {
        cipsectunhistlifetime = value;
        cipsectunhistlifetime.value_namespace = name_space;
        cipsectunhistlifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistStartTime")
    {
        cipsectunhiststarttime = value;
        cipsectunhiststarttime.value_namespace = name_space;
        cipsectunhiststarttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistActiveTime")
    {
        cipsectunhistactivetime = value;
        cipsectunhistactivetime.value_namespace = name_space;
        cipsectunhistactivetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistTotalRefreshes")
    {
        cipsectunhisttotalrefreshes = value;
        cipsectunhisttotalrefreshes.value_namespace = name_space;
        cipsectunhisttotalrefreshes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistTotalSas")
    {
        cipsectunhisttotalsas = value;
        cipsectunhisttotalsas.value_namespace = name_space;
        cipsectunhisttotalsas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistInSaDiffHellmanGrp")
    {
        cipsectunhistinsadiffhellmangrp = value;
        cipsectunhistinsadiffhellmangrp.value_namespace = name_space;
        cipsectunhistinsadiffhellmangrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistInSaEncryptAlgo")
    {
        cipsectunhistinsaencryptalgo = value;
        cipsectunhistinsaencryptalgo.value_namespace = name_space;
        cipsectunhistinsaencryptalgo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistInSaAhAuthAlgo")
    {
        cipsectunhistinsaahauthalgo = value;
        cipsectunhistinsaahauthalgo.value_namespace = name_space;
        cipsectunhistinsaahauthalgo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistInSaEspAuthAlgo")
    {
        cipsectunhistinsaespauthalgo = value;
        cipsectunhistinsaespauthalgo.value_namespace = name_space;
        cipsectunhistinsaespauthalgo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistInSaDecompAlgo")
    {
        cipsectunhistinsadecompalgo = value;
        cipsectunhistinsadecompalgo.value_namespace = name_space;
        cipsectunhistinsadecompalgo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistOutSaDiffHellmanGrp")
    {
        cipsectunhistoutsadiffhellmangrp = value;
        cipsectunhistoutsadiffhellmangrp.value_namespace = name_space;
        cipsectunhistoutsadiffhellmangrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistOutSaEncryptAlgo")
    {
        cipsectunhistoutsaencryptalgo = value;
        cipsectunhistoutsaencryptalgo.value_namespace = name_space;
        cipsectunhistoutsaencryptalgo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistOutSaAhAuthAlgo")
    {
        cipsectunhistoutsaahauthalgo = value;
        cipsectunhistoutsaahauthalgo.value_namespace = name_space;
        cipsectunhistoutsaahauthalgo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistOutSaEspAuthAlgo")
    {
        cipsectunhistoutsaespauthalgo = value;
        cipsectunhistoutsaespauthalgo.value_namespace = name_space;
        cipsectunhistoutsaespauthalgo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistOutSaCompAlgo")
    {
        cipsectunhistoutsacompalgo = value;
        cipsectunhistoutsacompalgo.value_namespace = name_space;
        cipsectunhistoutsacompalgo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistInOctets")
    {
        cipsectunhistinoctets = value;
        cipsectunhistinoctets.value_namespace = name_space;
        cipsectunhistinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistHcInOctets")
    {
        cipsectunhisthcinoctets = value;
        cipsectunhisthcinoctets.value_namespace = name_space;
        cipsectunhisthcinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistInOctWraps")
    {
        cipsectunhistinoctwraps = value;
        cipsectunhistinoctwraps.value_namespace = name_space;
        cipsectunhistinoctwraps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistInDecompOctets")
    {
        cipsectunhistindecompoctets = value;
        cipsectunhistindecompoctets.value_namespace = name_space;
        cipsectunhistindecompoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistHcInDecompOctets")
    {
        cipsectunhisthcindecompoctets = value;
        cipsectunhisthcindecompoctets.value_namespace = name_space;
        cipsectunhisthcindecompoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistInDecompOctWraps")
    {
        cipsectunhistindecompoctwraps = value;
        cipsectunhistindecompoctwraps.value_namespace = name_space;
        cipsectunhistindecompoctwraps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistInPkts")
    {
        cipsectunhistinpkts = value;
        cipsectunhistinpkts.value_namespace = name_space;
        cipsectunhistinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistInDropPkts")
    {
        cipsectunhistindroppkts = value;
        cipsectunhistindroppkts.value_namespace = name_space;
        cipsectunhistindroppkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistInReplayDropPkts")
    {
        cipsectunhistinreplaydroppkts = value;
        cipsectunhistinreplaydroppkts.value_namespace = name_space;
        cipsectunhistinreplaydroppkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistInAuths")
    {
        cipsectunhistinauths = value;
        cipsectunhistinauths.value_namespace = name_space;
        cipsectunhistinauths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistInAuthFails")
    {
        cipsectunhistinauthfails = value;
        cipsectunhistinauthfails.value_namespace = name_space;
        cipsectunhistinauthfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistInDecrypts")
    {
        cipsectunhistindecrypts = value;
        cipsectunhistindecrypts.value_namespace = name_space;
        cipsectunhistindecrypts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistInDecryptFails")
    {
        cipsectunhistindecryptfails = value;
        cipsectunhistindecryptfails.value_namespace = name_space;
        cipsectunhistindecryptfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistOutOctets")
    {
        cipsectunhistoutoctets = value;
        cipsectunhistoutoctets.value_namespace = name_space;
        cipsectunhistoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistHcOutOctets")
    {
        cipsectunhisthcoutoctets = value;
        cipsectunhisthcoutoctets.value_namespace = name_space;
        cipsectunhisthcoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistOutOctWraps")
    {
        cipsectunhistoutoctwraps = value;
        cipsectunhistoutoctwraps.value_namespace = name_space;
        cipsectunhistoutoctwraps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistOutUncompOctets")
    {
        cipsectunhistoutuncompoctets = value;
        cipsectunhistoutuncompoctets.value_namespace = name_space;
        cipsectunhistoutuncompoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistHcOutUncompOctets")
    {
        cipsectunhisthcoutuncompoctets = value;
        cipsectunhisthcoutuncompoctets.value_namespace = name_space;
        cipsectunhisthcoutuncompoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistOutUncompOctWraps")
    {
        cipsectunhistoutuncompoctwraps = value;
        cipsectunhistoutuncompoctwraps.value_namespace = name_space;
        cipsectunhistoutuncompoctwraps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistOutPkts")
    {
        cipsectunhistoutpkts = value;
        cipsectunhistoutpkts.value_namespace = name_space;
        cipsectunhistoutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistOutDropPkts")
    {
        cipsectunhistoutdroppkts = value;
        cipsectunhistoutdroppkts.value_namespace = name_space;
        cipsectunhistoutdroppkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistOutAuths")
    {
        cipsectunhistoutauths = value;
        cipsectunhistoutauths.value_namespace = name_space;
        cipsectunhistoutauths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistOutAuthFails")
    {
        cipsectunhistoutauthfails = value;
        cipsectunhistoutauthfails.value_namespace = name_space;
        cipsectunhistoutauthfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistOutEncrypts")
    {
        cipsectunhistoutencrypts = value;
        cipsectunhistoutencrypts.value_namespace = name_space;
        cipsectunhistoutencrypts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecTunHistOutEncryptFails")
    {
        cipsectunhistoutencryptfails = value;
        cipsectunhistoutencryptfails.value_namespace = name_space;
        cipsectunhistoutencryptfails.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::Cipsectunnelhistentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipSecTunHistIndex")
    {
        cipsectunhistindex.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistTermReason")
    {
        cipsectunhisttermreason.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistActiveIndex")
    {
        cipsectunhistactiveindex.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistIkeTunnelIndex")
    {
        cipsectunhistiketunnelindex.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistLocalAddr")
    {
        cipsectunhistlocaladdr.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistRemoteAddr")
    {
        cipsectunhistremoteaddr.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistKeyType")
    {
        cipsectunhistkeytype.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistEncapMode")
    {
        cipsectunhistencapmode.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistLifeSize")
    {
        cipsectunhistlifesize.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistLifeTime")
    {
        cipsectunhistlifetime.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistStartTime")
    {
        cipsectunhiststarttime.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistActiveTime")
    {
        cipsectunhistactivetime.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistTotalRefreshes")
    {
        cipsectunhisttotalrefreshes.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistTotalSas")
    {
        cipsectunhisttotalsas.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistInSaDiffHellmanGrp")
    {
        cipsectunhistinsadiffhellmangrp.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistInSaEncryptAlgo")
    {
        cipsectunhistinsaencryptalgo.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistInSaAhAuthAlgo")
    {
        cipsectunhistinsaahauthalgo.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistInSaEspAuthAlgo")
    {
        cipsectunhistinsaespauthalgo.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistInSaDecompAlgo")
    {
        cipsectunhistinsadecompalgo.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistOutSaDiffHellmanGrp")
    {
        cipsectunhistoutsadiffhellmangrp.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistOutSaEncryptAlgo")
    {
        cipsectunhistoutsaencryptalgo.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistOutSaAhAuthAlgo")
    {
        cipsectunhistoutsaahauthalgo.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistOutSaEspAuthAlgo")
    {
        cipsectunhistoutsaespauthalgo.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistOutSaCompAlgo")
    {
        cipsectunhistoutsacompalgo.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistInOctets")
    {
        cipsectunhistinoctets.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistHcInOctets")
    {
        cipsectunhisthcinoctets.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistInOctWraps")
    {
        cipsectunhistinoctwraps.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistInDecompOctets")
    {
        cipsectunhistindecompoctets.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistHcInDecompOctets")
    {
        cipsectunhisthcindecompoctets.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistInDecompOctWraps")
    {
        cipsectunhistindecompoctwraps.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistInPkts")
    {
        cipsectunhistinpkts.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistInDropPkts")
    {
        cipsectunhistindroppkts.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistInReplayDropPkts")
    {
        cipsectunhistinreplaydroppkts.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistInAuths")
    {
        cipsectunhistinauths.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistInAuthFails")
    {
        cipsectunhistinauthfails.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistInDecrypts")
    {
        cipsectunhistindecrypts.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistInDecryptFails")
    {
        cipsectunhistindecryptfails.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistOutOctets")
    {
        cipsectunhistoutoctets.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistHcOutOctets")
    {
        cipsectunhisthcoutoctets.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistOutOctWraps")
    {
        cipsectunhistoutoctwraps.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistOutUncompOctets")
    {
        cipsectunhistoutuncompoctets.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistHcOutUncompOctets")
    {
        cipsectunhisthcoutuncompoctets.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistOutUncompOctWraps")
    {
        cipsectunhistoutuncompoctwraps.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistOutPkts")
    {
        cipsectunhistoutpkts.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistOutDropPkts")
    {
        cipsectunhistoutdroppkts.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistOutAuths")
    {
        cipsectunhistoutauths.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistOutAuthFails")
    {
        cipsectunhistoutauthfails.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistOutEncrypts")
    {
        cipsectunhistoutencrypts.yfilter = yfilter;
    }
    if(value_path == "cipSecTunHistOutEncryptFails")
    {
        cipsectunhistoutencryptfails.yfilter = yfilter;
    }
}

bool CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::Cipsectunnelhistentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipSecTunHistIndex" || name == "cipSecTunHistTermReason" || name == "cipSecTunHistActiveIndex" || name == "cipSecTunHistIkeTunnelIndex" || name == "cipSecTunHistLocalAddr" || name == "cipSecTunHistRemoteAddr" || name == "cipSecTunHistKeyType" || name == "cipSecTunHistEncapMode" || name == "cipSecTunHistLifeSize" || name == "cipSecTunHistLifeTime" || name == "cipSecTunHistStartTime" || name == "cipSecTunHistActiveTime" || name == "cipSecTunHistTotalRefreshes" || name == "cipSecTunHistTotalSas" || name == "cipSecTunHistInSaDiffHellmanGrp" || name == "cipSecTunHistInSaEncryptAlgo" || name == "cipSecTunHistInSaAhAuthAlgo" || name == "cipSecTunHistInSaEspAuthAlgo" || name == "cipSecTunHistInSaDecompAlgo" || name == "cipSecTunHistOutSaDiffHellmanGrp" || name == "cipSecTunHistOutSaEncryptAlgo" || name == "cipSecTunHistOutSaAhAuthAlgo" || name == "cipSecTunHistOutSaEspAuthAlgo" || name == "cipSecTunHistOutSaCompAlgo" || name == "cipSecTunHistInOctets" || name == "cipSecTunHistHcInOctets" || name == "cipSecTunHistInOctWraps" || name == "cipSecTunHistInDecompOctets" || name == "cipSecTunHistHcInDecompOctets" || name == "cipSecTunHistInDecompOctWraps" || name == "cipSecTunHistInPkts" || name == "cipSecTunHistInDropPkts" || name == "cipSecTunHistInReplayDropPkts" || name == "cipSecTunHistInAuths" || name == "cipSecTunHistInAuthFails" || name == "cipSecTunHistInDecrypts" || name == "cipSecTunHistInDecryptFails" || name == "cipSecTunHistOutOctets" || name == "cipSecTunHistHcOutOctets" || name == "cipSecTunHistOutOctWraps" || name == "cipSecTunHistOutUncompOctets" || name == "cipSecTunHistHcOutUncompOctets" || name == "cipSecTunHistOutUncompOctWraps" || name == "cipSecTunHistOutPkts" || name == "cipSecTunHistOutDropPkts" || name == "cipSecTunHistOutAuths" || name == "cipSecTunHistOutAuthFails" || name == "cipSecTunHistOutEncrypts" || name == "cipSecTunHistOutEncryptFails")
        return true;
    return false;
}

CISCOIPSECFLOWMONITORMIB::Cipsecendpthisttable::Cipsecendpthisttable()
{

    yang_name = "cipSecEndPtHistTable"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSECFLOWMONITORMIB::Cipsecendpthisttable::~Cipsecendpthisttable()
{
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecendpthisttable::has_data() const
{
    for (std::size_t index=0; index<cipsecendpthistentry.size(); index++)
    {
        if(cipsecendpthistentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecendpthisttable::has_operation() const
{
    for (std::size_t index=0; index<cipsecendpthistentry.size(); index++)
    {
        if(cipsecendpthistentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsecendpthisttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsecendpthisttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecEndPtHistTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECFLOWMONITORMIB::Cipsecendpthisttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECFLOWMONITORMIB::Cipsecendpthisttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipSecEndPtHistEntry")
    {
        auto c = std::make_shared<CISCOIPSECFLOWMONITORMIB::Cipsecendpthisttable::Cipsecendpthistentry>();
        c->parent = this;
        cipsecendpthistentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECFLOWMONITORMIB::Cipsecendpthisttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cipsecendpthistentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIPSECFLOWMONITORMIB::Cipsecendpthisttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPSECFLOWMONITORMIB::Cipsecendpthisttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecendpthisttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipSecEndPtHistEntry")
        return true;
    return false;
}

CISCOIPSECFLOWMONITORMIB::Cipsecendpthisttable::Cipsecendpthistentry::Cipsecendpthistentry()
    :
    cipsecendpthistindex{YType::int32, "cipSecEndPtHistIndex"},
    cipsecendpthisttunindex{YType::int32, "cipSecEndPtHistTunIndex"},
    cipsecendpthistactiveindex{YType::int32, "cipSecEndPtHistActiveIndex"},
    cipsecendpthistlocalname{YType::str, "cipSecEndPtHistLocalName"},
    cipsecendpthistlocaltype{YType::enumeration, "cipSecEndPtHistLocalType"},
    cipsecendpthistlocaladdr1{YType::str, "cipSecEndPtHistLocalAddr1"},
    cipsecendpthistlocaladdr2{YType::str, "cipSecEndPtHistLocalAddr2"},
    cipsecendpthistlocalprotocol{YType::int32, "cipSecEndPtHistLocalProtocol"},
    cipsecendpthistlocalport{YType::int32, "cipSecEndPtHistLocalPort"},
    cipsecendpthistremotename{YType::str, "cipSecEndPtHistRemoteName"},
    cipsecendpthistremotetype{YType::enumeration, "cipSecEndPtHistRemoteType"},
    cipsecendpthistremoteaddr1{YType::str, "cipSecEndPtHistRemoteAddr1"},
    cipsecendpthistremoteaddr2{YType::str, "cipSecEndPtHistRemoteAddr2"},
    cipsecendpthistremoteprotocol{YType::int32, "cipSecEndPtHistRemoteProtocol"},
    cipsecendpthistremoteport{YType::int32, "cipSecEndPtHistRemotePort"}
{

    yang_name = "cipSecEndPtHistEntry"; yang_parent_name = "cipSecEndPtHistTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSECFLOWMONITORMIB::Cipsecendpthisttable::Cipsecendpthistentry::~Cipsecendpthistentry()
{
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecendpthisttable::Cipsecendpthistentry::has_data() const
{
    return cipsecendpthistindex.is_set
	|| cipsecendpthisttunindex.is_set
	|| cipsecendpthistactiveindex.is_set
	|| cipsecendpthistlocalname.is_set
	|| cipsecendpthistlocaltype.is_set
	|| cipsecendpthistlocaladdr1.is_set
	|| cipsecendpthistlocaladdr2.is_set
	|| cipsecendpthistlocalprotocol.is_set
	|| cipsecendpthistlocalport.is_set
	|| cipsecendpthistremotename.is_set
	|| cipsecendpthistremotetype.is_set
	|| cipsecendpthistremoteaddr1.is_set
	|| cipsecendpthistremoteaddr2.is_set
	|| cipsecendpthistremoteprotocol.is_set
	|| cipsecendpthistremoteport.is_set;
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecendpthisttable::Cipsecendpthistentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipsecendpthistindex.yfilter)
	|| ydk::is_set(cipsecendpthisttunindex.yfilter)
	|| ydk::is_set(cipsecendpthistactiveindex.yfilter)
	|| ydk::is_set(cipsecendpthistlocalname.yfilter)
	|| ydk::is_set(cipsecendpthistlocaltype.yfilter)
	|| ydk::is_set(cipsecendpthistlocaladdr1.yfilter)
	|| ydk::is_set(cipsecendpthistlocaladdr2.yfilter)
	|| ydk::is_set(cipsecendpthistlocalprotocol.yfilter)
	|| ydk::is_set(cipsecendpthistlocalport.yfilter)
	|| ydk::is_set(cipsecendpthistremotename.yfilter)
	|| ydk::is_set(cipsecendpthistremotetype.yfilter)
	|| ydk::is_set(cipsecendpthistremoteaddr1.yfilter)
	|| ydk::is_set(cipsecendpthistremoteaddr2.yfilter)
	|| ydk::is_set(cipsecendpthistremoteprotocol.yfilter)
	|| ydk::is_set(cipsecendpthistremoteport.yfilter);
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsecendpthisttable::Cipsecendpthistentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/cipSecEndPtHistTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsecendpthisttable::Cipsecendpthistentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecEndPtHistEntry" <<"[cipSecEndPtHistIndex='" <<cipsecendpthistindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECFLOWMONITORMIB::Cipsecendpthisttable::Cipsecendpthistentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsecendpthistindex.is_set || is_set(cipsecendpthistindex.yfilter)) leaf_name_data.push_back(cipsecendpthistindex.get_name_leafdata());
    if (cipsecendpthisttunindex.is_set || is_set(cipsecendpthisttunindex.yfilter)) leaf_name_data.push_back(cipsecendpthisttunindex.get_name_leafdata());
    if (cipsecendpthistactiveindex.is_set || is_set(cipsecendpthistactiveindex.yfilter)) leaf_name_data.push_back(cipsecendpthistactiveindex.get_name_leafdata());
    if (cipsecendpthistlocalname.is_set || is_set(cipsecendpthistlocalname.yfilter)) leaf_name_data.push_back(cipsecendpthistlocalname.get_name_leafdata());
    if (cipsecendpthistlocaltype.is_set || is_set(cipsecendpthistlocaltype.yfilter)) leaf_name_data.push_back(cipsecendpthistlocaltype.get_name_leafdata());
    if (cipsecendpthistlocaladdr1.is_set || is_set(cipsecendpthistlocaladdr1.yfilter)) leaf_name_data.push_back(cipsecendpthistlocaladdr1.get_name_leafdata());
    if (cipsecendpthistlocaladdr2.is_set || is_set(cipsecendpthistlocaladdr2.yfilter)) leaf_name_data.push_back(cipsecendpthistlocaladdr2.get_name_leafdata());
    if (cipsecendpthistlocalprotocol.is_set || is_set(cipsecendpthistlocalprotocol.yfilter)) leaf_name_data.push_back(cipsecendpthistlocalprotocol.get_name_leafdata());
    if (cipsecendpthistlocalport.is_set || is_set(cipsecendpthistlocalport.yfilter)) leaf_name_data.push_back(cipsecendpthistlocalport.get_name_leafdata());
    if (cipsecendpthistremotename.is_set || is_set(cipsecendpthistremotename.yfilter)) leaf_name_data.push_back(cipsecendpthistremotename.get_name_leafdata());
    if (cipsecendpthistremotetype.is_set || is_set(cipsecendpthistremotetype.yfilter)) leaf_name_data.push_back(cipsecendpthistremotetype.get_name_leafdata());
    if (cipsecendpthistremoteaddr1.is_set || is_set(cipsecendpthistremoteaddr1.yfilter)) leaf_name_data.push_back(cipsecendpthistremoteaddr1.get_name_leafdata());
    if (cipsecendpthistremoteaddr2.is_set || is_set(cipsecendpthistremoteaddr2.yfilter)) leaf_name_data.push_back(cipsecendpthistremoteaddr2.get_name_leafdata());
    if (cipsecendpthistremoteprotocol.is_set || is_set(cipsecendpthistremoteprotocol.yfilter)) leaf_name_data.push_back(cipsecendpthistremoteprotocol.get_name_leafdata());
    if (cipsecendpthistremoteport.is_set || is_set(cipsecendpthistremoteport.yfilter)) leaf_name_data.push_back(cipsecendpthistremoteport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECFLOWMONITORMIB::Cipsecendpthisttable::Cipsecendpthistentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECFLOWMONITORMIB::Cipsecendpthisttable::Cipsecendpthistentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPSECFLOWMONITORMIB::Cipsecendpthisttable::Cipsecendpthistentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipSecEndPtHistIndex")
    {
        cipsecendpthistindex = value;
        cipsecendpthistindex.value_namespace = name_space;
        cipsecendpthistindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecEndPtHistTunIndex")
    {
        cipsecendpthisttunindex = value;
        cipsecendpthisttunindex.value_namespace = name_space;
        cipsecendpthisttunindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecEndPtHistActiveIndex")
    {
        cipsecendpthistactiveindex = value;
        cipsecendpthistactiveindex.value_namespace = name_space;
        cipsecendpthistactiveindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecEndPtHistLocalName")
    {
        cipsecendpthistlocalname = value;
        cipsecendpthistlocalname.value_namespace = name_space;
        cipsecendpthistlocalname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecEndPtHistLocalType")
    {
        cipsecendpthistlocaltype = value;
        cipsecendpthistlocaltype.value_namespace = name_space;
        cipsecendpthistlocaltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecEndPtHistLocalAddr1")
    {
        cipsecendpthistlocaladdr1 = value;
        cipsecendpthistlocaladdr1.value_namespace = name_space;
        cipsecendpthistlocaladdr1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecEndPtHistLocalAddr2")
    {
        cipsecendpthistlocaladdr2 = value;
        cipsecendpthistlocaladdr2.value_namespace = name_space;
        cipsecendpthistlocaladdr2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecEndPtHistLocalProtocol")
    {
        cipsecendpthistlocalprotocol = value;
        cipsecendpthistlocalprotocol.value_namespace = name_space;
        cipsecendpthistlocalprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecEndPtHistLocalPort")
    {
        cipsecendpthistlocalport = value;
        cipsecendpthistlocalport.value_namespace = name_space;
        cipsecendpthistlocalport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecEndPtHistRemoteName")
    {
        cipsecendpthistremotename = value;
        cipsecendpthistremotename.value_namespace = name_space;
        cipsecendpthistremotename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecEndPtHistRemoteType")
    {
        cipsecendpthistremotetype = value;
        cipsecendpthistremotetype.value_namespace = name_space;
        cipsecendpthistremotetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecEndPtHistRemoteAddr1")
    {
        cipsecendpthistremoteaddr1 = value;
        cipsecendpthistremoteaddr1.value_namespace = name_space;
        cipsecendpthistremoteaddr1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecEndPtHistRemoteAddr2")
    {
        cipsecendpthistremoteaddr2 = value;
        cipsecendpthistremoteaddr2.value_namespace = name_space;
        cipsecendpthistremoteaddr2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecEndPtHistRemoteProtocol")
    {
        cipsecendpthistremoteprotocol = value;
        cipsecendpthistremoteprotocol.value_namespace = name_space;
        cipsecendpthistremoteprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecEndPtHistRemotePort")
    {
        cipsecendpthistremoteport = value;
        cipsecendpthistremoteport.value_namespace = name_space;
        cipsecendpthistremoteport.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSECFLOWMONITORMIB::Cipsecendpthisttable::Cipsecendpthistentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipSecEndPtHistIndex")
    {
        cipsecendpthistindex.yfilter = yfilter;
    }
    if(value_path == "cipSecEndPtHistTunIndex")
    {
        cipsecendpthisttunindex.yfilter = yfilter;
    }
    if(value_path == "cipSecEndPtHistActiveIndex")
    {
        cipsecendpthistactiveindex.yfilter = yfilter;
    }
    if(value_path == "cipSecEndPtHistLocalName")
    {
        cipsecendpthistlocalname.yfilter = yfilter;
    }
    if(value_path == "cipSecEndPtHistLocalType")
    {
        cipsecendpthistlocaltype.yfilter = yfilter;
    }
    if(value_path == "cipSecEndPtHistLocalAddr1")
    {
        cipsecendpthistlocaladdr1.yfilter = yfilter;
    }
    if(value_path == "cipSecEndPtHistLocalAddr2")
    {
        cipsecendpthistlocaladdr2.yfilter = yfilter;
    }
    if(value_path == "cipSecEndPtHistLocalProtocol")
    {
        cipsecendpthistlocalprotocol.yfilter = yfilter;
    }
    if(value_path == "cipSecEndPtHistLocalPort")
    {
        cipsecendpthistlocalport.yfilter = yfilter;
    }
    if(value_path == "cipSecEndPtHistRemoteName")
    {
        cipsecendpthistremotename.yfilter = yfilter;
    }
    if(value_path == "cipSecEndPtHistRemoteType")
    {
        cipsecendpthistremotetype.yfilter = yfilter;
    }
    if(value_path == "cipSecEndPtHistRemoteAddr1")
    {
        cipsecendpthistremoteaddr1.yfilter = yfilter;
    }
    if(value_path == "cipSecEndPtHistRemoteAddr2")
    {
        cipsecendpthistremoteaddr2.yfilter = yfilter;
    }
    if(value_path == "cipSecEndPtHistRemoteProtocol")
    {
        cipsecendpthistremoteprotocol.yfilter = yfilter;
    }
    if(value_path == "cipSecEndPtHistRemotePort")
    {
        cipsecendpthistremoteport.yfilter = yfilter;
    }
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecendpthisttable::Cipsecendpthistentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipSecEndPtHistIndex" || name == "cipSecEndPtHistTunIndex" || name == "cipSecEndPtHistActiveIndex" || name == "cipSecEndPtHistLocalName" || name == "cipSecEndPtHistLocalType" || name == "cipSecEndPtHistLocalAddr1" || name == "cipSecEndPtHistLocalAddr2" || name == "cipSecEndPtHistLocalProtocol" || name == "cipSecEndPtHistLocalPort" || name == "cipSecEndPtHistRemoteName" || name == "cipSecEndPtHistRemoteType" || name == "cipSecEndPtHistRemoteAddr1" || name == "cipSecEndPtHistRemoteAddr2" || name == "cipSecEndPtHistRemoteProtocol" || name == "cipSecEndPtHistRemotePort")
        return true;
    return false;
}

CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailtable()
{

    yang_name = "cikeFailTable"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSECFLOWMONITORMIB::Cikefailtable::~Cikefailtable()
{
}

bool CISCOIPSECFLOWMONITORMIB::Cikefailtable::has_data() const
{
    for (std::size_t index=0; index<cikefailentry.size(); index++)
    {
        if(cikefailentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPSECFLOWMONITORMIB::Cikefailtable::has_operation() const
{
    for (std::size_t index=0; index<cikefailentry.size(); index++)
    {
        if(cikefailentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPSECFLOWMONITORMIB::Cikefailtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECFLOWMONITORMIB::Cikefailtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cikeFailTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECFLOWMONITORMIB::Cikefailtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECFLOWMONITORMIB::Cikefailtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cikeFailEntry")
    {
        auto c = std::make_shared<CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailentry>();
        c->parent = this;
        cikefailentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECFLOWMONITORMIB::Cikefailtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cikefailentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIPSECFLOWMONITORMIB::Cikefailtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPSECFLOWMONITORMIB::Cikefailtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPSECFLOWMONITORMIB::Cikefailtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cikeFailEntry")
        return true;
    return false;
}

CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailentry::Cikefailentry()
    :
    cikefailindex{YType::int32, "cikeFailIndex"},
    cikefailreason{YType::enumeration, "cikeFailReason"},
    cikefailtime{YType::uint32, "cikeFailTime"},
    cikefaillocaltype{YType::enumeration, "cikeFailLocalType"},
    cikefaillocalvalue{YType::str, "cikeFailLocalValue"},
    cikefailremotetype{YType::enumeration, "cikeFailRemoteType"},
    cikefailremotevalue{YType::str, "cikeFailRemoteValue"},
    cikefaillocaladdr{YType::str, "cikeFailLocalAddr"},
    cikefailremoteaddr{YType::str, "cikeFailRemoteAddr"}
{

    yang_name = "cikeFailEntry"; yang_parent_name = "cikeFailTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailentry::~Cikefailentry()
{
}

bool CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailentry::has_data() const
{
    return cikefailindex.is_set
	|| cikefailreason.is_set
	|| cikefailtime.is_set
	|| cikefaillocaltype.is_set
	|| cikefaillocalvalue.is_set
	|| cikefailremotetype.is_set
	|| cikefailremotevalue.is_set
	|| cikefaillocaladdr.is_set
	|| cikefailremoteaddr.is_set;
}

bool CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cikefailindex.yfilter)
	|| ydk::is_set(cikefailreason.yfilter)
	|| ydk::is_set(cikefailtime.yfilter)
	|| ydk::is_set(cikefaillocaltype.yfilter)
	|| ydk::is_set(cikefaillocalvalue.yfilter)
	|| ydk::is_set(cikefailremotetype.yfilter)
	|| ydk::is_set(cikefailremotevalue.yfilter)
	|| ydk::is_set(cikefaillocaladdr.yfilter)
	|| ydk::is_set(cikefailremoteaddr.yfilter);
}

std::string CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/cikeFailTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cikeFailEntry" <<"[cikeFailIndex='" <<cikefailindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cikefailindex.is_set || is_set(cikefailindex.yfilter)) leaf_name_data.push_back(cikefailindex.get_name_leafdata());
    if (cikefailreason.is_set || is_set(cikefailreason.yfilter)) leaf_name_data.push_back(cikefailreason.get_name_leafdata());
    if (cikefailtime.is_set || is_set(cikefailtime.yfilter)) leaf_name_data.push_back(cikefailtime.get_name_leafdata());
    if (cikefaillocaltype.is_set || is_set(cikefaillocaltype.yfilter)) leaf_name_data.push_back(cikefaillocaltype.get_name_leafdata());
    if (cikefaillocalvalue.is_set || is_set(cikefaillocalvalue.yfilter)) leaf_name_data.push_back(cikefaillocalvalue.get_name_leafdata());
    if (cikefailremotetype.is_set || is_set(cikefailremotetype.yfilter)) leaf_name_data.push_back(cikefailremotetype.get_name_leafdata());
    if (cikefailremotevalue.is_set || is_set(cikefailremotevalue.yfilter)) leaf_name_data.push_back(cikefailremotevalue.get_name_leafdata());
    if (cikefaillocaladdr.is_set || is_set(cikefaillocaladdr.yfilter)) leaf_name_data.push_back(cikefaillocaladdr.get_name_leafdata());
    if (cikefailremoteaddr.is_set || is_set(cikefailremoteaddr.yfilter)) leaf_name_data.push_back(cikefailremoteaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cikeFailIndex")
    {
        cikefailindex = value;
        cikefailindex.value_namespace = name_space;
        cikefailindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeFailReason")
    {
        cikefailreason = value;
        cikefailreason.value_namespace = name_space;
        cikefailreason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeFailTime")
    {
        cikefailtime = value;
        cikefailtime.value_namespace = name_space;
        cikefailtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeFailLocalType")
    {
        cikefaillocaltype = value;
        cikefaillocaltype.value_namespace = name_space;
        cikefaillocaltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeFailLocalValue")
    {
        cikefaillocalvalue = value;
        cikefaillocalvalue.value_namespace = name_space;
        cikefaillocalvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeFailRemoteType")
    {
        cikefailremotetype = value;
        cikefailremotetype.value_namespace = name_space;
        cikefailremotetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeFailRemoteValue")
    {
        cikefailremotevalue = value;
        cikefailremotevalue.value_namespace = name_space;
        cikefailremotevalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeFailLocalAddr")
    {
        cikefaillocaladdr = value;
        cikefaillocaladdr.value_namespace = name_space;
        cikefaillocaladdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cikeFailRemoteAddr")
    {
        cikefailremoteaddr = value;
        cikefailremoteaddr.value_namespace = name_space;
        cikefailremoteaddr.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cikeFailIndex")
    {
        cikefailindex.yfilter = yfilter;
    }
    if(value_path == "cikeFailReason")
    {
        cikefailreason.yfilter = yfilter;
    }
    if(value_path == "cikeFailTime")
    {
        cikefailtime.yfilter = yfilter;
    }
    if(value_path == "cikeFailLocalType")
    {
        cikefaillocaltype.yfilter = yfilter;
    }
    if(value_path == "cikeFailLocalValue")
    {
        cikefaillocalvalue.yfilter = yfilter;
    }
    if(value_path == "cikeFailRemoteType")
    {
        cikefailremotetype.yfilter = yfilter;
    }
    if(value_path == "cikeFailRemoteValue")
    {
        cikefailremotevalue.yfilter = yfilter;
    }
    if(value_path == "cikeFailLocalAddr")
    {
        cikefaillocaladdr.yfilter = yfilter;
    }
    if(value_path == "cikeFailRemoteAddr")
    {
        cikefailremoteaddr.yfilter = yfilter;
    }
}

bool CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cikeFailIndex" || name == "cikeFailReason" || name == "cikeFailTime" || name == "cikeFailLocalType" || name == "cikeFailLocalValue" || name == "cikeFailRemoteType" || name == "cikeFailRemoteValue" || name == "cikeFailLocalAddr" || name == "cikeFailRemoteAddr")
        return true;
    return false;
}

CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::Cipsecfailtable()
{

    yang_name = "cipSecFailTable"; yang_parent_name = "CISCO-IPSEC-FLOW-MONITOR-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::~Cipsecfailtable()
{
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::has_data() const
{
    for (std::size_t index=0; index<cipsecfailentry.size(); index++)
    {
        if(cipsecfailentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::has_operation() const
{
    for (std::size_t index=0; index<cipsecfailentry.size(); index++)
    {
        if(cipsecfailentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecFailTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipSecFailEntry")
    {
        auto c = std::make_shared<CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::Cipsecfailentry>();
        c->parent = this;
        cipsecfailentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cipsecfailentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipSecFailEntry")
        return true;
    return false;
}

CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::Cipsecfailentry::Cipsecfailentry()
    :
    cipsecfailindex{YType::int32, "cipSecFailIndex"},
    cipsecfailreason{YType::enumeration, "cipSecFailReason"},
    cipsecfailtime{YType::uint32, "cipSecFailTime"},
    cipsecfailtunnelindex{YType::int32, "cipSecFailTunnelIndex"},
    cipsecfailsaspi{YType::int32, "cipSecFailSaSpi"},
    cipsecfailpktsrcaddr{YType::str, "cipSecFailPktSrcAddr"},
    cipsecfailpktdstaddr{YType::str, "cipSecFailPktDstAddr"}
{

    yang_name = "cipSecFailEntry"; yang_parent_name = "cipSecFailTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::Cipsecfailentry::~Cipsecfailentry()
{
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::Cipsecfailentry::has_data() const
{
    return cipsecfailindex.is_set
	|| cipsecfailreason.is_set
	|| cipsecfailtime.is_set
	|| cipsecfailtunnelindex.is_set
	|| cipsecfailsaspi.is_set
	|| cipsecfailpktsrcaddr.is_set
	|| cipsecfailpktdstaddr.is_set;
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::Cipsecfailentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipsecfailindex.yfilter)
	|| ydk::is_set(cipsecfailreason.yfilter)
	|| ydk::is_set(cipsecfailtime.yfilter)
	|| ydk::is_set(cipsecfailtunnelindex.yfilter)
	|| ydk::is_set(cipsecfailsaspi.yfilter)
	|| ydk::is_set(cipsecfailpktsrcaddr.yfilter)
	|| ydk::is_set(cipsecfailpktdstaddr.yfilter);
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::Cipsecfailentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-FLOW-MONITOR-MIB:CISCO-IPSEC-FLOW-MONITOR-MIB/cipSecFailTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::Cipsecfailentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipSecFailEntry" <<"[cipSecFailIndex='" <<cipsecfailindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::Cipsecfailentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsecfailindex.is_set || is_set(cipsecfailindex.yfilter)) leaf_name_data.push_back(cipsecfailindex.get_name_leafdata());
    if (cipsecfailreason.is_set || is_set(cipsecfailreason.yfilter)) leaf_name_data.push_back(cipsecfailreason.get_name_leafdata());
    if (cipsecfailtime.is_set || is_set(cipsecfailtime.yfilter)) leaf_name_data.push_back(cipsecfailtime.get_name_leafdata());
    if (cipsecfailtunnelindex.is_set || is_set(cipsecfailtunnelindex.yfilter)) leaf_name_data.push_back(cipsecfailtunnelindex.get_name_leafdata());
    if (cipsecfailsaspi.is_set || is_set(cipsecfailsaspi.yfilter)) leaf_name_data.push_back(cipsecfailsaspi.get_name_leafdata());
    if (cipsecfailpktsrcaddr.is_set || is_set(cipsecfailpktsrcaddr.yfilter)) leaf_name_data.push_back(cipsecfailpktsrcaddr.get_name_leafdata());
    if (cipsecfailpktdstaddr.is_set || is_set(cipsecfailpktdstaddr.yfilter)) leaf_name_data.push_back(cipsecfailpktdstaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::Cipsecfailentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::Cipsecfailentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::Cipsecfailentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipSecFailIndex")
    {
        cipsecfailindex = value;
        cipsecfailindex.value_namespace = name_space;
        cipsecfailindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecFailReason")
    {
        cipsecfailreason = value;
        cipsecfailreason.value_namespace = name_space;
        cipsecfailreason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecFailTime")
    {
        cipsecfailtime = value;
        cipsecfailtime.value_namespace = name_space;
        cipsecfailtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecFailTunnelIndex")
    {
        cipsecfailtunnelindex = value;
        cipsecfailtunnelindex.value_namespace = name_space;
        cipsecfailtunnelindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecFailSaSpi")
    {
        cipsecfailsaspi = value;
        cipsecfailsaspi.value_namespace = name_space;
        cipsecfailsaspi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecFailPktSrcAddr")
    {
        cipsecfailpktsrcaddr = value;
        cipsecfailpktsrcaddr.value_namespace = name_space;
        cipsecfailpktsrcaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipSecFailPktDstAddr")
    {
        cipsecfailpktdstaddr = value;
        cipsecfailpktdstaddr.value_namespace = name_space;
        cipsecfailpktdstaddr.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::Cipsecfailentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipSecFailIndex")
    {
        cipsecfailindex.yfilter = yfilter;
    }
    if(value_path == "cipSecFailReason")
    {
        cipsecfailreason.yfilter = yfilter;
    }
    if(value_path == "cipSecFailTime")
    {
        cipsecfailtime.yfilter = yfilter;
    }
    if(value_path == "cipSecFailTunnelIndex")
    {
        cipsecfailtunnelindex.yfilter = yfilter;
    }
    if(value_path == "cipSecFailSaSpi")
    {
        cipsecfailsaspi.yfilter = yfilter;
    }
    if(value_path == "cipSecFailPktSrcAddr")
    {
        cipsecfailpktsrcaddr.yfilter = yfilter;
    }
    if(value_path == "cipSecFailPktDstAddr")
    {
        cipsecfailpktdstaddr.yfilter = yfilter;
    }
}

bool CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::Cipsecfailentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipSecFailIndex" || name == "cipSecFailReason" || name == "cipSecFailTime" || name == "cipSecFailTunnelIndex" || name == "cipSecFailSaSpi" || name == "cipSecFailPktSrcAddr" || name == "cipSecFailPktDstAddr")
        return true;
    return false;
}

const Enum::YLeaf IkePeerType::ipAddrPeer {1, "ipAddrPeer"};
const Enum::YLeaf IkePeerType::namePeer {2, "namePeer"};

const Enum::YLeaf IkeNegoMode::main {1, "main"};
const Enum::YLeaf IkeNegoMode::aggressive {2, "aggressive"};

const Enum::YLeaf IkeHashAlgo::none {1, "none"};
const Enum::YLeaf IkeHashAlgo::md5 {2, "md5"};
const Enum::YLeaf IkeHashAlgo::sha {3, "sha"};

const Enum::YLeaf IkeAuthMethod::none {1, "none"};
const Enum::YLeaf IkeAuthMethod::preSharedKey {2, "preSharedKey"};
const Enum::YLeaf IkeAuthMethod::rsaSig {3, "rsaSig"};
const Enum::YLeaf IkeAuthMethod::rsaEncrypt {4, "rsaEncrypt"};
const Enum::YLeaf IkeAuthMethod::revPublicKey {5, "revPublicKey"};

const Enum::YLeaf DiffHellmanGrp::none {1, "none"};
const Enum::YLeaf DiffHellmanGrp::dhGroup1 {2, "dhGroup1"};
const Enum::YLeaf DiffHellmanGrp::dhGroup2 {3, "dhGroup2"};

const Enum::YLeaf KeyType::ike {1, "ike"};
const Enum::YLeaf KeyType::manual {2, "manual"};

const Enum::YLeaf EncapMode::tunnel {1, "tunnel"};
const Enum::YLeaf EncapMode::transport {2, "transport"};

const Enum::YLeaf EncryptAlgo::none {1, "none"};
const Enum::YLeaf EncryptAlgo::des {2, "des"};
const Enum::YLeaf EncryptAlgo::des3 {3, "des3"};

const Enum::YLeaf AuthAlgo::none {1, "none"};
const Enum::YLeaf AuthAlgo::hmacMd5 {2, "hmacMd5"};
const Enum::YLeaf AuthAlgo::hmacSha {3, "hmacSha"};

const Enum::YLeaf CompAlgo::none {1, "none"};
const Enum::YLeaf CompAlgo::ldf {2, "ldf"};

const Enum::YLeaf EndPtType::singleIpAddr {1, "singleIpAddr"};
const Enum::YLeaf EndPtType::ipAddrRange {2, "ipAddrRange"};
const Enum::YLeaf EndPtType::ipSubnet {3, "ipSubnet"};

const Enum::YLeaf TunnelStatus::active {1, "active"};
const Enum::YLeaf TunnelStatus::destroy {2, "destroy"};

const Enum::YLeaf TrapStatus::enabled {1, "enabled"};
const Enum::YLeaf TrapStatus::disabled {2, "disabled"};

const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cipsechistglobalcntl::Cipsechistcheckpoint::ready {1, "ready"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cipsechistglobalcntl::Cipsechistcheckpoint::checkPoint {2, "checkPoint"};

const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cipsecspitable::Cipsecspientry::Cipsecspidirection::in {1, "in"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cipsecspitable::Cipsecspientry::Cipsecspidirection::out {2, "out"};

const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cipsecspitable::Cipsecspientry::Cipsecspiprotocol::ah {1, "ah"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cipsecspitable::Cipsecspientry::Cipsecspiprotocol::esp {2, "esp"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cipsecspitable::Cipsecspientry::Cipsecspiprotocol::ipcomp {3, "ipcomp"};

const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cipsecspitable::Cipsecspientry::Cipsecspistatus::active {1, "active"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cipsecspitable::Cipsecspientry::Cipsecspistatus::expiring {2, "expiring"};

const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::Ciketunnelhistentry::Ciketunhisttermreason::other {1, "other"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::Ciketunnelhistentry::Ciketunhisttermreason::normal {2, "normal"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::Ciketunnelhistentry::Ciketunhisttermreason::operRequest {3, "operRequest"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::Ciketunnelhistentry::Ciketunhisttermreason::peerDelRequest {4, "peerDelRequest"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::Ciketunnelhistentry::Ciketunhisttermreason::peerLost {5, "peerLost"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::Ciketunnelhistentry::Ciketunhisttermreason::localFailure {6, "localFailure"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::Ciketunnelhistentry::Ciketunhisttermreason::checkPointReg {7, "checkPointReg"};

const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::Cipsectunnelhistentry::Cipsectunhisttermreason::other {1, "other"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::Cipsectunnelhistentry::Cipsectunhisttermreason::normal {2, "normal"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::Cipsectunnelhistentry::Cipsectunhisttermreason::operRequest {3, "operRequest"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::Cipsectunnelhistentry::Cipsectunhisttermreason::peerDelRequest {4, "peerDelRequest"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::Cipsectunnelhistentry::Cipsectunhisttermreason::peerLost {5, "peerLost"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::Cipsectunnelhistentry::Cipsectunhisttermreason::seqNumRollOver {6, "seqNumRollOver"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::Cipsectunnelhistentry::Cipsectunhisttermreason::checkPointReq {7, "checkPointReq"};

const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailentry::Cikefailreason::other {1, "other"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailentry::Cikefailreason::peerDelRequest {2, "peerDelRequest"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailentry::Cikefailreason::peerLost {3, "peerLost"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailentry::Cikefailreason::localFailure {4, "localFailure"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailentry::Cikefailreason::authFailure {5, "authFailure"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailentry::Cikefailreason::hashValidation {6, "hashValidation"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailentry::Cikefailreason::encryptFailure {7, "encryptFailure"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailentry::Cikefailreason::internalError {8, "internalError"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailentry::Cikefailreason::sysCapExceeded {9, "sysCapExceeded"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailentry::Cikefailreason::proposalFailure {10, "proposalFailure"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailentry::Cikefailreason::peerCertUnavailable {11, "peerCertUnavailable"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailentry::Cikefailreason::peerCertNotValid {12, "peerCertNotValid"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailentry::Cikefailreason::localCertExpired {13, "localCertExpired"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailentry::Cikefailreason::crlFailure {14, "crlFailure"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailentry::Cikefailreason::peerEncodingError {15, "peerEncodingError"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailentry::Cikefailreason::nonExistentSa {16, "nonExistentSa"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailentry::Cikefailreason::operRequest {17, "operRequest"};

const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::Cipsecfailentry::Cipsecfailreason::other {1, "other"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::Cipsecfailentry::Cipsecfailreason::internalError {2, "internalError"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::Cipsecfailentry::Cipsecfailreason::peerEncodingError {3, "peerEncodingError"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::Cipsecfailentry::Cipsecfailreason::proposalFailure {4, "proposalFailure"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::Cipsecfailentry::Cipsecfailreason::protocolUseFail {5, "protocolUseFail"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::Cipsecfailentry::Cipsecfailreason::nonExistentSa {6, "nonExistentSa"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::Cipsecfailentry::Cipsecfailreason::decryptFailure {7, "decryptFailure"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::Cipsecfailentry::Cipsecfailreason::encryptFailure {8, "encryptFailure"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::Cipsecfailentry::Cipsecfailreason::inAuthFailure {9, "inAuthFailure"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::Cipsecfailentry::Cipsecfailreason::outAuthFailure {10, "outAuthFailure"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::Cipsecfailentry::Cipsecfailreason::compression {11, "compression"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::Cipsecfailentry::Cipsecfailreason::sysCapExceeded {12, "sysCapExceeded"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::Cipsecfailentry::Cipsecfailreason::peerDelRequest {13, "peerDelRequest"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::Cipsecfailentry::Cipsecfailreason::peerLost {14, "peerLost"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::Cipsecfailentry::Cipsecfailreason::seqNumRollOver {15, "seqNumRollOver"};
const Enum::YLeaf CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::Cipsecfailentry::Cipsecfailreason::operRequest {16, "operRequest"};


}
}

