
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_34.hpp"
#include "Cisco_NX_OS_device_35.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::EpsItems::EpIdItems::EpList::EpList()
    :
    epid{YType::uint32, "epId"},
    adminst{YType::enumeration, "adminSt"},
    descr{YType::str, "descr"},
    sourceinterface{YType::str, "sourceInterface"},
    multisitebordergwinterface{YType::str, "multisiteBordergwInterface"},
    holddowntime{YType::uint16, "holdDownTime"},
    hostreach{YType::enumeration, "hostReach"},
    suppressarp{YType::boolean, "suppressARP"},
    mcastgroupl2{YType::str, "mcastGroupL2"},
    mcastgroupl3{YType::str, "mcastGroupL3"},
    ingressreplprotobgp{YType::boolean, "ingressReplProtoBGP"},
    advertisevmac{YType::boolean, "advertiseVmac"},
    controllerid{YType::uint32, "controllerId"},
    cfgsrc{YType::enumeration, "cfgSrc"},
    encaptype{YType::enumeration, "encapType"},
    autoremapreplicationservers{YType::boolean, "autoRemapReplicationServers"},
    operstate{YType::enumeration, "operState"},
    operstsrcloopbackintf{YType::enumeration, "operStSrcLoopbackIntf"},
    operstmultisitebrdrgwloopbackintf{YType::enumeration, "operStMultisiteBrdrGwLoopbackIntf"},
    adminstmultisitebrdrgwloopackintf{YType::enumeration, "adminStMultisiteBrdrGwLoopackIntf"},
    operencaptype{YType::enumeration, "operEncapType"},
    mac{YType::str, "mac"},
    virtualrtrmac{YType::str, "virtualRtrMac"},
    virtualrtrmacreorig{YType::str, "virtualRtrMacReorig"},
    learningmode{YType::enumeration, "learningMode"},
    holduptime{YType::uint16, "holdUpTime"},
    holddowntimerexpirytime{YType::str, "holdDownTimerExpiryTime"},
    holduptimerexpirytime{YType::str, "holdUpTimerExpiryTime"},
    delayrestoremsbrdrgwexpirytime{YType::str, "delayRestoreMsBrdrGwExpiryTime"},
    vpcvipnotified{YType::boolean, "vpcVIPNotified"},
    primaryip{YType::str, "primaryIp"},
    secondaryip{YType::str, "secondaryIp"},
    multisitebrdrgwintfip{YType::str, "multisiteBrdrGwIntfIp"}
        ,
    peers_items(std::make_shared<System::EpsItems::EpIdItems::EpList::PeersItems>())
    , nws_items(std::make_shared<System::EpsItems::EpIdItems::EpList::NwsItems>())
    , cntrs_items(std::make_shared<System::EpsItems::EpIdItems::EpList::CntrsItems>())
    , rsopersourceinterface_items(std::make_shared<System::EpsItems::EpIdItems::EpList::RsoperSourceInterfaceItems>())
{
    peers_items->parent = this;
    nws_items->parent = this;
    cntrs_items->parent = this;
    rsopersourceinterface_items->parent = this;

    yang_name = "Ep-list"; yang_parent_name = "epId-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::EpsItems::EpIdItems::EpList::~EpList()
{
}

bool System::EpsItems::EpIdItems::EpList::has_data() const
{
    if (is_presence_container) return true;
    return epid.is_set
	|| adminst.is_set
	|| descr.is_set
	|| sourceinterface.is_set
	|| multisitebordergwinterface.is_set
	|| holddowntime.is_set
	|| hostreach.is_set
	|| suppressarp.is_set
	|| mcastgroupl2.is_set
	|| mcastgroupl3.is_set
	|| ingressreplprotobgp.is_set
	|| advertisevmac.is_set
	|| controllerid.is_set
	|| cfgsrc.is_set
	|| encaptype.is_set
	|| autoremapreplicationservers.is_set
	|| operstate.is_set
	|| operstsrcloopbackintf.is_set
	|| operstmultisitebrdrgwloopbackintf.is_set
	|| adminstmultisitebrdrgwloopackintf.is_set
	|| operencaptype.is_set
	|| mac.is_set
	|| virtualrtrmac.is_set
	|| virtualrtrmacreorig.is_set
	|| learningmode.is_set
	|| holduptime.is_set
	|| holddowntimerexpirytime.is_set
	|| holduptimerexpirytime.is_set
	|| delayrestoremsbrdrgwexpirytime.is_set
	|| vpcvipnotified.is_set
	|| primaryip.is_set
	|| secondaryip.is_set
	|| multisitebrdrgwintfip.is_set
	|| (peers_items !=  nullptr && peers_items->has_data())
	|| (nws_items !=  nullptr && nws_items->has_data())
	|| (cntrs_items !=  nullptr && cntrs_items->has_data())
	|| (rsopersourceinterface_items !=  nullptr && rsopersourceinterface_items->has_data());
}

bool System::EpsItems::EpIdItems::EpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(epid.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(sourceinterface.yfilter)
	|| ydk::is_set(multisitebordergwinterface.yfilter)
	|| ydk::is_set(holddowntime.yfilter)
	|| ydk::is_set(hostreach.yfilter)
	|| ydk::is_set(suppressarp.yfilter)
	|| ydk::is_set(mcastgroupl2.yfilter)
	|| ydk::is_set(mcastgroupl3.yfilter)
	|| ydk::is_set(ingressreplprotobgp.yfilter)
	|| ydk::is_set(advertisevmac.yfilter)
	|| ydk::is_set(controllerid.yfilter)
	|| ydk::is_set(cfgsrc.yfilter)
	|| ydk::is_set(encaptype.yfilter)
	|| ydk::is_set(autoremapreplicationservers.yfilter)
	|| ydk::is_set(operstate.yfilter)
	|| ydk::is_set(operstsrcloopbackintf.yfilter)
	|| ydk::is_set(operstmultisitebrdrgwloopbackintf.yfilter)
	|| ydk::is_set(adminstmultisitebrdrgwloopackintf.yfilter)
	|| ydk::is_set(operencaptype.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(virtualrtrmac.yfilter)
	|| ydk::is_set(virtualrtrmacreorig.yfilter)
	|| ydk::is_set(learningmode.yfilter)
	|| ydk::is_set(holduptime.yfilter)
	|| ydk::is_set(holddowntimerexpirytime.yfilter)
	|| ydk::is_set(holduptimerexpirytime.yfilter)
	|| ydk::is_set(delayrestoremsbrdrgwexpirytime.yfilter)
	|| ydk::is_set(vpcvipnotified.yfilter)
	|| ydk::is_set(primaryip.yfilter)
	|| ydk::is_set(secondaryip.yfilter)
	|| ydk::is_set(multisitebrdrgwintfip.yfilter)
	|| (peers_items !=  nullptr && peers_items->has_operation())
	|| (nws_items !=  nullptr && nws_items->has_operation())
	|| (cntrs_items !=  nullptr && cntrs_items->has_operation())
	|| (rsopersourceinterface_items !=  nullptr && rsopersourceinterface_items->has_operation());
}

std::string System::EpsItems::EpIdItems::EpList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/eps-items/epId-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::EpsItems::EpIdItems::EpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ep-list";
    ADD_KEY_TOKEN(epid, "epId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (epid.is_set || is_set(epid.yfilter)) leaf_name_data.push_back(epid.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (sourceinterface.is_set || is_set(sourceinterface.yfilter)) leaf_name_data.push_back(sourceinterface.get_name_leafdata());
    if (multisitebordergwinterface.is_set || is_set(multisitebordergwinterface.yfilter)) leaf_name_data.push_back(multisitebordergwinterface.get_name_leafdata());
    if (holddowntime.is_set || is_set(holddowntime.yfilter)) leaf_name_data.push_back(holddowntime.get_name_leafdata());
    if (hostreach.is_set || is_set(hostreach.yfilter)) leaf_name_data.push_back(hostreach.get_name_leafdata());
    if (suppressarp.is_set || is_set(suppressarp.yfilter)) leaf_name_data.push_back(suppressarp.get_name_leafdata());
    if (mcastgroupl2.is_set || is_set(mcastgroupl2.yfilter)) leaf_name_data.push_back(mcastgroupl2.get_name_leafdata());
    if (mcastgroupl3.is_set || is_set(mcastgroupl3.yfilter)) leaf_name_data.push_back(mcastgroupl3.get_name_leafdata());
    if (ingressreplprotobgp.is_set || is_set(ingressreplprotobgp.yfilter)) leaf_name_data.push_back(ingressreplprotobgp.get_name_leafdata());
    if (advertisevmac.is_set || is_set(advertisevmac.yfilter)) leaf_name_data.push_back(advertisevmac.get_name_leafdata());
    if (controllerid.is_set || is_set(controllerid.yfilter)) leaf_name_data.push_back(controllerid.get_name_leafdata());
    if (cfgsrc.is_set || is_set(cfgsrc.yfilter)) leaf_name_data.push_back(cfgsrc.get_name_leafdata());
    if (encaptype.is_set || is_set(encaptype.yfilter)) leaf_name_data.push_back(encaptype.get_name_leafdata());
    if (autoremapreplicationservers.is_set || is_set(autoremapreplicationservers.yfilter)) leaf_name_data.push_back(autoremapreplicationservers.get_name_leafdata());
    if (operstate.is_set || is_set(operstate.yfilter)) leaf_name_data.push_back(operstate.get_name_leafdata());
    if (operstsrcloopbackintf.is_set || is_set(operstsrcloopbackintf.yfilter)) leaf_name_data.push_back(operstsrcloopbackintf.get_name_leafdata());
    if (operstmultisitebrdrgwloopbackintf.is_set || is_set(operstmultisitebrdrgwloopbackintf.yfilter)) leaf_name_data.push_back(operstmultisitebrdrgwloopbackintf.get_name_leafdata());
    if (adminstmultisitebrdrgwloopackintf.is_set || is_set(adminstmultisitebrdrgwloopackintf.yfilter)) leaf_name_data.push_back(adminstmultisitebrdrgwloopackintf.get_name_leafdata());
    if (operencaptype.is_set || is_set(operencaptype.yfilter)) leaf_name_data.push_back(operencaptype.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (virtualrtrmac.is_set || is_set(virtualrtrmac.yfilter)) leaf_name_data.push_back(virtualrtrmac.get_name_leafdata());
    if (virtualrtrmacreorig.is_set || is_set(virtualrtrmacreorig.yfilter)) leaf_name_data.push_back(virtualrtrmacreorig.get_name_leafdata());
    if (learningmode.is_set || is_set(learningmode.yfilter)) leaf_name_data.push_back(learningmode.get_name_leafdata());
    if (holduptime.is_set || is_set(holduptime.yfilter)) leaf_name_data.push_back(holduptime.get_name_leafdata());
    if (holddowntimerexpirytime.is_set || is_set(holddowntimerexpirytime.yfilter)) leaf_name_data.push_back(holddowntimerexpirytime.get_name_leafdata());
    if (holduptimerexpirytime.is_set || is_set(holduptimerexpirytime.yfilter)) leaf_name_data.push_back(holduptimerexpirytime.get_name_leafdata());
    if (delayrestoremsbrdrgwexpirytime.is_set || is_set(delayrestoremsbrdrgwexpirytime.yfilter)) leaf_name_data.push_back(delayrestoremsbrdrgwexpirytime.get_name_leafdata());
    if (vpcvipnotified.is_set || is_set(vpcvipnotified.yfilter)) leaf_name_data.push_back(vpcvipnotified.get_name_leafdata());
    if (primaryip.is_set || is_set(primaryip.yfilter)) leaf_name_data.push_back(primaryip.get_name_leafdata());
    if (secondaryip.is_set || is_set(secondaryip.yfilter)) leaf_name_data.push_back(secondaryip.get_name_leafdata());
    if (multisitebrdrgwintfip.is_set || is_set(multisitebrdrgwintfip.yfilter)) leaf_name_data.push_back(multisitebrdrgwintfip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EpsItems::EpIdItems::EpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peers-items")
    {
        if(peers_items == nullptr)
        {
            peers_items = std::make_shared<System::EpsItems::EpIdItems::EpList::PeersItems>();
        }
        return peers_items;
    }

    if(child_yang_name == "nws-items")
    {
        if(nws_items == nullptr)
        {
            nws_items = std::make_shared<System::EpsItems::EpIdItems::EpList::NwsItems>();
        }
        return nws_items;
    }

    if(child_yang_name == "cntrs-items")
    {
        if(cntrs_items == nullptr)
        {
            cntrs_items = std::make_shared<System::EpsItems::EpIdItems::EpList::CntrsItems>();
        }
        return cntrs_items;
    }

    if(child_yang_name == "rsoperSourceInterface-items")
    {
        if(rsopersourceinterface_items == nullptr)
        {
            rsopersourceinterface_items = std::make_shared<System::EpsItems::EpIdItems::EpList::RsoperSourceInterfaceItems>();
        }
        return rsopersourceinterface_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EpsItems::EpIdItems::EpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peers_items != nullptr)
    {
        _children["peers-items"] = peers_items;
    }

    if(nws_items != nullptr)
    {
        _children["nws-items"] = nws_items;
    }

    if(cntrs_items != nullptr)
    {
        _children["cntrs-items"] = cntrs_items;
    }

    if(rsopersourceinterface_items != nullptr)
    {
        _children["rsoperSourceInterface-items"] = rsopersourceinterface_items;
    }

    return _children;
}

void System::EpsItems::EpIdItems::EpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "epId")
    {
        epid = value;
        epid.value_namespace = name_space;
        epid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourceInterface")
    {
        sourceinterface = value;
        sourceinterface.value_namespace = name_space;
        sourceinterface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multisiteBordergwInterface")
    {
        multisitebordergwinterface = value;
        multisitebordergwinterface.value_namespace = name_space;
        multisitebordergwinterface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdDownTime")
    {
        holddowntime = value;
        holddowntime.value_namespace = name_space;
        holddowntime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostReach")
    {
        hostreach = value;
        hostreach.value_namespace = name_space;
        hostreach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressARP")
    {
        suppressarp = value;
        suppressarp.value_namespace = name_space;
        suppressarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastGroupL2")
    {
        mcastgroupl2 = value;
        mcastgroupl2.value_namespace = name_space;
        mcastgroupl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastGroupL3")
    {
        mcastgroupl3 = value;
        mcastgroupl3.value_namespace = name_space;
        mcastgroupl3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingressReplProtoBGP")
    {
        ingressreplprotobgp = value;
        ingressreplprotobgp.value_namespace = name_space;
        ingressreplprotobgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertiseVmac")
    {
        advertisevmac = value;
        advertisevmac.value_namespace = name_space;
        advertisevmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controllerId")
    {
        controllerid = value;
        controllerid.value_namespace = name_space;
        controllerid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfgSrc")
    {
        cfgsrc = value;
        cfgsrc.value_namespace = name_space;
        cfgsrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapType")
    {
        encaptype = value;
        encaptype.value_namespace = name_space;
        encaptype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoRemapReplicationServers")
    {
        autoremapreplicationservers = value;
        autoremapreplicationservers.value_namespace = name_space;
        autoremapreplicationservers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operState")
    {
        operstate = value;
        operstate.value_namespace = name_space;
        operstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operStSrcLoopbackIntf")
    {
        operstsrcloopbackintf = value;
        operstsrcloopbackintf.value_namespace = name_space;
        operstsrcloopbackintf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operStMultisiteBrdrGwLoopbackIntf")
    {
        operstmultisitebrdrgwloopbackintf = value;
        operstmultisitebrdrgwloopbackintf.value_namespace = name_space;
        operstmultisitebrdrgwloopbackintf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminStMultisiteBrdrGwLoopackIntf")
    {
        adminstmultisitebrdrgwloopackintf = value;
        adminstmultisitebrdrgwloopackintf.value_namespace = name_space;
        adminstmultisitebrdrgwloopackintf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operEncapType")
    {
        operencaptype = value;
        operencaptype.value_namespace = name_space;
        operencaptype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtualRtrMac")
    {
        virtualrtrmac = value;
        virtualrtrmac.value_namespace = name_space;
        virtualrtrmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtualRtrMacReorig")
    {
        virtualrtrmacreorig = value;
        virtualrtrmacreorig.value_namespace = name_space;
        virtualrtrmacreorig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learningMode")
    {
        learningmode = value;
        learningmode.value_namespace = name_space;
        learningmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdUpTime")
    {
        holduptime = value;
        holduptime.value_namespace = name_space;
        holduptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdDownTimerExpiryTime")
    {
        holddowntimerexpirytime = value;
        holddowntimerexpirytime.value_namespace = name_space;
        holddowntimerexpirytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdUpTimerExpiryTime")
    {
        holduptimerexpirytime = value;
        holduptimerexpirytime.value_namespace = name_space;
        holduptimerexpirytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delayRestoreMsBrdrGwExpiryTime")
    {
        delayrestoremsbrdrgwexpirytime = value;
        delayrestoremsbrdrgwexpirytime.value_namespace = name_space;
        delayrestoremsbrdrgwexpirytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcVIPNotified")
    {
        vpcvipnotified = value;
        vpcvipnotified.value_namespace = name_space;
        vpcvipnotified.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primaryIp")
    {
        primaryip = value;
        primaryip.value_namespace = name_space;
        primaryip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondaryIp")
    {
        secondaryip = value;
        secondaryip.value_namespace = name_space;
        secondaryip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multisiteBrdrGwIntfIp")
    {
        multisitebrdrgwintfip = value;
        multisitebrdrgwintfip.value_namespace = name_space;
        multisitebrdrgwintfip.value_namespace_prefix = name_space_prefix;
    }
}

void System::EpsItems::EpIdItems::EpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "epId")
    {
        epid.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "sourceInterface")
    {
        sourceinterface.yfilter = yfilter;
    }
    if(value_path == "multisiteBordergwInterface")
    {
        multisitebordergwinterface.yfilter = yfilter;
    }
    if(value_path == "holdDownTime")
    {
        holddowntime.yfilter = yfilter;
    }
    if(value_path == "hostReach")
    {
        hostreach.yfilter = yfilter;
    }
    if(value_path == "suppressARP")
    {
        suppressarp.yfilter = yfilter;
    }
    if(value_path == "mcastGroupL2")
    {
        mcastgroupl2.yfilter = yfilter;
    }
    if(value_path == "mcastGroupL3")
    {
        mcastgroupl3.yfilter = yfilter;
    }
    if(value_path == "ingressReplProtoBGP")
    {
        ingressreplprotobgp.yfilter = yfilter;
    }
    if(value_path == "advertiseVmac")
    {
        advertisevmac.yfilter = yfilter;
    }
    if(value_path == "controllerId")
    {
        controllerid.yfilter = yfilter;
    }
    if(value_path == "cfgSrc")
    {
        cfgsrc.yfilter = yfilter;
    }
    if(value_path == "encapType")
    {
        encaptype.yfilter = yfilter;
    }
    if(value_path == "autoRemapReplicationServers")
    {
        autoremapreplicationservers.yfilter = yfilter;
    }
    if(value_path == "operState")
    {
        operstate.yfilter = yfilter;
    }
    if(value_path == "operStSrcLoopbackIntf")
    {
        operstsrcloopbackintf.yfilter = yfilter;
    }
    if(value_path == "operStMultisiteBrdrGwLoopbackIntf")
    {
        operstmultisitebrdrgwloopbackintf.yfilter = yfilter;
    }
    if(value_path == "adminStMultisiteBrdrGwLoopackIntf")
    {
        adminstmultisitebrdrgwloopackintf.yfilter = yfilter;
    }
    if(value_path == "operEncapType")
    {
        operencaptype.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "virtualRtrMac")
    {
        virtualrtrmac.yfilter = yfilter;
    }
    if(value_path == "virtualRtrMacReorig")
    {
        virtualrtrmacreorig.yfilter = yfilter;
    }
    if(value_path == "learningMode")
    {
        learningmode.yfilter = yfilter;
    }
    if(value_path == "holdUpTime")
    {
        holduptime.yfilter = yfilter;
    }
    if(value_path == "holdDownTimerExpiryTime")
    {
        holddowntimerexpirytime.yfilter = yfilter;
    }
    if(value_path == "holdUpTimerExpiryTime")
    {
        holduptimerexpirytime.yfilter = yfilter;
    }
    if(value_path == "delayRestoreMsBrdrGwExpiryTime")
    {
        delayrestoremsbrdrgwexpirytime.yfilter = yfilter;
    }
    if(value_path == "vpcVIPNotified")
    {
        vpcvipnotified.yfilter = yfilter;
    }
    if(value_path == "primaryIp")
    {
        primaryip.yfilter = yfilter;
    }
    if(value_path == "secondaryIp")
    {
        secondaryip.yfilter = yfilter;
    }
    if(value_path == "multisiteBrdrGwIntfIp")
    {
        multisitebrdrgwintfip.yfilter = yfilter;
    }
}

bool System::EpsItems::EpIdItems::EpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peers-items" || name == "nws-items" || name == "cntrs-items" || name == "rsoperSourceInterface-items" || name == "epId" || name == "adminSt" || name == "descr" || name == "sourceInterface" || name == "multisiteBordergwInterface" || name == "holdDownTime" || name == "hostReach" || name == "suppressARP" || name == "mcastGroupL2" || name == "mcastGroupL3" || name == "ingressReplProtoBGP" || name == "advertiseVmac" || name == "controllerId" || name == "cfgSrc" || name == "encapType" || name == "autoRemapReplicationServers" || name == "operState" || name == "operStSrcLoopbackIntf" || name == "operStMultisiteBrdrGwLoopbackIntf" || name == "adminStMultisiteBrdrGwLoopackIntf" || name == "operEncapType" || name == "mac" || name == "virtualRtrMac" || name == "virtualRtrMacReorig" || name == "learningMode" || name == "holdUpTime" || name == "holdDownTimerExpiryTime" || name == "holdUpTimerExpiryTime" || name == "delayRestoreMsBrdrGwExpiryTime" || name == "vpcVIPNotified" || name == "primaryIp" || name == "secondaryIp" || name == "multisiteBrdrGwIntfIp")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::PeersItems::PeersItems()
    :
    st_ir_peer_items(std::make_shared<System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems>())
    , dyn_ir_peer_items(std::make_shared<System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems>())
    , dy_peer_items(std::make_shared<System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems>())
    , st_peer_items(std::make_shared<System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems>())
{
    st_ir_peer_items->parent = this;
    dyn_ir_peer_items->parent = this;
    dy_peer_items->parent = this;
    st_peer_items->parent = this;

    yang_name = "peers-items"; yang_parent_name = "Ep-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::PeersItems::~PeersItems()
{
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::has_data() const
{
    if (is_presence_container) return true;
    return (st_ir_peer_items !=  nullptr && st_ir_peer_items->has_data())
	|| (dyn_ir_peer_items !=  nullptr && dyn_ir_peer_items->has_data())
	|| (dy_peer_items !=  nullptr && dy_peer_items->has_data())
	|| (st_peer_items !=  nullptr && st_peer_items->has_data());
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::has_operation() const
{
    return is_set(yfilter)
	|| (st_ir_peer_items !=  nullptr && st_ir_peer_items->has_operation())
	|| (dyn_ir_peer_items !=  nullptr && dyn_ir_peer_items->has_operation())
	|| (dy_peer_items !=  nullptr && dy_peer_items->has_operation())
	|| (st_peer_items !=  nullptr && st_peer_items->has_operation());
}

std::string System::EpsItems::EpIdItems::EpList::PeersItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::PeersItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EpsItems::EpIdItems::EpList::PeersItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "st_ir_peer-items")
    {
        if(st_ir_peer_items == nullptr)
        {
            st_ir_peer_items = std::make_shared<System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems>();
        }
        return st_ir_peer_items;
    }

    if(child_yang_name == "dyn_ir_peer-items")
    {
        if(dyn_ir_peer_items == nullptr)
        {
            dyn_ir_peer_items = std::make_shared<System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems>();
        }
        return dyn_ir_peer_items;
    }

    if(child_yang_name == "dy_peer-items")
    {
        if(dy_peer_items == nullptr)
        {
            dy_peer_items = std::make_shared<System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems>();
        }
        return dy_peer_items;
    }

    if(child_yang_name == "st_peer-items")
    {
        if(st_peer_items == nullptr)
        {
            st_peer_items = std::make_shared<System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems>();
        }
        return st_peer_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EpsItems::EpIdItems::EpList::PeersItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(st_ir_peer_items != nullptr)
    {
        _children["st_ir_peer-items"] = st_ir_peer_items;
    }

    if(dyn_ir_peer_items != nullptr)
    {
        _children["dyn_ir_peer-items"] = dyn_ir_peer_items;
    }

    if(dy_peer_items != nullptr)
    {
        _children["dy_peer-items"] = dy_peer_items;
    }

    if(st_peer_items != nullptr)
    {
        _children["st_peer-items"] = st_peer_items;
    }

    return _children;
}

void System::EpsItems::EpIdItems::EpList::PeersItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EpsItems::EpIdItems::EpList::PeersItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "st_ir_peer-items" || name == "dyn_ir_peer-items" || name == "dy_peer-items" || name == "st_peer-items")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::StIrPeerItems()
    :
    stirpeer_list(this, {"ip"})
{

    yang_name = "st_ir_peer-items"; yang_parent_name = "peers-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::~StIrPeerItems()
{
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stirpeer_list.len(); index++)
    {
        if(stirpeer_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::has_operation() const
{
    for (std::size_t index=0; index<stirpeer_list.len(); index++)
    {
        if(stirpeer_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "st_ir_peer-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "StIRPeer-list")
    {
        auto ent_ = std::make_shared<System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::StIRPeerList>();
        ent_->parent = this;
        stirpeer_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stirpeer_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "StIRPeer-list")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::StIRPeerList::StIRPeerList()
    :
    ip{YType::str, "ip"},
    state{YType::enumeration, "state"},
    upstatetransitionts{YType::str, "upStateTransitionTs"},
    createts{YType::str, "createTs"}
        ,
    cntrs_items(std::make_shared<System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::StIRPeerList::CntrsItems>())
{
    cntrs_items->parent = this;

    yang_name = "StIRPeer-list"; yang_parent_name = "st_ir_peer-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::StIRPeerList::~StIRPeerList()
{
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::StIRPeerList::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| state.is_set
	|| upstatetransitionts.is_set
	|| createts.is_set
	|| (cntrs_items !=  nullptr && cntrs_items->has_data());
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::StIRPeerList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(upstatetransitionts.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| (cntrs_items !=  nullptr && cntrs_items->has_operation());
}

std::string System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::StIRPeerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "StIRPeer-list";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::StIRPeerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (upstatetransitionts.is_set || is_set(upstatetransitionts.yfilter)) leaf_name_data.push_back(upstatetransitionts.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::StIRPeerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cntrs-items")
    {
        if(cntrs_items == nullptr)
        {
            cntrs_items = std::make_shared<System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::StIRPeerList::CntrsItems>();
        }
        return cntrs_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::StIRPeerList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cntrs_items != nullptr)
    {
        _children["cntrs-items"] = cntrs_items;
    }

    return _children;
}

void System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::StIRPeerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upStateTransitionTs")
    {
        upstatetransitionts = value;
        upstatetransitionts.value_namespace = name_space;
        upstatetransitionts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
}

void System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::StIRPeerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "upStateTransitionTs")
    {
        upstatetransitionts.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::StIRPeerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cntrs-items" || name == "ip" || name == "state" || name == "upStateTransitionTs" || name == "createTs")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::StIRPeerList::CntrsItems::CntrsItems()
    :
    txucastpkts{YType::uint64, "txUcastpkts"},
    txucastbytes{YType::uint64, "txUcastbytes"},
    txmcastpkts{YType::uint64, "txMcastpkts"},
    txmcastbytes{YType::uint64, "txMcastbytes"},
    rxucastpkts{YType::uint64, "rxUcastpkts"},
    rxucastbytes{YType::uint64, "rxUcastbytes"},
    rxmcastpkts{YType::uint64, "rxMcastpkts"},
    rxmcastbytes{YType::uint64, "rxMcastbytes"}
{

    yang_name = "cntrs-items"; yang_parent_name = "StIRPeer-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::StIRPeerList::CntrsItems::~CntrsItems()
{
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::StIRPeerList::CntrsItems::has_data() const
{
    if (is_presence_container) return true;
    return txucastpkts.is_set
	|| txucastbytes.is_set
	|| txmcastpkts.is_set
	|| txmcastbytes.is_set
	|| rxucastpkts.is_set
	|| rxucastbytes.is_set
	|| rxmcastpkts.is_set
	|| rxmcastbytes.is_set;
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::StIRPeerList::CntrsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(txucastpkts.yfilter)
	|| ydk::is_set(txucastbytes.yfilter)
	|| ydk::is_set(txmcastpkts.yfilter)
	|| ydk::is_set(txmcastbytes.yfilter)
	|| ydk::is_set(rxucastpkts.yfilter)
	|| ydk::is_set(rxucastbytes.yfilter)
	|| ydk::is_set(rxmcastpkts.yfilter)
	|| ydk::is_set(rxmcastbytes.yfilter);
}

std::string System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::StIRPeerList::CntrsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cntrs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::StIRPeerList::CntrsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (txucastpkts.is_set || is_set(txucastpkts.yfilter)) leaf_name_data.push_back(txucastpkts.get_name_leafdata());
    if (txucastbytes.is_set || is_set(txucastbytes.yfilter)) leaf_name_data.push_back(txucastbytes.get_name_leafdata());
    if (txmcastpkts.is_set || is_set(txmcastpkts.yfilter)) leaf_name_data.push_back(txmcastpkts.get_name_leafdata());
    if (txmcastbytes.is_set || is_set(txmcastbytes.yfilter)) leaf_name_data.push_back(txmcastbytes.get_name_leafdata());
    if (rxucastpkts.is_set || is_set(rxucastpkts.yfilter)) leaf_name_data.push_back(rxucastpkts.get_name_leafdata());
    if (rxucastbytes.is_set || is_set(rxucastbytes.yfilter)) leaf_name_data.push_back(rxucastbytes.get_name_leafdata());
    if (rxmcastpkts.is_set || is_set(rxmcastpkts.yfilter)) leaf_name_data.push_back(rxmcastpkts.get_name_leafdata());
    if (rxmcastbytes.is_set || is_set(rxmcastbytes.yfilter)) leaf_name_data.push_back(rxmcastbytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::StIRPeerList::CntrsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::StIRPeerList::CntrsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::StIRPeerList::CntrsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "txUcastpkts")
    {
        txucastpkts = value;
        txucastpkts.value_namespace = name_space;
        txucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txUcastbytes")
    {
        txucastbytes = value;
        txucastbytes.value_namespace = name_space;
        txucastbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txMcastpkts")
    {
        txmcastpkts = value;
        txmcastpkts.value_namespace = name_space;
        txmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txMcastbytes")
    {
        txmcastbytes = value;
        txmcastbytes.value_namespace = name_space;
        txmcastbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxUcastpkts")
    {
        rxucastpkts = value;
        rxucastpkts.value_namespace = name_space;
        rxucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxUcastbytes")
    {
        rxucastbytes = value;
        rxucastbytes.value_namespace = name_space;
        rxucastbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxMcastpkts")
    {
        rxmcastpkts = value;
        rxmcastpkts.value_namespace = name_space;
        rxmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxMcastbytes")
    {
        rxmcastbytes = value;
        rxmcastbytes.value_namespace = name_space;
        rxmcastbytes.value_namespace_prefix = name_space_prefix;
    }
}

void System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::StIRPeerList::CntrsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "txUcastpkts")
    {
        txucastpkts.yfilter = yfilter;
    }
    if(value_path == "txUcastbytes")
    {
        txucastbytes.yfilter = yfilter;
    }
    if(value_path == "txMcastpkts")
    {
        txmcastpkts.yfilter = yfilter;
    }
    if(value_path == "txMcastbytes")
    {
        txmcastbytes.yfilter = yfilter;
    }
    if(value_path == "rxUcastpkts")
    {
        rxucastpkts.yfilter = yfilter;
    }
    if(value_path == "rxUcastbytes")
    {
        rxucastbytes.yfilter = yfilter;
    }
    if(value_path == "rxMcastpkts")
    {
        rxmcastpkts.yfilter = yfilter;
    }
    if(value_path == "rxMcastbytes")
    {
        rxmcastbytes.yfilter = yfilter;
    }
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::StIRPeerList::CntrsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "txUcastpkts" || name == "txUcastbytes" || name == "txMcastpkts" || name == "txMcastbytes" || name == "rxUcastpkts" || name == "rxUcastbytes" || name == "rxMcastpkts" || name == "rxMcastbytes")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::DynIrPeerItems()
    :
    dyirpeer_list(this, {"ip"})
{

    yang_name = "dyn_ir_peer-items"; yang_parent_name = "peers-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::~DynIrPeerItems()
{
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dyirpeer_list.len(); index++)
    {
        if(dyirpeer_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::has_operation() const
{
    for (std::size_t index=0; index<dyirpeer_list.len(); index++)
    {
        if(dyirpeer_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dyn_ir_peer-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DyIRPeer-list")
    {
        auto ent_ = std::make_shared<System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::DyIRPeerList>();
        ent_->parent = this;
        dyirpeer_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dyirpeer_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DyIRPeer-list")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::DyIRPeerList::DyIRPeerList()
    :
    ip{YType::str, "ip"},
    state{YType::enumeration, "state"},
    upstatetransitionts{YType::str, "upStateTransitionTs"},
    createts{YType::str, "createTs"}
        ,
    cntrs_items(std::make_shared<System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::DyIRPeerList::CntrsItems>())
{
    cntrs_items->parent = this;

    yang_name = "DyIRPeer-list"; yang_parent_name = "dyn_ir_peer-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::DyIRPeerList::~DyIRPeerList()
{
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::DyIRPeerList::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| state.is_set
	|| upstatetransitionts.is_set
	|| createts.is_set
	|| (cntrs_items !=  nullptr && cntrs_items->has_data());
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::DyIRPeerList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(upstatetransitionts.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| (cntrs_items !=  nullptr && cntrs_items->has_operation());
}

std::string System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::DyIRPeerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DyIRPeer-list";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::DyIRPeerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (upstatetransitionts.is_set || is_set(upstatetransitionts.yfilter)) leaf_name_data.push_back(upstatetransitionts.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::DyIRPeerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cntrs-items")
    {
        if(cntrs_items == nullptr)
        {
            cntrs_items = std::make_shared<System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::DyIRPeerList::CntrsItems>();
        }
        return cntrs_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::DyIRPeerList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cntrs_items != nullptr)
    {
        _children["cntrs-items"] = cntrs_items;
    }

    return _children;
}

void System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::DyIRPeerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upStateTransitionTs")
    {
        upstatetransitionts = value;
        upstatetransitionts.value_namespace = name_space;
        upstatetransitionts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
}

void System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::DyIRPeerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "upStateTransitionTs")
    {
        upstatetransitionts.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::DyIRPeerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cntrs-items" || name == "ip" || name == "state" || name == "upStateTransitionTs" || name == "createTs")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::DyIRPeerList::CntrsItems::CntrsItems()
    :
    txucastpkts{YType::uint64, "txUcastpkts"},
    txucastbytes{YType::uint64, "txUcastbytes"},
    txmcastpkts{YType::uint64, "txMcastpkts"},
    txmcastbytes{YType::uint64, "txMcastbytes"},
    rxucastpkts{YType::uint64, "rxUcastpkts"},
    rxucastbytes{YType::uint64, "rxUcastbytes"},
    rxmcastpkts{YType::uint64, "rxMcastpkts"},
    rxmcastbytes{YType::uint64, "rxMcastbytes"}
{

    yang_name = "cntrs-items"; yang_parent_name = "DyIRPeer-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::DyIRPeerList::CntrsItems::~CntrsItems()
{
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::DyIRPeerList::CntrsItems::has_data() const
{
    if (is_presence_container) return true;
    return txucastpkts.is_set
	|| txucastbytes.is_set
	|| txmcastpkts.is_set
	|| txmcastbytes.is_set
	|| rxucastpkts.is_set
	|| rxucastbytes.is_set
	|| rxmcastpkts.is_set
	|| rxmcastbytes.is_set;
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::DyIRPeerList::CntrsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(txucastpkts.yfilter)
	|| ydk::is_set(txucastbytes.yfilter)
	|| ydk::is_set(txmcastpkts.yfilter)
	|| ydk::is_set(txmcastbytes.yfilter)
	|| ydk::is_set(rxucastpkts.yfilter)
	|| ydk::is_set(rxucastbytes.yfilter)
	|| ydk::is_set(rxmcastpkts.yfilter)
	|| ydk::is_set(rxmcastbytes.yfilter);
}

std::string System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::DyIRPeerList::CntrsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cntrs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::DyIRPeerList::CntrsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (txucastpkts.is_set || is_set(txucastpkts.yfilter)) leaf_name_data.push_back(txucastpkts.get_name_leafdata());
    if (txucastbytes.is_set || is_set(txucastbytes.yfilter)) leaf_name_data.push_back(txucastbytes.get_name_leafdata());
    if (txmcastpkts.is_set || is_set(txmcastpkts.yfilter)) leaf_name_data.push_back(txmcastpkts.get_name_leafdata());
    if (txmcastbytes.is_set || is_set(txmcastbytes.yfilter)) leaf_name_data.push_back(txmcastbytes.get_name_leafdata());
    if (rxucastpkts.is_set || is_set(rxucastpkts.yfilter)) leaf_name_data.push_back(rxucastpkts.get_name_leafdata());
    if (rxucastbytes.is_set || is_set(rxucastbytes.yfilter)) leaf_name_data.push_back(rxucastbytes.get_name_leafdata());
    if (rxmcastpkts.is_set || is_set(rxmcastpkts.yfilter)) leaf_name_data.push_back(rxmcastpkts.get_name_leafdata());
    if (rxmcastbytes.is_set || is_set(rxmcastbytes.yfilter)) leaf_name_data.push_back(rxmcastbytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::DyIRPeerList::CntrsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::DyIRPeerList::CntrsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::DyIRPeerList::CntrsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "txUcastpkts")
    {
        txucastpkts = value;
        txucastpkts.value_namespace = name_space;
        txucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txUcastbytes")
    {
        txucastbytes = value;
        txucastbytes.value_namespace = name_space;
        txucastbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txMcastpkts")
    {
        txmcastpkts = value;
        txmcastpkts.value_namespace = name_space;
        txmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txMcastbytes")
    {
        txmcastbytes = value;
        txmcastbytes.value_namespace = name_space;
        txmcastbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxUcastpkts")
    {
        rxucastpkts = value;
        rxucastpkts.value_namespace = name_space;
        rxucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxUcastbytes")
    {
        rxucastbytes = value;
        rxucastbytes.value_namespace = name_space;
        rxucastbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxMcastpkts")
    {
        rxmcastpkts = value;
        rxmcastpkts.value_namespace = name_space;
        rxmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxMcastbytes")
    {
        rxmcastbytes = value;
        rxmcastbytes.value_namespace = name_space;
        rxmcastbytes.value_namespace_prefix = name_space_prefix;
    }
}

void System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::DyIRPeerList::CntrsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "txUcastpkts")
    {
        txucastpkts.yfilter = yfilter;
    }
    if(value_path == "txUcastbytes")
    {
        txucastbytes.yfilter = yfilter;
    }
    if(value_path == "txMcastpkts")
    {
        txmcastpkts.yfilter = yfilter;
    }
    if(value_path == "txMcastbytes")
    {
        txmcastbytes.yfilter = yfilter;
    }
    if(value_path == "rxUcastpkts")
    {
        rxucastpkts.yfilter = yfilter;
    }
    if(value_path == "rxUcastbytes")
    {
        rxucastbytes.yfilter = yfilter;
    }
    if(value_path == "rxMcastpkts")
    {
        rxmcastpkts.yfilter = yfilter;
    }
    if(value_path == "rxMcastbytes")
    {
        rxmcastbytes.yfilter = yfilter;
    }
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::DyIRPeerList::CntrsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "txUcastpkts" || name == "txUcastbytes" || name == "txMcastpkts" || name == "txMcastbytes" || name == "rxUcastpkts" || name == "rxUcastbytes" || name == "rxMcastpkts" || name == "rxMcastbytes")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::DyPeerItems()
    :
    dypeer_list(this, {"ip"})
{

    yang_name = "dy_peer-items"; yang_parent_name = "peers-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::~DyPeerItems()
{
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dypeer_list.len(); index++)
    {
        if(dypeer_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::has_operation() const
{
    for (std::size_t index=0; index<dypeer_list.len(); index++)
    {
        if(dypeer_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dy_peer-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DyPeer-list")
    {
        auto ent_ = std::make_shared<System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::DyPeerList>();
        ent_->parent = this;
        dypeer_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dypeer_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DyPeer-list")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::DyPeerList::DyPeerList()
    :
    ip{YType::str, "ip"},
    state{YType::enumeration, "state"},
    upstatetransitionts{YType::str, "upStateTransitionTs"},
    mac{YType::str, "mac"},
    firstvni{YType::uint32, "firstVNI"},
    createts{YType::str, "createTs"}
        ,
    cntrs_items(std::make_shared<System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::DyPeerList::CntrsItems>())
{
    cntrs_items->parent = this;

    yang_name = "DyPeer-list"; yang_parent_name = "dy_peer-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::DyPeerList::~DyPeerList()
{
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::DyPeerList::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| state.is_set
	|| upstatetransitionts.is_set
	|| mac.is_set
	|| firstvni.is_set
	|| createts.is_set
	|| (cntrs_items !=  nullptr && cntrs_items->has_data());
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::DyPeerList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(upstatetransitionts.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(firstvni.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| (cntrs_items !=  nullptr && cntrs_items->has_operation());
}

std::string System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::DyPeerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DyPeer-list";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::DyPeerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (upstatetransitionts.is_set || is_set(upstatetransitionts.yfilter)) leaf_name_data.push_back(upstatetransitionts.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (firstvni.is_set || is_set(firstvni.yfilter)) leaf_name_data.push_back(firstvni.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::DyPeerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cntrs-items")
    {
        if(cntrs_items == nullptr)
        {
            cntrs_items = std::make_shared<System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::DyPeerList::CntrsItems>();
        }
        return cntrs_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::DyPeerList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cntrs_items != nullptr)
    {
        _children["cntrs-items"] = cntrs_items;
    }

    return _children;
}

void System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::DyPeerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upStateTransitionTs")
    {
        upstatetransitionts = value;
        upstatetransitionts.value_namespace = name_space;
        upstatetransitionts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firstVNI")
    {
        firstvni = value;
        firstvni.value_namespace = name_space;
        firstvni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
}

void System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::DyPeerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "upStateTransitionTs")
    {
        upstatetransitionts.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "firstVNI")
    {
        firstvni.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::DyPeerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cntrs-items" || name == "ip" || name == "state" || name == "upStateTransitionTs" || name == "mac" || name == "firstVNI" || name == "createTs")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::DyPeerList::CntrsItems::CntrsItems()
    :
    txucastpkts{YType::uint64, "txUcastpkts"},
    txucastbytes{YType::uint64, "txUcastbytes"},
    txmcastpkts{YType::uint64, "txMcastpkts"},
    txmcastbytes{YType::uint64, "txMcastbytes"},
    rxucastpkts{YType::uint64, "rxUcastpkts"},
    rxucastbytes{YType::uint64, "rxUcastbytes"},
    rxmcastpkts{YType::uint64, "rxMcastpkts"},
    rxmcastbytes{YType::uint64, "rxMcastbytes"}
{

    yang_name = "cntrs-items"; yang_parent_name = "DyPeer-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::DyPeerList::CntrsItems::~CntrsItems()
{
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::DyPeerList::CntrsItems::has_data() const
{
    if (is_presence_container) return true;
    return txucastpkts.is_set
	|| txucastbytes.is_set
	|| txmcastpkts.is_set
	|| txmcastbytes.is_set
	|| rxucastpkts.is_set
	|| rxucastbytes.is_set
	|| rxmcastpkts.is_set
	|| rxmcastbytes.is_set;
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::DyPeerList::CntrsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(txucastpkts.yfilter)
	|| ydk::is_set(txucastbytes.yfilter)
	|| ydk::is_set(txmcastpkts.yfilter)
	|| ydk::is_set(txmcastbytes.yfilter)
	|| ydk::is_set(rxucastpkts.yfilter)
	|| ydk::is_set(rxucastbytes.yfilter)
	|| ydk::is_set(rxmcastpkts.yfilter)
	|| ydk::is_set(rxmcastbytes.yfilter);
}

std::string System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::DyPeerList::CntrsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cntrs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::DyPeerList::CntrsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (txucastpkts.is_set || is_set(txucastpkts.yfilter)) leaf_name_data.push_back(txucastpkts.get_name_leafdata());
    if (txucastbytes.is_set || is_set(txucastbytes.yfilter)) leaf_name_data.push_back(txucastbytes.get_name_leafdata());
    if (txmcastpkts.is_set || is_set(txmcastpkts.yfilter)) leaf_name_data.push_back(txmcastpkts.get_name_leafdata());
    if (txmcastbytes.is_set || is_set(txmcastbytes.yfilter)) leaf_name_data.push_back(txmcastbytes.get_name_leafdata());
    if (rxucastpkts.is_set || is_set(rxucastpkts.yfilter)) leaf_name_data.push_back(rxucastpkts.get_name_leafdata());
    if (rxucastbytes.is_set || is_set(rxucastbytes.yfilter)) leaf_name_data.push_back(rxucastbytes.get_name_leafdata());
    if (rxmcastpkts.is_set || is_set(rxmcastpkts.yfilter)) leaf_name_data.push_back(rxmcastpkts.get_name_leafdata());
    if (rxmcastbytes.is_set || is_set(rxmcastbytes.yfilter)) leaf_name_data.push_back(rxmcastbytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::DyPeerList::CntrsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::DyPeerList::CntrsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::DyPeerList::CntrsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "txUcastpkts")
    {
        txucastpkts = value;
        txucastpkts.value_namespace = name_space;
        txucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txUcastbytes")
    {
        txucastbytes = value;
        txucastbytes.value_namespace = name_space;
        txucastbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txMcastpkts")
    {
        txmcastpkts = value;
        txmcastpkts.value_namespace = name_space;
        txmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txMcastbytes")
    {
        txmcastbytes = value;
        txmcastbytes.value_namespace = name_space;
        txmcastbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxUcastpkts")
    {
        rxucastpkts = value;
        rxucastpkts.value_namespace = name_space;
        rxucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxUcastbytes")
    {
        rxucastbytes = value;
        rxucastbytes.value_namespace = name_space;
        rxucastbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxMcastpkts")
    {
        rxmcastpkts = value;
        rxmcastpkts.value_namespace = name_space;
        rxmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxMcastbytes")
    {
        rxmcastbytes = value;
        rxmcastbytes.value_namespace = name_space;
        rxmcastbytes.value_namespace_prefix = name_space_prefix;
    }
}

void System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::DyPeerList::CntrsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "txUcastpkts")
    {
        txucastpkts.yfilter = yfilter;
    }
    if(value_path == "txUcastbytes")
    {
        txucastbytes.yfilter = yfilter;
    }
    if(value_path == "txMcastpkts")
    {
        txmcastpkts.yfilter = yfilter;
    }
    if(value_path == "txMcastbytes")
    {
        txmcastbytes.yfilter = yfilter;
    }
    if(value_path == "rxUcastpkts")
    {
        rxucastpkts.yfilter = yfilter;
    }
    if(value_path == "rxUcastbytes")
    {
        rxucastbytes.yfilter = yfilter;
    }
    if(value_path == "rxMcastpkts")
    {
        rxmcastpkts.yfilter = yfilter;
    }
    if(value_path == "rxMcastbytes")
    {
        rxmcastbytes.yfilter = yfilter;
    }
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::DyPeerList::CntrsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "txUcastpkts" || name == "txUcastbytes" || name == "txMcastpkts" || name == "txMcastbytes" || name == "rxUcastpkts" || name == "rxUcastbytes" || name == "rxMcastpkts" || name == "rxMcastbytes")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::StPeerItems()
    :
    stpeer_list(this, {"ip"})
{

    yang_name = "st_peer-items"; yang_parent_name = "peers-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::~StPeerItems()
{
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stpeer_list.len(); index++)
    {
        if(stpeer_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::has_operation() const
{
    for (std::size_t index=0; index<stpeer_list.len(); index++)
    {
        if(stpeer_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "st_peer-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "StPeer-list")
    {
        auto ent_ = std::make_shared<System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::StPeerList>();
        ent_->parent = this;
        stpeer_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stpeer_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "StPeer-list")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::StPeerList::StPeerList()
    :
    ip{YType::str, "ip"},
    type{YType::str, "type"},
    peerid{YType::uint32, "peerId"},
    state{YType::enumeration, "state"},
    upstatetransitionts{YType::str, "upStateTransitionTs"},
    mac{YType::str, "mac"},
    firstvni{YType::uint32, "firstVNI"},
    createts{YType::str, "createTs"}
        ,
    cntrs_items(std::make_shared<System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::StPeerList::CntrsItems>())
{
    cntrs_items->parent = this;

    yang_name = "StPeer-list"; yang_parent_name = "st_peer-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::StPeerList::~StPeerList()
{
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::StPeerList::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| type.is_set
	|| peerid.is_set
	|| state.is_set
	|| upstatetransitionts.is_set
	|| mac.is_set
	|| firstvni.is_set
	|| createts.is_set
	|| (cntrs_items !=  nullptr && cntrs_items->has_data());
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::StPeerList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(peerid.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(upstatetransitionts.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(firstvni.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| (cntrs_items !=  nullptr && cntrs_items->has_operation());
}

std::string System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::StPeerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "StPeer-list";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::StPeerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (peerid.is_set || is_set(peerid.yfilter)) leaf_name_data.push_back(peerid.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (upstatetransitionts.is_set || is_set(upstatetransitionts.yfilter)) leaf_name_data.push_back(upstatetransitionts.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (firstvni.is_set || is_set(firstvni.yfilter)) leaf_name_data.push_back(firstvni.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::StPeerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cntrs-items")
    {
        if(cntrs_items == nullptr)
        {
            cntrs_items = std::make_shared<System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::StPeerList::CntrsItems>();
        }
        return cntrs_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::StPeerList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cntrs_items != nullptr)
    {
        _children["cntrs-items"] = cntrs_items;
    }

    return _children;
}

void System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::StPeerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerId")
    {
        peerid = value;
        peerid.value_namespace = name_space;
        peerid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upStateTransitionTs")
    {
        upstatetransitionts = value;
        upstatetransitionts.value_namespace = name_space;
        upstatetransitionts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firstVNI")
    {
        firstvni = value;
        firstvni.value_namespace = name_space;
        firstvni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
}

void System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::StPeerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "peerId")
    {
        peerid.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "upStateTransitionTs")
    {
        upstatetransitionts.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "firstVNI")
    {
        firstvni.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::StPeerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cntrs-items" || name == "ip" || name == "type" || name == "peerId" || name == "state" || name == "upStateTransitionTs" || name == "mac" || name == "firstVNI" || name == "createTs")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::StPeerList::CntrsItems::CntrsItems()
    :
    txucastpkts{YType::uint64, "txUcastpkts"},
    txucastbytes{YType::uint64, "txUcastbytes"},
    txmcastpkts{YType::uint64, "txMcastpkts"},
    txmcastbytes{YType::uint64, "txMcastbytes"},
    rxucastpkts{YType::uint64, "rxUcastpkts"},
    rxucastbytes{YType::uint64, "rxUcastbytes"},
    rxmcastpkts{YType::uint64, "rxMcastpkts"},
    rxmcastbytes{YType::uint64, "rxMcastbytes"}
{

    yang_name = "cntrs-items"; yang_parent_name = "StPeer-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::StPeerList::CntrsItems::~CntrsItems()
{
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::StPeerList::CntrsItems::has_data() const
{
    if (is_presence_container) return true;
    return txucastpkts.is_set
	|| txucastbytes.is_set
	|| txmcastpkts.is_set
	|| txmcastbytes.is_set
	|| rxucastpkts.is_set
	|| rxucastbytes.is_set
	|| rxmcastpkts.is_set
	|| rxmcastbytes.is_set;
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::StPeerList::CntrsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(txucastpkts.yfilter)
	|| ydk::is_set(txucastbytes.yfilter)
	|| ydk::is_set(txmcastpkts.yfilter)
	|| ydk::is_set(txmcastbytes.yfilter)
	|| ydk::is_set(rxucastpkts.yfilter)
	|| ydk::is_set(rxucastbytes.yfilter)
	|| ydk::is_set(rxmcastpkts.yfilter)
	|| ydk::is_set(rxmcastbytes.yfilter);
}

std::string System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::StPeerList::CntrsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cntrs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::StPeerList::CntrsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (txucastpkts.is_set || is_set(txucastpkts.yfilter)) leaf_name_data.push_back(txucastpkts.get_name_leafdata());
    if (txucastbytes.is_set || is_set(txucastbytes.yfilter)) leaf_name_data.push_back(txucastbytes.get_name_leafdata());
    if (txmcastpkts.is_set || is_set(txmcastpkts.yfilter)) leaf_name_data.push_back(txmcastpkts.get_name_leafdata());
    if (txmcastbytes.is_set || is_set(txmcastbytes.yfilter)) leaf_name_data.push_back(txmcastbytes.get_name_leafdata());
    if (rxucastpkts.is_set || is_set(rxucastpkts.yfilter)) leaf_name_data.push_back(rxucastpkts.get_name_leafdata());
    if (rxucastbytes.is_set || is_set(rxucastbytes.yfilter)) leaf_name_data.push_back(rxucastbytes.get_name_leafdata());
    if (rxmcastpkts.is_set || is_set(rxmcastpkts.yfilter)) leaf_name_data.push_back(rxmcastpkts.get_name_leafdata());
    if (rxmcastbytes.is_set || is_set(rxmcastbytes.yfilter)) leaf_name_data.push_back(rxmcastbytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::StPeerList::CntrsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::StPeerList::CntrsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::StPeerList::CntrsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "txUcastpkts")
    {
        txucastpkts = value;
        txucastpkts.value_namespace = name_space;
        txucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txUcastbytes")
    {
        txucastbytes = value;
        txucastbytes.value_namespace = name_space;
        txucastbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txMcastpkts")
    {
        txmcastpkts = value;
        txmcastpkts.value_namespace = name_space;
        txmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txMcastbytes")
    {
        txmcastbytes = value;
        txmcastbytes.value_namespace = name_space;
        txmcastbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxUcastpkts")
    {
        rxucastpkts = value;
        rxucastpkts.value_namespace = name_space;
        rxucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxUcastbytes")
    {
        rxucastbytes = value;
        rxucastbytes.value_namespace = name_space;
        rxucastbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxMcastpkts")
    {
        rxmcastpkts = value;
        rxmcastpkts.value_namespace = name_space;
        rxmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxMcastbytes")
    {
        rxmcastbytes = value;
        rxmcastbytes.value_namespace = name_space;
        rxmcastbytes.value_namespace_prefix = name_space_prefix;
    }
}

void System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::StPeerList::CntrsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "txUcastpkts")
    {
        txucastpkts.yfilter = yfilter;
    }
    if(value_path == "txUcastbytes")
    {
        txucastbytes.yfilter = yfilter;
    }
    if(value_path == "txMcastpkts")
    {
        txmcastpkts.yfilter = yfilter;
    }
    if(value_path == "txMcastbytes")
    {
        txmcastbytes.yfilter = yfilter;
    }
    if(value_path == "rxUcastpkts")
    {
        rxucastpkts.yfilter = yfilter;
    }
    if(value_path == "rxUcastbytes")
    {
        rxucastbytes.yfilter = yfilter;
    }
    if(value_path == "rxMcastpkts")
    {
        rxmcastpkts.yfilter = yfilter;
    }
    if(value_path == "rxMcastbytes")
    {
        rxmcastbytes.yfilter = yfilter;
    }
}

bool System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::StPeerList::CntrsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "txUcastpkts" || name == "txUcastbytes" || name == "txMcastpkts" || name == "txMcastbytes" || name == "rxUcastpkts" || name == "rxUcastbytes" || name == "rxMcastpkts" || name == "rxMcastbytes")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::NwsItems::NwsItems()
    :
    vni_items(std::make_shared<System::EpsItems::EpIdItems::EpList::NwsItems::VniItems>())
    , opervni_items(std::make_shared<System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems>())
    , vnis_items(std::make_shared<System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems>())
{
    vni_items->parent = this;
    opervni_items->parent = this;
    vnis_items->parent = this;

    yang_name = "nws-items"; yang_parent_name = "Ep-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::NwsItems::~NwsItems()
{
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::has_data() const
{
    if (is_presence_container) return true;
    return (vni_items !=  nullptr && vni_items->has_data())
	|| (opervni_items !=  nullptr && opervni_items->has_data())
	|| (vnis_items !=  nullptr && vnis_items->has_data());
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::has_operation() const
{
    return is_set(yfilter)
	|| (vni_items !=  nullptr && vni_items->has_operation())
	|| (opervni_items !=  nullptr && opervni_items->has_operation())
	|| (vnis_items !=  nullptr && vnis_items->has_operation());
}

std::string System::EpsItems::EpIdItems::EpList::NwsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nws-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::NwsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EpsItems::EpIdItems::EpList::NwsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vni-items")
    {
        if(vni_items == nullptr)
        {
            vni_items = std::make_shared<System::EpsItems::EpIdItems::EpList::NwsItems::VniItems>();
        }
        return vni_items;
    }

    if(child_yang_name == "opervni-items")
    {
        if(opervni_items == nullptr)
        {
            opervni_items = std::make_shared<System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems>();
        }
        return opervni_items;
    }

    if(child_yang_name == "vnis-items")
    {
        if(vnis_items == nullptr)
        {
            vnis_items = std::make_shared<System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems>();
        }
        return vnis_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EpsItems::EpIdItems::EpList::NwsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vni_items != nullptr)
    {
        _children["vni-items"] = vni_items;
    }

    if(opervni_items != nullptr)
    {
        _children["opervni-items"] = opervni_items;
    }

    if(vnis_items != nullptr)
    {
        _children["vnis-items"] = vnis_items;
    }

    return _children;
}

void System::EpsItems::EpIdItems::EpList::NwsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EpsItems::EpIdItems::EpList::NwsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vni-items" || name == "opervni-items" || name == "vnis-items")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::VniItems()
    :
    nw_list(this, {"vni"})
{

    yang_name = "vni-items"; yang_parent_name = "nws-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::~VniItems()
{
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nw_list.len(); index++)
    {
        if(nw_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::has_operation() const
{
    for (std::size_t index=0; index<nw_list.len(); index++)
    {
        if(nw_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vni-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Nw-list")
    {
        auto ent_ = std::make_shared<System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList>();
        ent_->parent = this;
        nw_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nw_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Nw-list")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::NwList()
    :
    vni{YType::uint32, "vni"},
    suppressarp{YType::enumeration, "suppressARP"},
    mcastgroup{YType::str, "mcastGroup"},
    associatevrfflag{YType::boolean, "associateVrfFlag"},
    islegacymode{YType::boolean, "isLegacyMode"},
    multisiteingrepl{YType::enumeration, "multisiteIngRepl"},
    cfgsrc{YType::enumeration, "cfgSrc"}
        ,
    ingrepl_items(std::make_shared<System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems>())
{
    ingrepl_items->parent = this;

    yang_name = "Nw-list"; yang_parent_name = "vni-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::~NwList()
{
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::has_data() const
{
    if (is_presence_container) return true;
    return vni.is_set
	|| suppressarp.is_set
	|| mcastgroup.is_set
	|| associatevrfflag.is_set
	|| islegacymode.is_set
	|| multisiteingrepl.is_set
	|| cfgsrc.is_set
	|| (ingrepl_items !=  nullptr && ingrepl_items->has_data());
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vni.yfilter)
	|| ydk::is_set(suppressarp.yfilter)
	|| ydk::is_set(mcastgroup.yfilter)
	|| ydk::is_set(associatevrfflag.yfilter)
	|| ydk::is_set(islegacymode.yfilter)
	|| ydk::is_set(multisiteingrepl.yfilter)
	|| ydk::is_set(cfgsrc.yfilter)
	|| (ingrepl_items !=  nullptr && ingrepl_items->has_operation());
}

std::string System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Nw-list";
    ADD_KEY_TOKEN(vni, "vni");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vni.is_set || is_set(vni.yfilter)) leaf_name_data.push_back(vni.get_name_leafdata());
    if (suppressarp.is_set || is_set(suppressarp.yfilter)) leaf_name_data.push_back(suppressarp.get_name_leafdata());
    if (mcastgroup.is_set || is_set(mcastgroup.yfilter)) leaf_name_data.push_back(mcastgroup.get_name_leafdata());
    if (associatevrfflag.is_set || is_set(associatevrfflag.yfilter)) leaf_name_data.push_back(associatevrfflag.get_name_leafdata());
    if (islegacymode.is_set || is_set(islegacymode.yfilter)) leaf_name_data.push_back(islegacymode.get_name_leafdata());
    if (multisiteingrepl.is_set || is_set(multisiteingrepl.yfilter)) leaf_name_data.push_back(multisiteingrepl.get_name_leafdata());
    if (cfgsrc.is_set || is_set(cfgsrc.yfilter)) leaf_name_data.push_back(cfgsrc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IngRepl-items")
    {
        if(ingrepl_items == nullptr)
        {
            ingrepl_items = std::make_shared<System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems>();
        }
        return ingrepl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ingrepl_items != nullptr)
    {
        _children["IngRepl-items"] = ingrepl_items;
    }

    return _children;
}

void System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vni")
    {
        vni = value;
        vni.value_namespace = name_space;
        vni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressARP")
    {
        suppressarp = value;
        suppressarp.value_namespace = name_space;
        suppressarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastGroup")
    {
        mcastgroup = value;
        mcastgroup.value_namespace = name_space;
        mcastgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "associateVrfFlag")
    {
        associatevrfflag = value;
        associatevrfflag.value_namespace = name_space;
        associatevrfflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isLegacyMode")
    {
        islegacymode = value;
        islegacymode.value_namespace = name_space;
        islegacymode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multisiteIngRepl")
    {
        multisiteingrepl = value;
        multisiteingrepl.value_namespace = name_space;
        multisiteingrepl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfgSrc")
    {
        cfgsrc = value;
        cfgsrc.value_namespace = name_space;
        cfgsrc.value_namespace_prefix = name_space_prefix;
    }
}

void System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vni")
    {
        vni.yfilter = yfilter;
    }
    if(value_path == "suppressARP")
    {
        suppressarp.yfilter = yfilter;
    }
    if(value_path == "mcastGroup")
    {
        mcastgroup.yfilter = yfilter;
    }
    if(value_path == "associateVrfFlag")
    {
        associatevrfflag.yfilter = yfilter;
    }
    if(value_path == "isLegacyMode")
    {
        islegacymode.yfilter = yfilter;
    }
    if(value_path == "multisiteIngRepl")
    {
        multisiteingrepl.yfilter = yfilter;
    }
    if(value_path == "cfgSrc")
    {
        cfgsrc.yfilter = yfilter;
    }
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IngRepl-items" || name == "vni" || name == "suppressARP" || name == "mcastGroup" || name == "associateVrfFlag" || name == "isLegacyMode" || name == "multisiteIngRepl" || name == "cfgSrc")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::IngReplItems()
    :
    proto{YType::enumeration, "proto"},
    replmode{YType::enumeration, "replMode"}
        ,
    config_st_ir_peer_items(std::make_shared<System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::ConfigStIrPeerItems>())
{
    config_st_ir_peer_items->parent = this;

    yang_name = "IngRepl-items"; yang_parent_name = "Nw-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::~IngReplItems()
{
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::has_data() const
{
    if (is_presence_container) return true;
    return proto.is_set
	|| replmode.is_set
	|| (config_st_ir_peer_items !=  nullptr && config_st_ir_peer_items->has_data());
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(replmode.yfilter)
	|| (config_st_ir_peer_items !=  nullptr && config_st_ir_peer_items->has_operation());
}

std::string System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IngRepl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (replmode.is_set || is_set(replmode.yfilter)) leaf_name_data.push_back(replmode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config_st_ir_peer-items")
    {
        if(config_st_ir_peer_items == nullptr)
        {
            config_st_ir_peer_items = std::make_shared<System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::ConfigStIrPeerItems>();
        }
        return config_st_ir_peer_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config_st_ir_peer_items != nullptr)
    {
        _children["config_st_ir_peer-items"] = config_st_ir_peer_items;
    }

    return _children;
}

void System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replMode")
    {
        replmode = value;
        replmode.value_namespace = name_space;
        replmode.value_namespace_prefix = name_space_prefix;
    }
}

void System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
    if(value_path == "replMode")
    {
        replmode.yfilter = yfilter;
    }
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config_st_ir_peer-items" || name == "proto" || name == "replMode")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::ConfigStIrPeerItems::ConfigStIrPeerItems()
    :
    configstirpeer_list(this, {"ip"})
{

    yang_name = "config_st_ir_peer-items"; yang_parent_name = "IngRepl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::ConfigStIrPeerItems::~ConfigStIrPeerItems()
{
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::ConfigStIrPeerItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<configstirpeer_list.len(); index++)
    {
        if(configstirpeer_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::ConfigStIrPeerItems::has_operation() const
{
    for (std::size_t index=0; index<configstirpeer_list.len(); index++)
    {
        if(configstirpeer_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::ConfigStIrPeerItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config_st_ir_peer-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::ConfigStIrPeerItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::ConfigStIrPeerItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ConfigStIRPeer-list")
    {
        auto ent_ = std::make_shared<System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList>();
        ent_->parent = this;
        configstirpeer_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::ConfigStIrPeerItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : configstirpeer_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::ConfigStIrPeerItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::ConfigStIrPeerItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::ConfigStIrPeerItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ConfigStIRPeer-list")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList::ConfigStIRPeerList()
    :
    ip{YType::str, "ip"}
{

    yang_name = "ConfigStIRPeer-list"; yang_parent_name = "config_st_ir_peer-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList::~ConfigStIRPeerList()
{
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set;
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ConfigStIRPeer-list";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::OpervniItems()
    :
    opernw_list(this, {"vni"})
{

    yang_name = "opervni-items"; yang_parent_name = "nws-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::~OpervniItems()
{
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<opernw_list.len(); index++)
    {
        if(opernw_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::has_operation() const
{
    for (std::size_t index=0; index<opernw_list.len(); index++)
    {
        if(opernw_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opervni-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OperNw-list")
    {
        auto ent_ = std::make_shared<System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::OperNwList>();
        ent_->parent = this;
        opernw_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : opernw_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OperNw-list")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::OperNwList::OperNwList()
    :
    vni{YType::uint32, "vni"},
    epid{YType::uint32, "epId"},
    opermcastgroup{YType::str, "operMcastGroup"},
    opersupprarp{YType::boolean, "operSupprARP"},
    state{YType::enumeration, "state"},
    mode{YType::enumeration, "mode"},
    type{YType::enumeration, "type"},
    vlanbd{YType::str, "vlanBD"}
        ,
    cntrs_items(std::make_shared<System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::OperNwList::CntrsItems>())
{
    cntrs_items->parent = this;

    yang_name = "OperNw-list"; yang_parent_name = "opervni-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::OperNwList::~OperNwList()
{
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::OperNwList::has_data() const
{
    if (is_presence_container) return true;
    return vni.is_set
	|| epid.is_set
	|| opermcastgroup.is_set
	|| opersupprarp.is_set
	|| state.is_set
	|| mode.is_set
	|| type.is_set
	|| vlanbd.is_set
	|| (cntrs_items !=  nullptr && cntrs_items->has_data());
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::OperNwList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vni.yfilter)
	|| ydk::is_set(epid.yfilter)
	|| ydk::is_set(opermcastgroup.yfilter)
	|| ydk::is_set(opersupprarp.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(vlanbd.yfilter)
	|| (cntrs_items !=  nullptr && cntrs_items->has_operation());
}

std::string System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::OperNwList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OperNw-list";
    ADD_KEY_TOKEN(vni, "vni");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::OperNwList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vni.is_set || is_set(vni.yfilter)) leaf_name_data.push_back(vni.get_name_leafdata());
    if (epid.is_set || is_set(epid.yfilter)) leaf_name_data.push_back(epid.get_name_leafdata());
    if (opermcastgroup.is_set || is_set(opermcastgroup.yfilter)) leaf_name_data.push_back(opermcastgroup.get_name_leafdata());
    if (opersupprarp.is_set || is_set(opersupprarp.yfilter)) leaf_name_data.push_back(opersupprarp.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (vlanbd.is_set || is_set(vlanbd.yfilter)) leaf_name_data.push_back(vlanbd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::OperNwList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cntrs-items")
    {
        if(cntrs_items == nullptr)
        {
            cntrs_items = std::make_shared<System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::OperNwList::CntrsItems>();
        }
        return cntrs_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::OperNwList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cntrs_items != nullptr)
    {
        _children["cntrs-items"] = cntrs_items;
    }

    return _children;
}

void System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::OperNwList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vni")
    {
        vni = value;
        vni.value_namespace = name_space;
        vni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epId")
    {
        epid = value;
        epid.value_namespace = name_space;
        epid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operMcastGroup")
    {
        opermcastgroup = value;
        opermcastgroup.value_namespace = name_space;
        opermcastgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSupprARP")
    {
        opersupprarp = value;
        opersupprarp.value_namespace = name_space;
        opersupprarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanBD")
    {
        vlanbd = value;
        vlanbd.value_namespace = name_space;
        vlanbd.value_namespace_prefix = name_space_prefix;
    }
}

void System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::OperNwList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vni")
    {
        vni.yfilter = yfilter;
    }
    if(value_path == "epId")
    {
        epid.yfilter = yfilter;
    }
    if(value_path == "operMcastGroup")
    {
        opermcastgroup.yfilter = yfilter;
    }
    if(value_path == "operSupprARP")
    {
        opersupprarp.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "vlanBD")
    {
        vlanbd.yfilter = yfilter;
    }
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::OperNwList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cntrs-items" || name == "vni" || name == "epId" || name == "operMcastGroup" || name == "operSupprARP" || name == "state" || name == "mode" || name == "type" || name == "vlanBD")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::OperNwList::CntrsItems::CntrsItems()
    :
    txucastpkts{YType::uint64, "txUcastpkts"},
    txucastbytes{YType::uint64, "txUcastbytes"},
    txmcastpkts{YType::uint64, "txMcastpkts"},
    txmcastbytes{YType::uint64, "txMcastbytes"},
    rxucastpkts{YType::uint64, "rxUcastpkts"},
    rxucastbytes{YType::uint64, "rxUcastbytes"},
    rxmcastpkts{YType::uint64, "rxMcastpkts"},
    rxmcastbytes{YType::uint64, "rxMcastbytes"}
{

    yang_name = "cntrs-items"; yang_parent_name = "OperNw-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::OperNwList::CntrsItems::~CntrsItems()
{
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::OperNwList::CntrsItems::has_data() const
{
    if (is_presence_container) return true;
    return txucastpkts.is_set
	|| txucastbytes.is_set
	|| txmcastpkts.is_set
	|| txmcastbytes.is_set
	|| rxucastpkts.is_set
	|| rxucastbytes.is_set
	|| rxmcastpkts.is_set
	|| rxmcastbytes.is_set;
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::OperNwList::CntrsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(txucastpkts.yfilter)
	|| ydk::is_set(txucastbytes.yfilter)
	|| ydk::is_set(txmcastpkts.yfilter)
	|| ydk::is_set(txmcastbytes.yfilter)
	|| ydk::is_set(rxucastpkts.yfilter)
	|| ydk::is_set(rxucastbytes.yfilter)
	|| ydk::is_set(rxmcastpkts.yfilter)
	|| ydk::is_set(rxmcastbytes.yfilter);
}

std::string System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::OperNwList::CntrsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cntrs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::OperNwList::CntrsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (txucastpkts.is_set || is_set(txucastpkts.yfilter)) leaf_name_data.push_back(txucastpkts.get_name_leafdata());
    if (txucastbytes.is_set || is_set(txucastbytes.yfilter)) leaf_name_data.push_back(txucastbytes.get_name_leafdata());
    if (txmcastpkts.is_set || is_set(txmcastpkts.yfilter)) leaf_name_data.push_back(txmcastpkts.get_name_leafdata());
    if (txmcastbytes.is_set || is_set(txmcastbytes.yfilter)) leaf_name_data.push_back(txmcastbytes.get_name_leafdata());
    if (rxucastpkts.is_set || is_set(rxucastpkts.yfilter)) leaf_name_data.push_back(rxucastpkts.get_name_leafdata());
    if (rxucastbytes.is_set || is_set(rxucastbytes.yfilter)) leaf_name_data.push_back(rxucastbytes.get_name_leafdata());
    if (rxmcastpkts.is_set || is_set(rxmcastpkts.yfilter)) leaf_name_data.push_back(rxmcastpkts.get_name_leafdata());
    if (rxmcastbytes.is_set || is_set(rxmcastbytes.yfilter)) leaf_name_data.push_back(rxmcastbytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::OperNwList::CntrsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::OperNwList::CntrsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::OperNwList::CntrsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "txUcastpkts")
    {
        txucastpkts = value;
        txucastpkts.value_namespace = name_space;
        txucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txUcastbytes")
    {
        txucastbytes = value;
        txucastbytes.value_namespace = name_space;
        txucastbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txMcastpkts")
    {
        txmcastpkts = value;
        txmcastpkts.value_namespace = name_space;
        txmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txMcastbytes")
    {
        txmcastbytes = value;
        txmcastbytes.value_namespace = name_space;
        txmcastbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxUcastpkts")
    {
        rxucastpkts = value;
        rxucastpkts.value_namespace = name_space;
        rxucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxUcastbytes")
    {
        rxucastbytes = value;
        rxucastbytes.value_namespace = name_space;
        rxucastbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxMcastpkts")
    {
        rxmcastpkts = value;
        rxmcastpkts.value_namespace = name_space;
        rxmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxMcastbytes")
    {
        rxmcastbytes = value;
        rxmcastbytes.value_namespace = name_space;
        rxmcastbytes.value_namespace_prefix = name_space_prefix;
    }
}

void System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::OperNwList::CntrsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "txUcastpkts")
    {
        txucastpkts.yfilter = yfilter;
    }
    if(value_path == "txUcastbytes")
    {
        txucastbytes.yfilter = yfilter;
    }
    if(value_path == "txMcastpkts")
    {
        txmcastpkts.yfilter = yfilter;
    }
    if(value_path == "txMcastbytes")
    {
        txmcastbytes.yfilter = yfilter;
    }
    if(value_path == "rxUcastpkts")
    {
        rxucastpkts.yfilter = yfilter;
    }
    if(value_path == "rxUcastbytes")
    {
        rxucastbytes.yfilter = yfilter;
    }
    if(value_path == "rxMcastpkts")
    {
        rxmcastpkts.yfilter = yfilter;
    }
    if(value_path == "rxMcastbytes")
    {
        rxmcastbytes.yfilter = yfilter;
    }
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::OperNwList::CntrsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "txUcastpkts" || name == "txUcastbytes" || name == "txMcastpkts" || name == "txMcastbytes" || name == "rxUcastpkts" || name == "rxUcastbytes" || name == "rxMcastpkts" || name == "rxMcastbytes")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::VnisItems()
    :
    nwrange_list(this, {"vnirangemin", "vnirangemax"})
{

    yang_name = "vnis-items"; yang_parent_name = "nws-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::~VnisItems()
{
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nwrange_list.len(); index++)
    {
        if(nwrange_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::has_operation() const
{
    for (std::size_t index=0; index<nwrange_list.len(); index++)
    {
        if(nwrange_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vnis-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NwRange-list")
    {
        auto ent_ = std::make_shared<System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList>();
        ent_->parent = this;
        nwrange_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nwrange_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NwRange-list")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::NwRangeList()
    :
    vnirangemin{YType::uint32, "vniRangeMin"},
    vnirangemax{YType::uint32, "vniRangeMax"},
    ismcastrange{YType::boolean, "isMcastRange"},
    suppressarp{YType::enumeration, "suppressARP"},
    mcastgroup{YType::str, "mcastGroup"},
    associatevrfflag{YType::boolean, "associateVrfFlag"},
    islegacymode{YType::boolean, "isLegacyMode"},
    multisiteingrepl{YType::enumeration, "multisiteIngRepl"},
    cfgsrc{YType::enumeration, "cfgSrc"}
        ,
    ingrepl_items(std::make_shared<System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems>())
{
    ingrepl_items->parent = this;

    yang_name = "NwRange-list"; yang_parent_name = "vnis-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::~NwRangeList()
{
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::has_data() const
{
    if (is_presence_container) return true;
    return vnirangemin.is_set
	|| vnirangemax.is_set
	|| ismcastrange.is_set
	|| suppressarp.is_set
	|| mcastgroup.is_set
	|| associatevrfflag.is_set
	|| islegacymode.is_set
	|| multisiteingrepl.is_set
	|| cfgsrc.is_set
	|| (ingrepl_items !=  nullptr && ingrepl_items->has_data());
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vnirangemin.yfilter)
	|| ydk::is_set(vnirangemax.yfilter)
	|| ydk::is_set(ismcastrange.yfilter)
	|| ydk::is_set(suppressarp.yfilter)
	|| ydk::is_set(mcastgroup.yfilter)
	|| ydk::is_set(associatevrfflag.yfilter)
	|| ydk::is_set(islegacymode.yfilter)
	|| ydk::is_set(multisiteingrepl.yfilter)
	|| ydk::is_set(cfgsrc.yfilter)
	|| (ingrepl_items !=  nullptr && ingrepl_items->has_operation());
}

std::string System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NwRange-list";
    ADD_KEY_TOKEN(vnirangemin, "vniRangeMin");
    ADD_KEY_TOKEN(vnirangemax, "vniRangeMax");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vnirangemin.is_set || is_set(vnirangemin.yfilter)) leaf_name_data.push_back(vnirangemin.get_name_leafdata());
    if (vnirangemax.is_set || is_set(vnirangemax.yfilter)) leaf_name_data.push_back(vnirangemax.get_name_leafdata());
    if (ismcastrange.is_set || is_set(ismcastrange.yfilter)) leaf_name_data.push_back(ismcastrange.get_name_leafdata());
    if (suppressarp.is_set || is_set(suppressarp.yfilter)) leaf_name_data.push_back(suppressarp.get_name_leafdata());
    if (mcastgroup.is_set || is_set(mcastgroup.yfilter)) leaf_name_data.push_back(mcastgroup.get_name_leafdata());
    if (associatevrfflag.is_set || is_set(associatevrfflag.yfilter)) leaf_name_data.push_back(associatevrfflag.get_name_leafdata());
    if (islegacymode.is_set || is_set(islegacymode.yfilter)) leaf_name_data.push_back(islegacymode.get_name_leafdata());
    if (multisiteingrepl.is_set || is_set(multisiteingrepl.yfilter)) leaf_name_data.push_back(multisiteingrepl.get_name_leafdata());
    if (cfgsrc.is_set || is_set(cfgsrc.yfilter)) leaf_name_data.push_back(cfgsrc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IngRepl-items")
    {
        if(ingrepl_items == nullptr)
        {
            ingrepl_items = std::make_shared<System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems>();
        }
        return ingrepl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ingrepl_items != nullptr)
    {
        _children["IngRepl-items"] = ingrepl_items;
    }

    return _children;
}

void System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vniRangeMin")
    {
        vnirangemin = value;
        vnirangemin.value_namespace = name_space;
        vnirangemin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vniRangeMax")
    {
        vnirangemax = value;
        vnirangemax.value_namespace = name_space;
        vnirangemax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isMcastRange")
    {
        ismcastrange = value;
        ismcastrange.value_namespace = name_space;
        ismcastrange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressARP")
    {
        suppressarp = value;
        suppressarp.value_namespace = name_space;
        suppressarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastGroup")
    {
        mcastgroup = value;
        mcastgroup.value_namespace = name_space;
        mcastgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "associateVrfFlag")
    {
        associatevrfflag = value;
        associatevrfflag.value_namespace = name_space;
        associatevrfflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isLegacyMode")
    {
        islegacymode = value;
        islegacymode.value_namespace = name_space;
        islegacymode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multisiteIngRepl")
    {
        multisiteingrepl = value;
        multisiteingrepl.value_namespace = name_space;
        multisiteingrepl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfgSrc")
    {
        cfgsrc = value;
        cfgsrc.value_namespace = name_space;
        cfgsrc.value_namespace_prefix = name_space_prefix;
    }
}

void System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vniRangeMin")
    {
        vnirangemin.yfilter = yfilter;
    }
    if(value_path == "vniRangeMax")
    {
        vnirangemax.yfilter = yfilter;
    }
    if(value_path == "isMcastRange")
    {
        ismcastrange.yfilter = yfilter;
    }
    if(value_path == "suppressARP")
    {
        suppressarp.yfilter = yfilter;
    }
    if(value_path == "mcastGroup")
    {
        mcastgroup.yfilter = yfilter;
    }
    if(value_path == "associateVrfFlag")
    {
        associatevrfflag.yfilter = yfilter;
    }
    if(value_path == "isLegacyMode")
    {
        islegacymode.yfilter = yfilter;
    }
    if(value_path == "multisiteIngRepl")
    {
        multisiteingrepl.yfilter = yfilter;
    }
    if(value_path == "cfgSrc")
    {
        cfgsrc.yfilter = yfilter;
    }
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IngRepl-items" || name == "vniRangeMin" || name == "vniRangeMax" || name == "isMcastRange" || name == "suppressARP" || name == "mcastGroup" || name == "associateVrfFlag" || name == "isLegacyMode" || name == "multisiteIngRepl" || name == "cfgSrc")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::IngReplItems()
    :
    proto{YType::enumeration, "proto"},
    replmode{YType::enumeration, "replMode"}
        ,
    config_st_ir_peer_items(std::make_shared<System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems>())
{
    config_st_ir_peer_items->parent = this;

    yang_name = "IngRepl-items"; yang_parent_name = "NwRange-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::~IngReplItems()
{
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::has_data() const
{
    if (is_presence_container) return true;
    return proto.is_set
	|| replmode.is_set
	|| (config_st_ir_peer_items !=  nullptr && config_st_ir_peer_items->has_data());
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(replmode.yfilter)
	|| (config_st_ir_peer_items !=  nullptr && config_st_ir_peer_items->has_operation());
}

std::string System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IngRepl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (replmode.is_set || is_set(replmode.yfilter)) leaf_name_data.push_back(replmode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config_st_ir_peer-items")
    {
        if(config_st_ir_peer_items == nullptr)
        {
            config_st_ir_peer_items = std::make_shared<System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems>();
        }
        return config_st_ir_peer_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config_st_ir_peer_items != nullptr)
    {
        _children["config_st_ir_peer-items"] = config_st_ir_peer_items;
    }

    return _children;
}

void System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replMode")
    {
        replmode = value;
        replmode.value_namespace = name_space;
        replmode.value_namespace_prefix = name_space_prefix;
    }
}

void System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
    if(value_path == "replMode")
    {
        replmode.yfilter = yfilter;
    }
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config_st_ir_peer-items" || name == "proto" || name == "replMode")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::ConfigStIrPeerItems()
    :
    configstirpeer_list(this, {"ip"})
{

    yang_name = "config_st_ir_peer-items"; yang_parent_name = "IngRepl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::~ConfigStIrPeerItems()
{
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<configstirpeer_list.len(); index++)
    {
        if(configstirpeer_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::has_operation() const
{
    for (std::size_t index=0; index<configstirpeer_list.len(); index++)
    {
        if(configstirpeer_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config_st_ir_peer-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ConfigStIRPeer-list")
    {
        auto ent_ = std::make_shared<System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList>();
        ent_->parent = this;
        configstirpeer_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : configstirpeer_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ConfigStIRPeer-list")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList::ConfigStIRPeerList()
    :
    ip{YType::str, "ip"}
{

    yang_name = "ConfigStIRPeer-list"; yang_parent_name = "config_st_ir_peer-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList::~ConfigStIRPeerList()
{
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set;
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ConfigStIRPeer-list";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::CntrsItems::CntrsItems()
    :
    txucastpkts{YType::uint64, "txUcastpkts"},
    txucastbytes{YType::uint64, "txUcastbytes"},
    txmcastpkts{YType::uint64, "txMcastpkts"},
    txmcastbytes{YType::uint64, "txMcastbytes"},
    rxucastpkts{YType::uint64, "rxUcastpkts"},
    rxucastbytes{YType::uint64, "rxUcastbytes"},
    rxmcastpkts{YType::uint64, "rxMcastpkts"},
    rxmcastbytes{YType::uint64, "rxMcastbytes"}
{

    yang_name = "cntrs-items"; yang_parent_name = "Ep-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::CntrsItems::~CntrsItems()
{
}

bool System::EpsItems::EpIdItems::EpList::CntrsItems::has_data() const
{
    if (is_presence_container) return true;
    return txucastpkts.is_set
	|| txucastbytes.is_set
	|| txmcastpkts.is_set
	|| txmcastbytes.is_set
	|| rxucastpkts.is_set
	|| rxucastbytes.is_set
	|| rxmcastpkts.is_set
	|| rxmcastbytes.is_set;
}

bool System::EpsItems::EpIdItems::EpList::CntrsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(txucastpkts.yfilter)
	|| ydk::is_set(txucastbytes.yfilter)
	|| ydk::is_set(txmcastpkts.yfilter)
	|| ydk::is_set(txmcastbytes.yfilter)
	|| ydk::is_set(rxucastpkts.yfilter)
	|| ydk::is_set(rxucastbytes.yfilter)
	|| ydk::is_set(rxmcastpkts.yfilter)
	|| ydk::is_set(rxmcastbytes.yfilter);
}

std::string System::EpsItems::EpIdItems::EpList::CntrsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cntrs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::CntrsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (txucastpkts.is_set || is_set(txucastpkts.yfilter)) leaf_name_data.push_back(txucastpkts.get_name_leafdata());
    if (txucastbytes.is_set || is_set(txucastbytes.yfilter)) leaf_name_data.push_back(txucastbytes.get_name_leafdata());
    if (txmcastpkts.is_set || is_set(txmcastpkts.yfilter)) leaf_name_data.push_back(txmcastpkts.get_name_leafdata());
    if (txmcastbytes.is_set || is_set(txmcastbytes.yfilter)) leaf_name_data.push_back(txmcastbytes.get_name_leafdata());
    if (rxucastpkts.is_set || is_set(rxucastpkts.yfilter)) leaf_name_data.push_back(rxucastpkts.get_name_leafdata());
    if (rxucastbytes.is_set || is_set(rxucastbytes.yfilter)) leaf_name_data.push_back(rxucastbytes.get_name_leafdata());
    if (rxmcastpkts.is_set || is_set(rxmcastpkts.yfilter)) leaf_name_data.push_back(rxmcastpkts.get_name_leafdata());
    if (rxmcastbytes.is_set || is_set(rxmcastbytes.yfilter)) leaf_name_data.push_back(rxmcastbytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EpsItems::EpIdItems::EpList::CntrsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EpsItems::EpIdItems::EpList::CntrsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::EpsItems::EpIdItems::EpList::CntrsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "txUcastpkts")
    {
        txucastpkts = value;
        txucastpkts.value_namespace = name_space;
        txucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txUcastbytes")
    {
        txucastbytes = value;
        txucastbytes.value_namespace = name_space;
        txucastbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txMcastpkts")
    {
        txmcastpkts = value;
        txmcastpkts.value_namespace = name_space;
        txmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txMcastbytes")
    {
        txmcastbytes = value;
        txmcastbytes.value_namespace = name_space;
        txmcastbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxUcastpkts")
    {
        rxucastpkts = value;
        rxucastpkts.value_namespace = name_space;
        rxucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxUcastbytes")
    {
        rxucastbytes = value;
        rxucastbytes.value_namespace = name_space;
        rxucastbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxMcastpkts")
    {
        rxmcastpkts = value;
        rxmcastpkts.value_namespace = name_space;
        rxmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxMcastbytes")
    {
        rxmcastbytes = value;
        rxmcastbytes.value_namespace = name_space;
        rxmcastbytes.value_namespace_prefix = name_space_prefix;
    }
}

void System::EpsItems::EpIdItems::EpList::CntrsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "txUcastpkts")
    {
        txucastpkts.yfilter = yfilter;
    }
    if(value_path == "txUcastbytes")
    {
        txucastbytes.yfilter = yfilter;
    }
    if(value_path == "txMcastpkts")
    {
        txmcastpkts.yfilter = yfilter;
    }
    if(value_path == "txMcastbytes")
    {
        txmcastbytes.yfilter = yfilter;
    }
    if(value_path == "rxUcastpkts")
    {
        rxucastpkts.yfilter = yfilter;
    }
    if(value_path == "rxUcastbytes")
    {
        rxucastbytes.yfilter = yfilter;
    }
    if(value_path == "rxMcastpkts")
    {
        rxmcastpkts.yfilter = yfilter;
    }
    if(value_path == "rxMcastbytes")
    {
        rxmcastbytes.yfilter = yfilter;
    }
}

bool System::EpsItems::EpIdItems::EpList::CntrsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "txUcastpkts" || name == "txUcastbytes" || name == "txMcastpkts" || name == "txMcastbytes" || name == "rxUcastpkts" || name == "rxUcastbytes" || name == "rxMcastpkts" || name == "rxMcastbytes")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::RsoperSourceInterfaceItems::RsoperSourceInterfaceItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rsoperSourceInterface-items"; yang_parent_name = "Ep-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::RsoperSourceInterfaceItems::~RsoperSourceInterfaceItems()
{
}

bool System::EpsItems::EpIdItems::EpList::RsoperSourceInterfaceItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::EpsItems::EpIdItems::EpList::RsoperSourceInterfaceItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::EpsItems::EpIdItems::EpList::RsoperSourceInterfaceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsoperSourceInterface-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::RsoperSourceInterfaceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EpsItems::EpIdItems::EpList::RsoperSourceInterfaceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EpsItems::EpIdItems::EpList::RsoperSourceInterfaceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::EpsItems::EpIdItems::EpList::RsoperSourceInterfaceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::EpsItems::EpIdItems::EpList::RsoperSourceInterfaceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::EpsItems::EpIdItems::EpList::RsoperSourceInterfaceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CtxItems::CtxItems()
    :
    ctx_list(this, {"encap"})
{

    yang_name = "ctx-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CtxItems::~CtxItems()
{
}

bool System::CtxItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ctx_list.len(); index++)
    {
        if(ctx_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CtxItems::has_operation() const
{
    for (std::size_t index=0; index<ctx_list.len(); index++)
    {
        if(ctx_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CtxItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CtxItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ctx-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CtxItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ctx-list")
    {
        auto ent_ = std::make_shared<System::CtxItems::CtxList>();
        ent_->parent = this;
        ctx_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CtxItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ctx_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CtxItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CtxItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CtxItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ctx-list")
        return true;
    return false;
}

System::CtxItems::CtxList::CtxList()
    :
    encap{YType::str, "encap"},
    pcenfpref{YType::enumeration, "pcEnfPref"},
    type{YType::enumeration, "type"},
    pctag{YType::uint32, "pcTag"},
    mgmtpctag{YType::uint32, "mgmtPcTag"},
    name{YType::str, "name"},
    resourceid{YType::uint16, "resourceId"},
    id{YType::uint16, "id"},
    descr{YType::str, "descr"},
    scope{YType::uint32, "scope"},
    ctrlrid{YType::uint32, "ctrlrId"},
    seclbl{YType::uint16, "secLbl"},
    adminstate{YType::enumeration, "adminState"},
    operstate{YType::enumeration, "operState"},
    operstqual{YType::enumeration, "operStQual"},
    oldoperstqual{YType::enumeration, "oldOperStQual"},
    gsdbctx{YType::uint32, "gsdbCtx"},
    pending{YType::boolean, "pending"},
    v4tibvalid{YType::boolean, "v4TibValid"},
    v4tibid{YType::uint32, "v4TibId"},
    v4tibname{YType::str, "v4TibName"},
    v4tibpending{YType::boolean, "v4TibPending"},
    v4tiboperstate{YType::enumeration, "v4TibOperState"},
    v4tiboperstqual{YType::enumeration, "v4TibOperStQual"},
    v4tiboldoperstqual{YType::enumeration, "v4TibOldOperStQual"},
    v6tibvalid{YType::boolean, "v6TibValid"},
    v6tibid{YType::uint32, "v6TibId"},
    v6tibname{YType::str, "v6TibName"},
    v6tibpending{YType::boolean, "v6TibPending"},
    v6tiboperstate{YType::enumeration, "v6TibOperState"},
    v6tiboperstqual{YType::enumeration, "v6TibOperStQual"},
    v6tiboldoperstqual{YType::enumeration, "v6TibOldOperStQual"},
    createts{YType::str, "createTs"},
    lastchgdts{YType::str, "lastChgdTs"},
    bgprd{YType::str, "bgpRd"},
    bgprddisp{YType::str, "bgpRdDisp"},
    prtclbmp{YType::uint32, "prtclBmp"},
    oui{YType::uint32, "oui"},
    vpnid{YType::uint32, "vpnId"}
        ,
    pfx_items(std::make_shared<System::CtxItems::CtxList::PfxItems>())
    , db_items(std::make_shared<System::CtxItems::CtxList::DbItems>())
    , mgmt_items(std::make_shared<System::CtxItems::CtxList::MgmtItems>())
    , rttenconn_items(std::make_shared<System::CtxItems::CtxList::RttenConnItems>())
    , rsctxtoepp_items(std::make_shared<System::CtxItems::CtxList::RsctxToEpPItems>())
{
    pfx_items->parent = this;
    db_items->parent = this;
    mgmt_items->parent = this;
    rttenconn_items->parent = this;
    rsctxtoepp_items->parent = this;

    yang_name = "Ctx-list"; yang_parent_name = "ctx-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CtxItems::CtxList::~CtxList()
{
}

bool System::CtxItems::CtxList::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| pcenfpref.is_set
	|| type.is_set
	|| pctag.is_set
	|| mgmtpctag.is_set
	|| name.is_set
	|| resourceid.is_set
	|| id.is_set
	|| descr.is_set
	|| scope.is_set
	|| ctrlrid.is_set
	|| seclbl.is_set
	|| adminstate.is_set
	|| operstate.is_set
	|| operstqual.is_set
	|| oldoperstqual.is_set
	|| gsdbctx.is_set
	|| pending.is_set
	|| v4tibvalid.is_set
	|| v4tibid.is_set
	|| v4tibname.is_set
	|| v4tibpending.is_set
	|| v4tiboperstate.is_set
	|| v4tiboperstqual.is_set
	|| v4tiboldoperstqual.is_set
	|| v6tibvalid.is_set
	|| v6tibid.is_set
	|| v6tibname.is_set
	|| v6tibpending.is_set
	|| v6tiboperstate.is_set
	|| v6tiboperstqual.is_set
	|| v6tiboldoperstqual.is_set
	|| createts.is_set
	|| lastchgdts.is_set
	|| bgprd.is_set
	|| bgprddisp.is_set
	|| prtclbmp.is_set
	|| oui.is_set
	|| vpnid.is_set
	|| (pfx_items !=  nullptr && pfx_items->has_data())
	|| (db_items !=  nullptr && db_items->has_data())
	|| (mgmt_items !=  nullptr && mgmt_items->has_data())
	|| (rttenconn_items !=  nullptr && rttenconn_items->has_data())
	|| (rsctxtoepp_items !=  nullptr && rsctxtoepp_items->has_data());
}

bool System::CtxItems::CtxList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(pcenfpref.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(pctag.yfilter)
	|| ydk::is_set(mgmtpctag.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(resourceid.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(ctrlrid.yfilter)
	|| ydk::is_set(seclbl.yfilter)
	|| ydk::is_set(adminstate.yfilter)
	|| ydk::is_set(operstate.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(oldoperstqual.yfilter)
	|| ydk::is_set(gsdbctx.yfilter)
	|| ydk::is_set(pending.yfilter)
	|| ydk::is_set(v4tibvalid.yfilter)
	|| ydk::is_set(v4tibid.yfilter)
	|| ydk::is_set(v4tibname.yfilter)
	|| ydk::is_set(v4tibpending.yfilter)
	|| ydk::is_set(v4tiboperstate.yfilter)
	|| ydk::is_set(v4tiboperstqual.yfilter)
	|| ydk::is_set(v4tiboldoperstqual.yfilter)
	|| ydk::is_set(v6tibvalid.yfilter)
	|| ydk::is_set(v6tibid.yfilter)
	|| ydk::is_set(v6tibname.yfilter)
	|| ydk::is_set(v6tibpending.yfilter)
	|| ydk::is_set(v6tiboperstate.yfilter)
	|| ydk::is_set(v6tiboperstqual.yfilter)
	|| ydk::is_set(v6tiboldoperstqual.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| ydk::is_set(lastchgdts.yfilter)
	|| ydk::is_set(bgprd.yfilter)
	|| ydk::is_set(bgprddisp.yfilter)
	|| ydk::is_set(prtclbmp.yfilter)
	|| ydk::is_set(oui.yfilter)
	|| ydk::is_set(vpnid.yfilter)
	|| (pfx_items !=  nullptr && pfx_items->has_operation())
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (mgmt_items !=  nullptr && mgmt_items->has_operation())
	|| (rttenconn_items !=  nullptr && rttenconn_items->has_operation())
	|| (rsctxtoepp_items !=  nullptr && rsctxtoepp_items->has_operation());
}

std::string System::CtxItems::CtxList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ctx-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CtxItems::CtxList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ctx-list";
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (pcenfpref.is_set || is_set(pcenfpref.yfilter)) leaf_name_data.push_back(pcenfpref.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (pctag.is_set || is_set(pctag.yfilter)) leaf_name_data.push_back(pctag.get_name_leafdata());
    if (mgmtpctag.is_set || is_set(mgmtpctag.yfilter)) leaf_name_data.push_back(mgmtpctag.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (resourceid.is_set || is_set(resourceid.yfilter)) leaf_name_data.push_back(resourceid.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (ctrlrid.is_set || is_set(ctrlrid.yfilter)) leaf_name_data.push_back(ctrlrid.get_name_leafdata());
    if (seclbl.is_set || is_set(seclbl.yfilter)) leaf_name_data.push_back(seclbl.get_name_leafdata());
    if (adminstate.is_set || is_set(adminstate.yfilter)) leaf_name_data.push_back(adminstate.get_name_leafdata());
    if (operstate.is_set || is_set(operstate.yfilter)) leaf_name_data.push_back(operstate.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (oldoperstqual.is_set || is_set(oldoperstqual.yfilter)) leaf_name_data.push_back(oldoperstqual.get_name_leafdata());
    if (gsdbctx.is_set || is_set(gsdbctx.yfilter)) leaf_name_data.push_back(gsdbctx.get_name_leafdata());
    if (pending.is_set || is_set(pending.yfilter)) leaf_name_data.push_back(pending.get_name_leafdata());
    if (v4tibvalid.is_set || is_set(v4tibvalid.yfilter)) leaf_name_data.push_back(v4tibvalid.get_name_leafdata());
    if (v4tibid.is_set || is_set(v4tibid.yfilter)) leaf_name_data.push_back(v4tibid.get_name_leafdata());
    if (v4tibname.is_set || is_set(v4tibname.yfilter)) leaf_name_data.push_back(v4tibname.get_name_leafdata());
    if (v4tibpending.is_set || is_set(v4tibpending.yfilter)) leaf_name_data.push_back(v4tibpending.get_name_leafdata());
    if (v4tiboperstate.is_set || is_set(v4tiboperstate.yfilter)) leaf_name_data.push_back(v4tiboperstate.get_name_leafdata());
    if (v4tiboperstqual.is_set || is_set(v4tiboperstqual.yfilter)) leaf_name_data.push_back(v4tiboperstqual.get_name_leafdata());
    if (v4tiboldoperstqual.is_set || is_set(v4tiboldoperstqual.yfilter)) leaf_name_data.push_back(v4tiboldoperstqual.get_name_leafdata());
    if (v6tibvalid.is_set || is_set(v6tibvalid.yfilter)) leaf_name_data.push_back(v6tibvalid.get_name_leafdata());
    if (v6tibid.is_set || is_set(v6tibid.yfilter)) leaf_name_data.push_back(v6tibid.get_name_leafdata());
    if (v6tibname.is_set || is_set(v6tibname.yfilter)) leaf_name_data.push_back(v6tibname.get_name_leafdata());
    if (v6tibpending.is_set || is_set(v6tibpending.yfilter)) leaf_name_data.push_back(v6tibpending.get_name_leafdata());
    if (v6tiboperstate.is_set || is_set(v6tiboperstate.yfilter)) leaf_name_data.push_back(v6tiboperstate.get_name_leafdata());
    if (v6tiboperstqual.is_set || is_set(v6tiboperstqual.yfilter)) leaf_name_data.push_back(v6tiboperstqual.get_name_leafdata());
    if (v6tiboldoperstqual.is_set || is_set(v6tiboldoperstqual.yfilter)) leaf_name_data.push_back(v6tiboldoperstqual.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());
    if (lastchgdts.is_set || is_set(lastchgdts.yfilter)) leaf_name_data.push_back(lastchgdts.get_name_leafdata());
    if (bgprd.is_set || is_set(bgprd.yfilter)) leaf_name_data.push_back(bgprd.get_name_leafdata());
    if (bgprddisp.is_set || is_set(bgprddisp.yfilter)) leaf_name_data.push_back(bgprddisp.get_name_leafdata());
    if (prtclbmp.is_set || is_set(prtclbmp.yfilter)) leaf_name_data.push_back(prtclbmp.get_name_leafdata());
    if (oui.is_set || is_set(oui.yfilter)) leaf_name_data.push_back(oui.get_name_leafdata());
    if (vpnid.is_set || is_set(vpnid.yfilter)) leaf_name_data.push_back(vpnid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CtxItems::CtxList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pfx-items")
    {
        if(pfx_items == nullptr)
        {
            pfx_items = std::make_shared<System::CtxItems::CtxList::PfxItems>();
        }
        return pfx_items;
    }

    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::CtxItems::CtxList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "mgmt-items")
    {
        if(mgmt_items == nullptr)
        {
            mgmt_items = std::make_shared<System::CtxItems::CtxList::MgmtItems>();
        }
        return mgmt_items;
    }

    if(child_yang_name == "rttenConn-items")
    {
        if(rttenconn_items == nullptr)
        {
            rttenconn_items = std::make_shared<System::CtxItems::CtxList::RttenConnItems>();
        }
        return rttenconn_items;
    }

    if(child_yang_name == "rsctxToEpP-items")
    {
        if(rsctxtoepp_items == nullptr)
        {
            rsctxtoepp_items = std::make_shared<System::CtxItems::CtxList::RsctxToEpPItems>();
        }
        return rsctxtoepp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CtxItems::CtxList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pfx_items != nullptr)
    {
        _children["pfx-items"] = pfx_items;
    }

    if(db_items != nullptr)
    {
        _children["db-items"] = db_items;
    }

    if(mgmt_items != nullptr)
    {
        _children["mgmt-items"] = mgmt_items;
    }

    if(rttenconn_items != nullptr)
    {
        _children["rttenConn-items"] = rttenconn_items;
    }

    if(rsctxtoepp_items != nullptr)
    {
        _children["rsctxToEpP-items"] = rsctxtoepp_items;
    }

    return _children;
}

void System::CtxItems::CtxList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcEnfPref")
    {
        pcenfpref = value;
        pcenfpref.value_namespace = name_space;
        pcenfpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcTag")
    {
        pctag = value;
        pctag.value_namespace = name_space;
        pctag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mgmtPcTag")
    {
        mgmtpctag = value;
        mgmtpctag.value_namespace = name_space;
        mgmtpctag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resourceId")
    {
        resourceid = value;
        resourceid.value_namespace = name_space;
        resourceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrlrId")
    {
        ctrlrid = value;
        ctrlrid.value_namespace = name_space;
        ctrlrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secLbl")
    {
        seclbl = value;
        seclbl.value_namespace = name_space;
        seclbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminState")
    {
        adminstate = value;
        adminstate.value_namespace = name_space;
        adminstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operState")
    {
        operstate = value;
        operstate.value_namespace = name_space;
        operstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operStQual")
    {
        operstqual = value;
        operstqual.value_namespace = name_space;
        operstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oldOperStQual")
    {
        oldoperstqual = value;
        oldoperstqual.value_namespace = name_space;
        oldoperstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gsdbCtx")
    {
        gsdbctx = value;
        gsdbctx.value_namespace = name_space;
        gsdbctx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending")
    {
        pending = value;
        pending.value_namespace = name_space;
        pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4TibValid")
    {
        v4tibvalid = value;
        v4tibvalid.value_namespace = name_space;
        v4tibvalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4TibId")
    {
        v4tibid = value;
        v4tibid.value_namespace = name_space;
        v4tibid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4TibName")
    {
        v4tibname = value;
        v4tibname.value_namespace = name_space;
        v4tibname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4TibPending")
    {
        v4tibpending = value;
        v4tibpending.value_namespace = name_space;
        v4tibpending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4TibOperState")
    {
        v4tiboperstate = value;
        v4tiboperstate.value_namespace = name_space;
        v4tiboperstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4TibOperStQual")
    {
        v4tiboperstqual = value;
        v4tiboperstqual.value_namespace = name_space;
        v4tiboperstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4TibOldOperStQual")
    {
        v4tiboldoperstqual = value;
        v4tiboldoperstqual.value_namespace = name_space;
        v4tiboldoperstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6TibValid")
    {
        v6tibvalid = value;
        v6tibvalid.value_namespace = name_space;
        v6tibvalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6TibId")
    {
        v6tibid = value;
        v6tibid.value_namespace = name_space;
        v6tibid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6TibName")
    {
        v6tibname = value;
        v6tibname.value_namespace = name_space;
        v6tibname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6TibPending")
    {
        v6tibpending = value;
        v6tibpending.value_namespace = name_space;
        v6tibpending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6TibOperState")
    {
        v6tiboperstate = value;
        v6tiboperstate.value_namespace = name_space;
        v6tiboperstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6TibOperStQual")
    {
        v6tiboperstqual = value;
        v6tiboperstqual.value_namespace = name_space;
        v6tiboperstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6TibOldOperStQual")
    {
        v6tiboldoperstqual = value;
        v6tiboldoperstqual.value_namespace = name_space;
        v6tiboldoperstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastChgdTs")
    {
        lastchgdts = value;
        lastchgdts.value_namespace = name_space;
        lastchgdts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpRd")
    {
        bgprd = value;
        bgprd.value_namespace = name_space;
        bgprd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpRdDisp")
    {
        bgprddisp = value;
        bgprddisp.value_namespace = name_space;
        bgprddisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prtclBmp")
    {
        prtclbmp = value;
        prtclbmp.value_namespace = name_space;
        prtclbmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oui")
    {
        oui = value;
        oui.value_namespace = name_space;
        oui.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpnId")
    {
        vpnid = value;
        vpnid.value_namespace = name_space;
        vpnid.value_namespace_prefix = name_space_prefix;
    }
}

void System::CtxItems::CtxList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "pcEnfPref")
    {
        pcenfpref.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "pcTag")
    {
        pctag.yfilter = yfilter;
    }
    if(value_path == "mgmtPcTag")
    {
        mgmtpctag.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "resourceId")
    {
        resourceid.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "ctrlrId")
    {
        ctrlrid.yfilter = yfilter;
    }
    if(value_path == "secLbl")
    {
        seclbl.yfilter = yfilter;
    }
    if(value_path == "adminState")
    {
        adminstate.yfilter = yfilter;
    }
    if(value_path == "operState")
    {
        operstate.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "oldOperStQual")
    {
        oldoperstqual.yfilter = yfilter;
    }
    if(value_path == "gsdbCtx")
    {
        gsdbctx.yfilter = yfilter;
    }
    if(value_path == "pending")
    {
        pending.yfilter = yfilter;
    }
    if(value_path == "v4TibValid")
    {
        v4tibvalid.yfilter = yfilter;
    }
    if(value_path == "v4TibId")
    {
        v4tibid.yfilter = yfilter;
    }
    if(value_path == "v4TibName")
    {
        v4tibname.yfilter = yfilter;
    }
    if(value_path == "v4TibPending")
    {
        v4tibpending.yfilter = yfilter;
    }
    if(value_path == "v4TibOperState")
    {
        v4tiboperstate.yfilter = yfilter;
    }
    if(value_path == "v4TibOperStQual")
    {
        v4tiboperstqual.yfilter = yfilter;
    }
    if(value_path == "v4TibOldOperStQual")
    {
        v4tiboldoperstqual.yfilter = yfilter;
    }
    if(value_path == "v6TibValid")
    {
        v6tibvalid.yfilter = yfilter;
    }
    if(value_path == "v6TibId")
    {
        v6tibid.yfilter = yfilter;
    }
    if(value_path == "v6TibName")
    {
        v6tibname.yfilter = yfilter;
    }
    if(value_path == "v6TibPending")
    {
        v6tibpending.yfilter = yfilter;
    }
    if(value_path == "v6TibOperState")
    {
        v6tiboperstate.yfilter = yfilter;
    }
    if(value_path == "v6TibOperStQual")
    {
        v6tiboperstqual.yfilter = yfilter;
    }
    if(value_path == "v6TibOldOperStQual")
    {
        v6tiboldoperstqual.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
    if(value_path == "lastChgdTs")
    {
        lastchgdts.yfilter = yfilter;
    }
    if(value_path == "bgpRd")
    {
        bgprd.yfilter = yfilter;
    }
    if(value_path == "bgpRdDisp")
    {
        bgprddisp.yfilter = yfilter;
    }
    if(value_path == "prtclBmp")
    {
        prtclbmp.yfilter = yfilter;
    }
    if(value_path == "oui")
    {
        oui.yfilter = yfilter;
    }
    if(value_path == "vpnId")
    {
        vpnid.yfilter = yfilter;
    }
}

bool System::CtxItems::CtxList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfx-items" || name == "db-items" || name == "mgmt-items" || name == "rttenConn-items" || name == "rsctxToEpP-items" || name == "encap" || name == "pcEnfPref" || name == "type" || name == "pcTag" || name == "mgmtPcTag" || name == "name" || name == "resourceId" || name == "id" || name == "descr" || name == "scope" || name == "ctrlrId" || name == "secLbl" || name == "adminState" || name == "operState" || name == "operStQual" || name == "oldOperStQual" || name == "gsdbCtx" || name == "pending" || name == "v4TibValid" || name == "v4TibId" || name == "v4TibName" || name == "v4TibPending" || name == "v4TibOperState" || name == "v4TibOperStQual" || name == "v4TibOldOperStQual" || name == "v6TibValid" || name == "v6TibId" || name == "v6TibName" || name == "v6TibPending" || name == "v6TibOperState" || name == "v6TibOperStQual" || name == "v6TibOldOperStQual" || name == "createTs" || name == "lastChgdTs" || name == "bgpRd" || name == "bgpRdDisp" || name == "prtclBmp" || name == "oui" || name == "vpnId")
        return true;
    return false;
}

System::CtxItems::CtxList::PfxItems::PfxItems()
    :
    pfxentry_list(this, {"addr"})
{

    yang_name = "pfx-items"; yang_parent_name = "Ctx-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::PfxItems::~PfxItems()
{
}

bool System::CtxItems::CtxList::PfxItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pfxentry_list.len(); index++)
    {
        if(pfxentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CtxItems::CtxList::PfxItems::has_operation() const
{
    for (std::size_t index=0; index<pfxentry_list.len(); index++)
    {
        if(pfxentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CtxItems::CtxList::PfxItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfx-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::PfxItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CtxItems::CtxList::PfxItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PfxEntry-list")
    {
        auto ent_ = std::make_shared<System::CtxItems::CtxList::PfxItems::PfxEntryList>();
        ent_->parent = this;
        pfxentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CtxItems::CtxList::PfxItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pfxentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CtxItems::CtxList::PfxItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CtxItems::CtxList::PfxItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CtxItems::CtxList::PfxItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PfxEntry-list")
        return true;
    return false;
}

System::CtxItems::CtxList::PfxItems::PfxEntryList::PfxEntryList()
    :
    addr{YType::str, "addr"},
    pctag{YType::uint32, "pcTag"},
    operst{YType::enumeration, "operSt"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "PfxEntry-list"; yang_parent_name = "pfx-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::PfxItems::PfxEntryList::~PfxEntryList()
{
}

bool System::CtxItems::CtxList::PfxItems::PfxEntryList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| pctag.is_set
	|| operst.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::CtxItems::CtxList::PfxItems::PfxEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(pctag.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CtxItems::CtxList::PfxItems::PfxEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PfxEntry-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::PfxItems::PfxEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (pctag.is_set || is_set(pctag.yfilter)) leaf_name_data.push_back(pctag.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CtxItems::CtxList::PfxItems::PfxEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CtxItems::CtxList::PfxItems::PfxEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CtxItems::CtxList::PfxItems::PfxEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcTag")
    {
        pctag = value;
        pctag.value_namespace = name_space;
        pctag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CtxItems::CtxList::PfxItems::PfxEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "pcTag")
    {
        pctag.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CtxItems::CtxList::PfxItems::PfxEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "pcTag" || name == "operSt" || name == "name" || name == "descr")
        return true;
    return false;
}

System::CtxItems::CtxList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "Ctx-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::DbItems::~DbItems()
{
}

bool System::CtxItems::CtxList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CtxItems::CtxList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CtxItems::CtxList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CtxItems::CtxList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto ent_ = std::make_shared<System::CtxItems::CtxList::DbItems::DbList>();
        ent_->parent = this;
        db_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CtxItems::CtxList::DbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : db_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CtxItems::CtxList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CtxItems::CtxList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CtxItems::CtxList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::CtxItems::CtxList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    ip_items(std::make_shared<System::CtxItems::CtxList::DbItems::DbList::IpItems>())
    , mac_items(std::make_shared<System::CtxItems::CtxList::DbItems::DbList::MacItems>())
{
    ip_items->parent = this;
    mac_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::DbItems::DbList::~DbList()
{
}

bool System::CtxItems::CtxList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (ip_items !=  nullptr && ip_items->has_data())
	|| (mac_items !=  nullptr && mac_items->has_data());
}

bool System::CtxItems::CtxList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ip_items !=  nullptr && ip_items->has_operation())
	|| (mac_items !=  nullptr && mac_items->has_operation());
}

std::string System::CtxItems::CtxList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CtxItems::CtxList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::CtxItems::CtxList::DbItems::DbList::IpItems>();
        }
        return ip_items;
    }

    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::CtxItems::CtxList::DbItems::DbList::MacItems>();
        }
        return mac_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CtxItems::CtxList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip_items != nullptr)
    {
        _children["ip-items"] = ip_items;
    }

    if(mac_items != nullptr)
    {
        _children["mac-items"] = mac_items;
    }

    return _children;
}

void System::CtxItems::CtxList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::CtxItems::CtxList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::CtxItems::CtxList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-items" || name == "mac-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::CtxItems::CtxList::DbItems::DbList::IpItems::IpItems()
    :
    ipep_list(this, {"addr"})
{

    yang_name = "ip-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::DbItems::DbList::IpItems::~IpItems()
{
}

bool System::CtxItems::CtxList::DbItems::DbList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipep_list.len(); index++)
    {
        if(ipep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CtxItems::CtxList::DbItems::DbList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<ipep_list.len(); index++)
    {
        if(ipep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CtxItems::CtxList::DbItems::DbList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::DbItems::DbList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CtxItems::CtxList::DbItems::DbList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpEp-list")
    {
        auto ent_ = std::make_shared<System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList>();
        ent_->parent = this;
        ipep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CtxItems::CtxList::DbItems::DbList::IpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CtxItems::CtxList::DbItems::DbList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CtxItems::CtxList::DbItems::DbList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CtxItems::CtxList::DbItems::DbList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IpEp-list")
        return true;
    return false;
}

System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::IpEpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    ifid{YType::str, "ifId"},
    flags{YType::str, "flags"}
        ,
    rtipeprslttoipepatt_items(std::make_shared<System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems>())
    , rtmaceprslttoipepatt_items(std::make_shared<System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems>())
{
    rtipeprslttoipepatt_items->parent = this;
    rtmaceprslttoipepatt_items->parent = this;

    yang_name = "IpEp-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::~IpEpList()
{
}

bool System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| ifid.is_set
	|| flags.is_set
	|| (rtipeprslttoipepatt_items !=  nullptr && rtipeprslttoipepatt_items->has_data())
	|| (rtmaceprslttoipepatt_items !=  nullptr && rtmaceprslttoipepatt_items->has_data());
}

bool System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (rtipeprslttoipepatt_items !=  nullptr && rtipeprslttoipepatt_items->has_operation())
	|| (rtmaceprslttoipepatt_items !=  nullptr && rtmaceprslttoipepatt_items->has_operation());
}

std::string System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IpEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtIpEpRslttoIpEpAtt-items")
    {
        if(rtipeprslttoipepatt_items == nullptr)
        {
            rtipeprslttoipepatt_items = std::make_shared<System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems>();
        }
        return rtipeprslttoipepatt_items;
    }

    if(child_yang_name == "rtMacEpRslttoIpEpAtt-items")
    {
        if(rtmaceprslttoipepatt_items == nullptr)
        {
            rtmaceprslttoipepatt_items = std::make_shared<System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems>();
        }
        return rtmaceprslttoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtipeprslttoipepatt_items != nullptr)
    {
        _children["rtIpEpRslttoIpEpAtt-items"] = rtipeprslttoipepatt_items;
    }

    if(rtmaceprslttoipepatt_items != nullptr)
    {
        _children["rtMacEpRslttoIpEpAtt-items"] = rtmaceprslttoipepatt_items;
    }

    return _children;
}

void System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtIpEpRslttoIpEpAtt-items" || name == "rtMacEpRslttoIpEpAtt-items" || name == "addr" || name == "name" || name == "ifId" || name == "flags")
        return true;
    return false;
}

System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::RtIpEpRslttoIpEpAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtIpEpRslttoIpEpAtt-items"; yang_parent_name = "IpEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::~RtIpEpRslttoIpEpAttItems()
{
}

bool System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtIpEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::RtMacEpRslttoIpEpAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtMacEpRslttoIpEpAtt-items"; yang_parent_name = "IpEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::~RtMacEpRslttoIpEpAttItems()
{
}

bool System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtMacEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CtxItems::CtxList::DbItems::DbList::MacItems::MacItems()
    :
    macep_list(this, {"addr"})
{

    yang_name = "mac-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::DbItems::DbList::MacItems::~MacItems()
{
}

bool System::CtxItems::CtxList::DbItems::DbList::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CtxItems::CtxList::DbItems::DbList::MacItems::has_operation() const
{
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CtxItems::CtxList::DbItems::DbList::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::DbItems::DbList::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CtxItems::CtxList::DbItems::DbList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MacEp-list")
    {
        auto ent_ = std::make_shared<System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList>();
        ent_->parent = this;
        macep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CtxItems::CtxList::DbItems::DbList::MacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : macep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CtxItems::CtxList::DbItems::DbList::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CtxItems::CtxList::DbItems::DbList::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CtxItems::CtxList::DbItems::DbList::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MacEp-list")
        return true;
    return false;
}

System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::MacEpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    ifid{YType::str, "ifId"},
    flags{YType::str, "flags"},
    createts{YType::str, "createTs"}
        ,
    rsmaceptoipepatt_items(std::make_shared<System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems>())
{
    rsmaceptoipepatt_items->parent = this;

    yang_name = "MacEp-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::~MacEpList()
{
}

bool System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| ifid.is_set
	|| flags.is_set
	|| createts.is_set
	|| (rsmaceptoipepatt_items !=  nullptr && rsmaceptoipepatt_items->has_data());
}

bool System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| (rsmaceptoipepatt_items !=  nullptr && rsmaceptoipepatt_items->has_operation());
}

std::string System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MacEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsmacEpToIpEpAtt-items")
    {
        if(rsmaceptoipepatt_items == nullptr)
        {
            rsmaceptoipepatt_items = std::make_shared<System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems>();
        }
        return rsmaceptoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsmaceptoipepatt_items != nullptr)
    {
        _children["rsmacEpToIpEpAtt-items"] = rsmaceptoipepatt_items;
    }

    return _children;
}

void System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
}

void System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
}

bool System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsmacEpToIpEpAtt-items" || name == "addr" || name == "name" || name == "ifId" || name == "flags" || name == "createTs")
        return true;
    return false;
}

System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsmacEpToIpEpAttItems()
    :
    rsmaceptoipepatt_list(this, {"tdn"})
{

    yang_name = "rsmacEpToIpEpAtt-items"; yang_parent_name = "MacEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::~RsmacEpToIpEpAttItems()
{
}

bool System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsmaceptoipepatt_list.len(); index++)
    {
        if(rsmaceptoipepatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsmaceptoipepatt_list.len(); index++)
    {
        if(rsmaceptoipepatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsmacEpToIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsMacEpToIpEpAtt-list")
    {
        auto ent_ = std::make_shared<System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList>();
        ent_->parent = this;
        rsmaceptoipepatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsmaceptoipepatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsMacEpToIpEpAtt-list")
        return true;
    return false;
}

System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::RsMacEpToIpEpAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsMacEpToIpEpAtt-list"; yang_parent_name = "rsmacEpToIpEpAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::~RsMacEpToIpEpAttList()
{
}

bool System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsMacEpToIpEpAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CtxItems::CtxList::MgmtItems::MgmtItems()
    :
    rtdmgmtif_list(this, {"id"})
{

    yang_name = "mgmt-items"; yang_parent_name = "Ctx-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::MgmtItems::~MgmtItems()
{
}

bool System::CtxItems::CtxList::MgmtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtdmgmtif_list.len(); index++)
    {
        if(rtdmgmtif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CtxItems::CtxList::MgmtItems::has_operation() const
{
    for (std::size_t index=0; index<rtdmgmtif_list.len(); index++)
    {
        if(rtdmgmtif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CtxItems::CtxList::MgmtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mgmt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::MgmtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CtxItems::CtxList::MgmtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtdMgmtIf-list")
    {
        auto ent_ = std::make_shared<System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList>();
        ent_->parent = this;
        rtdmgmtif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CtxItems::CtxList::MgmtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtdmgmtif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CtxItems::CtxList::MgmtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CtxItems::CtxList::MgmtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CtxItems::CtxList::MgmtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtdMgmtIf-list")
        return true;
    return false;
}

System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtdMgmtIfList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    rtpseudoif_items(std::make_shared<System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems>())
    , rsrtdmgmtconf_items(std::make_shared<System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems>())
    , rtvrfmbr_items(std::make_shared<System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems>())
{
    rtpseudoif_items->parent = this;
    rsrtdmgmtconf_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "RtdMgmtIf-list"; yang_parent_name = "mgmt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::~RtdMgmtIfList()
{
}

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (rtpseudoif_items !=  nullptr && rtpseudoif_items->has_data())
	|| (rsrtdmgmtconf_items !=  nullptr && rsrtdmgmtconf_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (rtpseudoif_items !=  nullptr && rtpseudoif_items->has_operation())
	|| (rsrtdmgmtconf_items !=  nullptr && rsrtdmgmtconf_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtdMgmtIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtpseudoIf-items")
    {
        if(rtpseudoif_items == nullptr)
        {
            rtpseudoif_items = std::make_shared<System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems>();
        }
        return rtpseudoif_items;
    }

    if(child_yang_name == "rsrtdMgmtConf-items")
    {
        if(rsrtdmgmtconf_items == nullptr)
        {
            rsrtdmgmtconf_items = std::make_shared<System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems>();
        }
        return rsrtdmgmtconf_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtpseudoif_items != nullptr)
    {
        _children["rtpseudoIf-items"] = rtpseudoif_items;
    }

    if(rsrtdmgmtconf_items != nullptr)
    {
        _children["rsrtdMgmtConf-items"] = rsrtdmgmtconf_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        _children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        _children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return _children;
}

void System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
}

void System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtpseudoIf-items" || name == "rsrtdMgmtConf-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::RtpseudoIfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtpseudoIf-items"; yang_parent_name = "RtdMgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::~RtpseudoIfItems()
{
}

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtpseudoIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::RsrtdMgmtConfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "rsrtdMgmtConf-items"; yang_parent_name = "RtdMgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::~RsrtdMgmtConfItems()
{
}

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsrtdMgmtConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateQual")
    {
        statequal = value;
        statequal.value_namespace = name_space;
        statequal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tType")
    {
        ttype = value;
        ttype.value_namespace = name_space;
        ttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rType")
    {
        rtype = value;
        rtype.value_namespace = name_space;
        rtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forceResolve")
    {
        forceresolve = value;
        forceresolve.value_namespace = name_space;
        forceresolve.value_namespace_prefix = name_space_prefix;
    }
}

void System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "stateQual")
    {
        statequal.yfilter = yfilter;
    }
    if(value_path == "tType")
    {
        ttype.yfilter = yfilter;
    }
    if(value_path == "rType")
    {
        rtype.yfilter = yfilter;
    }
    if(value_path == "forceResolve")
    {
        forceresolve.yfilter = yfilter;
    }
}

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "RtdMgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "RtdMgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtnwpathtoif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CtxItems::CtxList::RttenConnItems::RttenConnItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rttenConn-items"; yang_parent_name = "Ctx-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::RttenConnItems::~RttenConnItems()
{
}

bool System::CtxItems::CtxList::RttenConnItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CtxItems::CtxList::RttenConnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CtxItems::CtxList::RttenConnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttenConn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::RttenConnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CtxItems::CtxList::RttenConnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CtxItems::CtxList::RttenConnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CtxItems::CtxList::RttenConnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::CtxItems::CtxList::RttenConnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::CtxItems::CtxList::RttenConnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CtxItems::CtxList::RsctxToEpPItems::RsctxToEpPItems()
    :
    rsctxtoepp_list(this, {"tdn"})
{

    yang_name = "rsctxToEpP-items"; yang_parent_name = "Ctx-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::RsctxToEpPItems::~RsctxToEpPItems()
{
}

bool System::CtxItems::CtxList::RsctxToEpPItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsctxtoepp_list.len(); index++)
    {
        if(rsctxtoepp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CtxItems::CtxList::RsctxToEpPItems::has_operation() const
{
    for (std::size_t index=0; index<rsctxtoepp_list.len(); index++)
    {
        if(rsctxtoepp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CtxItems::CtxList::RsctxToEpPItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsctxToEpP-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::RsctxToEpPItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CtxItems::CtxList::RsctxToEpPItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsCtxToEpP-list")
    {
        auto ent_ = std::make_shared<System::CtxItems::CtxList::RsctxToEpPItems::RsCtxToEpPList>();
        ent_->parent = this;
        rsctxtoepp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CtxItems::CtxList::RsctxToEpPItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsctxtoepp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CtxItems::CtxList::RsctxToEpPItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CtxItems::CtxList::RsctxToEpPItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CtxItems::CtxList::RsctxToEpPItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsCtxToEpP-list")
        return true;
    return false;
}

System::CtxItems::CtxList::RsctxToEpPItems::RsCtxToEpPList::RsCtxToEpPList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "RsCtxToEpP-list"; yang_parent_name = "rsctxToEpP-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::RsctxToEpPItems::RsCtxToEpPList::~RsCtxToEpPList()
{
}

bool System::CtxItems::CtxList::RsctxToEpPItems::RsCtxToEpPList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::CtxItems::CtxList::RsctxToEpPItems::RsCtxToEpPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::CtxItems::CtxList::RsctxToEpPItems::RsCtxToEpPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsCtxToEpP-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::RsctxToEpPItems::RsCtxToEpPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CtxItems::CtxList::RsctxToEpPItems::RsCtxToEpPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CtxItems::CtxList::RsctxToEpPItems::RsCtxToEpPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CtxItems::CtxList::RsctxToEpPItems::RsCtxToEpPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateQual")
    {
        statequal = value;
        statequal.value_namespace = name_space;
        statequal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tType")
    {
        ttype = value;
        ttype.value_namespace = name_space;
        ttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rType")
    {
        rtype = value;
        rtype.value_namespace = name_space;
        rtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forceResolve")
    {
        forceresolve = value;
        forceresolve.value_namespace = name_space;
        forceresolve.value_namespace_prefix = name_space_prefix;
    }
}

void System::CtxItems::CtxList::RsctxToEpPItems::RsCtxToEpPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "stateQual")
    {
        statequal.yfilter = yfilter;
    }
    if(value_path == "tType")
    {
        ttype.yfilter = yfilter;
    }
    if(value_path == "rType")
    {
        rtype.yfilter = yfilter;
    }
    if(value_path == "forceResolve")
    {
        forceresolve.yfilter = yfilter;
    }
}

bool System::CtxItems::CtxList::RsctxToEpPItems::RsCtxToEpPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::InstItems::InstItems()
    :
    inst_list(this, {"name"})
{

    yang_name = "inst-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::InstItems::~InstItems()
{
}

bool System::InstItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<inst_list.len(); index++)
    {
        if(inst_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InstItems::has_operation() const
{
    for (std::size_t index=0; index<inst_list.len(); index++)
    {
        if(inst_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Inst-list")
    {
        auto ent_ = std::make_shared<System::InstItems::InstList>();
        ent_->parent = this;
        inst_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : inst_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Inst-list")
        return true;
    return false;
}

System::InstItems::InstList::InstList()
    :
    name{YType::str, "name"},
    resourceid{YType::uint16, "resourceId"},
    id{YType::uint16, "id"},
    encap{YType::str, "encap"},
    descr{YType::str, "descr"},
    scope{YType::uint32, "scope"},
    ctrlrid{YType::uint32, "ctrlrId"},
    seclbl{YType::uint16, "secLbl"},
    adminstate{YType::enumeration, "adminState"},
    operstate{YType::enumeration, "operState"},
    operstqual{YType::enumeration, "operStQual"},
    oldoperstqual{YType::enumeration, "oldOperStQual"},
    gsdbctx{YType::uint32, "gsdbCtx"},
    pending{YType::boolean, "pending"},
    v4tibvalid{YType::boolean, "v4TibValid"},
    v4tibid{YType::uint32, "v4TibId"},
    v4tibname{YType::str, "v4TibName"},
    v4tibpending{YType::boolean, "v4TibPending"},
    v4tiboperstate{YType::enumeration, "v4TibOperState"},
    v4tiboperstqual{YType::enumeration, "v4TibOperStQual"},
    v4tiboldoperstqual{YType::enumeration, "v4TibOldOperStQual"},
    v6tibvalid{YType::boolean, "v6TibValid"},
    v6tibid{YType::uint32, "v6TibId"},
    v6tibname{YType::str, "v6TibName"},
    v6tibpending{YType::boolean, "v6TibPending"},
    v6tiboperstate{YType::enumeration, "v6TibOperState"},
    v6tiboperstqual{YType::enumeration, "v6TibOperStQual"},
    v6tiboldoperstqual{YType::enumeration, "v6TibOldOperStQual"},
    createts{YType::str, "createTs"},
    lastchgdts{YType::str, "lastChgdTs"},
    bgprd{YType::str, "bgpRd"},
    bgprddisp{YType::str, "bgpRdDisp"},
    prtclbmp{YType::uint32, "prtclBmp"},
    oui{YType::uint32, "oui"},
    vpnid{YType::uint32, "vpnId"}
        ,
    tree_items(std::make_shared<System::InstItems::InstList::TreeItems>())
    , dom_items(std::make_shared<System::InstItems::InstList::DomItems>())
    , db_items(std::make_shared<System::InstItems::InstList::DbItems>())
    , shchp_items(std::make_shared<System::InstItems::InstList::ShchpItems>())
    , mgmt_items(std::make_shared<System::InstItems::InstList::MgmtItems>())
    , rsvrfmbr_items(std::make_shared<System::InstItems::InstList::RsvrfMbrItems>())
{
    tree_items->parent = this;
    dom_items->parent = this;
    db_items->parent = this;
    shchp_items->parent = this;
    mgmt_items->parent = this;
    rsvrfmbr_items->parent = this;

    yang_name = "Inst-list"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::InstItems::InstList::~InstList()
{
}

bool System::InstItems::InstList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| resourceid.is_set
	|| id.is_set
	|| encap.is_set
	|| descr.is_set
	|| scope.is_set
	|| ctrlrid.is_set
	|| seclbl.is_set
	|| adminstate.is_set
	|| operstate.is_set
	|| operstqual.is_set
	|| oldoperstqual.is_set
	|| gsdbctx.is_set
	|| pending.is_set
	|| v4tibvalid.is_set
	|| v4tibid.is_set
	|| v4tibname.is_set
	|| v4tibpending.is_set
	|| v4tiboperstate.is_set
	|| v4tiboperstqual.is_set
	|| v4tiboldoperstqual.is_set
	|| v6tibvalid.is_set
	|| v6tibid.is_set
	|| v6tibname.is_set
	|| v6tibpending.is_set
	|| v6tiboperstate.is_set
	|| v6tiboperstqual.is_set
	|| v6tiboldoperstqual.is_set
	|| createts.is_set
	|| lastchgdts.is_set
	|| bgprd.is_set
	|| bgprddisp.is_set
	|| prtclbmp.is_set
	|| oui.is_set
	|| vpnid.is_set
	|| (tree_items !=  nullptr && tree_items->has_data())
	|| (dom_items !=  nullptr && dom_items->has_data())
	|| (db_items !=  nullptr && db_items->has_data())
	|| (shchp_items !=  nullptr && shchp_items->has_data())
	|| (mgmt_items !=  nullptr && mgmt_items->has_data())
	|| (rsvrfmbr_items !=  nullptr && rsvrfmbr_items->has_data());
}

bool System::InstItems::InstList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(resourceid.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(ctrlrid.yfilter)
	|| ydk::is_set(seclbl.yfilter)
	|| ydk::is_set(adminstate.yfilter)
	|| ydk::is_set(operstate.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(oldoperstqual.yfilter)
	|| ydk::is_set(gsdbctx.yfilter)
	|| ydk::is_set(pending.yfilter)
	|| ydk::is_set(v4tibvalid.yfilter)
	|| ydk::is_set(v4tibid.yfilter)
	|| ydk::is_set(v4tibname.yfilter)
	|| ydk::is_set(v4tibpending.yfilter)
	|| ydk::is_set(v4tiboperstate.yfilter)
	|| ydk::is_set(v4tiboperstqual.yfilter)
	|| ydk::is_set(v4tiboldoperstqual.yfilter)
	|| ydk::is_set(v6tibvalid.yfilter)
	|| ydk::is_set(v6tibid.yfilter)
	|| ydk::is_set(v6tibname.yfilter)
	|| ydk::is_set(v6tibpending.yfilter)
	|| ydk::is_set(v6tiboperstate.yfilter)
	|| ydk::is_set(v6tiboperstqual.yfilter)
	|| ydk::is_set(v6tiboldoperstqual.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| ydk::is_set(lastchgdts.yfilter)
	|| ydk::is_set(bgprd.yfilter)
	|| ydk::is_set(bgprddisp.yfilter)
	|| ydk::is_set(prtclbmp.yfilter)
	|| ydk::is_set(oui.yfilter)
	|| ydk::is_set(vpnid.yfilter)
	|| (tree_items !=  nullptr && tree_items->has_operation())
	|| (dom_items !=  nullptr && dom_items->has_operation())
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (shchp_items !=  nullptr && shchp_items->has_operation())
	|| (mgmt_items !=  nullptr && mgmt_items->has_operation())
	|| (rsvrfmbr_items !=  nullptr && rsvrfmbr_items->has_operation());
}

std::string System::InstItems::InstList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::InstItems::InstList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Inst-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (resourceid.is_set || is_set(resourceid.yfilter)) leaf_name_data.push_back(resourceid.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (ctrlrid.is_set || is_set(ctrlrid.yfilter)) leaf_name_data.push_back(ctrlrid.get_name_leafdata());
    if (seclbl.is_set || is_set(seclbl.yfilter)) leaf_name_data.push_back(seclbl.get_name_leafdata());
    if (adminstate.is_set || is_set(adminstate.yfilter)) leaf_name_data.push_back(adminstate.get_name_leafdata());
    if (operstate.is_set || is_set(operstate.yfilter)) leaf_name_data.push_back(operstate.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (oldoperstqual.is_set || is_set(oldoperstqual.yfilter)) leaf_name_data.push_back(oldoperstqual.get_name_leafdata());
    if (gsdbctx.is_set || is_set(gsdbctx.yfilter)) leaf_name_data.push_back(gsdbctx.get_name_leafdata());
    if (pending.is_set || is_set(pending.yfilter)) leaf_name_data.push_back(pending.get_name_leafdata());
    if (v4tibvalid.is_set || is_set(v4tibvalid.yfilter)) leaf_name_data.push_back(v4tibvalid.get_name_leafdata());
    if (v4tibid.is_set || is_set(v4tibid.yfilter)) leaf_name_data.push_back(v4tibid.get_name_leafdata());
    if (v4tibname.is_set || is_set(v4tibname.yfilter)) leaf_name_data.push_back(v4tibname.get_name_leafdata());
    if (v4tibpending.is_set || is_set(v4tibpending.yfilter)) leaf_name_data.push_back(v4tibpending.get_name_leafdata());
    if (v4tiboperstate.is_set || is_set(v4tiboperstate.yfilter)) leaf_name_data.push_back(v4tiboperstate.get_name_leafdata());
    if (v4tiboperstqual.is_set || is_set(v4tiboperstqual.yfilter)) leaf_name_data.push_back(v4tiboperstqual.get_name_leafdata());
    if (v4tiboldoperstqual.is_set || is_set(v4tiboldoperstqual.yfilter)) leaf_name_data.push_back(v4tiboldoperstqual.get_name_leafdata());
    if (v6tibvalid.is_set || is_set(v6tibvalid.yfilter)) leaf_name_data.push_back(v6tibvalid.get_name_leafdata());
    if (v6tibid.is_set || is_set(v6tibid.yfilter)) leaf_name_data.push_back(v6tibid.get_name_leafdata());
    if (v6tibname.is_set || is_set(v6tibname.yfilter)) leaf_name_data.push_back(v6tibname.get_name_leafdata());
    if (v6tibpending.is_set || is_set(v6tibpending.yfilter)) leaf_name_data.push_back(v6tibpending.get_name_leafdata());
    if (v6tiboperstate.is_set || is_set(v6tiboperstate.yfilter)) leaf_name_data.push_back(v6tiboperstate.get_name_leafdata());
    if (v6tiboperstqual.is_set || is_set(v6tiboperstqual.yfilter)) leaf_name_data.push_back(v6tiboperstqual.get_name_leafdata());
    if (v6tiboldoperstqual.is_set || is_set(v6tiboldoperstqual.yfilter)) leaf_name_data.push_back(v6tiboldoperstqual.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());
    if (lastchgdts.is_set || is_set(lastchgdts.yfilter)) leaf_name_data.push_back(lastchgdts.get_name_leafdata());
    if (bgprd.is_set || is_set(bgprd.yfilter)) leaf_name_data.push_back(bgprd.get_name_leafdata());
    if (bgprddisp.is_set || is_set(bgprddisp.yfilter)) leaf_name_data.push_back(bgprddisp.get_name_leafdata());
    if (prtclbmp.is_set || is_set(prtclbmp.yfilter)) leaf_name_data.push_back(prtclbmp.get_name_leafdata());
    if (oui.is_set || is_set(oui.yfilter)) leaf_name_data.push_back(oui.get_name_leafdata());
    if (vpnid.is_set || is_set(vpnid.yfilter)) leaf_name_data.push_back(vpnid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tree-items")
    {
        if(tree_items == nullptr)
        {
            tree_items = std::make_shared<System::InstItems::InstList::TreeItems>();
        }
        return tree_items;
    }

    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::InstItems::InstList::DomItems>();
        }
        return dom_items;
    }

    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::InstItems::InstList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "shchp-items")
    {
        if(shchp_items == nullptr)
        {
            shchp_items = std::make_shared<System::InstItems::InstList::ShchpItems>();
        }
        return shchp_items;
    }

    if(child_yang_name == "mgmt-items")
    {
        if(mgmt_items == nullptr)
        {
            mgmt_items = std::make_shared<System::InstItems::InstList::MgmtItems>();
        }
        return mgmt_items;
    }

    if(child_yang_name == "rsvrfMbr-items")
    {
        if(rsvrfmbr_items == nullptr)
        {
            rsvrfmbr_items = std::make_shared<System::InstItems::InstList::RsvrfMbrItems>();
        }
        return rsvrfmbr_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tree_items != nullptr)
    {
        _children["tree-items"] = tree_items;
    }

    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    if(db_items != nullptr)
    {
        _children["db-items"] = db_items;
    }

    if(shchp_items != nullptr)
    {
        _children["shchp-items"] = shchp_items;
    }

    if(mgmt_items != nullptr)
    {
        _children["mgmt-items"] = mgmt_items;
    }

    if(rsvrfmbr_items != nullptr)
    {
        _children["rsvrfMbr-items"] = rsvrfmbr_items;
    }

    return _children;
}

void System::InstItems::InstList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resourceId")
    {
        resourceid = value;
        resourceid.value_namespace = name_space;
        resourceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrlrId")
    {
        ctrlrid = value;
        ctrlrid.value_namespace = name_space;
        ctrlrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secLbl")
    {
        seclbl = value;
        seclbl.value_namespace = name_space;
        seclbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminState")
    {
        adminstate = value;
        adminstate.value_namespace = name_space;
        adminstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operState")
    {
        operstate = value;
        operstate.value_namespace = name_space;
        operstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operStQual")
    {
        operstqual = value;
        operstqual.value_namespace = name_space;
        operstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oldOperStQual")
    {
        oldoperstqual = value;
        oldoperstqual.value_namespace = name_space;
        oldoperstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gsdbCtx")
    {
        gsdbctx = value;
        gsdbctx.value_namespace = name_space;
        gsdbctx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending")
    {
        pending = value;
        pending.value_namespace = name_space;
        pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4TibValid")
    {
        v4tibvalid = value;
        v4tibvalid.value_namespace = name_space;
        v4tibvalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4TibId")
    {
        v4tibid = value;
        v4tibid.value_namespace = name_space;
        v4tibid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4TibName")
    {
        v4tibname = value;
        v4tibname.value_namespace = name_space;
        v4tibname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4TibPending")
    {
        v4tibpending = value;
        v4tibpending.value_namespace = name_space;
        v4tibpending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4TibOperState")
    {
        v4tiboperstate = value;
        v4tiboperstate.value_namespace = name_space;
        v4tiboperstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4TibOperStQual")
    {
        v4tiboperstqual = value;
        v4tiboperstqual.value_namespace = name_space;
        v4tiboperstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4TibOldOperStQual")
    {
        v4tiboldoperstqual = value;
        v4tiboldoperstqual.value_namespace = name_space;
        v4tiboldoperstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6TibValid")
    {
        v6tibvalid = value;
        v6tibvalid.value_namespace = name_space;
        v6tibvalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6TibId")
    {
        v6tibid = value;
        v6tibid.value_namespace = name_space;
        v6tibid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6TibName")
    {
        v6tibname = value;
        v6tibname.value_namespace = name_space;
        v6tibname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6TibPending")
    {
        v6tibpending = value;
        v6tibpending.value_namespace = name_space;
        v6tibpending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6TibOperState")
    {
        v6tiboperstate = value;
        v6tiboperstate.value_namespace = name_space;
        v6tiboperstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6TibOperStQual")
    {
        v6tiboperstqual = value;
        v6tiboperstqual.value_namespace = name_space;
        v6tiboperstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6TibOldOperStQual")
    {
        v6tiboldoperstqual = value;
        v6tiboldoperstqual.value_namespace = name_space;
        v6tiboldoperstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastChgdTs")
    {
        lastchgdts = value;
        lastchgdts.value_namespace = name_space;
        lastchgdts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpRd")
    {
        bgprd = value;
        bgprd.value_namespace = name_space;
        bgprd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpRdDisp")
    {
        bgprddisp = value;
        bgprddisp.value_namespace = name_space;
        bgprddisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prtclBmp")
    {
        prtclbmp = value;
        prtclbmp.value_namespace = name_space;
        prtclbmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oui")
    {
        oui = value;
        oui.value_namespace = name_space;
        oui.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpnId")
    {
        vpnid = value;
        vpnid.value_namespace = name_space;
        vpnid.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstItems::InstList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "resourceId")
    {
        resourceid.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "ctrlrId")
    {
        ctrlrid.yfilter = yfilter;
    }
    if(value_path == "secLbl")
    {
        seclbl.yfilter = yfilter;
    }
    if(value_path == "adminState")
    {
        adminstate.yfilter = yfilter;
    }
    if(value_path == "operState")
    {
        operstate.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "oldOperStQual")
    {
        oldoperstqual.yfilter = yfilter;
    }
    if(value_path == "gsdbCtx")
    {
        gsdbctx.yfilter = yfilter;
    }
    if(value_path == "pending")
    {
        pending.yfilter = yfilter;
    }
    if(value_path == "v4TibValid")
    {
        v4tibvalid.yfilter = yfilter;
    }
    if(value_path == "v4TibId")
    {
        v4tibid.yfilter = yfilter;
    }
    if(value_path == "v4TibName")
    {
        v4tibname.yfilter = yfilter;
    }
    if(value_path == "v4TibPending")
    {
        v4tibpending.yfilter = yfilter;
    }
    if(value_path == "v4TibOperState")
    {
        v4tiboperstate.yfilter = yfilter;
    }
    if(value_path == "v4TibOperStQual")
    {
        v4tiboperstqual.yfilter = yfilter;
    }
    if(value_path == "v4TibOldOperStQual")
    {
        v4tiboldoperstqual.yfilter = yfilter;
    }
    if(value_path == "v6TibValid")
    {
        v6tibvalid.yfilter = yfilter;
    }
    if(value_path == "v6TibId")
    {
        v6tibid.yfilter = yfilter;
    }
    if(value_path == "v6TibName")
    {
        v6tibname.yfilter = yfilter;
    }
    if(value_path == "v6TibPending")
    {
        v6tibpending.yfilter = yfilter;
    }
    if(value_path == "v6TibOperState")
    {
        v6tiboperstate.yfilter = yfilter;
    }
    if(value_path == "v6TibOperStQual")
    {
        v6tiboperstqual.yfilter = yfilter;
    }
    if(value_path == "v6TibOldOperStQual")
    {
        v6tiboldoperstqual.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
    if(value_path == "lastChgdTs")
    {
        lastchgdts.yfilter = yfilter;
    }
    if(value_path == "bgpRd")
    {
        bgprd.yfilter = yfilter;
    }
    if(value_path == "bgpRdDisp")
    {
        bgprddisp.yfilter = yfilter;
    }
    if(value_path == "prtclBmp")
    {
        prtclbmp.yfilter = yfilter;
    }
    if(value_path == "oui")
    {
        oui.yfilter = yfilter;
    }
    if(value_path == "vpnId")
    {
        vpnid.yfilter = yfilter;
    }
}

bool System::InstItems::InstList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tree-items" || name == "dom-items" || name == "db-items" || name == "shchp-items" || name == "mgmt-items" || name == "rsvrfMbr-items" || name == "name" || name == "resourceId" || name == "id" || name == "encap" || name == "descr" || name == "scope" || name == "ctrlrId" || name == "secLbl" || name == "adminState" || name == "operState" || name == "operStQual" || name == "oldOperStQual" || name == "gsdbCtx" || name == "pending" || name == "v4TibValid" || name == "v4TibId" || name == "v4TibName" || name == "v4TibPending" || name == "v4TibOperState" || name == "v4TibOperStQual" || name == "v4TibOldOperStQual" || name == "v6TibValid" || name == "v6TibId" || name == "v6TibName" || name == "v6TibPending" || name == "v6TibOperState" || name == "v6TibOperStQual" || name == "v6TibOldOperStQual" || name == "createTs" || name == "lastChgdTs" || name == "bgpRd" || name == "bgpRdDisp" || name == "prtclBmp" || name == "oui" || name == "vpnId")
        return true;
    return false;
}

System::InstItems::InstList::TreeItems::TreeItems()
    :
    tree_list(this, {"id"})
{

    yang_name = "tree-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::TreeItems::~TreeItems()
{
}

bool System::InstItems::InstList::TreeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tree_list.len(); index++)
    {
        if(tree_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InstItems::InstList::TreeItems::has_operation() const
{
    for (std::size_t index=0; index<tree_list.len(); index++)
    {
        if(tree_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InstItems::InstList::TreeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tree-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::TreeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::TreeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Tree-list")
    {
        auto ent_ = std::make_shared<System::InstItems::InstList::TreeItems::TreeList>();
        ent_->parent = this;
        tree_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::TreeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tree_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::InstItems::InstList::TreeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InstItems::InstList::TreeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InstItems::InstList::TreeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Tree-list")
        return true;
    return false;
}

System::InstItems::InstList::TreeItems::TreeList::TreeList()
    :
    id{YType::uint8, "id"},
    root{YType::str, "root"},
    adminst{YType::enumeration, "adminSt"},
    name{YType::str, "name"}
{

    yang_name = "Tree-list"; yang_parent_name = "tree-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::TreeItems::TreeList::~TreeList()
{
}

bool System::InstItems::InstList::TreeItems::TreeList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| root.is_set
	|| adminst.is_set
	|| name.is_set;
}

bool System::InstItems::InstList::TreeItems::TreeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(root.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::InstItems::InstList::TreeItems::TreeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Tree-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::TreeItems::TreeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (root.is_set || is_set(root.yfilter)) leaf_name_data.push_back(root.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::TreeItems::TreeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::TreeItems::TreeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::InstItems::InstList::TreeItems::TreeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "root")
    {
        root = value;
        root.value_namespace = name_space;
        root.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstItems::InstList::TreeItems::TreeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "root")
    {
        root.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::InstItems::InstList::TreeItems::TreeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "root" || name == "adminSt" || name == "name")
        return true;
    return false;
}

System::InstItems::InstList::DomItems::DomItems()
    :
    dom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DomItems::~DomItems()
{
}

bool System::InstItems::InstList::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InstItems::InstList::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InstItems::InstList::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto ent_ = std::make_shared<System::InstItems::InstList::DomItems::DomList>();
        ent_->parent = this;
        dom_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dom_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::InstItems::InstList::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InstItems::InstList::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InstItems::InstList::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::InstItems::InstList::DomItems::DomList::DomList()
    :
    name{YType::str, "name"},
    rd{YType::str, "rd"},
    operrd{YType::str, "operRd"}
        ,
    af_items(std::make_shared<System::InstItems::InstList::DomItems::DomList::AfItems>())
{
    af_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DomItems::DomList::~DomList()
{
}

bool System::InstItems::InstList::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| rd.is_set
	|| operrd.is_set
	|| (af_items !=  nullptr && af_items->has_data());
}

bool System::InstItems::InstList::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(operrd.yfilter)
	|| (af_items !=  nullptr && af_items->has_operation());
}

std::string System::InstItems::InstList::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (operrd.is_set || is_set(operrd.yfilter)) leaf_name_data.push_back(operrd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-items")
    {
        if(af_items == nullptr)
        {
            af_items = std::make_shared<System::InstItems::InstList::DomItems::DomList::AfItems>();
        }
        return af_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(af_items != nullptr)
    {
        _children["af-items"] = af_items;
    }

    return _children;
}

void System::InstItems::InstList::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operRd")
    {
        operrd = value;
        operrd.value_namespace = name_space;
        operrd.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstItems::InstList::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "operRd")
    {
        operrd.yfilter = yfilter;
    }
}

bool System::InstItems::InstList::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-items" || name == "name" || name == "rd" || name == "operRd")
        return true;
    return false;
}

System::InstItems::InstList::DomItems::DomList::AfItems::AfItems()
    :
    domaf_list(this, {"type"})
{

    yang_name = "af-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DomItems::DomList::AfItems::~AfItems()
{
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<domaf_list.len(); index++)
    {
        if(domaf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::has_operation() const
{
    for (std::size_t index=0; index<domaf_list.len(); index++)
    {
        if(domaf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InstItems::InstList::DomItems::DomList::AfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DomItems::DomList::AfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::DomItems::DomList::AfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DomAf-list")
    {
        auto ent_ = std::make_shared<System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList>();
        ent_->parent = this;
        domaf_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::DomItems::DomList::AfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : domaf_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::InstItems::InstList::DomItems::DomList::AfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InstItems::InstList::DomItems::DomList::AfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DomAf-list")
        return true;
    return false;
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DomAfList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    ctrl_items(std::make_shared<System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems>())
{
    ctrl_items->parent = this;

    yang_name = "DomAf-list"; yang_parent_name = "af-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::~DomAfList()
{
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (ctrl_items !=  nullptr && ctrl_items->has_data());
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ctrl_items !=  nullptr && ctrl_items->has_operation());
}

std::string System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DomAf-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ctrl-items")
    {
        if(ctrl_items == nullptr)
        {
            ctrl_items = std::make_shared<System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems>();
        }
        return ctrl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ctrl_items != nullptr)
    {
        _children["ctrl-items"] = ctrl_items;
    }

    return _children;
}

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ctrl-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::CtrlItems()
    :
    afctrl_list(this, {"type"})
{

    yang_name = "ctrl-items"; yang_parent_name = "DomAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::~CtrlItems()
{
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<afctrl_list.len(); index++)
    {
        if(afctrl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::has_operation() const
{
    for (std::size_t index=0; index<afctrl_list.len(); index++)
    {
        if(afctrl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ctrl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AfCtrl-list")
    {
        auto ent_ = std::make_shared<System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList>();
        ent_->parent = this;
        afctrl_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : afctrl_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AfCtrl-list")
        return true;
    return false;
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::AfCtrlList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    rttp_items(std::make_shared<System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems>())
{
    rttp_items->parent = this;

    yang_name = "AfCtrl-list"; yang_parent_name = "ctrl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::~AfCtrlList()
{
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (rttp_items !=  nullptr && rttp_items->has_data());
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rttp_items !=  nullptr && rttp_items->has_operation());
}

std::string System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AfCtrl-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttp-items")
    {
        if(rttp_items == nullptr)
        {
            rttp_items = std::make_shared<System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems>();
        }
        return rttp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rttp_items != nullptr)
    {
        _children["rttp-items"] = rttp_items;
    }

    return _children;
}

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttp-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttpItems()
    :
    rttp_list(this, {"type"})
{

    yang_name = "rttp-items"; yang_parent_name = "AfCtrl-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::~RttpItems()
{
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttp_list.len(); index++)
    {
        if(rttp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::has_operation() const
{
    for (std::size_t index=0; index<rttp_list.len(); index++)
    {
        if(rttp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RttP-list")
    {
        auto ent_ = std::make_shared<System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList>();
        ent_->parent = this;
        rttp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rttp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RttP-list")
        return true;
    return false;
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RttPList()
    :
    type{YType::enumeration, "type"},
    cfgsrcctrlr{YType::enumeration, "cfgSrcCtrlr"},
    operrttauto{YType::str, "operRttAuto"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    ent_items(std::make_shared<System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems>())
    , rtctrlmap_items(std::make_shared<System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrlmapItems>())
    , rtctrldefmap_items(std::make_shared<System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrldefmapItems>())
{
    ent_items->parent = this;
    rtctrlmap_items->parent = this;
    rtctrldefmap_items->parent = this;

    yang_name = "RttP-list"; yang_parent_name = "rttp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::~RttPList()
{
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| cfgsrcctrlr.is_set
	|| operrttauto.is_set
	|| name.is_set
	|| descr.is_set
	|| (ent_items !=  nullptr && ent_items->has_data())
	|| (rtctrlmap_items !=  nullptr && rtctrlmap_items->has_data())
	|| (rtctrldefmap_items !=  nullptr && rtctrldefmap_items->has_data());
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cfgsrcctrlr.yfilter)
	|| ydk::is_set(operrttauto.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (ent_items !=  nullptr && ent_items->has_operation())
	|| (rtctrlmap_items !=  nullptr && rtctrlmap_items->has_operation())
	|| (rtctrldefmap_items !=  nullptr && rtctrldefmap_items->has_operation());
}

std::string System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RttP-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cfgsrcctrlr.is_set || is_set(cfgsrcctrlr.yfilter)) leaf_name_data.push_back(cfgsrcctrlr.get_name_leafdata());
    if (operrttauto.is_set || is_set(operrttauto.yfilter)) leaf_name_data.push_back(operrttauto.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ent-items")
    {
        if(ent_items == nullptr)
        {
            ent_items = std::make_shared<System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems>();
        }
        return ent_items;
    }

    if(child_yang_name == "rtctrlmap-items")
    {
        if(rtctrlmap_items == nullptr)
        {
            rtctrlmap_items = std::make_shared<System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrlmapItems>();
        }
        return rtctrlmap_items;
    }

    if(child_yang_name == "rtctrldefmap-items")
    {
        if(rtctrldefmap_items == nullptr)
        {
            rtctrldefmap_items = std::make_shared<System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrldefmapItems>();
        }
        return rtctrldefmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ent_items != nullptr)
    {
        _children["ent-items"] = ent_items;
    }

    if(rtctrlmap_items != nullptr)
    {
        _children["rtctrlmap-items"] = rtctrlmap_items;
    }

    if(rtctrldefmap_items != nullptr)
    {
        _children["rtctrldefmap-items"] = rtctrldefmap_items;
    }

    return _children;
}

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfgSrcCtrlr")
    {
        cfgsrcctrlr = value;
        cfgsrcctrlr.value_namespace = name_space;
        cfgsrcctrlr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operRttAuto")
    {
        operrttauto = value;
        operrttauto.value_namespace = name_space;
        operrttauto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cfgSrcCtrlr")
    {
        cfgsrcctrlr.yfilter = yfilter;
    }
    if(value_path == "operRttAuto")
    {
        operrttauto.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ent-items" || name == "rtctrlmap-items" || name == "rtctrldefmap-items" || name == "type" || name == "cfgSrcCtrlr" || name == "operRttAuto" || name == "name" || name == "descr")
        return true;
    return false;
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::EntItems()
    :
    rttentry_list(this, {"rtt"})
{

    yang_name = "ent-items"; yang_parent_name = "RttP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::~EntItems()
{
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttentry_list.len(); index++)
    {
        if(rttentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::has_operation() const
{
    for (std::size_t index=0; index<rttentry_list.len(); index++)
    {
        if(rttentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ent-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RttEntry-list")
    {
        auto ent_ = std::make_shared<System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList>();
        ent_->parent = this;
        rttentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rttentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RttEntry-list")
        return true;
    return false;
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::RttEntryList()
    :
    rtt{YType::str, "rtt"},
    cfgsrcctrlr{YType::enumeration, "cfgSrcCtrlr"}
{

    yang_name = "RttEntry-list"; yang_parent_name = "ent-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::~RttEntryList()
{
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::has_data() const
{
    if (is_presence_container) return true;
    return rtt.is_set
	|| cfgsrcctrlr.is_set;
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtt.yfilter)
	|| ydk::is_set(cfgsrcctrlr.yfilter);
}

std::string System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RttEntry-list";
    ADD_KEY_TOKEN(rtt, "rtt");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtt.is_set || is_set(rtt.yfilter)) leaf_name_data.push_back(rtt.get_name_leafdata());
    if (cfgsrcctrlr.is_set || is_set(cfgsrcctrlr.yfilter)) leaf_name_data.push_back(cfgsrcctrlr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtt")
    {
        rtt = value;
        rtt.value_namespace = name_space;
        rtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfgSrcCtrlr")
    {
        cfgsrcctrlr = value;
        cfgsrcctrlr.value_namespace = name_space;
        cfgsrcctrlr.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtt")
    {
        rtt.yfilter = yfilter;
    }
    if(value_path == "cfgSrcCtrlr")
    {
        cfgsrcctrlr.yfilter = yfilter;
    }
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtt" || name == "cfgSrcCtrlr")
        return true;
    return false;
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrlmapItems::RtctrlmapItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    rtmap{YType::str, "rtMap"}
{

    yang_name = "rtctrlmap-items"; yang_parent_name = "RttP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrlmapItems::~RtctrlmapItems()
{
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrlmapItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| rtmap.is_set;
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrlmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(rtmap.yfilter);
}

std::string System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrlmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtctrlmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrlmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrlmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrlmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrlmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrlmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrlmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "rtMap")
        return true;
    return false;
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrldefmapItems::RtctrldefmapItems()
    :
    pfxlimit{YType::uint32, "pfxLimit"},
    allowvpn{YType::boolean, "allowVpn"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    rtmap{YType::str, "rtMap"}
{

    yang_name = "rtctrldefmap-items"; yang_parent_name = "RttP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrldefmapItems::~RtctrldefmapItems()
{
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrldefmapItems::has_data() const
{
    if (is_presence_container) return true;
    return pfxlimit.is_set
	|| allowvpn.is_set
	|| name.is_set
	|| descr.is_set
	|| rtmap.is_set;
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrldefmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfxlimit.yfilter)
	|| ydk::is_set(allowvpn.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(rtmap.yfilter);
}

std::string System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrldefmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtctrldefmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrldefmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfxlimit.is_set || is_set(pfxlimit.yfilter)) leaf_name_data.push_back(pfxlimit.get_name_leafdata());
    if (allowvpn.is_set || is_set(allowvpn.yfilter)) leaf_name_data.push_back(allowvpn.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrldefmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrldefmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrldefmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfxLimit")
    {
        pfxlimit = value;
        pfxlimit.value_namespace = name_space;
        pfxlimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowVpn")
    {
        allowvpn = value;
        allowvpn.value_namespace = name_space;
        allowvpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrldefmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfxLimit")
    {
        pfxlimit.yfilter = yfilter;
    }
    if(value_path == "allowVpn")
    {
        allowvpn.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrldefmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfxLimit" || name == "allowVpn" || name == "name" || name == "descr" || name == "rtMap")
        return true;
    return false;
}

System::InstItems::InstList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DbItems::~DbItems()
{
}

bool System::InstItems::InstList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InstItems::InstList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InstItems::InstList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto ent_ = std::make_shared<System::InstItems::InstList::DbItems::DbList>();
        ent_->parent = this;
        db_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::DbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : db_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::InstItems::InstList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InstItems::InstList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InstItems::InstList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::InstItems::InstList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    ip_items(std::make_shared<System::InstItems::InstList::DbItems::DbList::IpItems>())
    , mac_items(std::make_shared<System::InstItems::InstList::DbItems::DbList::MacItems>())
{
    ip_items->parent = this;
    mac_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DbItems::DbList::~DbList()
{
}

bool System::InstItems::InstList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (ip_items !=  nullptr && ip_items->has_data())
	|| (mac_items !=  nullptr && mac_items->has_data());
}

bool System::InstItems::InstList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ip_items !=  nullptr && ip_items->has_operation())
	|| (mac_items !=  nullptr && mac_items->has_operation());
}

std::string System::InstItems::InstList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::InstItems::InstList::DbItems::DbList::IpItems>();
        }
        return ip_items;
    }

    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::InstItems::InstList::DbItems::DbList::MacItems>();
        }
        return mac_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip_items != nullptr)
    {
        _children["ip-items"] = ip_items;
    }

    if(mac_items != nullptr)
    {
        _children["mac-items"] = mac_items;
    }

    return _children;
}

void System::InstItems::InstList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstItems::InstList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::InstItems::InstList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-items" || name == "mac-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::InstItems::InstList::DbItems::DbList::IpItems::IpItems()
    :
    ipep_list(this, {"addr"})
{

    yang_name = "ip-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DbItems::DbList::IpItems::~IpItems()
{
}

bool System::InstItems::InstList::DbItems::DbList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipep_list.len(); index++)
    {
        if(ipep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InstItems::InstList::DbItems::DbList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<ipep_list.len(); index++)
    {
        if(ipep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InstItems::InstList::DbItems::DbList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DbItems::DbList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::DbItems::DbList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpEp-list")
    {
        auto ent_ = std::make_shared<System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList>();
        ent_->parent = this;
        ipep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::DbItems::DbList::IpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::InstItems::InstList::DbItems::DbList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InstItems::InstList::DbItems::DbList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InstItems::InstList::DbItems::DbList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IpEp-list")
        return true;
    return false;
}

System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::IpEpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    ifid{YType::str, "ifId"},
    flags{YType::str, "flags"}
        ,
    rtipeprslttoipepatt_items(std::make_shared<System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems>())
    , rtmaceprslttoipepatt_items(std::make_shared<System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems>())
{
    rtipeprslttoipepatt_items->parent = this;
    rtmaceprslttoipepatt_items->parent = this;

    yang_name = "IpEp-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::~IpEpList()
{
}

bool System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| ifid.is_set
	|| flags.is_set
	|| (rtipeprslttoipepatt_items !=  nullptr && rtipeprslttoipepatt_items->has_data())
	|| (rtmaceprslttoipepatt_items !=  nullptr && rtmaceprslttoipepatt_items->has_data());
}

bool System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (rtipeprslttoipepatt_items !=  nullptr && rtipeprslttoipepatt_items->has_operation())
	|| (rtmaceprslttoipepatt_items !=  nullptr && rtmaceprslttoipepatt_items->has_operation());
}

std::string System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IpEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtIpEpRslttoIpEpAtt-items")
    {
        if(rtipeprslttoipepatt_items == nullptr)
        {
            rtipeprslttoipepatt_items = std::make_shared<System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems>();
        }
        return rtipeprslttoipepatt_items;
    }

    if(child_yang_name == "rtMacEpRslttoIpEpAtt-items")
    {
        if(rtmaceprslttoipepatt_items == nullptr)
        {
            rtmaceprslttoipepatt_items = std::make_shared<System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems>();
        }
        return rtmaceprslttoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtipeprslttoipepatt_items != nullptr)
    {
        _children["rtIpEpRslttoIpEpAtt-items"] = rtipeprslttoipepatt_items;
    }

    if(rtmaceprslttoipepatt_items != nullptr)
    {
        _children["rtMacEpRslttoIpEpAtt-items"] = rtmaceprslttoipepatt_items;
    }

    return _children;
}

void System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtIpEpRslttoIpEpAtt-items" || name == "rtMacEpRslttoIpEpAtt-items" || name == "addr" || name == "name" || name == "ifId" || name == "flags")
        return true;
    return false;
}

System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::RtIpEpRslttoIpEpAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtIpEpRslttoIpEpAtt-items"; yang_parent_name = "IpEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::~RtIpEpRslttoIpEpAttItems()
{
}

bool System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtIpEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::RtMacEpRslttoIpEpAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtMacEpRslttoIpEpAtt-items"; yang_parent_name = "IpEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::~RtMacEpRslttoIpEpAttItems()
{
}

bool System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtMacEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::InstItems::InstList::DbItems::DbList::MacItems::MacItems()
    :
    macep_list(this, {"addr"})
{

    yang_name = "mac-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DbItems::DbList::MacItems::~MacItems()
{
}

bool System::InstItems::InstList::DbItems::DbList::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InstItems::InstList::DbItems::DbList::MacItems::has_operation() const
{
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InstItems::InstList::DbItems::DbList::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DbItems::DbList::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::DbItems::DbList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MacEp-list")
    {
        auto ent_ = std::make_shared<System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList>();
        ent_->parent = this;
        macep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::DbItems::DbList::MacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : macep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::InstItems::InstList::DbItems::DbList::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InstItems::InstList::DbItems::DbList::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InstItems::InstList::DbItems::DbList::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MacEp-list")
        return true;
    return false;
}

System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::MacEpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    ifid{YType::str, "ifId"},
    flags{YType::str, "flags"},
    createts{YType::str, "createTs"}
        ,
    rsmaceptoipepatt_items(std::make_shared<System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems>())
{
    rsmaceptoipepatt_items->parent = this;

    yang_name = "MacEp-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::~MacEpList()
{
}

bool System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| ifid.is_set
	|| flags.is_set
	|| createts.is_set
	|| (rsmaceptoipepatt_items !=  nullptr && rsmaceptoipepatt_items->has_data());
}

bool System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| (rsmaceptoipepatt_items !=  nullptr && rsmaceptoipepatt_items->has_operation());
}

std::string System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MacEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsmacEpToIpEpAtt-items")
    {
        if(rsmaceptoipepatt_items == nullptr)
        {
            rsmaceptoipepatt_items = std::make_shared<System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems>();
        }
        return rsmaceptoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsmaceptoipepatt_items != nullptr)
    {
        _children["rsmacEpToIpEpAtt-items"] = rsmaceptoipepatt_items;
    }

    return _children;
}

void System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
}

bool System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsmacEpToIpEpAtt-items" || name == "addr" || name == "name" || name == "ifId" || name == "flags" || name == "createTs")
        return true;
    return false;
}

System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsmacEpToIpEpAttItems()
    :
    rsmaceptoipepatt_list(this, {"tdn"})
{

    yang_name = "rsmacEpToIpEpAtt-items"; yang_parent_name = "MacEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::~RsmacEpToIpEpAttItems()
{
}

bool System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsmaceptoipepatt_list.len(); index++)
    {
        if(rsmaceptoipepatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsmaceptoipepatt_list.len(); index++)
    {
        if(rsmaceptoipepatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsmacEpToIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsMacEpToIpEpAtt-list")
    {
        auto ent_ = std::make_shared<System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList>();
        ent_->parent = this;
        rsmaceptoipepatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsmaceptoipepatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsMacEpToIpEpAtt-list")
        return true;
    return false;
}

System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::RsMacEpToIpEpAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsMacEpToIpEpAtt-list"; yang_parent_name = "rsmacEpToIpEpAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::~RsMacEpToIpEpAttList()
{
}

bool System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsMacEpToIpEpAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::InstItems::InstList::ShchpItems::ShchpItems()
    :
    shardchp_list(this, {"af"})
{

    yang_name = "shchp-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::ShchpItems::~ShchpItems()
{
}

bool System::InstItems::InstList::ShchpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<shardchp_list.len(); index++)
    {
        if(shardchp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InstItems::InstList::ShchpItems::has_operation() const
{
    for (std::size_t index=0; index<shardchp_list.len(); index++)
    {
        if(shardchp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InstItems::InstList::ShchpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shchp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::ShchpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::ShchpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ShardChP-list")
    {
        auto ent_ = std::make_shared<System::InstItems::InstList::ShchpItems::ShardChPList>();
        ent_->parent = this;
        shardchp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::ShchpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : shardchp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::InstItems::InstList::ShchpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InstItems::InstList::ShchpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InstItems::InstList::ShchpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ShardChP-list")
        return true;
    return false;
}

System::InstItems::InstList::ShchpItems::ShardChPList::ShardChPList()
    :
    af{YType::enumeration, "af"},
    node{YType::str, "node"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "ShardChP-list"; yang_parent_name = "shchp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::ShchpItems::ShardChPList::~ShardChPList()
{
}

bool System::InstItems::InstList::ShchpItems::ShardChPList::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| node.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::InstItems::InstList::ShchpItems::ShardChPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::InstItems::InstList::ShchpItems::ShardChPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ShardChP-list";
    ADD_KEY_TOKEN(af, "af");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::ShchpItems::ShardChPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::ShchpItems::ShardChPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::ShchpItems::ShardChPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::InstItems::InstList::ShchpItems::ShardChPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstItems::InstList::ShchpItems::ShardChPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::InstItems::InstList::ShchpItems::ShardChPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "node" || name == "name" || name == "descr")
        return true;
    return false;
}

System::InstItems::InstList::MgmtItems::MgmtItems()
    :
    rtdmgmtif_list(this, {"id"})
{

    yang_name = "mgmt-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::MgmtItems::~MgmtItems()
{
}

bool System::InstItems::InstList::MgmtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtdmgmtif_list.len(); index++)
    {
        if(rtdmgmtif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InstItems::InstList::MgmtItems::has_operation() const
{
    for (std::size_t index=0; index<rtdmgmtif_list.len(); index++)
    {
        if(rtdmgmtif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InstItems::InstList::MgmtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mgmt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::MgmtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::MgmtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtdMgmtIf-list")
    {
        auto ent_ = std::make_shared<System::InstItems::InstList::MgmtItems::RtdMgmtIfList>();
        ent_->parent = this;
        rtdmgmtif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::MgmtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtdmgmtif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::InstItems::InstList::MgmtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InstItems::InstList::MgmtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InstItems::InstList::MgmtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtdMgmtIf-list")
        return true;
    return false;
}

System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtdMgmtIfList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    rtpseudoif_items(std::make_shared<System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems>())
    , rsrtdmgmtconf_items(std::make_shared<System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems>())
    , rtvrfmbr_items(std::make_shared<System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems>())
{
    rtpseudoif_items->parent = this;
    rsrtdmgmtconf_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "RtdMgmtIf-list"; yang_parent_name = "mgmt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::MgmtItems::RtdMgmtIfList::~RtdMgmtIfList()
{
}

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (rtpseudoif_items !=  nullptr && rtpseudoif_items->has_data())
	|| (rsrtdmgmtconf_items !=  nullptr && rsrtdmgmtconf_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (rtpseudoif_items !=  nullptr && rtpseudoif_items->has_operation())
	|| (rsrtdmgmtconf_items !=  nullptr && rsrtdmgmtconf_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::InstItems::InstList::MgmtItems::RtdMgmtIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtdMgmtIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::MgmtItems::RtdMgmtIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::MgmtItems::RtdMgmtIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtpseudoIf-items")
    {
        if(rtpseudoif_items == nullptr)
        {
            rtpseudoif_items = std::make_shared<System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems>();
        }
        return rtpseudoif_items;
    }

    if(child_yang_name == "rsrtdMgmtConf-items")
    {
        if(rsrtdmgmtconf_items == nullptr)
        {
            rsrtdmgmtconf_items = std::make_shared<System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems>();
        }
        return rsrtdmgmtconf_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::MgmtItems::RtdMgmtIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtpseudoif_items != nullptr)
    {
        _children["rtpseudoIf-items"] = rtpseudoif_items;
    }

    if(rsrtdmgmtconf_items != nullptr)
    {
        _children["rsrtdMgmtConf-items"] = rsrtdmgmtconf_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        _children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        _children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return _children;
}

void System::InstItems::InstList::MgmtItems::RtdMgmtIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstItems::InstList::MgmtItems::RtdMgmtIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtpseudoIf-items" || name == "rsrtdMgmtConf-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::RtpseudoIfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtpseudoIf-items"; yang_parent_name = "RtdMgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::~RtpseudoIfItems()
{
}

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtpseudoIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::RsrtdMgmtConfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "rsrtdMgmtConf-items"; yang_parent_name = "RtdMgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::~RsrtdMgmtConfItems()
{
}

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsrtdMgmtConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateQual")
    {
        statequal = value;
        statequal.value_namespace = name_space;
        statequal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tType")
    {
        ttype = value;
        ttype.value_namespace = name_space;
        ttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rType")
    {
        rtype = value;
        rtype.value_namespace = name_space;
        rtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forceResolve")
    {
        forceresolve = value;
        forceresolve.value_namespace = name_space;
        forceresolve.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "stateQual")
    {
        statequal.yfilter = yfilter;
    }
    if(value_path == "tType")
    {
        ttype.yfilter = yfilter;
    }
    if(value_path == "rType")
    {
        rtype.yfilter = yfilter;
    }
    if(value_path == "forceResolve")
    {
        forceresolve.yfilter = yfilter;
    }
}

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "RtdMgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "RtdMgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtnwpathtoif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::InstItems::InstList::RsvrfMbrItems::RsvrfMbrItems()
    :
    rsvrfmbr_list(this, {"tdn"})
{

    yang_name = "rsvrfMbr-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::RsvrfMbrItems::~RsvrfMbrItems()
{
}

bool System::InstItems::InstList::RsvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsvrfmbr_list.len(); index++)
    {
        if(rsvrfmbr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InstItems::InstList::RsvrfMbrItems::has_operation() const
{
    for (std::size_t index=0; index<rsvrfmbr_list.len(); index++)
    {
        if(rsvrfmbr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InstItems::InstList::RsvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::RsvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::RsvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsVrfMbr-list")
    {
        auto ent_ = std::make_shared<System::InstItems::InstList::RsvrfMbrItems::RsVrfMbrList>();
        ent_->parent = this;
        rsvrfmbr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::RsvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsvrfmbr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::InstItems::InstList::RsvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InstItems::InstList::RsvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InstItems::InstList::RsvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsVrfMbr-list")
        return true;
    return false;
}

System::InstItems::InstList::RsvrfMbrItems::RsVrfMbrList::RsVrfMbrList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsVrfMbr-list"; yang_parent_name = "rsvrfMbr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::RsvrfMbrItems::RsVrfMbrList::~RsVrfMbrList()
{
}

bool System::InstItems::InstList::RsvrfMbrItems::RsVrfMbrList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::InstItems::InstList::RsvrfMbrItems::RsVrfMbrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::InstItems::InstList::RsvrfMbrItems::RsVrfMbrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsVrfMbr-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::RsvrfMbrItems::RsVrfMbrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstItems::InstList::RsvrfMbrItems::RsVrfMbrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstItems::InstList::RsvrfMbrItems::RsVrfMbrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::InstItems::InstList::RsvrfMbrItems::RsVrfMbrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstItems::InstList::RsvrfMbrItems::RsVrfMbrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::InstItems::InstList::RsvrfMbrItems::RsVrfMbrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::L3capprovItems::L3capprovItems()
    :
    prov_list(this, {"subj", "type"})
{

    yang_name = "l3capprov-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::L3capprovItems::~L3capprovItems()
{
}

bool System::L3capprovItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prov_list.len(); index++)
    {
        if(prov_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::L3capprovItems::has_operation() const
{
    for (std::size_t index=0; index<prov_list.len(); index++)
    {
        if(prov_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::L3capprovItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::L3capprovItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3capprov-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::L3capprovItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::L3capprovItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Prov-list")
    {
        auto ent_ = std::make_shared<System::L3capprovItems::ProvList>();
        ent_->parent = this;
        prov_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::L3capprovItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prov_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::L3capprovItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::L3capprovItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::L3capprovItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Prov-list")
        return true;
    return false;
}

System::L3capprovItems::ProvList::ProvList()
    :
    subj{YType::enumeration, "subj"},
    type{YType::enumeration, "type"},
    total{YType::uint32, "total"},
    remaining{YType::uint32, "remaining"},
    utilization{YType::uint8, "utilization"}
{

    yang_name = "Prov-list"; yang_parent_name = "l3capprov-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::L3capprovItems::ProvList::~ProvList()
{
}

bool System::L3capprovItems::ProvList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| type.is_set
	|| total.is_set
	|| remaining.is_set
	|| utilization.is_set;
}

bool System::L3capprovItems::ProvList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(total.yfilter)
	|| ydk::is_set(remaining.yfilter)
	|| ydk::is_set(utilization.yfilter);
}

std::string System::L3capprovItems::ProvList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/l3capprov-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::L3capprovItems::ProvList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Prov-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::L3capprovItems::ProvList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());
    if (remaining.is_set || is_set(remaining.yfilter)) leaf_name_data.push_back(remaining.get_name_leafdata());
    if (utilization.is_set || is_set(utilization.yfilter)) leaf_name_data.push_back(utilization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::L3capprovItems::ProvList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::L3capprovItems::ProvList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::L3capprovItems::ProvList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remaining")
    {
        remaining = value;
        remaining.value_namespace = name_space;
        remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "utilization")
    {
        utilization = value;
        utilization.value_namespace = name_space;
        utilization.value_namespace_prefix = name_space_prefix;
    }
}

void System::L3capprovItems::ProvList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
    if(value_path == "remaining")
    {
        remaining.yfilter = yfilter;
    }
    if(value_path == "utilization")
    {
        utilization.yfilter = yfilter;
    }
}

bool System::L3capprovItems::ProvList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "type" || name == "total" || name == "remaining" || name == "utilization")
        return true;
    return false;
}

System::L3vmItems::L3vmItems()
    :
    vrfmemberchangeretainl3cfg{YType::boolean, "vrfmemberchangeretainl3cfg"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::L3vmItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "l3vm-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::L3vmItems::~L3vmItems()
{
}

bool System::L3vmItems::has_data() const
{
    if (is_presence_container) return true;
    return vrfmemberchangeretainl3cfg.is_set
	|| name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::L3vmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrfmemberchangeretainl3cfg.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::L3vmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::L3vmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::L3vmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrfmemberchangeretainl3cfg.is_set || is_set(vrfmemberchangeretainl3cfg.yfilter)) leaf_name_data.push_back(vrfmemberchangeretainl3cfg.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::L3vmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::L3vmItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::L3vmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::L3vmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrfmemberchangeretainl3cfg")
    {
        vrfmemberchangeretainl3cfg = value;
        vrfmemberchangeretainl3cfg.value_namespace = name_space;
        vrfmemberchangeretainl3cfg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::L3vmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrfmemberchangeretainl3cfg")
    {
        vrfmemberchangeretainl3cfg.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::L3vmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "vrfmemberchangeretainl3cfg" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::L3vmItems::InstItems::InstItems()
    :
    vrfallocid{YType::uint32, "vrfAllocId"},
    tblallocid{YType::uint32, "tblAllocId"},
    featureset{YType::uint32, "featureSet"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
        ,
    dommbr_items(std::make_shared<System::L3vmItems::InstItems::DommbrItems>())
    , tbl_items(std::make_shared<System::L3vmItems::InstItems::TblItems>())
{
    dommbr_items->parent = this;
    tbl_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "l3vm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::L3vmItems::InstItems::~InstItems()
{
}

bool System::L3vmItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return vrfallocid.is_set
	|| tblallocid.is_set
	|| featureset.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| (dommbr_items !=  nullptr && dommbr_items->has_data())
	|| (tbl_items !=  nullptr && tbl_items->has_data());
}

bool System::L3vmItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrfallocid.yfilter)
	|| ydk::is_set(tblallocid.yfilter)
	|| ydk::is_set(featureset.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (dommbr_items !=  nullptr && dommbr_items->has_operation())
	|| (tbl_items !=  nullptr && tbl_items->has_operation());
}

std::string System::L3vmItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/l3vm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::L3vmItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::L3vmItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrfallocid.is_set || is_set(vrfallocid.yfilter)) leaf_name_data.push_back(vrfallocid.get_name_leafdata());
    if (tblallocid.is_set || is_set(tblallocid.yfilter)) leaf_name_data.push_back(tblallocid.get_name_leafdata());
    if (featureset.is_set || is_set(featureset.yfilter)) leaf_name_data.push_back(featureset.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::L3vmItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dommbr-items")
    {
        if(dommbr_items == nullptr)
        {
            dommbr_items = std::make_shared<System::L3vmItems::InstItems::DommbrItems>();
        }
        return dommbr_items;
    }

    if(child_yang_name == "tbl-items")
    {
        if(tbl_items == nullptr)
        {
            tbl_items = std::make_shared<System::L3vmItems::InstItems::TblItems>();
        }
        return tbl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::L3vmItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dommbr_items != nullptr)
    {
        _children["dommbr-items"] = dommbr_items;
    }

    if(tbl_items != nullptr)
    {
        _children["tbl-items"] = tbl_items;
    }

    return _children;
}

void System::L3vmItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrfAllocId")
    {
        vrfallocid = value;
        vrfallocid.value_namespace = name_space;
        vrfallocid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tblAllocId")
    {
        tblallocid = value;
        tblallocid.value_namespace = name_space;
        tblallocid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "featureSet")
    {
        featureset = value;
        featureset.value_namespace = name_space;
        featureset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
}

void System::L3vmItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrfAllocId")
    {
        vrfallocid.yfilter = yfilter;
    }
    if(value_path == "tblAllocId")
    {
        tblallocid.yfilter = yfilter;
    }
    if(value_path == "featureSet")
    {
        featureset.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
}

bool System::L3vmItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dommbr-items" || name == "tbl-items" || name == "vrfAllocId" || name == "tblAllocId" || name == "featureSet" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::L3vmItems::InstItems::DommbrItems::DommbrItems()
    :
    dommbrif_list(this, {"id"})
{

    yang_name = "dommbr-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::L3vmItems::InstItems::DommbrItems::~DommbrItems()
{
}

bool System::L3vmItems::InstItems::DommbrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dommbrif_list.len(); index++)
    {
        if(dommbrif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::L3vmItems::InstItems::DommbrItems::has_operation() const
{
    for (std::size_t index=0; index<dommbrif_list.len(); index++)
    {
        if(dommbrif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::L3vmItems::InstItems::DommbrItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/l3vm-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::L3vmItems::InstItems::DommbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dommbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::L3vmItems::InstItems::DommbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::L3vmItems::InstItems::DommbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DomMbrIf-list")
    {
        auto ent_ = std::make_shared<System::L3vmItems::InstItems::DommbrItems::DomMbrIfList>();
        ent_->parent = this;
        dommbrif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::L3vmItems::InstItems::DommbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dommbrif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::L3vmItems::InstItems::DommbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::L3vmItems::InstItems::DommbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::L3vmItems::InstItems::DommbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DomMbrIf-list")
        return true;
    return false;
}

System::L3vmItems::InstItems::DommbrItems::DomMbrIfList::DomMbrIfList()
    :
    id{YType::str, "id"},
    iod{YType::uint32, "iod"},
    vrfid{YType::uint16, "vrfId"},
    oldvrfid{YType::uint16, "oldVrfId"},
    vrfname{YType::str, "vrfName"},
    oldvrfname{YType::str, "oldVrfName"},
    gsdbctx{YType::uint32, "gsdbCtx"},
    gsdbctxtype{YType::enumeration, "gsdbCtxType"},
    name{YType::str, "name"}
{

    yang_name = "DomMbrIf-list"; yang_parent_name = "dommbr-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::L3vmItems::InstItems::DommbrItems::DomMbrIfList::~DomMbrIfList()
{
}

bool System::L3vmItems::InstItems::DommbrItems::DomMbrIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| iod.is_set
	|| vrfid.is_set
	|| oldvrfid.is_set
	|| vrfname.is_set
	|| oldvrfname.is_set
	|| gsdbctx.is_set
	|| gsdbctxtype.is_set
	|| name.is_set;
}

bool System::L3vmItems::InstItems::DommbrItems::DomMbrIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(iod.yfilter)
	|| ydk::is_set(vrfid.yfilter)
	|| ydk::is_set(oldvrfid.yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| ydk::is_set(oldvrfname.yfilter)
	|| ydk::is_set(gsdbctx.yfilter)
	|| ydk::is_set(gsdbctxtype.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::L3vmItems::InstItems::DommbrItems::DomMbrIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/l3vm-items/inst-items/dommbr-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::L3vmItems::InstItems::DommbrItems::DomMbrIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DomMbrIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::L3vmItems::InstItems::DommbrItems::DomMbrIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (iod.is_set || is_set(iod.yfilter)) leaf_name_data.push_back(iod.get_name_leafdata());
    if (vrfid.is_set || is_set(vrfid.yfilter)) leaf_name_data.push_back(vrfid.get_name_leafdata());
    if (oldvrfid.is_set || is_set(oldvrfid.yfilter)) leaf_name_data.push_back(oldvrfid.get_name_leafdata());
    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());
    if (oldvrfname.is_set || is_set(oldvrfname.yfilter)) leaf_name_data.push_back(oldvrfname.get_name_leafdata());
    if (gsdbctx.is_set || is_set(gsdbctx.yfilter)) leaf_name_data.push_back(gsdbctx.get_name_leafdata());
    if (gsdbctxtype.is_set || is_set(gsdbctxtype.yfilter)) leaf_name_data.push_back(gsdbctxtype.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::L3vmItems::InstItems::DommbrItems::DomMbrIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::L3vmItems::InstItems::DommbrItems::DomMbrIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::L3vmItems::InstItems::DommbrItems::DomMbrIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iod")
    {
        iod = value;
        iod.value_namespace = name_space;
        iod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfId")
    {
        vrfid = value;
        vrfid.value_namespace = name_space;
        vrfid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oldVrfId")
    {
        oldvrfid = value;
        oldvrfid.value_namespace = name_space;
        oldvrfid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfName")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oldVrfName")
    {
        oldvrfname = value;
        oldvrfname.value_namespace = name_space;
        oldvrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gsdbCtx")
    {
        gsdbctx = value;
        gsdbctx.value_namespace = name_space;
        gsdbctx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gsdbCtxType")
    {
        gsdbctxtype = value;
        gsdbctxtype.value_namespace = name_space;
        gsdbctxtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::L3vmItems::InstItems::DommbrItems::DomMbrIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "iod")
    {
        iod.yfilter = yfilter;
    }
    if(value_path == "vrfId")
    {
        vrfid.yfilter = yfilter;
    }
    if(value_path == "oldVrfId")
    {
        oldvrfid.yfilter = yfilter;
    }
    if(value_path == "vrfName")
    {
        vrfname.yfilter = yfilter;
    }
    if(value_path == "oldVrfName")
    {
        oldvrfname.yfilter = yfilter;
    }
    if(value_path == "gsdbCtx")
    {
        gsdbctx.yfilter = yfilter;
    }
    if(value_path == "gsdbCtxType")
    {
        gsdbctxtype.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::L3vmItems::InstItems::DommbrItems::DomMbrIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "iod" || name == "vrfId" || name == "oldVrfId" || name == "vrfName" || name == "oldVrfName" || name == "gsdbCtx" || name == "gsdbCtxType" || name == "name")
        return true;
    return false;
}

System::L3vmItems::InstItems::TblItems::TblItems()
    :
    tbl_list(this, {"id"})
{

    yang_name = "tbl-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::L3vmItems::InstItems::TblItems::~TblItems()
{
}

bool System::L3vmItems::InstItems::TblItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tbl_list.len(); index++)
    {
        if(tbl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::L3vmItems::InstItems::TblItems::has_operation() const
{
    for (std::size_t index=0; index<tbl_list.len(); index++)
    {
        if(tbl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::L3vmItems::InstItems::TblItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/l3vm-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::L3vmItems::InstItems::TblItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tbl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::L3vmItems::InstItems::TblItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::L3vmItems::InstItems::TblItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Tbl-list")
    {
        auto ent_ = std::make_shared<System::L3vmItems::InstItems::TblItems::TblList>();
        ent_->parent = this;
        tbl_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::L3vmItems::InstItems::TblItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tbl_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::L3vmItems::InstItems::TblItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::L3vmItems::InstItems::TblItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::L3vmItems::InstItems::TblItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Tbl-list")
        return true;
    return false;
}

System::L3vmItems::InstItems::TblItems::TblList::TblList()
    :
    id{YType::uint32, "id"},
    gsdbctx{YType::uint32, "gsdbCtx"},
    rtlmtmax{YType::uint32, "rtLmtMax"},
    rtlmtwarn{YType::uint32, "rtLmtWarn"},
    rtlmtwarnonly{YType::boolean, "rtLmtWarnOnly"},
    rtlmtwarnpct{YType::uint8, "rtLmtWarnPct"},
    rtlmtreinstpct{YType::uint8, "rtLmtReinstPct"}
{

    yang_name = "Tbl-list"; yang_parent_name = "tbl-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::L3vmItems::InstItems::TblItems::TblList::~TblList()
{
}

bool System::L3vmItems::InstItems::TblItems::TblList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| gsdbctx.is_set
	|| rtlmtmax.is_set
	|| rtlmtwarn.is_set
	|| rtlmtwarnonly.is_set
	|| rtlmtwarnpct.is_set
	|| rtlmtreinstpct.is_set;
}

bool System::L3vmItems::InstItems::TblItems::TblList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(gsdbctx.yfilter)
	|| ydk::is_set(rtlmtmax.yfilter)
	|| ydk::is_set(rtlmtwarn.yfilter)
	|| ydk::is_set(rtlmtwarnonly.yfilter)
	|| ydk::is_set(rtlmtwarnpct.yfilter)
	|| ydk::is_set(rtlmtreinstpct.yfilter);
}

std::string System::L3vmItems::InstItems::TblItems::TblList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/l3vm-items/inst-items/tbl-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::L3vmItems::InstItems::TblItems::TblList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Tbl-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::L3vmItems::InstItems::TblItems::TblList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (gsdbctx.is_set || is_set(gsdbctx.yfilter)) leaf_name_data.push_back(gsdbctx.get_name_leafdata());
    if (rtlmtmax.is_set || is_set(rtlmtmax.yfilter)) leaf_name_data.push_back(rtlmtmax.get_name_leafdata());
    if (rtlmtwarn.is_set || is_set(rtlmtwarn.yfilter)) leaf_name_data.push_back(rtlmtwarn.get_name_leafdata());
    if (rtlmtwarnonly.is_set || is_set(rtlmtwarnonly.yfilter)) leaf_name_data.push_back(rtlmtwarnonly.get_name_leafdata());
    if (rtlmtwarnpct.is_set || is_set(rtlmtwarnpct.yfilter)) leaf_name_data.push_back(rtlmtwarnpct.get_name_leafdata());
    if (rtlmtreinstpct.is_set || is_set(rtlmtreinstpct.yfilter)) leaf_name_data.push_back(rtlmtreinstpct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::L3vmItems::InstItems::TblItems::TblList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::L3vmItems::InstItems::TblItems::TblList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::L3vmItems::InstItems::TblItems::TblList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gsdbCtx")
    {
        gsdbctx = value;
        gsdbctx.value_namespace = name_space;
        gsdbctx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtLmtMax")
    {
        rtlmtmax = value;
        rtlmtmax.value_namespace = name_space;
        rtlmtmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtLmtWarn")
    {
        rtlmtwarn = value;
        rtlmtwarn.value_namespace = name_space;
        rtlmtwarn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtLmtWarnOnly")
    {
        rtlmtwarnonly = value;
        rtlmtwarnonly.value_namespace = name_space;
        rtlmtwarnonly.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtLmtWarnPct")
    {
        rtlmtwarnpct = value;
        rtlmtwarnpct.value_namespace = name_space;
        rtlmtwarnpct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtLmtReinstPct")
    {
        rtlmtreinstpct = value;
        rtlmtreinstpct.value_namespace = name_space;
        rtlmtreinstpct.value_namespace_prefix = name_space_prefix;
    }
}

void System::L3vmItems::InstItems::TblItems::TblList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "gsdbCtx")
    {
        gsdbctx.yfilter = yfilter;
    }
    if(value_path == "rtLmtMax")
    {
        rtlmtmax.yfilter = yfilter;
    }
    if(value_path == "rtLmtWarn")
    {
        rtlmtwarn.yfilter = yfilter;
    }
    if(value_path == "rtLmtWarnOnly")
    {
        rtlmtwarnonly.yfilter = yfilter;
    }
    if(value_path == "rtLmtWarnPct")
    {
        rtlmtwarnpct.yfilter = yfilter;
    }
    if(value_path == "rtLmtReinstPct")
    {
        rtlmtreinstpct.yfilter = yfilter;
    }
}

bool System::L3vmItems::InstItems::TblItems::TblList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "gsdbCtx" || name == "rtLmtMax" || name == "rtLmtWarn" || name == "rtLmtWarnOnly" || name == "rtLmtWarnPct" || name == "rtLmtReinstPct")
        return true;
    return false;
}

System::UribItems::UribItems()
    :
    table4_items(std::make_shared<System::UribItems::Table4Items>())
{
    table4_items->parent = this;

    yang_name = "urib-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UribItems::~UribItems()
{
}

bool System::UribItems::has_data() const
{
    if (is_presence_container) return true;
    return (table4_items !=  nullptr && table4_items->has_data());
}

bool System::UribItems::has_operation() const
{
    return is_set(yfilter)
	|| (table4_items !=  nullptr && table4_items->has_operation());
}

std::string System::UribItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UribItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "urib-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UribItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UribItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "table4-items")
    {
        if(table4_items == nullptr)
        {
            table4_items = std::make_shared<System::UribItems::Table4Items>();
        }
        return table4_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UribItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(table4_items != nullptr)
    {
        _children["table4-items"] = table4_items;
    }

    return _children;
}

void System::UribItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UribItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UribItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table4-items")
        return true;
    return false;
}

System::UribItems::Table4Items::Table4Items()
    :
    table4_list(this, {"vrfname"})
{

    yang_name = "table4-items"; yang_parent_name = "urib-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UribItems::Table4Items::~Table4Items()
{
}

bool System::UribItems::Table4Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<table4_list.len(); index++)
    {
        if(table4_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UribItems::Table4Items::has_operation() const
{
    for (std::size_t index=0; index<table4_list.len(); index++)
    {
        if(table4_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UribItems::Table4Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/urib-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UribItems::Table4Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table4-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UribItems::Table4Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UribItems::Table4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Table4-list")
    {
        auto ent_ = std::make_shared<System::UribItems::Table4Items::Table4List>();
        ent_->parent = this;
        table4_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UribItems::Table4Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : table4_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UribItems::Table4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UribItems::Table4Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UribItems::Table4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Table4-list")
        return true;
    return false;
}

System::UribItems::Table4Items::Table4List::Table4List()
    :
    vrfname{YType::str, "vrfName"},
    routecount{YType::uint32, "routeCount"},
    unibestcount{YType::uint32, "uniBestCount"},
    unibackupcount{YType::uint32, "uniBackupCount"},
    multibestcount{YType::uint32, "multiBestCount"},
    multibackupcount{YType::uint32, "multiBackupCount"},
    routepermaskcount{YType::str, "routePerMaskCount"}
        ,
    route4_items(std::make_shared<System::UribItems::Table4Items::Table4List::Route4Items>())
{
    route4_items->parent = this;

    yang_name = "Table4-list"; yang_parent_name = "table4-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UribItems::Table4Items::Table4List::~Table4List()
{
}

bool System::UribItems::Table4Items::Table4List::has_data() const
{
    if (is_presence_container) return true;
    return vrfname.is_set
	|| routecount.is_set
	|| unibestcount.is_set
	|| unibackupcount.is_set
	|| multibestcount.is_set
	|| multibackupcount.is_set
	|| routepermaskcount.is_set
	|| (route4_items !=  nullptr && route4_items->has_data());
}

bool System::UribItems::Table4Items::Table4List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| ydk::is_set(routecount.yfilter)
	|| ydk::is_set(unibestcount.yfilter)
	|| ydk::is_set(unibackupcount.yfilter)
	|| ydk::is_set(multibestcount.yfilter)
	|| ydk::is_set(multibackupcount.yfilter)
	|| ydk::is_set(routepermaskcount.yfilter)
	|| (route4_items !=  nullptr && route4_items->has_operation());
}

std::string System::UribItems::Table4Items::Table4List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/urib-items/table4-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UribItems::Table4Items::Table4List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Table4-list";
    ADD_KEY_TOKEN(vrfname, "vrfName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UribItems::Table4Items::Table4List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());
    if (routecount.is_set || is_set(routecount.yfilter)) leaf_name_data.push_back(routecount.get_name_leafdata());
    if (unibestcount.is_set || is_set(unibestcount.yfilter)) leaf_name_data.push_back(unibestcount.get_name_leafdata());
    if (unibackupcount.is_set || is_set(unibackupcount.yfilter)) leaf_name_data.push_back(unibackupcount.get_name_leafdata());
    if (multibestcount.is_set || is_set(multibestcount.yfilter)) leaf_name_data.push_back(multibestcount.get_name_leafdata());
    if (multibackupcount.is_set || is_set(multibackupcount.yfilter)) leaf_name_data.push_back(multibackupcount.get_name_leafdata());
    if (routepermaskcount.is_set || is_set(routepermaskcount.yfilter)) leaf_name_data.push_back(routepermaskcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UribItems::Table4Items::Table4List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route4-items")
    {
        if(route4_items == nullptr)
        {
            route4_items = std::make_shared<System::UribItems::Table4Items::Table4List::Route4Items>();
        }
        return route4_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UribItems::Table4Items::Table4List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route4_items != nullptr)
    {
        _children["route4-items"] = route4_items;
    }

    return _children;
}

void System::UribItems::Table4Items::Table4List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrfName")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeCount")
    {
        routecount = value;
        routecount.value_namespace = name_space;
        routecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uniBestCount")
    {
        unibestcount = value;
        unibestcount.value_namespace = name_space;
        unibestcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uniBackupCount")
    {
        unibackupcount = value;
        unibackupcount.value_namespace = name_space;
        unibackupcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiBestCount")
    {
        multibestcount = value;
        multibestcount.value_namespace = name_space;
        multibestcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiBackupCount")
    {
        multibackupcount = value;
        multibackupcount.value_namespace = name_space;
        multibackupcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routePerMaskCount")
    {
        routepermaskcount = value;
        routepermaskcount.value_namespace = name_space;
        routepermaskcount.value_namespace_prefix = name_space_prefix;
    }
}

void System::UribItems::Table4Items::Table4List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrfName")
    {
        vrfname.yfilter = yfilter;
    }
    if(value_path == "routeCount")
    {
        routecount.yfilter = yfilter;
    }
    if(value_path == "uniBestCount")
    {
        unibestcount.yfilter = yfilter;
    }
    if(value_path == "uniBackupCount")
    {
        unibackupcount.yfilter = yfilter;
    }
    if(value_path == "multiBestCount")
    {
        multibestcount.yfilter = yfilter;
    }
    if(value_path == "multiBackupCount")
    {
        multibackupcount.yfilter = yfilter;
    }
    if(value_path == "routePerMaskCount")
    {
        routepermaskcount.yfilter = yfilter;
    }
}

bool System::UribItems::Table4Items::Table4List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route4-items" || name == "vrfName" || name == "routeCount" || name == "uniBestCount" || name == "uniBackupCount" || name == "multiBestCount" || name == "multiBackupCount" || name == "routePerMaskCount")
        return true;
    return false;
}

System::UribItems::Table4Items::Table4List::Route4Items::Route4Items()
    :
    route4_list(this, {"prefix"})
{

    yang_name = "route4-items"; yang_parent_name = "Table4-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UribItems::Table4Items::Table4List::Route4Items::~Route4Items()
{
}

bool System::UribItems::Table4Items::Table4List::Route4Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route4_list.len(); index++)
    {
        if(route4_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UribItems::Table4Items::Table4List::Route4Items::has_operation() const
{
    for (std::size_t index=0; index<route4_list.len(); index++)
    {
        if(route4_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UribItems::Table4Items::Table4List::Route4Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route4-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UribItems::Table4Items::Table4List::Route4Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UribItems::Table4Items::Table4List::Route4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Route4-list")
    {
        auto ent_ = std::make_shared<System::UribItems::Table4Items::Table4List::Route4Items::Route4List>();
        ent_->parent = this;
        route4_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UribItems::Table4Items::Table4List::Route4Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : route4_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UribItems::Table4Items::Table4List::Route4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UribItems::Table4Items::Table4List::Route4Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UribItems::Table4Items::Table4List::Route4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Route4-list")
        return true;
    return false;
}

System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Route4List()
    :
    prefix{YType::str, "prefix"}
        ,
    nh4_items(std::make_shared<System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items>())
    , routedetail4_items(std::make_shared<System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Routedetail4Items>())
{
    nh4_items->parent = this;
    routedetail4_items->parent = this;

    yang_name = "Route4-list"; yang_parent_name = "route4-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UribItems::Table4Items::Table4List::Route4Items::Route4List::~Route4List()
{
}

bool System::UribItems::Table4Items::Table4List::Route4Items::Route4List::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| (nh4_items !=  nullptr && nh4_items->has_data())
	|| (routedetail4_items !=  nullptr && routedetail4_items->has_data());
}

bool System::UribItems::Table4Items::Table4List::Route4Items::Route4List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| (nh4_items !=  nullptr && nh4_items->has_operation())
	|| (routedetail4_items !=  nullptr && routedetail4_items->has_operation());
}

std::string System::UribItems::Table4Items::Table4List::Route4Items::Route4List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Route4-list";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UribItems::Table4Items::Table4List::Route4Items::Route4List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UribItems::Table4Items::Table4List::Route4Items::Route4List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nh4-items")
    {
        if(nh4_items == nullptr)
        {
            nh4_items = std::make_shared<System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items>();
        }
        return nh4_items;
    }

    if(child_yang_name == "routedetail4-items")
    {
        if(routedetail4_items == nullptr)
        {
            routedetail4_items = std::make_shared<System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Routedetail4Items>();
        }
        return routedetail4_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UribItems::Table4Items::Table4List::Route4Items::Route4List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nh4_items != nullptr)
    {
        _children["nh4-items"] = nh4_items;
    }

    if(routedetail4_items != nullptr)
    {
        _children["routedetail4-items"] = routedetail4_items;
    }

    return _children;
}

void System::UribItems::Table4Items::Table4List::Route4Items::Route4List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void System::UribItems::Table4Items::Table4List::Route4Items::Route4List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool System::UribItems::Table4Items::Table4List::Route4Items::Route4List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh4-items" || name == "routedetail4-items" || name == "prefix")
        return true;
    return false;
}

System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::Nh4Items()
    :
    nexthop4_list(this, {"id"})
{

    yang_name = "nh4-items"; yang_parent_name = "Route4-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::~Nh4Items()
{
}

bool System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nexthop4_list.len(); index++)
    {
        if(nexthop4_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::has_operation() const
{
    for (std::size_t index=0; index<nexthop4_list.len(); index++)
    {
        if(nexthop4_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh4-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NextHop4-list")
    {
        auto ent_ = std::make_shared<System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List>();
        ent_->parent = this;
        nexthop4_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nexthop4_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NextHop4-list")
        return true;
    return false;
}

System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::NextHop4List()
    :
    id{YType::uint32, "id"}
        ,
    nhdetail4_items(std::make_shared<System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::Nhdetail4Items>())
{
    nhdetail4_items->parent = this;

    yang_name = "NextHop4-list"; yang_parent_name = "nh4-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::~NextHop4List()
{
}

bool System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (nhdetail4_items !=  nullptr && nhdetail4_items->has_data());
}

bool System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (nhdetail4_items !=  nullptr && nhdetail4_items->has_operation());
}

std::string System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NextHop4-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhdetail4-items")
    {
        if(nhdetail4_items == nullptr)
        {
            nhdetail4_items = std::make_shared<System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::Nhdetail4Items>();
        }
        return nhdetail4_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nhdetail4_items != nullptr)
    {
        _children["nhdetail4-items"] = nhdetail4_items;
    }

    return _children;
}

void System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhdetail4-items" || name == "id")
        return true;
    return false;
}

System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::Nhdetail4Items::Nhdetail4Items()
    :
    flags{YType::str, "flags"}
{

    yang_name = "nhdetail4-items"; yang_parent_name = "NextHop4-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::Nhdetail4Items::~Nhdetail4Items()
{
}

bool System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::Nhdetail4Items::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set;
}

bool System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::Nhdetail4Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::Nhdetail4Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhdetail4-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::Nhdetail4Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::Nhdetail4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::Nhdetail4Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::Nhdetail4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::Nhdetail4Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::Nhdetail4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags")
        return true;
    return false;
}

System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Routedetail4Items::Routedetail4Items()
    :
    flags{YType::str, "flags"}
{

    yang_name = "routedetail4-items"; yang_parent_name = "Route4-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Routedetail4Items::~Routedetail4Items()
{
}

bool System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Routedetail4Items::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set;
}

bool System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Routedetail4Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Routedetail4Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routedetail4-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Routedetail4Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Routedetail4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Routedetail4Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Routedetail4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Routedetail4Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Routedetail4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags")
        return true;
    return false;
}

System::U6ribItems::U6ribItems()
    :
    table6_items(std::make_shared<System::U6ribItems::Table6Items>())
{
    table6_items->parent = this;

    yang_name = "u6rib-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::U6ribItems::~U6ribItems()
{
}

bool System::U6ribItems::has_data() const
{
    if (is_presence_container) return true;
    return (table6_items !=  nullptr && table6_items->has_data());
}

bool System::U6ribItems::has_operation() const
{
    return is_set(yfilter)
	|| (table6_items !=  nullptr && table6_items->has_operation());
}

std::string System::U6ribItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::U6ribItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "u6rib-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::U6ribItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::U6ribItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "table6-items")
    {
        if(table6_items == nullptr)
        {
            table6_items = std::make_shared<System::U6ribItems::Table6Items>();
        }
        return table6_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::U6ribItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(table6_items != nullptr)
    {
        _children["table6-items"] = table6_items;
    }

    return _children;
}

void System::U6ribItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::U6ribItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::U6ribItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table6-items")
        return true;
    return false;
}

System::U6ribItems::Table6Items::Table6Items()
    :
    table6_list(this, {"vrfname"})
{

    yang_name = "table6-items"; yang_parent_name = "u6rib-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::U6ribItems::Table6Items::~Table6Items()
{
}

bool System::U6ribItems::Table6Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<table6_list.len(); index++)
    {
        if(table6_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::U6ribItems::Table6Items::has_operation() const
{
    for (std::size_t index=0; index<table6_list.len(); index++)
    {
        if(table6_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::U6ribItems::Table6Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/u6rib-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::U6ribItems::Table6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::U6ribItems::Table6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::U6ribItems::Table6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Table6-list")
    {
        auto ent_ = std::make_shared<System::U6ribItems::Table6Items::Table6List>();
        ent_->parent = this;
        table6_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::U6ribItems::Table6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : table6_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::U6ribItems::Table6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::U6ribItems::Table6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::U6ribItems::Table6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Table6-list")
        return true;
    return false;
}

System::U6ribItems::Table6Items::Table6List::Table6List()
    :
    vrfname{YType::str, "vrfName"}
        ,
    route6_items(std::make_shared<System::U6ribItems::Table6Items::Table6List::Route6Items>())
{
    route6_items->parent = this;

    yang_name = "Table6-list"; yang_parent_name = "table6-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::U6ribItems::Table6Items::Table6List::~Table6List()
{
}

bool System::U6ribItems::Table6Items::Table6List::has_data() const
{
    if (is_presence_container) return true;
    return vrfname.is_set
	|| (route6_items !=  nullptr && route6_items->has_data());
}

bool System::U6ribItems::Table6Items::Table6List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| (route6_items !=  nullptr && route6_items->has_operation());
}

std::string System::U6ribItems::Table6Items::Table6List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/u6rib-items/table6-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::U6ribItems::Table6Items::Table6List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Table6-list";
    ADD_KEY_TOKEN(vrfname, "vrfName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::U6ribItems::Table6Items::Table6List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::U6ribItems::Table6Items::Table6List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route6-items")
    {
        if(route6_items == nullptr)
        {
            route6_items = std::make_shared<System::U6ribItems::Table6Items::Table6List::Route6Items>();
        }
        return route6_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::U6ribItems::Table6Items::Table6List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route6_items != nullptr)
    {
        _children["route6-items"] = route6_items;
    }

    return _children;
}

void System::U6ribItems::Table6Items::Table6List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrfName")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
}

void System::U6ribItems::Table6Items::Table6List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrfName")
    {
        vrfname.yfilter = yfilter;
    }
}

bool System::U6ribItems::Table6Items::Table6List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route6-items" || name == "vrfName")
        return true;
    return false;
}

System::U6ribItems::Table6Items::Table6List::Route6Items::Route6Items()
    :
    route6_list(this, {"prefix"})
{

    yang_name = "route6-items"; yang_parent_name = "Table6-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::U6ribItems::Table6Items::Table6List::Route6Items::~Route6Items()
{
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route6_list.len(); index++)
    {
        if(route6_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::has_operation() const
{
    for (std::size_t index=0; index<route6_list.len(); index++)
    {
        if(route6_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::U6ribItems::Table6Items::Table6List::Route6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::U6ribItems::Table6Items::Table6List::Route6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::U6ribItems::Table6Items::Table6List::Route6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Route6-list")
    {
        auto ent_ = std::make_shared<System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List>();
        ent_->parent = this;
        route6_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::U6ribItems::Table6Items::Table6List::Route6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : route6_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::U6ribItems::Table6Items::Table6List::Route6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::U6ribItems::Table6Items::Table6List::Route6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Route6-list")
        return true;
    return false;
}

System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Route6List()
    :
    prefix{YType::str, "prefix"}
        ,
    nh6_items(std::make_shared<System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items>())
    , routedetail6_items(std::make_shared<System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Routedetail6Items>())
{
    nh6_items->parent = this;
    routedetail6_items->parent = this;

    yang_name = "Route6-list"; yang_parent_name = "route6-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::~Route6List()
{
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| (nh6_items !=  nullptr && nh6_items->has_data())
	|| (routedetail6_items !=  nullptr && routedetail6_items->has_data());
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| (nh6_items !=  nullptr && nh6_items->has_operation())
	|| (routedetail6_items !=  nullptr && routedetail6_items->has_operation());
}

std::string System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Route6-list";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nh6-items")
    {
        if(nh6_items == nullptr)
        {
            nh6_items = std::make_shared<System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items>();
        }
        return nh6_items;
    }

    if(child_yang_name == "routedetail6-items")
    {
        if(routedetail6_items == nullptr)
        {
            routedetail6_items = std::make_shared<System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Routedetail6Items>();
        }
        return routedetail6_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nh6_items != nullptr)
    {
        _children["nh6-items"] = nh6_items;
    }

    if(routedetail6_items != nullptr)
    {
        _children["routedetail6-items"] = routedetail6_items;
    }

    return _children;
}

void System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh6-items" || name == "routedetail6-items" || name == "prefix")
        return true;
    return false;
}

System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::Nh6Items()
    :
    nexthop6_list(this, {"id"})
{

    yang_name = "nh6-items"; yang_parent_name = "Route6-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::~Nh6Items()
{
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nexthop6_list.len(); index++)
    {
        if(nexthop6_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::has_operation() const
{
    for (std::size_t index=0; index<nexthop6_list.len(); index++)
    {
        if(nexthop6_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NextHop6-list")
    {
        auto ent_ = std::make_shared<System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List>();
        ent_->parent = this;
        nexthop6_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nexthop6_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NextHop6-list")
        return true;
    return false;
}

System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::NextHop6List()
    :
    id{YType::uint32, "id"}
        ,
    nhdetail6_items(std::make_shared<System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::Nhdetail6Items>())
{
    nhdetail6_items->parent = this;

    yang_name = "NextHop6-list"; yang_parent_name = "nh6-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::~NextHop6List()
{
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (nhdetail6_items !=  nullptr && nhdetail6_items->has_data());
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (nhdetail6_items !=  nullptr && nhdetail6_items->has_operation());
}

std::string System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NextHop6-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhdetail6-items")
    {
        if(nhdetail6_items == nullptr)
        {
            nhdetail6_items = std::make_shared<System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::Nhdetail6Items>();
        }
        return nhdetail6_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nhdetail6_items != nullptr)
    {
        _children["nhdetail6-items"] = nhdetail6_items;
    }

    return _children;
}

void System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhdetail6-items" || name == "id")
        return true;
    return false;
}

System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::Nhdetail6Items::Nhdetail6Items()
    :
    flags{YType::str, "flags"}
{

    yang_name = "nhdetail6-items"; yang_parent_name = "NextHop6-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::Nhdetail6Items::~Nhdetail6Items()
{
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::Nhdetail6Items::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set;
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::Nhdetail6Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::Nhdetail6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhdetail6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::Nhdetail6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::Nhdetail6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::Nhdetail6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::Nhdetail6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::Nhdetail6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::Nhdetail6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags")
        return true;
    return false;
}

System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Routedetail6Items::Routedetail6Items()
    :
    flags{YType::str, "flags"}
{

    yang_name = "routedetail6-items"; yang_parent_name = "Route6-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Routedetail6Items::~Routedetail6Items()
{
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Routedetail6Items::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set;
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Routedetail6Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Routedetail6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routedetail6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Routedetail6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Routedetail6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Routedetail6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Routedetail6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Routedetail6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Routedetail6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags")
        return true;
    return false;
}

System::Uribv4Items::Uribv4Items()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    dom_items(std::make_shared<System::Uribv4Items::DomItems>())
{
    dom_items->parent = this;

    yang_name = "uribv4-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Uribv4Items::~Uribv4Items()
{
}

bool System::Uribv4Items::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (dom_items !=  nullptr && dom_items->has_data());
}

bool System::Uribv4Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation());
}

std::string System::Uribv4Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Uribv4Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uribv4-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv4Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Uribv4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::Uribv4Items::DomItems>();
        }
        return dom_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Uribv4Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    return _children;
}

void System::Uribv4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::Uribv4Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::Uribv4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::Uribv4Items::DomItems::DomItems()
    :
    dom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "uribv4-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Uribv4Items::DomItems::~DomItems()
{
}

bool System::Uribv4Items::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Uribv4Items::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Uribv4Items::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/uribv4-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Uribv4Items::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv4Items::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Uribv4Items::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto ent_ = std::make_shared<System::Uribv4Items::DomItems::DomList>();
        ent_->parent = this;
        dom_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Uribv4Items::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dom_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Uribv4Items::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Uribv4Items::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Uribv4Items::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::Uribv4Items::DomItems::DomList::DomList()
    :
    name{YType::str, "name"},
    operst{YType::enumeration, "operSt"}
        ,
    db_items(std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems>())
{
    db_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Uribv4Items::DomItems::DomList::~DomList()
{
}

bool System::Uribv4Items::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| operst.is_set
	|| (db_items !=  nullptr && db_items->has_data());
}

bool System::Uribv4Items::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (db_items !=  nullptr && db_items->has_operation());
}

std::string System::Uribv4Items::DomItems::DomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/uribv4-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Uribv4Items::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv4Items::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Uribv4Items::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems>();
        }
        return db_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Uribv4Items::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(db_items != nullptr)
    {
        _children["db-items"] = db_items;
    }

    return _children;
}

void System::Uribv4Items::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::Uribv4Items::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::Uribv4Items::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "db-items" || name == "name" || name == "operSt")
        return true;
    return false;
}

System::Uribv4Items::DomItems::DomList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv4Items::DomItems::DomList::DbItems::~DbItems()
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Uribv4Items::DomItems::DomList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Uribv4Items::DomItems::DomList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv4Items::DomItems::DomList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Uribv4Items::DomItems::DomList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto ent_ = std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems::DbList>();
        ent_->parent = this;
        db_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Uribv4Items::DomItems::DomList::DbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : db_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Uribv4Items::DomItems::DomList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Uribv4Items::DomItems::DomList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    rt_items(std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems>())
{
    rt_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::~DbList()
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (rt_items !=  nullptr && rt_items->has_data());
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::Uribv4Items::DomItems::DomList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv4Items::DomItems::DomList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Uribv4Items::DomItems::DomList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Uribv4Items::DomItems::DomList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rt_items != nullptr)
    {
        _children["rt-items"] = rt_items;
    }

    return _children;
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RtItems()
    :
    route_list(this, {"prefix"})
{

    yang_name = "rt-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::~RtItems()
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::has_operation() const
{
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Route-list")
    {
        auto ent_ = std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList>();
        ent_->parent = this;
        route_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : route_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Route-list")
        return true;
    return false;
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RouteList()
    :
    prefix{YType::str, "prefix"},
    name{YType::str, "name"}
        ,
    nh_items(std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems>())
    , owner_items(std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems>())
{
    nh_items->parent = this;
    owner_items->parent = this;

    yang_name = "Route-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::~RouteList()
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| name.is_set
	|| (nh_items !=  nullptr && nh_items->has_data())
	|| (owner_items !=  nullptr && owner_items->has_data());
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (nh_items !=  nullptr && nh_items->has_operation())
	|| (owner_items !=  nullptr && owner_items->has_operation());
}

std::string System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Route-list";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nh-items")
    {
        if(nh_items == nullptr)
        {
            nh_items = std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems>();
        }
        return nh_items;
    }

    if(child_yang_name == "owner-items")
    {
        if(owner_items == nullptr)
        {
            owner_items = std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems>();
        }
        return owner_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nh_items != nullptr)
    {
        _children["nh-items"] = nh_items;
    }

    if(owner_items != nullptr)
    {
        _children["owner-items"] = owner_items;
    }

    return _children;
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-items" || name == "owner-items" || name == "prefix" || name == "name")
        return true;
    return false;
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NhItems()
    :
    nexthop_list(this, {"owner", "addr", "if_", "vrf"})
{

    yang_name = "nh-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::~NhItems()
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nexthop_list.len(); index++)
    {
        if(nexthop_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::has_operation() const
{
    for (std::size_t index=0; index<nexthop_list.len(); index++)
    {
        if(nexthop_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Nexthop-list")
    {
        auto ent_ = std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList>();
        ent_->parent = this;
        nexthop_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nexthop_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Nexthop-list")
        return true;
    return false;
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::NexthopList()
    :
    owner{YType::str, "owner"},
    addr{YType::str, "addr"},
    if_{YType::str, "if"},
    vrf{YType::str, "vrf"},
    type{YType::str, "type"},
    name{YType::str, "name"}
{

    yang_name = "Nexthop-list"; yang_parent_name = "nh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::~NexthopList()
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::has_data() const
{
    if (is_presence_container) return true;
    return owner.is_set
	|| addr.is_set
	|| if_.is_set
	|| vrf.is_set
	|| type.is_set
	|| name.is_set;
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Nexthop-list";
    ADD_KEY_TOKEN(owner, "owner");
    ADD_KEY_TOKEN(addr, "addr");
    ADD_KEY_TOKEN(if_, "if");
    ADD_KEY_TOKEN(vrf, "vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "owner" || name == "addr" || name == "if" || name == "vrf" || name == "type" || name == "name")
        return true;
    return false;
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::OwnerItems()
    :
    routeowner_list(this, {"owner"})
{

    yang_name = "owner-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::~OwnerItems()
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<routeowner_list.len(); index++)
    {
        if(routeowner_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::has_operation() const
{
    for (std::size_t index=0; index<routeowner_list.len(); index++)
    {
        if(routeowner_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RouteOwner-list")
    {
        auto ent_ = std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList>();
        ent_->parent = this;
        routeowner_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : routeowner_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RouteOwner-list")
        return true;
    return false;
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RouteOwnerList()
    :
    owner{YType::str, "owner"},
    name{YType::str, "name"}
        ,
    nh_items(std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems>())
    , rsrouteownertonexthopatt_items(std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems>())
{
    nh_items->parent = this;
    rsrouteownertonexthopatt_items->parent = this;

    yang_name = "RouteOwner-list"; yang_parent_name = "owner-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::~RouteOwnerList()
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::has_data() const
{
    if (is_presence_container) return true;
    return owner.is_set
	|| name.is_set
	|| (nh_items !=  nullptr && nh_items->has_data())
	|| (rsrouteownertonexthopatt_items !=  nullptr && rsrouteownertonexthopatt_items->has_data());
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (nh_items !=  nullptr && nh_items->has_operation())
	|| (rsrouteownertonexthopatt_items !=  nullptr && rsrouteownertonexthopatt_items->has_operation());
}

std::string System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RouteOwner-list";
    ADD_KEY_TOKEN(owner, "owner");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nh-items")
    {
        if(nh_items == nullptr)
        {
            nh_items = std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems>();
        }
        return nh_items;
    }

    if(child_yang_name == "rsrouteOwnerToNexthopAtt-items")
    {
        if(rsrouteownertonexthopatt_items == nullptr)
        {
            rsrouteownertonexthopatt_items = std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems>();
        }
        return rsrouteownertonexthopatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nh_items != nullptr)
    {
        _children["nh-items"] = nh_items;
    }

    if(rsrouteownertonexthopatt_items != nullptr)
    {
        _children["rsrouteOwnerToNexthopAtt-items"] = rsrouteownertonexthopatt_items;
    }

    return _children;
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-items" || name == "rsrouteOwnerToNexthopAtt-items" || name == "owner" || name == "name")
        return true;
    return false;
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NhItems()
    :
    nexthop_list(this, {"owner", "addr", "if_", "vrf"})
{

    yang_name = "nh-items"; yang_parent_name = "RouteOwner-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::~NhItems()
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nexthop_list.len(); index++)
    {
        if(nexthop_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::has_operation() const
{
    for (std::size_t index=0; index<nexthop_list.len(); index++)
    {
        if(nexthop_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Nexthop-list")
    {
        auto ent_ = std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList>();
        ent_->parent = this;
        nexthop_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nexthop_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Nexthop-list")
        return true;
    return false;
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::NexthopList()
    :
    owner{YType::str, "owner"},
    addr{YType::str, "addr"},
    if_{YType::str, "if"},
    vrf{YType::str, "vrf"},
    type{YType::str, "type"},
    name{YType::str, "name"}
{

    yang_name = "Nexthop-list"; yang_parent_name = "nh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::~NexthopList()
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::has_data() const
{
    if (is_presence_container) return true;
    return owner.is_set
	|| addr.is_set
	|| if_.is_set
	|| vrf.is_set
	|| type.is_set
	|| name.is_set;
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Nexthop-list";
    ADD_KEY_TOKEN(owner, "owner");
    ADD_KEY_TOKEN(addr, "addr");
    ADD_KEY_TOKEN(if_, "if");
    ADD_KEY_TOKEN(vrf, "vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "owner" || name == "addr" || name == "if" || name == "vrf" || name == "type" || name == "name")
        return true;
    return false;
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::RsrouteOwnerToNexthopAttItems()
    :
    rsrouteownertonexthopatt_list(this, {"tdn"})
{

    yang_name = "rsrouteOwnerToNexthopAtt-items"; yang_parent_name = "RouteOwner-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::~RsrouteOwnerToNexthopAttItems()
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsrouteownertonexthopatt_list.len(); index++)
    {
        if(rsrouteownertonexthopatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsrouteownertonexthopatt_list.len(); index++)
    {
        if(rsrouteownertonexthopatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsrouteOwnerToNexthopAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsRouteOwnerToNexthopAtt-list")
    {
        auto ent_ = std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::RsRouteOwnerToNexthopAttList>();
        ent_->parent = this;
        rsrouteownertonexthopatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsrouteownertonexthopatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsRouteOwnerToNexthopAtt-list")
        return true;
    return false;
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::RsRouteOwnerToNexthopAttList::RsRouteOwnerToNexthopAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsRouteOwnerToNexthopAtt-list"; yang_parent_name = "rsrouteOwnerToNexthopAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::RsRouteOwnerToNexthopAttList::~RsRouteOwnerToNexthopAttList()
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::RsRouteOwnerToNexthopAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::RsRouteOwnerToNexthopAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::RsRouteOwnerToNexthopAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsRouteOwnerToNexthopAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::RsRouteOwnerToNexthopAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::RsRouteOwnerToNexthopAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::RsRouteOwnerToNexthopAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::RsRouteOwnerToNexthopAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::RsRouteOwnerToNexthopAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::RsRouteOwnerToNexthopAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::Uribv6Items::Uribv6Items()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    dom_items(std::make_shared<System::Uribv6Items::DomItems>())
{
    dom_items->parent = this;

    yang_name = "uribv6-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Uribv6Items::~Uribv6Items()
{
}

bool System::Uribv6Items::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (dom_items !=  nullptr && dom_items->has_data());
}

bool System::Uribv6Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation());
}

std::string System::Uribv6Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Uribv6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uribv6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Uribv6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::Uribv6Items::DomItems>();
        }
        return dom_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Uribv6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    return _children;
}

void System::Uribv6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::Uribv6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::Uribv6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::Uribv6Items::DomItems::DomItems()
    :
    dom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "uribv6-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Uribv6Items::DomItems::~DomItems()
{
}

bool System::Uribv6Items::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Uribv6Items::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Uribv6Items::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/uribv6-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Uribv6Items::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv6Items::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Uribv6Items::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto ent_ = std::make_shared<System::Uribv6Items::DomItems::DomList>();
        ent_->parent = this;
        dom_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Uribv6Items::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dom_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Uribv6Items::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Uribv6Items::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Uribv6Items::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::Uribv6Items::DomItems::DomList::DomList()
    :
    name{YType::str, "name"},
    operst{YType::enumeration, "operSt"}
        ,
    db_items(std::make_shared<System::Uribv6Items::DomItems::DomList::DbItems>())
{
    db_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Uribv6Items::DomItems::DomList::~DomList()
{
}

bool System::Uribv6Items::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| operst.is_set
	|| (db_items !=  nullptr && db_items->has_data());
}

bool System::Uribv6Items::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (db_items !=  nullptr && db_items->has_operation());
}

std::string System::Uribv6Items::DomItems::DomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/uribv6-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Uribv6Items::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv6Items::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Uribv6Items::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::Uribv6Items::DomItems::DomList::DbItems>();
        }
        return db_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Uribv6Items::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(db_items != nullptr)
    {
        _children["db-items"] = db_items;
    }

    return _children;
}

void System::Uribv6Items::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::Uribv6Items::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::Uribv6Items::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "db-items" || name == "name" || name == "operSt")
        return true;
    return false;
}

System::Uribv6Items::DomItems::DomList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv6Items::DomItems::DomList::DbItems::~DbItems()
{
}

bool System::Uribv6Items::DomItems::DomList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Uribv6Items::DomItems::DomList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Uribv6Items::DomItems::DomList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv6Items::DomItems::DomList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Uribv6Items::DomItems::DomList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto ent_ = std::make_shared<System::Uribv6Items::DomItems::DomList::DbItems::DbList>();
        ent_->parent = this;
        db_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Uribv6Items::DomItems::DomList::DbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : db_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Uribv6Items::DomItems::DomList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Uribv6Items::DomItems::DomList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Uribv6Items::DomItems::DomList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    rt_items(std::make_shared<System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems>())
{
    rt_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::~DbList()
{
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (rt_items !=  nullptr && rt_items->has_data());
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::Uribv6Items::DomItems::DomList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv6Items::DomItems::DomList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Uribv6Items::DomItems::DomList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Uribv6Items::DomItems::DomList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rt_items != nullptr)
    {
        _children["rt-items"] = rt_items;
    }

    return _children;
}

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RtItems()
    :
    route_list(this, {"prefix"})
{

    yang_name = "rt-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::~RtItems()
{
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::has_operation() const
{
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Route-list")
    {
        auto ent_ = std::make_shared<System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList>();
        ent_->parent = this;
        route_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : route_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Route-list")
        return true;
    return false;
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RouteList()
    :
    prefix{YType::str, "prefix"},
    name{YType::str, "name"}
        ,
    nh_items(std::make_shared<System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems>())
    , owner_items(std::make_shared<System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems>())
{
    nh_items->parent = this;
    owner_items->parent = this;

    yang_name = "Route-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::~RouteList()
{
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| name.is_set
	|| (nh_items !=  nullptr && nh_items->has_data())
	|| (owner_items !=  nullptr && owner_items->has_data());
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (nh_items !=  nullptr && nh_items->has_operation())
	|| (owner_items !=  nullptr && owner_items->has_operation());
}

std::string System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Route-list";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nh-items")
    {
        if(nh_items == nullptr)
        {
            nh_items = std::make_shared<System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems>();
        }
        return nh_items;
    }

    if(child_yang_name == "owner-items")
    {
        if(owner_items == nullptr)
        {
            owner_items = std::make_shared<System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems>();
        }
        return owner_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nh_items != nullptr)
    {
        _children["nh-items"] = nh_items;
    }

    if(owner_items != nullptr)
    {
        _children["owner-items"] = owner_items;
    }

    return _children;
}

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-items" || name == "owner-items" || name == "prefix" || name == "name")
        return true;
    return false;
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NhItems()
    :
    nexthop_list(this, {"owner", "addr", "if_", "vrf"})
{

    yang_name = "nh-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::~NhItems()
{
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nexthop_list.len(); index++)
    {
        if(nexthop_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::has_operation() const
{
    for (std::size_t index=0; index<nexthop_list.len(); index++)
    {
        if(nexthop_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Nexthop-list")
    {
        auto ent_ = std::make_shared<System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList>();
        ent_->parent = this;
        nexthop_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nexthop_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Nexthop-list")
        return true;
    return false;
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::NexthopList()
    :
    owner{YType::str, "owner"},
    addr{YType::str, "addr"},
    if_{YType::str, "if"},
    vrf{YType::str, "vrf"},
    name{YType::str, "name"},
    type{YType::str, "type"}
{

    yang_name = "Nexthop-list"; yang_parent_name = "nh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::~NexthopList()
{
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::has_data() const
{
    if (is_presence_container) return true;
    return owner.is_set
	|| addr.is_set
	|| if_.is_set
	|| vrf.is_set
	|| name.is_set
	|| type.is_set;
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Nexthop-list";
    ADD_KEY_TOKEN(owner, "owner");
    ADD_KEY_TOKEN(addr, "addr");
    ADD_KEY_TOKEN(if_, "if");
    ADD_KEY_TOKEN(vrf, "vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "owner" || name == "addr" || name == "if" || name == "vrf" || name == "name" || name == "type")
        return true;
    return false;
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::OwnerItems()
    :
    routeowner_list(this, {"owner"})
{

    yang_name = "owner-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::~OwnerItems()
{
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<routeowner_list.len(); index++)
    {
        if(routeowner_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::has_operation() const
{
    for (std::size_t index=0; index<routeowner_list.len(); index++)
    {
        if(routeowner_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RouteOwner-list")
    {
        auto ent_ = std::make_shared<System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList>();
        ent_->parent = this;
        routeowner_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : routeowner_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RouteOwner-list")
        return true;
    return false;
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RouteOwnerList()
    :
    owner{YType::str, "owner"},
    name{YType::str, "name"}
        ,
    nh_items(std::make_shared<System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems>())
{
    nh_items->parent = this;

    yang_name = "RouteOwner-list"; yang_parent_name = "owner-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::~RouteOwnerList()
{
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::has_data() const
{
    if (is_presence_container) return true;
    return owner.is_set
	|| name.is_set
	|| (nh_items !=  nullptr && nh_items->has_data());
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (nh_items !=  nullptr && nh_items->has_operation());
}

std::string System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RouteOwner-list";
    ADD_KEY_TOKEN(owner, "owner");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nh-items")
    {
        if(nh_items == nullptr)
        {
            nh_items = std::make_shared<System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems>();
        }
        return nh_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nh_items != nullptr)
    {
        _children["nh-items"] = nh_items;
    }

    return _children;
}

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-items" || name == "owner" || name == "name")
        return true;
    return false;
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NhItems()
    :
    nexthop_list(this, {"owner", "addr", "if_", "vrf"})
{

    yang_name = "nh-items"; yang_parent_name = "RouteOwner-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::~NhItems()
{
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nexthop_list.len(); index++)
    {
        if(nexthop_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::has_operation() const
{
    for (std::size_t index=0; index<nexthop_list.len(); index++)
    {
        if(nexthop_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Nexthop-list")
    {
        auto ent_ = std::make_shared<System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList>();
        ent_->parent = this;
        nexthop_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nexthop_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Nexthop-list")
        return true;
    return false;
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::NexthopList()
    :
    owner{YType::str, "owner"},
    addr{YType::str, "addr"},
    if_{YType::str, "if"},
    vrf{YType::str, "vrf"},
    name{YType::str, "name"},
    type{YType::str, "type"}
{

    yang_name = "Nexthop-list"; yang_parent_name = "nh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::~NexthopList()
{
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::has_data() const
{
    if (is_presence_container) return true;
    return owner.is_set
	|| addr.is_set
	|| if_.is_set
	|| vrf.is_set
	|| name.is_set
	|| type.is_set;
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Nexthop-list";
    ADD_KEY_TOKEN(owner, "owner");
    ADD_KEY_TOKEN(addr, "addr");
    ADD_KEY_TOKEN(if_, "if");
    ADD_KEY_TOKEN(vrf, "vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "owner" || name == "addr" || name == "if" || name == "vrf" || name == "name" || name == "type")
        return true;
    return false;
}

System::ConngItems::ConngItems()
    :
    descr{YType::str, "descr"},
    name{YType::str, "name"}
        ,
    path_items(std::make_shared<System::ConngItems::PathItems>())
{
    path_items->parent = this;

    yang_name = "conng-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ConngItems::~ConngItems()
{
}

bool System::ConngItems::has_data() const
{
    if (is_presence_container) return true;
    return descr.is_set
	|| name.is_set
	|| (path_items !=  nullptr && path_items->has_data());
}

bool System::ConngItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (path_items !=  nullptr && path_items->has_operation());
}

std::string System::ConngItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ConngItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conng-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ConngItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ConngItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-items")
    {
        if(path_items == nullptr)
        {
            path_items = std::make_shared<System::ConngItems::PathItems>();
        }
        return path_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ConngItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_items != nullptr)
    {
        _children["path-items"] = path_items;
    }

    return _children;
}

void System::ConngItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ConngItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ConngItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-items" || name == "descr" || name == "name")
        return true;
    return false;
}

System::ConngItems::PathItems::PathItems()
    :
    pathep_list(this, {"id"})
{

    yang_name = "path-items"; yang_parent_name = "conng-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ConngItems::PathItems::~PathItems()
{
}

bool System::ConngItems::PathItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pathep_list.len(); index++)
    {
        if(pathep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ConngItems::PathItems::has_operation() const
{
    for (std::size_t index=0; index<pathep_list.len(); index++)
    {
        if(pathep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ConngItems::PathItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/conng-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ConngItems::PathItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ConngItems::PathItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ConngItems::PathItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PathEp-list")
    {
        auto ent_ = std::make_shared<System::ConngItems::PathItems::PathEpList>();
        ent_->parent = this;
        pathep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ConngItems::PathItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pathep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ConngItems::PathItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ConngItems::PathItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ConngItems::PathItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PathEp-list")
        return true;
    return false;
}

System::ConngItems::PathItems::PathEpList::PathEpList()
    :
    id{YType::str, "id"},
    nativeencap{YType::str, "nativeEncap"},
    fabricpathdn{YType::str, "fabricPathDn"},
    descr{YType::str, "descr"},
    name{YType::str, "name"}
        ,
    rtfvepdeftopathep_items(std::make_shared<System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems>())
    , rtfvdypathatt_items(std::make_shared<System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems>())
    , rtvsanvsanpathatt_items(std::make_shared<System::ConngItems::PathItems::PathEpList::RtvsanVsanPathAttItems>())
    , rspathtoif_items(std::make_shared<System::ConngItems::PathItems::PathEpList::RspathToIfItems>())
{
    rtfvepdeftopathep_items->parent = this;
    rtfvdypathatt_items->parent = this;
    rtvsanvsanpathatt_items->parent = this;
    rspathtoif_items->parent = this;

    yang_name = "PathEp-list"; yang_parent_name = "path-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ConngItems::PathItems::PathEpList::~PathEpList()
{
}

bool System::ConngItems::PathItems::PathEpList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| nativeencap.is_set
	|| fabricpathdn.is_set
	|| descr.is_set
	|| name.is_set
	|| (rtfvepdeftopathep_items !=  nullptr && rtfvepdeftopathep_items->has_data())
	|| (rtfvdypathatt_items !=  nullptr && rtfvdypathatt_items->has_data())
	|| (rtvsanvsanpathatt_items !=  nullptr && rtvsanvsanpathatt_items->has_data())
	|| (rspathtoif_items !=  nullptr && rspathtoif_items->has_data());
}

bool System::ConngItems::PathItems::PathEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(nativeencap.yfilter)
	|| ydk::is_set(fabricpathdn.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rtfvepdeftopathep_items !=  nullptr && rtfvepdeftopathep_items->has_operation())
	|| (rtfvdypathatt_items !=  nullptr && rtfvdypathatt_items->has_operation())
	|| (rtvsanvsanpathatt_items !=  nullptr && rtvsanvsanpathatt_items->has_operation())
	|| (rspathtoif_items !=  nullptr && rspathtoif_items->has_operation());
}

std::string System::ConngItems::PathItems::PathEpList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/conng-items/path-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ConngItems::PathItems::PathEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PathEp-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ConngItems::PathItems::PathEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (nativeencap.is_set || is_set(nativeencap.yfilter)) leaf_name_data.push_back(nativeencap.get_name_leafdata());
    if (fabricpathdn.is_set || is_set(fabricpathdn.yfilter)) leaf_name_data.push_back(fabricpathdn.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ConngItems::PathItems::PathEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtfvEpDefToPathEp-items")
    {
        if(rtfvepdeftopathep_items == nullptr)
        {
            rtfvepdeftopathep_items = std::make_shared<System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems>();
        }
        return rtfvepdeftopathep_items;
    }

    if(child_yang_name == "rtfvDyPathAtt-items")
    {
        if(rtfvdypathatt_items == nullptr)
        {
            rtfvdypathatt_items = std::make_shared<System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems>();
        }
        return rtfvdypathatt_items;
    }

    if(child_yang_name == "rtvsanVsanPathAtt-items")
    {
        if(rtvsanvsanpathatt_items == nullptr)
        {
            rtvsanvsanpathatt_items = std::make_shared<System::ConngItems::PathItems::PathEpList::RtvsanVsanPathAttItems>();
        }
        return rtvsanvsanpathatt_items;
    }

    if(child_yang_name == "rspathToIf-items")
    {
        if(rspathtoif_items == nullptr)
        {
            rspathtoif_items = std::make_shared<System::ConngItems::PathItems::PathEpList::RspathToIfItems>();
        }
        return rspathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ConngItems::PathItems::PathEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtfvepdeftopathep_items != nullptr)
    {
        _children["rtfvEpDefToPathEp-items"] = rtfvepdeftopathep_items;
    }

    if(rtfvdypathatt_items != nullptr)
    {
        _children["rtfvDyPathAtt-items"] = rtfvdypathatt_items;
    }

    if(rtvsanvsanpathatt_items != nullptr)
    {
        _children["rtvsanVsanPathAtt-items"] = rtvsanvsanpathatt_items;
    }

    if(rspathtoif_items != nullptr)
    {
        _children["rspathToIf-items"] = rspathtoif_items;
    }

    return _children;
}

void System::ConngItems::PathItems::PathEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nativeEncap")
    {
        nativeencap = value;
        nativeencap.value_namespace = name_space;
        nativeencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabricPathDn")
    {
        fabricpathdn = value;
        fabricpathdn.value_namespace = name_space;
        fabricpathdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ConngItems::PathItems::PathEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "nativeEncap")
    {
        nativeencap.yfilter = yfilter;
    }
    if(value_path == "fabricPathDn")
    {
        fabricpathdn.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ConngItems::PathItems::PathEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtfvEpDefToPathEp-items" || name == "rtfvDyPathAtt-items" || name == "rtvsanVsanPathAtt-items" || name == "rspathToIf-items" || name == "id" || name == "nativeEncap" || name == "fabricPathDn" || name == "descr" || name == "name")
        return true;
    return false;
}

System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::RtfvEpDefToPathEpItems()
    :
    rtfvepdeftopathep_list(this, {"tdn"})
{

    yang_name = "rtfvEpDefToPathEp-items"; yang_parent_name = "PathEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::~RtfvEpDefToPathEpItems()
{
}

bool System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvepdeftopathep_list.len(); index++)
    {
        if(rtfvepdeftopathep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvepdeftopathep_list.len(); index++)
    {
        if(rtfvepdeftopathep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvEpDefToPathEp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvEpDefToPathEp-list")
    {
        auto ent_ = std::make_shared<System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::RtFvEpDefToPathEpList>();
        ent_->parent = this;
        rtfvepdeftopathep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfvepdeftopathep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvEpDefToPathEp-list")
        return true;
    return false;
}

System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::RtFvEpDefToPathEpList::RtFvEpDefToPathEpList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvEpDefToPathEp-list"; yang_parent_name = "rtfvEpDefToPathEp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::RtFvEpDefToPathEpList::~RtFvEpDefToPathEpList()
{
}

bool System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::RtFvEpDefToPathEpList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::RtFvEpDefToPathEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::RtFvEpDefToPathEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvEpDefToPathEp-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::RtFvEpDefToPathEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::RtFvEpDefToPathEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::RtFvEpDefToPathEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::RtFvEpDefToPathEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::RtFvEpDefToPathEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::RtFvEpDefToPathEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}


}
}

